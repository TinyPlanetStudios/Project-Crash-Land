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
	
	public function new(anglea:Float, angleb:Float, radiala:Float, radialb:Float, dropThrough:Bool)
	{
		radialStart = radiala;
		radialEnd = radialb;
		
		angleStart = anglea;
		angleEnd = angleb;
		
		DropThrough = dropThrough;
	}
	
}