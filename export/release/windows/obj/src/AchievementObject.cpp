#include <hxcpp.h>

#ifndef INCLUDED_AchievementObject
#include <AchievementObject.h>
#endif
#ifndef INCLUDED_Achievements
#include <Achievements.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_144_new,"AchievementObject","new",0xc9fc6060,"AchievementObject.new","Achievements.hx",144,0xf249f7fa)
HX_DEFINE_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_142_new,"AchievementObject","new",0xc9fc6060,"AchievementObject.new","Achievements.hx",142,0xf249f7fa)
HX_DEFINE_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_101_new,"AchievementObject","new",0xc9fc6060,"AchievementObject.new","Achievements.hx",101,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_153_destroy,"AchievementObject","destroy",0x95b6bcfa,"AchievementObject.destroy","Achievements.hx",153,0xf249f7fa)

void AchievementObject_obj::__construct(::String name, ::flixel::FlxCamera camera){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::AchievementObject,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::AchievementObject,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_144_new)
HXLINE( 145)				_gthis->alphaTween = null();
HXLINE( 146)				_gthis->remove(_gthis,null()).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 147)				if (::hx::IsNotNull( _gthis->onFinish )) {
HXLINE( 147)					_gthis->onFinish();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_142_new)
HXLINE( 142)			_gthis->alphaTween = ::flixel::tweens::FlxTween_obj::tween(_gthis, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)2.5))
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_101_new)
HXLINE( 102)		this->onFinish = null();
HXLINE( 105)		 ::AchievementObject _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 106)		super::__construct(this->x,this->y,null());
HXLINE( 107)		::ClientPrefs_obj::saveSettings();
HXLINE( 109)		int id = ::Achievements_obj::getAchievementIndex(name);
HXLINE( 110)		 ::flixel::FlxSprite achievementBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,60,50,null())->makeGraphic(420,120,-16777216,null(),null());
HXLINE( 111)		achievementBG->scrollFactor->set(null(),null());
HXLINE( 113)		 ::flixel::FlxSprite achievementIcon =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(achievementBG->x + 10),(achievementBG->y + 10),null());
HXDLIN( 113)		::String library = null();
HXDLIN( 113)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic((HX_("achievements/",8b,5e,c1,17) + name),library);
HXDLIN( 113)		 ::flixel::FlxSprite achievementIcon1 = achievementIcon->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE( 114)		achievementIcon1->scrollFactor->set(null(),null());
HXLINE( 115)		achievementIcon1->setGraphicSize(::Std_obj::_hx_int((achievementIcon1->get_width() * ((Float)0.66666666666666663))),null());
HXLINE( 116)		achievementIcon1->updateHitbox();
HXLINE( 117)		achievementIcon1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 119)		Float achievementIcon2 = achievementIcon1->x;
HXDLIN( 119)		Float achievementName = ((achievementIcon2 + achievementIcon1->get_width()) + 20);
HXDLIN( 119)		 ::flixel::text::FlxText achievementName1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,achievementName,(achievementIcon1->y + 16),280,( (::String)(::Achievements_obj::achievementsStuff->__get(id)->__GetItem(0)) ),16,null());
HXLINE( 120)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 120)		::String _hx_tmp;
HXDLIN( 120)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 120)			_hx_tmp = file;
            		}
            		else {
HXLINE( 120)			_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 120)		achievementName1->setFormat(_hx_tmp,16,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 121)		achievementName1->scrollFactor->set(null(),null());
HXLINE( 123)		 ::flixel::text::FlxText achievementText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,achievementName1->x,(achievementName1->y + 32),280,( (::String)(::Achievements_obj::achievementsStuff->__get(id)->__GetItem(1)) ),16,null());
HXLINE( 124)		::String file1 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 124)		::String _hx_tmp1;
HXDLIN( 124)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 124)			_hx_tmp1 = file1;
            		}
            		else {
HXLINE( 124)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 124)		achievementText->setFormat(_hx_tmp1,16,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 125)		achievementText->scrollFactor->set(null(),null());
HXLINE( 127)		this->add(achievementBG);
HXLINE( 128)		this->add(achievementName1);
HXLINE( 129)		this->add(achievementText);
HXLINE( 130)		this->add(achievementIcon1);
HXLINE( 132)		::Array< ::Dynamic> cam = ::flixel::FlxCamera_obj::_defaultCameras;
HXLINE( 133)		if (::hx::IsNotNull( camera )) {
HXLINE( 134)			cam = ::Array_obj< ::Dynamic>::__new(1)->init(0,camera);
            		}
HXLINE( 136)		this->set_alpha(( (Float)(0) ));
HXLINE( 137)		achievementBG->set_cameras(cam);
HXLINE( 138)		achievementName1->set_cameras(cam);
HXLINE( 139)		achievementText->set_cameras(cam);
HXLINE( 140)		achievementIcon1->set_cameras(cam);
HXLINE( 141)		this->alphaTween = ::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis)))));
            	}

Dynamic AchievementObject_obj::__CreateEmpty() { return new AchievementObject_obj; }

void *AchievementObject_obj::_hx_vtable = 0;

Dynamic AchievementObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AchievementObject_obj > _hx_result = new AchievementObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AchievementObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6f8fa5ae) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x6f8fa5ae;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AchievementObject_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_153_destroy)
HXLINE( 154)		if (::hx::IsNotNull( this->alphaTween )) {
HXLINE( 155)			this->alphaTween->cancel();
            		}
HXLINE( 157)		this->super::destroy();
            	}



::hx::ObjectPtr< AchievementObject_obj > AchievementObject_obj::__new(::String name, ::flixel::FlxCamera camera) {
	::hx::ObjectPtr< AchievementObject_obj > __this = new AchievementObject_obj();
	__this->__construct(name,camera);
	return __this;
}

::hx::ObjectPtr< AchievementObject_obj > AchievementObject_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::flixel::FlxCamera camera) {
	AchievementObject_obj *__this = (AchievementObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AchievementObject_obj), true, "AchievementObject"));
	*(void **)__this = AchievementObject_obj::_hx_vtable;
	__this->__construct(name,camera);
	return __this;
}

AchievementObject_obj::AchievementObject_obj()
{
}

void AchievementObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AchievementObject);
	HX_MARK_MEMBER_NAME(onFinish,"onFinish");
	HX_MARK_MEMBER_NAME(alphaTween,"alphaTween");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AchievementObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onFinish,"onFinish");
	HX_VISIT_MEMBER_NAME(alphaTween,"alphaTween");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AchievementObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { return ::hx::Val( onFinish ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaTween") ) { return ::hx::Val( alphaTween ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AchievementObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { onFinish=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaTween") ) { alphaTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AchievementObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alphaTween",2d,fe,15,3a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AchievementObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AchievementObject_obj,onFinish),HX_("onFinish",d2,36,2c,66)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(AchievementObject_obj,alphaTween),HX_("alphaTween",2d,fe,15,3a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AchievementObject_obj_sStaticStorageInfo = 0;
#endif

static ::String AchievementObject_obj_sMemberFields[] = {
	HX_("onFinish",d2,36,2c,66),
	HX_("alphaTween",2d,fe,15,3a),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class AchievementObject_obj::__mClass;

void AchievementObject_obj::__register()
{
	AchievementObject_obj _hx_dummy;
	AchievementObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AchievementObject",6e,f0,f4,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AchievementObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AchievementObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AchievementObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AchievementObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

