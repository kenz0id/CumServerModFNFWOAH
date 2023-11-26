#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Prompt
#include <Prompt.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIPopup
#include <flixel/addons/ui/FlxUIPopup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISubState
#include <flixel/addons/ui/FlxUISubState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ba37e6f81b70d97c_44_new,"Prompt","new",0x397898b6,"Prompt.new","Prompt.hx",44,0xca4d6f7a)
HX_DEFINE_STACK_FRAME(_hx_pos_ba37e6f81b70d97c_46_new,"Prompt","new",0x397898b6,"Prompt.new","Prompt.hx",46,0xca4d6f7a)
HX_DEFINE_STACK_FRAME(_hx_pos_ba37e6f81b70d97c_17_new,"Prompt","new",0x397898b6,"Prompt.new","Prompt.hx",17,0xca4d6f7a)
HX_LOCAL_STACK_FRAME(_hx_pos_ba37e6f81b70d97c_52_create,"Prompt","create",0xfceff866,"Prompt.create","Prompt.hx",52,0xca4d6f7a)
HX_LOCAL_STACK_FRAME(_hx_pos_ba37e6f81b70d97c_136_makeSelectorGraphic,"Prompt","makeSelectorGraphic",0x4d64ff51,"Prompt.makeSelectorGraphic","Prompt.hx",136,0xca4d6f7a)
HX_LOCAL_STACK_FRAME(_hx_pos_ba37e6f81b70d97c_153_drawCircleCornerOnSelector,"Prompt","drawCircleCornerOnSelector",0x9faa3b51,"Prompt.drawCircleCornerOnSelector","Prompt.hx",153,0xca4d6f7a)

void Prompt_obj::__construct(::String __o_promptText,::hx::Null< int >  __o_defaultSelected, ::Dynamic okCallback, ::Dynamic cancelCallback,::hx::Null< bool >  __o_acceptOnDefault,::String option1,::String option2){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Prompt,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_ba37e6f81b70d97c_44_new)
HXLINE(  44)			if (::hx::IsNotNull( _gthis->okc )) {
HXLINE(  44)				_gthis->okc();
            			}
HXLINE(  45)			_gthis->close();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Prompt,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_ba37e6f81b70d97c_46_new)
HXLINE(  46)			if (::hx::IsNotNull( _gthis->cancelc )) {
HXLINE(  46)				_gthis->cancelc();
            			}
HXLINE(  47)			_gthis->close();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		::String promptText = __o_promptText;
            		if (::hx::IsNull(__o_promptText)) promptText = HX_("",00,00,00,00);
            		int defaultSelected = __o_defaultSelected.Default(0);
            		bool acceptOnDefault = __o_acceptOnDefault.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_ba37e6f81b70d97c_17_new)
HXLINE(  30)		this->cornerSize = 10;
HXLINE(  24)		this->goAnyway = false;
HXLINE(  23)		this->theText = HX_("",00,00,00,00);
HXLINE(  22)		this->buttons =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,((Float)473.3),450,null());
HXLINE(  19)		this->selected = 0;
HXLINE(  32)		 ::Prompt _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  33)		this->selected = defaultSelected;
HXLINE(  34)		this->okc = okCallback;
HXLINE(  35)		this->cancelc = cancelCallback;
HXLINE(  36)		this->theText = promptText;
HXLINE(  37)		this->goAnyway = acceptOnDefault;
HXLINE(  39)		::String op1 = HX_("OK",1c,45,00,00);
HXLINE(  40)		::String op2 = HX_("CANCEL",7a,99,b6,6a);
HXLINE(  42)		if (::hx::IsNotNull( option1 )) {
HXLINE(  42)			op1 = option1;
            		}
HXLINE(  43)		if (::hx::IsNotNull( option2 )) {
HXLINE(  43)			op2 = option2;
            		}
HXLINE(  44)		this->buttonAccept =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,((Float)473.3),450,op1, ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  46)		this->buttonNo =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,((Float)633.3),450,op2, ::Dynamic(new _hx_Closure_1(_gthis)));
HXLINE(  48)		super::__construct();
            	}

Dynamic Prompt_obj::__CreateEmpty() { return new Prompt_obj; }

void *Prompt_obj::_hx_vtable = 0;

Dynamic Prompt_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Prompt_obj > _hx_result = new Prompt_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool Prompt_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x4b378884) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x4b378884;
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

void Prompt_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_ba37e6f81b70d97c_52_create)
HXLINE(  53)		this->super::create();
HXLINE(  54)		if (this->goAnyway) {
HXLINE(  57)			if (::hx::IsNotNull( this->okc )) {
HXLINE(  57)				this->okc();
            			}
HXLINE(  58)			this->close();
            		}
            		else {
HXLINE(  61)			this->panel =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  62)			this->panelbg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  63)			this->makeSelectorGraphic(this->panel,300,150,-6710887);
HXLINE(  64)			this->makeSelectorGraphic(this->panelbg,304,154,-16777216);
HXLINE(  73)			this->panel->scrollFactor->set(null(),null());
HXLINE(  74)			{
HXLINE(  74)				 ::flixel::FlxSprite _this = this->panel;
HXDLIN(  74)				 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  74)				bool _hx_tmp;
HXDLIN(  74)				switch((int)(axes->_hx_getIndex())){
            					case (int)0: case (int)2: {
HXLINE(  74)						_hx_tmp = true;
            					}
            					break;
            					default:{
HXLINE(  74)						_hx_tmp = false;
            					}
            				}
HXDLIN(  74)				if (_hx_tmp) {
HXLINE(  74)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  74)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  74)				bool _hx_tmp1;
HXDLIN(  74)				switch((int)(axes->_hx_getIndex())){
            					case (int)1: case (int)2: {
HXLINE(  74)						_hx_tmp1 = true;
            					}
            					break;
            					default:{
HXLINE(  74)						_hx_tmp1 = false;
            					}
            				}
HXDLIN(  74)				if (_hx_tmp1) {
HXLINE(  74)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  74)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  75)			this->panelbg->scrollFactor->set(null(),null());
HXLINE(  76)			{
HXLINE(  76)				 ::flixel::FlxSprite _this1 = this->panelbg;
HXDLIN(  76)				 ::flixel::util::FlxAxes axes1 = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  76)				bool _hx_tmp2;
HXDLIN(  76)				switch((int)(axes1->_hx_getIndex())){
            					case (int)0: case (int)2: {
HXLINE(  76)						_hx_tmp2 = true;
            					}
            					break;
            					default:{
HXLINE(  76)						_hx_tmp2 = false;
            					}
            				}
HXDLIN(  76)				if (_hx_tmp2) {
HXLINE(  76)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  76)					_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  76)				bool _hx_tmp3;
HXDLIN(  76)				switch((int)(axes1->_hx_getIndex())){
            					case (int)1: case (int)2: {
HXLINE(  76)						_hx_tmp3 = true;
            					}
            					break;
            					default:{
HXLINE(  76)						_hx_tmp3 = false;
            					}
            				}
HXDLIN(  76)				if (_hx_tmp3) {
HXLINE(  76)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  76)					_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  78)			this->add(this->panelbg);
HXLINE(  79)			this->add(this->panel);
HXLINE(  80)			this->add(this->buttonAccept);
HXLINE(  81)			this->add(this->buttonNo);
HXLINE(  83)			Float textshit = (this->buttonNo->get_width() * ( (Float)(2) ));
HXDLIN(  83)			 ::flixel::text::FlxText textshit1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,textshit,this->panel->y,300,this->theText,16,null());
HXLINE(  84)			textshit1->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  85)			this->add(textshit1);
HXLINE(  86)			{
HXLINE(  86)				 ::flixel::util::FlxAxes axes2 = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  86)				bool _hx_tmp4;
HXDLIN(  86)				switch((int)(axes2->_hx_getIndex())){
            					case (int)0: case (int)2: {
HXLINE(  86)						_hx_tmp4 = true;
            					}
            					break;
            					default:{
HXLINE(  86)						_hx_tmp4 = false;
            					}
            				}
HXDLIN(  86)				if (_hx_tmp4) {
HXLINE(  86)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  86)					textshit1->set_x(((( (Float)(_hx_tmp) ) - textshit1->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  86)				bool _hx_tmp5;
HXDLIN(  86)				switch((int)(axes2->_hx_getIndex())){
            					case (int)1: case (int)2: {
HXLINE(  86)						_hx_tmp5 = true;
            					}
            					break;
            					default:{
HXLINE(  86)						_hx_tmp5 = false;
            					}
            				}
HXDLIN(  86)				if (_hx_tmp5) {
HXLINE(  86)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  86)					textshit1->set_y(((( (Float)(_hx_tmp) ) - textshit1->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  87)			{
HXLINE(  87)				 ::flixel::ui::FlxButton _this2 = this->buttonAccept;
HXDLIN(  87)				 ::flixel::util::FlxAxes axes3 = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  87)				bool _hx_tmp6;
HXDLIN(  87)				switch((int)(axes3->_hx_getIndex())){
            					case (int)0: case (int)2: {
HXLINE(  87)						_hx_tmp6 = true;
            					}
            					break;
            					default:{
HXLINE(  87)						_hx_tmp6 = false;
            					}
            				}
HXDLIN(  87)				if (_hx_tmp6) {
HXLINE(  87)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  87)					_this2->set_x(((( (Float)(_hx_tmp) ) - _this2->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  87)				bool _hx_tmp7;
HXDLIN(  87)				switch((int)(axes3->_hx_getIndex())){
            					case (int)1: case (int)2: {
HXLINE(  87)						_hx_tmp7 = true;
            					}
            					break;
            					default:{
HXLINE(  87)						_hx_tmp7 = false;
            					}
            				}
HXDLIN(  87)				if (_hx_tmp7) {
HXLINE(  87)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  87)					_this2->set_y(((( (Float)(_hx_tmp) ) - _this2->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  88)			{
HXLINE(  88)				 ::flixel::ui::FlxButton _this3 = this->buttonNo;
HXDLIN(  88)				 ::flixel::util::FlxAxes axes4 = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  88)				bool _hx_tmp8;
HXDLIN(  88)				switch((int)(axes4->_hx_getIndex())){
            					case (int)0: case (int)2: {
HXLINE(  88)						_hx_tmp8 = true;
            					}
            					break;
            					default:{
HXLINE(  88)						_hx_tmp8 = false;
            					}
            				}
HXDLIN(  88)				if (_hx_tmp8) {
HXLINE(  88)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  88)					_this3->set_x(((( (Float)(_hx_tmp) ) - _this3->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  88)				bool _hx_tmp9;
HXDLIN(  88)				switch((int)(axes4->_hx_getIndex())){
            					case (int)1: case (int)2: {
HXLINE(  88)						_hx_tmp9 = true;
            					}
            					break;
            					default:{
HXLINE(  88)						_hx_tmp9 = false;
            					}
            				}
HXDLIN(  88)				if (_hx_tmp9) {
HXLINE(  88)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  88)					_this3->set_y(((( (Float)(_hx_tmp) ) - _this3->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  89)			 ::flixel::ui::FlxButton fh = this->buttonAccept;
HXDLIN(  89)			Float fh1 = fh->x;
HXDLIN(  89)			fh->set_x((fh1 - (this->buttonNo->get_width() / ((Float)1.5))));
HXLINE(  90)			 ::flixel::ui::FlxButton _hx_tmp10 = this->buttonAccept;
HXDLIN(  90)			Float _hx_tmp11 = this->panel->y;
HXDLIN(  90)			_hx_tmp10->set_y(((_hx_tmp11 + this->panel->get_height()) - ( (Float)(30) )));
HXLINE(  91)			 ::flixel::ui::FlxButton fh2 = this->buttonNo;
HXDLIN(  91)			Float fh3 = fh2->x;
HXDLIN(  91)			fh2->set_x((fh3 + (this->buttonNo->get_width() / ((Float)1.5))));
HXLINE(  92)			 ::flixel::ui::FlxButton _hx_tmp12 = this->buttonNo;
HXDLIN(  92)			Float _hx_tmp13 = this->panel->y;
HXDLIN(  92)			_hx_tmp12->set_y(((_hx_tmp13 + this->panel->get_height()) - ( (Float)(30) )));
HXLINE(  93)			textshit1->scrollFactor->set(null(),null());
            		}
            	}


void Prompt_obj::makeSelectorGraphic( ::flixel::FlxSprite panel,int w,int h,int color){
            	HX_GC_STACKFRAME(&_hx_pos_ba37e6f81b70d97c_136_makeSelectorGraphic)
HXLINE( 137)		panel->makeGraphic(w,h,color,null(),null());
HXLINE( 138)		 ::openfl::display::BitmapData _hx_tmp = panel->get_pixels();
HXDLIN( 138)		_hx_tmp->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,190,panel->get_width(),5),0);
HXLINE( 142)		 ::openfl::display::BitmapData _hx_tmp1 = panel->get_pixels();
HXDLIN( 142)		_hx_tmp1->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,this->cornerSize,this->cornerSize),0);
HXLINE( 143)		this->drawCircleCornerOnSelector(panel,false,false,color);
HXLINE( 144)		 ::openfl::display::BitmapData _hx_tmp2 = panel->get_pixels();
HXDLIN( 144)		Float _hx_tmp3 = panel->get_width();
HXDLIN( 144)		_hx_tmp2->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,(_hx_tmp3 - ( (Float)(this->cornerSize) )),0,this->cornerSize,this->cornerSize),0);
HXLINE( 145)		this->drawCircleCornerOnSelector(panel,true,false,color);
HXLINE( 146)		 ::openfl::display::BitmapData _hx_tmp4 = panel->get_pixels();
HXDLIN( 146)		Float _hx_tmp5 = panel->get_height();
HXDLIN( 146)		_hx_tmp4->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,(_hx_tmp5 - ( (Float)(this->cornerSize) )),this->cornerSize,this->cornerSize),0);
HXLINE( 147)		this->drawCircleCornerOnSelector(panel,false,true,color);
HXLINE( 148)		 ::openfl::display::BitmapData _hx_tmp6 = panel->get_pixels();
HXDLIN( 148)		Float _hx_tmp7 = panel->get_width();
HXDLIN( 148)		Float _hx_tmp8 = (_hx_tmp7 - ( (Float)(this->cornerSize) ));
HXDLIN( 148)		Float _hx_tmp9 = panel->get_height();
HXDLIN( 148)		_hx_tmp6->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,_hx_tmp8,(_hx_tmp9 - ( (Float)(this->cornerSize) )),this->cornerSize,this->cornerSize),0);
HXLINE( 149)		this->drawCircleCornerOnSelector(panel,true,true,color);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Prompt_obj,makeSelectorGraphic,(void))

void Prompt_obj::drawCircleCornerOnSelector( ::flixel::FlxSprite panel,bool flipX,bool flipY,int color){
            	HX_GC_STACKFRAME(&_hx_pos_ba37e6f81b70d97c_153_drawCircleCornerOnSelector)
HXLINE( 154)		Float antiX = panel->get_width();
HXDLIN( 154)		Float antiX1 = (antiX - ( (Float)(this->cornerSize) ));
HXLINE( 155)		Float antiY;
HXDLIN( 155)		if (flipY) {
HXLINE( 155)			antiY = (panel->get_height() - ( (Float)(1) ));
            		}
            		else {
HXLINE( 155)			antiY = ( (Float)(0) );
            		}
HXLINE( 156)		if (flipY) {
HXLINE( 156)			antiY = (antiY - ( (Float)(2) ));
            		}
HXLINE( 157)		 ::openfl::display::BitmapData _hx_tmp = panel->get_pixels();
HXDLIN( 157)		Float _hx_tmp1;
HXDLIN( 157)		if (flipX) {
HXLINE( 157)			_hx_tmp1 = antiX1;
            		}
            		else {
HXLINE( 157)			_hx_tmp1 = ( (Float)(1) );
            		}
HXDLIN( 157)		_hx_tmp->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,_hx_tmp1,::Std_obj::_hx_int(::Math_obj::abs((antiY - ( (Float)(8) )))),10,3),color);
HXLINE( 158)		if (flipY) {
HXLINE( 158)			antiY = (antiY + 1);
            		}
HXLINE( 159)		 ::openfl::display::BitmapData _hx_tmp2 = panel->get_pixels();
HXDLIN( 159)		Float _hx_tmp3;
HXDLIN( 159)		if (flipX) {
HXLINE( 159)			_hx_tmp3 = antiX1;
            		}
            		else {
HXLINE( 159)			_hx_tmp3 = ( (Float)(2) );
            		}
HXDLIN( 159)		_hx_tmp2->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,_hx_tmp3,::Std_obj::_hx_int(::Math_obj::abs((antiY - ( (Float)(6) )))),9,2),color);
HXLINE( 160)		if (flipY) {
HXLINE( 160)			antiY = (antiY + 1);
            		}
HXLINE( 161)		 ::openfl::display::BitmapData _hx_tmp4 = panel->get_pixels();
HXDLIN( 161)		Float _hx_tmp5;
HXDLIN( 161)		if (flipX) {
HXLINE( 161)			_hx_tmp5 = antiX1;
            		}
            		else {
HXLINE( 161)			_hx_tmp5 = ( (Float)(3) );
            		}
HXDLIN( 161)		_hx_tmp4->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,_hx_tmp5,::Std_obj::_hx_int(::Math_obj::abs((antiY - ( (Float)(5) )))),8,1),color);
HXLINE( 162)		 ::openfl::display::BitmapData _hx_tmp6 = panel->get_pixels();
HXDLIN( 162)		Float _hx_tmp7;
HXDLIN( 162)		if (flipX) {
HXLINE( 162)			_hx_tmp7 = antiX1;
            		}
            		else {
HXLINE( 162)			_hx_tmp7 = ( (Float)(4) );
            		}
HXDLIN( 162)		_hx_tmp6->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,_hx_tmp7,::Std_obj::_hx_int(::Math_obj::abs((antiY - ( (Float)(4) )))),7,1),color);
HXLINE( 163)		 ::openfl::display::BitmapData _hx_tmp8 = panel->get_pixels();
HXDLIN( 163)		Float _hx_tmp9;
HXDLIN( 163)		if (flipX) {
HXLINE( 163)			_hx_tmp9 = antiX1;
            		}
            		else {
HXLINE( 163)			_hx_tmp9 = ( (Float)(5) );
            		}
HXDLIN( 163)		_hx_tmp8->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,_hx_tmp9,::Std_obj::_hx_int(::Math_obj::abs((antiY - ( (Float)(3) )))),6,1),color);
HXLINE( 164)		 ::openfl::display::BitmapData _hx_tmp10 = panel->get_pixels();
HXDLIN( 164)		Float _hx_tmp11;
HXDLIN( 164)		if (flipX) {
HXLINE( 164)			_hx_tmp11 = antiX1;
            		}
            		else {
HXLINE( 164)			_hx_tmp11 = ( (Float)(6) );
            		}
HXDLIN( 164)		_hx_tmp10->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,_hx_tmp11,::Std_obj::_hx_int(::Math_obj::abs((antiY - ( (Float)(2) )))),5,1),color);
HXLINE( 165)		 ::openfl::display::BitmapData _hx_tmp12 = panel->get_pixels();
HXDLIN( 165)		Float _hx_tmp13;
HXDLIN( 165)		if (flipX) {
HXLINE( 165)			_hx_tmp13 = antiX1;
            		}
            		else {
HXLINE( 165)			_hx_tmp13 = ( (Float)(8) );
            		}
HXDLIN( 165)		_hx_tmp12->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,_hx_tmp13,::Std_obj::_hx_int(::Math_obj::abs((antiY - ( (Float)(1) )))),3,1),color);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Prompt_obj,drawCircleCornerOnSelector,(void))


::hx::ObjectPtr< Prompt_obj > Prompt_obj::__new(::String __o_promptText,::hx::Null< int >  __o_defaultSelected, ::Dynamic okCallback, ::Dynamic cancelCallback,::hx::Null< bool >  __o_acceptOnDefault,::String option1,::String option2) {
	::hx::ObjectPtr< Prompt_obj > __this = new Prompt_obj();
	__this->__construct(__o_promptText,__o_defaultSelected,okCallback,cancelCallback,__o_acceptOnDefault,option1,option2);
	return __this;
}

::hx::ObjectPtr< Prompt_obj > Prompt_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_promptText,::hx::Null< int >  __o_defaultSelected, ::Dynamic okCallback, ::Dynamic cancelCallback,::hx::Null< bool >  __o_acceptOnDefault,::String option1,::String option2) {
	Prompt_obj *__this = (Prompt_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Prompt_obj), true, "Prompt"));
	*(void **)__this = Prompt_obj::_hx_vtable;
	__this->__construct(__o_promptText,__o_defaultSelected,okCallback,cancelCallback,__o_acceptOnDefault,option1,option2);
	return __this;
}

Prompt_obj::Prompt_obj()
{
}

void Prompt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Prompt);
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(okc,"okc");
	HX_MARK_MEMBER_NAME(cancelc,"cancelc");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(theText,"theText");
	HX_MARK_MEMBER_NAME(goAnyway,"goAnyway");
	HX_MARK_MEMBER_NAME(UI_box,"UI_box");
	HX_MARK_MEMBER_NAME(panel,"panel");
	HX_MARK_MEMBER_NAME(panelbg,"panelbg");
	HX_MARK_MEMBER_NAME(buttonAccept,"buttonAccept");
	HX_MARK_MEMBER_NAME(buttonNo,"buttonNo");
	HX_MARK_MEMBER_NAME(cornerSize,"cornerSize");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Prompt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(okc,"okc");
	HX_VISIT_MEMBER_NAME(cancelc,"cancelc");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(theText,"theText");
	HX_VISIT_MEMBER_NAME(goAnyway,"goAnyway");
	HX_VISIT_MEMBER_NAME(UI_box,"UI_box");
	HX_VISIT_MEMBER_NAME(panel,"panel");
	HX_VISIT_MEMBER_NAME(panelbg,"panelbg");
	HX_VISIT_MEMBER_NAME(buttonAccept,"buttonAccept");
	HX_VISIT_MEMBER_NAME(buttonNo,"buttonNo");
	HX_VISIT_MEMBER_NAME(cornerSize,"cornerSize");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Prompt_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"okc") ) { return ::hx::Val( okc ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"panel") ) { return ::hx::Val( panel ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UI_box") ) { return ::hx::Val( UI_box ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cancelc") ) { return ::hx::Val( cancelc ); }
		if (HX_FIELD_EQ(inName,"buttons") ) { return ::hx::Val( buttons ); }
		if (HX_FIELD_EQ(inName,"theText") ) { return ::hx::Val( theText ); }
		if (HX_FIELD_EQ(inName,"panelbg") ) { return ::hx::Val( panelbg ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( selected ); }
		if (HX_FIELD_EQ(inName,"goAnyway") ) { return ::hx::Val( goAnyway ); }
		if (HX_FIELD_EQ(inName,"buttonNo") ) { return ::hx::Val( buttonNo ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cornerSize") ) { return ::hx::Val( cornerSize ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonAccept") ) { return ::hx::Val( buttonAccept ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"makeSelectorGraphic") ) { return ::hx::Val( makeSelectorGraphic_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"drawCircleCornerOnSelector") ) { return ::hx::Val( drawCircleCornerOnSelector_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Prompt_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"okc") ) { okc=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"panel") ) { panel=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UI_box") ) { UI_box=inValue.Cast<  ::flixel::addons::ui::FlxUIPopup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cancelc") ) { cancelc=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"theText") ) { theText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"panelbg") ) { panelbg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"goAnyway") ) { goAnyway=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonNo") ) { buttonNo=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cornerSize") ) { cornerSize=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonAccept") ) { buttonAccept=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Prompt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("buttons",41,52,75,ca));
	outFields->push(HX_("theText",be,e5,22,cc));
	outFields->push(HX_("goAnyway",0b,1e,b6,ae));
	outFields->push(HX_("UI_box",60,07,ac,43));
	outFields->push(HX_("panel",04,7b,52,bd));
	outFields->push(HX_("panelbg",c9,99,2a,93));
	outFields->push(HX_("buttonAccept",9a,6a,c4,b2));
	outFields->push(HX_("buttonNo",d3,86,32,5c));
	outFields->push(HX_("cornerSize",36,1b,0f,67));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Prompt_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Prompt_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Prompt_obj,okc),HX_("okc",c7,97,54,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Prompt_obj,cancelc),HX_("cancelc",a9,dd,3b,75)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Prompt_obj,buttons),HX_("buttons",41,52,75,ca)},
	{::hx::fsString,(int)offsetof(Prompt_obj,theText),HX_("theText",be,e5,22,cc)},
	{::hx::fsBool,(int)offsetof(Prompt_obj,goAnyway),HX_("goAnyway",0b,1e,b6,ae)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIPopup */ ,(int)offsetof(Prompt_obj,UI_box),HX_("UI_box",60,07,ac,43)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Prompt_obj,panel),HX_("panel",04,7b,52,bd)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Prompt_obj,panelbg),HX_("panelbg",c9,99,2a,93)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(Prompt_obj,buttonAccept),HX_("buttonAccept",9a,6a,c4,b2)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(Prompt_obj,buttonNo),HX_("buttonNo",d3,86,32,5c)},
	{::hx::fsInt,(int)offsetof(Prompt_obj,cornerSize),HX_("cornerSize",36,1b,0f,67)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Prompt_obj_sStaticStorageInfo = 0;
#endif

static ::String Prompt_obj_sMemberFields[] = {
	HX_("selected",5b,2a,6d,b1),
	HX_("okc",c7,97,54,00),
	HX_("cancelc",a9,dd,3b,75),
	HX_("buttons",41,52,75,ca),
	HX_("theText",be,e5,22,cc),
	HX_("goAnyway",0b,1e,b6,ae),
	HX_("UI_box",60,07,ac,43),
	HX_("panel",04,7b,52,bd),
	HX_("panelbg",c9,99,2a,93),
	HX_("buttonAccept",9a,6a,c4,b2),
	HX_("buttonNo",d3,86,32,5c),
	HX_("cornerSize",36,1b,0f,67),
	HX_("create",fc,66,0f,7c),
	HX_("makeSelectorGraphic",fb,aa,47,12),
	HX_("drawCircleCornerOnSelector",e7,b8,c2,c8),
	::String(null()) };

::hx::Class Prompt_obj::__mClass;

void Prompt_obj::__register()
{
	Prompt_obj _hx_dummy;
	Prompt_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Prompt",c4,c5,ec,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Prompt_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Prompt_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Prompt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Prompt_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

