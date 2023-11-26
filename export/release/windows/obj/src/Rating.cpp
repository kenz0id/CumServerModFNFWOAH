// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Rating
#include <Rating.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_69524c8888607e26_158_new,"Rating","new",0xe6bfabaf,"Rating.new","Conductor.hx",158,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_69524c8888607e26_182_increase,"Rating","increase",0x83e50213,"Rating.increase","Conductor.hx",182,0xeb0fa157)

void Rating_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_69524c8888607e26_158_new)
HXLINE( 166)		this->noteSplash = true;
HXLINE( 165)		this->score = 350;
HXLINE( 164)		this->ratingMod = ((Float)1);
HXLINE( 163)		this->hitWindow = 0;
HXLINE( 162)		this->counter = HX_("",00,00,00,00);
HXLINE( 161)		this->image = HX_("",00,00,00,00);
HXLINE( 160)		this->name = HX_("",00,00,00,00);
HXLINE( 170)		this->name = name;
HXLINE( 171)		this->image = name;
HXLINE( 172)		this->counter = (name + HX_("s",73,00,00,00));
HXLINE( 173)		this->hitWindow = ::Reflect_obj::field(::hx::ClassOf< ::ClientPrefs >(),(name + HX_("Window",10,08,21,87)));
HXLINE( 174)		if (::hx::IsNull( this->hitWindow )) {
HXLINE( 176)			this->hitWindow = 0;
            		}
            	}

Dynamic Rating_obj::__CreateEmpty() { return new Rating_obj; }

void *Rating_obj::_hx_vtable = 0;

Dynamic Rating_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Rating_obj > _hx_result = new Rating_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Rating_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x51696afd;
}

void Rating_obj::increase(::hx::Null< int >  __o_blah){
            		int blah = __o_blah.Default(1);
            	HX_STACKFRAME(&_hx_pos_69524c8888607e26_182_increase)
HXDLIN( 182)		 ::PlayState _hx_tmp = ::PlayState_obj::instance;
HXDLIN( 182)		::String _hx_tmp1 = this->counter;
HXDLIN( 182)		::Reflect_obj::setField(_hx_tmp,_hx_tmp1,(::Reflect_obj::field(::PlayState_obj::instance,this->counter) + blah));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rating_obj,increase,(void))


::hx::ObjectPtr< Rating_obj > Rating_obj::__new(::String name) {
	::hx::ObjectPtr< Rating_obj > __this = new Rating_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< Rating_obj > Rating_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	Rating_obj *__this = (Rating_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Rating_obj), true, "Rating"));
	*(void **)__this = Rating_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

Rating_obj::Rating_obj()
{
}

void Rating_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rating);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(counter,"counter");
	HX_MARK_MEMBER_NAME(hitWindow,"hitWindow");
	HX_MARK_MEMBER_NAME(ratingMod,"ratingMod");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(noteSplash,"noteSplash");
	HX_MARK_END_CLASS();
}

void Rating_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(counter,"counter");
	HX_VISIT_MEMBER_NAME(hitWindow,"hitWindow");
	HX_VISIT_MEMBER_NAME(ratingMod,"ratingMod");
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(noteSplash,"noteSplash");
}

::hx::Val Rating_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return ::hx::Val( image ); }
		if (HX_FIELD_EQ(inName,"score") ) { return ::hx::Val( score ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { return ::hx::Val( counter ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"increase") ) { return ::hx::Val( increase_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hitWindow") ) { return ::hx::Val( hitWindow ); }
		if (HX_FIELD_EQ(inName,"ratingMod") ) { return ::hx::Val( ratingMod ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noteSplash") ) { return ::hx::Val( noteSplash ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Rating_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { counter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hitWindow") ) { hitWindow=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratingMod") ) { ratingMod=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noteSplash") ) { noteSplash=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rating_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("image",5b,1f,69,bd));
	outFields->push(HX_("counter",fc,ae,59,1d));
	outFields->push(HX_("hitWindow",a3,4e,9e,86));
	outFields->push(HX_("ratingMod",a5,4a,34,09));
	outFields->push(HX_("score",52,73,d9,78));
	outFields->push(HX_("noteSplash",f9,8e,ac,5d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Rating_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Rating_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(Rating_obj,image),HX_("image",5b,1f,69,bd)},
	{::hx::fsString,(int)offsetof(Rating_obj,counter),HX_("counter",fc,ae,59,1d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Rating_obj,hitWindow),HX_("hitWindow",a3,4e,9e,86)},
	{::hx::fsFloat,(int)offsetof(Rating_obj,ratingMod),HX_("ratingMod",a5,4a,34,09)},
	{::hx::fsInt,(int)offsetof(Rating_obj,score),HX_("score",52,73,d9,78)},
	{::hx::fsBool,(int)offsetof(Rating_obj,noteSplash),HX_("noteSplash",f9,8e,ac,5d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Rating_obj_sStaticStorageInfo = 0;
#endif

static ::String Rating_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("image",5b,1f,69,bd),
	HX_("counter",fc,ae,59,1d),
	HX_("hitWindow",a3,4e,9e,86),
	HX_("ratingMod",a5,4a,34,09),
	HX_("score",52,73,d9,78),
	HX_("noteSplash",f9,8e,ac,5d),
	HX_("increase",c2,3b,f9,cf),
	::String(null()) };

::hx::Class Rating_obj::__mClass;

void Rating_obj::__register()
{
	Rating_obj _hx_dummy;
	Rating_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Rating",3d,a8,1e,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Rating_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Rating_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rating_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rating_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

