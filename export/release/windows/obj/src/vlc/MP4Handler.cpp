#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_vlc_MP4Handler
#include <vlc/MP4Handler.h>
#endif
#ifndef INCLUDED_vlc_bitmap_VlcBitmap
#include <vlc/bitmap/VlcBitmap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f429363a5b435b7_32_new,"vlc.MP4Handler","new",0x00a774ac,"vlc.MP4Handler.new","vlc/MP4Handler.hx",32,0xe9b617a3)
HX_DEFINE_STACK_FRAME(_hx_pos_6f429363a5b435b7_36_new,"vlc.MP4Handler","new",0x00a774ac,"vlc.MP4Handler.new","vlc/MP4Handler.hx",36,0xe9b617a3)
HX_DEFINE_STACK_FRAME(_hx_pos_6f429363a5b435b7_19_new,"vlc.MP4Handler","new",0x00a774ac,"vlc.MP4Handler.new","vlc/MP4Handler.hx",19,0xe9b617a3)
HX_LOCAL_STACK_FRAME(_hx_pos_6f429363a5b435b7_41_update,"vlc.MP4Handler","update",0xd5cc993d,"vlc.MP4Handler.update","vlc/MP4Handler.hx",41,0xe9b617a3)
HX_LOCAL_STACK_FRAME(_hx_pos_6f429363a5b435b7_53_checkFile,"vlc.MP4Handler","checkFile",0x30a17cb0,"vlc.MP4Handler.checkFile","vlc/MP4Handler.hx",53,0xe9b617a3)
HX_LOCAL_STACK_FRAME(_hx_pos_6f429363a5b435b7_71_onVLCVideoReady,"vlc.MP4Handler","onVLCVideoReady",0x5ce1a662,"vlc.MP4Handler.onVLCVideoReady","vlc/MP4Handler.hx",71,0xe9b617a3)
HX_LOCAL_STACK_FRAME(_hx_pos_6f429363a5b435b7_81_onVLCError,"vlc.MP4Handler","onVLCError",0xafb9d58e,"vlc.MP4Handler.onVLCError","vlc/MP4Handler.hx",81,0xe9b617a3)
HX_LOCAL_STACK_FRAME(_hx_pos_6f429363a5b435b7_85_finishVideo,"vlc.MP4Handler","finishVideo",0xb0440774,"vlc.MP4Handler.finishVideo","vlc/MP4Handler.hx",85,0xe9b617a3)
HX_LOCAL_STACK_FRAME(_hx_pos_6f429363a5b435b7_109_playVideo,"vlc.MP4Handler","playVideo",0xf0e62733,"vlc.MP4Handler.playVideo","vlc/MP4Handler.hx",109,0xe9b617a3)
namespace vlc{

void MP4Handler_obj::__construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_autoScale){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::vlc::MP4Handler,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_6f429363a5b435b7_32_new)
HXLINE(  32)			_gthis->resume();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::vlc::MP4Handler,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_6f429363a5b435b7_36_new)
HXLINE(  36)			_gthis->pause();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		Float width = __o_width.Default(320);
            		Float height = __o_height.Default(240);
            		bool autoScale = __o_autoScale.Default(true);
            	HX_STACKFRAME(&_hx_pos_6f429363a5b435b7_19_new)
HXDLIN(  19)		 ::vlc::MP4Handler _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  20)		super::__construct(width,height,autoScale);
HXLINE(  22)		this->onVideoReady = this->onVLCVideoReady_dyn();
HXLINE(  23)		this->onComplete = this->finishVideo_dyn();
HXLINE(  24)		this->onError = this->onVLCError_dyn();
HXLINE(  26)		::flixel::FlxG_obj::addChildBelowMouse(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE(  28)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null(),null(),null());
HXLINE(  30)		::flixel::FlxG_obj::signals->focusGained->add( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  34)		::flixel::FlxG_obj::signals->focusLost->add( ::Dynamic(new _hx_Closure_1(_gthis)));
            	}

Dynamic MP4Handler_obj::__CreateEmpty() { return new MP4Handler_obj; }

void *MP4Handler_obj::_hx_vtable = 0;

Dynamic MP4Handler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MP4Handler_obj > _hx_result = new MP4Handler_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MP4Handler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4cc42801) {
		if (inClassId<=(int)0x1db24446) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x1db24446;
			}
		} else {
			return inClassId==(int)0x4cc42801;
		}
	} else {
		return inClassId==(int)0x58b52de4 || inClassId==(int)0x6b353933;
	}
}

void MP4Handler_obj::update( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_6f429363a5b435b7_41_update)
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		bool _hx_tmp1;
HXDLIN(  42)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  42)		if (!(_this->keyManager->checkStatusUnsafe(13,_this->status))) {
HXLINE(  42)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  42)			_hx_tmp1 = _this->keyManager->checkStatusUnsafe(32,_this->status);
            		}
            		else {
HXLINE(  42)			_hx_tmp1 = true;
            		}
HXDLIN(  42)		if (_hx_tmp1) {
HXLINE(  42)			_hx_tmp = this->isPlaying;
            		}
            		else {
HXLINE(  42)			_hx_tmp = false;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  43)			this->finishVideo();
            		}
HXLINE(  45)		bool _hx_tmp2;
HXDLIN(  45)		if (!(::flixel::FlxG_obj::sound->muted)) {
HXLINE(  45)			_hx_tmp2 = (::flixel::FlxG_obj::sound->volume <= 0);
            		}
            		else {
HXLINE(  45)			_hx_tmp2 = true;
            		}
HXDLIN(  45)		if (_hx_tmp2) {
HXLINE(  46)			this->set_volume(( (Float)(0) ));
            		}
            		else {
HXLINE(  48)			this->set_volume((::flixel::FlxG_obj::sound->volume + ((Float)0.4)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MP4Handler_obj,update,(void))

::String MP4Handler_obj::checkFile(::String fileName){
            	HX_STACKFRAME(&_hx_pos_6f429363a5b435b7_53_checkFile)
HXLINE(  55)		::String pDir = HX_("",00,00,00,00);
HXLINE(  56)		::String appDir = ((HX_("file:///",91,ef,e4,54) + ::Sys_obj::getCwd()) + HX_("/",2f,00,00,00));
HXLINE(  58)		if ((fileName.indexOf(HX_(":",3a,00,00,00),null()) == -1)) {
HXLINE(  59)			pDir = appDir;
            		}
            		else {
HXLINE(  60)			bool _hx_tmp;
HXDLIN(  60)			if ((fileName.indexOf(HX_("file://",de,92,3b,ff),null()) != -1)) {
HXLINE(  60)				_hx_tmp = (fileName.indexOf(HX_("http",88,9b,16,45),null()) == -1);
            			}
            			else {
HXLINE(  60)				_hx_tmp = true;
            			}
HXDLIN(  60)			if (_hx_tmp) {
HXLINE(  61)				pDir = HX_("file:///",91,ef,e4,54);
            			}
            		}
HXLINE(  63)		return (pDir + fileName);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MP4Handler_obj,checkFile,return )

void MP4Handler_obj::onVLCVideoReady(){
            	HX_STACKFRAME(&_hx_pos_6f429363a5b435b7_71_onVLCVideoReady)
HXLINE(  72)		::haxe::Log_obj::trace(HX_("Video loaded!",b7,d7,5b,40),::hx::SourceInfo(HX_("vlc/MP4Handler.hx",a3,17,b6,e9),72,HX_("vlc.MP4Handler",ba,ee,54,31),HX_("onVLCVideoReady",16,c0,82,a6)));
HXLINE(  74)		if (::hx::IsNotNull( this->readyCallback )) {
HXLINE(  75)			this->readyCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MP4Handler_obj,onVLCVideoReady,(void))

void MP4Handler_obj::onVLCError(){
            	HX_STACKFRAME(&_hx_pos_6f429363a5b435b7_81_onVLCError)
HXDLIN(  81)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("VLC caught an error!",bb,69,0d,c2)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MP4Handler_obj,onVLCError,(void))

void MP4Handler_obj::finishVideo(){
            	HX_STACKFRAME(&_hx_pos_6f429363a5b435b7_85_finishVideo)
HXLINE(  86)		bool _hx_tmp;
HXDLIN(  86)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  86)			_hx_tmp = this->pauseMusic;
            		}
            		else {
HXLINE(  86)			_hx_tmp = false;
            		}
HXDLIN(  86)		if (_hx_tmp) {
HXLINE(  87)			::flixel::FlxG_obj::sound->music->resume();
            		}
HXLINE(  89)		::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null());
HXLINE(  91)		this->dispose();
HXLINE(  93)		if (::flixel::FlxG_obj::game->contains(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE(  95)			::flixel::FlxG_obj::game->removeChild(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  97)			if (::hx::IsNotNull( this->finishCallback )) {
HXLINE(  98)				this->finishCallback();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MP4Handler_obj,finishVideo,(void))

void MP4Handler_obj::playVideo(::String path, ::Dynamic __o_repeat,::hx::Null< bool >  __o_pauseMusic){
            		 ::Dynamic repeat = __o_repeat;
            		if (::hx::IsNull(__o_repeat)) repeat = false;
            		bool pauseMusic = __o_pauseMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_6f429363a5b435b7_109_playVideo)
HXLINE( 110)		this->pauseMusic = pauseMusic;
HXLINE( 112)		bool _hx_tmp;
HXDLIN( 112)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 112)			_hx_tmp = pauseMusic;
            		}
            		else {
HXLINE( 112)			_hx_tmp = false;
            		}
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 113)			::flixel::FlxG_obj::sound->music->pause();
            		}
HXLINE( 116)		this->play(this->checkFile(path));
HXLINE( 118)		int _hx_tmp1;
HXDLIN( 118)		if (( (bool)(repeat) )) {
HXLINE( 118)			_hx_tmp1 = -1;
            		}
            		else {
HXLINE( 118)			_hx_tmp1 = 0;
            		}
HXDLIN( 118)		this->repeat = _hx_tmp1;
            	}


HX_DEFINE_DYNAMIC_FUNC3(MP4Handler_obj,playVideo,(void))


::hx::ObjectPtr< MP4Handler_obj > MP4Handler_obj::__new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_autoScale) {
	::hx::ObjectPtr< MP4Handler_obj > __this = new MP4Handler_obj();
	__this->__construct(__o_width,__o_height,__o_autoScale);
	return __this;
}

::hx::ObjectPtr< MP4Handler_obj > MP4Handler_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_autoScale) {
	MP4Handler_obj *__this = (MP4Handler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MP4Handler_obj), true, "vlc.MP4Handler"));
	*(void **)__this = MP4Handler_obj::_hx_vtable;
	__this->__construct(__o_width,__o_height,__o_autoScale);
	return __this;
}

MP4Handler_obj::MP4Handler_obj()
{
}

void MP4Handler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MP4Handler);
	HX_MARK_MEMBER_NAME(readyCallback,"readyCallback");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	 ::vlc::bitmap::VlcBitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MP4Handler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(readyCallback,"readyCallback");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	 ::vlc::bitmap::VlcBitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MP4Handler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checkFile") ) { return ::hx::Val( checkFile_dyn() ); }
		if (HX_FIELD_EQ(inName,"playVideo") ) { return ::hx::Val( playVideo_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		if (HX_FIELD_EQ(inName,"onVLCError") ) { return ::hx::Val( onVLCError_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishVideo") ) { return ::hx::Val( finishVideo_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readyCallback") ) { return ::hx::Val( readyCallback ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onVLCVideoReady") ) { return ::hx::Val( onVLCVideoReady_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MP4Handler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readyCallback") ) { readyCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MP4Handler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MP4Handler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MP4Handler_obj,readyCallback),HX_("readyCallback",48,91,6e,fe)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MP4Handler_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsBool,(int)offsetof(MP4Handler_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MP4Handler_obj_sStaticStorageInfo = 0;
#endif

static ::String MP4Handler_obj_sMemberFields[] = {
	HX_("readyCallback",48,91,6e,fe),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("update",09,86,05,87),
	HX_("checkFile",64,97,9b,97),
	HX_("onVLCVideoReady",16,c0,82,a6),
	HX_("onVLCError",5a,18,97,63),
	HX_("finishVideo",28,37,01,5e),
	HX_("playVideo",e7,41,e0,57),
	::String(null()) };

::hx::Class MP4Handler_obj::__mClass;

void MP4Handler_obj::__register()
{
	MP4Handler_obj _hx_dummy;
	MP4Handler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("vlc.MP4Handler",ba,ee,54,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MP4Handler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MP4Handler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MP4Handler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MP4Handler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace vlc
