// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

namespace flixel{
namespace input{

void FlxBaseKeyList_obj::__construct(Int status, ::flixel::input::FlxKeyManager keyManager){
            	HX_STACK_FRAME("flixel.input.FlxBaseKeyList","new",0x83657282,"flixel.input.FlxBaseKeyList.new","flixel/input/FlxBaseKeyList.hx",11,0x0418a22c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(status,"status")
            	HX_STACK_ARG(keyManager,"keyManager")
HXLINE(  12)		this->status = status;
HXLINE(  13)		this->keyManager = keyManager;
            	}

Dynamic FlxBaseKeyList_obj::__CreateEmpty() { return new FlxBaseKeyList_obj; }

hx::ObjectPtr< FlxBaseKeyList_obj > FlxBaseKeyList_obj::__new(Int status, ::flixel::input::FlxKeyManager keyManager)
{
	hx::ObjectPtr< FlxBaseKeyList_obj > _hx_result = new FlxBaseKeyList_obj();
	_hx_result->__construct(status,keyManager);
	return _hx_result;
}

Dynamic FlxBaseKeyList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxBaseKeyList_obj > _hx_result = new FlxBaseKeyList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

Bool FlxBaseKeyList_obj::check(Int keyCode){
            	HX_STACK_FRAME("flixel.input.FlxBaseKeyList","check",0xea0e876a,"flixel.input.FlxBaseKeyList.check","flixel/input/FlxBaseKeyList.hx",18,0x0418a22c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(keyCode,"keyCode")
HXLINE(  18)		return this->keyManager->checkStatus(keyCode,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseKeyList_obj,check,return )

Bool FlxBaseKeyList_obj::get_ANY(){
            	HX_STACK_FRAME("flixel.input.FlxBaseKeyList","get_ANY",0x83d0ba85,"flixel.input.FlxBaseKeyList.get_ANY","flixel/input/FlxBaseKeyList.hx",24,0x0418a22c)
            	HX_STACK_THIS(this)
HXLINE(  25)		{
HXLINE(  25)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  25)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->keyManager->_keyListArray;
HXDLIN(  25)			while((_g < _g1->length)){
HXLINE(  25)				HX_VARI(  ::flixel::input::FlxInput,key) = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN(  25)				++_g;
HXLINE(  27)				Bool _hx_tmp;
HXDLIN(  27)				Bool _hx_tmp1 = hx::IsNotNull( key );
HXDLIN(  27)				if (_hx_tmp1) {
HXLINE(  27)					Int keyCode = ( (Int)(key->ID) );
HXDLIN(  27)					_hx_tmp = this->keyManager->checkStatus(keyCode,this->status);
            				}
            				else {
HXLINE(  27)					_hx_tmp = false;
            				}
HXDLIN(  27)				if (_hx_tmp) {
HXLINE(  29)					return true;
            				}
            			}
            		}
HXLINE(  33)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseKeyList_obj,get_ANY,return )


FlxBaseKeyList_obj::FlxBaseKeyList_obj()
{
}

void FlxBaseKeyList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseKeyList);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(keyManager,"keyManager");
	HX_MARK_END_CLASS();
}

void FlxBaseKeyList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(keyManager,"keyManager");
}

hx::Val FlxBaseKeyList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_ANY()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return hx::Val( check_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return hx::Val( status); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ANY") ) { return hx::Val( get_ANY_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyManager") ) { return hx::Val( keyManager); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxBaseKeyList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< Int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyManager") ) { keyManager=inValue.Cast<  ::flixel::input::FlxKeyManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseKeyList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("keyManager","\x8e","\x32","\x49","\x82"));
	outFields->push(HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxBaseKeyList_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBaseKeyList_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{hx::fsObject /*::flixel::input::FlxKeyManager*/ ,(int)offsetof(FlxBaseKeyList_obj,keyManager),HX_HCSTRING("keyManager","\x8e","\x32","\x49","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxBaseKeyList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBaseKeyList_obj_sMemberFields[] = {
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("keyManager","\x8e","\x32","\x49","\x82"),
	HX_HCSTRING("check","\xc8","\x98","\xb6","\x45"),
	HX_HCSTRING("get_ANY","\x63","\x5f","\xa6","\x26"),
	::String(null()) };

static void FlxBaseKeyList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseKeyList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBaseKeyList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseKeyList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBaseKeyList_obj::__mClass;

void FlxBaseKeyList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxBaseKeyList","\x90","\xc9","\xdd","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxBaseKeyList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxBaseKeyList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBaseKeyList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBaseKeyList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseKeyList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseKeyList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
