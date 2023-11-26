// Generated by Haxe 4.2.2
#ifndef INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode
#define INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,util,_FlxBitmapDataPool,FlxBitmapDataPoolNode)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace util{
namespace _FlxBitmapDataPool{


class HXCPP_CLASS_ATTRIBUTES FlxBitmapDataPoolNode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxBitmapDataPoolNode_obj OBJ_;
		FlxBitmapDataPoolNode_obj();

	public:
		enum { _hx_ClassId = 0x131e5f5f };

		void __construct( ::openfl::display::BitmapData bmd, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode"); }
		static ::hx::ObjectPtr< FlxBitmapDataPoolNode_obj > __new( ::openfl::display::BitmapData bmd, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next);
		static ::hx::ObjectPtr< FlxBitmapDataPoolNode_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bmd, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBitmapDataPoolNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBitmapDataPoolNode",c9,c4,c2,98); }

		 ::openfl::display::BitmapData bmd;
		 ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev;
		 ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next;
};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxBitmapDataPool

#endif /* INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode */ 
