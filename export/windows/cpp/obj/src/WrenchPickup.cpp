// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_WrenchPickup
#include <WrenchPickup.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxSpriteButton
#include <flixel/ui/FlxSpriteButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_FlxSprite
#include <flixel/ui/FlxTypedButton_flixel_FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif


void WrenchPickup_obj::__construct( ::flixel::FlxState parent){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::WrenchPickup,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACK_FRAME("WrenchPickup","new",0x178802d7,"WrenchPickup.new","WrenchPickup.hx",30,0xf2546479)
HXLINE(  31)			_gthis->wrenchGot = true;
HXLINE(  32)			_gthis->remove(_gthis->wrench,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  33)			Bool _hx_tmp;
HXDLIN(  33)			if (_gthis->tapeGot) {
HXLINE(  33)				_hx_tmp = _gthis->wrenchGot;
            			}
            			else {
HXLINE(  33)				_hx_tmp = false;
            			}
HXDLIN(  33)			if (_hx_tmp) {
HXLINE(  35)				_gthis->Parent->persistentUpdate = true;
HXLINE(  36)				_gthis->close();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::WrenchPickup,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACK_FRAME("WrenchPickup","new",0x178802d7,"WrenchPickup.new","WrenchPickup.hx",42,0xf2546479)
HXLINE(  43)			_gthis->tapeGot = true;
HXLINE(  44)			_gthis->remove(_gthis->tape,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  45)			Bool _hx_tmp1;
HXDLIN(  45)			if (_gthis->tapeGot) {
HXLINE(  45)				_hx_tmp1 = _gthis->wrenchGot;
            			}
            			else {
HXLINE(  45)				_hx_tmp1 = false;
            			}
HXDLIN(  45)			if (_hx_tmp1) {
HXLINE(  47)				_gthis->Parent->persistentUpdate = true;
HXLINE(  48)				_gthis->close();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACK_FRAME("WrenchPickup","new",0x178802d7,"WrenchPickup.new","WrenchPickup.hx",13,0xf2546479)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(parent,"parent")
HXLINE(  19)		this->tapeGot = false;
HXLINE(  18)		this->wrenchGot = false;
HXLINE(  23)		HX_VARI(  ::WrenchPickup,_gthis) = hx::ObjectPtr<OBJ_>(this);
HXLINE(  25)		HX_VARI( Int,color) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  25)		{
HXLINE(  25)			hx::AndEq(color,(int)-16711681);
HXDLIN(  25)			hx::OrEq(color,(int)9699328);
            		}
HXDLIN(  25)		{
HXLINE(  25)			hx::AndEq(color,(int)-65281);
HXDLIN(  25)			hx::OrEq(color,(int)37888);
            		}
HXDLIN(  25)		{
HXLINE(  25)			hx::AndEq(color,(int)-256);
HXDLIN(  25)			hx::OrEq(color,(int)148);
            		}
HXDLIN(  25)		{
HXLINE(  25)			hx::AndEq(color,(int)16777215);
HXDLIN(  25)			hx::OrEq(color,(int)-16777216);
            		}
HXDLIN(  25)		super::__construct(color);
HXLINE(  27)		this->Parent = parent;
HXLINE(  28)		parent->persistentUpdate = false;
HXLINE(  30)		this->wrench =  ::flixel::ui::FlxSpriteButton_obj::__new((int)252,(int)88, ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_("assets/images/wrench.png",0f,6e,d8,86)), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  39)		this->wrench->loadGraphic(HX_("assets/images/wrench.png",0f,6e,d8,86),null(),null(),null(),null(),null());
HXLINE(  40)		this->add(this->wrench);
HXLINE(  42)		this->tape =  ::flixel::ui::FlxSpriteButton_obj::__new((int)500,(int)88, ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_("assets/images/tape.png",88,4d,d7,78)), ::Dynamic(new _hx_Closure_1(_gthis)));
HXLINE(  51)		this->tape->loadGraphic(HX_("assets/images/tape.png",88,4d,d7,78),null(),null(),null(),null(),null());
HXLINE(  52)		this->add(this->tape);
            	}

Dynamic WrenchPickup_obj::__CreateEmpty() { return new WrenchPickup_obj; }

hx::ObjectPtr< WrenchPickup_obj > WrenchPickup_obj::__new( ::flixel::FlxState parent)
{
	hx::ObjectPtr< WrenchPickup_obj > _hx_result = new WrenchPickup_obj();
	_hx_result->__construct(parent);
	return _hx_result;
}

Dynamic WrenchPickup_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WrenchPickup_obj > _hx_result = new WrenchPickup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}


WrenchPickup_obj::WrenchPickup_obj()
{
}

void WrenchPickup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WrenchPickup);
	HX_MARK_MEMBER_NAME(wrench,"wrench");
	HX_MARK_MEMBER_NAME(tape,"tape");
	HX_MARK_MEMBER_NAME(wrenchGot,"wrenchGot");
	HX_MARK_MEMBER_NAME(tapeGot,"tapeGot");
	HX_MARK_MEMBER_NAME(Parent,"Parent");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WrenchPickup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wrench,"wrench");
	HX_VISIT_MEMBER_NAME(tape,"tape");
	HX_VISIT_MEMBER_NAME(wrenchGot,"wrenchGot");
	HX_VISIT_MEMBER_NAME(tapeGot,"tapeGot");
	HX_VISIT_MEMBER_NAME(Parent,"Parent");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val WrenchPickup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tape") ) { return hx::Val( tape); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"wrench") ) { return hx::Val( wrench); }
		if (HX_FIELD_EQ(inName,"Parent") ) { return hx::Val( Parent); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tapeGot") ) { return hx::Val( tapeGot); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrenchGot") ) { return hx::Val( wrenchGot); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val WrenchPickup_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tape") ) { tape=inValue.Cast<  ::flixel::ui::FlxSpriteButton >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"wrench") ) { wrench=inValue.Cast<  ::flixel::ui::FlxSpriteButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Parent") ) { Parent=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tapeGot") ) { tapeGot=inValue.Cast< Bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrenchGot") ) { wrenchGot=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WrenchPickup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("wrench","\xe9","\x6c","\x3c","\x7b"));
	outFields->push(HX_HCSTRING("tape","\xa2","\xbc","\xf6","\x4c"));
	outFields->push(HX_HCSTRING("wrenchGot","\xe3","\x0b","\x88","\x2f"));
	outFields->push(HX_HCSTRING("tapeGot","\xca","\x95","\x31","\x60"));
	outFields->push(HX_HCSTRING("Parent","\x4a","\x79","\x12","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo WrenchPickup_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxSpriteButton*/ ,(int)offsetof(WrenchPickup_obj,wrench),HX_HCSTRING("wrench","\xe9","\x6c","\x3c","\x7b")},
	{hx::fsObject /*::flixel::ui::FlxSpriteButton*/ ,(int)offsetof(WrenchPickup_obj,tape),HX_HCSTRING("tape","\xa2","\xbc","\xf6","\x4c")},
	{hx::fsBool,(int)offsetof(WrenchPickup_obj,wrenchGot),HX_HCSTRING("wrenchGot","\xe3","\x0b","\x88","\x2f")},
	{hx::fsBool,(int)offsetof(WrenchPickup_obj,tapeGot),HX_HCSTRING("tapeGot","\xca","\x95","\x31","\x60")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(WrenchPickup_obj,Parent),HX_HCSTRING("Parent","\x4a","\x79","\x12","\x22")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *WrenchPickup_obj_sStaticStorageInfo = 0;
#endif

static ::String WrenchPickup_obj_sMemberFields[] = {
	HX_HCSTRING("wrench","\xe9","\x6c","\x3c","\x7b"),
	HX_HCSTRING("tape","\xa2","\xbc","\xf6","\x4c"),
	HX_HCSTRING("wrenchGot","\xe3","\x0b","\x88","\x2f"),
	HX_HCSTRING("tapeGot","\xca","\x95","\x31","\x60"),
	HX_HCSTRING("Parent","\x4a","\x79","\x12","\x22"),
	::String(null()) };

static void WrenchPickup_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WrenchPickup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WrenchPickup_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WrenchPickup_obj::__mClass,"__mClass");
};

#endif

hx::Class WrenchPickup_obj::__mClass;

void WrenchPickup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("WrenchPickup","\x65","\x4b","\xd2","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WrenchPickup_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WrenchPickup_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WrenchPickup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WrenchPickup_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WrenchPickup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WrenchPickup_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

