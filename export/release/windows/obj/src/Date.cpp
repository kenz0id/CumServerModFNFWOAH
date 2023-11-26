// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c0151d669b9b886e_26_new,"Date","new",0x9aa26240,"Date.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",26,0x1bc6780a)
HX_LOCAL_STACK_FRAME(_hx_pos_c0151d669b9b886e_30_getTime,"Date","getTime",0x0cac7da3,"Date.getTime","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",30,0x1bc6780a)
HX_LOCAL_STACK_FRAME(_hx_pos_c0151d669b9b886e_34_getHours,"Date","getHours",0x256fe079,"Date.getHours","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",34,0x1bc6780a)
HX_LOCAL_STACK_FRAME(_hx_pos_c0151d669b9b886e_58_getDay,"Date","getDay",0x598d4986,"Date.getDay","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",58,0x1bc6780a)
HX_LOCAL_STACK_FRAME(_hx_pos_c0151d669b9b886e_94_toString,"Date","toString",0xd2a372cc,"Date.toString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",94,0x1bc6780a)
HX_LOCAL_STACK_FRAME(_hx_pos_c0151d669b9b886e_98_now,"Date","now",0x9aa26af6,"Date.now","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",98,0x1bc6780a)
HX_LOCAL_STACK_FRAME(_hx_pos_c0151d669b9b886e_105_fromTime,"Date","fromTime",0x44fd3cb7,"Date.fromTime","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",105,0x1bc6780a)
HX_LOCAL_STACK_FRAME(_hx_pos_c0151d669b9b886e_112_fromString,"Date","fromString",0x5ead97fb,"Date.fromString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",112,0x1bc6780a)

void Date_obj::__construct(int year,int month,int day,int hour,int min,int sec){
            	HX_STACKFRAME(&_hx_pos_c0151d669b9b886e_26_new)
HXDLIN(  26)		this->mSeconds =  ::__hxcpp_new_date(year,month,day,hour,min,sec);
            	}

Dynamic Date_obj::__CreateEmpty() { return new Date_obj; }

void *Date_obj::_hx_vtable = 0;

Dynamic Date_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Date_obj > _hx_result = new Date_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Date_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x018f7872;
}

Float Date_obj::getTime(){
            	HX_STACKFRAME(&_hx_pos_c0151d669b9b886e_30_getTime)
HXDLIN(  30)		return (this->mSeconds * ((Float)1000.0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Date_obj,getTime,return )

int Date_obj::getHours(){
            	HX_STACKFRAME(&_hx_pos_c0151d669b9b886e_34_getHours)
HXDLIN(  34)		return  ::__hxcpp_get_hours(this->mSeconds);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Date_obj,getHours,return )

int Date_obj::getDay(){
            	HX_STACKFRAME(&_hx_pos_c0151d669b9b886e_58_getDay)
HXDLIN(  58)		return  ::__hxcpp_get_day(this->mSeconds);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Date_obj,getDay,return )

::String Date_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c0151d669b9b886e_94_toString)
HXDLIN(  94)		return  ::__hxcpp_to_string(this->mSeconds);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Date_obj,toString,return )

 ::Date Date_obj::now(){
            	HX_STACKFRAME(&_hx_pos_c0151d669b9b886e_98_now)
HXDLIN(  98)		return ::Date_obj::fromTime((( (Float)( ::__hxcpp_date_now()) ) * ((Float)1000.0)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Date_obj,now,return )

 ::Date Date_obj::fromTime(Float t){
            	HX_GC_STACKFRAME(&_hx_pos_c0151d669b9b886e_105_fromTime)
HXLINE( 106)		 ::Date result =  ::Date_obj::__alloc( HX_CTX ,0,0,0,0,0,0);
HXLINE( 107)		result->mSeconds = (t * ((Float)0.001));
HXLINE( 108)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Date_obj,fromTime,return )

 ::Date Date_obj::fromString(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_c0151d669b9b886e_112_fromString)
HXDLIN( 112)		switch((int)(s.length)){
            			case (int)8: {
HXLINE( 114)				::Array< ::String > k = s.split(HX_(":",3a,00,00,00));
HXLINE( 115)				Float _hx_tmp = (( (Float)(::Std_obj::parseInt(k->__get(0))) ) * ((Float)3600000.));
HXDLIN( 115)				Float _hx_tmp1 = (_hx_tmp + (( (Float)(::Std_obj::parseInt(k->__get(1))) ) * ((Float)60000.)));
HXDLIN( 115)				return ::Date_obj::fromTime((_hx_tmp1 + (( (Float)(::Std_obj::parseInt(k->__get(2))) ) * ((Float)1000.))));
            			}
            			break;
            			case (int)10: {
HXLINE( 117)				::Array< ::String > k = s.split(HX_("-",2d,00,00,00));
HXLINE( 118)				 ::Dynamic _hx_tmp = ::Std_obj::parseInt(k->__get(0));
HXDLIN( 118)				int _hx_tmp1 = (( (int)(::Std_obj::parseInt(k->__get(1))) ) - 1);
HXDLIN( 118)				return  ::Date_obj::__alloc( HX_CTX ,( (int)(_hx_tmp) ),_hx_tmp1,( (int)(::Std_obj::parseInt(k->__get(2))) ),0,0,0);
            			}
            			break;
            			case (int)19: {
HXLINE( 120)				::Array< ::String > k = s.split(HX_(" ",20,00,00,00));
HXLINE( 121)				::Array< ::String > y = k->__get(0).split(HX_("-",2d,00,00,00));
HXLINE( 122)				::Array< ::String > t = k->__get(1).split(HX_(":",3a,00,00,00));
HXLINE( 123)				 ::Dynamic _hx_tmp = ::Std_obj::parseInt(y->__get(0));
HXDLIN( 123)				int _hx_tmp1 = (( (int)(::Std_obj::parseInt(y->__get(1))) ) - 1);
HXDLIN( 123)				 ::Dynamic _hx_tmp2 = ::Std_obj::parseInt(y->__get(2));
HXDLIN( 123)				 ::Dynamic _hx_tmp3 = ::Std_obj::parseInt(t->__get(0));
HXDLIN( 123)				 ::Dynamic _hx_tmp4 = ::Std_obj::parseInt(t->__get(1));
HXDLIN( 123)				return  ::Date_obj::__alloc( HX_CTX ,( (int)(_hx_tmp) ),_hx_tmp1,( (int)(_hx_tmp2) ),( (int)(_hx_tmp3) ),( (int)(_hx_tmp4) ),( (int)(::Std_obj::parseInt(t->__get(2))) ));
            			}
            			break;
            			default:{
HXLINE( 125)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid date format : ",a6,de,58,13) + s)));
            			}
            		}
HXLINE( 112)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Date_obj,fromString,return )


Date_obj::Date_obj()
{
}

::hx::Val Date_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getDay") ) { return ::hx::Val( getDay_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getTime") ) { return ::hx::Val( getTime_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mSeconds") ) { return ::hx::Val( mSeconds ); }
		if (HX_FIELD_EQ(inName,"getHours") ) { return ::hx::Val( getHours_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Date_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"now") ) { outValue = now_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromTime") ) { outValue = fromTime_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

::hx::Val Date_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mSeconds") ) { mSeconds=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Date_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mSeconds",92,75,59,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Date_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Date_obj,mSeconds),HX_("mSeconds",92,75,59,82)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Date_obj_sStaticStorageInfo = 0;
#endif

static ::String Date_obj_sMemberFields[] = {
	HX_("mSeconds",92,75,59,82),
	HX_("getTime",c3,7b,7f,1f),
	HX_("getHours",59,3e,3b,8b),
	HX_("getDay",66,6f,1b,a3),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Date_obj::__mClass;

static ::String Date_obj_sStaticFields[] = {
	HX_("now",16,d9,53,00),
	HX_("fromTime",97,9a,c8,aa),
	HX_("fromString",db,2d,74,54),
	::String(null())
};

void Date_obj::__register()
{
	Date_obj _hx_dummy;
	Date_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Date",4e,82,3c,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Date_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Date_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Date_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Date_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Date_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Date_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

