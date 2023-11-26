#include <hxcpp.h>

#ifndef INCLUDED_Achievements
#include <Achievements.h>
#endif
#ifndef INCLUDED_AttachedAchievement
#include <AttachedAchievement.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ec6539926560d3c0_71_new,"AttachedAchievement","new",0x78b415bd,"AttachedAchievement.new","Achievements.hx",71,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec6539926560d3c0_78_changeAchievement,"AttachedAchievement","changeAchievement",0x3f6c6afc,"AttachedAchievement.changeAchievement","Achievements.hx",78,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec6539926560d3c0_83_reloadAchievementImage,"AttachedAchievement","reloadAchievementImage",0x2581b6a8,"AttachedAchievement.reloadAchievementImage","Achievements.hx",83,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec6539926560d3c0_93_update,"AttachedAchievement","update",0x63d738cc,"AttachedAchievement.update","Achievements.hx",93,0xf249f7fa)

void AttachedAchievement_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_ec6539926560d3c0_71_new)
HXLINE(  72)		super::__construct(x,y,null());
HXLINE(  74)		this->changeAchievement(name);
HXLINE(  75)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            	}

Dynamic AttachedAchievement_obj::__CreateEmpty() { return new AttachedAchievement_obj; }

void *AttachedAchievement_obj::_hx_vtable = 0;

Dynamic AttachedAchievement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AttachedAchievement_obj > _hx_result = new AttachedAchievement_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AttachedAchievement_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x0b57f88b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b57f88b;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AttachedAchievement_obj::changeAchievement(::String tag){
            	HX_STACKFRAME(&_hx_pos_ec6539926560d3c0_78_changeAchievement)
HXLINE(  79)		this->tag = tag;
HXLINE(  80)		this->reloadAchievementImage();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AttachedAchievement_obj,changeAchievement,(void))

void AttachedAchievement_obj::reloadAchievementImage(){
            	HX_STACKFRAME(&_hx_pos_ec6539926560d3c0_83_reloadAchievementImage)
HXLINE(  84)		if (::Achievements_obj::isAchievementUnlocked(this->tag)) {
HXLINE(  85)			::String library = null();
HXDLIN(  85)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic((HX_("achievements/",8b,5e,c1,17) + this->tag),library);
HXDLIN(  85)			this->loadGraphic(returnAsset,null(),null(),null(),null(),null());
            		}
            		else {
HXLINE(  87)			::String library = null();
HXDLIN(  87)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("achievements/lockedachievement",ba,b8,0b,f8),library);
HXDLIN(  87)			this->loadGraphic(returnAsset,null(),null(),null(),null(),null());
            		}
HXLINE(  89)		this->scale->set(((Float)0.7),((Float)0.7));
HXLINE(  90)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AttachedAchievement_obj,reloadAchievementImage,(void))

void AttachedAchievement_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ec6539926560d3c0_93_update)
HXLINE(  94)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  95)			this->setPosition((this->sprTracker->x - ( (Float)(130) )),(this->sprTracker->y + 25));
            		}
HXLINE(  97)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< AttachedAchievement_obj > AttachedAchievement_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name) {
	::hx::ObjectPtr< AttachedAchievement_obj > __this = new AttachedAchievement_obj();
	__this->__construct(__o_x,__o_y,name);
	return __this;
}

::hx::ObjectPtr< AttachedAchievement_obj > AttachedAchievement_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name) {
	AttachedAchievement_obj *__this = (AttachedAchievement_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AttachedAchievement_obj), true, "AttachedAchievement"));
	*(void **)__this = AttachedAchievement_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,name);
	return __this;
}

AttachedAchievement_obj::AttachedAchievement_obj()
{
}

void AttachedAchievement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttachedAchievement);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(tag,"tag");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AttachedAchievement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(tag,"tag");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AttachedAchievement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tag") ) { return ::hx::Val( tag ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"changeAchievement") ) { return ::hx::Val( changeAchievement_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"reloadAchievementImage") ) { return ::hx::Val( reloadAchievementImage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AttachedAchievement_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tag") ) { tag=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttachedAchievement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("tag",5a,5a,58,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AttachedAchievement_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(AttachedAchievement_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsString,(int)offsetof(AttachedAchievement_obj,tag),HX_("tag",5a,5a,58,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AttachedAchievement_obj_sStaticStorageInfo = 0;
#endif

static ::String AttachedAchievement_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("tag",5a,5a,58,00),
	HX_("changeAchievement",df,5c,94,ed),
	HX_("reloadAchievementImage",e5,0d,f3,8e),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class AttachedAchievement_obj::__mClass;

void AttachedAchievement_obj::__register()
{
	AttachedAchievement_obj _hx_dummy;
	AttachedAchievement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AttachedAchievement",4b,73,b5,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AttachedAchievement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AttachedAchievement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AttachedAchievement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AttachedAchievement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

