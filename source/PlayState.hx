package;

import entity.Cover;
import entity.Interactable;
import entity.Player;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import haxe.ds.Vector;

class PlayState extends FlxState
{
	public var Planet:FlxSprite;
	
	public var player:Player;
	
	public var Covers:Array<Cover>;
	public var Interactables:Array<Interactable>;
	
	public var textBox:FlxSprite;
	public var text:FlxText;
	
	public var useIcon:FlxSprite;
	
	override public function create():Void
	{	
		textBox = new FlxSprite(0, 520);
		textBox.makeGraphic(1280, 200, FlxColor.LIME);
		
		text = new FlxText(0, 530, 1280, "test", 32);
		text.color = FlxColor.RED;
		text.alignment = CENTER;
		
		player = new Player(0, 0);
		
		//----------interactables (behind planet)
		Interactables = new Array<Interactable>();
		var holder:Interactable = new Interactable(-30, -Global.PlanetSize.y/2 - 45, AssetPaths.rocket__png, 0, 10, Global.Surface-10, 100000, 
			function()
			{
				if (Global.Wrench == 0)
				{
					openMessage("I don't think this is how it should look.\nOhh geez it's getting fuel EVERYWHERE, I really should fix this.\n A wrench and some tape should deal with the leak.");
				}
				else if (Global.Wrench == 1)
				{
					Global.Wrench = 2;
					openMessage("Okay. I've undone some of the damage but this hunk of junk isn't going anywhere untill I replace the fuel cell.");
				}
			});
		holder.angle = 160;
		Interactables.push(holder);
			
		Planet = new FlxSprite(365, 85, AssetPaths.planet__png);
		add(Planet);
		
		//interactables (infront of planet)
		holder = new Interactable( -Global.PlanetSize.x / 2 + 92, -Global.PlanetSize.y/2 + 181, AssetPaths.table__png, 60, 65, 189, Global.Surface-10, 
			function()
			{
				if (Global.Wrench == 0)
				{
					openSubState(new WrenchPickup(this));
					Global.Wrench = 1;
				}
				else
				{
					openMessage("I already got the wrench and tape.");
				}
			});
		Interactables.push(holder);
		
		//add ladders
		for (a in player.Ladders)
		{
			for (b in a.members)
			{
				add(b);
			}
		}
		
		//add player
		add(player);
		
		//use icon
		useIcon = new FlxSprite(0, 0, AssetPaths.use__png);
		
		//-----------covers
		Covers = new Array<Cover>();
		Covers.push(new Cover(60, 100, 189, Global.Surface-1, AssetPaths.coverWrenchT1__png));
		
		for(a in Covers)
		{
			add(a);
		}
		
		openMessage("ohh no I broke my ship!");
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		
		//keep use icon with player
		var Transform:FlxPoint = new FlxPoint(0, player.radialPos + (player.width*3) / 2);
		Transform.rotate(FlxPoint.weak(0, 0), -player.anglePos);
		useIcon.angle = -player.anglePos;
		useIcon.setPosition(Global.PlanetPos.x - Transform.x - player.width / 2, Global.PlanetPos.y - Transform.y - player.width / 2);
		
		//fade out covers if needed
		for ( a in Covers)
		{
			if (player.radialPos < a.radialEnd && player.radialPos > a.radialStart
				&& player.anglePos <= a.angleEnd && player.anglePos >= a.angleStart)
			{
				a.visible = false;
			}
			else
			{
				a.visible = true;
			}
		}
		
		//interactions
		var interacion:Bool = false;
		for ( a in Interactables)
		{
			if (player.radialPos < a.radialEnd && player.radialPos > a.radialStart
				&& player.anglePos <= a.angleEnd && player.anglePos >= a.angleStart)
			{
				interacion = true;
				if ( FlxG.keys.anyJustPressed([ENTER]))
				{
					a.Callback();
				}
			}
		}
		if (interacion)
		{
			add(useIcon);
		}
		else
		{
			remove(useIcon);
		}
		
		//handle text
		if (text.text != "" && FlxG.mouse.justPressed)
		{
			text.text = "";
			Global.Halt = false;
			remove(text);
			remove(textBox);
		}
	}
	
	public function openMessage(m:String)
	{
		text.text = m;
		text.y = (200 - text.height) / 2 + 520;
		Global.Halt = true;
		add(textBox);
		add(text);
	}
}