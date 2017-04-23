// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Loader
#include <openfl/_legacy/display/Loader.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#include <openfl/_legacy/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif

namespace openfl{
namespace _legacy{
namespace display{

void Loader_obj::__construct(){
            	HX_STACK_FRAME("openfl._legacy.display.Loader","new",0x08d8c235,"openfl._legacy.display.Loader.new","openfl/_legacy/display/Loader.hx",26,0x567a0778)
            	HX_STACK_THIS(this)
HXLINE(  28)		super::__construct();
HXLINE(  30)		this->contentLoaderInfo = ::openfl::_legacy::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));
HXLINE(  32)		this->contentLoaderInfo->_hx___onComplete = this->_hx___onComplete_dyn();
            	}

Dynamic Loader_obj::__CreateEmpty() { return new Loader_obj; }

hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{
	hx::ObjectPtr< Loader_obj > _hx_result = new Loader_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Loader_obj > _hx_result = new Loader_obj();
	_hx_result->__construct();
	return _hx_result;
}

void Loader_obj::load( ::openfl::_legacy::net::URLRequest request, ::openfl::_hx_system::LoaderContext context){
            	HX_STACK_FRAME("openfl._legacy.display.Loader","load",0xb38642b1,"openfl._legacy.display.Loader.load","openfl/_legacy/display/Loader.hx",40,0x567a0778)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(request,"request")
            	HX_STACK_ARG(context,"context")
HXLINE(  40)		this->contentLoaderInfo->load(request);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

void Loader_obj::loadBytes( ::openfl::_legacy::utils::ByteArray bytes, ::openfl::_hx_system::LoaderContext context){
            	HX_STACK_FRAME("openfl._legacy.display.Loader","loadBytes",0x6a7ad3fa,"openfl._legacy.display.Loader.loadBytes","openfl/_legacy/display/Loader.hx",47,0x567a0778)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bytes,"bytes")
            	HX_STACK_ARG(context,"context")
HXLINE(  47)		Bool _hx_tmp = this->_hx___onComplete(bytes);
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  49)			HX_VARI(  ::openfl::_legacy::events::Event,event) =  ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::COMPLETE,null(),null());
HXLINE(  50)			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
HXLINE(  51)			this->contentLoaderInfo->dispatchEvent(event);
            		}
            		else {
HXLINE(  55)			this->contentLoaderInfo->_hx___dispatchIOErrorEvent();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

void Loader_obj::unload(){
            	HX_STACK_FRAME("openfl._legacy.display.Loader","unload",0x60bec24a,"openfl._legacy.display.Loader.unload","openfl/_legacy/display/Loader.hx",64,0x567a0778)
            	HX_STACK_THIS(this)
HXLINE(  64)		Int _hx_tmp = this->get_numChildren();
HXDLIN(  64)		if ((_hx_tmp > (int)0)) {
HXLINE(  66)			while(true){
HXLINE(  66)				Int _hx_tmp1 = this->get_numChildren();
HXDLIN(  66)				if (!((_hx_tmp1 > (int)0))) {
HXLINE(  66)					goto _hx_goto_0;
            				}
HXLINE(  68)				this->removeChildAt((int)0);
            			}
            			_hx_goto_0:;
HXLINE(  72)			{
HXLINE(  74)				this->contentLoaderInfo->url = null();
HXLINE(  75)				this->contentLoaderInfo->contentType = null();
HXLINE(  76)				this->contentLoaderInfo->content = null();
HXLINE(  77)				this->contentLoaderInfo->bytesLoaded = (this->contentLoaderInfo->bytesTotal = (int)0);
HXLINE(  78)				this->contentLoaderInfo->width = (int)0;
HXLINE(  79)				this->contentLoaderInfo->height = (int)0;
            			}
HXLINE(  83)			HX_VARI(  ::openfl::_legacy::events::Event,event) =  ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::UNLOAD,null(),null());
HXLINE(  84)			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
HXLINE(  85)			this->dispatchEvent(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

Bool Loader_obj::_hx___onComplete( ::openfl::_legacy::utils::ByteArray bytes){
            	HX_STACK_FRAME("openfl._legacy.display.Loader","__onComplete",0x75dcfba3,"openfl._legacy.display.Loader.__onComplete","openfl/_legacy/display/Loader.hx",92,0x567a0778)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  94)		Bool _hx_tmp = hx::IsNull( bytes );
HXDLIN(  94)		if (_hx_tmp) {
HXLINE(  96)			return false;
            		}
HXLINE( 100)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 102)			this->_hx___image = ::openfl::_legacy::display::BitmapData_obj::loadFromBytes(bytes,null());
HXLINE( 103)			HX_VARI(  ::openfl::_legacy::display::Bitmap,bitmap) =  ::openfl::_legacy::display::Bitmap_obj::__new(this->_hx___image,null(),null());
HXLINE( 104)			this->content = bitmap;
HXLINE( 105)			this->contentLoaderInfo->content = bitmap;
HXLINE( 107)			while(true){
HXLINE( 107)				Int _hx_tmp1 = this->get_numChildren();
HXDLIN( 107)				if (!((_hx_tmp1 > (int)0))) {
HXLINE( 107)					goto _hx_goto_1;
            				}
HXLINE( 109)				this->removeChildAt((int)0);
            			}
            			_hx_goto_1:;
HXLINE( 113)			this->addChild(bitmap);
HXLINE( 114)			return true;
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE( 118)				return false;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 100)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,_hx___onComplete,return )

void Loader_obj::contentLoaderInfo_onData( ::openfl::_legacy::events::Event event){
            	HX_STACK_FRAME("openfl._legacy.display.Loader","contentLoaderInfo_onData",0xe2fdc719,"openfl._legacy.display.Loader.contentLoaderInfo_onData","openfl/_legacy/display/Loader.hx",132,0x567a0778)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE( 134)		event->stopImmediatePropagation();
HXLINE( 135)		 ::openfl::_legacy::utils::ByteArray _hx_tmp = this->contentLoaderInfo->get_bytes();
HXDLIN( 135)		this->_hx___onComplete(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,contentLoaderInfo_onData,(void))


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(_hx___image,"__image");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(_hx___image,"__image");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return hx::Val( unload_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return hx::Val( content); }
		if (HX_FIELD_EQ(inName,"__image") ) { return hx::Val( _hx___image); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return hx::Val( loadBytes_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { return hx::Val( _hx___onComplete_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return hx::Val( contentLoaderInfo); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo_onData") ) { return hx::Val( contentLoaderInfo_onData_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Loader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast<  ::openfl::_legacy::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__image") ) { _hx___image=inValue.Cast<  ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast<  ::openfl::_legacy::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"));
	outFields->push(HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Loader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::DisplayObject*/ ,(int)offsetof(Loader_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsObject /*::openfl::_legacy::display::LoaderInfo*/ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Loader_obj,_hx___image),HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Loader_obj_sStaticStorageInfo = 0;
#endif

static ::String Loader_obj_sMemberFields[] = {
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"),
	HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("__onComplete","\x18","\x50","\x12","\x96"),
	HX_HCSTRING("contentLoaderInfo_onData","\x0e","\x77","\xda","\x08"),
	::String(null()) };

static void Loader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Loader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

hx::Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.Loader","\xc3","\x83","\xfc","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Loader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Loader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Loader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Loader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Loader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
