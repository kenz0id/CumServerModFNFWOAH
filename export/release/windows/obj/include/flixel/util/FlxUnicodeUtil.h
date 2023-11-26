#ifndef INCLUDED_flixel_util_FlxUnicodeUtil
#define INCLUDED_flixel_util_FlxUnicodeUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxUnicodeUtil)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxUnicodeUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxUnicodeUtil_obj OBJ_;
		FlxUnicodeUtil_obj();

	public:
		enum { _hx_ClassId = 0x2deb6c2b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxUnicodeUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util.FlxUnicodeUtil"); }

		inline static ::hx::ObjectPtr< FlxUnicodeUtil_obj > __new() {
			::hx::ObjectPtr< FlxUnicodeUtil_obj > __this = new FlxUnicodeUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxUnicodeUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxUnicodeUtil_obj *__this = (FlxUnicodeUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUnicodeUtil_obj), false, "flixel.util.FlxUnicodeUtil"));
			*(void **)__this = FlxUnicodeUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUnicodeUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxUnicodeUtil",8d,20,33,eb); }

		static int uLength(::String s);
		static ::Dynamic uLength_dyn();

		static bool uEquals(::String a,::String b);
		static ::Dynamic uEquals_dyn();

		static ::String uSub(::String s,int pos,int len);
		static ::Dynamic uSub_dyn();

		static  ::Dynamic uCharCodeAt(::String s,int index);
		static ::Dynamic uCharCodeAt_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxUnicodeUtil */ 
