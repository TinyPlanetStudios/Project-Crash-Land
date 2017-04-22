package;

import entity.Player;
import flixel.FlxSprite;
import flixel.FlxState;

class PlayState extends FlxState
{
	public var Planet:FlxSprite;
	
	public var player:Player;
	
	override public function create():Void
	{
		Planet = new FlxSprite(365, 85, AssetPaths.planet__png);
		add(Planet);
		
		player = new Player(0, 0);
		add(player);
		
		add(new FlxSprite(Global.PlanetPos.x, Global.PlanetPos.y));
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}