package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.net.HTTPRequest;
import lime.system.CFFI;
import lime.text.Font;
import lime.utils.Bytes;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		
		#end
		
		#if flash
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		className.set ("assets/images/Bedroom.xcf", __ASSET__assets_images_bedroom_xcf);
		type.set ("assets/images/Bedroom.xcf", AssetType.BINARY);
		className.set ("assets/images/BedroomCover.png", __ASSET__assets_images_bedroomcover_png);
		type.set ("assets/images/BedroomCover.png", AssetType.IMAGE);
		className.set ("assets/images/BedroomInterior.png", __ASSET__assets_images_bedroominterior_png);
		type.set ("assets/images/BedroomInterior.png", AssetType.IMAGE);
		className.set ("assets/images/boombox.png", __ASSET__assets_images_boombox_png);
		type.set ("assets/images/boombox.png", AssetType.IMAGE);
		className.set ("assets/images/codedoor.png", __ASSET__assets_images_codedoor_png);
		type.set ("assets/images/codedoor.png", AssetType.IMAGE);
		className.set ("assets/images/cover90T1.png", __ASSET__assets_images_cover90t1_png);
		type.set ("assets/images/cover90T1.png", AssetType.IMAGE);
		className.set ("assets/images/cover90T2.png", __ASSET__assets_images_cover90t2_png);
		type.set ("assets/images/cover90T2.png", AssetType.IMAGE);
		className.set ("assets/images/coverwrench2.png", __ASSET__assets_images_coverwrench2_png);
		type.set ("assets/images/coverwrench2.png", AssetType.IMAGE);
		className.set ("assets/images/coverWrenchT1.png", __ASSET__assets_images_coverwrencht1_png);
		type.set ("assets/images/coverWrenchT1.png", AssetType.IMAGE);
		className.set ("assets/images/empty.png", __ASSET__assets_images_empty_png);
		type.set ("assets/images/empty.png", AssetType.IMAGE);
		className.set ("assets/images/fin.png", __ASSET__assets_images_fin_png);
		type.set ("assets/images/fin.png", AssetType.IMAGE);
		className.set ("assets/images/fuelCell.png", __ASSET__assets_images_fuelcell_png);
		type.set ("assets/images/fuelCell.png", AssetType.IMAGE);
		className.set ("assets/images/FUELCELLBG.png", __ASSET__assets_images_fuelcellbg_png);
		type.set ("assets/images/FUELCELLBG.png", AssetType.IMAGE);
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		className.set ("assets/images/keydoor.png", __ASSET__assets_images_keydoor_png);
		type.set ("assets/images/keydoor.png", AssetType.IMAGE);
		className.set ("assets/images/keypad.png", __ASSET__assets_images_keypad_png);
		type.set ("assets/images/keypad.png", AssetType.IMAGE);
		className.set ("assets/images/keypad.xcf", __ASSET__assets_images_keypad_xcf);
		type.set ("assets/images/keypad.xcf", AssetType.BINARY);
		className.set ("assets/images/mineCover1.png", __ASSET__assets_images_minecover1_png);
		type.set ("assets/images/mineCover1.png", AssetType.IMAGE);
		className.set ("assets/images/MineCover2.png", __ASSET__assets_images_minecover2_png);
		type.set ("assets/images/MineCover2.png", AssetType.IMAGE);
		className.set ("assets/images/minecover3.png", __ASSET__assets_images_minecover3_png);
		type.set ("assets/images/minecover3.png", AssetType.IMAGE);
		className.set ("assets/images/minecover4.png", __ASSET__assets_images_minecover4_png);
		type.set ("assets/images/minecover4.png", AssetType.IMAGE);
		className.set ("assets/images/MineEntrance.xcf", __ASSET__assets_images_mineentrance_xcf);
		type.set ("assets/images/MineEntrance.xcf", AssetType.BINARY);
		className.set ("assets/images/MineEntranceCover.png", __ASSET__assets_images_mineentrancecover_png);
		type.set ("assets/images/MineEntranceCover.png", AssetType.IMAGE);
		className.set ("assets/images/MineEntranceInterior.png", __ASSET__assets_images_mineentranceinterior_png);
		type.set ("assets/images/MineEntranceInterior.png", AssetType.IMAGE);
		className.set ("assets/images/MineEntranceInteriorPostDoor.png", __ASSET__assets_images_mineentranceinteriorpostdoor_png);
		type.set ("assets/images/MineEntranceInteriorPostDoor.png", AssetType.IMAGE);
		className.set ("assets/images/nosecap.png", __ASSET__assets_images_nosecap_png);
		type.set ("assets/images/nosecap.png", AssetType.IMAGE);
		className.set ("assets/images/openeing.png", __ASSET__assets_images_openeing_png);
		type.set ("assets/images/openeing.png", AssetType.IMAGE);
		className.set ("assets/images/planet.png", __ASSET__assets_images_planet_png);
		type.set ("assets/images/planet.png", AssetType.IMAGE);
		className.set ("assets/images/planet.xcf", __ASSET__assets_images_planet_xcf);
		type.set ("assets/images/planet.xcf", AssetType.BINARY);
		className.set ("assets/images/planetpuppet.png", __ASSET__assets_images_planetpuppet_png);
		type.set ("assets/images/planetpuppet.png", AssetType.IMAGE);
		className.set ("assets/images/player.png", __ASSET__assets_images_player_png);
		type.set ("assets/images/player.png", AssetType.IMAGE);
		className.set ("assets/images/rocket.png", __ASSET__assets_images_rocket_png);
		type.set ("assets/images/rocket.png", AssetType.IMAGE);
		className.set ("assets/images/rocketPuppet.png", __ASSET__assets_images_rocketpuppet_png);
		type.set ("assets/images/rocketPuppet.png", AssetType.IMAGE);
		className.set ("assets/images/rockWall.png", __ASSET__assets_images_rockwall_png);
		type.set ("assets/images/rockWall.png", AssetType.IMAGE);
		className.set ("assets/images/rung.png", __ASSET__assets_images_rung_png);
		type.set ("assets/images/rung.png", AssetType.IMAGE);
		className.set ("assets/images/table.png", __ASSET__assets_images_table_png);
		type.set ("assets/images/table.png", AssetType.IMAGE);
		className.set ("assets/images/tape.png", __ASSET__assets_images_tape_png);
		type.set ("assets/images/tape.png", AssetType.IMAGE);
		className.set ("assets/images/trapdoorbg.png", __ASSET__assets_images_trapdoorbg_png);
		type.set ("assets/images/trapdoorbg.png", AssetType.IMAGE);
		className.set ("assets/images/use.png", __ASSET__assets_images_use_png);
		type.set ("assets/images/use.png", AssetType.IMAGE);
		className.set ("assets/images/wrench.png", __ASSET__assets_images_wrench_png);
		type.set ("assets/images/wrench.png", AssetType.IMAGE);
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		className.set ("assets/music/music.ogg", __ASSET__assets_music_music_ogg);
		type.set ("assets/music/music.ogg", AssetType.MUSIC);
		className.set ("assets/sounds/get.wav", __ASSET__assets_sounds_get_wav);
		type.set ("assets/sounds/get.wav", AssetType.SOUND);
		className.set ("assets/sounds/gj.wav", __ASSET__assets_sounds_gj_wav);
		type.set ("assets/sounds/gj.wav", AssetType.SOUND);
		className.set ("assets/sounds/gj2.ogg", __ASSET__assets_sounds_gj2_ogg);
		type.set ("assets/sounds/gj2.ogg", AssetType.SOUND);
		className.set ("assets/sounds/gj2.wav", __ASSET__assets_sounds_gj2_wav);
		type.set ("assets/sounds/gj2.wav", AssetType.SOUND);
		className.set ("assets/sounds/hit.wav", __ASSET__assets_sounds_hit_wav);
		type.set ("assets/sounds/hit.wav", AssetType.SOUND);
		className.set ("assets/sounds/kaboom.ogg", __ASSET__assets_sounds_kaboom_ogg);
		type.set ("assets/sounds/kaboom.ogg", AssetType.SOUND);
		className.set ("assets/sounds/kaboom.wav", __ASSET__assets_sounds_kaboom_wav);
		type.set ("assets/sounds/kaboom.wav", AssetType.SOUND);
		className.set ("assets/sounds/song_20170423_095337_718.mid", __ASSET__assets_sounds_song_20170423_095337_718_mid);
		type.set ("assets/sounds/song_20170423_095337_718.mid", AssetType.BINARY);
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		className.set ("assets/sounds/takeoff.ogg", __ASSET__assets_sounds_takeoff_ogg);
		type.set ("assets/sounds/takeoff.ogg", AssetType.SOUND);
		className.set ("assets/sounds/takeoff.wav", __ASSET__assets_sounds_takeoff_wav);
		type.set ("assets/sounds/takeoff.wav", AssetType.SOUND);
		className.set ("assets/sounds/tk1.wav", __ASSET__assets_sounds_tk1_wav);
		type.set ("assets/sounds/tk1.wav", AssetType.SOUND);
		className.set ("flixel/sounds/beep.ogg", __ASSET__flixel_sounds_beep_ogg);
		type.set ("flixel/sounds/beep.ogg", AssetType.SOUND);
		className.set ("flixel/sounds/flixel.ogg", __ASSET__flixel_sounds_flixel_ogg);
		type.set ("flixel/sounds/flixel.ogg", AssetType.SOUND);
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/Bedroom.xcf";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/BedroomCover.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/BedroomInterior.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/boombox.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/codedoor.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/cover90T1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/cover90T2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/coverwrench2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/coverWrenchT1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/empty.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/fin.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/fuelCell.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/FUELCELLBG.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/images-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/keydoor.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/keypad.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/keypad.xcf";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/mineCover1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MineCover2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/minecover3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/minecover4.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MineEntrance.xcf";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/MineEntranceCover.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MineEntranceInterior.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MineEntranceInteriorPostDoor.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/nosecap.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/openeing.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/planet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/planet.xcf";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/planetpuppet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/player.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/rocket.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/rocketPuppet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/rockWall.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/rung.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/table.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/tape.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/trapdoorbg.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/use.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wrench.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/music/music.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/get.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/gj.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/gj2.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/gj2.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/hit.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/kaboom.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/kaboom.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/song_20170423_095337_718.mid";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/takeoff.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/takeoff.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/tk1.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "flixel/sounds/beep.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "flixel/sounds/flixel.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "flixel/fonts/nokiafc22.ttf";
		className.set (id, __ASSET__flixel_fonts_nokiafc22_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/fonts/monsterrat.ttf";
		className.set (id, __ASSET__flixel_fonts_monsterrat_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/images/ui/button.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/Bedroom.xcf", __ASSET__assets_images_bedroom_xcf);
		type.set ("assets/images/Bedroom.xcf", AssetType.BINARY);
		
		className.set ("assets/images/BedroomCover.png", __ASSET__assets_images_bedroomcover_png);
		type.set ("assets/images/BedroomCover.png", AssetType.IMAGE);
		
		className.set ("assets/images/BedroomInterior.png", __ASSET__assets_images_bedroominterior_png);
		type.set ("assets/images/BedroomInterior.png", AssetType.IMAGE);
		
		className.set ("assets/images/boombox.png", __ASSET__assets_images_boombox_png);
		type.set ("assets/images/boombox.png", AssetType.IMAGE);
		
		className.set ("assets/images/codedoor.png", __ASSET__assets_images_codedoor_png);
		type.set ("assets/images/codedoor.png", AssetType.IMAGE);
		
		className.set ("assets/images/cover90T1.png", __ASSET__assets_images_cover90t1_png);
		type.set ("assets/images/cover90T1.png", AssetType.IMAGE);
		
		className.set ("assets/images/cover90T2.png", __ASSET__assets_images_cover90t2_png);
		type.set ("assets/images/cover90T2.png", AssetType.IMAGE);
		
		className.set ("assets/images/coverwrench2.png", __ASSET__assets_images_coverwrench2_png);
		type.set ("assets/images/coverwrench2.png", AssetType.IMAGE);
		
		className.set ("assets/images/coverWrenchT1.png", __ASSET__assets_images_coverwrencht1_png);
		type.set ("assets/images/coverWrenchT1.png", AssetType.IMAGE);
		
		className.set ("assets/images/empty.png", __ASSET__assets_images_empty_png);
		type.set ("assets/images/empty.png", AssetType.IMAGE);
		
		className.set ("assets/images/fin.png", __ASSET__assets_images_fin_png);
		type.set ("assets/images/fin.png", AssetType.IMAGE);
		
		className.set ("assets/images/fuelCell.png", __ASSET__assets_images_fuelcell_png);
		type.set ("assets/images/fuelCell.png", AssetType.IMAGE);
		
		className.set ("assets/images/FUELCELLBG.png", __ASSET__assets_images_fuelcellbg_png);
		type.set ("assets/images/FUELCELLBG.png", AssetType.IMAGE);
		
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/keydoor.png", __ASSET__assets_images_keydoor_png);
		type.set ("assets/images/keydoor.png", AssetType.IMAGE);
		
		className.set ("assets/images/keypad.png", __ASSET__assets_images_keypad_png);
		type.set ("assets/images/keypad.png", AssetType.IMAGE);
		
		className.set ("assets/images/keypad.xcf", __ASSET__assets_images_keypad_xcf);
		type.set ("assets/images/keypad.xcf", AssetType.BINARY);
		
		className.set ("assets/images/mineCover1.png", __ASSET__assets_images_minecover1_png);
		type.set ("assets/images/mineCover1.png", AssetType.IMAGE);
		
		className.set ("assets/images/MineCover2.png", __ASSET__assets_images_minecover2_png);
		type.set ("assets/images/MineCover2.png", AssetType.IMAGE);
		
		className.set ("assets/images/minecover3.png", __ASSET__assets_images_minecover3_png);
		type.set ("assets/images/minecover3.png", AssetType.IMAGE);
		
		className.set ("assets/images/minecover4.png", __ASSET__assets_images_minecover4_png);
		type.set ("assets/images/minecover4.png", AssetType.IMAGE);
		
		className.set ("assets/images/MineEntrance.xcf", __ASSET__assets_images_mineentrance_xcf);
		type.set ("assets/images/MineEntrance.xcf", AssetType.BINARY);
		
		className.set ("assets/images/MineEntranceCover.png", __ASSET__assets_images_mineentrancecover_png);
		type.set ("assets/images/MineEntranceCover.png", AssetType.IMAGE);
		
		className.set ("assets/images/MineEntranceInterior.png", __ASSET__assets_images_mineentranceinterior_png);
		type.set ("assets/images/MineEntranceInterior.png", AssetType.IMAGE);
		
		className.set ("assets/images/MineEntranceInteriorPostDoor.png", __ASSET__assets_images_mineentranceinteriorpostdoor_png);
		type.set ("assets/images/MineEntranceInteriorPostDoor.png", AssetType.IMAGE);
		
		className.set ("assets/images/nosecap.png", __ASSET__assets_images_nosecap_png);
		type.set ("assets/images/nosecap.png", AssetType.IMAGE);
		
		className.set ("assets/images/openeing.png", __ASSET__assets_images_openeing_png);
		type.set ("assets/images/openeing.png", AssetType.IMAGE);
		
		className.set ("assets/images/planet.png", __ASSET__assets_images_planet_png);
		type.set ("assets/images/planet.png", AssetType.IMAGE);
		
		className.set ("assets/images/planet.xcf", __ASSET__assets_images_planet_xcf);
		type.set ("assets/images/planet.xcf", AssetType.BINARY);
		
		className.set ("assets/images/planetpuppet.png", __ASSET__assets_images_planetpuppet_png);
		type.set ("assets/images/planetpuppet.png", AssetType.IMAGE);
		
		className.set ("assets/images/player.png", __ASSET__assets_images_player_png);
		type.set ("assets/images/player.png", AssetType.IMAGE);
		
		className.set ("assets/images/rocket.png", __ASSET__assets_images_rocket_png);
		type.set ("assets/images/rocket.png", AssetType.IMAGE);
		
		className.set ("assets/images/rocketPuppet.png", __ASSET__assets_images_rocketpuppet_png);
		type.set ("assets/images/rocketPuppet.png", AssetType.IMAGE);
		
		className.set ("assets/images/rockWall.png", __ASSET__assets_images_rockwall_png);
		type.set ("assets/images/rockWall.png", AssetType.IMAGE);
		
		className.set ("assets/images/rung.png", __ASSET__assets_images_rung_png);
		type.set ("assets/images/rung.png", AssetType.IMAGE);
		
		className.set ("assets/images/table.png", __ASSET__assets_images_table_png);
		type.set ("assets/images/table.png", AssetType.IMAGE);
		
		className.set ("assets/images/tape.png", __ASSET__assets_images_tape_png);
		type.set ("assets/images/tape.png", AssetType.IMAGE);
		
		className.set ("assets/images/trapdoorbg.png", __ASSET__assets_images_trapdoorbg_png);
		type.set ("assets/images/trapdoorbg.png", AssetType.IMAGE);
		
		className.set ("assets/images/use.png", __ASSET__assets_images_use_png);
		type.set ("assets/images/use.png", AssetType.IMAGE);
		
		className.set ("assets/images/wrench.png", __ASSET__assets_images_wrench_png);
		type.set ("assets/images/wrench.png", AssetType.IMAGE);
		
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/music/music.ogg", __ASSET__assets_music_music_ogg);
		type.set ("assets/music/music.ogg", AssetType.MUSIC);
		
		className.set ("assets/sounds/get.wav", __ASSET__assets_sounds_get_wav);
		type.set ("assets/sounds/get.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/gj.wav", __ASSET__assets_sounds_gj_wav);
		type.set ("assets/sounds/gj.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/gj2.ogg", __ASSET__assets_sounds_gj2_ogg);
		type.set ("assets/sounds/gj2.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/gj2.wav", __ASSET__assets_sounds_gj2_wav);
		type.set ("assets/sounds/gj2.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/hit.wav", __ASSET__assets_sounds_hit_wav);
		type.set ("assets/sounds/hit.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/kaboom.ogg", __ASSET__assets_sounds_kaboom_ogg);
		type.set ("assets/sounds/kaboom.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/kaboom.wav", __ASSET__assets_sounds_kaboom_wav);
		type.set ("assets/sounds/kaboom.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/song_20170423_095337_718.mid", __ASSET__assets_sounds_song_20170423_095337_718_mid);
		type.set ("assets/sounds/song_20170423_095337_718.mid", AssetType.BINARY);
		
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/sounds/takeoff.ogg", __ASSET__assets_sounds_takeoff_ogg);
		type.set ("assets/sounds/takeoff.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/takeoff.wav", __ASSET__assets_sounds_takeoff_wav);
		type.set ("assets/sounds/takeoff.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/tk1.wav", __ASSET__assets_sounds_tk1_wav);
		type.set ("assets/sounds/tk1.wav", AssetType.SOUND);
		
		className.set ("flixel/sounds/beep.ogg", __ASSET__flixel_sounds_beep_ogg);
		type.set ("flixel/sounds/beep.ogg", AssetType.SOUND);
		
		className.set ("flixel/sounds/flixel.ogg", __ASSET__flixel_sounds_flixel_ogg);
		type.set ("flixel/sounds/flixel.ogg", AssetType.SOUND);
		
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == TEXT && assetType == BINARY) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), Bytes));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):Bytes {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return Bytes.ofData (cast (Type.createInstance (className.get (id), []), flash.utils.ByteArray));
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return Bytes.ofData (bitmapData.getPixels (bitmapData.rect));
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), Bytes);
		
		#elseif html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Bytes);
		else return Bytes.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes.getString (0, bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.getString (0, bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<Bytes> {
		
		var promise = new Promise<Bytes> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = flash.net.URLLoaderDataFormat.BINARY;
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = Bytes.ofData (event.currentTarget.data);
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			promise.completeWith (request.load (path.get (id) + "?" + Assets.cache.version));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Bytes> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id) + "?" + Assets.cache.version;
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = Bytes.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = Bytes.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = Bytes.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = Bytes.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = Bytes.readFile ("assets/manifest");
			#else
			var bytes = Bytes.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				if (bytes.length > 0) {
					
					var data = bytes.getString (0, bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			var future = request.load (path.get (id) + "?" + Assets.cache.version);
			future.onProgress (function (progress) promise.progress (progress));
			future.onError (function (msg) promise.error (msg));
			future.onComplete (function (bytes) promise.complete (bytes.getString (0, bytes.length)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.getString (0, bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_bedroom_xcf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_bedroomcover_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bedroominterior_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_boombox_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_codedoor_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_cover90t1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_cover90t2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_coverwrench2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_coverwrencht1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_empty_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_fin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_fuelcell_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_fuelcellbg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_images_go_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_keydoor_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_keypad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_keypad_xcf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_minecover1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_minecover2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_minecover3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_minecover4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_mineentrance_xcf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_mineentrancecover_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_mineentranceinterior_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_mineentranceinteriorpostdoor_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_nosecap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_openeing_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_planet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_planet_xcf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_planetpuppet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_player_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_rocket_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_rocketpuppet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_rockwall_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_rung_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_table_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_tape_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_trapdoorbg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_use_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_wrench_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_get_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_gj_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_gj2_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_gj2_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_hit_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_kaboom_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_kaboom_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_song_20170423_095337_718_mid extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_takeoff_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_takeoff_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_tk1_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5


























































@:keep #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { super (); name = "Nokia Cellphone FC Small"; } } 
@:keep #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { super (); name = "Monsterrat"; } } 



#else



#if (windows || mac || linux || cpp)


@:file("assets/data/data-goes-here.txt") #if display private #end class __ASSET__assets_data_data_goes_here_txt extends lime.utils.Bytes {}
@:file("assets/images/Bedroom.xcf") #if display private #end class __ASSET__assets_images_bedroom_xcf extends lime.utils.Bytes {}
@:image("assets/images/BedroomCover.png") #if display private #end class __ASSET__assets_images_bedroomcover_png extends lime.graphics.Image {}
@:image("assets/images/BedroomInterior.png") #if display private #end class __ASSET__assets_images_bedroominterior_png extends lime.graphics.Image {}
@:image("assets/images/boombox.png") #if display private #end class __ASSET__assets_images_boombox_png extends lime.graphics.Image {}
@:image("assets/images/codedoor.png") #if display private #end class __ASSET__assets_images_codedoor_png extends lime.graphics.Image {}
@:image("assets/images/cover90T1.png") #if display private #end class __ASSET__assets_images_cover90t1_png extends lime.graphics.Image {}
@:image("assets/images/cover90T2.png") #if display private #end class __ASSET__assets_images_cover90t2_png extends lime.graphics.Image {}
@:image("assets/images/coverwrench2.png") #if display private #end class __ASSET__assets_images_coverwrench2_png extends lime.graphics.Image {}
@:image("assets/images/coverWrenchT1.png") #if display private #end class __ASSET__assets_images_coverwrencht1_png extends lime.graphics.Image {}
@:image("assets/images/empty.png") #if display private #end class __ASSET__assets_images_empty_png extends lime.graphics.Image {}
@:image("assets/images/fin.png") #if display private #end class __ASSET__assets_images_fin_png extends lime.graphics.Image {}
@:image("assets/images/fuelCell.png") #if display private #end class __ASSET__assets_images_fuelcell_png extends lime.graphics.Image {}
@:image("assets/images/FUELCELLBG.png") #if display private #end class __ASSET__assets_images_fuelcellbg_png extends lime.graphics.Image {}
@:file("assets/images/images-go-here.txt") #if display private #end class __ASSET__assets_images_images_go_here_txt extends lime.utils.Bytes {}
@:image("assets/images/keydoor.png") #if display private #end class __ASSET__assets_images_keydoor_png extends lime.graphics.Image {}
@:image("assets/images/keypad.png") #if display private #end class __ASSET__assets_images_keypad_png extends lime.graphics.Image {}
@:file("assets/images/keypad.xcf") #if display private #end class __ASSET__assets_images_keypad_xcf extends lime.utils.Bytes {}
@:image("assets/images/mineCover1.png") #if display private #end class __ASSET__assets_images_minecover1_png extends lime.graphics.Image {}
@:image("assets/images/MineCover2.png") #if display private #end class __ASSET__assets_images_minecover2_png extends lime.graphics.Image {}
@:image("assets/images/minecover3.png") #if display private #end class __ASSET__assets_images_minecover3_png extends lime.graphics.Image {}
@:image("assets/images/minecover4.png") #if display private #end class __ASSET__assets_images_minecover4_png extends lime.graphics.Image {}
@:file("assets/images/MineEntrance.xcf") #if display private #end class __ASSET__assets_images_mineentrance_xcf extends lime.utils.Bytes {}
@:image("assets/images/MineEntranceCover.png") #if display private #end class __ASSET__assets_images_mineentrancecover_png extends lime.graphics.Image {}
@:image("assets/images/MineEntranceInterior.png") #if display private #end class __ASSET__assets_images_mineentranceinterior_png extends lime.graphics.Image {}
@:image("assets/images/MineEntranceInteriorPostDoor.png") #if display private #end class __ASSET__assets_images_mineentranceinteriorpostdoor_png extends lime.graphics.Image {}
@:image("assets/images/nosecap.png") #if display private #end class __ASSET__assets_images_nosecap_png extends lime.graphics.Image {}
@:image("assets/images/openeing.png") #if display private #end class __ASSET__assets_images_openeing_png extends lime.graphics.Image {}
@:image("assets/images/planet.png") #if display private #end class __ASSET__assets_images_planet_png extends lime.graphics.Image {}
@:file("assets/images/planet.xcf") #if display private #end class __ASSET__assets_images_planet_xcf extends lime.utils.Bytes {}
@:image("assets/images/planetpuppet.png") #if display private #end class __ASSET__assets_images_planetpuppet_png extends lime.graphics.Image {}
@:image("assets/images/player.png") #if display private #end class __ASSET__assets_images_player_png extends lime.graphics.Image {}
@:image("assets/images/rocket.png") #if display private #end class __ASSET__assets_images_rocket_png extends lime.graphics.Image {}
@:image("assets/images/rocketPuppet.png") #if display private #end class __ASSET__assets_images_rocketpuppet_png extends lime.graphics.Image {}
@:image("assets/images/rockWall.png") #if display private #end class __ASSET__assets_images_rockwall_png extends lime.graphics.Image {}
@:image("assets/images/rung.png") #if display private #end class __ASSET__assets_images_rung_png extends lime.graphics.Image {}
@:image("assets/images/table.png") #if display private #end class __ASSET__assets_images_table_png extends lime.graphics.Image {}
@:image("assets/images/tape.png") #if display private #end class __ASSET__assets_images_tape_png extends lime.graphics.Image {}
@:image("assets/images/trapdoorbg.png") #if display private #end class __ASSET__assets_images_trapdoorbg_png extends lime.graphics.Image {}
@:image("assets/images/use.png") #if display private #end class __ASSET__assets_images_use_png extends lime.graphics.Image {}
@:image("assets/images/wrench.png") #if display private #end class __ASSET__assets_images_wrench_png extends lime.graphics.Image {}
@:file("assets/music/music-goes-here.txt") #if display private #end class __ASSET__assets_music_music_goes_here_txt extends lime.utils.Bytes {}
@:file("assets/music/music.ogg") #if display private #end class __ASSET__assets_music_music_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/get.wav") #if display private #end class __ASSET__assets_sounds_get_wav extends lime.utils.Bytes {}
@:file("assets/sounds/gj.wav") #if display private #end class __ASSET__assets_sounds_gj_wav extends lime.utils.Bytes {}
@:file("assets/sounds/gj2.ogg") #if display private #end class __ASSET__assets_sounds_gj2_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/gj2.wav") #if display private #end class __ASSET__assets_sounds_gj2_wav extends lime.utils.Bytes {}
@:file("assets/sounds/hit.wav") #if display private #end class __ASSET__assets_sounds_hit_wav extends lime.utils.Bytes {}
@:file("assets/sounds/kaboom.ogg") #if display private #end class __ASSET__assets_sounds_kaboom_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/kaboom.wav") #if display private #end class __ASSET__assets_sounds_kaboom_wav extends lime.utils.Bytes {}
@:file("assets/sounds/song_20170423_095337_718.mid") #if display private #end class __ASSET__assets_sounds_song_20170423_095337_718_mid extends lime.utils.Bytes {}
@:file("assets/sounds/sounds-go-here.txt") #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends lime.utils.Bytes {}
@:file("assets/sounds/takeoff.ogg") #if display private #end class __ASSET__assets_sounds_takeoff_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/takeoff.wav") #if display private #end class __ASSET__assets_sounds_takeoff_wav extends lime.utils.Bytes {}
@:file("assets/sounds/tk1.wav") #if display private #end class __ASSET__assets_sounds_tk1_wav extends lime.utils.Bytes {}
@:file("C:/Haxe/haxe/flixel/4,1,0/assets/sounds/beep.ogg") #if display private #end class __ASSET__flixel_sounds_beep_ogg extends lime.utils.Bytes {}
@:file("C:/Haxe/haxe/flixel/4,1,0/assets/sounds/flixel.ogg") #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends lime.utils.Bytes {}
@:font("C:/Haxe/haxe/flixel/4,1,0/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:font("C:/Haxe/haxe/flixel/4,1,0/assets/fonts/monsterrat.ttf") #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:image("C:/Haxe/haxe/flixel/4,1,0/assets/images/ui/button.png") #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_nokiafc22_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_monsterrat_ttf (); src = font.src; name = font.name; super (); }}

#end

#end