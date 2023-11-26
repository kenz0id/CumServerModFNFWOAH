#include <hxcpp.h>

#ifndef INCLUDED_CutsceneHandler
#include <CutsceneHandler.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ca757ac2f78dbf6d_33_new,"CutsceneHandler","new",0xa5db8932,"CutsceneHandler.new","CutsceneHandler.hx",33,0x3467227e)
HX_DEFINE_STACK_FRAME(_hx_pos_ca757ac2f78dbf6d_19_new,"CutsceneHandler","new",0xa5db8932,"CutsceneHandler.new","CutsceneHandler.hx",19,0x3467227e)
HX_LOCAL_STACK_FRAME(_hx_pos_ca757ac2f78dbf6d_47_update,"CutsceneHandler","update",0xf9ef9c77,"CutsceneHandler.update","CutsceneHandler.hx",47,0x3467227e)
HX_LOCAL_STACK_FRAME(_hx_pos_ca757ac2f78dbf6d_83_push,"CutsceneHandler","push",0x7b9b10c8,"CutsceneHandler.push","CutsceneHandler.hx",83,0x3467227e)
HX_LOCAL_STACK_FRAME(_hx_pos_ca757ac2f78dbf6d_87_timer,"CutsceneHandler","timer",0xf1bad117,"CutsceneHandler.timer","CutsceneHandler.hx",87,0x3467227e)
HX_LOCAL_STACK_FRAME(_hx_pos_ca757ac2f78dbf6d_94_sortByTime,"CutsceneHandler","sortByTime",0xc5f1e0f0,"CutsceneHandler.sortByTime","CutsceneHandler.hx",94,0x3467227e)

void CutsceneHandler_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::CutsceneHandler,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_ca757ac2f78dbf6d_33_new)
HXLINE(  34)			if (::hx::IsNotNull( _gthis->music )) {
HXLINE(  36)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  36)				::String library = null();
HXDLIN(  36)				 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),_gthis->music,library);
HXDLIN(  36)				_hx_tmp->playMusic(file,0,false,null());
HXLINE(  37)				{
HXLINE(  37)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  37)					 ::Dynamic onComplete = null();
HXDLIN(  37)					if (::hx::IsNull( _this->_channel )) {
HXLINE(  37)						_this->play(null(),null(),null());
            					}
HXDLIN(  37)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  37)						_this->fadeTween->cancel();
            					}
HXDLIN(  37)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),( (Float)(1) ), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
            			}
HXLINE(  39)			if (::hx::IsNotNull( _gthis->onStart )) {
HXLINE(  39)				_gthis->onStart();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_ca757ac2f78dbf6d_19_new)
HXLINE(  45)		this->firstFrame = false;
HXLINE(  44)		this->cutsceneTime = ((Float)0);
HXLINE(  27)		this->music = null();
HXLINE(  26)		this->objects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		this->endTime = ((Float)0);
HXLINE(  24)		this->onStart = null();
HXLINE(  23)		this->finishCallback2 = null();
HXLINE(  22)		this->finishCallback = null();
HXLINE(  21)		this->timedEvents = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  29)		 ::CutsceneHandler _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  30)		super::__construct();
HXLINE(  32)		this->timer(( (Float)(0) ), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  41)		::PlayState_obj::instance->add(::hx::ObjectPtr<OBJ_>(this)).StaticCast<  ::flixel::FlxBasic >();
            	}

Dynamic CutsceneHandler_obj::__CreateEmpty() { return new CutsceneHandler_obj; }

void *CutsceneHandler_obj::_hx_vtable = 0;

Dynamic CutsceneHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CutsceneHandler_obj > _hx_result = new CutsceneHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CutsceneHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x11a6fc9c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x11a6fc9c;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void CutsceneHandler_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ca757ac2f78dbf6d_47_update)
HXLINE(  48)		this->super::update(elapsed);
HXLINE(  50)		bool _hx_tmp;
HXDLIN(  50)		if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,::PlayState_obj::instance )) {
HXLINE(  50)			_hx_tmp = !(this->firstFrame);
            		}
            		else {
HXLINE(  50)			_hx_tmp = true;
            		}
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  52)			this->firstFrame = true;
HXLINE(  53)			return;
            		}
HXLINE(  56)		 ::CutsceneHandler _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  56)		_hx_tmp1->cutsceneTime = (_hx_tmp1->cutsceneTime + elapsed);
HXLINE(  57)		if ((this->endTime <= this->cutsceneTime)) {
HXLINE(  59)			this->finishCallback();
HXLINE(  60)			if (::hx::IsNotNull( this->finishCallback2 )) {
HXLINE(  60)				this->finishCallback2();
            			}
HXLINE(  62)			{
HXLINE(  62)				int _g = 0;
HXDLIN(  62)				::Array< ::Dynamic> _g1 = this->objects;
HXDLIN(  62)				while((_g < _g1->length)){
HXLINE(  62)					 ::flixel::FlxSprite spr = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  62)					_g = (_g + 1);
HXLINE(  64)					spr->kill();
HXLINE(  65)					::PlayState_obj::instance->remove(spr,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  66)					spr->destroy();
            				}
            			}
HXLINE(  69)			this->kill();
HXLINE(  70)			this->destroy();
HXLINE(  71)			::PlayState_obj::instance->remove(::hx::ObjectPtr<OBJ_>(this),null()).StaticCast<  ::flixel::FlxBasic >();
            		}
HXLINE(  74)		while(true){
HXLINE(  74)			bool _hx_tmp;
HXDLIN(  74)			if ((this->timedEvents->get_length() > 0)) {
HXLINE(  74)				_hx_tmp = ::hx::IsLessEq( this->timedEvents->__get(0)->__GetItem(0),this->cutsceneTime );
            			}
            			else {
HXLINE(  74)				_hx_tmp = false;
            			}
HXDLIN(  74)			if (!(_hx_tmp)) {
HXLINE(  74)				goto _hx_goto_3;
            			}
HXLINE(  76)			this->timedEvents->__get(0)->__GetItem(1)();
HXLINE(  77)			this->timedEvents->splice(0,1);
            		}
            		_hx_goto_3:;
            	}


void CutsceneHandler_obj::push( ::flixel::FlxSprite spr){
            	HX_STACKFRAME(&_hx_pos_ca757ac2f78dbf6d_83_push)
HXDLIN(  83)		this->objects->push(spr);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CutsceneHandler_obj,push,(void))

void CutsceneHandler_obj::timer(Float time, ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_ca757ac2f78dbf6d_87_timer)
HXLINE(  88)		this->timedEvents->push(::cpp::VirtualArray_obj::__new(2)->init(0,time)->init(1,func));
HXLINE(  89)		this->timedEvents->sort(this->sortByTime_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(CutsceneHandler_obj,timer,(void))

int CutsceneHandler_obj::sortByTime(::cpp::VirtualArray Obj1,::cpp::VirtualArray Obj2){
            	HX_STACKFRAME(&_hx_pos_ca757ac2f78dbf6d_94_sortByTime)
HXDLIN(  94)		Float Value1 = ( (Float)(Obj1->__get(0)) );
HXDLIN(  94)		Float Value2 = ( (Float)(Obj2->__get(0)) );
HXDLIN(  94)		int result = 0;
HXDLIN(  94)		if ((Value1 < Value2)) {
HXDLIN(  94)			result = -1;
            		}
            		else {
HXDLIN(  94)			if ((Value1 > Value2)) {
HXDLIN(  94)				result = 1;
            			}
            		}
HXDLIN(  94)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CutsceneHandler_obj,sortByTime,return )


::hx::ObjectPtr< CutsceneHandler_obj > CutsceneHandler_obj::__new() {
	::hx::ObjectPtr< CutsceneHandler_obj > __this = new CutsceneHandler_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CutsceneHandler_obj > CutsceneHandler_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CutsceneHandler_obj *__this = (CutsceneHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CutsceneHandler_obj), true, "CutsceneHandler"));
	*(void **)__this = CutsceneHandler_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CutsceneHandler_obj::CutsceneHandler_obj()
{
}

void CutsceneHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CutsceneHandler);
	HX_MARK_MEMBER_NAME(timedEvents,"timedEvents");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(finishCallback2,"finishCallback2");
	HX_MARK_MEMBER_NAME(onStart,"onStart");
	HX_MARK_MEMBER_NAME(endTime,"endTime");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(cutsceneTime,"cutsceneTime");
	HX_MARK_MEMBER_NAME(firstFrame,"firstFrame");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CutsceneHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timedEvents,"timedEvents");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(finishCallback2,"finishCallback2");
	HX_VISIT_MEMBER_NAME(onStart,"onStart");
	HX_VISIT_MEMBER_NAME(endTime,"endTime");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(cutsceneTime,"cutsceneTime");
	HX_VISIT_MEMBER_NAME(firstFrame,"firstFrame");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CutsceneHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return ::hx::Val( music ); }
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( timer_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { return ::hx::Val( onStart ); }
		if (HX_FIELD_EQ(inName,"endTime") ) { return ::hx::Val( endTime ); }
		if (HX_FIELD_EQ(inName,"objects") ) { return ::hx::Val( objects ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstFrame") ) { return ::hx::Val( firstFrame ); }
		if (HX_FIELD_EQ(inName,"sortByTime") ) { return ::hx::Val( sortByTime_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timedEvents") ) { return ::hx::Val( timedEvents ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cutsceneTime") ) { return ::hx::Val( cutsceneTime ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"finishCallback2") ) { return ::hx::Val( finishCallback2 ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CutsceneHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { onStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endTime") ) { endTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstFrame") ) { firstFrame=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timedEvents") ) { timedEvents=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cutsceneTime") ) { cutsceneTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"finishCallback2") ) { finishCallback2=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CutsceneHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("timedEvents",30,a6,65,ae));
	outFields->push(HX_("endTime",88,85,21,2f));
	outFields->push(HX_("objects",d4,68,4f,82));
	outFields->push(HX_("music",a5,d0,5a,10));
	outFields->push(HX_("cutsceneTime",b7,21,e9,17));
	outFields->push(HX_("firstFrame",dd,c1,61,44));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CutsceneHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(CutsceneHandler_obj,timedEvents),HX_("timedEvents",30,a6,65,ae)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CutsceneHandler_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CutsceneHandler_obj,finishCallback2),HX_("finishCallback2",fa,6f,50,70)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CutsceneHandler_obj,onStart),HX_("onStart",c3,12,49,1a)},
	{::hx::fsFloat,(int)offsetof(CutsceneHandler_obj,endTime),HX_("endTime",88,85,21,2f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CutsceneHandler_obj,objects),HX_("objects",d4,68,4f,82)},
	{::hx::fsString,(int)offsetof(CutsceneHandler_obj,music),HX_("music",a5,d0,5a,10)},
	{::hx::fsFloat,(int)offsetof(CutsceneHandler_obj,cutsceneTime),HX_("cutsceneTime",b7,21,e9,17)},
	{::hx::fsBool,(int)offsetof(CutsceneHandler_obj,firstFrame),HX_("firstFrame",dd,c1,61,44)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CutsceneHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String CutsceneHandler_obj_sMemberFields[] = {
	HX_("timedEvents",30,a6,65,ae),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("finishCallback2",fa,6f,50,70),
	HX_("onStart",c3,12,49,1a),
	HX_("endTime",88,85,21,2f),
	HX_("objects",d4,68,4f,82),
	HX_("music",a5,d0,5a,10),
	HX_("cutsceneTime",b7,21,e9,17),
	HX_("firstFrame",dd,c1,61,44),
	HX_("update",09,86,05,87),
	HX_("push",da,11,61,4a),
	HX_("timer",c5,bf,35,10),
	HX_("sortByTime",82,fb,30,6f),
	::String(null()) };

::hx::Class CutsceneHandler_obj::__mClass;

void CutsceneHandler_obj::__register()
{
	CutsceneHandler_obj _hx_dummy;
	CutsceneHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CutsceneHandler",40,c8,76,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CutsceneHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CutsceneHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CutsceneHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CutsceneHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

