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
	private var gravity:Int = 160;
	private var speed:Int = -60;
	
	public var anglePos:Float = 20;
	public var radialPos:Float = 0;
	public var angleVel:Float = 0;
	public var radialVel:Float = 0;
	
	public var IgnoreGravity:Bool = false;
	
	public var GravZones:Array<GravZone>;
	public var CurrentZone:GravZone;
	public var RockWall:GravZone;
	
	public var Ladders:Array<Ladder>;
	
	
	
	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, AssetPaths.player__png);
		Global.Surface = Global.PlanetSize.x / 2;
		radialPos = Global.Surface + 20;
		
		Ladders = new Array<Ladder>();
		Ladders.push(new Ladder(90, 190, Global.Surface));
		
		GravZones = new Array<GravZone>();
		//wrench place
		GravZones.push(new GravZone(85, 95, 210, Global.PlanetSize.x / 2 + 20, true, true, true, false));
		GravZones.push(new GravZone(63, 85, 190, 210, false, false, true, true));
		GravZones.push(new GravZone(85, 95, 190, 210, false, false, false, false));
		RockWall = new GravZone(95, 100, 190, 210, false, true, false, true);
		GravZones.push(RockWall);
		
		CurrentZone = new GravZone(-1, 361, Global.Surface, Global.Surface+100, false, false, false, true);
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		//gravity
		if (!IgnoreGravity)
		{
			radialVel -= gravity * elapsed;
		}
		var oldRadialVel = radialVel;
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
		if (angleVel < 0 && anglePos + angleVel*elapsed < CurrentZone.angleStart && CurrentZone.RightWall)
		{
			angleVel = 0;
		}
		else if (angleVel > 0 && anglePos + angleVel*elapsed > CurrentZone.angleEnd && CurrentZone.LeftWall)
		{
			angleVel = 0;
		}
		
		//jumping
		if ((radialVel == 0 || IgnoreGravity) && FlxG.keys.anyJustPressed([SPACE]))
		{
			trace("jump");
			radialVel = 100;
			radialPos += 2;
		}
		
		//ladders
		trace(OnLadder());
		if (FlxG.keys.anyPressed([UP]) && OnLadder())
		{
			radialPos += 2;
			if (radialVel < 20)
			{
				radialVel = 20;
			}
			IgnoreGravity = true;
		}
		else
		{
			IgnoreGravity = false;
		}
		
		
		//ceilings
		if (radialPos + radialVel * elapsed > CurrentZone.radialEnd && CurrentZone.Ceiling)
		{
			radialVel = 0;
			radialPos = CurrentZone.radialEnd;
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
		anglePos += angleVel * elapsed;
	}
	
	public function getCurrentGravZone():GravZone
	{
		for(a in GravZones)
		{
			if (radialPos >= a.radialStart && radialPos <= a.radialEnd
				&& anglePos <= a.angleEnd && anglePos >= a.angleStart)
			{
				return a;	
			}
		}
		if (radialPos > CurrentZone.radialEnd)
		{
			return new GravZone(-1, 361, Global.Surface, Global.Surface+100, false, false, false, true);
		}
		return CurrentZone;
	}
	
	public function OnLadder():Bool
	{
		for (a in Ladders)
		{
			if (radialPos >= a.radialStart && radialPos <= a.radialEnd
				&& anglePos <= a.Angle+2 && anglePos >= a.Angle-2)
				{
					return true;
				}
		}
		return false;
	}
}