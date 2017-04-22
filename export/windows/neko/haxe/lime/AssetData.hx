package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/cover90T1.png", "assets/images/cover90T1.png");
			type.set ("assets/images/cover90T1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/cover90T2.png", "assets/images/cover90T2.png");
			type.set ("assets/images/cover90T2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/coverWrenchT1.png", "assets/images/coverWrenchT1.png");
			type.set ("assets/images/coverWrenchT1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/planet.png", "assets/images/planet.png");
			type.set ("assets/images/planet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/planet.xcf", "assets/images/planet.xcf");
			type.set ("assets/images/planet.xcf", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/player.png", "assets/images/player.png");
			type.set ("assets/images/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/rocket.png", "assets/images/rocket.png");
			type.set ("assets/images/rocket.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/rung.png", "assets/images/rung.png");
			type.set ("assets/images/rung.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/table.png", "assets/images/table.png");
			type.set ("assets/images/table.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tape.png", "assets/images/tape.png");
			type.set ("assets/images/tape.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/use.png", "assets/images/use.png");
			type.set ("assets/images/use.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/wrench.png", "assets/images/wrench.png");
			type.set ("assets/images/wrench.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/get.wav", "assets/sounds/get.wav");
			type.set ("assets/sounds/get.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/kaboom.wav", "assets/sounds/kaboom.wav");
			type.set ("assets/sounds/kaboom.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
