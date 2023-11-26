#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxBaseMultiInput
#include <flixel/addons/ui/FlxBaseMultiInput.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxMultiKey
#include <flixel/addons/ui/FlxMultiKey.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_658f4b014982005f_12_new,"flixel.addons.ui.FlxMultiKey","new",0xa34fa9f9,"flixel.addons.ui.FlxMultiKey.new","flixel/addons/ui/FlxMultiKey.hx",12,0x3ae44138)
HX_LOCAL_STACK_FRAME(_hx_pos_658f4b014982005f_22_checkJustPressed,"flixel.addons.ui.FlxMultiKey","checkJustPressed",0xc8ef0cb5,"flixel.addons.ui.FlxMultiKey.checkJustPressed","flixel/addons/ui/FlxMultiKey.hx",22,0x3ae44138)
HX_LOCAL_STACK_FRAME(_hx_pos_658f4b014982005f_27_checkJustReleased,"flixel.addons.ui.FlxMultiKey","checkJustReleased",0x0f121f4a,"flixel.addons.ui.FlxMultiKey.checkJustReleased","flixel/addons/ui/FlxMultiKey.hx",27,0x3ae44138)
HX_LOCAL_STACK_FRAME(_hx_pos_658f4b014982005f_32_checkPressed,"flixel.addons.ui.FlxMultiKey","checkPressed",0xd9303601,"flixel.addons.ui.FlxMultiKey.checkPressed","flixel/addons/ui/FlxMultiKey.hx",32,0x3ae44138)
HX_LOCAL_STACK_FRAME(_hx_pos_658f4b014982005f_37_checkCombos,"flixel.addons.ui.FlxMultiKey","checkCombos",0xf37c89e6,"flixel.addons.ui.FlxMultiKey.checkCombos","flixel/addons/ui/FlxMultiKey.hx",37,0x3ae44138)
HX_LOCAL_STACK_FRAME(_hx_pos_658f4b014982005f_42_checkForbiddens,"flixel.addons.ui.FlxMultiKey","checkForbiddens",0x4d39935b,"flixel.addons.ui.FlxMultiKey.checkForbiddens","flixel/addons/ui/FlxMultiKey.hx",42,0x3ae44138)
namespace flixel{
namespace addons{
namespace ui{

void FlxMultiKey_obj::__construct(int Input,::Array< int > Combos,::Array< int > Forbiddens){
            	HX_STACKFRAME(&_hx_pos_658f4b014982005f_12_new)
HXLINE(  13)		super::__construct();
HXLINE(  14)		this->input = Input;
HXLINE(  15)		this->combos = Combos;
HXLINE(  16)		this->forbiddens = Forbiddens;
            	}

Dynamic FlxMultiKey_obj::__CreateEmpty() { return new FlxMultiKey_obj; }

void *FlxMultiKey_obj::_hx_vtable = 0;

Dynamic FlxMultiKey_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMultiKey_obj > _hx_result = new FlxMultiKey_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxMultiKey_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c2c85f1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2c2c85f1;
	} else {
		return inClassId==(int)0x6d5a3315;
	}
}

bool FlxMultiKey_obj::checkJustPressed(){
            	HX_STACKFRAME(&_hx_pos_658f4b014982005f_22_checkJustPressed)
HXDLIN(  22)		return ::flixel::FlxG_obj::keys->checkStatus(this->input,2);
            	}


bool FlxMultiKey_obj::checkJustReleased(){
            	HX_STACKFRAME(&_hx_pos_658f4b014982005f_27_checkJustReleased)
HXDLIN(  27)		return ::flixel::FlxG_obj::keys->checkStatus(this->input,-1);
            	}


bool FlxMultiKey_obj::checkPressed(){
            	HX_STACKFRAME(&_hx_pos_658f4b014982005f_32_checkPressed)
HXDLIN(  32)		return ::flixel::FlxG_obj::keys->checkStatus(this->input,1);
            	}


bool FlxMultiKey_obj::checkCombos(bool value){
            	HX_STACKFRAME(&_hx_pos_658f4b014982005f_37_checkCombos)
HXDLIN(  37)		return (::flixel::FlxG_obj::keys->checkKeyArrayState(this->combos,1) == value);
            	}


bool FlxMultiKey_obj::checkForbiddens(bool value){
            	HX_STACKFRAME(&_hx_pos_658f4b014982005f_42_checkForbiddens)
HXDLIN(  42)		return (::flixel::FlxG_obj::keys->checkKeyArrayState(this->forbiddens,1) == value);
            	}



::hx::ObjectPtr< FlxMultiKey_obj > FlxMultiKey_obj::__new(int Input,::Array< int > Combos,::Array< int > Forbiddens) {
	::hx::ObjectPtr< FlxMultiKey_obj > __this = new FlxMultiKey_obj();
	__this->__construct(Input,Combos,Forbiddens);
	return __this;
}

::hx::ObjectPtr< FlxMultiKey_obj > FlxMultiKey_obj::__alloc(::hx::Ctx *_hx_ctx,int Input,::Array< int > Combos,::Array< int > Forbiddens) {
	FlxMultiKey_obj *__this = (FlxMultiKey_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMultiKey_obj), true, "flixel.addons.ui.FlxMultiKey"));
	*(void **)__this = FlxMultiKey_obj::_hx_vtable;
	__this->__construct(Input,Combos,Forbiddens);
	return __this;
}

FlxMultiKey_obj::FlxMultiKey_obj()
{
}

::hx::Val FlxMultiKey_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"checkCombos") ) { return ::hx::Val( checkCombos_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkPressed") ) { return ::hx::Val( checkPressed_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkForbiddens") ) { return ::hx::Val( checkForbiddens_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkJustPressed") ) { return ::hx::Val( checkJustPressed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkJustReleased") ) { return ::hx::Val( checkJustReleased_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxMultiKey_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxMultiKey_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxMultiKey_obj_sMemberFields[] = {
	HX_("checkJustPressed",ee,b1,87,a7),
	HX_("checkJustReleased",f1,0b,0a,f6),
	HX_("checkPressed",ba,8a,6d,27),
	HX_("checkCombos",4d,ef,37,a9),
	HX_("checkForbiddens",42,38,51,c3),
	::String(null()) };

::hx::Class FlxMultiKey_obj::__mClass;

void FlxMultiKey_obj::__register()
{
	FlxMultiKey_obj _hx_dummy;
	FlxMultiKey_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxMultiKey",87,39,eb,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxMultiKey_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxMultiKey_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMultiKey_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMultiKey_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
