package entity;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.math.FlxPoint;

/**
 * ...
 * @author Grimmr (Tiny Planet Studios)
 */
class Ladder extends FlxTypedGroup<FlxSprite>
{
	public var radialStart:Float;
	public var radialEnd:Float;
	public var Angle:Float;
	
	public function new(angleInp:Float, radiala:Float, radialb:Float) 
	{
		super();
		radialStart = radiala;
		radialEnd = radialb;
		
		Angle = angleInp + 2;
		
		var a = radialStart;
		//add rungs
		while (a < radialEnd)
		{
			var holder:FlxSprite = new FlxSprite(0, 0, AssetPaths.rung__png);
			var Transform:FlxPoint = new FlxPoint(0, a + holder.height/2);
			Transform.rotate(FlxPoint.weak(0, 0), -Angle);
			holder.setPosition(Global.PlanetPos.x - Transform.x - holder.width / 2, Global.PlanetPos.y - Transform.y - holder.height / 2);
			holder.angle = -Angle;
			add(holder);
			a += 10;
		}
	}
	
	
}