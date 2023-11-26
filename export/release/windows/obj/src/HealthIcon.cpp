#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_8_new,"HealthIcon","new",0x9b7badc7,"HealthIcon.new","HealthIcon.hx",8,0xf7836789)
static const Float _hx_array_data_f8f9be55_1[] = {
	(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_25_update,"HealthIcon","update",0x767ac302,"HealthIcon.update","HealthIcon.hx",25,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_33_swapOldIcon,"HealthIcon","swapOldIcon",0xe3496dd4,"HealthIcon.swapOldIcon","HealthIcon.hx",33,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_39_changeIcon,"HealthIcon","changeIcon",0xd785ca82,"HealthIcon.changeIcon","HealthIcon.hx",39,0xf7836789)
static const int _hx_array_data_f8f9be55_5[] = {
	(int)0,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_63_updateHitbox,"HealthIcon","updateHitbox",0x4656523a,"HealthIcon.updateHitbox","HealthIcon.hx",63,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_70_getCharacter,"HealthIcon","getCharacter",0x409335ec,"HealthIcon.getCharacter","HealthIcon.hx",70,0xf7836789)

void HealthIcon_obj::__construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            		bool isPlayer = __o_isPlayer.Default(false);
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_8_new)
HXLINE(  37)		this->iconOffsets = ::Array_obj< Float >::fromData( _hx_array_data_f8f9be55_1,2);
HXLINE(  13)		this->_hx_char = HX_("",00,00,00,00);
HXLINE(  12)		this->isPlayer = false;
HXLINE(  11)		this->isOldIcon = false;
HXLINE(  17)		super::__construct(null(),null(),null());
HXLINE(  18)		this->isOldIcon = (_hx_char == HX_("bf-old",5e,ba,eb,07));
HXLINE(  19)		this->isPlayer = isPlayer;
HXLINE(  20)		this->changeIcon(_hx_char);
HXLINE(  21)		this->scrollFactor->set(null(),null());
            	}

Dynamic HealthIcon_obj::__CreateEmpty() { return new HealthIcon_obj; }

void *HealthIcon_obj::_hx_vtable = 0;

Dynamic HealthIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthIcon_obj > _hx_result = new HealthIcon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HealthIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10bce115) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10bce115;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HealthIcon_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_25_update)
HXLINE(  26)		this->super::update(elapsed);
HXLINE(  28)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  29)			Float _hx_tmp = this->sprTracker->x;
HXDLIN(  29)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 10);
HXDLIN(  29)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
            		}
            	}


void HealthIcon_obj::swapOldIcon(){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_33_swapOldIcon)
HXDLIN(  33)		if ((this->isOldIcon = !(this->isOldIcon))) {
HXDLIN(  33)			this->changeIcon(HX_("bf-old",5e,ba,eb,07));
            		}
            		else {
HXLINE(  34)			this->changeIcon(HX_("bf",c4,55,00,00));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,swapOldIcon,(void))

void HealthIcon_obj::changeIcon(::String _hx_char){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_39_changeIcon)
HXDLIN(  39)		if ((this->_hx_char != _hx_char)) {
HXLINE(  40)			::String name = (HX_("icons/",15,dc,d6,45) + _hx_char);
HXLINE(  41)			::String key = ((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e));
HXDLIN(  41)			bool _hx_tmp;
HXDLIN(  41)			bool _hx_tmp1;
HXDLIN(  41)			::String key1 = ((::Paths_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN(  41)			if (::hx::IsNull( key1 )) {
HXLINE(  41)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN(  41)			if (!(::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1)))) {
HXLINE(  41)				::String key1 = key;
HXDLIN(  41)				if (::hx::IsNull( key1 )) {
HXLINE(  41)					key1 = HX_("",00,00,00,00);
            				}
HXDLIN(  41)				_hx_tmp1 = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1));
            			}
            			else {
HXLINE(  41)				_hx_tmp1 = true;
            			}
HXDLIN(  41)			if (_hx_tmp1) {
HXLINE(  41)				_hx_tmp = true;
            			}
            			else {
HXLINE(  41)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(key,HX_("IMAGE",3b,57,57,3b),null()),null())) {
HXLINE(  41)					_hx_tmp = true;
            				}
            				else {
HXLINE(  41)					_hx_tmp = false;
            				}
            			}
HXDLIN(  41)			if (!(_hx_tmp)) {
HXLINE(  41)				name = (HX_("icons/icon-",5f,da,21,72) + _hx_char);
            			}
HXLINE(  42)			::String key2 = ((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e));
HXDLIN(  42)			bool _hx_tmp2;
HXDLIN(  42)			bool _hx_tmp3;
HXDLIN(  42)			::String key3 = ((::Paths_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key2);
HXDLIN(  42)			if (::hx::IsNull( key3 )) {
HXLINE(  42)				key3 = HX_("",00,00,00,00);
            			}
HXDLIN(  42)			if (!(::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key3)))) {
HXLINE(  42)				::String key = key2;
HXDLIN(  42)				if (::hx::IsNull( key )) {
HXLINE(  42)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  42)				_hx_tmp3 = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key));
            			}
            			else {
HXLINE(  42)				_hx_tmp3 = true;
            			}
HXDLIN(  42)			if (_hx_tmp3) {
HXLINE(  42)				_hx_tmp2 = true;
            			}
            			else {
HXLINE(  42)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(key2,HX_("IMAGE",3b,57,57,3b),null()),null())) {
HXLINE(  42)					_hx_tmp2 = true;
            				}
            				else {
HXLINE(  42)					_hx_tmp2 = false;
            				}
            			}
HXDLIN(  42)			if (!(_hx_tmp2)) {
HXLINE(  42)				name = HX_("icons/icon-face",7c,aa,dd,e7);
            			}
HXLINE(  43)			::String library = null();
HXDLIN(  43)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(name,library);
HXDLIN(  43)			 ::Dynamic file = returnAsset;
HXLINE(  45)			this->loadGraphic(file,null(),null(),null(),null(),null());
HXLINE(  46)			int _hx_tmp4 = ::Math_obj::floor((this->get_width() / ( (Float)(2) )));
HXDLIN(  46)			this->loadGraphic(file,true,_hx_tmp4,::Math_obj::floor(this->get_height()),null(),null());
HXLINE(  47)			this->iconOffsets[0] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE(  48)			this->iconOffsets[1] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE(  49)			this->updateHitbox();
HXLINE(  51)			this->animation->add(_hx_char,::Array_obj< int >::fromData( _hx_array_data_f8f9be55_5,2),0,false,this->isPlayer,null());
HXLINE(  52)			this->animation->play(_hx_char,null(),null(),null());
HXLINE(  53)			this->_hx_char = _hx_char;
HXLINE(  55)			this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  56)			if (::StringTools_obj::endsWith(_hx_char,HX_("-pixel",39,03,b3,c0))) {
HXLINE(  57)				this->set_antialiasing(false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthIcon_obj,changeIcon,(void))

void HealthIcon_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_63_updateHitbox)
HXLINE(  64)		this->super::updateHitbox();
HXLINE(  65)		this->offset->set_x(this->iconOffsets->__get(0));
HXLINE(  66)		this->offset->set_y(this->iconOffsets->__get(1));
            	}


::String HealthIcon_obj::getCharacter(){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_70_getCharacter)
HXDLIN(  70)		return this->_hx_char;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,getCharacter,return )


::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__new(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	::hx::ObjectPtr< HealthIcon_obj > __this = new HealthIcon_obj();
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	HealthIcon_obj *__this = (HealthIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthIcon_obj), true, "HealthIcon"));
	*(void **)__this = HealthIcon_obj::_hx_vtable;
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

HealthIcon_obj::HealthIcon_obj()
{
}

void HealthIcon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HealthIcon);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(iconOffsets,"iconOffsets");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HealthIcon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(iconOffsets,"iconOffsets");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HealthIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { return ::hx::Val( isOldIcon ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return ::hx::Val( changeIcon_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"swapOldIcon") ) { return ::hx::Val( swapOldIcon_dyn() ); }
		if (HX_FIELD_EQ(inName,"iconOffsets") ) { return ::hx::Val( iconOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCharacter") ) { return ::hx::Val( getCharacter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HealthIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { isOldIcon=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iconOffsets") ) { iconOffsets=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HealthIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("isOldIcon",f6,08,f6,fe));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("iconOffsets",07,1b,16,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HealthIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthIcon_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isOldIcon),HX_("isOldIcon",f6,08,f6,fe)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(HealthIcon_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(HealthIcon_obj,iconOffsets),HX_("iconOffsets",07,1b,16,e7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HealthIcon_obj_sStaticStorageInfo = 0;
#endif

static ::String HealthIcon_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("isOldIcon",f6,08,f6,fe),
	HX_("isPlayer",eb,86,22,90),
	HX_("char",d6,5e,bf,41),
	HX_("update",09,86,05,87),
	HX_("swapOldIcon",6d,51,5b,02),
	HX_("iconOffsets",07,1b,16,e7),
	HX_("changeIcon",09,1d,fc,1f),
	HX_("updateHitbox",81,94,eb,56),
	HX_("getCharacter",33,78,28,51),
	::String(null()) };

::hx::Class HealthIcon_obj::__mClass;

void HealthIcon_obj::__register()
{
	HealthIcon_obj _hx_dummy;
	HealthIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HealthIcon",55,be,f9,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthIcon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

