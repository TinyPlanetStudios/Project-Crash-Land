// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

namespace flixel{

void FlxState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACK_FRAME("flixel.FlxState","new",0x7e613e23,"flixel.FlxState.new","flixel/FlxState.hx",11,0xdf96844c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(MaxSize,"MaxSize")
HXLINE(  48)		this->_requestSubStateReset = false;
HXLINE(  28)		this->destroySubStates = true;
HXLINE(  23)		this->persistentDraw = true;
HXLINE(  17)		this->persistentUpdate = false;
HXLINE(  11)		super::__construct(MaxSize);
            	}

Dynamic FlxState_obj::__CreateEmpty() { return new FlxState_obj; }

hx::ObjectPtr< FlxState_obj > FlxState_obj::__new( ::Dynamic MaxSize)
{
	hx::ObjectPtr< FlxState_obj > _hx_result = new FlxState_obj();
	_hx_result->__construct(MaxSize);
	return _hx_result;
}

Dynamic FlxState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxState_obj > _hx_result = new FlxState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void FlxState_obj::create(){
            	HX_STACK_FRAME("flixel.FlxState","create",0x1148b519,"flixel.FlxState.create","flixel/FlxState.hx",54,0xdf96844c)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,create,(void))

void FlxState_obj::draw(){
            	HX_STACK_FRAME("flixel.FlxState","draw",0x1022c8e1,"flixel.FlxState.draw","flixel/FlxState.hx",57,0xdf96844c)
            	HX_STACK_THIS(this)
HXLINE(  58)		Bool _hx_tmp;
HXDLIN(  58)		if (!(this->persistentDraw)) {
HXLINE(  58)			_hx_tmp = hx::IsNull( this->subState );
            		}
            		else {
HXLINE(  58)			_hx_tmp = true;
            		}
HXDLIN(  58)		if (_hx_tmp) {
HXLINE(  60)			this->super::draw();
            		}
HXLINE(  63)		Bool _hx_tmp1 = hx::IsNotNull( this->subState );
HXDLIN(  63)		if (_hx_tmp1) {
HXLINE(  65)			this->subState->draw();
            		}
            	}


void FlxState_obj::openSubState( ::flixel::FlxSubState SubState){
            	HX_STACK_FRAME("flixel.FlxState","openSubState",0x3d5ea838,"flixel.FlxState.openSubState","flixel/FlxState.hx",70,0xdf96844c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(SubState,"SubState")
HXLINE(  71)		this->_requestSubStateReset = true;
HXLINE(  72)		this->_requestedSubState = SubState;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,openSubState,(void))

void FlxState_obj::closeSubState(){
            	HX_STACK_FRAME("flixel.FlxState","closeSubState",0x519577cc,"flixel.FlxState.closeSubState","flixel/FlxState.hx",80,0xdf96844c)
            	HX_STACK_THIS(this)
HXLINE(  80)		this->_requestSubStateReset = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,closeSubState,(void))

void FlxState_obj::resetSubState(){
            	HX_STACK_FRAME("flixel.FlxState","resetSubState",0x772d18e3,"flixel.FlxState.resetSubState","flixel/FlxState.hx",87,0xdf96844c)
            	HX_STACK_THIS(this)
HXLINE(  89)		Bool _hx_tmp = hx::IsNotNull( this->subState );
HXDLIN(  89)		if (_hx_tmp) {
HXLINE(  91)			Bool _hx_tmp1 = hx::IsNotNull( this->subState->closeCallback );
HXDLIN(  91)			if (_hx_tmp1) {
HXLINE(  93)				this->subState->closeCallback();
            			}
HXLINE(  95)			Bool _hx_tmp2 = this->destroySubStates;
HXDLIN(  95)			if (_hx_tmp2) {
HXLINE(  97)				this->subState->destroy();
            			}
            		}
HXLINE( 102)		this->subState = this->_requestedSubState;
HXLINE( 103)		this->_requestedSubState = null();
HXLINE( 105)		Bool _hx_tmp3 = hx::IsNotNull( this->subState );
HXDLIN( 105)		if (_hx_tmp3) {
HXLINE( 108)			Bool _hx_tmp4 = !(this->persistentUpdate);
HXDLIN( 108)			if (_hx_tmp4) {
HXLINE( 110)				::flixel::FlxG_obj::inputs->onStateSwitch();
            			}
HXLINE( 113)			Bool _hx_tmp5 = !(this->subState->_created);
HXDLIN( 113)			if (_hx_tmp5) {
HXLINE( 115)				this->subState->_created = true;
HXLINE( 116)				this->subState->_parentState = hx::ObjectPtr<OBJ_>(this);
HXLINE( 117)				this->subState->create();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,resetSubState,(void))

void FlxState_obj::destroy(){
            	HX_STACK_FRAME("flixel.FlxState","destroy",0x2171383d,"flixel.FlxState.destroy","flixel/FlxState.hx",123,0xdf96844c)
            	HX_STACK_THIS(this)
HXLINE( 124)		Bool _hx_tmp = hx::IsNotNull( this->subState );
HXDLIN( 124)		if (_hx_tmp) {
HXLINE( 126)			this->subState->destroy();
HXLINE( 127)			this->subState = null();
            		}
HXLINE( 129)		this->super::destroy();
            	}


Bool FlxState_obj::switchTo( ::flixel::FlxState nextState){
            	HX_STACK_FRAME("flixel.FlxState","switchTo",0x5e95c7ec,"flixel.FlxState.switchTo","flixel/FlxState.hx",140,0xdf96844c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(nextState,"nextState")
HXLINE( 140)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,switchTo,return )

void FlxState_obj::onFocusLost(){
            	HX_STACK_FRAME("flixel.FlxState","onFocusLost",0x8c2b4d80,"flixel.FlxState.onFocusLost","flixel/FlxState.hx",147,0xdf96844c)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocusLost,(void))

void FlxState_obj::onFocus(){
            	HX_STACK_FRAME("flixel.FlxState","onFocus",0x97b2097c,"flixel.FlxState.onFocus","flixel/FlxState.hx",153,0xdf96844c)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocus,(void))

void FlxState_obj::onResize(Int Width,Int Height){
            	HX_STACK_FRAME("flixel.FlxState","onResize",0x38e71fd0,"flixel.FlxState.onResize","flixel/FlxState.hx",161,0xdf96844c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Width,"Width")
            	HX_STACK_ARG(Height,"Height")
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,onResize,(void))

void FlxState_obj::tryUpdate(Float elapsed){
            	HX_STACK_FRAME("flixel.FlxState","tryUpdate",0xc75023a7,"flixel.FlxState.tryUpdate","flixel/FlxState.hx",165,0xdf96844c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 166)		Bool _hx_tmp;
HXDLIN( 166)		if (!(this->persistentUpdate)) {
HXLINE( 166)			_hx_tmp = hx::IsNull( this->subState );
            		}
            		else {
HXLINE( 166)			_hx_tmp = true;
            		}
HXDLIN( 166)		if (_hx_tmp) {
HXLINE( 168)			this->update(elapsed);
            		}
HXLINE( 171)		Bool _hx_tmp1 = this->_requestSubStateReset;
HXDLIN( 171)		if (_hx_tmp1) {
HXLINE( 173)			this->_requestSubStateReset = false;
HXLINE( 174)			this->resetSubState();
            		}
            		else {
HXLINE( 176)			Bool _hx_tmp2 = hx::IsNotNull( this->subState );
HXDLIN( 176)			if (_hx_tmp2) {
HXLINE( 178)				this->subState->tryUpdate(elapsed);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,tryUpdate,(void))

Int FlxState_obj::get_bgColor(){
            	HX_STACK_FRAME("flixel.FlxState","get_bgColor",0xc8234a38,"flixel.FlxState.get_bgColor","flixel/FlxState.hx",184,0xdf96844c)
            	HX_STACK_THIS(this)
HXLINE( 184)		return ::flixel::FlxG_obj::cameras->get_bgColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_bgColor,return )

Int FlxState_obj::set_bgColor(Int Value){
            	HX_STACK_FRAME("flixel.FlxState","set_bgColor",0xd2905144,"flixel.FlxState.set_bgColor","flixel/FlxState.hx",189,0xdf96844c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Value,"Value")
HXLINE( 189)		return ::flixel::FlxG_obj::cameras->set_bgColor(Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,set_bgColor,return )


FlxState_obj::FlxState_obj()
{
}

void FlxState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxState);
	HX_MARK_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	HX_MARK_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_MARK_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_MARK_MEMBER_NAME(subState,"subState");
	HX_MARK_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_MARK_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	HX_VISIT_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_VISIT_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_VISIT_MEMBER_NAME(subState,"subState");
	HX_VISIT_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_VISIT_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_bgColor()); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return hx::Val( onFocus_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { return hx::Val( subState); }
		if (HX_FIELD_EQ(inName,"switchTo") ) { return hx::Val( switchTo_dyn()); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return hx::Val( onResize_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tryUpdate") ) { return hx::Val( tryUpdate_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return hx::Val( onFocusLost_dyn()); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return hx::Val( get_bgColor_dyn()); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return hx::Val( set_bgColor_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openSubState") ) { return hx::Val( openSubState_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return hx::Val( closeSubState_dyn()); }
		if (HX_FIELD_EQ(inName,"resetSubState") ) { return hx::Val( resetSubState_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { return hx::Val( persistentDraw); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { return hx::Val( persistentUpdate); }
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { return hx::Val( destroySubStates); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { return hx::Val( _requestedSubState); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { return hx::Val( _requestSubStateReset); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bgColor(inValue) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { subState=inValue.Cast<  ::flixel::FlxSubState >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { persistentDraw=inValue.Cast< Bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { persistentUpdate=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { destroySubStates=inValue.Cast< Bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { _requestedSubState=inValue.Cast<  ::flixel::FlxSubState >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { _requestSubStateReset=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("persistentUpdate","\xc0","\x3b","\x6b","\x50"));
	outFields->push(HX_HCSTRING("persistentDraw","\xfb","\x35","\xc6","\xc2"));
	outFields->push(HX_HCSTRING("destroySubStates","\x88","\x5a","\x28","\x5e"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("subState","\x71","\xcc","\x2a","\xf9"));
	outFields->push(HX_HCSTRING("_requestedSubState","\xc0","\x34","\x35","\xff"));
	outFields->push(HX_HCSTRING("_requestSubStateReset","\xae","\x08","\x1f","\x03"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxState_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxState_obj,persistentUpdate),HX_HCSTRING("persistentUpdate","\xc0","\x3b","\x6b","\x50")},
	{hx::fsBool,(int)offsetof(FlxState_obj,persistentDraw),HX_HCSTRING("persistentDraw","\xfb","\x35","\xc6","\xc2")},
	{hx::fsBool,(int)offsetof(FlxState_obj,destroySubStates),HX_HCSTRING("destroySubStates","\x88","\x5a","\x28","\x5e")},
	{hx::fsObject /*::flixel::FlxSubState*/ ,(int)offsetof(FlxState_obj,subState),HX_HCSTRING("subState","\x71","\xcc","\x2a","\xf9")},
	{hx::fsObject /*::flixel::FlxSubState*/ ,(int)offsetof(FlxState_obj,_requestedSubState),HX_HCSTRING("_requestedSubState","\xc0","\x34","\x35","\xff")},
	{hx::fsBool,(int)offsetof(FlxState_obj,_requestSubStateReset),HX_HCSTRING("_requestSubStateReset","\xae","\x08","\x1f","\x03")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxState_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxState_obj_sMemberFields[] = {
	HX_HCSTRING("persistentUpdate","\xc0","\x3b","\x6b","\x50"),
	HX_HCSTRING("persistentDraw","\xfb","\x35","\xc6","\xc2"),
	HX_HCSTRING("destroySubStates","\x88","\x5a","\x28","\x5e"),
	HX_HCSTRING("subState","\x71","\xcc","\x2a","\xf9"),
	HX_HCSTRING("_requestedSubState","\xc0","\x34","\x35","\xff"),
	HX_HCSTRING("_requestSubStateReset","\xae","\x08","\x1f","\x03"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("openSubState","\x5b","\x66","\x48","\x37"),
	HX_HCSTRING("closeSubState","\x49","\x18","\x32","\x04"),
	HX_HCSTRING("resetSubState","\x60","\xb9","\xc9","\x29"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("switchTo","\x8f","\xf8","\xd6","\x0d"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("tryUpdate","\xa4","\x81","\x19","\x71"),
	HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"),
	HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"),
	::String(null()) };

static void FlxState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxState_obj::__mClass;

void FlxState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxState","\xb1","\xf0","\x80","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
