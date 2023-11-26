// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0aefc26d1b1b4062_76_new,"openfl.events.ErrorEvent","new",0x1354a39b,"openfl.events.ErrorEvent.new","openfl/events/ErrorEvent.hx",76,0x9d2fc215)
HX_LOCAL_STACK_FRAME(_hx_pos_0aefc26d1b1b4062_82_clone,"openfl.events.ErrorEvent","clone",0xbbab6b58,"openfl.events.ErrorEvent.clone","openfl/events/ErrorEvent.hx",82,0x9d2fc215)
HX_LOCAL_STACK_FRAME(_hx_pos_0aefc26d1b1b4062_92_toString,"openfl.events.ErrorEvent","toString",0x299f6791,"openfl.events.ErrorEvent.toString","openfl/events/ErrorEvent.hx",92,0x9d2fc215)
static const ::String _hx_array_data_60863a29_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("text",ad,cc,f9,4c),HX_("errorID",a3,8d,0a,ea),
};
HX_LOCAL_STACK_FRAME(_hx_pos_0aefc26d1b1b4062_96___init,"openfl.events.ErrorEvent","__init",0x60b841d5,"openfl.events.ErrorEvent.__init","openfl/events/ErrorEvent.hx",96,0x9d2fc215)
HX_LOCAL_STACK_FRAME(_hx_pos_0aefc26d1b1b4062_43_boot,"openfl.events.ErrorEvent","boot",0xced38497,"openfl.events.ErrorEvent.boot","openfl/events/ErrorEvent.hx",43,0x9d2fc215)
namespace openfl{
namespace events{

void ErrorEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		int id = __o_id.Default(0);
            	HX_STACKFRAME(&_hx_pos_0aefc26d1b1b4062_76_new)
HXLINE(  77)		super::__construct(type,bubbles,cancelable,text);
HXLINE(  78)		this->errorID = id;
            	}

Dynamic ErrorEvent_obj::__CreateEmpty() { return new ErrorEvent_obj; }

void *ErrorEvent_obj::_hx_vtable = 0;

Dynamic ErrorEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ErrorEvent_obj > _hx_result = new ErrorEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool ErrorEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27730e1f) {
		if (inClassId<=(int)0x08ec4c31) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
		} else {
			return inClassId==(int)0x27730e1f;
		}
	} else {
		return inClassId==(int)0x53d8fde0;
	}
}

 ::openfl::events::Event ErrorEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_0aefc26d1b1b4062_82_clone)
HXLINE(  83)		 ::openfl::events::ErrorEvent event =  ::openfl::events::ErrorEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->text,this->errorID);
HXLINE(  84)		event->target = this->target;
HXLINE(  85)		event->currentTarget = this->currentTarget;
HXLINE(  86)		event->eventPhase = this->eventPhase;
HXLINE(  87)		return event;
            	}


::String ErrorEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_0aefc26d1b1b4062_92_toString)
HXDLIN(  92)		return this->_hx___formatToString(HX_("ErrorEvent",52,bb,79,e1),::Array_obj< ::String >::fromData( _hx_array_data_60863a29_3,5));
            	}


void ErrorEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_0aefc26d1b1b4062_96___init)
HXLINE(  97)		this->super::_hx___init();
HXLINE(  98)		this->errorID = 0;
            	}


::String ErrorEvent_obj::ERROR;


::hx::ObjectPtr< ErrorEvent_obj > ErrorEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< ErrorEvent_obj > __this = new ErrorEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return __this;
}

::hx::ObjectPtr< ErrorEvent_obj > ErrorEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id) {
	ErrorEvent_obj *__this = (ErrorEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ErrorEvent_obj), true, "openfl.events.ErrorEvent"));
	*(void **)__this = ErrorEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return __this;
}

ErrorEvent_obj::ErrorEvent_obj()
{
}

::hx::Val ErrorEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { return ::hx::Val( errorID ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ErrorEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { errorID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("errorID",a3,8d,0a,ea));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ErrorEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ErrorEvent_obj,errorID),HX_("errorID",a3,8d,0a,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ErrorEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ErrorEvent_obj::ERROR,HX_("ERROR",a8,03,18,f1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ErrorEvent_obj_sMemberFields[] = {
	HX_("errorID",a3,8d,0a,ea),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void ErrorEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ErrorEvent_obj::ERROR,"ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ErrorEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ErrorEvent_obj::ERROR,"ERROR");
};

#endif

::hx::Class ErrorEvent_obj::__mClass;

static ::String ErrorEvent_obj_sStaticFields[] = {
	HX_("ERROR",a8,03,18,f1),
	::String(null())
};

void ErrorEvent_obj::__register()
{
	ErrorEvent_obj _hx_dummy;
	ErrorEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.ErrorEvent",29,3a,86,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ErrorEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ErrorEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ErrorEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ErrorEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ErrorEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ErrorEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ErrorEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ErrorEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0aefc26d1b1b4062_43_boot)
HXDLIN(  43)		ERROR = HX_("error",c8,cb,29,73);
            	}
}

} // end namespace openfl
} // end namespace events
