// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif


void Std_obj::__construct() { }

Dynamic Std_obj::__CreateEmpty() { return new Std_obj; }

hx::ObjectPtr< Std_obj > Std_obj::__new()
{
	hx::ObjectPtr< Std_obj > _hx_result = new Std_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Std_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Std_obj > _hx_result = new Std_obj();
	_hx_result->__construct();
	return _hx_result;
}

Bool Std_obj::is( ::Dynamic v, ::Dynamic t){
            	HX_STACK_FRAME("Std","is",0x3c56d6f5,"Std.is","C:\\Haxe\\haxe\\std/cpp/_std/Std.hx",24,0x51aabc29)
            	HX_STACK_ARG(v,"v")
            	HX_STACK_ARG(t,"t")
HXLINE(  24)		return ::__instanceof(v,t);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Std_obj,is,return )

 ::Dynamic Std_obj::instance( ::Dynamic value,hx::Class c){
            	HX_STACK_FRAME("Std","instance",0x1431f4e0,"Std.instance","C:\\Haxe\\haxe\\std/cpp/_std/Std.hx",28,0x51aabc29)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(c,"c")
HXLINE(  28)		Bool _hx_tmp = ::Std_obj::is(value,c);
HXDLIN(  28)		if (_hx_tmp) {
HXLINE(  28)			return value;
            		}
            		else {
HXLINE(  28)			return null();
            		}
HXDLIN(  28)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Std_obj,instance,return )

::String Std_obj::string( ::Dynamic s){
            	HX_STACK_FRAME("Std","string",0xcf48855c,"Std.string","C:\\Haxe\\haxe\\std/cpp/_std/Std.hx",32,0x51aabc29)
            	HX_STACK_ARG(s,"s")
HXLINE(  32)		Bool _hx_tmp = hx::IsNull( s );
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  32)			return HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE(  32)			return s->toString();
            		}
HXDLIN(  32)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,string,return )

Int Std_obj::_hx_int(Float x){
            	HX_STACK_FRAME("Std","int",0x8fa53b84,"Std.int","C:\\Haxe\\haxe\\std/cpp/_std/Std.hx",36,0x51aabc29)
            	HX_STACK_ARG(x,"x")
HXLINE(  36)		return ::__int__(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,_hx_int,return )

 ::Dynamic Std_obj::parseInt(::String x){
            	HX_STACK_FRAME("Std","parseInt",0x90c2ebc7,"Std.parseInt","C:\\Haxe\\haxe\\std/cpp/_std/Std.hx",40,0x51aabc29)
            	HX_STACK_ARG(x,"x")
HXLINE(  40)		return ::__hxcpp_parse_int(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,parseInt,return )

Float Std_obj::parseFloat(::String x){
            	HX_STACK_FRAME("Std","parseFloat",0xbca10a74,"Std.parseFloat","C:\\Haxe\\haxe\\std/cpp/_std/Std.hx",44,0x51aabc29)
            	HX_STACK_ARG(x,"x")
HXLINE(  44)		return ::__hxcpp_parse_float(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,parseFloat,return )

Int Std_obj::random(Int x){
            	HX_STACK_FRAME("Std","random",0x75a77e8e,"Std.random","C:\\Haxe\\haxe\\std/cpp/_std/Std.hx",47,0x51aabc29)
            	HX_STACK_ARG(x,"x")
HXLINE(  48)		if ((x <= (int)0)) {
HXLINE(  48)			return (int)0;
            		}
HXLINE(  49)		return ::__hxcpp_irand(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,random,return )


Std_obj::Std_obj()
{
}

bool Std_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"is") ) { outValue = is_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _hx_int_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"random") ) { outValue = random_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"parseInt") ) { outValue = parseInt_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseFloat") ) { outValue = parseFloat_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Std_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Std_obj_sStaticStorageInfo = 0;
#endif

static void Std_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Std_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Std_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Std_obj::__mClass,"__mClass");
};

#endif

hx::Class Std_obj::__mClass;

static ::String Std_obj_sStaticFields[] = {
	HX_HCSTRING("is","\xea","\x5b","\x00","\x00"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("string","\xd1","\x28","\x30","\x11"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("parseInt","\x7c","\x16","\x72","\xd6"),
	HX_HCSTRING("parseFloat","\x69","\x0c","\x78","\x2c"),
	HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"),
	::String(null())
};

void Std_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Std","\x83","\x60","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Std_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Std_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Std_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Std_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Std_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Std_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Std_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

