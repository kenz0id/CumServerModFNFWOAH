#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_FlxUIMouse
#include <flixel/addons/ui/FlxUIMouse.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5b237ea215abb15a_12_new,"flixel.addons.ui.FlxUIMouse","new",0x9b51d282,"flixel.addons.ui.FlxUIMouse.new","flixel/addons/ui/FlxUIMouse.hx",12,0xe71578ad)
HX_LOCAL_STACK_FRAME(_hx_pos_5b237ea215abb15a_27_update,"flixel.addons.ui.FlxUIMouse","update",0xc7ae0527,"flixel.addons.ui.FlxUIMouse.update","flixel/addons/ui/FlxUIMouse.hx",27,0xe71578ad)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIMouse_obj::__construct( ::openfl::display::Sprite CursorContainer){
            	HX_STACKFRAME(&_hx_pos_5b237ea215abb15a_12_new)
HXLINE(  15)		this->updateGlobalScreenPosition = true;
HXLINE(  19)		super::__construct(CursorContainer);
            	}

Dynamic FlxUIMouse_obj::__CreateEmpty() { return new FlxUIMouse_obj; }

void *FlxUIMouse_obj::_hx_vtable = 0;

Dynamic FlxUIMouse_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIMouse_obj > _hx_result = new FlxUIMouse_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxUIMouse_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62adae31) {
		if (inClassId<=(int)0x5316fc32) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x5316fc32;
		} else {
			return inClassId==(int)0x62adae31;
		}
	} else {
		return inClassId==(int)0x750b2c26;
	}
}

void FlxUIMouse_obj::update(){
            	HX_STACKFRAME(&_hx_pos_5b237ea215abb15a_27_update)
HXLINE(  28)		int oldScreenX = this->_globalScreenX;
HXLINE(  29)		int oldScreenY = this->_globalScreenY;
HXLINE(  31)		this->super::update();
HXLINE(  33)		if (!(this->updateGlobalScreenPosition)) {
HXLINE(  35)			this->_globalScreenX = oldScreenX;
HXLINE(  36)			this->_globalScreenY = oldScreenY;
            		}
            	}



::hx::ObjectPtr< FlxUIMouse_obj > FlxUIMouse_obj::__new( ::openfl::display::Sprite CursorContainer) {
	::hx::ObjectPtr< FlxUIMouse_obj > __this = new FlxUIMouse_obj();
	__this->__construct(CursorContainer);
	return __this;
}

::hx::ObjectPtr< FlxUIMouse_obj > FlxUIMouse_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Sprite CursorContainer) {
	FlxUIMouse_obj *__this = (FlxUIMouse_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIMouse_obj), true, "flixel.addons.ui.FlxUIMouse"));
	*(void **)__this = FlxUIMouse_obj::_hx_vtable;
	__this->__construct(CursorContainer);
	return __this;
}

FlxUIMouse_obj::FlxUIMouse_obj()
{
}

::hx::Val FlxUIMouse_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"updateGlobalScreenPosition") ) { return ::hx::Val( updateGlobalScreenPosition ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUIMouse_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"updateGlobalScreenPosition") ) { updateGlobalScreenPosition=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIMouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("updateGlobalScreenPosition",a1,bd,1d,d0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIMouse_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxUIMouse_obj,updateGlobalScreenPosition),HX_("updateGlobalScreenPosition",a1,bd,1d,d0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxUIMouse_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUIMouse_obj_sMemberFields[] = {
	HX_("updateGlobalScreenPosition",a1,bd,1d,d0),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class FlxUIMouse_obj::__mClass;

void FlxUIMouse_obj::__register()
{
	FlxUIMouse_obj _hx_dummy;
	FlxUIMouse_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUIMouse",90,29,1a,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIMouse_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIMouse_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIMouse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIMouse_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
