// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_XInputID
#include <flixel/input/gamepad/id/XInputID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_XInputMapping
#include <flixel/input/gamepad/mappings/XInputMapping.h>
#endif

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void XInputMapping_obj::__construct(::hx::EnumBase attachment){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","new",0x0bf6dd68,"flixel.input.gamepad.mappings.XInputMapping.new","flixel/input/gamepad/mappings/XInputMapping.hx",6,0x442329e6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE(   6)		super::__construct(attachment);
            	}

Dynamic XInputMapping_obj::__CreateEmpty() { return new XInputMapping_obj; }

hx::ObjectPtr< XInputMapping_obj > XInputMapping_obj::__new(::hx::EnumBase attachment)
{
	hx::ObjectPtr< XInputMapping_obj > _hx_result = new XInputMapping_obj();
	_hx_result->__construct(attachment);
	return _hx_result;
}

Dynamic XInputMapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< XInputMapping_obj > _hx_result = new XInputMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void XInputMapping_obj::initValues(){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","initValues",0xac18830a,"flixel.input.gamepad.mappings.XInputMapping.initValues","flixel/input/gamepad/mappings/XInputMapping.hx",20,0x442329e6)
            	HX_STACK_THIS(this)
HXLINE(  21)		this->leftStick = ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK;
HXLINE(  22)		this->rightStick = ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK;
            	}


Int XInputMapping_obj::getID(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","getID",0x15a6f0f9,"flixel.input.gamepad.mappings.XInputMapping.getID","flixel/input/gamepad/mappings/XInputMapping.hx",27,0x442329e6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  27)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  27)				return (int)1;
            			}
            			break;
            			case (int)1: {
HXLINE(  27)				return (int)0;
            			}
            			break;
            			case (int)2: {
HXLINE(  27)				return (int)3;
            			}
            			break;
            			case (int)3: {
HXLINE(  27)				return (int)2;
            			}
            			break;
            			case (int)4: {
HXLINE(  27)				return (int)4;
            			}
            			break;
            			case (int)5: {
HXLINE(  27)				return (int)5;
            			}
            			break;
            			case (int)6: {
HXLINE(  27)				return (int)6;
            			}
            			break;
            			case (int)7: {
HXLINE(  27)				return (int)7;
            			}
            			break;
            			case (int)8: {
HXLINE(  27)				return (int)8;
            			}
            			break;
            			case (int)9: {
HXLINE(  27)				return (int)9;
            			}
            			break;
            			case (int)10: {
HXLINE(  27)				return (int)10;
            			}
            			break;
            			case (int)11: {
HXLINE(  27)				return (int)11;
            			}
            			break;
            			case (int)12: {
HXLINE(  27)				return (int)12;
            			}
            			break;
            			case (int)13: {
HXLINE(  27)				return (int)13;
            			}
            			break;
            			case (int)14: {
HXLINE(  27)				return (int)14;
            			}
            			break;
            			case (int)19: {
HXLINE(  27)				return (int)17;
            			}
            			break;
            			case (int)20: {
HXLINE(  27)				return (int)18;
            			}
            			break;
            			default:{
HXLINE(  27)				return (int)-1;
            			}
            		}
HXDLIN(  27)		return null();
            	}


Int XInputMapping_obj::getRawID(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","getRawID",0x00062545,"flixel.input.gamepad.mappings.XInputMapping.getRawID","flixel/input/gamepad/mappings/XInputMapping.hx",66,0x442329e6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  66)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  66)				return (int)0;
            			}
            			break;
            			case (int)1: {
HXLINE(  66)				return (int)1;
            			}
            			break;
            			case (int)2: {
HXLINE(  66)				return (int)2;
            			}
            			break;
            			case (int)3: {
HXLINE(  66)				return (int)3;
            			}
            			break;
            			case (int)4: {
HXLINE(  66)				return (int)4;
            			}
            			break;
            			case (int)5: {
HXLINE(  66)				return (int)5;
            			}
            			break;
            			case (int)6: {
HXLINE(  66)				return (int)6;
            			}
            			break;
            			case (int)7: {
HXLINE(  66)				return (int)7;
            			}
            			break;
            			case (int)8: {
HXLINE(  66)				return (int)8;
            			}
            			break;
            			case (int)9: {
HXLINE(  66)				return (int)9;
            			}
            			break;
            			case (int)10: {
HXLINE(  66)				return (int)10;
            			}
            			break;
            			case (int)11: {
HXLINE(  66)				return (int)11;
            			}
            			break;
            			case (int)12: {
HXLINE(  66)				return (int)12;
            			}
            			break;
            			case (int)13: {
HXLINE(  66)				return (int)13;
            			}
            			break;
            			case (int)14: {
HXLINE(  66)				return (int)14;
            			}
            			break;
            			case (int)17: {
HXLINE(  66)				return (int)2;
            			}
            			break;
            			case (int)18: {
HXLINE(  66)				return (int)5;
            			}
            			break;
            			case (int)19: {
HXLINE(  66)				return (int)19;
            			}
            			break;
            			case (int)20: {
HXLINE(  66)				return (int)20;
            			}
            			break;
            			case (int)34: {
HXLINE(  66)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  66)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  66)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  66)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  66)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  66)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  66)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  66)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  66)				return (int)-1;
            			}
            		}
HXDLIN(  66)		return (int)0;
            	}


Int XInputMapping_obj::axisIndexToRawID(Int axisID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","axisIndexToRawID",0x4e04638f,"flixel.input.gamepad.mappings.XInputMapping.axisIndexToRawID","flixel/input/gamepad/mappings/XInputMapping.hx",116,0x442329e6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axisID,"axisID")
HXLINE( 116)		if ((axisID == this->leftStick->x)) {
HXLINE( 116)			return (int)15;
            		}
            		else {
HXLINE( 117)			if ((axisID == this->leftStick->y)) {
HXLINE( 116)				return (int)16;
            			}
            			else {
HXLINE( 118)				if ((axisID == this->rightStick->x)) {
HXLINE( 116)					return (int)17;
            				}
            				else {
HXLINE( 119)					if ((axisID == this->rightStick->y)) {
HXLINE( 116)						return (int)18;
            					}
            					else {
HXLINE( 120)						if ((axisID == (int)2)) {
HXLINE( 116)							return (int)19;
            						}
            						else {
HXLINE( 121)							if ((axisID == (int)5)) {
HXLINE( 116)								return (int)20;
            							}
            							else {
HXLINE( 116)								return axisID;
            							}
            						}
            					}
            				}
            			}
            		}
HXDLIN( 116)		return (int)0;
            	}


Int XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_X;

Int XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_Y;

Int XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_X;

Int XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y;

Int XInputMapping_obj::LEFT_TRIGGER_FAKE;

Int XInputMapping_obj::RIGHT_TRIGGER_FAKE;


XInputMapping_obj::XInputMapping_obj()
{
}

hx::Val XInputMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return hx::Val( getID_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return hx::Val( getRawID_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return hx::Val( initValues_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return hx::Val( axisIndexToRawID_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *XInputMapping_obj_sMemberStorageInfo = 0;
static hx::StaticInfo XInputMapping_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_X,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &XInputMapping_obj::LEFT_TRIGGER_FAKE,HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd")},
	{hx::fsInt,(void *) &XInputMapping_obj::RIGHT_TRIGGER_FAKE,HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String XInputMapping_obj_sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	::String(null()) };

static void XInputMapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XInputMapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void XInputMapping_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
};

#endif

hx::Class XInputMapping_obj::__mClass;

static ::String XInputMapping_obj_sStaticFields[] = {
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1"),
	HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd"),
	HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11"),
	::String(null())
};

void XInputMapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.XInputMapping","\x76","\x49","\x9a","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = XInputMapping_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(XInputMapping_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(XInputMapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< XInputMapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = XInputMapping_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XInputMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XInputMapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void XInputMapping_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","boot",0x6423de2a,"flixel.input.gamepad.mappings.XInputMapping.boot","flixel/input/gamepad/mappings/XInputMapping.hx",9,0x442329e6)
HXLINE(   9)		LEFT_ANALOG_STICK_FAKE_X = (int)15;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","boot",0x6423de2a,"flixel.input.gamepad.mappings.XInputMapping.boot","flixel/input/gamepad/mappings/XInputMapping.hx",10,0x442329e6)
HXLINE(  10)		LEFT_ANALOG_STICK_FAKE_Y = (int)16;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","boot",0x6423de2a,"flixel.input.gamepad.mappings.XInputMapping.boot","flixel/input/gamepad/mappings/XInputMapping.hx",12,0x442329e6)
HXLINE(  12)		RIGHT_ANALOG_STICK_FAKE_X = (int)17;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","boot",0x6423de2a,"flixel.input.gamepad.mappings.XInputMapping.boot","flixel/input/gamepad/mappings/XInputMapping.hx",13,0x442329e6)
HXLINE(  13)		RIGHT_ANALOG_STICK_FAKE_Y = (int)18;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","boot",0x6423de2a,"flixel.input.gamepad.mappings.XInputMapping.boot","flixel/input/gamepad/mappings/XInputMapping.hx",15,0x442329e6)
HXLINE(  15)		LEFT_TRIGGER_FAKE = (int)19;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","boot",0x6423de2a,"flixel.input.gamepad.mappings.XInputMapping.boot","flixel/input/gamepad/mappings/XInputMapping.hx",16,0x442329e6)
HXLINE(  16)		RIGHT_TRIGGER_FAKE = (int)20;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
