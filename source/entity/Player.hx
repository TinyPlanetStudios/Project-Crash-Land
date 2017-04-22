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
	private var gravity:Int = 80;
	private var speed:Int = -60;
	
	public var anglePos:Float = 20;
	public var radialPos:Float = 0;
	public var angleVel:Float = 0;
	public var radialVel:Float = 0;
	
	public var GravZones:Array<GravZone>;
	public var CurrentZone:GravZone;
	
	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, AssetPaths.player__png);
		Global.Surface = Global.PlanetSize.x / 2;
		radialPos = Global.Surface + 20;
		
		GravZones = new Array<GravZone>();
		GravZones.push(new GravZone(85, 95, 235, Global.PlanetSize.x / 2 + 20, true));
		GravZones.push(new GravZone(60, 100, 190, 235, false));
		
		CurrentZone = new GravZone(0, 0, Global.Surface, Global.Surface, false); 
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		//gravity
		radialVel -= gravity * elapsed;
		if (radialPos - radialVel * elapsed <= CurrentZone.radialStart + 1 && !CurrentZone.DropThrough)
		{
			radialVel = 0;
			radialPos = CurrentZone.radialStart;
		}
		
		CurrentZone = getCurrentGravZone();
		
		//set x,y
		var Transform:FlxPoint = new FlxPoint(0, radialPos + width/2);
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
		
		//walls
		if (angleVel < 0 && anglePos + angleVel*elapsed < CurrentZone.angleStart)
		{
			angleVel = 0;
		}
		else if (angleVel > 0 && anglePos + angleVel*elapsed > CurrentZone.angleEnd)
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
		
		//paused?
		if (Global.Halt)
		{
			angleVel = 0;
		}
		
		//update radial and angle values
		radialPos += radialVel * elapsed;
		if (anglePos < 0)
		{
			anglePos += 360;
		}
		else if (anglePos > 360)
		{
			anglePos -= 360;
		}
		trace(anglePos);
		anglePos += angleVel * elapsed;
	}
	
	public function getCurrentGravZone():GravZone
	{
		for(a in GravZones)
		{
			if (radialPos >= a.radialStart && radialPos <= a.radialEnd
				&& anglePos <= a.angleEnd && anglePos >= a.angleStart)
			{
				trace("new zone");
				return a;	
			}
		}
		if (radialPos > CurrentZone.radialEnd)
		{
			return new GravZone(-1, 361, Global.Surface, Global.Surface, false);
		}
		return CurrentZone;
	}
}