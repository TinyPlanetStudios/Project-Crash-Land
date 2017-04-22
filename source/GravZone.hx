package;

/**
 * ...
 * @author Grimmr (Tiny Planet Studios)
 */
class GravZone 
{
	public var radialStart:Float;
	public var radialEnd:Float;
	
	public var angleStart:Float;
	public var angleEnd:Float;
	
	public var DropThrough:Bool;
	public var LeftWall:Bool;
	public var RightWall:Bool;
	public var Ceiling:Bool;
	
	public function new(anglea:Float, angleb:Float, radiala:Float, radialb:Float, dropThrough:Bool, lwall:Bool, rwall:Bool, ceil:Bool)
	{
		radialStart = radiala;
		radialEnd = radialb;
		
		angleStart = anglea;
		angleEnd = angleb;
		
		DropThrough = dropThrough;
		LeftWall = lwall;
		RightWall = rwall;
		Ceiling = ceil;
	}
	
}