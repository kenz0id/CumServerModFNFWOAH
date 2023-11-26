#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_InputFormatter
#include <InputFormatter.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_options_ControlsSubState
#include <options/ControlsSubState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_30_new,"options.ControlsSubState","new",0xaec7b8a9,"options.ControlsSubState.new","options/ControlsSubState.hx",30,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_117_update,"options.ControlsSubState","update",0xac333160,"options.ControlsSubState.update","options/ControlsSubState.hx",117,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_188_getInputTextNum,"options.ControlsSubState","getInputTextNum",0xbe6d942e,"options.ControlsSubState.getInputTextNum","options/ControlsSubState.hx",188,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_198_changeSelection,"options.ControlsSubState","changeSelection",0xad494a85,"options.ControlsSubState.changeSelection","options/ControlsSubState.hx",198,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_245_changeAlt,"options.ControlsSubState","changeAlt",0xf3e86aa2,"options.ControlsSubState.changeAlt","options/ControlsSubState.hx",245,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_268_unselectableCheck,"options.ControlsSubState","unselectableCheck",0x9008ce22,"options.ControlsSubState.unselectableCheck","options/ControlsSubState.hx",268,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_275_addBindTexts,"options.ControlsSubState","addBindTexts",0x6d2a405f,"options.ControlsSubState.addBindTexts","options/ControlsSubState.hx",275,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_290_reloadKeys,"options.ControlsSubState","reloadKeys",0xeeca24c4,"options.ControlsSubState.reloadKeys","options/ControlsSubState.hx",290,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_31_boot,"options.ControlsSubState","boot",0x3812dbc9,"options.ControlsSubState.boot","options/ControlsSubState.hx",31,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_32_boot,"options.ControlsSubState","boot",0x3812dbc9,"options.ControlsSubState.boot","options/ControlsSubState.hx",32,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_34_boot,"options.ControlsSubState","boot",0x3812dbc9,"options.ControlsSubState.boot","options/ControlsSubState.hx",34,0x6f367386)
namespace options{

void ControlsSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_30_new)
HXLINE( 116)		this->bindingTime = ((Float)0);
HXLINE( 115)		this->leaving = false;
HXLINE(  69)		this->nextAccept = 5;
HXLINE(  68)		this->rebindingKey = false;
HXLINE(  67)		this->grpInputsAlt = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  66)		this->grpInputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  37)		this->optionShit = ::cpp::VirtualArray_obj::__new(25)->init(0,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("NOTES",21,14,b9,1d)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("note_left",b4,fe,20,a5)))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("note_down",0f,ef,de,9f)))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("note_up",c8,67,5c,4d)))->init(4,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("note_right",8f,ec,ca,4e)))->init(5,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(6,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("UI",54,4a,00,00)))->init(7,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("ui_left",12,4d,89,f7)))->init(8,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("ui_down",6d,3d,47,f2)))->init(9,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("ui_up",a6,c2,91,a3)))->init(10,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("ui_right",71,30,a7,17)))->init(11,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(12,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Reset",af,b9,f5,79))->init(1,HX_("reset",cf,49,c8,e6)))->init(13,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Accept",28,07,9b,3f))->init(1,HX_("accept",08,93,06,0b)))->init(14,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Back",47,06,ea,2b))->init(1,HX_("back",27,da,10,41)))->init(15,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Pause",d6,46,85,50))->init(1,HX_("pause",f6,d6,57,bd)))->init(16,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(17,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("VOLUME",da,d5,d5,11)))->init(18,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Mute",f9,9a,3e,33))->init(1,HX_("volume_mute",9e,6a,db,fa)))->init(19,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("volume_up",e0,76,ad,60)))->init(20,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("volume_down",27,f4,e3,f4)))->init(21,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(22,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("DEBUG",33,8a,0d,55)))->init(23,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Key 1",50,fb,2b,72))->init(1,HX_("debug_1",05,20,57,5b)))->init(24,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Key 2",51,fb,2b,72))->init(1,HX_("debug_2",06,20,57,5b)));
HXLINE(  35)		this->bindLength = 0;
HXLINE(  72)		super::__construct();
HXLINE(  74)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  74)		::String library = null();
HXDLIN(  74)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("menuDesat",26,91,04,72),library);
HXDLIN(  74)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  75)		bg1->set_color(-1412611);
HXLINE(  76)		{
HXLINE(  76)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  76)			bool _hx_tmp;
HXDLIN(  76)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  76)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  76)					_hx_tmp = false;
            				}
            			}
HXDLIN(  76)			if (_hx_tmp) {
HXLINE(  76)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  76)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  76)			bool _hx_tmp1;
HXDLIN(  76)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  76)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  76)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  76)			if (_hx_tmp1) {
HXLINE(  76)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  76)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  77)		bg1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  78)		this->add(bg1);
HXLINE(  80)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  81)		this->add(this->grpOptions);
HXLINE(  83)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)));
HXLINE(  84)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,::options::ControlsSubState_obj::defaultKey));
HXLINE(  86)		{
HXLINE(  86)			int _g = 0;
HXDLIN(  86)			int _g1 = this->optionShit->get_length();
HXDLIN(  86)			while((_g < _g1)){
HXLINE(  86)				_g = (_g + 1);
HXDLIN(  86)				int i = (_g - 1);
HXLINE(  87)				bool isCentered = false;
HXLINE(  88)				bool isDefaultKey = ::hx::IsEq( this->optionShit->__get(i)->__GetItem(0),::options::ControlsSubState_obj::defaultKey );
HXLINE(  89)				if (this->unselectableCheck(i,true)) {
HXLINE(  90)					isCentered = true;
            				}
HXLINE(  93)				bool optionText;
HXDLIN(  93)				if (isCentered) {
HXLINE(  93)					optionText = isDefaultKey;
            				}
            				else {
HXLINE(  93)					optionText = true;
            				}
HXDLIN(  93)				 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((10 * i)) ),( (::String)(this->optionShit->__get(i)->__GetItem(0)) ),optionText,false,null(),null());
HXLINE(  94)				optionText1->isMenuItem = true;
HXLINE(  95)				if (isCentered) {
HXLINE(  96)					{
HXLINE(  96)						 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN(  96)						if (::hx::IsNull( axes )) {
HXLINE(  96)							axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            						}
HXDLIN(  96)						bool _hx_tmp;
HXDLIN(  96)						switch((int)(axes->_hx_getIndex())){
            							case (int)0: case (int)2: {
HXLINE(  96)								_hx_tmp = true;
            							}
            							break;
            							default:{
HXLINE(  96)								_hx_tmp = false;
            							}
            						}
HXDLIN(  96)						if (_hx_tmp) {
HXLINE(  96)							int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  96)							optionText1->set_x(((( (Float)(_hx_tmp) ) - optionText1->get_width()) / ( (Float)(2) )));
            						}
HXDLIN(  96)						bool _hx_tmp1;
HXDLIN(  96)						switch((int)(axes->_hx_getIndex())){
            							case (int)1: case (int)2: {
HXLINE(  96)								_hx_tmp1 = true;
            							}
            							break;
            							default:{
HXLINE(  96)								_hx_tmp1 = false;
            							}
            						}
HXDLIN(  96)						if (_hx_tmp1) {
HXLINE(  96)							int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  96)							optionText1->set_y(((( (Float)(_hx_tmp) ) - optionText1->get_height()) / ( (Float)(2) )));
            						}
            					}
HXLINE(  97)					optionText1->forceX = optionText1->x;
HXLINE(  98)					optionText1->yAdd = ( (Float)(-55) );
            				}
            				else {
HXLINE( 100)					optionText1->forceX = ( (Float)(200) );
            				}
HXLINE( 102)				optionText1->yMult = ( (Float)(60) );
HXLINE( 103)				optionText1->targetY = ( (Float)(i) );
HXLINE( 104)				this->grpOptions->add(optionText1).StaticCast<  ::Alphabet >();
HXLINE( 106)				if (!(isCentered)) {
HXLINE( 107)					this->addBindTexts(optionText1,i);
HXLINE( 108)					this->bindLength++;
HXLINE( 109)					if ((::options::ControlsSubState_obj::curSelected < 0)) {
HXLINE( 109)						::options::ControlsSubState_obj::curSelected = i;
            					}
            				}
            			}
            		}
HXLINE( 112)		this->changeSelection(null());
            	}

Dynamic ControlsSubState_obj::__CreateEmpty() { return new ControlsSubState_obj; }

void *ControlsSubState_obj::_hx_vtable = 0;

Dynamic ControlsSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlsSubState_obj > _hx_result = new ControlsSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ControlsSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x30ee2621) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x30ee2621;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void ControlsSubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_117_update)
HXLINE( 118)		if (!(this->rebindingKey)) {
HXLINE( 119)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 120)				this->changeSelection(-1);
            			}
HXLINE( 122)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 123)				this->changeSelection(1);
            			}
HXLINE( 125)			bool _hx_tmp;
HXDLIN( 125)			if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 125)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            			}
            			else {
HXLINE( 125)				_hx_tmp = true;
            			}
HXDLIN( 125)			if (_hx_tmp) {
HXLINE( 126)				this->changeAlt();
            			}
HXLINE( 129)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 130)				::ClientPrefs_obj::reloadControls();
HXLINE( 131)				this->close();
HXLINE( 132)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 132)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 135)			bool _hx_tmp1;
HXDLIN( 135)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 135)				_hx_tmp1 = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 135)				_hx_tmp1 = false;
            			}
HXDLIN( 135)			if (_hx_tmp1) {
HXLINE( 136)				if (::hx::IsEq( this->optionShit->__get(::options::ControlsSubState_obj::curSelected)->__GetItem(0),::options::ControlsSubState_obj::defaultKey )) {
HXLINE( 137)					::ClientPrefs_obj::keyBinds = ::ClientPrefs_obj::defaultKeys->copy();
HXLINE( 138)					this->reloadKeys();
HXLINE( 139)					this->changeSelection(null());
HXLINE( 140)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 140)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 141)					if (!(this->unselectableCheck(::options::ControlsSubState_obj::curSelected,null()))) {
HXLINE( 142)						this->bindingTime = ( (Float)(0) );
HXLINE( 143)						this->rebindingKey = true;
HXLINE( 144)						if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 145)							this->grpInputsAlt->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
            						else {
HXLINE( 147)							this->grpInputs->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
HXLINE( 149)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 149)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            				}
            			}
            		}
            		else {
HXLINE( 153)			int keyPressed = ::flixel::FlxG_obj::keys->firstJustPressed();
HXLINE( 154)			if ((keyPressed > -1)) {
HXLINE( 155)				::Array< int > keysArray = ( (::Array< int >)(::ClientPrefs_obj::keyBinds->get(this->optionShit->__get(::options::ControlsSubState_obj::curSelected)->__GetItem(1))) );
HXLINE( 156)				int _hx_tmp;
HXDLIN( 156)				if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 156)					_hx_tmp = 1;
            				}
            				else {
HXLINE( 156)					_hx_tmp = 0;
            				}
HXDLIN( 156)				keysArray[_hx_tmp] = keyPressed;
HXLINE( 158)				int opposite;
HXDLIN( 158)				if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 158)					opposite = 0;
            				}
            				else {
HXLINE( 158)					opposite = 1;
            				}
HXLINE( 159)				if ((keysArray->__get(opposite) == keysArray->__get((1 - opposite)))) {
HXLINE( 160)					keysArray[opposite] = -1;
            				}
HXLINE( 162)				::ClientPrefs_obj::keyBinds->set(( (::String)(this->optionShit->__get(::options::ControlsSubState_obj::curSelected)->__GetItem(1)) ),keysArray);
HXLINE( 164)				this->reloadKeys();
HXLINE( 165)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 165)				_hx_tmp1->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 166)				this->rebindingKey = false;
            			}
HXLINE( 169)			 ::options::ControlsSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)			_hx_tmp->bindingTime = (_hx_tmp->bindingTime + elapsed);
HXLINE( 170)			if ((this->bindingTime > 5)) {
HXLINE( 171)				if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 172)					this->grpInputsAlt->__get(::options::ControlsSubState_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE( 174)					this->grpInputs->__get(::options::ControlsSubState_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
HXLINE( 176)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 176)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 177)				this->rebindingKey = false;
HXLINE( 178)				this->bindingTime = ( (Float)(0) );
            			}
            		}
HXLINE( 182)		if ((this->nextAccept > 0)) {
HXLINE( 183)			 ::options::ControlsSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 185)		this->super::update(elapsed);
            	}


int ControlsSubState_obj::getInputTextNum(){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_188_getInputTextNum)
HXLINE( 189)		int num = 0;
HXLINE( 190)		{
HXLINE( 190)			int _g = 0;
HXDLIN( 190)			int _g1 = ::options::ControlsSubState_obj::curSelected;
HXDLIN( 190)			while((_g < _g1)){
HXLINE( 190)				_g = (_g + 1);
HXDLIN( 190)				int i = (_g - 1);
HXLINE( 191)				if (::hx::IsGreater( this->optionShit->__get(i)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),1 )) {
HXLINE( 192)					num = (num + 1);
            				}
            			}
            		}
HXLINE( 195)		return num;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubState_obj,getInputTextNum,return )

void ControlsSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_198_changeSelection)
HXLINE( 199)		while(true){
HXLINE( 200)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::ControlsSubState >();
HXDLIN( 200)			::options::ControlsSubState_obj::curSelected = (::options::ControlsSubState_obj::curSelected + change);
HXLINE( 201)			if ((::options::ControlsSubState_obj::curSelected < 0)) {
HXLINE( 202)				::options::ControlsSubState_obj::curSelected = (this->optionShit->get_length() - 1);
            			}
HXLINE( 203)			if ((::options::ControlsSubState_obj::curSelected >= this->optionShit->get_length())) {
HXLINE( 204)				::options::ControlsSubState_obj::curSelected = 0;
            			}
HXLINE( 199)			if (!(this->unselectableCheck(::options::ControlsSubState_obj::curSelected,null()))) {
HXLINE( 199)				goto _hx_goto_5;
            			}
            		}
            		_hx_goto_5:;
HXLINE( 207)		int bullShit = 0;
HXLINE( 209)		{
HXLINE( 209)			int _g = 0;
HXDLIN( 209)			int _g1 = this->grpInputs->length;
HXDLIN( 209)			while((_g < _g1)){
HXLINE( 209)				_g = (_g + 1);
HXDLIN( 209)				int i = (_g - 1);
HXLINE( 210)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 212)		{
HXLINE( 212)			int _g2 = 0;
HXDLIN( 212)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 212)			while((_g2 < _g3)){
HXLINE( 212)				_g2 = (_g2 + 1);
HXDLIN( 212)				int i = (_g2 - 1);
HXLINE( 213)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 216)		{
HXLINE( 216)			int _g4 = 0;
HXDLIN( 216)			::Array< ::Dynamic> _g5 = this->grpOptions->members;
HXDLIN( 216)			while((_g4 < _g5->length)){
HXLINE( 216)				 ::Alphabet item = _g5->__get(_g4).StaticCast<  ::Alphabet >();
HXDLIN( 216)				_g4 = (_g4 + 1);
HXLINE( 217)				item->targetY = ( (Float)((bullShit - ::options::ControlsSubState_obj::curSelected)) );
HXLINE( 218)				bullShit = (bullShit + 1);
HXLINE( 220)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 221)					item->set_alpha(((Float)0.6));
HXLINE( 222)					if ((item->targetY == 0)) {
HXLINE( 223)						item->set_alpha(( (Float)(1) ));
HXLINE( 224)						if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 225)							int _g = 0;
HXDLIN( 225)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 225)							while((_g < _g1)){
HXLINE( 225)								_g = (_g + 1);
HXDLIN( 225)								int i = (_g - 1);
HXLINE( 226)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 227)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 228)									goto _hx_goto_9;
            								}
            							}
            							_hx_goto_9:;
            						}
            						else {
HXLINE( 232)							int _g = 0;
HXDLIN( 232)							int _g1 = this->grpInputs->length;
HXDLIN( 232)							while((_g < _g1)){
HXLINE( 232)								_g = (_g + 1);
HXDLIN( 232)								int i = (_g - 1);
HXLINE( 233)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 234)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 235)									goto _hx_goto_10;
            								}
            							}
            							_hx_goto_10:;
            						}
            					}
            				}
            			}
            		}
HXLINE( 242)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 242)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlsSubState_obj,changeSelection,(void))

void ControlsSubState_obj::changeAlt(){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_245_changeAlt)
HXLINE( 246)		::options::ControlsSubState_obj::curAlt = !(::options::ControlsSubState_obj::curAlt);
HXLINE( 247)		{
HXLINE( 247)			int _g = 0;
HXDLIN( 247)			int _g1 = this->grpInputs->length;
HXDLIN( 247)			while((_g < _g1)){
HXLINE( 247)				_g = (_g + 1);
HXDLIN( 247)				int i = (_g - 1);
HXLINE( 248)				if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::options::ControlsSubState_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 249)					this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 250)					if (!(::options::ControlsSubState_obj::curAlt)) {
HXLINE( 251)						this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 253)					goto _hx_goto_12;
            				}
            			}
            			_hx_goto_12:;
            		}
HXLINE( 256)		{
HXLINE( 256)			int _g2 = 0;
HXDLIN( 256)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 256)			while((_g2 < _g3)){
HXLINE( 256)				_g2 = (_g2 + 1);
HXDLIN( 256)				int i = (_g2 - 1);
HXLINE( 257)				if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::options::ControlsSubState_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 258)					this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 259)					if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 260)						this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 262)					goto _hx_goto_13;
            				}
            			}
            			_hx_goto_13:;
            		}
HXLINE( 265)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 265)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubState_obj,changeAlt,(void))

bool ControlsSubState_obj::unselectableCheck(int num, ::Dynamic __o_checkDefaultKey){
            		 ::Dynamic checkDefaultKey = __o_checkDefaultKey;
            		if (::hx::IsNull(__o_checkDefaultKey)) checkDefaultKey = false;
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_268_unselectableCheck)
HXLINE( 269)		if (::hx::IsEq( this->optionShit->__get(num)->__GetItem(0),::options::ControlsSubState_obj::defaultKey )) {
HXLINE( 270)			return ( (bool)(checkDefaultKey) );
            		}
HXLINE( 272)		if (::hx::IsLess( this->optionShit->__get(num)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),2 )) {
HXLINE( 272)			return ::hx::IsNotEq( this->optionShit->__get(num)->__GetItem(0),::options::ControlsSubState_obj::defaultKey );
            		}
            		else {
HXLINE( 272)			return false;
            		}
HXDLIN( 272)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubState_obj,unselectableCheck,return )

void ControlsSubState_obj::addBindTexts( ::Alphabet optionText,int num){
            	HX_GC_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_275_addBindTexts)
HXLINE( 276)		::cpp::VirtualArray keys = ( (::cpp::VirtualArray)(::ClientPrefs_obj::keyBinds->get(this->optionShit->__get(num)->__GetItem(1))) );
HXLINE( 277)		 ::AttachedText text1 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(( (int)(keys->__get(0)) )),400,-55,null(),null());
HXLINE( 278)		text1->setPosition((optionText->x + 400),(optionText->y - ( (Float)(55) )));
HXLINE( 279)		text1->sprTracker = optionText;
HXLINE( 280)		this->grpInputs->push(text1);
HXLINE( 281)		this->add(text1);
HXLINE( 283)		 ::AttachedText text2 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(( (int)(keys->__get(1)) )),650,-55,null(),null());
HXLINE( 284)		text2->setPosition((optionText->x + 650),(optionText->y - ( (Float)(55) )));
HXLINE( 285)		text2->sprTracker = optionText;
HXLINE( 286)		this->grpInputsAlt->push(text2);
HXLINE( 287)		this->add(text2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubState_obj,addBindTexts,(void))

void ControlsSubState_obj::reloadKeys(){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_290_reloadKeys)
HXLINE( 291)		while((this->grpInputs->length > 0)){
HXLINE( 292)			 ::AttachedText item = this->grpInputs->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 293)			item->kill();
HXLINE( 294)			this->grpInputs->remove(item);
HXLINE( 295)			item->destroy();
            		}
HXLINE( 297)		while((this->grpInputsAlt->length > 0)){
HXLINE( 298)			 ::AttachedText item = this->grpInputsAlt->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 299)			item->kill();
HXLINE( 300)			this->grpInputsAlt->remove(item);
HXLINE( 301)			item->destroy();
            		}
HXLINE( 304)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 304)		::String _hx_tmp1;
HXDLIN( 304)		if (::hx::IsNull( ::ClientPrefs_obj::keyBinds )) {
HXLINE( 304)			_hx_tmp1 = HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE( 304)			_hx_tmp1 = ::ClientPrefs_obj::keyBinds->toString();
            		}
HXDLIN( 304)		_hx_tmp((HX_("Reloaded keys: ",a2,54,2a,6b) + _hx_tmp1),::hx::SourceInfo(HX_("source/options/ControlsSubState.hx",12,79,41,e8),304,HX_("options.ControlsSubState",37,30,2a,4c),HX_("reloadKeys",ed,81,0e,92)));
HXLINE( 306)		{
HXLINE( 306)			int _g = 0;
HXDLIN( 306)			int _g1 = this->grpOptions->length;
HXDLIN( 306)			while((_g < _g1)){
HXLINE( 306)				_g = (_g + 1);
HXDLIN( 306)				int i = (_g - 1);
HXLINE( 307)				if (!(this->unselectableCheck(i,true))) {
HXLINE( 308)					this->addBindTexts(Dynamic( this->grpOptions->members->__get(i)).StaticCast<  ::Alphabet >(),i);
            				}
            			}
            		}
HXLINE( 313)		int bullShit = 0;
HXLINE( 314)		{
HXLINE( 314)			int _g2 = 0;
HXDLIN( 314)			int _g3 = this->grpInputs->length;
HXDLIN( 314)			while((_g2 < _g3)){
HXLINE( 314)				_g2 = (_g2 + 1);
HXDLIN( 314)				int i = (_g2 - 1);
HXLINE( 315)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 317)		{
HXLINE( 317)			int _g4 = 0;
HXDLIN( 317)			int _g5 = this->grpInputsAlt->length;
HXDLIN( 317)			while((_g4 < _g5)){
HXLINE( 317)				_g4 = (_g4 + 1);
HXDLIN( 317)				int i = (_g4 - 1);
HXLINE( 318)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 321)		{
HXLINE( 321)			int _g6 = 0;
HXDLIN( 321)			::Array< ::Dynamic> _g7 = this->grpOptions->members;
HXDLIN( 321)			while((_g6 < _g7->length)){
HXLINE( 321)				 ::Alphabet item = _g7->__get(_g6).StaticCast<  ::Alphabet >();
HXDLIN( 321)				_g6 = (_g6 + 1);
HXLINE( 322)				item->targetY = ( (Float)((bullShit - ::options::ControlsSubState_obj::curSelected)) );
HXLINE( 323)				bullShit = (bullShit + 1);
HXLINE( 325)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 326)					item->set_alpha(((Float)0.6));
HXLINE( 327)					if ((item->targetY == 0)) {
HXLINE( 328)						item->set_alpha(( (Float)(1) ));
HXLINE( 329)						if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 330)							int _g = 0;
HXDLIN( 330)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 330)							while((_g < _g1)){
HXLINE( 330)								_g = (_g + 1);
HXDLIN( 330)								int i = (_g - 1);
HXLINE( 331)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 332)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            						else {
HXLINE( 336)							int _g = 0;
HXDLIN( 336)							int _g1 = this->grpInputs->length;
HXDLIN( 336)							while((_g < _g1)){
HXLINE( 336)								_g = (_g + 1);
HXDLIN( 336)								int i = (_g - 1);
HXLINE( 337)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 338)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubState_obj,reloadKeys,(void))

int ControlsSubState_obj::curSelected;

bool ControlsSubState_obj::curAlt;

::String ControlsSubState_obj::defaultKey;


::hx::ObjectPtr< ControlsSubState_obj > ControlsSubState_obj::__new() {
	::hx::ObjectPtr< ControlsSubState_obj > __this = new ControlsSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ControlsSubState_obj > ControlsSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ControlsSubState_obj *__this = (ControlsSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlsSubState_obj), true, "options.ControlsSubState"));
	*(void **)__this = ControlsSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ControlsSubState_obj::ControlsSubState_obj()
{
}

void ControlsSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlsSubState);
	HX_MARK_MEMBER_NAME(bindLength,"bindLength");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(grpInputs,"grpInputs");
	HX_MARK_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_MARK_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(leaving,"leaving");
	HX_MARK_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ControlsSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bindLength,"bindLength");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(grpInputs,"grpInputs");
	HX_VISIT_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_VISIT_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(leaving,"leaving");
	HX_VISIT_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ControlsSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { return ::hx::Val( leaving ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { return ::hx::Val( grpInputs ); }
		if (HX_FIELD_EQ(inName,"changeAlt") ) { return ::hx::Val( changeAlt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { return ::hx::Val( bindLength ); }
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"reloadKeys") ) { return ::hx::Val( reloadKeys_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { return ::hx::Val( bindingTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { return ::hx::Val( grpInputsAlt ); }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { return ::hx::Val( rebindingKey ); }
		if (HX_FIELD_EQ(inName,"addBindTexts") ) { return ::hx::Val( addBindTexts_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getInputTextNum") ) { return ::hx::Val( getInputTextNum_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ControlsSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { outValue = ( curAlt ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { outValue = ( defaultKey ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val ControlsSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { leaving=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { grpInputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { bindLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { bindingTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { grpInputsAlt=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { rebindingKey=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ControlsSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { curAlt=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { defaultKey=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ControlsSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bindLength",83,6a,31,c7));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("grpInputs",ee,3e,7e,59));
	outFields->push(HX_("grpInputsAlt",db,fa,fe,c1));
	outFields->push(HX_("rebindingKey",cd,70,6f,a8));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("leaving",f4,09,47,15));
	outFields->push(HX_("bindingTime",f2,09,cb,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ControlsSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ControlsSubState_obj,bindLength),HX_("bindLength",83,6a,31,c7)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ControlsSubState_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(ControlsSubState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubState_obj,grpInputs),HX_("grpInputs",ee,3e,7e,59)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubState_obj,grpInputsAlt),HX_("grpInputsAlt",db,fa,fe,c1)},
	{::hx::fsBool,(int)offsetof(ControlsSubState_obj,rebindingKey),HX_("rebindingKey",cd,70,6f,a8)},
	{::hx::fsInt,(int)offsetof(ControlsSubState_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsBool,(int)offsetof(ControlsSubState_obj,leaving),HX_("leaving",f4,09,47,15)},
	{::hx::fsFloat,(int)offsetof(ControlsSubState_obj,bindingTime),HX_("bindingTime",f2,09,cb,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ControlsSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ControlsSubState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(void *) &ControlsSubState_obj::curAlt,HX_("curAlt",89,9b,c2,3e)},
	{::hx::fsString,(void *) &ControlsSubState_obj::defaultKey,HX_("defaultKey",5e,97,fe,25)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ControlsSubState_obj_sMemberFields[] = {
	HX_("bindLength",83,6a,31,c7),
	HX_("optionShit",d5,2d,ee,91),
	HX_("grpOptions",f9,45,d8,00),
	HX_("grpInputs",ee,3e,7e,59),
	HX_("grpInputsAlt",db,fa,fe,c1),
	HX_("rebindingKey",cd,70,6f,a8),
	HX_("nextAccept",5b,44,38,c0),
	HX_("leaving",f4,09,47,15),
	HX_("bindingTime",f2,09,cb,be),
	HX_("update",09,86,05,87),
	HX_("getInputTextNum",65,e2,d9,59),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeAlt",99,a5,f7,1d),
	HX_("unselectableCheck",19,58,ce,19),
	HX_("addBindTexts",c8,f9,1e,b0),
	HX_("reloadKeys",ed,81,0e,92),
	::String(null()) };

static void ControlsSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlsSubState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(ControlsSubState_obj::curAlt,"curAlt");
	HX_MARK_MEMBER_NAME(ControlsSubState_obj::defaultKey,"defaultKey");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlsSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlsSubState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(ControlsSubState_obj::curAlt,"curAlt");
	HX_VISIT_MEMBER_NAME(ControlsSubState_obj::defaultKey,"defaultKey");
};

#endif

::hx::Class ControlsSubState_obj::__mClass;

static ::String ControlsSubState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("curAlt",89,9b,c2,3e),
	HX_("defaultKey",5e,97,fe,25),
	::String(null())
};

void ControlsSubState_obj::__register()
{
	ControlsSubState_obj _hx_dummy;
	ControlsSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.ControlsSubState",37,30,2a,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ControlsSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &ControlsSubState_obj::__SetStatic;
	__mClass->mMarkFunc = ControlsSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ControlsSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlsSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlsSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlsSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlsSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlsSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ControlsSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_31_boot)
HXDLIN(  31)		curSelected = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_32_boot)
HXDLIN(  32)		curAlt = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_34_boot)
HXDLIN(  34)		defaultKey = HX_("Reset to Default Keys",47,5b,97,3d);
            	}
}

} // end namespace options
