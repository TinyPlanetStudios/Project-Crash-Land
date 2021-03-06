// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif


void Global_obj::__construct() { }

Dynamic Global_obj::__CreateEmpty() { return new Global_obj; }

hx::ObjectPtr< Global_obj > Global_obj::__new()
{
	hx::ObjectPtr< Global_obj > _hx_result = new Global_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Global_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Global_obj > _hx_result = new Global_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::flixel::math::FlxPoint Global_obj::PlanetPos;

 ::flixel::math::FlxPoint Global_obj::PlanetSize;

Float Global_obj::Surface;

Bool Global_obj::Halt;

Int Global_obj::Wrench;

Int Global_obj::FuelCell;

Int Global_obj::Fin;

Int Global_obj::NoseCap;

Bool Global_obj::TrapDoorJustOpened;

Bool Global_obj::CodeDoorJustOpened;

Bool Global_obj::TNT;

void Global_obj::init(){
            	HX_STACK_FRAME("Global","init",0xeb6d69db,"Global.init","Global.hx",26,0xfa68b11b)
HXLINE(  27)		::Global_obj::PlanetPos =  ::flixel::math::FlxPoint_obj::__new((int)640,(int)360);
HXLINE(  28)		::Global_obj::PlanetSize =  ::flixel::math::FlxPoint_obj::__new((int)550,(int)550);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Global_obj,init,(void))

Float Global_obj::modCiel(Float x){
            	HX_STACK_FRAME("Global","modCiel",0x3a78d284,"Global.modCiel","Global.hx",32,0xfa68b11b)
            	HX_STACK_ARG(x,"x")
HXLINE(  33)		Float _hx_tmp = ::Math_obj::abs(x);
HXDLIN(  33)		HX_VARI( Float,sighn) = ((Float)_hx_tmp / (Float)x);
HXLINE(  34)		Float _hx_tmp1 = ::Math_obj::abs(x);
HXDLIN(  34)		Int _hx_tmp2 = ::Math_obj::ceil(_hx_tmp1);
HXDLIN(  34)		return (sighn * _hx_tmp2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Global_obj,modCiel,return )


Global_obj::Global_obj()
{
}

bool Global_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Fin") ) { outValue = Fin; return true; }
		if (HX_FIELD_EQ(inName,"TNT") ) { outValue = TNT; return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Halt") ) { outValue = Halt; return true; }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Wrench") ) { outValue = Wrench; return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Surface") ) { outValue = Surface; return true; }
		if (HX_FIELD_EQ(inName,"NoseCap") ) { outValue = NoseCap; return true; }
		if (HX_FIELD_EQ(inName,"modCiel") ) { outValue = modCiel_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FuelCell") ) { outValue = FuelCell; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"PlanetPos") ) { outValue = PlanetPos; return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"PlanetSize") ) { outValue = PlanetSize; return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TrapDoorJustOpened") ) { outValue = TrapDoorJustOpened; return true; }
		if (HX_FIELD_EQ(inName,"CodeDoorJustOpened") ) { outValue = CodeDoorJustOpened; return true; }
	}
	return false;
}

bool Global_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Fin") ) { Fin=ioValue.Cast< Int >(); return true; }
		if (HX_FIELD_EQ(inName,"TNT") ) { TNT=ioValue.Cast< Bool >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Halt") ) { Halt=ioValue.Cast< Bool >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Wrench") ) { Wrench=ioValue.Cast< Int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Surface") ) { Surface=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"NoseCap") ) { NoseCap=ioValue.Cast< Int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FuelCell") ) { FuelCell=ioValue.Cast< Int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"PlanetPos") ) { PlanetPos=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"PlanetSize") ) { PlanetSize=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TrapDoorJustOpened") ) { TrapDoorJustOpened=ioValue.Cast< Bool >(); return true; }
		if (HX_FIELD_EQ(inName,"CodeDoorJustOpened") ) { CodeDoorJustOpened=ioValue.Cast< Bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Global_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Global_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &Global_obj::PlanetPos,HX_HCSTRING("PlanetPos","\xbc","\x11","\xff","\x3d")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &Global_obj::PlanetSize,HX_HCSTRING("PlanetSize","\x99","\x8f","\x27","\x03")},
	{hx::fsFloat,(void *) &Global_obj::Surface,HX_HCSTRING("Surface","\x0d","\x8e","\x9a","\x2a")},
	{hx::fsBool,(void *) &Global_obj::Halt,HX_HCSTRING("Halt","\xe1","\x55","\xe1","\x2f")},
	{hx::fsInt,(void *) &Global_obj::Wrench,HX_HCSTRING("Wrench","\x09","\xe1","\xd0","\xaf")},
	{hx::fsInt,(void *) &Global_obj::FuelCell,HX_HCSTRING("FuelCell","\x58","\xe0","\x02","\x63")},
	{hx::fsInt,(void *) &Global_obj::Fin,HX_HCSTRING("Fin","\xab","\x79","\x35","\x00")},
	{hx::fsInt,(void *) &Global_obj::NoseCap,HX_HCSTRING("NoseCap","\x9f","\xaa","\x31","\x87")},
	{hx::fsBool,(void *) &Global_obj::TrapDoorJustOpened,HX_HCSTRING("TrapDoorJustOpened","\xf0","\xc7","\xa7","\xb7")},
	{hx::fsBool,(void *) &Global_obj::CodeDoorJustOpened,HX_HCSTRING("CodeDoorJustOpened","\x30","\x13","\xea","\xe4")},
	{hx::fsBool,(void *) &Global_obj::TNT,HX_HCSTRING("TNT","\x9a","\x01","\x40","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Global_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Global_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Global_obj::PlanetPos,"PlanetPos");
	HX_MARK_MEMBER_NAME(Global_obj::PlanetSize,"PlanetSize");
	HX_MARK_MEMBER_NAME(Global_obj::Surface,"Surface");
	HX_MARK_MEMBER_NAME(Global_obj::Halt,"Halt");
	HX_MARK_MEMBER_NAME(Global_obj::Wrench,"Wrench");
	HX_MARK_MEMBER_NAME(Global_obj::FuelCell,"FuelCell");
	HX_MARK_MEMBER_NAME(Global_obj::Fin,"Fin");
	HX_MARK_MEMBER_NAME(Global_obj::NoseCap,"NoseCap");
	HX_MARK_MEMBER_NAME(Global_obj::TrapDoorJustOpened,"TrapDoorJustOpened");
	HX_MARK_MEMBER_NAME(Global_obj::CodeDoorJustOpened,"CodeDoorJustOpened");
	HX_MARK_MEMBER_NAME(Global_obj::TNT,"TNT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Global_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Global_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Global_obj::PlanetPos,"PlanetPos");
	HX_VISIT_MEMBER_NAME(Global_obj::PlanetSize,"PlanetSize");
	HX_VISIT_MEMBER_NAME(Global_obj::Surface,"Surface");
	HX_VISIT_MEMBER_NAME(Global_obj::Halt,"Halt");
	HX_VISIT_MEMBER_NAME(Global_obj::Wrench,"Wrench");
	HX_VISIT_MEMBER_NAME(Global_obj::FuelCell,"FuelCell");
	HX_VISIT_MEMBER_NAME(Global_obj::Fin,"Fin");
	HX_VISIT_MEMBER_NAME(Global_obj::NoseCap,"NoseCap");
	HX_VISIT_MEMBER_NAME(Global_obj::TrapDoorJustOpened,"TrapDoorJustOpened");
	HX_VISIT_MEMBER_NAME(Global_obj::CodeDoorJustOpened,"CodeDoorJustOpened");
	HX_VISIT_MEMBER_NAME(Global_obj::TNT,"TNT");
};

#endif

hx::Class Global_obj::__mClass;

static ::String Global_obj_sStaticFields[] = {
	HX_HCSTRING("PlanetPos","\xbc","\x11","\xff","\x3d"),
	HX_HCSTRING("PlanetSize","\x99","\x8f","\x27","\x03"),
	HX_HCSTRING("Surface","\x0d","\x8e","\x9a","\x2a"),
	HX_HCSTRING("Halt","\xe1","\x55","\xe1","\x2f"),
	HX_HCSTRING("Wrench","\x09","\xe1","\xd0","\xaf"),
	HX_HCSTRING("FuelCell","\x58","\xe0","\x02","\x63"),
	HX_HCSTRING("Fin","\xab","\x79","\x35","\x00"),
	HX_HCSTRING("NoseCap","\x9f","\xaa","\x31","\x87"),
	HX_HCSTRING("TrapDoorJustOpened","\xf0","\xc7","\xa7","\xb7"),
	HX_HCSTRING("CodeDoorJustOpened","\x30","\x13","\xea","\xe4"),
	HX_HCSTRING("TNT","\x9a","\x01","\x40","\x00"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("modCiel","\x6f","\xf0","\xeb","\xd6"),
	::String(null())
};

void Global_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Global","\x83","\xa5","\x46","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Global_obj::__GetStatic;
	__mClass->mSetStaticField = &Global_obj::__SetStatic;
	__mClass->mMarkFunc = Global_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Global_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Global_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Global_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Global_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Global_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Global_obj::__boot()
{
{
            	HX_STACK_FRAME("Global","boot",0xe6cdb2fd,"Global.boot","Global.hx",16,0xfa68b11b)
HXLINE(  16)		Wrench = (int)0;
            	}
{
            	HX_STACK_FRAME("Global","boot",0xe6cdb2fd,"Global.boot","Global.hx",17,0xfa68b11b)
HXLINE(  17)		FuelCell = (int)0;
            	}
{
            	HX_STACK_FRAME("Global","boot",0xe6cdb2fd,"Global.boot","Global.hx",18,0xfa68b11b)
HXLINE(  18)		Fin = (int)0;
            	}
{
            	HX_STACK_FRAME("Global","boot",0xe6cdb2fd,"Global.boot","Global.hx",19,0xfa68b11b)
HXLINE(  19)		NoseCap = (int)0;
            	}
{
            	HX_STACK_FRAME("Global","boot",0xe6cdb2fd,"Global.boot","Global.hx",21,0xfa68b11b)
HXLINE(  21)		TrapDoorJustOpened = false;
            	}
{
            	HX_STACK_FRAME("Global","boot",0xe6cdb2fd,"Global.boot","Global.hx",22,0xfa68b11b)
HXLINE(  22)		CodeDoorJustOpened = false;
            	}
{
            	HX_STACK_FRAME("Global","boot",0xe6cdb2fd,"Global.boot","Global.hx",23,0xfa68b11b)
HXLINE(  23)		TNT = false;
            	}
}

