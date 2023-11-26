#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_GameplaySettingsSubState
#include <options/GameplaySettingsSubState.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37066bb048b40dd4_33_new,"options.GameplaySettingsSubState","new",0xd343549c,"options.GameplaySettingsSubState.new","options/GameplaySettingsSubState.hx",33,0x85e60df3)
HX_LOCAL_STACK_FRAME(_hx_pos_37066bb048b40dd4_153_onChangeHitsoundVolume,"options.GameplaySettingsSubState","onChangeHitsoundVolume",0x34624629,"options.GameplaySettingsSubState.onChangeHitsoundVolume","options/GameplaySettingsSubState.hx",153,0x85e60df3)
namespace options{

void GameplaySettingsSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_37066bb048b40dd4_33_new)
HXLINE(  34)		this->title = HX_("Gameplay Settings",5d,89,f2,c3);
HXLINE(  35)		this->rpcTitle = HX_("Gameplay Settings Menu",62,67,72,62);
HXLINE(  37)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Controller Mode",67,49,9f,a9),HX_("Check this if you want to play with\na controller instead of using your Keyboard.",a3,4f,07,9e),HX_("controllerMode",1f,16,a7,29),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  42)		this->addOption(option);
HXLINE(  45)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Downscroll",0f,4a,85,46),HX_("If checked, notes go Down instead of Up, simple enough.",0d,a5,bc,fc),HX_("downScroll",0f,ba,68,84),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  50)		this->addOption(option1);
HXLINE(  52)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Middlescroll",42,a5,d6,f5),HX_("If checked, your notes get centered.",9c,98,94,3e),HX_("middleScroll",42,cd,58,62),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  57)		this->addOption(option2);
HXLINE(  59)		 ::options::Option option3 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Opponent Notes",7e,b9,ec,7e),HX_("If unchecked, opponent notes get hidden.",57,fc,a8,02),HX_("opponentStrums",87,04,01,1c),HX_("bool",2a,84,1b,41),true,null());
HXLINE(  64)		this->addOption(option3);
HXLINE(  66)		 ::options::Option option4 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Ghost Tapping",44,6c,9f,40),HX_("If checked, you won't get misses from pressing keys\nwhile there are no notes able to be hit.",c7,46,2f,fa),HX_("ghostTapping",c6,6a,da,10),HX_("bool",2a,84,1b,41),true,null());
HXLINE(  71)		this->addOption(option4);
HXLINE(  73)		 ::options::Option option5 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Disable Reset Button",bb,b9,2b,75),HX_("If checked, pressing Reset won't do anything.",ee,76,e8,10),HX_("noReset",ce,cd,cb,b9),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  78)		this->addOption(option5);
HXLINE(  80)		 ::options::Option option6 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Hitsound Volume",de,af,92,68),HX_("Funny notes does \"Tick!\" when you hit them.\"",b2,5a,bb,e5),HX_("hitsoundVolume",96,34,9b,8f),HX_("percent",c5,aa,da,78),0,null());
HXLINE(  85)		this->addOption(option6);
HXLINE(  86)		option6->scrollSpeed = ((Float)1.6);
HXLINE(  87)		option6->minValue = ((Float)0.0);
HXLINE(  88)		option6->maxValue = 1;
HXLINE(  89)		option6->changeValue = ((Float)0.1);
HXLINE(  90)		option6->decimals = 1;
HXLINE(  91)		option6->onChange = this->onChangeHitsoundVolume_dyn();
HXLINE(  93)		 ::options::Option option7 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Rating Offset",36,6d,0e,f3),HX_("Changes how late/early you have to hit for a \"Sick!\"\nHigher values mean you have to hit later.",98,66,84,c8),HX_("ratingOffset",90,b3,eb,a5),HX_("int",ef,0c,50,00),0,null());
HXLINE(  98)		option7->displayFormat = HX_("%vms",57,ce,ce,18);
HXLINE(  99)		option7->scrollSpeed = ( (Float)(20) );
HXLINE( 100)		option7->minValue = -30;
HXLINE( 101)		option7->maxValue = 30;
HXLINE( 102)		this->addOption(option7);
HXLINE( 104)		 ::options::Option option8 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Sick! Hit Window",da,75,69,f4),HX_("Changes the amount of time you have\nfor hitting a \"Sick!\" in milliseconds.",70,a1,b8,aa),HX_("sickWindow",4e,b7,93,ed),HX_("int",ef,0c,50,00),45,null());
HXLINE( 109)		option8->displayFormat = HX_("%vms",57,ce,ce,18);
HXLINE( 110)		option8->scrollSpeed = ( (Float)(15) );
HXLINE( 111)		option8->minValue = 15;
HXLINE( 112)		option8->maxValue = 45;
HXLINE( 113)		this->addOption(option8);
HXLINE( 115)		 ::options::Option option9 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Good Hit Window",40,78,9c,02),HX_("Changes the amount of time you have\nfor hitting a \"Good\" in milliseconds.",6e,11,57,54),HX_("goodWindow",0d,a9,05,67),HX_("int",ef,0c,50,00),90,null());
HXLINE( 120)		option9->displayFormat = HX_("%vms",57,ce,ce,18);
HXLINE( 121)		option9->scrollSpeed = ( (Float)(30) );
HXLINE( 122)		option9->minValue = 15;
HXLINE( 123)		option9->maxValue = 90;
HXLINE( 124)		this->addOption(option9);
HXLINE( 126)		 ::options::Option option10 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Bad Hit Window",f8,a4,d4,a7),HX_("Changes the amount of time you have\nfor hitting a \"Bad\" in milliseconds.",92,b2,88,fa),HX_("badWindow",95,db,0a,32),HX_("int",ef,0c,50,00),135,null());
HXLINE( 131)		option10->displayFormat = HX_("%vms",57,ce,ce,18);
HXLINE( 132)		option10->scrollSpeed = ( (Float)(60) );
HXLINE( 133)		option10->minValue = 15;
HXLINE( 134)		option10->maxValue = 135;
HXLINE( 135)		this->addOption(option10);
HXLINE( 137)		 ::options::Option option11 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Safe Frames",19,0a,34,55),HX_("Changes how many frames you have for\nhitting a note earlier or late.",09,48,9a,6e),HX_("safeFrames",d3,18,18,62),HX_("float",9c,c5,96,02),10,null());
HXLINE( 142)		option11->scrollSpeed = ( (Float)(5) );
HXLINE( 143)		option11->minValue = 2;
HXLINE( 144)		option11->maxValue = 10;
HXLINE( 145)		option11->changeValue = ((Float)0.1);
HXLINE( 146)		this->addOption(option11);
HXLINE( 148)		super::__construct();
            	}

Dynamic GameplaySettingsSubState_obj::__CreateEmpty() { return new GameplaySettingsSubState_obj; }

void *GameplaySettingsSubState_obj::_hx_vtable = 0;

Dynamic GameplaySettingsSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameplaySettingsSubState_obj > _hx_result = new GameplaySettingsSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameplaySettingsSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x3499c078) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x3499c078;
			}
		} else {
			return inClassId==(int)0x5661ffbf || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void GameplaySettingsSubState_obj::onChangeHitsoundVolume(){
            	HX_STACKFRAME(&_hx_pos_37066bb048b40dd4_153_onChangeHitsoundVolume)
HXDLIN( 153)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 153)		 ::openfl::media::Sound _hx_tmp1 = ::Paths_obj::sound(HX_("hitsound",9c,79,fe,2c),null());
HXDLIN( 153)		_hx_tmp->play(_hx_tmp1,::ClientPrefs_obj::hitsoundVolume,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplaySettingsSubState_obj,onChangeHitsoundVolume,(void))


::hx::ObjectPtr< GameplaySettingsSubState_obj > GameplaySettingsSubState_obj::__new() {
	::hx::ObjectPtr< GameplaySettingsSubState_obj > __this = new GameplaySettingsSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GameplaySettingsSubState_obj > GameplaySettingsSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GameplaySettingsSubState_obj *__this = (GameplaySettingsSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameplaySettingsSubState_obj), true, "options.GameplaySettingsSubState"));
	*(void **)__this = GameplaySettingsSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameplaySettingsSubState_obj::GameplaySettingsSubState_obj()
{
}

::hx::Val GameplaySettingsSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"onChangeHitsoundVolume") ) { return ::hx::Val( onChangeHitsoundVolume_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GameplaySettingsSubState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GameplaySettingsSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String GameplaySettingsSubState_obj_sMemberFields[] = {
	HX_("onChangeHitsoundVolume",e5,b4,78,31),
	::String(null()) };

::hx::Class GameplaySettingsSubState_obj::__mClass;

void GameplaySettingsSubState_obj::__register()
{
	GameplaySettingsSubState_obj _hx_dummy;
	GameplaySettingsSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.GameplaySettingsSubState",aa,16,a6,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameplaySettingsSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameplaySettingsSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameplaySettingsSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameplaySettingsSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
