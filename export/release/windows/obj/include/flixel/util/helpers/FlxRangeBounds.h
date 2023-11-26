// Generated by Haxe 4.2.2
#ifndef INCLUDED_flixel_util_helpers_FlxRangeBounds
#define INCLUDED_flixel_util_helpers_FlxRangeBounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,util,helpers,FlxBounds)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxRangeBounds)

namespace flixel{
namespace util{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES FlxRangeBounds_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxRangeBounds_obj OBJ_;
		FlxRangeBounds_obj();

	public:
		enum { _hx_ClassId = 0x18d07587 };

		void __construct( ::Dynamic startMin, ::Dynamic startMax, ::Dynamic endMin, ::Dynamic endMax);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.helpers.FlxRangeBounds")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util.helpers.FlxRangeBounds"); }
		static ::hx::ObjectPtr< FlxRangeBounds_obj > __new( ::Dynamic startMin, ::Dynamic startMax, ::Dynamic endMin, ::Dynamic endMax);
		static ::hx::ObjectPtr< FlxRangeBounds_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic startMin, ::Dynamic startMax, ::Dynamic endMin, ::Dynamic endMax);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxRangeBounds_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxRangeBounds",e0,c4,7b,47); }

		 ::flixel::util::helpers::FlxBounds start;
		 ::flixel::util::helpers::FlxBounds end;
		bool active;
		 ::flixel::util::helpers::FlxRangeBounds set( ::Dynamic startMin, ::Dynamic startMax, ::Dynamic endMin, ::Dynamic endMax);
		::Dynamic set_dyn();

		bool equals( ::flixel::util::helpers::FlxRangeBounds OtherRangeBounds);
		::Dynamic equals_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace helpers

#endif /* INCLUDED_flixel_util_helpers_FlxRangeBounds */ 
