#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIPopup
#include <flixel/addons/ui/FlxUIPopup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISubState
#include <flixel/addons/ui/FlxUISubState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e24d3b203383ea49_9_new,"flixel.addons.ui.FlxUIPopup","new",0x6659d609,"flixel.addons.ui.FlxUIPopup.new","flixel/addons/ui/FlxUIPopup.hx",9,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_20_set_immovable,"flixel.addons.ui.FlxUIPopup","set_immovable",0x024cefd6,"flixel.addons.ui.FlxUIPopup.set_immovable","flixel/addons/ui/FlxUIPopup.hx",20,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_37_set_x,"flixel.addons.ui.FlxUIPopup","set_x",0xf2011d44,"flixel.addons.ui.FlxUIPopup.set_x","flixel/addons/ui/FlxUIPopup.hx",37,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_42_set_y,"flixel.addons.ui.FlxUIPopup","set_y",0xf2011d45,"flixel.addons.ui.FlxUIPopup.set_y","flixel/addons/ui/FlxUIPopup.hx",42,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_47_get_width,"flixel.addons.ui.FlxUIPopup","get_width",0x1b8f3cc6,"flixel.addons.ui.FlxUIPopup.get_width","flixel/addons/ui/FlxUIPopup.hx",47,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_52_get_height,"flixel.addons.ui.FlxUIPopup","get_height",0xb8156927,"flixel.addons.ui.FlxUIPopup.get_height","flixel/addons/ui/FlxUIPopup.hx",52,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_57_set_width,"flixel.addons.ui.FlxUIPopup","set_width",0xfee028d2,"flixel.addons.ui.FlxUIPopup.set_width","flixel/addons/ui/FlxUIPopup.hx",57,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_62_set_height,"flixel.addons.ui.FlxUIPopup","set_height",0xbb93079b,"flixel.addons.ui.FlxUIPopup.set_height","flixel/addons/ui/FlxUIPopup.hx",62,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_67_set_angle,"flixel.addons.ui.FlxUIPopup","set_angle",0x575fb69f,"flixel.addons.ui.FlxUIPopup.set_angle","flixel/addons/ui/FlxUIPopup.hx",67,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_72_set_alpha,"flixel.addons.ui.FlxUIPopup","set_alpha",0x56141a2a,"flixel.addons.ui.FlxUIPopup.set_alpha","flixel/addons/ui/FlxUIPopup.hx",72,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_77_set_facing,"flixel.addons.ui.FlxUIPopup","set_facing",0x9d4c3ece,"flixel.addons.ui.FlxUIPopup.set_facing","flixel/addons/ui/FlxUIPopup.hx",77,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_82_set_moves,"flixel.addons.ui.FlxUIPopup","set_moves",0x40e33f0e,"flixel.addons.ui.FlxUIPopup.set_moves","flixel/addons/ui/FlxUIPopup.hx",82,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_87_set_offset,"flixel.addons.ui.FlxUIPopup","set_offset",0x19869747,"flixel.addons.ui.FlxUIPopup.set_offset","flixel/addons/ui/FlxUIPopup.hx",87,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_92_set_origin,"flixel.addons.ui.FlxUIPopup","set_origin",0x0448199a,"flixel.addons.ui.FlxUIPopup.set_origin","flixel/addons/ui/FlxUIPopup.hx",92,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_97_set_scale,"flixel.addons.ui.FlxUIPopup","set_scale",0xad4c4156,"flixel.addons.ui.FlxUIPopup.set_scale","flixel/addons/ui/FlxUIPopup.hx",97,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_102_set_scrollFactor,"flixel.addons.ui.FlxUIPopup","set_scrollFactor",0x4bf7ab70,"flixel.addons.ui.FlxUIPopup.set_scrollFactor","flixel/addons/ui/FlxUIPopup.hx",102,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_107_reset,"flixel.addons.ui.FlxUIPopup","reset",0x5e99cbb8,"flixel.addons.ui.FlxUIPopup.reset","flixel/addons/ui/FlxUIPopup.hx",107,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_111_setPosition,"flixel.addons.ui.FlxUIPopup","setPosition",0xcfccc114,"flixel.addons.ui.FlxUIPopup.setPosition","flixel/addons/ui/FlxUIPopup.hx",111,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_133_create,"flixel.addons.ui.FlxUIPopup","create",0xdb8f90f3,"flixel.addons.ui.FlxUIPopup.create","flixel/addons/ui/FlxUIPopup.hx",133,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_171_quickSetup,"flixel.addons.ui.FlxUIPopup","quickSetup",0x6e804dc7,"flixel.addons.ui.FlxUIPopup.quickSetup","flixel/addons/ui/FlxUIPopup.hx",171,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_175_getEvent,"flixel.addons.ui.FlxUIPopup","getEvent",0x34f3ad5b,"flixel.addons.ui.FlxUIPopup.getEvent","flixel/addons/ui/FlxUIPopup.hx",175,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_221_castParent,"flixel.addons.ui.FlxUIPopup","castParent",0xbafca2c0,"flixel.addons.ui.FlxUIPopup.castParent","flixel/addons/ui/FlxUIPopup.hx",221,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_229_myGetTextFallback,"flixel.addons.ui.FlxUIPopup","myGetTextFallback",0xb2e4e102,"flixel.addons.ui.FlxUIPopup.myGetTextFallback","flixel/addons/ui/FlxUIPopup.hx",229,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_250__doQuickSetup,"flixel.addons.ui.FlxUIPopup","_doQuickSetup",0xe6085983,"flixel.addons.ui.FlxUIPopup._doQuickSetup","flixel/addons/ui/FlxUIPopup.hx",250,0xc0f68306)
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_270__doQuickSetupButtons,"flixel.addons.ui.FlxUIPopup","_doQuickSetupButtons",0xd13ba6fe,"flixel.addons.ui.FlxUIPopup._doQuickSetupButtons","flixel/addons/ui/FlxUIPopup.hx",270,0xc0f68306)
static const ::String _hx_array_data_ca4a1d97_28[] = {
	HX_("btn0",54,4e,1f,41),HX_("btn1",55,4e,1f,41),HX_("btn2",56,4e,1f,41),
};
HX_LOCAL_STACK_FRAME(_hx_pos_e24d3b203383ea49_129_boot,"flixel.addons.ui.FlxUIPopup","boot",0x205a7269,"flixel.addons.ui.FlxUIPopup.boot","flixel/addons/ui/FlxUIPopup.hx",129,0xc0f68306)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIPopup_obj::__construct( ::Dynamic BGColor){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_9_new)
HXLINE( 224)		this->_quickSetupParams = null();
HXLINE( 127)		this->_height = ((Float)0);
HXLINE( 126)		this->_width = ((Float)0);
HXLINE( 121)		this->alpha = ((Float)1);
HXLINE( 119)		this->params = null();
HXLINE( 117)		this->y = ((Float)0);
HXLINE( 116)		this->x = ((Float)0);
HXLINE(  13)		this->broadcastToFlxUI = true;
HXLINE(   9)		super::__construct(BGColor);
            	}

Dynamic FlxUIPopup_obj::__CreateEmpty() { return new FlxUIPopup_obj; }

void *FlxUIPopup_obj::_hx_vtable = 0;

Dynamic FlxUIPopup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIPopup_obj > _hx_result = new FlxUIPopup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxUIPopup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x4ba866f4) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x4ba866f4;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x662f0fc9 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUIPopup__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIPopup_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIPopup_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIPopup_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUIPopup__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUIPopup__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIPopup_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIPopup_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIPopup_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIPopup_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIPopup_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIPopup_obj::set_height,
};

void *FlxUIPopup_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUIPopup__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUIPopup__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUIPopup__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
	}
	return super::_hx_getInterface(inHash);
}

bool FlxUIPopup_obj::set_immovable(bool Immovable){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_20_set_immovable)
HXDLIN(  20)		return this->immovable;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_immovable,return )

Float FlxUIPopup_obj::set_x(Float Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_37_set_x)
HXDLIN(  37)		return (this->x = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_x,return )

Float FlxUIPopup_obj::set_y(Float Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_42_set_y)
HXDLIN(  42)		return (this->y = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_y,return )

Float FlxUIPopup_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_47_get_width)
HXDLIN(  47)		return this->_width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIPopup_obj,get_width,return )

Float FlxUIPopup_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_52_get_height)
HXDLIN(  52)		return this->_height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIPopup_obj,get_height,return )

Float FlxUIPopup_obj::set_width(Float Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_57_set_width)
HXDLIN(  57)		return (this->_width = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_width,return )

Float FlxUIPopup_obj::set_height(Float Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_62_set_height)
HXDLIN(  62)		return (this->_height = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_height,return )

Float FlxUIPopup_obj::set_angle(Float Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_67_set_angle)
HXDLIN(  67)		return (this->angle = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_angle,return )

Float FlxUIPopup_obj::set_alpha(Float Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_72_set_alpha)
HXDLIN(  72)		return (this->alpha = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_alpha,return )

int FlxUIPopup_obj::set_facing(int Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_77_set_facing)
HXDLIN(  77)		return (this->facing = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_facing,return )

bool FlxUIPopup_obj::set_moves(bool Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_82_set_moves)
HXDLIN(  82)		return (this->moves = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_moves,return )

 ::flixel::math::FlxPoint FlxUIPopup_obj::set_offset( ::flixel::math::FlxPoint Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_87_set_offset)
HXDLIN(  87)		return (this->offset = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_offset,return )

 ::flixel::math::FlxPoint FlxUIPopup_obj::set_origin( ::flixel::math::FlxPoint Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_92_set_origin)
HXDLIN(  92)		return (this->origin = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_origin,return )

 ::flixel::math::FlxPoint FlxUIPopup_obj::set_scale( ::flixel::math::FlxPoint Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_97_set_scale)
HXDLIN(  97)		return (this->scale = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_scale,return )

 ::flixel::math::FlxPoint FlxUIPopup_obj::set_scrollFactor( ::flixel::math::FlxPoint Value){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_102_set_scrollFactor)
HXDLIN( 102)		return (this->scrollFactor = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIPopup_obj,set_scrollFactor,return )

void FlxUIPopup_obj::reset(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_107_reset)
HXDLIN( 107)		this->setPosition(X,Y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIPopup_obj,reset,(void))

void FlxUIPopup_obj::setPosition(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_111_setPosition)
HXLINE( 112)		this->set_x(X);
HXLINE( 113)		this->set_y(Y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIPopup_obj,setPosition,(void))

void FlxUIPopup_obj::create(){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_133_create)
HXLINE( 134)		if ((this->_xml_id == HX_("",00,00,00,00))) {
HXLINE( 136)			this->_xml_id = HX_("flixel/flixel-ui/xml/default_popup",19,21,fc,a0);
            		}
HXLINE( 139)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN( 139)		point->_inPool = false;
HXDLIN( 139)		this->set_scrollFactor(point);
HXLINE( 140)		this->getTextFallback = this->myGetTextFallback_dyn();
HXLINE( 142)		this->super::create();
HXLINE( 144)		if (::hx::IsNotNull( this->_quickSetupParams )) {
HXLINE( 146)			this->_doQuickSetup();
            		}
HXLINE( 149)		this->scrollFactor->set(0,0);
HXLINE( 150)		this->_ui->setScrollFactor(( (Float)(0) ),( (Float)(0) ));
            	}


void FlxUIPopup_obj::quickSetup(::String title,::String body,::Array< ::String > button_labels){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_171_quickSetup)
HXDLIN( 171)		this->_quickSetupParams =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("button_labels",ec,d9,01,09),button_labels)
            			->setFixed(1,HX_("title",98,15,3b,10),title)
            			->setFixed(2,HX_("body",a2,7a,1b,41),body));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxUIPopup_obj,quickSetup,(void))

void FlxUIPopup_obj::getEvent(::String id,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray eventParams){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_175_getEvent)
HXLINE( 176)		if (::hx::IsNull( eventParams )) {
HXLINE( 178)			if (::hx::IsNotNull( this->params )) {
HXLINE( 180)				eventParams = ::cpp::VirtualArray_obj::__new(0);
            			}
            		}
HXLINE( 183)		if (::hx::IsNotNull( this->params )) {
HXLINE( 185)			eventParams = eventParams->concat(this->params);
            		}
HXLINE( 188)		if ((id == HX_("click_button",49,90,30,6d))) {
HXLINE( 191)			::String str = HX_("",00,00,00,00);
HXLINE( 192)			if (::hx::IsNotNull( eventParams )) {
HXLINE( 194)				if (::Std_obj::isOfType(eventParams->__get(0),::hx::ClassOf< ::String >())) {
HXLINE( 196)					str = ::Std_obj::string(eventParams->__get(0));
            				}
HXLINE( 199)				int buttonAmount = ::Std_obj::_hx_int(( (Float)(eventParams->__get(0)) ));
HXLINE( 200)				bool _hx_tmp;
HXDLIN( 200)				bool _hx_tmp1;
HXDLIN( 200)				if ((str != HX_("affirm",23,ff,38,c7))) {
HXLINE( 200)					_hx_tmp1 = (str == HX_("cancel",7a,ed,33,b8));
            				}
            				else {
HXLINE( 200)					_hx_tmp1 = true;
            				}
HXDLIN( 200)				if (!(_hx_tmp1)) {
HXLINE( 200)					_hx_tmp = (str == HX_("alt",29,f9,49,00));
            				}
            				else {
HXLINE( 200)					_hx_tmp = true;
            				}
HXDLIN( 200)				if (_hx_tmp) {
HXLINE( 202)					if (::Std_obj::isOfType(this->_parentState,::hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIState >())) {
HXLINE( 205)						::flixel::addons::ui::interfaces::IEventGetter_obj::getEvent(this->castParent(),HX_("click_popup",b5,33,e9,bc),::hx::ObjectPtr<OBJ_>(this),buttonAmount,eventParams);
            					}
            					else {
HXLINE( 210)						::flixel::addons::ui::FlxUI_obj::event(HX_("click_popup",b5,33,e9,bc),::hx::ObjectPtr<OBJ_>(this),buttonAmount,eventParams);
            					}
HXLINE( 212)					this->close();
            				}
            			}
            		}
HXLINE( 216)		this->super::getEvent(id,sender,data,eventParams);
            	}


::Dynamic FlxUIPopup_obj::castParent(){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_221_castParent)
HXDLIN( 221)		return this->_parentState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIPopup_obj,castParent,return )

::String FlxUIPopup_obj::myGetTextFallback(::String flag,::String __o_context,::hx::Null< bool >  __o_safe){
            		::String context = __o_context;
            		if (::hx::IsNull(__o_context)) context = HX_("ui",54,66,00,00);
            		bool safe = __o_safe.Default(true);
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_229_myGetTextFallback)
HXLINE( 230)		::String _hx_switch_0 = flag;
            		if (  (_hx_switch_0==HX_("$POPUP_BODY_DEFAULT",3b,8d,83,c4)) ){
HXLINE( 243)			return HX_("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam consectetur vehicula pellentesque. Phasellus at blandit augue. Suspendisse vel leo ut elit imperdiet eleifend ut quis purus. Quisque imperdiet turpis vitae justo hendrerit molestie. Quisque tempor ante eget posuere viverra.",6e,34,6f,89);
HXDLIN( 243)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("$POPUP_CANCEL",b1,a8,e5,f9)) ){
HXLINE( 239)			return HX_("Cancel",9a,61,c8,ec);
HXDLIN( 239)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("$POPUP_NO",f8,ab,9b,81)) ){
HXLINE( 235)			return HX_("No",61,44,00,00);
HXDLIN( 235)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("$POPUP_OK",d3,ac,9b,81)) ){
HXLINE( 237)			return HX_("Ok",3c,45,00,00);
HXDLIN( 237)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("$POPUP_TITLE_DEFAULT",43,e1,6e,b5)) ){
HXLINE( 241)			return HX_("Alert!",65,8d,92,6f);
HXDLIN( 241)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("$POPUP_YES",70,1d,a3,e6)) ){
HXLINE( 233)			return HX_("Yes",07,e1,43,00);
HXDLIN( 233)			goto _hx_goto_22;
            		}
            		_hx_goto_22:;
HXLINE( 246)		return flag;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxUIPopup_obj,myGetTextFallback,return )

void FlxUIPopup_obj::_doQuickSetup(){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_250__doQuickSetup)
HXLINE( 251)		if (this->_ui->hasAsset(HX_("title",98,15,3b,10),null())) {
HXLINE( 253)			 ::flixel::addons::ui::FlxUIText text_title = ( ( ::flixel::addons::ui::FlxUIText)(this->_ui->getAsset(HX_("title",98,15,3b,10),null())) );
HXLINE( 254)			text_title->set_text(( (::String)(this->_quickSetupParams->__Field(HX_("title",98,15,3b,10),::hx::paccDynamic)) ));
            		}
HXLINE( 256)		if (this->_ui->hasAsset(HX_("body",a2,7a,1b,41),null())) {
HXLINE( 258)			 ::flixel::addons::ui::FlxUIText text_body = ( ( ::flixel::addons::ui::FlxUIText)(this->_ui->getAsset(HX_("body",a2,7a,1b,41),null())) );
HXLINE( 259)			text_body->set_text(( (::String)(this->_quickSetupParams->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic)) ));
            		}
HXLINE( 262)		this->_doQuickSetupButtons();
HXLINE( 265)		this->_quickSetupParams->__SetField(HX_("button_labels",ec,d9,01,09),null(),::hx::paccDynamic);
HXLINE( 266)		this->_quickSetupParams = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIPopup_obj,_doQuickSetup,(void))

void FlxUIPopup_obj::_doQuickSetupButtons(){
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_270__doQuickSetupButtons)
HXLINE( 271)		::Array< ::String > arr = ::Array_obj< ::String >::fromData( _hx_array_data_ca4a1d97_28,3);
HXLINE( 272)		int i = 0;
HXLINE( 274)		switch((int)(( (::Array< ::String >)(this->_quickSetupParams->__Field(HX_("button_labels",ec,d9,01,09),::hx::paccDynamic)) )->length)){
            			case (int)1: {
HXLINE( 277)				this->_ui->setMode(HX_("1btn",cb,36,ae,20),null());
            			}
            			break;
            			case (int)2: {
HXLINE( 279)				this->_ui->setMode(HX_("2btn",6a,6d,57,21),null());
            			}
            			break;
            			case (int)3: {
HXLINE( 281)				this->_ui->setMode(HX_("3btn",09,a4,00,22),null());
            			}
            			break;
            		}
HXLINE( 284)		{
HXLINE( 284)			int _g = 0;
HXDLIN( 284)			while((_g < arr->length)){
HXLINE( 284)				::String btn = arr->__get(_g);
HXDLIN( 284)				_g = (_g + 1);
HXLINE( 286)				::Dynamic the_btn;
HXLINE( 287)				if (this->_ui->hasAsset(btn,null())) {
HXLINE( 289)					the_btn = this->_ui->getAsset(btn,null());
HXLINE( 290)					if ((( (::Array< ::String >)(this->_quickSetupParams->__Field(HX_("button_labels",ec,d9,01,09),::hx::paccDynamic)) )->length > i)) {
HXLINE( 292)						::String btnlabel = ( (::String)( ::Dynamic(this->_quickSetupParams->__Field(HX_("button_labels",ec,d9,01,09),::hx::paccDynamic))->__GetItem(i)) );
HXLINE( 293)						::String newlabel = btnlabel;
HXLINE( 296)						::String _hx_switch_0 = btnlabel;
            						if (  (_hx_switch_0==HX_("<cancel>",c8,9c,0e,dd)) ||  (_hx_switch_0==HX_("<no>",21,a6,fc,27)) ||  (_hx_switch_0==HX_("<yes>",73,a7,52,dc)) ){
HXLINE( 299)							btnlabel = btnlabel.substr(1,(btnlabel.length - 2)).toUpperCase();
HXLINE( 300)							newlabel = (HX_("$POPUP_",f7,3b,5b,87) + btnlabel);
HXLINE( 301)							newlabel = this->_ui->getText(newlabel,HX_("ui",54,66,00,00),false,null());
HXLINE( 302)							bool _hx_tmp;
HXDLIN( 302)							if (::hx::IsNotNull( newlabel )) {
HXLINE( 302)								_hx_tmp = (newlabel == HX_("",00,00,00,00));
            							}
            							else {
HXLINE( 302)								_hx_tmp = true;
            							}
HXDLIN( 302)							if (_hx_tmp) {
HXLINE( 304)								newlabel = btnlabel;
            							}
HXLINE( 306)							btnlabel = newlabel;
HXLINE( 298)							goto _hx_goto_26;
            						}
            						_hx_goto_26:;
HXLINE( 309)						::flixel::addons::ui::U_obj::setButtonLabel(the_btn,newlabel);
            					}
            				}
HXLINE( 312)				i = (i + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIPopup_obj,_doQuickSetupButtons,(void))

::String FlxUIPopup_obj::CLICK_EVENT;


::hx::ObjectPtr< FlxUIPopup_obj > FlxUIPopup_obj::__new( ::Dynamic BGColor) {
	::hx::ObjectPtr< FlxUIPopup_obj > __this = new FlxUIPopup_obj();
	__this->__construct(BGColor);
	return __this;
}

::hx::ObjectPtr< FlxUIPopup_obj > FlxUIPopup_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic BGColor) {
	FlxUIPopup_obj *__this = (FlxUIPopup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIPopup_obj), true, "flixel.addons.ui.FlxUIPopup"));
	*(void **)__this = FlxUIPopup_obj::_hx_vtable;
	__this->__construct(BGColor);
	return __this;
}

FlxUIPopup_obj::FlxUIPopup_obj()
{
}

void FlxUIPopup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIPopup);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_quickSetupParams,"_quickSetupParams");
	 ::flixel::addons::ui::FlxUISubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIPopup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_quickSetupParams,"_quickSetupParams");
	 ::flixel::addons::ui::FlxUISubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUIPopup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"drag") ) { return ::hx::Val( drag ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"moves") ) { return ::hx::Val( moves ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"facing") ) { return ::hx::Val( facing ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return ::hx::Val( velocity ); }
		if (HX_FIELD_EQ(inName,"getEvent") ) { return ::hx::Val( getEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { return ::hx::Val( immovable ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return ::hx::Val( set_moves_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return ::hx::Val( set_scale_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return ::hx::Val( set_facing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_offset") ) { return ::hx::Val( set_offset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return ::hx::Val( set_origin_dyn() ); }
		if (HX_FIELD_EQ(inName,"quickSetup") ) { return ::hx::Val( quickSetup_dyn() ); }
		if (HX_FIELD_EQ(inName,"castParent") ) { return ::hx::Val( castParent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return ::hx::Val( maxVelocity ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { return ::hx::Val( acceleration ); }
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return ::hx::Val( scrollFactor ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return ::hx::Val( set_immovable_dyn() ); }
		if (HX_FIELD_EQ(inName,"_doQuickSetup") ) { return ::hx::Val( _doQuickSetup_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return ::hx::Val( broadcastToFlxUI ); }
		if (HX_FIELD_EQ(inName,"set_scrollFactor") ) { return ::hx::Val( set_scrollFactor_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_quickSetupParams") ) { return ::hx::Val( _quickSetupParams ); }
		if (HX_FIELD_EQ(inName,"myGetTextFallback") ) { return ::hx::Val( myGetTextFallback_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_doQuickSetupButtons") ) { return ::hx::Val( _doQuickSetupButtons_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUIPopup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) );angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_moves(inValue.Cast< bool >()) );moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scale(inValue.Cast<  ::flixel::math::FlxPoint >()) );scale=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) );alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_facing(inValue.Cast< int >()) );facing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_offset(inValue.Cast<  ::flixel::math::FlxPoint >()) );offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_origin(inValue.Cast<  ::flixel::math::FlxPoint >()) );origin=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_immovable(inValue.Cast< bool >()) );immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollFactor(inValue.Cast<  ::flixel::math::FlxPoint >()) );scrollFactor=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_quickSetupParams") ) { _quickSetupParams=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIPopup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("broadcastToFlxUI",ca,32,56,1a));
	outFields->push(HX_("immovable",0a,27,70,27));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("facing",1a,3f,05,e4));
	outFields->push(HX_("moves",42,cc,65,0c));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("origin",e6,19,01,4b));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("velocity",1d,02,fe,1e));
	outFields->push(HX_("maxVelocity",e1,0c,c4,94));
	outFields->push(HX_("acceleration",40,00,61,9a));
	outFields->push(HX_("drag",f4,2b,70,42));
	outFields->push(HX_("scrollFactor",bc,ec,cf,3b));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_quickSetupParams",15,d6,aa,9b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIPopup_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxUIPopup_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsBool,(int)offsetof(FlxUIPopup_obj,broadcastToFlxUI),HX_("broadcastToFlxUI",ca,32,56,1a)},
	{::hx::fsBool,(int)offsetof(FlxUIPopup_obj,immovable),HX_("immovable",0a,27,70,27)},
	{::hx::fsFloat,(int)offsetof(FlxUIPopup_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsInt,(int)offsetof(FlxUIPopup_obj,facing),HX_("facing",1a,3f,05,e4)},
	{::hx::fsBool,(int)offsetof(FlxUIPopup_obj,moves),HX_("moves",42,cc,65,0c)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUIPopup_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUIPopup_obj,origin),HX_("origin",e6,19,01,4b)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUIPopup_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUIPopup_obj,velocity),HX_("velocity",1d,02,fe,1e)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUIPopup_obj,maxVelocity),HX_("maxVelocity",e1,0c,c4,94)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUIPopup_obj,acceleration),HX_("acceleration",40,00,61,9a)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUIPopup_obj,drag),HX_("drag",f4,2b,70,42)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUIPopup_obj,scrollFactor),HX_("scrollFactor",bc,ec,cf,3b)},
	{::hx::fsFloat,(int)offsetof(FlxUIPopup_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxUIPopup_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxUIPopup_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsFloat,(int)offsetof(FlxUIPopup_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsFloat,(int)offsetof(FlxUIPopup_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsFloat,(int)offsetof(FlxUIPopup_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUIPopup_obj,_quickSetupParams),HX_("_quickSetupParams",15,d6,aa,9b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUIPopup_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxUIPopup_obj::CLICK_EVENT,HX_("CLICK_EVENT",63,89,c0,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUIPopup_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("broadcastToFlxUI",ca,32,56,1a),
	HX_("immovable",0a,27,70,27),
	HX_("set_immovable",ed,dc,d9,2d),
	HX_("angle",d3,43,e2,22),
	HX_("facing",1a,3f,05,e4),
	HX_("moves",42,cc,65,0c),
	HX_("offset",93,97,3f,60),
	HX_("origin",e6,19,01,4b),
	HX_("scale",8a,ce,ce,78),
	HX_("velocity",1d,02,fe,1e),
	HX_("maxVelocity",e1,0c,c4,94),
	HX_("acceleration",40,00,61,9a),
	HX_("drag",f4,2b,70,42),
	HX_("scrollFactor",bc,ec,cf,3b),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	HX_("set_angle",36,8c,dc,49),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_facing",57,4d,0a,d8),
	HX_("set_moves",a5,14,60,33),
	HX_("set_offset",d0,a5,44,54),
	HX_("set_origin",23,28,06,3f),
	HX_("set_scale",ed,16,c9,9f),
	HX_("set_scrollFactor",b9,c6,b0,96),
	HX_("reset",cf,49,c8,e6),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("params",46,fb,7a,ed),
	HX_("alpha",5e,a7,96,21),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("create",fc,66,0f,7c),
	HX_("quickSetup",50,5c,3e,a9),
	HX_("getEvent",a4,d7,9b,d5),
	HX_("castParent",49,b1,ba,f5),
	HX_("_quickSetupParams",15,d6,aa,9b),
	HX_("myGetTextFallback",99,a5,23,ca),
	HX_("_doQuickSetup",9a,46,95,11),
	HX_("_doQuickSetupButtons",c7,9a,5e,46),
	::String(null()) };

static void FlxUIPopup_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIPopup_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUIPopup_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIPopup_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

::hx::Class FlxUIPopup_obj::__mClass;

static ::String FlxUIPopup_obj_sStaticFields[] = {
	HX_("CLICK_EVENT",63,89,c0,0d),
	::String(null())
};

void FlxUIPopup_obj::__register()
{
	FlxUIPopup_obj _hx_dummy;
	FlxUIPopup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUIPopup",97,1d,4a,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUIPopup_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUIPopup_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIPopup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIPopup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUIPopup_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIPopup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIPopup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUIPopup_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e24d3b203383ea49_129_boot)
HXDLIN( 129)		CLICK_EVENT = HX_("click_popup",b5,33,e9,bc);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
