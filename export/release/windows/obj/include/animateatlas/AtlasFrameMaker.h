#ifndef INCLUDED_animateatlas_AtlasFrameMaker
#define INCLUDED_animateatlas_AtlasFrameMaker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
HX_DECLARE_CLASS1(animateatlas,AtlasFrameMaker)
HX_DECLARE_CLASS2(animateatlas,displayobject,SpriteMovieClip)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrameCollectionType)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace animateatlas{


class HXCPP_CLASS_ATTRIBUTES AtlasFrameMaker_obj : public  ::flixel::graphics::frames::FlxFramesCollection_obj
{
	public:
		typedef  ::flixel::graphics::frames::FlxFramesCollection_obj super;
		typedef AtlasFrameMaker_obj OBJ_;
		AtlasFrameMaker_obj();

	public:
		enum { _hx_ClassId = 0x7fc39e38 };

		void __construct( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="animateatlas.AtlasFrameMaker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"animateatlas.AtlasFrameMaker"); }
		static ::hx::ObjectPtr< AtlasFrameMaker_obj > __new( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border);
		static ::hx::ObjectPtr< AtlasFrameMaker_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AtlasFrameMaker_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AtlasFrameMaker",62,b0,08,22); }

		static  ::flixel::graphics::frames::FlxFramesCollection construct(::String key,::Array< ::String > _excludeArray, ::Dynamic noAntialiasing);
		static ::Dynamic construct_dyn();

		static ::Array< ::Dynamic> getFramesArray( ::animateatlas::displayobject::SpriteMovieClip t,::String animation);
		static ::Dynamic getFramesArray_dyn();

};

} // end namespace animateatlas

#endif /* INCLUDED_animateatlas_AtlasFrameMaker */ 
