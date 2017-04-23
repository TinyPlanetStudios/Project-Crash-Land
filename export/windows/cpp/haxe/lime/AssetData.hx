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
			path.set ("assets/images/Bedroom.xcf", "assets/images/Bedroom.xcf");
			type.set ("assets/images/Bedroom.xcf", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/BedroomCover.png", "assets/images/BedroomCover.png");
			type.set ("assets/images/BedroomCover.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/BedroomInterior.png", "assets/images/BedroomInterior.png");
			type.set ("assets/images/BedroomInterior.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/boombox.png", "assets/images/boombox.png");
			type.set ("assets/images/boombox.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/codedoor.png", "assets/images/codedoor.png");
			type.set ("assets/images/codedoor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/cover90T1.png", "assets/images/cover90T1.png");
			type.set ("assets/images/cover90T1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/cover90T2.png", "assets/images/cover90T2.png");
			type.set ("assets/images/cover90T2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/coverwrench2.png", "assets/images/coverwrench2.png");
			type.set ("assets/images/coverwrench2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/coverWrenchT1.png", "assets/images/coverWrenchT1.png");
			type.set ("assets/images/coverWrenchT1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/empty.png", "assets/images/empty.png");
			type.set ("assets/images/empty.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/fin.png", "assets/images/fin.png");
			type.set ("assets/images/fin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/fuelCell.png", "assets/images/fuelCell.png");
			type.set ("assets/images/fuelCell.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/FUELCELLBG.png", "assets/images/FUELCELLBG.png");
			type.set ("assets/images/FUELCELLBG.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/keydoor.png", "assets/images/keydoor.png");
			type.set ("assets/images/keydoor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/keypad.png", "assets/images/keypad.png");
			type.set ("assets/images/keypad.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/keypad.xcf", "assets/images/keypad.xcf");
			type.set ("assets/images/keypad.xcf", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/mineCover1.png", "assets/images/mineCover1.png");
			type.set ("assets/images/mineCover1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/MineCover2.png", "assets/images/MineCover2.png");
			type.set ("assets/images/MineCover2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/minecover3.png", "assets/images/minecover3.png");
			type.set ("assets/images/minecover3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/minecover4.png", "assets/images/minecover4.png");
			type.set ("assets/images/minecover4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/MineEntrance.xcf", "assets/images/MineEntrance.xcf");
			type.set ("assets/images/MineEntrance.xcf", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/MineEntranceCover.png", "assets/images/MineEntranceCover.png");
			type.set ("assets/images/MineEntranceCover.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/MineEntranceInterior.png", "assets/images/MineEntranceInterior.png");
			type.set ("assets/images/MineEntranceInterior.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/MineEntranceInteriorPostDoor.png", "assets/images/MineEntranceInteriorPostDoor.png");
			type.set ("assets/images/MineEntranceInteriorPostDoor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/nosecap.png", "assets/images/nosecap.png");
			type.set ("assets/images/nosecap.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/openeing.png", "assets/images/openeing.png");
			type.set ("assets/images/openeing.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/planet.png", "assets/images/planet.png");
			type.set ("assets/images/planet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/planet.xcf", "assets/images/planet.xcf");
			type.set ("assets/images/planet.xcf", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/planetpuppet.png", "assets/images/planetpuppet.png");
			type.set ("assets/images/planetpuppet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/player.png", "assets/images/player.png");
			type.set ("assets/images/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/rocket.png", "assets/images/rocket.png");
			type.set ("assets/images/rocket.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/rocketPuppet.png", "assets/images/rocketPuppet.png");
			type.set ("assets/images/rocketPuppet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/rockWall.png", "assets/images/rockWall.png");
			type.set ("assets/images/rockWall.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/rung.png", "assets/images/rung.png");
			type.set ("assets/images/rung.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/table.png", "assets/images/table.png");
			type.set ("assets/images/table.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tape.png", "assets/images/tape.png");
			type.set ("assets/images/tape.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/trapdoorbg.png", "assets/images/trapdoorbg.png");
			type.set ("assets/images/trapdoorbg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/use.png", "assets/images/use.png");
			type.set ("assets/images/use.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/wrench.png", "assets/images/wrench.png");
			type.set ("assets/images/wrench.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/music.ogg", "assets/music/music.ogg");
			type.set ("assets/music/music.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/get.wav", "assets/sounds/get.wav");
			type.set ("assets/sounds/get.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/gj.wav", "assets/sounds/gj.wav");
			type.set ("assets/sounds/gj.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/gj2.ogg", "assets/sounds/gj2.ogg");
			type.set ("assets/sounds/gj2.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/gj2.wav", "assets/sounds/gj2.wav");
			type.set ("assets/sounds/gj2.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/hit.wav", "assets/sounds/hit.wav");
			type.set ("assets/sounds/hit.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/kaboom.ogg", "assets/sounds/kaboom.ogg");
			type.set ("assets/sounds/kaboom.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/kaboom.wav", "assets/sounds/kaboom.wav");
			type.set ("assets/sounds/kaboom.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/song_20170423_095337_718.mid", "assets/sounds/song_20170423_095337_718.mid");
			type.set ("assets/sounds/song_20170423_095337_718.mid", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/takeoff.ogg", "assets/sounds/takeoff.ogg");
			type.set ("assets/sounds/takeoff.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/takeoff.wav", "assets/sounds/takeoff.wav");
			type.set ("assets/sounds/takeoff.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/tk1.wav", "assets/sounds/tk1.wav");
			type.set ("assets/sounds/tk1.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
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
