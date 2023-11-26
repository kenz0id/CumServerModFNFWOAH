#include <hxcpp.h>

#ifndef INCLUDED_InputFormatter
#include <InputFormatter.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_83fba6cf8a731fd3_8_getKeyName,"InputFormatter","getKeyName",0x9f93bd82,"InputFormatter.getKeyName","InputFormatter.hx",8,0x55ad10fe)

void InputFormatter_obj::__construct() { }

Dynamic InputFormatter_obj::__CreateEmpty() { return new InputFormatter_obj; }

void *InputFormatter_obj::_hx_vtable = 0;

Dynamic InputFormatter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InputFormatter_obj > _hx_result = new InputFormatter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InputFormatter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0bac54e4;
}

::String InputFormatter_obj::getKeyName(int key){
            	HX_STACKFRAME(&_hx_pos_83fba6cf8a731fd3_8_getKeyName)
HXDLIN(   8)		switch((int)(key)){
            			case (int)-1: {
HXLINE(  90)				return HX_("---",cd,4c,22,00);
            			}
            			break;
            			case (int)8: {
HXLINE(  10)				return HX_("BckSpc",dc,6f,32,ab);
            			}
            			break;
            			case (int)17: {
HXLINE(  12)				return HX_("Ctrl",cb,b4,a1,2c);
            			}
            			break;
            			case (int)18: {
HXLINE(  14)				return HX_("Alt",09,b1,31,00);
            			}
            			break;
            			case (int)20: {
HXLINE(  16)				return HX_("Caps",41,48,93,2c);
            			}
            			break;
            			case (int)33: {
HXLINE(  18)				return HX_("PgUp",52,84,2f,35);
            			}
            			break;
            			case (int)34: {
HXLINE(  20)				return HX_("PgDown",19,c2,19,78);
            			}
            			break;
            			case (int)48: {
HXLINE(  22)				return HX_("0",30,00,00,00);
            			}
            			break;
            			case (int)49: {
HXLINE(  24)				return HX_("1",31,00,00,00);
            			}
            			break;
            			case (int)50: {
HXLINE(  26)				return HX_("2",32,00,00,00);
            			}
            			break;
            			case (int)51: {
HXLINE(  28)				return HX_("3",33,00,00,00);
            			}
            			break;
            			case (int)52: {
HXLINE(  30)				return HX_("4",34,00,00,00);
            			}
            			break;
            			case (int)53: {
HXLINE(  32)				return HX_("5",35,00,00,00);
            			}
            			break;
            			case (int)54: {
HXLINE(  34)				return HX_("6",36,00,00,00);
            			}
            			break;
            			case (int)55: {
HXLINE(  36)				return HX_("7",37,00,00,00);
            			}
            			break;
            			case (int)56: {
HXLINE(  38)				return HX_("8",38,00,00,00);
            			}
            			break;
            			case (int)57: {
HXLINE(  40)				return HX_("9",39,00,00,00);
            			}
            			break;
            			case (int)96: {
HXLINE(  42)				return HX_("#0",ad,1e,00,00);
            			}
            			break;
            			case (int)97: {
HXLINE(  44)				return HX_("#1",ae,1e,00,00);
            			}
            			break;
            			case (int)98: {
HXLINE(  46)				return HX_("#2",af,1e,00,00);
            			}
            			break;
            			case (int)99: {
HXLINE(  48)				return HX_("#3",b0,1e,00,00);
            			}
            			break;
            			case (int)100: {
HXLINE(  50)				return HX_("#4",b1,1e,00,00);
            			}
            			break;
            			case (int)101: {
HXLINE(  52)				return HX_("#5",b2,1e,00,00);
            			}
            			break;
            			case (int)102: {
HXLINE(  54)				return HX_("#6",b3,1e,00,00);
            			}
            			break;
            			case (int)103: {
HXLINE(  56)				return HX_("#7",b4,1e,00,00);
            			}
            			break;
            			case (int)104: {
HXLINE(  58)				return HX_("#8",b5,1e,00,00);
            			}
            			break;
            			case (int)105: {
HXLINE(  60)				return HX_("#9",b6,1e,00,00);
            			}
            			break;
            			case (int)106: {
HXLINE(  62)				return HX_("#*",a7,1e,00,00);
            			}
            			break;
            			case (int)107: {
HXLINE(  64)				return HX_("#+",a8,1e,00,00);
            			}
            			break;
            			case (int)109: {
HXLINE(  66)				return HX_("#-",aa,1e,00,00);
            			}
            			break;
            			case (int)110: {
HXLINE(  68)				return HX_("#.",ab,1e,00,00);
            			}
            			break;
            			case (int)186: {
HXLINE(  70)				return HX_(";",3b,00,00,00);
            			}
            			break;
            			case (int)188: {
HXLINE(  72)				return HX_(",",2c,00,00,00);
            			}
            			break;
            			case (int)190: {
HXLINE(  74)				return HX_(".",2e,00,00,00);
            			}
            			break;
            			case (int)192: {
HXLINE(  78)				return HX_("`",60,00,00,00);
            			}
            			break;
            			case (int)219: {
HXLINE(  80)				return HX_("[",5b,00,00,00);
            			}
            			break;
            			case (int)221: {
HXLINE(  84)				return HX_("]",5d,00,00,00);
            			}
            			break;
            			case (int)222: {
HXLINE(  86)				return HX_("'",27,00,00,00);
            			}
            			break;
            			case (int)301: {
HXLINE(  88)				return HX_("PrtScrn",7e,c1,07,95);
            			}
            			break;
            			default:{
HXLINE(  92)				::String label = (HX_("",00,00,00,00) + ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get_string(key));
HXLINE(  93)				if ((label.toLowerCase() == HX_("null",87,9e,0e,49))) {
HXLINE(  93)					return HX_("---",cd,4c,22,00);
            				}
HXLINE(  94)				::String _hx_tmp = (HX_("",00,00,00,00) + label.charAt(0).toUpperCase());
HXDLIN(  94)				return (_hx_tmp + label.substr(1,null()).toLowerCase());
            			}
            		}
HXLINE(   8)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputFormatter_obj,getKeyName,return )


InputFormatter_obj::InputFormatter_obj()
{
}

bool InputFormatter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getKeyName") ) { outValue = getKeyName_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *InputFormatter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *InputFormatter_obj_sStaticStorageInfo = 0;
#endif

::hx::Class InputFormatter_obj::__mClass;

static ::String InputFormatter_obj_sStaticFields[] = {
	HX_("getKeyName",94,69,3a,f2),
	::String(null())
};

void InputFormatter_obj::__register()
{
	InputFormatter_obj _hx_dummy;
	InputFormatter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("InputFormatter",c0,c9,82,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InputFormatter_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InputFormatter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< InputFormatter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputFormatter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputFormatter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

