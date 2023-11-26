// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fafdee3291969395_14_new,"openfl.ui.GameInputDevice","new",0x66440344,"openfl.ui.GameInputDevice.new","openfl/ui/GameInputDevice.hx",14,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_94_getCachedSamples,"openfl.ui.GameInputDevice","getCachedSamples",0x0422a56d,"openfl.ui.GameInputDevice.getCachedSamples","openfl/ui/GameInputDevice.hx",94,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_103_getControlAt,"openfl.ui.GameInputDevice","getControlAt",0xc65be2d6,"openfl.ui.GameInputDevice.getControlAt","openfl/ui/GameInputDevice.hx",103,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_117_startCachingSamples,"openfl.ui.GameInputDevice","startCachingSamples",0xf3794db0,"openfl.ui.GameInputDevice.startCachingSamples","openfl/ui/GameInputDevice.hx",117,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_122_stopCachingSamples,"openfl.ui.GameInputDevice","stopCachingSamples",0xbbb05408,"openfl.ui.GameInputDevice.stopCachingSamples","openfl/ui/GameInputDevice.hx",122,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_127_get_numControls,"openfl.ui.GameInputDevice","get_numControls",0x2a978757,"openfl.ui.GameInputDevice.get_numControls","openfl/ui/GameInputDevice.hx",127,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_21_boot,"openfl.ui.GameInputDevice","boot",0x0d57d8ce,"openfl.ui.GameInputDevice.boot","openfl/ui/GameInputDevice.hx",21,0x744a6f4c)
namespace openfl{
namespace ui{

void GameInputDevice_obj::__construct(::String id,::String name){
            	HX_GC_STACKFRAME(&_hx_pos_fafdee3291969395_14_new)
HXLINE(  50)		this->_hx___controls = ::Array_obj< ::Dynamic>::__new();
HXLINE(  49)		this->_hx___button =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  48)		this->_hx___axis =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  66)		this->id = id;
HXLINE(  67)		this->name = name;
HXLINE(  69)		 ::openfl::ui::GameInputControl control;
HXLINE(  71)		{
HXLINE(  72)			{
HXLINE(  73)				control =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),(HX_("AXIS_",9e,28,6e,a7) + 0),( (Float)(-1) ),( (Float)(1) ),null());
HXLINE(  74)				this->_hx___axis->set(0,control);
HXLINE(  75)				this->_hx___controls->push(control);
            			}
HXLINE(  72)			{
HXLINE(  73)				control =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),(HX_("AXIS_",9e,28,6e,a7) + 1),( (Float)(-1) ),( (Float)(1) ),null());
HXLINE(  74)				this->_hx___axis->set(1,control);
HXLINE(  75)				this->_hx___controls->push(control);
            			}
HXLINE(  72)			{
HXLINE(  73)				control =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),(HX_("AXIS_",9e,28,6e,a7) + 2),( (Float)(-1) ),( (Float)(1) ),null());
HXLINE(  74)				this->_hx___axis->set(2,control);
HXLINE(  75)				this->_hx___controls->push(control);
            			}
HXLINE(  72)			{
HXLINE(  73)				control =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),(HX_("AXIS_",9e,28,6e,a7) + 3),( (Float)(-1) ),( (Float)(1) ),null());
HXLINE(  74)				this->_hx___axis->set(3,control);
HXLINE(  75)				this->_hx___controls->push(control);
            			}
HXLINE(  72)			{
HXLINE(  73)				control =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),(HX_("AXIS_",9e,28,6e,a7) + 4),( (Float)(-1) ),( (Float)(1) ),null());
HXLINE(  74)				this->_hx___axis->set(4,control);
HXLINE(  75)				this->_hx___controls->push(control);
            			}
HXLINE(  72)			{
HXLINE(  73)				control =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),(HX_("AXIS_",9e,28,6e,a7) + 5),( (Float)(-1) ),( (Float)(1) ),null());
HXLINE(  74)				this->_hx___axis->set(5,control);
HXLINE(  75)				this->_hx___controls->push(control);
            			}
            		}
HXLINE(  78)		{
HXLINE(  78)			int _g = 0;
HXDLIN(  78)			while((_g < 15)){
HXLINE(  78)				_g = (_g + 1);
HXDLIN(  78)				int i = (_g - 1);
HXLINE(  80)				control =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),(HX_("BUTTON_",2d,26,49,4a) + i),( (Float)(0) ),( (Float)(1) ),null());
HXLINE(  81)				this->_hx___button->set(i,control);
HXLINE(  82)				this->_hx___controls->push(control);
            			}
            		}
            	}

Dynamic GameInputDevice_obj::__CreateEmpty() { return new GameInputDevice_obj; }

void *GameInputDevice_obj::_hx_vtable = 0;

Dynamic GameInputDevice_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameInputDevice_obj > _hx_result = new GameInputDevice_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GameInputDevice_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1bd2e2aa;
}

int GameInputDevice_obj::getCachedSamples( ::openfl::utils::ByteArrayData data,::hx::Null< bool >  __o_append){
            		bool append = __o_append.Default(false);
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_94_getCachedSamples)
HXDLIN(  94)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameInputDevice_obj,getCachedSamples,return )

 ::openfl::ui::GameInputControl GameInputDevice_obj::getControlAt(int i){
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_103_getControlAt)
HXLINE( 104)		bool _hx_tmp;
HXDLIN( 104)		if ((i >= 0)) {
HXLINE( 104)			_hx_tmp = (i < this->_hx___controls->length);
            		}
            		else {
HXLINE( 104)			_hx_tmp = false;
            		}
HXDLIN( 104)		if (_hx_tmp) {
HXLINE( 106)			return this->_hx___controls->__get(i).StaticCast<  ::openfl::ui::GameInputControl >();
            		}
HXLINE( 109)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameInputDevice_obj,getControlAt,return )

void GameInputDevice_obj::startCachingSamples(int numSamples, ::openfl::_Vector::ObjectVector controls){
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_117_startCachingSamples)
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameInputDevice_obj,startCachingSamples,(void))

void GameInputDevice_obj::stopCachingSamples(){
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_122_stopCachingSamples)
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameInputDevice_obj,stopCachingSamples,(void))

int GameInputDevice_obj::get_numControls(){
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_127_get_numControls)
HXDLIN( 127)		return this->_hx___controls->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameInputDevice_obj,get_numControls,return )

int GameInputDevice_obj::MAX_BUFFER_SIZE;


::hx::ObjectPtr< GameInputDevice_obj > GameInputDevice_obj::__new(::String id,::String name) {
	::hx::ObjectPtr< GameInputDevice_obj > __this = new GameInputDevice_obj();
	__this->__construct(id,name);
	return __this;
}

::hx::ObjectPtr< GameInputDevice_obj > GameInputDevice_obj::__alloc(::hx::Ctx *_hx_ctx,::String id,::String name) {
	GameInputDevice_obj *__this = (GameInputDevice_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameInputDevice_obj), true, "openfl.ui.GameInputDevice"));
	*(void **)__this = GameInputDevice_obj::_hx_vtable;
	__this->__construct(id,name);
	return __this;
}

GameInputDevice_obj::GameInputDevice_obj()
{
}

void GameInputDevice_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputDevice);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(sampleInterval,"sampleInterval");
	HX_MARK_MEMBER_NAME(_hx___axis,"__axis");
	HX_MARK_MEMBER_NAME(_hx___button,"__button");
	HX_MARK_MEMBER_NAME(_hx___controls,"__controls");
	HX_MARK_MEMBER_NAME(_hx___gamepad,"__gamepad");
	HX_MARK_END_CLASS();
}

void GameInputDevice_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(sampleInterval,"sampleInterval");
	HX_VISIT_MEMBER_NAME(_hx___axis,"__axis");
	HX_VISIT_MEMBER_NAME(_hx___button,"__button");
	HX_VISIT_MEMBER_NAME(_hx___controls,"__controls");
	HX_VISIT_MEMBER_NAME(_hx___gamepad,"__gamepad");
}

::hx::Val GameInputDevice_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__axis") ) { return ::hx::Val( _hx___axis ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__button") ) { return ::hx::Val( _hx___button ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__gamepad") ) { return ::hx::Val( _hx___gamepad ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__controls") ) { return ::hx::Val( _hx___controls ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numControls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numControls() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getControlAt") ) { return ::hx::Val( getControlAt_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sampleInterval") ) { return ::hx::Val( sampleInterval ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numControls") ) { return ::hx::Val( get_numControls_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getCachedSamples") ) { return ::hx::Val( getCachedSamples_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stopCachingSamples") ) { return ::hx::Val( stopCachingSamples_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"startCachingSamples") ) { return ::hx::Val( startCachingSamples_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameInputDevice_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__axis") ) { _hx___axis=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__button") ) { _hx___button=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__gamepad") ) { _hx___gamepad=inValue.Cast<  ::lime::ui::Gamepad >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__controls") ) { _hx___controls=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sampleInterval") ) { sampleInterval=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInputDevice_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("numControls",dc,d6,d2,23));
	outFields->push(HX_("sampleInterval",8f,cf,73,9c));
	outFields->push(HX_("__axis",c1,7f,71,ef));
	outFields->push(HX_("__button",12,cd,0f,82));
	outFields->push(HX_("__controls",96,f9,f4,da));
	outFields->push(HX_("__gamepad",81,31,d4,0a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameInputDevice_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(GameInputDevice_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsString,(int)offsetof(GameInputDevice_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsString,(int)offsetof(GameInputDevice_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(GameInputDevice_obj,sampleInterval),HX_("sampleInterval",8f,cf,73,9c)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(GameInputDevice_obj,_hx___axis),HX_("__axis",c1,7f,71,ef)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(GameInputDevice_obj,_hx___button),HX_("__button",12,cd,0f,82)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(GameInputDevice_obj,_hx___controls),HX_("__controls",96,f9,f4,da)},
	{::hx::fsObject /*  ::lime::ui::Gamepad */ ,(int)offsetof(GameInputDevice_obj,_hx___gamepad),HX_("__gamepad",81,31,d4,0a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GameInputDevice_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &GameInputDevice_obj::MAX_BUFFER_SIZE,HX_("MAX_BUFFER_SIZE",25,86,77,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GameInputDevice_obj_sMemberFields[] = {
	HX_("enabled",81,04,31,7e),
	HX_("id",db,5b,00,00),
	HX_("name",4b,72,ff,48),
	HX_("sampleInterval",8f,cf,73,9c),
	HX_("__axis",c1,7f,71,ef),
	HX_("__button",12,cd,0f,82),
	HX_("__controls",96,f9,f4,da),
	HX_("__gamepad",81,31,d4,0a),
	HX_("getCachedSamples",d1,d6,6b,23),
	HX_("getControlAt",3a,92,8f,9c),
	HX_("startCachingSamples",cc,12,5e,6d),
	HX_("stopCachingSamples",6c,a6,b3,24),
	HX_("get_numControls",73,8e,b4,e4),
	::String(null()) };

static void GameInputDevice_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInputDevice_obj::MAX_BUFFER_SIZE,"MAX_BUFFER_SIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameInputDevice_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInputDevice_obj::MAX_BUFFER_SIZE,"MAX_BUFFER_SIZE");
};

#endif

::hx::Class GameInputDevice_obj::__mClass;

static ::String GameInputDevice_obj_sStaticFields[] = {
	HX_("MAX_BUFFER_SIZE",25,86,77,ea),
	::String(null())
};

void GameInputDevice_obj::__register()
{
	GameInputDevice_obj _hx_dummy;
	GameInputDevice_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.ui.GameInputDevice",52,51,b0,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GameInputDevice_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GameInputDevice_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameInputDevice_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameInputDevice_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameInputDevice_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameInputDevice_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameInputDevice_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameInputDevice_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_21_boot)
HXDLIN(  21)		MAX_BUFFER_SIZE = 32000;
            	}
}

} // end namespace openfl
} // end namespace ui
