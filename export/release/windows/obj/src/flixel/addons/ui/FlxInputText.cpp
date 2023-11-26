#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_75fddae7e64ce41a_32_new,"flixel.addons.ui.FlxInputText","new",0xf37b21c8,"flixel.addons.ui.FlxInputText.new","flixel/addons/ui/FlxInputText.hx",32,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_59_set_customFilterPattern,"flixel.addons.ui.FlxInputText","set_customFilterPattern",0x8ca18812,"flixel.addons.ui.FlxInputText.set_customFilterPattern","flixel/addons/ui/FlxInputText.hx",59,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_81_set_caretColor,"flixel.addons.ui.FlxInputText","set_caretColor",0xe765d535,"flixel.addons.ui.FlxInputText.set_caretColor","flixel/addons/ui/FlxInputText.hx",81,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_90_set_caretWidth,"flixel.addons.ui.FlxInputText","set_caretWidth",0x676c19d8,"flixel.addons.ui.FlxInputText.set_caretWidth","flixel/addons/ui/FlxInputText.hx",90,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_248_destroy,"flixel.addons.ui.FlxInputText","destroy",0x8dd65262,"flixel.addons.ui.FlxInputText.destroy","flixel/addons/ui/FlxInputText.hx",248,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_273_draw,"flixel.addons.ui.FlxInputText","draw",0x11b0159c,"flixel.addons.ui.FlxInputText.draw","flixel/addons/ui/FlxInputText.hx",273,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_294_drawSprite,"flixel.addons.ui.FlxInputText","drawSprite",0x07ac82c1,"flixel.addons.ui.FlxInputText.drawSprite","flixel/addons/ui/FlxInputText.hx",294,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_306_update,"flixel.addons.ui.FlxInputText","update",0x954505a1,"flixel.addons.ui.FlxInputText.update","flixel/addons/ui/FlxInputText.hx",306,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_335_onKeyDown,"flixel.addons.ui.FlxInputText","onKeyDown",0xeda471aa,"flixel.addons.ui.FlxInputText.onKeyDown","flixel/addons/ui/FlxInputText.hx",335,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_474_onChange,"flixel.addons.ui.FlxInputText","onChange",0x53f01d87,"flixel.addons.ui.FlxInputText.onChange","flixel/addons/ui/FlxInputText.hx",474,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_489_insertSubstring,"flixel.addons.ui.FlxInputText","insertSubstring",0xe0c1ad40,"flixel.addons.ui.FlxInputText.insertSubstring","flixel/addons/ui/FlxInputText.hx",489,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_507_getCaretIndex,"flixel.addons.ui.FlxInputText","getCaretIndex",0xfe00362d,"flixel.addons.ui.FlxInputText.getCaretIndex","flixel/addons/ui/FlxInputText.hx",507,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_517_getCharBoundaries,"flixel.addons.ui.FlxInputText","getCharBoundaries",0x38cd7cdc,"flixel.addons.ui.FlxInputText.getCharBoundaries","flixel/addons/ui/FlxInputText.hx",517,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_535_set_text,"flixel.addons.ui.FlxInputText","set_text",0x37e27742,"flixel.addons.ui.FlxInputText.set_text","flixel/addons/ui/FlxInputText.hx",535,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_582_getCharIndexAtPoint,"flixel.addons.ui.FlxInputText","getCharIndexAtPoint",0xf4438f7f,"flixel.addons.ui.FlxInputText.getCharIndexAtPoint","flixel/addons/ui/FlxInputText.hx",582,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_633_prepareCharBoundaries,"flixel.addons.ui.FlxInputText","prepareCharBoundaries",0x33edc58d,"flixel.addons.ui.FlxInputText.prepareCharBoundaries","flixel/addons/ui/FlxInputText.hx",633,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_661_onSetTextCheck,"flixel.addons.ui.FlxInputText","onSetTextCheck",0x14902030,"flixel.addons.ui.FlxInputText.onSetTextCheck","flixel/addons/ui/FlxInputText.hx",661,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_705_calcFrame,"flixel.addons.ui.FlxInputText","calcFrame",0x733ee2c0,"flixel.addons.ui.FlxInputText.calcFrame","flixel/addons/ui/FlxInputText.hx",705,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_791_toggleCaret,"flixel.addons.ui.FlxInputText","toggleCaret",0x6f59aab7,"flixel.addons.ui.FlxInputText.toggleCaret","flixel/addons/ui/FlxInputText.hx",791,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_799_filter,"flixel.addons.ui.FlxInputText","filter",0x93749f50,"flixel.addons.ui.FlxInputText.filter","flixel/addons/ui/FlxInputText.hx",799,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_831_set_params,"flixel.addons.ui.FlxInputText","set_params",0xe3d3351b,"flixel.addons.ui.FlxInputText.set_params","flixel/addons/ui/FlxInputText.hx",831,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_843_set_x,"flixel.addons.ui.FlxInputText","set_x",0x02dc16c3,"flixel.addons.ui.FlxInputText.set_x","flixel/addons/ui/FlxInputText.hx",843,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_856_set_y,"flixel.addons.ui.FlxInputText","set_y",0x02dc16c4,"flixel.addons.ui.FlxInputText.set_y","flixel/addons/ui/FlxInputText.hx",856,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_869_set_hasFocus,"flixel.addons.ui.FlxInputText","set_hasFocus",0xf91bc333,"flixel.addons.ui.FlxInputText.set_hasFocus","flixel/addons/ui/FlxInputText.hx",869,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_897_getAlignStr,"flixel.addons.ui.FlxInputText","getAlignStr",0xf6458f0a,"flixel.addons.ui.FlxInputText.getAlignStr","flixel/addons/ui/FlxInputText.hx",897,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_907_set_caretIndex,"flixel.addons.ui.FlxInputText","set_caretIndex",0x5b1dfee4,"flixel.addons.ui.FlxInputText.set_caretIndex","flixel/addons/ui/FlxInputText.hx",907,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_986_set_forceCase,"flixel.addons.ui.FlxInputText","set_forceCase",0x119aa786,"flixel.addons.ui.FlxInputText.set_forceCase","flixel/addons/ui/FlxInputText.hx",986,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_993_set_size,"flixel.addons.ui.FlxInputText","set_size",0x373c4b56,"flixel.addons.ui.FlxInputText.set_size","flixel/addons/ui/FlxInputText.hx",993,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1000_set_maxLength,"flixel.addons.ui.FlxInputText","set_maxLength",0x992e7ff5,"flixel.addons.ui.FlxInputText.set_maxLength","flixel/addons/ui/FlxInputText.hx",1000,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1010_set_lines,"flixel.addons.ui.FlxInputText","set_lines",0x15ae75ca,"flixel.addons.ui.FlxInputText.set_lines","flixel/addons/ui/FlxInputText.hx",1010,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1032_get_passwordMode,"flixel.addons.ui.FlxInputText","get_passwordMode",0x890c263f,"flixel.addons.ui.FlxInputText.get_passwordMode","flixel/addons/ui/FlxInputText.hx",1032,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1036_set_passwordMode,"flixel.addons.ui.FlxInputText","set_passwordMode",0xdf4e13b3,"flixel.addons.ui.FlxInputText.set_passwordMode","flixel/addons/ui/FlxInputText.hx",1036,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1043_set_filterMode,"flixel.addons.ui.FlxInputText","set_filterMode",0xd267a390,"flixel.addons.ui.FlxInputText.set_filterMode","flixel/addons/ui/FlxInputText.hx",1043,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1050_set_fieldBorderColor,"flixel.addons.ui.FlxInputText","set_fieldBorderColor",0x31131c52,"flixel.addons.ui.FlxInputText.set_fieldBorderColor","flixel/addons/ui/FlxInputText.hx",1050,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1057_set_fieldBorderThickness,"flixel.addons.ui.FlxInputText","set_fieldBorderThickness",0x8f7f3fe3,"flixel.addons.ui.FlxInputText.set_fieldBorderThickness","flixel/addons/ui/FlxInputText.hx",1057,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1064_set_backgroundColor,"flixel.addons.ui.FlxInputText","set_backgroundColor",0x1e95b220,"flixel.addons.ui.FlxInputText.set_backgroundColor","flixel/addons/ui/FlxInputText.hx",1064,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_34_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",34,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_35_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",35,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_36_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",36,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_37_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",37,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_38_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",38,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_40_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",40,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_41_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",41,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_42_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",42,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_44_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",44,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_45_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",45,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_46_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",46,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_47_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",47,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_48_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",48,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_49_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",49,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_50_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",50,0x19fbd1e7)
namespace flixel{
namespace addons{
namespace ui{

void FlxInputText_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		int Width = __o_Width.Default(150);
            		int size = __o_size.Default(8);
            		int TextColor = __o_TextColor.Default(-16777216);
            		int BackgroundColor = __o_BackgroundColor.Default(-1);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_32_new)
HXLINE( 185)		this->_scrollBoundIndeces =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("right",dc,0b,64,e9),0)
            			->setFixed(1,HX_("left",07,08,b0,47),0));
HXLINE( 160)		this->backgroundColor = -1;
HXLINE( 155)		this->fieldBorderThickness = 1;
HXLINE( 150)		this->fieldBorderColor = -16777216;
HXLINE( 145)		this->filterMode = 0;
HXLINE( 134)		this->maxLength = 0;
HXLINE( 128)		this->forceCase = 0;
HXLINE( 111)		this->caretIndex = 0;
HXLINE( 106)		this->hasFocus = false;
HXLINE(  87)		this->caretWidth = 1;
HXLINE(  73)		this->background = false;
HXLINE( 208)		super::__construct(X,Y,Width,Text,size,EmbeddedFont);
HXLINE( 209)		this->set_backgroundColor(BackgroundColor);
HXLINE( 211)		if ((BackgroundColor != 0)) {
HXLINE( 213)			this->background = true;
            		}
HXLINE( 216)		this->set_color(TextColor);
HXLINE( 217)		this->set_caretColor(TextColor);
HXLINE( 219)		this->caret =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 220)		 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 220)		int _hx_tmp1 = this->caretWidth;
HXDLIN( 220)		_hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int(( (Float)((size + 2)) )),null(),null(),null());
HXLINE( 221)		this->_caretTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE( 223)		this->set_caretIndex(0);
HXLINE( 224)		this->set_hasFocus(false);
HXLINE( 225)		if (this->background) {
HXLINE( 227)			this->fieldBorderSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,X,Y,null());
HXLINE( 228)			this->backgroundSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,X,Y,null());
            		}
HXLINE( 231)		this->set_lines(1);
HXLINE( 232)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("keyDown",a1,69,47,9c),this->onKeyDown_dyn(),null(),null(),null());
HXLINE( 234)		if (::hx::IsNull( Text )) {
HXLINE( 236)			Text = HX_("",00,00,00,00);
            		}
HXLINE( 239)		this->set_text(Text);
HXLINE( 241)		this->calcFrame(null());
            	}

Dynamic FlxInputText_obj::__CreateEmpty() { return new FlxInputText_obj; }

void *FlxInputText_obj::_hx_vtable = 0;

Dynamic FlxInputText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxInputText_obj > _hx_result = new FlxInputText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxInputText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x2e702350) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x2e702350;
			}
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

 ::EReg FlxInputText_obj::set_customFilterPattern( ::EReg cfp){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_59_set_customFilterPattern)
HXLINE(  60)		this->customFilterPattern = cfp;
HXLINE(  61)		this->set_filterMode(4);
HXLINE(  62)		return this->customFilterPattern;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_customFilterPattern,return )

int FlxInputText_obj::set_caretColor(int i){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_81_set_caretColor)
HXLINE(  82)		this->caretColor = i;
HXLINE(  83)		this->dirty = true;
HXLINE(  84)		return this->caretColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretColor,return )

int FlxInputText_obj::set_caretWidth(int i){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_90_set_caretWidth)
HXLINE(  91)		this->caretWidth = i;
HXLINE(  92)		this->dirty = true;
HXLINE(  93)		return this->caretWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretWidth,return )

void FlxInputText_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_248_destroy)
HXLINE( 249)		::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("keyDown",a1,69,47,9c),this->onKeyDown_dyn(),null());
HXLINE( 251)		this->backgroundSprite = ( ( ::flixel::FlxSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->backgroundSprite)) );
HXLINE( 252)		this->fieldBorderSprite = ( ( ::flixel::FlxSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->fieldBorderSprite)) );
HXLINE( 253)		this->callback = null();
HXLINE( 256)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 258)			while((this->_charBoundaries->length > 0)){
HXLINE( 260)				this->_charBoundaries->pop().StaticCast<  ::flixel::math::FlxRect >();
            			}
HXLINE( 262)			this->_charBoundaries = null();
            		}
HXLINE( 266)		this->super::destroy();
            	}


void FlxInputText_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_273_draw)
HXLINE( 274)		this->drawSprite(this->fieldBorderSprite);
HXLINE( 275)		this->drawSprite(this->backgroundSprite);
HXLINE( 277)		this->super::draw();
HXLINE( 280)		bool _hx_tmp;
HXDLIN( 280)		if ((this->caretColor == this->caret->color)) {
HXLINE( 280)			Float _hx_tmp1 = this->caret->get_height();
HXDLIN( 280)			_hx_tmp = (_hx_tmp1 != (::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2));
            		}
            		else {
HXLINE( 280)			_hx_tmp = true;
            		}
HXDLIN( 280)		if (_hx_tmp) {
HXLINE( 282)			this->caret->set_color(this->caretColor);
            		}
HXLINE( 285)		this->drawSprite(this->caret);
            	}


void FlxInputText_obj::drawSprite( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_294_drawSprite)
HXDLIN( 294)		bool _hx_tmp;
HXDLIN( 294)		if (::hx::IsNotNull( Sprite )) {
HXDLIN( 294)			_hx_tmp = Sprite->visible;
            		}
            		else {
HXDLIN( 294)			_hx_tmp = false;
            		}
HXDLIN( 294)		if (_hx_tmp) {
HXLINE( 296)			Sprite->scrollFactor = this->scrollFactor;
HXLINE( 297)			Sprite->set_cameras(this->get_cameras());
HXLINE( 298)			Sprite->draw();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,drawSprite,(void))

void FlxInputText_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_306_update)
HXLINE( 307)		this->super::update(elapsed);
HXLINE( 311)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 313)			bool hadFocus = this->hasFocus;
HXLINE( 314)			if (::flixel::FlxG_obj::mouse->overlaps(::hx::ObjectPtr<OBJ_>(this),null())) {
HXLINE( 316)				this->set_caretIndex(this->getCaretIndex());
HXLINE( 317)				this->set_hasFocus(true);
HXLINE( 318)				bool _hx_tmp;
HXDLIN( 318)				if (!(hadFocus)) {
HXLINE( 318)					_hx_tmp = ::hx::IsNotNull( this->focusGained );
            				}
            				else {
HXLINE( 318)					_hx_tmp = false;
            				}
HXDLIN( 318)				if (_hx_tmp) {
HXLINE( 319)					this->focusGained();
            				}
            			}
            			else {
HXLINE( 323)				this->set_hasFocus(false);
HXLINE( 324)				bool _hx_tmp;
HXDLIN( 324)				if (hadFocus) {
HXLINE( 324)					_hx_tmp = ::hx::IsNotNull( this->focusLost );
            				}
            				else {
HXLINE( 324)					_hx_tmp = false;
            				}
HXDLIN( 324)				if (_hx_tmp) {
HXLINE( 325)					this->focusLost();
            				}
            			}
            		}
            	}


void FlxInputText_obj::onKeyDown( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_335_onKeyDown)
HXLINE( 336)		int key = e->keyCode;
HXLINE( 338)		if (this->hasFocus) {
HXLINE( 347)			bool _hx_tmp;
HXDLIN( 347)			if ((key == 67)) {
HXLINE( 347)				_hx_tmp = e->ctrlKey;
            			}
            			else {
HXLINE( 347)				_hx_tmp = false;
            			}
HXDLIN( 347)			if (_hx_tmp) {
HXLINE( 349)				::lime::_hx_system::Clipboard_obj::set_text(this->text);
HXLINE( 351)				this->onChange(HX_("copy",b5,bb,c4,41));
HXLINE( 354)				return;
            			}
HXLINE( 361)			bool _hx_tmp1;
HXDLIN( 361)			if ((key == 86)) {
HXLINE( 361)				_hx_tmp1 = e->ctrlKey;
            			}
            			else {
HXLINE( 361)				_hx_tmp1 = false;
            			}
HXDLIN( 361)			if (_hx_tmp1) {
HXLINE( 363)				::String newText = this->filter(::lime::_hx_system::Clipboard_obj::get_text());
HXLINE( 365)				bool _hx_tmp;
HXDLIN( 365)				if ((newText.length > 0)) {
HXLINE( 365)					if ((this->maxLength != 0)) {
HXLINE( 365)						_hx_tmp = ((this->text.length + newText.length) < this->maxLength);
            					}
            					else {
HXLINE( 365)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 365)					_hx_tmp = false;
            				}
HXDLIN( 365)				if (_hx_tmp) {
HXLINE( 366)					this->set_text(this->insertSubstring(this->text,newText,this->caretIndex));
HXLINE( 367)					this->set_caretIndex((this->caretIndex + newText.length));
HXLINE( 368)					this->onChange(HX_("input",0a,c4,1d,be));
HXLINE( 369)					this->onChange(HX_("paste",53,53,56,bd));
            				}
HXLINE( 373)				return;
            			}
HXLINE( 381)			bool _hx_tmp2;
HXDLIN( 381)			if ((key == 88)) {
HXLINE( 381)				_hx_tmp2 = e->ctrlKey;
            			}
            			else {
HXLINE( 381)				_hx_tmp2 = false;
            			}
HXDLIN( 381)			if (_hx_tmp2) {
HXLINE( 383)				::lime::_hx_system::Clipboard_obj::set_text(this->text);
HXLINE( 384)				this->set_text(HX_("",00,00,00,00));
HXLINE( 385)				this->set_caretIndex(0);
HXLINE( 387)				this->onChange(HX_("input",0a,c4,1d,be));
HXLINE( 388)				this->onChange(HX_("cut",82,85,4b,00));
HXLINE( 391)				return;
            			}
HXLINE( 395)			bool _hx_tmp3;
HXDLIN( 395)			bool _hx_tmp4;
HXDLIN( 395)			bool _hx_tmp5;
HXDLIN( 395)			if ((key != 16)) {
HXLINE( 395)				_hx_tmp5 = (key == 17);
            			}
            			else {
HXLINE( 395)				_hx_tmp5 = true;
            			}
HXDLIN( 395)			if (!(_hx_tmp5)) {
HXLINE( 395)				_hx_tmp4 = (key == 220);
            			}
            			else {
HXLINE( 395)				_hx_tmp4 = true;
            			}
HXDLIN( 395)			if (!(_hx_tmp4)) {
HXLINE( 395)				_hx_tmp3 = (key == 27);
            			}
            			else {
HXLINE( 395)				_hx_tmp3 = true;
            			}
HXDLIN( 395)			if (_hx_tmp3) {
HXLINE( 397)				return;
            			}
            			else {
HXLINE( 400)				if ((key == 37)) {
HXLINE( 402)					if ((this->caretIndex > 0)) {
HXLINE( 404)						this->set_caretIndex((this->caretIndex - 1));
HXLINE( 405)						this->set_text(this->text);
            					}
            				}
            				else {
HXLINE( 409)					if ((key == 39)) {
HXLINE( 411)						if ((this->caretIndex < this->text.length)) {
HXLINE( 413)							this->set_caretIndex((this->caretIndex + 1));
HXLINE( 414)							this->set_text(this->text);
            						}
            					}
            					else {
HXLINE( 418)						if ((key == 35)) {
HXLINE( 420)							this->set_caretIndex(this->text.length);
HXLINE( 421)							this->set_text(this->text);
            						}
            						else {
HXLINE( 424)							if ((key == 36)) {
HXLINE( 426)								this->set_caretIndex(0);
HXLINE( 427)								this->set_text(this->text);
            							}
            							else {
HXLINE( 430)								if ((key == 8)) {
HXLINE( 432)									if ((this->caretIndex > 0)) {
HXLINE( 434)										this->set_caretIndex((this->caretIndex - 1));
HXLINE( 435)										::String _hx_tmp = this->text.substring(0,this->caretIndex);
HXDLIN( 435)										this->set_text((_hx_tmp + this->text.substring((this->caretIndex + 1),null())));
HXLINE( 436)										this->onChange(HX_("backspace",3f,85,ea,ca));
            									}
            								}
            								else {
HXLINE( 440)									if ((key == 46)) {
HXLINE( 442)										bool _hx_tmp;
HXDLIN( 442)										if ((this->text.length > 0)) {
HXLINE( 442)											_hx_tmp = (this->caretIndex < this->text.length);
            										}
            										else {
HXLINE( 442)											_hx_tmp = false;
            										}
HXDLIN( 442)										if (_hx_tmp) {
HXLINE( 444)											::String _hx_tmp = this->text.substring(0,this->caretIndex);
HXDLIN( 444)											this->set_text((_hx_tmp + this->text.substring((this->caretIndex + 1),null())));
HXLINE( 445)											this->onChange(HX_("delete",2b,c0,d8,6a));
            										}
            									}
            									else {
HXLINE( 449)										if ((key == 13)) {
HXLINE( 451)											this->onChange(HX_("enter",18,6d,86,70));
            										}
            										else {
HXLINE( 456)											if ((e->charCode == 0)) {
HXLINE( 458)												return;
            											}
HXLINE( 460)											::String newText = this->filter(::String::fromCharCode(e->charCode));
HXLINE( 462)											bool _hx_tmp;
HXDLIN( 462)											if ((newText.length > 0)) {
HXLINE( 462)												if ((this->maxLength != 0)) {
HXLINE( 462)													_hx_tmp = ((this->text.length + newText.length) < this->maxLength);
            												}
            												else {
HXLINE( 462)													_hx_tmp = true;
            												}
            											}
            											else {
HXLINE( 462)												_hx_tmp = false;
            											}
HXDLIN( 462)											if (_hx_tmp) {
HXLINE( 464)												this->set_text(this->insertSubstring(this->text,newText,this->caretIndex));
HXLINE( 465)												this->set_caretIndex((this->caretIndex + 1));
HXLINE( 466)												this->onChange(HX_("input",0a,c4,1d,be));
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onKeyDown,(void))

void FlxInputText_obj::onChange(::String action){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_474_onChange)
HXDLIN( 474)		if (::hx::IsNotNull( this->callback )) {
HXLINE( 476)			this->callback(this->text,action);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onChange,(void))

::String FlxInputText_obj::insertSubstring(::String Original,::String Insert,int Index){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_489_insertSubstring)
HXLINE( 490)		if ((Index != Original.length)) {
HXLINE( 492)			::String Original1 = (Original.substring(0,Index) + Insert);
HXDLIN( 492)			Original = (Original1 + Original.substring(Index,null()));
            		}
            		else {
HXLINE( 496)			Original = (Original + Insert);
            		}
HXLINE( 498)		return Original;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxInputText_obj,insertSubstring,return )

int FlxInputText_obj::getCaretIndex(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_507_getCaretIndex)
HXLINE( 509)		Float X = (( (Float)(::flixel::FlxG_obj::mouse->x) ) - this->x);
HXDLIN( 509)		Float Y = (( (Float)(::flixel::FlxG_obj::mouse->y) ) - this->y);
HXDLIN( 509)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 509)		point->_inPool = false;
HXDLIN( 509)		 ::flixel::math::FlxPoint hit = point;
HXLINE( 510)		return this->getCharIndexAtPoint(hit->x,hit->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,getCaretIndex,return )

 ::openfl::geom::Rectangle FlxInputText_obj::getCharBoundaries(int charIndex){
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_517_getCharBoundaries)
HXLINE( 518)		bool _hx_tmp;
HXDLIN( 518)		bool _hx_tmp1;
HXDLIN( 518)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 518)			_hx_tmp1 = (charIndex >= 0);
            		}
            		else {
HXLINE( 518)			_hx_tmp1 = false;
            		}
HXDLIN( 518)		if (_hx_tmp1) {
HXLINE( 518)			_hx_tmp = (this->_charBoundaries->length > 0);
            		}
            		else {
HXLINE( 518)			_hx_tmp = false;
            		}
HXDLIN( 518)		if (_hx_tmp) {
HXLINE( 520)			 ::openfl::geom::Rectangle r =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 521)			if ((charIndex >= this->_charBoundaries->length)) {
HXLINE( 523)				 ::flixel::math::FlxRect _this = this->_charBoundaries->__get((this->_charBoundaries->length - 1)).StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 523)				 ::openfl::geom::Rectangle FlashRect = r;
HXDLIN( 523)				if (::hx::IsNull( FlashRect )) {
HXLINE( 523)					FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXDLIN( 523)				FlashRect->x = _this->x;
HXDLIN( 523)				FlashRect->y = _this->y;
HXDLIN( 523)				FlashRect->width = _this->width;
HXDLIN( 523)				FlashRect->height = _this->height;
            			}
            			else {
HXLINE( 527)				 ::flixel::math::FlxRect _this = this->_charBoundaries->__get(charIndex).StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 527)				 ::openfl::geom::Rectangle FlashRect = r;
HXDLIN( 527)				if (::hx::IsNull( FlashRect )) {
HXLINE( 527)					FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXDLIN( 527)				FlashRect->x = _this->x;
HXDLIN( 527)				FlashRect->y = _this->y;
HXDLIN( 527)				FlashRect->width = _this->width;
HXDLIN( 527)				FlashRect->height = _this->height;
            			}
HXLINE( 529)			return r;
            		}
HXLINE( 531)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,getCharBoundaries,return )

::String FlxInputText_obj::set_text(::String Text){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_535_set_text)
HXLINE( 537)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 539)			this->lastScroll = this->textField->get_scrollH();
            		}
HXLINE( 542)		::String return_text = this->super::set_text(Text);
HXLINE( 544)		if (::hx::IsNull( this->textField )) {
HXLINE( 546)			return return_text;
            		}
HXLINE( 549)		int numChars = Text.length;
HXLINE( 550)		this->prepareCharBoundaries(numChars);
HXLINE( 551)		this->textField->set_text(HX_("",00,00,00,00));
HXLINE( 552)		Float textH = ( (Float)(0) );
HXLINE( 553)		Float textW = ( (Float)(0) );
HXLINE( 554)		Float lastW = ( (Float)(0) );
HXLINE( 559)		Float magicX = ( (Float)(2) );
HXLINE( 560)		Float magicY = ( (Float)(2) );
HXLINE( 562)		{
HXLINE( 562)			int _g = 0;
HXDLIN( 562)			int _g1 = numChars;
HXDLIN( 562)			while((_g < _g1)){
HXLINE( 562)				_g = (_g + 1);
HXDLIN( 562)				int i = (_g - 1);
HXLINE( 564)				 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 564)				_hx_tmp->appendText(Text.substr(i,1));
HXLINE( 565)				textW = this->textField->get_textWidth();
HXLINE( 566)				if ((i == 0)) {
HXLINE( 568)					textH = this->textField->get_textHeight();
            				}
HXLINE( 570)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->x = (magicX + lastW);
HXLINE( 571)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->y = magicY;
HXLINE( 572)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->width = (textW - lastW);
HXLINE( 573)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->height = textH;
HXLINE( 574)				lastW = textW;
            			}
            		}
HXLINE( 576)		this->textField->set_text(Text);
HXLINE( 577)		this->onSetTextCheck();
HXLINE( 578)		return return_text;
            	}


int FlxInputText_obj::getCharIndexAtPoint(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_582_getCharIndexAtPoint)
HXLINE( 583)		int i = 0;
HXLINE( 585)		X = (X + (this->textField->get_scrollH() + 2));
HXLINE( 589)		bool _hx_tmp;
HXDLIN( 589)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 589)			_hx_tmp = (this->_charBoundaries->length > 0);
            		}
            		else {
HXLINE( 589)			_hx_tmp = false;
            		}
HXDLIN( 589)		if (_hx_tmp) {
HXLINE( 591)			Float _hx_tmp = this->textField->get_textWidth();
HXDLIN( 591)			if ((_hx_tmp <= this->textField->get_width())) {
HXLINE( 593)				::String _hx_switch_0 = this->getAlignStr();
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 599)					Float X1 = (X - (this->textField->get_width() / ( (Float)(2) )));
HXDLIN( 599)					X = (X1 + (this->textField->get_textWidth() / ( (Float)(2) )));
HXDLIN( 599)					goto _hx_goto_16;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 596)					Float X1 = (X - this->textField->get_width());
HXDLIN( 596)					X = (X1 + this->textField->get_textWidth());
HXDLIN( 596)					goto _hx_goto_16;
            				}
            				/* default */{
            				}
            				_hx_goto_16:;
            			}
            		}
HXLINE( 607)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 609)			int _g = 0;
HXDLIN( 609)			::Array< ::Dynamic> _g1 = this->_charBoundaries;
HXDLIN( 609)			while((_g < _g1->length)){
HXLINE( 609)				 ::flixel::math::FlxRect r = _g1->__get(_g).StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 609)				_g = (_g + 1);
HXLINE( 611)				bool _hx_tmp;
HXDLIN( 611)				if ((X >= r->x)) {
HXLINE( 611)					_hx_tmp = (X <= (r->x + r->width));
            				}
            				else {
HXLINE( 611)					_hx_tmp = false;
            				}
HXDLIN( 611)				if (_hx_tmp) {
HXLINE( 613)					return i;
            				}
HXLINE( 615)				i = (i + 1);
            			}
            		}
HXLINE( 620)		bool _hx_tmp1;
HXDLIN( 620)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 620)			_hx_tmp1 = (this->_charBoundaries->length > 0);
            		}
            		else {
HXLINE( 620)			_hx_tmp1 = false;
            		}
HXDLIN( 620)		if (_hx_tmp1) {
HXLINE( 622)			if ((X > this->textField->get_textWidth())) {
HXLINE( 624)				return this->_charBoundaries->length;
            			}
            		}
HXLINE( 629)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxInputText_obj,getCharIndexAtPoint,return )

void FlxInputText_obj::prepareCharBoundaries(int numChars){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_633_prepareCharBoundaries)
HXLINE( 634)		if (::hx::IsNull( this->_charBoundaries )) {
HXLINE( 636)			this->_charBoundaries = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 639)		if ((this->_charBoundaries->length > numChars)) {
HXLINE( 641)			int diff = (this->_charBoundaries->length - numChars);
HXLINE( 642)			{
HXLINE( 642)				int _g = 0;
HXDLIN( 642)				int _g1 = diff;
HXDLIN( 642)				while((_g < _g1)){
HXLINE( 642)					_g = (_g + 1);
HXDLIN( 642)					int i = (_g - 1);
HXLINE( 644)					this->_charBoundaries->pop().StaticCast<  ::flixel::math::FlxRect >();
            				}
            			}
            		}
HXLINE( 648)		{
HXLINE( 648)			int _g = 0;
HXDLIN( 648)			int _g1 = numChars;
HXDLIN( 648)			while((_g < _g1)){
HXLINE( 648)				_g = (_g + 1);
HXDLIN( 648)				int i = (_g - 1);
HXLINE( 650)				if (((this->_charBoundaries->length - 1) < i)) {
HXLINE( 652)					::Array< ::Dynamic> _hx_tmp = this->_charBoundaries;
HXDLIN( 652)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 652)					_this->x = ( (Float)(0) );
HXDLIN( 652)					_this->y = ( (Float)(0) );
HXDLIN( 652)					_this->width = ( (Float)(0) );
HXDLIN( 652)					_this->height = ( (Float)(0) );
HXDLIN( 652)					 ::flixel::math::FlxRect rect = _this;
HXDLIN( 652)					rect->_inPool = false;
HXDLIN( 652)					_hx_tmp->push(rect);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,prepareCharBoundaries,(void))

void FlxInputText_obj::onSetTextCheck(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_661_onSetTextCheck)
HXLINE( 663)		 ::openfl::geom::Rectangle boundary = null();
HXLINE( 664)		if ((this->caretIndex == -1)) {
HXLINE( 666)			boundary = this->getCharBoundaries((this->text.length - 1));
            		}
            		else {
HXLINE( 670)			boundary = this->getCharBoundaries(this->caretIndex);
            		}
HXLINE( 673)		if (::hx::IsNotNull( boundary )) {
HXLINE( 677)			int diffW = 0;
HXLINE( 678)			Float _hx_tmp = boundary->get_right();
HXDLIN( 678)			int _hx_tmp1 = this->lastScroll;
HXDLIN( 678)			if ((_hx_tmp > ((_hx_tmp1 + this->textField->get_width()) - ( (Float)(2) )))) {
HXLINE( 680)				Float diffW1 = (this->textField->get_width() - ( (Float)(2) ));
HXDLIN( 680)				diffW = -(::Std_obj::_hx_int((diffW1 - boundary->get_right())));
            			}
            			else {
HXLINE( 682)				Float _hx_tmp = boundary->get_left();
HXDLIN( 682)				if ((_hx_tmp < this->lastScroll)) {
HXLINE( 684)					diffW = (::Std_obj::_hx_int(boundary->get_left()) - 2);
            				}
            				else {
HXLINE( 688)					diffW = this->lastScroll;
            				}
            			}
HXLINE( 692)			this->textField->set_scrollH(diffW);
HXLINE( 694)			this->calcFrame(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,onSetTextCheck,(void))

void FlxInputText_obj::calcFrame(::hx::Null< bool >  __o_RunOnCpp){
            		bool RunOnCpp = __o_RunOnCpp.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_705_calcFrame)
HXLINE( 706)		this->super::calcFrame(RunOnCpp);
HXLINE( 708)		if (::hx::IsNotNull( this->fieldBorderSprite )) {
HXLINE( 710)			if ((this->fieldBorderThickness > 0)) {
HXLINE( 712)				 ::flixel::FlxSprite _hx_tmp = this->fieldBorderSprite;
HXDLIN( 712)				Float _hx_tmp1 = this->get_width();
HXDLIN( 712)				int _hx_tmp2 = ::Std_obj::_hx_int((_hx_tmp1 + (this->fieldBorderThickness * 2)));
HXDLIN( 712)				Float _hx_tmp3 = this->get_height();
HXDLIN( 712)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 + (this->fieldBorderThickness * 2)));
HXDLIN( 712)				_hx_tmp->makeGraphic(_hx_tmp2,_hx_tmp4,this->fieldBorderColor,null(),null());
HXLINE( 713)				this->fieldBorderSprite->set_x((this->x - ( (Float)(this->fieldBorderThickness) )));
HXLINE( 714)				this->fieldBorderSprite->set_y((this->y - ( (Float)(this->fieldBorderThickness) )));
            			}
            			else {
HXLINE( 716)				if ((this->fieldBorderThickness == 0)) {
HXLINE( 718)					this->fieldBorderSprite->set_visible(false);
            				}
            			}
            		}
HXLINE( 722)		if (::hx::IsNotNull( this->backgroundSprite )) {
HXLINE( 724)			if (this->background) {
HXLINE( 726)				 ::flixel::FlxSprite _hx_tmp = this->backgroundSprite;
HXDLIN( 726)				int _hx_tmp1 = ::Std_obj::_hx_int(this->get_width());
HXDLIN( 726)				int _hx_tmp2 = ::Std_obj::_hx_int(this->get_height());
HXDLIN( 726)				_hx_tmp->makeGraphic(_hx_tmp1,_hx_tmp2,this->backgroundColor,null(),null());
HXLINE( 727)				this->backgroundSprite->set_x(this->x);
HXLINE( 728)				this->backgroundSprite->set_y(this->y);
            			}
            			else {
HXLINE( 732)				this->backgroundSprite->set_visible(false);
            			}
            		}
HXLINE( 736)		if (::hx::IsNotNull( this->caret )) {
HXLINE( 741)			int cw = this->caretWidth;
HXLINE( 742)			int ch = ::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) ));
HXLINE( 745)			int borderC = (-16777216 | (this->borderColor & 16777215));
HXLINE( 746)			int caretC = (-16777216 | (this->caretColor & 16777215));
HXLINE( 749)			::String caretKey = ((((((((HX_("caret",83,f9,1f,41) + cw) + HX_("x",78,00,00,00)) + ch) + HX_("c:",77,56,00,00)) + caretC) + HX_("b:",98,55,00,00)) + ::Std_obj::string(this->borderStyle)) + HX_(",",2c,00,00,00));
HXDLIN( 749)			::String caretKey1 = (((caretKey + this->borderSize) + HX_(",",2c,00,00,00)) + borderC);
HXLINE( 750)			switch((int)(this->borderStyle->_hx_getIndex())){
            				case (int)0: {
HXLINE( 754)					this->caret->makeGraphic(cw,ch,caretC,false,caretKey1);
HXLINE( 755)					 ::flixel::math::FlxPoint _hx_tmp = this->caret->offset;
HXDLIN( 755)					_hx_tmp->set_x(this->caret->offset->set_y(( (Float)(0) )));
            				}
            				break;
            				case (int)1: {
HXLINE( 759)					cw = (cw + ::Std_obj::_hx_int(this->borderSize));
HXLINE( 760)					ch = (ch + ::Std_obj::_hx_int(this->borderSize));
HXLINE( 761)					this->caret->makeGraphic(cw,ch,0,false,caretKey1);
HXLINE( 762)					Float r = this->borderSize;
HXDLIN( 762)					Float r1 = this->borderSize;
HXDLIN( 762)					int r2 = this->caretWidth;
HXDLIN( 762)					 ::openfl::geom::Rectangle r3 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,r,r1,r2,::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) )));
HXLINE( 763)					this->caret->get_pixels()->fillRect(r3,borderC);
HXLINE( 764)					r3->x = (r3->y = ( (Float)(0) ));
HXLINE( 765)					this->caret->get_pixels()->fillRect(r3,caretC);
HXLINE( 766)					 ::flixel::math::FlxPoint _hx_tmp = this->caret->offset;
HXDLIN( 766)					_hx_tmp->set_x(this->caret->offset->set_y(( (Float)(0) )));
            				}
            				break;
            				case (int)2: case (int)3: {
HXLINE( 770)					cw = (cw + ::Std_obj::_hx_int((this->borderSize * ( (Float)(2) ))));
HXLINE( 771)					ch = (ch + ::Std_obj::_hx_int((this->borderSize * ( (Float)(2) ))));
HXLINE( 772)					this->caret->makeGraphic(cw,ch,borderC,false,caretKey1);
HXLINE( 773)					Float r = this->borderSize;
HXDLIN( 773)					Float r1 = this->borderSize;
HXDLIN( 773)					int r2 = this->caretWidth;
HXDLIN( 773)					 ::openfl::geom::Rectangle r3 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,r,r1,r2,::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) )));
HXLINE( 774)					this->caret->get_pixels()->fillRect(r3,caretC);
HXLINE( 776)					 ::flixel::math::FlxPoint _hx_tmp = this->caret->offset;
HXDLIN( 776)					_hx_tmp->set_x(this->caret->offset->set_y(this->borderSize));
            				}
            				break;
            			}
HXLINE( 779)			this->caret->set_width(( (Float)(cw) ));
HXLINE( 780)			this->caret->set_height(( (Float)(ch) ));
HXLINE( 782)			this->set_caretIndex(this->caretIndex);
            		}
            	}


void FlxInputText_obj::toggleCaret( ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_791_toggleCaret)
HXDLIN( 791)		this->caret->set_visible(!(this->caret->visible));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,toggleCaret,(void))

::String FlxInputText_obj::filter(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_799_filter)
HXLINE( 800)		if ((this->forceCase == 1)) {
HXLINE( 802)			text = text.toUpperCase();
            		}
            		else {
HXLINE( 804)			if ((this->forceCase == 2)) {
HXLINE( 806)				text = text.toLowerCase();
            			}
            		}
HXLINE( 809)		if ((this->filterMode != 0)) {
HXLINE( 811)			 ::EReg pattern;
HXLINE( 812)			switch((int)(this->filterMode)){
            				case (int)1: {
HXLINE( 815)					pattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("[^a-zA-Z]*",50,38,19,1d),HX_("g",67,00,00,00));
            				}
            				break;
            				case (int)2: {
HXLINE( 817)					pattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("[^0-9]*",46,25,d3,1e),HX_("g",67,00,00,00));
            				}
            				break;
            				case (int)3: {
HXLINE( 819)					pattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("[^a-zA-Z0-9]*",86,f4,79,aa),HX_("g",67,00,00,00));
            				}
            				break;
            				case (int)4: {
HXLINE( 821)					pattern = this->customFilterPattern;
            				}
            				break;
            				default:{
HXLINE( 823)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,((HX_("FlxInputText: Unknown filterMode (",04,c7,17,56) + this->filterMode) + HX_(")",29,00,00,00)),null())));
            				}
            			}
HXLINE( 825)			text = pattern->replace(text,HX_("",00,00,00,00));
            		}
HXLINE( 827)		return text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,filter,return )

::cpp::VirtualArray FlxInputText_obj::set_params(::cpp::VirtualArray p){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_831_set_params)
HXLINE( 832)		this->params = p;
HXLINE( 833)		if (::hx::IsNull( this->params )) {
HXLINE( 835)			this->params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 837)		 ::Dynamic namedValue =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("value",71,7f,b8,31),this->text)
            			->setFixed(1,HX_("name",4b,72,ff,48),HX_("value",71,7f,b8,31)));
HXLINE( 838)		this->params->push(namedValue);
HXLINE( 839)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_params,return )

Float FlxInputText_obj::set_x(Float X){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_843_set_x)
HXLINE( 844)		bool _hx_tmp;
HXDLIN( 844)		if (::hx::IsNotNull( this->fieldBorderSprite )) {
HXLINE( 844)			_hx_tmp = (this->fieldBorderThickness > 0);
            		}
            		else {
HXLINE( 844)			_hx_tmp = false;
            		}
HXDLIN( 844)		if (_hx_tmp) {
HXLINE( 846)			this->fieldBorderSprite->set_x((X - ( (Float)(this->fieldBorderThickness) )));
            		}
HXLINE( 848)		bool _hx_tmp1;
HXDLIN( 848)		if (::hx::IsNotNull( this->backgroundSprite )) {
HXLINE( 848)			_hx_tmp1 = this->background;
            		}
            		else {
HXLINE( 848)			_hx_tmp1 = false;
            		}
HXDLIN( 848)		if (_hx_tmp1) {
HXLINE( 850)			this->backgroundSprite->set_x(X);
            		}
HXLINE( 852)		return this->super::set_x(X);
            	}


Float FlxInputText_obj::set_y(Float Y){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_856_set_y)
HXLINE( 857)		bool _hx_tmp;
HXDLIN( 857)		if (::hx::IsNotNull( this->fieldBorderSprite )) {
HXLINE( 857)			_hx_tmp = (this->fieldBorderThickness > 0);
            		}
            		else {
HXLINE( 857)			_hx_tmp = false;
            		}
HXDLIN( 857)		if (_hx_tmp) {
HXLINE( 859)			this->fieldBorderSprite->set_y((Y - ( (Float)(this->fieldBorderThickness) )));
            		}
HXLINE( 861)		bool _hx_tmp1;
HXDLIN( 861)		if (::hx::IsNotNull( this->backgroundSprite )) {
HXLINE( 861)			_hx_tmp1 = this->background;
            		}
            		else {
HXLINE( 861)			_hx_tmp1 = false;
            		}
HXDLIN( 861)		if (_hx_tmp1) {
HXLINE( 863)			this->backgroundSprite->set_y(Y);
            		}
HXLINE( 865)		return this->super::set_y(Y);
            	}


bool FlxInputText_obj::set_hasFocus(bool newFocus){
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_869_set_hasFocus)
HXLINE( 870)		if (newFocus) {
HXLINE( 872)			if ((this->hasFocus != newFocus)) {
HXLINE( 874)				this->_caretTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5),this->toggleCaret_dyn(),0);
HXLINE( 875)				this->caret->set_visible(true);
HXLINE( 876)				this->set_caretIndex(this->text.length);
            			}
            		}
            		else {
HXLINE( 882)			this->caret->set_visible(false);
HXLINE( 883)			if (::hx::IsNotNull( this->_caretTimer )) {
HXLINE( 885)				this->_caretTimer->cancel();
            			}
            		}
HXLINE( 889)		if ((newFocus != this->hasFocus)) {
HXLINE( 891)			this->calcFrame(null());
            		}
HXLINE( 893)		return (this->hasFocus = newFocus);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_hasFocus,return )

::String FlxInputText_obj::getAlignStr(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_897_getAlignStr)
HXLINE( 898)		::String alignStr = HX_("left",07,08,b0,47);
HXLINE( 899)		bool _hx_tmp;
HXDLIN( 899)		if (::hx::IsNotNull( this->_defaultFormat )) {
HXLINE( 899)			_hx_tmp = ::hx::IsNotNull( this->_defaultFormat->align );
            		}
            		else {
HXLINE( 899)			_hx_tmp = false;
            		}
HXDLIN( 899)		if (_hx_tmp) {
HXLINE( 901)			alignStr = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(this->_defaultFormat->align);
            		}
HXLINE( 903)		return alignStr;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,getAlignStr,return )

int FlxInputText_obj::set_caretIndex(int newCaretIndex){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_907_set_caretIndex)
HXLINE( 908)		Float offx = ( (Float)(0) );
HXLINE( 910)		::String alignStr = this->getAlignStr();
HXLINE( 912)		::String _hx_switch_0 = alignStr;
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 921)			Float offx1 = (this->textField->get_width() - ( (Float)(2) ));
HXDLIN( 921)			Float offx2 = ((offx1 - this->textField->get_textWidth()) / ( (Float)(2) ));
HXDLIN( 921)			offx = (offx2 + (( (Float)(this->textField->get_scrollH()) ) / ( (Float)(2) )));
HXLINE( 923)			if ((offx <= 1)) {
HXLINE( 924)				offx = ( (Float)(0) );
            			}
HXLINE( 919)			goto _hx_goto_31;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 915)			Float offx1 = (this->textField->get_width() - ( (Float)(2) ));
HXDLIN( 915)			offx = ((offx1 - this->textField->get_textWidth()) - ( (Float)(2) ));
HXLINE( 916)			if ((offx < 0)) {
HXLINE( 917)				offx = ( (Float)(0) );
            			}
HXLINE( 914)			goto _hx_goto_31;
            		}
            		/* default */{
HXLINE( 927)			offx = ( (Float)(0) );
            		}
            		_hx_goto_31:;
HXLINE( 930)		this->caretIndex = newCaretIndex;
HXLINE( 933)		if ((this->caretIndex > (this->text.length + 1))) {
HXLINE( 935)			this->caretIndex = -1;
            		}
HXLINE( 939)		if ((this->caretIndex != -1)) {
HXLINE( 941)			 ::openfl::geom::Rectangle boundaries = null();
HXLINE( 944)			if ((this->caretIndex < this->text.length)) {
HXLINE( 946)				boundaries = this->getCharBoundaries(this->caretIndex);
HXLINE( 947)				if (::hx::IsNotNull( boundaries )) {
HXLINE( 949)					 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 949)					Float _hx_tmp1 = (offx + boundaries->get_left());
HXDLIN( 949)					_hx_tmp->set_x((_hx_tmp1 + this->x));
HXLINE( 950)					 ::flixel::FlxSprite _hx_tmp2 = this->caret;
HXDLIN( 950)					Float _hx_tmp3 = boundaries->get_top();
HXDLIN( 950)					_hx_tmp2->set_y((_hx_tmp3 + this->y));
            				}
            			}
            			else {
HXLINE( 956)				boundaries = this->getCharBoundaries((this->caretIndex - 1));
HXLINE( 957)				if (::hx::IsNotNull( boundaries )) {
HXLINE( 959)					 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 959)					Float _hx_tmp1 = (offx + boundaries->get_right());
HXDLIN( 959)					_hx_tmp->set_x((_hx_tmp1 + this->x));
HXLINE( 960)					 ::flixel::FlxSprite _hx_tmp2 = this->caret;
HXDLIN( 960)					Float _hx_tmp3 = boundaries->get_top();
HXDLIN( 960)					_hx_tmp2->set_y((_hx_tmp3 + this->y));
            				}
            				else {
HXLINE( 963)					if ((this->text.length == 0)) {
HXLINE( 966)						this->caret->set_x(((this->x + offx) + 2));
HXLINE( 967)						this->caret->set_y((this->y + 2));
            					}
            				}
            			}
            		}
HXLINE( 973)		 ::flixel::FlxSprite fh = this->caret;
HXDLIN( 973)		Float fh1 = fh->x;
HXDLIN( 973)		fh->set_x((fh1 - ( (Float)(this->textField->get_scrollH()) )));
HXLINE( 977)		bool _hx_tmp;
HXDLIN( 977)		if ((this->lines == 1)) {
HXLINE( 977)			Float _hx_tmp1 = this->caret->x;
HXDLIN( 977)			Float _hx_tmp2 = (_hx_tmp1 + this->caret->get_width());
HXDLIN( 977)			Float _hx_tmp3 = this->x;
HXDLIN( 977)			_hx_tmp = (_hx_tmp2 > (_hx_tmp3 + this->get_width()));
            		}
            		else {
HXLINE( 977)			_hx_tmp = false;
            		}
HXDLIN( 977)		if (_hx_tmp) {
HXLINE( 979)			 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 979)			Float _hx_tmp1 = this->x;
HXDLIN( 979)			_hx_tmp->set_x(((_hx_tmp1 + this->get_width()) - ( (Float)(2) )));
            		}
HXLINE( 982)		return this->caretIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretIndex,return )

int FlxInputText_obj::set_forceCase(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_986_set_forceCase)
HXLINE( 987)		this->forceCase = Value;
HXLINE( 988)		this->set_text(this->filter(this->text));
HXLINE( 989)		return this->forceCase;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_forceCase,return )

int FlxInputText_obj::set_size(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_993_set_size)
HXLINE( 994)		this->super::set_size(Value);
HXLINE( 995)		 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 995)		_hx_tmp->makeGraphic(1,::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) )),null(),null(),null());
HXLINE( 996)		return Value;
            	}


int FlxInputText_obj::set_maxLength(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1000_set_maxLength)
HXLINE(1001)		this->maxLength = Value;
HXLINE(1002)		if ((this->text.length > this->maxLength)) {
HXLINE(1004)			this->set_text(this->text.substring(0,this->maxLength));
            		}
HXLINE(1006)		return this->maxLength;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_maxLength,return )

int FlxInputText_obj::set_lines(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1010_set_lines)
HXLINE(1011)		if ((Value == 0)) {
HXLINE(1012)			return 0;
            		}
HXLINE(1014)		if ((Value > 1)) {
HXLINE(1016)			this->textField->set_wordWrap(true);
HXLINE(1017)			this->textField->set_multiline(true);
            		}
            		else {
HXLINE(1021)			this->textField->set_wordWrap(false);
HXLINE(1022)			this->textField->set_multiline(false);
            		}
HXLINE(1025)		this->lines = Value;
HXLINE(1026)		this->calcFrame(null());
HXLINE(1027)		return this->lines;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_lines,return )

bool FlxInputText_obj::get_passwordMode(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1032_get_passwordMode)
HXDLIN(1032)		return this->textField->get_displayAsPassword();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,get_passwordMode,return )

bool FlxInputText_obj::set_passwordMode(bool value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1036_set_passwordMode)
HXLINE(1037)		this->textField->set_displayAsPassword(value);
HXLINE(1038)		this->calcFrame(null());
HXLINE(1039)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_passwordMode,return )

int FlxInputText_obj::set_filterMode(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1043_set_filterMode)
HXLINE(1044)		this->filterMode = Value;
HXLINE(1045)		this->set_text(this->filter(this->text));
HXLINE(1046)		return this->filterMode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_filterMode,return )

int FlxInputText_obj::set_fieldBorderColor(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1050_set_fieldBorderColor)
HXLINE(1051)		this->fieldBorderColor = Value;
HXLINE(1052)		this->calcFrame(null());
HXLINE(1053)		return this->fieldBorderColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderColor,return )

int FlxInputText_obj::set_fieldBorderThickness(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1057_set_fieldBorderThickness)
HXLINE(1058)		this->fieldBorderThickness = Value;
HXLINE(1059)		this->calcFrame(null());
HXLINE(1060)		return this->fieldBorderThickness;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderThickness,return )

int FlxInputText_obj::set_backgroundColor(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1064_set_backgroundColor)
HXLINE(1065)		this->backgroundColor = Value;
HXLINE(1066)		this->calcFrame(null());
HXLINE(1067)		return this->backgroundColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_backgroundColor,return )

int FlxInputText_obj::NO_FILTER;

int FlxInputText_obj::ONLY_ALPHA;

int FlxInputText_obj::ONLY_NUMERIC;

int FlxInputText_obj::ONLY_ALPHANUMERIC;

int FlxInputText_obj::CUSTOM_FILTER;

int FlxInputText_obj::ALL_CASES;

int FlxInputText_obj::UPPER_CASE;

int FlxInputText_obj::LOWER_CASE;

::String FlxInputText_obj::BACKSPACE_ACTION;

::String FlxInputText_obj::DELETE_ACTION;

::String FlxInputText_obj::ENTER_ACTION;

::String FlxInputText_obj::INPUT_ACTION;

::String FlxInputText_obj::PASTE_ACTION;

::String FlxInputText_obj::COPY_ACTION;

::String FlxInputText_obj::CUT_ACTION;


::hx::ObjectPtr< FlxInputText_obj > FlxInputText_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont) {
	::hx::ObjectPtr< FlxInputText_obj > __this = new FlxInputText_obj();
	__this->__construct(__o_X,__o_Y,__o_Width,Text,__o_size,__o_TextColor,__o_BackgroundColor,__o_EmbeddedFont);
	return __this;
}

::hx::ObjectPtr< FlxInputText_obj > FlxInputText_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont) {
	FlxInputText_obj *__this = (FlxInputText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxInputText_obj), true, "flixel.addons.ui.FlxInputText"));
	*(void **)__this = FlxInputText_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_Width,Text,__o_size,__o_TextColor,__o_BackgroundColor,__o_EmbeddedFont);
	return __this;
}

FlxInputText_obj::FlxInputText_obj()
{
}

void FlxInputText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInputText);
	HX_MARK_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(caretColor,"caretColor");
	HX_MARK_MEMBER_NAME(caretWidth,"caretWidth");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(hasFocus,"hasFocus");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(focusGained,"focusGained");
	HX_MARK_MEMBER_NAME(focusLost,"focusLost");
	HX_MARK_MEMBER_NAME(forceCase,"forceCase");
	HX_MARK_MEMBER_NAME(maxLength,"maxLength");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(filterMode,"filterMode");
	HX_MARK_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_MARK_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_MARK_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_MARK_MEMBER_NAME(caret,"caret");
	HX_MARK_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_MARK_MEMBER_NAME(_scrollBoundIndeces,"_scrollBoundIndeces");
	HX_MARK_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	HX_MARK_MEMBER_NAME(lastScroll,"lastScroll");
	 ::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxInputText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(caretColor,"caretColor");
	HX_VISIT_MEMBER_NAME(caretWidth,"caretWidth");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(hasFocus,"hasFocus");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(focusGained,"focusGained");
	HX_VISIT_MEMBER_NAME(focusLost,"focusLost");
	HX_VISIT_MEMBER_NAME(forceCase,"forceCase");
	HX_VISIT_MEMBER_NAME(maxLength,"maxLength");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(filterMode,"filterMode");
	HX_VISIT_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_VISIT_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_VISIT_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_VISIT_MEMBER_NAME(caret,"caret");
	HX_VISIT_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_VISIT_MEMBER_NAME(_scrollBoundIndeces,"_scrollBoundIndeces");
	HX_VISIT_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	HX_VISIT_MEMBER_NAME(lastScroll,"lastScroll");
	 ::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxInputText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return ::hx::Val( lines ); }
		if (HX_FIELD_EQ(inName,"caret") ) { return ::hx::Val( caret ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { return ::hx::Val( hasFocus ); }
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusLost") ) { return ::hx::Val( focusLost ); }
		if (HX_FIELD_EQ(inName,"forceCase") ) { return ::hx::Val( forceCase ); }
		if (HX_FIELD_EQ(inName,"maxLength") ) { return ::hx::Val( maxLength ); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lines") ) { return ::hx::Val( set_lines_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"caretColor") ) { return ::hx::Val( caretColor ); }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { return ::hx::Val( caretWidth ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return ::hx::Val( caretIndex ); }
		if (HX_FIELD_EQ(inName,"filterMode") ) { return ::hx::Val( filterMode ); }
		if (HX_FIELD_EQ(inName,"lastScroll") ) { return ::hx::Val( lastScroll ); }
		if (HX_FIELD_EQ(inName,"drawSprite") ) { return ::hx::Val( drawSprite_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return ::hx::Val( set_params_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"focusGained") ) { return ::hx::Val( focusGained ); }
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { return ::hx::Val( _caretTimer ); }
		if (HX_FIELD_EQ(inName,"toggleCaret") ) { return ::hx::Val( toggleCaret_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAlignStr") ) { return ::hx::Val( getAlignStr_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_passwordMode() ); }
		if (HX_FIELD_EQ(inName,"set_hasFocus") ) { return ::hx::Val( set_hasFocus_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCaretIndex") ) { return ::hx::Val( getCaretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_forceCase") ) { return ::hx::Val( set_forceCase_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxLength") ) { return ::hx::Val( set_maxLength_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_caretColor") ) { return ::hx::Val( set_caretColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_caretWidth") ) { return ::hx::Val( set_caretWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"onSetTextCheck") ) { return ::hx::Val( onSetTextCheck_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_caretIndex") ) { return ::hx::Val( set_caretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filterMode") ) { return ::hx::Val( set_filterMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { return ::hx::Val( _charBoundaries ); }
		if (HX_FIELD_EQ(inName,"insertSubstring") ) { return ::hx::Val( insertSubstring_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { return ::hx::Val( fieldBorderColor ); }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { return ::hx::Val( backgroundSprite ); }
		if (HX_FIELD_EQ(inName,"get_passwordMode") ) { return ::hx::Val( get_passwordMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_passwordMode") ) { return ::hx::Val( set_passwordMode_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { return ::hx::Val( fieldBorderSprite ); }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return ::hx::Val( getCharBoundaries_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { return ::hx::Val( customFilterPattern ); }
		if (HX_FIELD_EQ(inName,"_scrollBoundIndeces") ) { return ::hx::Val( _scrollBoundIndeces ); }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return ::hx::Val( getCharIndexAtPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return ::hx::Val( set_backgroundColor_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { return ::hx::Val( fieldBorderThickness ); }
		if (HX_FIELD_EQ(inName,"set_fieldBorderColor") ) { return ::hx::Val( set_fieldBorderColor_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"prepareCharBoundaries") ) { return ::hx::Val( prepareCharBoundaries_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_customFilterPattern") ) { return ::hx::Val( set_customFilterPattern_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_fieldBorderThickness") ) { return ::hx::Val( set_fieldBorderThickness_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxInputText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lines(inValue.Cast< int >()) );lines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caret") ) { caret=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_params(inValue.Cast< ::cpp::VirtualArray >()) );params=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hasFocus(inValue.Cast< bool >()) );hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusLost") ) { focusLost=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceCase") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_forceCase(inValue.Cast< int >()) );forceCase=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxLength(inValue.Cast< int >()) );maxLength=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_caretColor(inValue.Cast< int >()) );caretColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_caretWidth(inValue.Cast< int >()) );caretWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_caretIndex(inValue.Cast< int >()) );caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filterMode(inValue.Cast< int >()) );filterMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastScroll") ) { lastScroll=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"focusGained") ) { focusGained=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { _caretTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_passwordMode(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColor(inValue.Cast< int >()) );backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { _charBoundaries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldBorderColor(inValue.Cast< int >()) );fieldBorderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { backgroundSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { fieldBorderSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customFilterPattern(inValue.Cast<  ::EReg >()) );customFilterPattern=inValue.Cast<  ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollBoundIndeces") ) { _scrollBoundIndeces=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldBorderThickness(inValue.Cast< int >()) );fieldBorderThickness=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInputText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("customFilterPattern",07,03,33,08));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("caretColor",e0,8c,a3,69));
	outFields->push(HX_("caretWidth",83,d1,a9,e9));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("passwordMode",1e,4c,29,b6));
	outFields->push(HX_("hasFocus",1e,aa,e1,90));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("forceCase",3b,ce,fe,46));
	outFields->push(HX_("maxLength",aa,a6,92,ce));
	outFields->push(HX_("lines",ff,dd,01,75));
	outFields->push(HX_("filterMode",3b,5b,a5,54));
	outFields->push(HX_("fieldBorderColor",3d,66,ca,1d));
	outFields->push(HX_("fieldBorderThickness",4e,5b,39,33));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("backgroundSprite",93,8a,2c,8e));
	outFields->push(HX_("_caretTimer",61,a8,06,02));
	outFields->push(HX_("caret",83,f9,1f,41));
	outFields->push(HX_("fieldBorderSprite",eb,25,5e,f0));
	outFields->push(HX_("_scrollBoundIndeces",d9,8f,2d,01));
	outFields->push(HX_("_charBoundaries",dd,1e,8e,62));
	outFields->push(HX_("lastScroll",03,bb,3f,12));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxInputText_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(FlxInputText_obj,customFilterPattern),HX_("customFilterPattern",07,03,33,08)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsBool,(int)offsetof(FlxInputText_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,caretColor),HX_("caretColor",e0,8c,a3,69)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,caretWidth),HX_("caretWidth",83,d1,a9,e9)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxInputText_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsBool,(int)offsetof(FlxInputText_obj,hasFocus),HX_("hasFocus",1e,aa,e1,90)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,caretIndex),HX_("caretIndex",8f,b6,5b,dd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,focusGained),HX_("focusGained",96,ec,66,a1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,focusLost),HX_("focusLost",dc,01,43,1f)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,forceCase),HX_("forceCase",3b,ce,fe,46)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,maxLength),HX_("maxLength",aa,a6,92,ce)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,lines),HX_("lines",ff,dd,01,75)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,filterMode),HX_("filterMode",3b,5b,a5,54)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderColor),HX_("fieldBorderColor",3d,66,ca,1d)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderThickness),HX_("fieldBorderThickness",4e,5b,39,33)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxInputText_obj,backgroundSprite),HX_("backgroundSprite",93,8a,2c,8e)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(FlxInputText_obj,_caretTimer),HX_("_caretTimer",61,a8,06,02)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxInputText_obj,caret),HX_("caret",83,f9,1f,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxInputText_obj,fieldBorderSprite),HX_("fieldBorderSprite",eb,25,5e,f0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,_scrollBoundIndeces),HX_("_scrollBoundIndeces",d9,8f,2d,01)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxInputText_obj,_charBoundaries),HX_("_charBoundaries",dd,1e,8e,62)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,lastScroll),HX_("lastScroll",03,bb,3f,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxInputText_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxInputText_obj::NO_FILTER,HX_("NO_FILTER",36,13,4e,92)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ONLY_ALPHA,HX_("ONLY_ALPHA",eb,4c,e5,a7)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ONLY_NUMERIC,HX_("ONLY_NUMERIC",9a,a9,2d,5f)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ONLY_ALPHANUMERIC,HX_("ONLY_ALPHANUMERIC",22,ad,7f,f5)},
	{::hx::fsInt,(void *) &FlxInputText_obj::CUSTOM_FILTER,HX_("CUSTOM_FILTER",c6,f1,56,e9)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ALL_CASES,HX_("ALL_CASES",a5,06,9b,9d)},
	{::hx::fsInt,(void *) &FlxInputText_obj::UPPER_CASE,HX_("UPPER_CASE",0d,e2,06,82)},
	{::hx::fsInt,(void *) &FlxInputText_obj::LOWER_CASE,HX_("LOWER_CASE",0e,61,d8,7c)},
	{::hx::fsString,(void *) &FlxInputText_obj::BACKSPACE_ACTION,HX_("BACKSPACE_ACTION",16,76,91,d1)},
	{::hx::fsString,(void *) &FlxInputText_obj::DELETE_ACTION,HX_("DELETE_ACTION",8a,38,e3,2e)},
	{::hx::fsString,(void *) &FlxInputText_obj::ENTER_ACTION,HX_("ENTER_ACTION",5d,63,46,79)},
	{::hx::fsString,(void *) &FlxInputText_obj::INPUT_ACTION,HX_("INPUT_ACTION",ab,ae,95,20)},
	{::hx::fsString,(void *) &FlxInputText_obj::PASTE_ACTION,HX_("PASTE_ACTION",82,8a,7f,75)},
	{::hx::fsString,(void *) &FlxInputText_obj::COPY_ACTION,HX_("COPY_ACTION",40,86,6b,16)},
	{::hx::fsString,(void *) &FlxInputText_obj::CUT_ACTION,HX_("CUT_ACTION",33,a8,72,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxInputText_obj_sMemberFields[] = {
	HX_("customFilterPattern",07,03,33,08),
	HX_("set_customFilterPattern",aa,12,ea,12),
	HX_("callback",c5,99,06,7f),
	HX_("background",ee,93,1d,26),
	HX_("caretColor",e0,8c,a3,69),
	HX_("set_caretColor",9d,fd,b8,ff),
	HX_("caretWidth",83,d1,a9,e9),
	HX_("set_caretWidth",40,42,bf,7f),
	HX_("params",46,fb,7a,ed),
	HX_("hasFocus",1e,aa,e1,90),
	HX_("caretIndex",8f,b6,5b,dd),
	HX_("focusGained",96,ec,66,a1),
	HX_("focusLost",dc,01,43,1f),
	HX_("forceCase",3b,ce,fe,46),
	HX_("maxLength",aa,a6,92,ce),
	HX_("lines",ff,dd,01,75),
	HX_("filterMode",3b,5b,a5,54),
	HX_("fieldBorderColor",3d,66,ca,1d),
	HX_("fieldBorderThickness",4e,5b,39,33),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("backgroundSprite",93,8a,2c,8e),
	HX_("_caretTimer",61,a8,06,02),
	HX_("caret",83,f9,1f,41),
	HX_("fieldBorderSprite",eb,25,5e,f0),
	HX_("_scrollBoundIndeces",d9,8f,2d,01),
	HX_("_charBoundaries",dd,1e,8e,62),
	HX_("lastScroll",03,bb,3f,12),
	HX_("destroy",fa,2c,86,24),
	HX_("draw",04,2c,70,42),
	HX_("drawSprite",29,57,59,05),
	HX_("update",09,86,05,87),
	HX_("onKeyDown",42,22,f2,73),
	HX_("onChange",ef,87,1f,97),
	HX_("insertSubstring",d8,df,31,11),
	HX_("getCaretIndex",c5,12,ce,39),
	HX_("getCharBoundaries",74,85,a1,8b),
	HX_("set_text",aa,e1,11,7b),
	HX_("getCharIndexAtPoint",17,ee,9c,aa),
	HX_("prepareCharBoundaries",25,fa,4d,3a),
	HX_("onSetTextCheck",98,48,e3,2c),
	HX_("calcFrame",58,93,8c,f9),
	HX_("toggleCaret",4f,b1,e6,68),
	HX_("filter",b8,1f,35,85),
	HX_("set_params",83,09,80,e1),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_hasFocus",9b,81,f4,5a),
	HX_("getAlignStr",a2,95,d2,ef),
	HX_("set_caretIndex",4c,27,71,73),
	HX_("set_forceCase",1e,84,68,4d),
	HX_("set_size",be,b5,6b,7a),
	HX_("set_maxLength",8d,5c,fc,d4),
	HX_("set_lines",62,26,fc,9b),
	HX_("get_passwordMode",a7,38,c8,ba),
	HX_("set_passwordMode",1b,26,0a,11),
	HX_("set_filterMode",f8,cb,ba,ea),
	HX_("set_fieldBorderColor",ba,82,ec,08),
	HX_("set_fieldBorderThickness",4b,fa,af,88),
	HX_("set_backgroundColor",b8,10,ef,d4),
	::String(null()) };

static void FlxInputText_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::PASTE_ACTION,"PASTE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::COPY_ACTION,"COPY_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::CUT_ACTION,"CUT_ACTION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxInputText_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::PASTE_ACTION,"PASTE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::COPY_ACTION,"COPY_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::CUT_ACTION,"CUT_ACTION");
};

#endif

::hx::Class FlxInputText_obj::__mClass;

static ::String FlxInputText_obj_sStaticFields[] = {
	HX_("NO_FILTER",36,13,4e,92),
	HX_("ONLY_ALPHA",eb,4c,e5,a7),
	HX_("ONLY_NUMERIC",9a,a9,2d,5f),
	HX_("ONLY_ALPHANUMERIC",22,ad,7f,f5),
	HX_("CUSTOM_FILTER",c6,f1,56,e9),
	HX_("ALL_CASES",a5,06,9b,9d),
	HX_("UPPER_CASE",0d,e2,06,82),
	HX_("LOWER_CASE",0e,61,d8,7c),
	HX_("BACKSPACE_ACTION",16,76,91,d1),
	HX_("DELETE_ACTION",8a,38,e3,2e),
	HX_("ENTER_ACTION",5d,63,46,79),
	HX_("INPUT_ACTION",ab,ae,95,20),
	HX_("PASTE_ACTION",82,8a,7f,75),
	HX_("COPY_ACTION",40,86,6b,16),
	HX_("CUT_ACTION",33,a8,72,59),
	::String(null())
};

void FlxInputText_obj::__register()
{
	FlxInputText_obj _hx_dummy;
	FlxInputText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxInputText",d6,dd,cc,b8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxInputText_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxInputText_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxInputText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxInputText_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxInputText_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxInputText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxInputText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxInputText_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_34_boot)
HXDLIN(  34)		NO_FILTER = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_35_boot)
HXDLIN(  35)		ONLY_ALPHA = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_36_boot)
HXDLIN(  36)		ONLY_NUMERIC = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_37_boot)
HXDLIN(  37)		ONLY_ALPHANUMERIC = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_38_boot)
HXDLIN(  38)		CUSTOM_FILTER = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_40_boot)
HXDLIN(  40)		ALL_CASES = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_41_boot)
HXDLIN(  41)		UPPER_CASE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_42_boot)
HXDLIN(  42)		LOWER_CASE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_44_boot)
HXDLIN(  44)		BACKSPACE_ACTION = HX_("backspace",3f,85,ea,ca);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_45_boot)
HXDLIN(  45)		DELETE_ACTION = HX_("delete",2b,c0,d8,6a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_46_boot)
HXDLIN(  46)		ENTER_ACTION = HX_("enter",18,6d,86,70);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_47_boot)
HXDLIN(  47)		INPUT_ACTION = HX_("input",0a,c4,1d,be);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_48_boot)
HXDLIN(  48)		PASTE_ACTION = HX_("paste",53,53,56,bd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_49_boot)
HXDLIN(  49)		COPY_ACTION = HX_("copy",b5,bb,c4,41);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_50_boot)
HXDLIN(  50)		CUT_ACTION = HX_("cut",82,85,4b,00);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
