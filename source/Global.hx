package;
import flixel.math.FlxPoint;

/**
 * ...
 * @author Grimmr (Tiny Planet Studios)
 */
class Global 
{
	static public var PlanetPos:FlxPoint;
	static public var PlanetSize:FlxPoint;
	static public var Surface:Float;
	
	static public function init() 
	{
		PlanetPos = new FlxPoint(640, 360);
		PlanetSize = new FlxPoint(550, 550);
	}
	
	static public function modCiel(x:Float):Float
	{
		var sighn:Float = Math.abs(x) / x;
		return sighn * Math.ceil(Math.abs(x)); 
	}
}