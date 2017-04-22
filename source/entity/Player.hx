package entity;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author Grimmr (Tiny Planet Studios)
 */
class Player extends FlxSprite 
{
	private var gravity:Int = 100;
	private var speed:Int = -30;
	
	public var anglePos:Float = 20;
	public var radialPos:Float = 0;
	public var angleVel:Float = 0;
	public var radialVel:Float = 0;
	
	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, AssetPaths.player__png);
		Global.Surface = Global.PlanetSize.x / 2 + width / 2;
		radialPos = Global.Surface + 20;
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		//gravity
		radialVel -= gravity * elapsed;
		if (radialPos - radialVel * elapsed <= Global.Surface + 1)
		{
			radialVel = 0;
			radialPos = Global.Surface;
		}
		
		//set x,y
		var Transform:FlxPoint = new FlxPoint(0, radialPos);
		Transform.rotate(FlxPoint.weak(0, 0), -anglePos);
		setPosition(Global.PlanetPos.x - Transform.x - width / 2, Global.PlanetPos.y - Transform.y - width / 2);
		
		//movement
		if (FlxG.keys.anyPressed([LEFT, A]))
		{
			angleVel = -speed;
		}
		else if (FlxG.keys.anyPressed([RIGHT, D]))
		{
			angleVel = speed;
		}
		else
		{
			angleVel = 0;
		}
		
		//jumping
		if (radialVel == 0 && FlxG.keys.anyJustPressed([SPACE]))
		{
			trace("jump");
			radialVel = 100;
			radialPos += 2;
		}
		
		//update radial and angle values
		radialPos += radialVel * elapsed;
		anglePos += angleVel * elapsed;
	}
}