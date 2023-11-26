#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PhillyGlowGradient
#include <PhillyGlowGradient.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9d5d3b163e280bc_49_new,"PhillyGlowGradient","new",0xe0392477,"PhillyGlowGradient.new","PhillyGlow.hx",49,0x72857fe9)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d5d3b163e280bc_67_update,"PhillyGlowGradient","update",0x79609a52,"PhillyGlowGradient.update","PhillyGlow.hx",67,0x72857fe9)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d5d3b163e280bc_86_bop,"PhillyGlowGradient","bop",0xe030121a,"PhillyGlowGradient.bop","PhillyGlow.hx",86,0x72857fe9)

void PhillyGlowGradient_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d9d5d3b163e280bc_49_new)
HXLINE(  53)		this->intendedAlpha = ((Float)1);
HXLINE(  52)		this->originalHeight = 400;
HXLINE(  56)		super::__construct(x,y,null());
HXLINE(  57)		this->originalY = y;
HXLINE(  59)		::String library = null();
HXDLIN(  59)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("philly/gradient",f7,e4,ce,c2),library);
HXDLIN(  59)		this->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  60)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  61)		this->scrollFactor->set(0,((Float)0.75));
HXLINE(  62)		this->setGraphicSize(2000,this->originalHeight);
HXLINE(  63)		this->updateHitbox();
            	}

Dynamic PhillyGlowGradient_obj::__CreateEmpty() { return new PhillyGlowGradient_obj; }

void *PhillyGlowGradient_obj::_hx_vtable = 0;

Dynamic PhillyGlowGradient_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PhillyGlowGradient_obj > _hx_result = new PhillyGlowGradient_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PhillyGlowGradient_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x63620a29) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x63620a29;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void PhillyGlowGradient_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_d9d5d3b163e280bc_67_update)
HXLINE(  68)		int newHeight = ::Math_obj::round((this->get_height() - (( (Float)(1000) ) * elapsed)));
HXLINE(  69)		if ((newHeight > 0)) {
HXLINE(  71)			this->set_alpha(this->intendedAlpha);
HXLINE(  72)			this->setGraphicSize(2000,newHeight);
HXLINE(  73)			this->updateHitbox();
HXLINE(  74)			Float _hx_tmp = this->originalY;
HXDLIN(  74)			int _hx_tmp1 = this->originalHeight;
HXDLIN(  74)			this->set_y((_hx_tmp + (( (Float)(_hx_tmp1) ) - this->get_height())));
            		}
            		else {
HXLINE(  78)			this->set_alpha(( (Float)(0) ));
HXLINE(  79)			this->set_y(( (Float)(-5000) ));
            		}
HXLINE(  82)		this->super::update(elapsed);
            	}


void PhillyGlowGradient_obj::bop(){
            	HX_STACKFRAME(&_hx_pos_d9d5d3b163e280bc_86_bop)
HXLINE(  87)		this->setGraphicSize(2000,this->originalHeight);
HXLINE(  88)		this->updateHitbox();
HXLINE(  89)		this->set_y(this->originalY);
HXLINE(  90)		this->set_alpha(this->intendedAlpha);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PhillyGlowGradient_obj,bop,(void))


::hx::ObjectPtr< PhillyGlowGradient_obj > PhillyGlowGradient_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PhillyGlowGradient_obj > __this = new PhillyGlowGradient_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PhillyGlowGradient_obj > PhillyGlowGradient_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PhillyGlowGradient_obj *__this = (PhillyGlowGradient_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PhillyGlowGradient_obj), true, "PhillyGlowGradient"));
	*(void **)__this = PhillyGlowGradient_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PhillyGlowGradient_obj::PhillyGlowGradient_obj()
{
}

::hx::Val PhillyGlowGradient_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bop") ) { return ::hx::Val( bop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"originalY") ) { return ::hx::Val( originalY ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedAlpha") ) { return ::hx::Val( intendedAlpha ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { return ::hx::Val( originalHeight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PhillyGlowGradient_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"originalY") ) { originalY=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedAlpha") ) { intendedAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { originalHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhillyGlowGradient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("originalY",e8,92,45,ea));
	outFields->push(HX_("originalHeight",18,43,32,3a));
	outFields->push(HX_("intendedAlpha",b3,31,3a,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PhillyGlowGradient_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(PhillyGlowGradient_obj,originalY),HX_("originalY",e8,92,45,ea)},
	{::hx::fsInt,(int)offsetof(PhillyGlowGradient_obj,originalHeight),HX_("originalHeight",18,43,32,3a)},
	{::hx::fsFloat,(int)offsetof(PhillyGlowGradient_obj,intendedAlpha),HX_("intendedAlpha",b3,31,3a,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PhillyGlowGradient_obj_sStaticStorageInfo = 0;
#endif

static ::String PhillyGlowGradient_obj_sMemberFields[] = {
	HX_("originalY",e8,92,45,ea),
	HX_("originalHeight",18,43,32,3a),
	HX_("intendedAlpha",b3,31,3a,32),
	HX_("update",09,86,05,87),
	HX_("bop",03,be,4a,00),
	::String(null()) };

::hx::Class PhillyGlowGradient_obj::__mClass;

void PhillyGlowGradient_obj::__register()
{
	PhillyGlowGradient_obj _hx_dummy;
	PhillyGlowGradient_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PhillyGlowGradient",05,1d,aa,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PhillyGlowGradient_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PhillyGlowGradient_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PhillyGlowGradient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PhillyGlowGradient_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

