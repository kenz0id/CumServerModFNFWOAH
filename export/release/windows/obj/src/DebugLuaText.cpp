#include <hxcpp.h>

#ifndef INCLUDED_DebugLuaText
#include <DebugLuaText.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f866b21df2f4ee6_3219_new,"DebugLuaText","new",0xad824284,"DebugLuaText.new","FunkinLua.hx",3219,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_6f866b21df2f4ee6_3231_update,"DebugLuaText","update",0x3cb60265,"DebugLuaText.update","FunkinLua.hx",3231,0x00117937)

void DebugLuaText_obj::__construct(::String text, ::flixel::group::FlxTypedGroup parentGroup,int color){
            	HX_STACKFRAME(&_hx_pos_6f866b21df2f4ee6_3219_new)
HXLINE(3221)		this->disableTime = ((Float)6);
HXLINE(3224)		this->parentGroup = parentGroup;
HXLINE(3225)		super::__construct(10,10,0,text,16,null());
HXLINE(3226)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(3226)		::String _hx_tmp;
HXDLIN(3226)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(3226)			_hx_tmp = file;
            		}
            		else {
HXLINE(3226)			_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(3226)		this->setFormat(_hx_tmp,20,color,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(3227)		this->scrollFactor->set(null(),null());
HXLINE(3228)		this->set_borderSize(( (Float)(1) ));
            	}

Dynamic DebugLuaText_obj::__CreateEmpty() { return new DebugLuaText_obj; }

void *DebugLuaText_obj::_hx_vtable = 0;

Dynamic DebugLuaText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DebugLuaText_obj > _hx_result = new DebugLuaText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DebugLuaText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x716f4352) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x716f4352;
			}
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DebugLuaText_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_6f866b21df2f4ee6_3231_update)
HXLINE(3232)		this->super::update(elapsed);
HXLINE(3233)		 ::DebugLuaText _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(3233)		_hx_tmp->disableTime = (_hx_tmp->disableTime - elapsed);
HXLINE(3234)		if ((this->disableTime < 0)) {
HXLINE(3234)			this->disableTime = ( (Float)(0) );
            		}
HXLINE(3235)		if ((this->disableTime < 1)) {
HXLINE(3235)			this->set_alpha(this->disableTime);
            		}
            	}



::hx::ObjectPtr< DebugLuaText_obj > DebugLuaText_obj::__new(::String text, ::flixel::group::FlxTypedGroup parentGroup,int color) {
	::hx::ObjectPtr< DebugLuaText_obj > __this = new DebugLuaText_obj();
	__this->__construct(text,parentGroup,color);
	return __this;
}

::hx::ObjectPtr< DebugLuaText_obj > DebugLuaText_obj::__alloc(::hx::Ctx *_hx_ctx,::String text, ::flixel::group::FlxTypedGroup parentGroup,int color) {
	DebugLuaText_obj *__this = (DebugLuaText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DebugLuaText_obj), true, "DebugLuaText"));
	*(void **)__this = DebugLuaText_obj::_hx_vtable;
	__this->__construct(text,parentGroup,color);
	return __this;
}

DebugLuaText_obj::DebugLuaText_obj()
{
}

void DebugLuaText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DebugLuaText);
	HX_MARK_MEMBER_NAME(disableTime,"disableTime");
	HX_MARK_MEMBER_NAME(parentGroup,"parentGroup");
	 ::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DebugLuaText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(disableTime,"disableTime");
	HX_VISIT_MEMBER_NAME(parentGroup,"parentGroup");
	 ::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DebugLuaText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableTime") ) { return ::hx::Val( disableTime ); }
		if (HX_FIELD_EQ(inName,"parentGroup") ) { return ::hx::Val( parentGroup ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DebugLuaText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"disableTime") ) { disableTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentGroup") ) { parentGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DebugLuaText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("disableTime",15,76,0d,1d));
	outFields->push(HX_("parentGroup",b5,25,af,2a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DebugLuaText_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(DebugLuaText_obj,disableTime),HX_("disableTime",15,76,0d,1d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(DebugLuaText_obj,parentGroup),HX_("parentGroup",b5,25,af,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DebugLuaText_obj_sStaticStorageInfo = 0;
#endif

static ::String DebugLuaText_obj_sMemberFields[] = {
	HX_("disableTime",15,76,0d,1d),
	HX_("parentGroup",b5,25,af,2a),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class DebugLuaText_obj::__mClass;

void DebugLuaText_obj::__register()
{
	DebugLuaText_obj _hx_dummy;
	DebugLuaText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DebugLuaText",92,f0,8d,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DebugLuaText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DebugLuaText_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DebugLuaText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DebugLuaText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

