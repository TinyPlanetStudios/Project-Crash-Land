// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif

namespace flixel{
namespace util{
namespace helpers{

void FlxRange_obj::__construct( ::Dynamic start, ::Dynamic end){
            	HX_STACK_FRAME("flixel.util.helpers.FlxRange","new",0x6d2b50a0,"flixel.util.helpers.FlxRange.new","flixel/util/helpers/FlxRange.hx",8,0x9ab2f00f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(start,"start")
            	HX_STACK_ARG(end,"end")
HXLINE(  21)		this->active = false;
HXLINE(  31)		this->start = start;
HXLINE(  32)		 ::Dynamic _hx_tmp;
HXDLIN(  32)		Bool _hx_tmp1 = hx::IsNull( end );
HXDLIN(  32)		if (_hx_tmp1) {
HXLINE(  32)			_hx_tmp = start;
            		}
            		else {
HXLINE(  32)			_hx_tmp = end;
            		}
HXDLIN(  32)		this->end = _hx_tmp;
            	}

Dynamic FlxRange_obj::__CreateEmpty() { return new FlxRange_obj; }

hx::ObjectPtr< FlxRange_obj > FlxRange_obj::__new( ::Dynamic start, ::Dynamic end)
{
	hx::ObjectPtr< FlxRange_obj > _hx_result = new FlxRange_obj();
	_hx_result->__construct(start,end);
	return _hx_result;
}

Dynamic FlxRange_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxRange_obj > _hx_result = new FlxRange_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

 ::flixel::util::helpers::FlxRange FlxRange_obj::set( ::Dynamic start, ::Dynamic end){
            	HX_STACK_FRAME("flixel.util.helpers.FlxRange","set",0x6d2f1be2,"flixel.util.helpers.FlxRange.set","flixel/util/helpers/FlxRange.hx",43,0x9ab2f00f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(start,"start")
            	HX_STACK_ARG(end,"end")
HXLINE(  44)		this->start = start;
HXLINE(  45)		 ::Dynamic _hx_tmp;
HXDLIN(  45)		Bool _hx_tmp1 = hx::IsNull( end );
HXDLIN(  45)		if (_hx_tmp1) {
HXLINE(  45)			_hx_tmp = start;
            		}
            		else {
HXLINE(  45)			_hx_tmp = end;
            		}
HXDLIN(  45)		this->end = _hx_tmp;
HXLINE(  47)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRange_obj,set,return )

Bool FlxRange_obj::equals( ::flixel::util::helpers::FlxRange OtherFlxRange){
            	HX_STACK_FRAME("flixel.util.helpers.FlxRange","equals",0x791915ff,"flixel.util.helpers.FlxRange.equals","flixel/util/helpers/FlxRange.hx",58,0x9ab2f00f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(OtherFlxRange,"OtherFlxRange")
HXLINE(  58)		if (hx::IsEq( this->start,OtherFlxRange->start )) {
HXLINE(  58)			return hx::IsEq( this->end,OtherFlxRange->end );
            		}
            		else {
HXLINE(  58)			return false;
            		}
HXDLIN(  58)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRange_obj,equals,return )

::String FlxRange_obj::toString(){
            	HX_STACK_FRAME("flixel.util.helpers.FlxRange","toString",0x253e686c,"flixel.util.helpers.FlxRange.toString","flixel/util/helpers/FlxRange.hx",66,0x9ab2f00f)
            	HX_STACK_THIS(this)
HXLINE(  67)		HX_VARI(  ::flixel::util::LabelValuePair,_this) = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  67)		_this->label = HX_("start",62,74,0b,84);
HXDLIN(  67)		_this->value = this->start;
HXLINE(  68)		HX_VARI_NAME(  ::flixel::util::LabelValuePair,_this1,"_this") = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  68)		_this1->label = HX_("end",db,03,4d,00);
HXDLIN(  68)		_this1->value = this->end;
HXLINE(  66)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRange_obj,toString,return )


FlxRange_obj::FlxRange_obj()
{
}

void FlxRange_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRange);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxRange_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(active,"active");
}

hx::Val FlxRange_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxRange_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRange_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxRange_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxRange_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxRange_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsBool,(int)offsetof(FlxRange_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxRange_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxRange_obj_sMemberFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void FlxRange_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRange_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxRange_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRange_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxRange_obj::__mClass;

void FlxRange_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.helpers.FlxRange","\xae","\xc0","\x56","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxRange_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxRange_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxRange_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxRange_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxRange_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxRange_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace helpers
