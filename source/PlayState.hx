package;

import entity.Cover;
import entity.Player;
import flixel.FlxSprite;
import flixel.FlxState;
import haxe.ds.Vector;

class PlayState extends FlxState
{
	public var Planet:FlxSprite;
	
	public var player:Player;
	
	public var Covers:Array<Cover>;
	
	override public function create():Void
	{
		Planet = new FlxSprite(365, 85, AssetPaths.planet__png);
		add(Planet);
		
		player = new Player(0, 0);
		add(player);
		
		Covers = new Array<Cover>();
		Covers.push(new Cover(86, 100, 0.89 * (Global.PlanetSize.x / 2), Global.PlanetSize.x / 2 + 100, AssetPaths.cover90T1__png));
		
		for(a in Covers)
		{
			add(a);
		}
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		
		//fade out covers if needed
		for ( a in Covers)
		{
			trace("player angle must be between " + Std.string(a.radialEnd) + " and " + Std.string(a.radialStart) + " is " + Std.string(player.radialPos));
			if (player.radialPos < a.radialEnd && player.radialPos > a.radialStart
			 && player.anglePos < a.angleEnd && player.anglePos > a.angleStart)
			{
				a.visible = false;
			}
			else
			{
				a.visible = true;
			}
		}
	}
}