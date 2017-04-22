package;

import entity.Cover;
import entity.Interactable;
import entity.Player;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
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
	
	override public function create():Void
	{	
		textBox = new FlxSprite(0, 520);
		textBox.makeGraphic(1280, 200, FlxColor.LIME);
		
		text = new FlxText(0, 530, 1280, "test", 32);
		text.color = FlxColor.CYAN;
		text.alignment = CENTER;
		
		player = new Player(0, 0);
		
		//----------interactables (behind planet)
		Interactables = new Array<Interactable>();
		var holder:Interactable = new Interactable(-30, -Global.PlanetSize.y/2 - 45, AssetPaths.rocket__png, 0, 10, Global.Surface-10, 100000, 
			function()
			{
				openMessage("I don't think this is how it should look.\nOhh geez it's getting fuel EVERYWHERE, I really should fix this.");
			});
		holder.angle = 160;
		Interactables.push(holder);
			
		Planet = new FlxSprite(365, 85, AssetPaths.planet__png);
		add(Planet);
		add(player);
		
		//-----------covers
		Covers = new Array<Cover>();
		Covers.push(new Cover(60, 100, 5, Global.Surface-1, AssetPaths.coverWrenchT1__png));
		
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
		for ( a in Interactables)
		{
			if (player.radialPos < a.radialEnd && player.radialPos > a.radialStart
				&& player.anglePos <= a.angleEnd && player.anglePos >= a.angleStart && FlxG.keys.anyJustPressed([ENTER]))
			{
				trace("ach");
				a.Callback();
			}
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