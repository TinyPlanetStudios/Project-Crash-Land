// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_net_URLRequestMethod
#include <openfl/_legacy/net/URLRequestMethod.h>
#endif

namespace openfl{
namespace _legacy{
namespace net{

void URLRequestMethod_obj::__construct() { }

Dynamic URLRequestMethod_obj::__CreateEmpty() { return new URLRequestMethod_obj; }

hx::ObjectPtr< URLRequestMethod_obj > URLRequestMethod_obj::__new()
{
	hx::ObjectPtr< URLRequestMethod_obj > _hx_result = new URLRequestMethod_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic URLRequestMethod_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< URLRequestMethod_obj > _hx_result = new URLRequestMethod_obj();
	_hx_result->__construct();
	return _hx_result;
}

::String URLRequestMethod_obj::DELETE;

::String URLRequestMethod_obj::GET;

::String URLRequestMethod_obj::HEAD;

::String URLRequestMethod_obj::OPTIONS;

::String URLRequestMethod_obj::POST;

::String URLRequestMethod_obj::PUT;


URLRequestMethod_obj::URLRequestMethod_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *URLRequestMethod_obj_sMemberStorageInfo = 0;
static hx::StaticInfo URLRequestMethod_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &URLRequestMethod_obj::DELETE,HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d")},
	{hx::fsString,(void *) &URLRequestMethod_obj::GET,HX_HCSTRING("GET","\x76","\x1c","\x36","\x00")},
	{hx::fsString,(void *) &URLRequestMethod_obj::HEAD,HX_HCSTRING("HEAD","\x20","\xf1","\xcb","\x2f")},
	{hx::fsString,(void *) &URLRequestMethod_obj::OPTIONS,HX_HCSTRING("OPTIONS","\x3e","\x07","\xd2","\x5f")},
	{hx::fsString,(void *) &URLRequestMethod_obj::POST,HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35")},
	{hx::fsString,(void *) &URLRequestMethod_obj::PUT,HX_HCSTRING("PUT","\xaf","\xfe","\x3c","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void URLRequestMethod_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequestMethod_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLRequestMethod_obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(URLRequestMethod_obj::GET,"GET");
	HX_MARK_MEMBER_NAME(URLRequestMethod_obj::HEAD,"HEAD");
	HX_MARK_MEMBER_NAME(URLRequestMethod_obj::OPTIONS,"OPTIONS");
	HX_MARK_MEMBER_NAME(URLRequestMethod_obj::POST,"POST");
	HX_MARK_MEMBER_NAME(URLRequestMethod_obj::PUT,"PUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void URLRequestMethod_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequestMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_obj::GET,"GET");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_obj::HEAD,"HEAD");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_obj::OPTIONS,"OPTIONS");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_obj::POST,"POST");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_obj::PUT,"PUT");
};

#endif

hx::Class URLRequestMethod_obj::__mClass;

static ::String URLRequestMethod_obj_sStaticFields[] = {
	HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"),
	HX_HCSTRING("GET","\x76","\x1c","\x36","\x00"),
	HX_HCSTRING("HEAD","\x20","\xf1","\xcb","\x2f"),
	HX_HCSTRING("OPTIONS","\x3e","\x07","\xd2","\x5f"),
	HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35"),
	HX_HCSTRING("PUT","\xaf","\xfe","\x3c","\x00"),
	::String(null())
};

void URLRequestMethod_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.net.URLRequestMethod","\xd6","\xf7","\x71","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = URLRequestMethod_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(URLRequestMethod_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< URLRequestMethod_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = URLRequestMethod_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLRequestMethod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLRequestMethod_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void URLRequestMethod_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl._legacy.net.URLRequestMethod","boot",0xcbf813ca,"openfl._legacy.net.URLRequestMethod.boot","openfl/_legacy/net/URLRequestMethod.hx",7,0x21737085)
HXLINE(   7)		DELETE = HX_("DELETE",2b,6c,5b,1d);
            	}
{
            	HX_STACK_FRAME("openfl._legacy.net.URLRequestMethod","boot",0xcbf813ca,"openfl._legacy.net.URLRequestMethod.boot","openfl/_legacy/net/URLRequestMethod.hx",8,0x21737085)
HXLINE(   8)		GET = HX_("GET",76,1c,36,00);
            	}
{
            	HX_STACK_FRAME("openfl._legacy.net.URLRequestMethod","boot",0xcbf813ca,"openfl._legacy.net.URLRequestMethod.boot","openfl/_legacy/net/URLRequestMethod.hx",9,0x21737085)
HXLINE(   9)		HEAD = HX_("HEAD",20,f1,cb,2f);
            	}
{
            	HX_STACK_FRAME("openfl._legacy.net.URLRequestMethod","boot",0xcbf813ca,"openfl._legacy.net.URLRequestMethod.boot","openfl/_legacy/net/URLRequestMethod.hx",10,0x21737085)
HXLINE(  10)		OPTIONS = HX_("OPTIONS",3e,07,d2,5f);
            	}
{
            	HX_STACK_FRAME("openfl._legacy.net.URLRequestMethod","boot",0xcbf813ca,"openfl._legacy.net.URLRequestMethod.boot","openfl/_legacy/net/URLRequestMethod.hx",11,0x21737085)
HXLINE(  11)		POST = HX_("POST",60,4c,1d,35);
            	}
{
            	HX_STACK_FRAME("openfl._legacy.net.URLRequestMethod","boot",0xcbf813ca,"openfl._legacy.net.URLRequestMethod.boot","openfl/_legacy/net/URLRequestMethod.hx",12,0x21737085)
HXLINE(  12)		PUT = HX_("PUT",af,fe,3c,00);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
