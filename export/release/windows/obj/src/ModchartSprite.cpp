#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ModchartSprite
#include <ModchartSprite.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b7f7cc83b4d0792_3193_new,"ModchartSprite","new",0xbc67fd93,"ModchartSprite.new","FunkinLua.hx",3193,0x00117937)

void ModchartSprite_obj::__construct( ::Dynamic __o_x, ::Dynamic __o_y){
            		 ::Dynamic x = __o_x;
            		if (::hx::IsNull(__o_x)) x = 0;
            		 ::Dynamic y = __o_y;
            		if (::hx::IsNull(__o_y)) y = 0;
            	HX_GC_STACKFRAME(&_hx_pos_2b7f7cc83b4d0792_3193_new)
HXLINE(3196)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(3195)		this->wasAdded = false;
HXLINE(3201)		super::__construct(x,y,null());
HXLINE(3202)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            	}

Dynamic ModchartSprite_obj::__CreateEmpty() { return new ModchartSprite_obj; }

void *ModchartSprite_obj::_hx_vtable = 0;

Dynamic ModchartSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ModchartSprite_obj > _hx_result = new ModchartSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ModchartSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x245adc71) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x245adc71;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< ModchartSprite_obj > ModchartSprite_obj::__new( ::Dynamic __o_x, ::Dynamic __o_y) {
	::hx::ObjectPtr< ModchartSprite_obj > __this = new ModchartSprite_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< ModchartSprite_obj > ModchartSprite_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_x, ::Dynamic __o_y) {
	ModchartSprite_obj *__this = (ModchartSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ModchartSprite_obj), true, "ModchartSprite"));
	*(void **)__this = ModchartSprite_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

ModchartSprite_obj::ModchartSprite_obj()
{
}

void ModchartSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModchartSprite);
	HX_MARK_MEMBER_NAME(wasAdded,"wasAdded");
	HX_MARK_MEMBER_NAME(animOffsets,"animOffsets");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ModchartSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wasAdded,"wasAdded");
	HX_VISIT_MEMBER_NAME(animOffsets,"animOffsets");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ModchartSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"wasAdded") ) { return ::hx::Val( wasAdded ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { return ::hx::Val( animOffsets ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ModchartSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"wasAdded") ) { wasAdded=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { animOffsets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModchartSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("wasAdded",d7,ce,90,02));
	outFields->push(HX_("animOffsets",6f,ff,7a,f8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ModchartSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ModchartSprite_obj,wasAdded),HX_("wasAdded",d7,ce,90,02)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ModchartSprite_obj,animOffsets),HX_("animOffsets",6f,ff,7a,f8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ModchartSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String ModchartSprite_obj_sMemberFields[] = {
	HX_("wasAdded",d7,ce,90,02),
	HX_("animOffsets",6f,ff,7a,f8),
	::String(null()) };

::hx::Class ModchartSprite_obj::__mClass;

void ModchartSprite_obj::__register()
{
	ModchartSprite_obj _hx_dummy;
	ModchartSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ModchartSprite",21,38,77,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ModchartSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ModchartSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModchartSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModchartSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

