#ifndef INCLUDED_flixel_addons_display_FlxRuntimeShader
#define INCLUDED_flixel_addons_display_FlxRuntimeShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,display,FlxRuntimeShader)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)

namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FlxRuntimeShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef FlxRuntimeShader_obj OBJ_;
		FlxRuntimeShader_obj();

	public:
		enum { _hx_ClassId = 0x7517ccbe };

		void __construct(::String fragmentSource,::String vertexSource,::hx::Null< int >  __o_glslVersion);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.FlxRuntimeShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.display.FlxRuntimeShader"); }
		static ::hx::ObjectPtr< FlxRuntimeShader_obj > __new(::String fragmentSource,::String vertexSource,::hx::Null< int >  __o_glslVersion);
		static ::hx::ObjectPtr< FlxRuntimeShader_obj > __alloc(::hx::Ctx *_hx_ctx,::String fragmentSource,::String vertexSource,::hx::Null< int >  __o_glslVersion);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxRuntimeShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxRuntimeShader",6b,22,33,11); }

		static void __boot();
		static ::String BASE_VERTEX_HEADER;
		static ::String BASE_VERTEX_BODY;
		static ::String BASE_FRAGMENT_HEADER;
		static ::String BASE_FRAGMENT_BODY;
		static ::String DEFAULT_FRAGMENT_SOURCE;
		static ::String DEFAULT_VERTEX_SOURCE;
		static ::String PRAGMA_HEADER;
		static ::String PRAGMA_BODY;
		static ::String PRAGMA_PRECISION;
		static ::String PRAGMA_VERSION;
		int _glslVersion;
		::String processFragmentSource(::String input);
		::Dynamic processFragmentSource_dyn();

		::String processVertexSource(::String input);
		::Dynamic processVertexSource_dyn();

		::String buildPrecisionHeaders();
		::Dynamic buildPrecisionHeaders_dyn();

		void _hx___initGL();

		::Array< ::String > _hx___fieldList;
		bool thisHasField(::String name);
		::Dynamic thisHasField_dyn();

		void _hx___processGLData(::String source,::String storageType);

		void setFloat(::String name,Float value);
		::Dynamic setFloat_dyn();

		void setFloatArray(::String name,::Array< Float > value);
		::Dynamic setFloatArray_dyn();

		void setInt(::String name,int value);
		::Dynamic setInt_dyn();

		void setIntArray(::String name,::Array< int > value);
		::Dynamic setIntArray_dyn();

		void setBool(::String name,bool value);
		::Dynamic setBool_dyn();

		void setBoolArray(::String name,::Array< bool > value);
		::Dynamic setBoolArray_dyn();

		 ::Dynamic getFloat(::String name);
		::Dynamic getFloat_dyn();

		::Array< Float > getFloatArray(::String name);
		::Dynamic getFloatArray_dyn();

		 ::Dynamic getInt(::String name);
		::Dynamic getInt_dyn();

		::Array< int > getIntArray(::String name);
		::Dynamic getIntArray_dyn();

		 ::Dynamic getBool(::String name);
		::Dynamic getBool_dyn();

		::Array< bool > getBoolArray(::String name);
		::Dynamic getBoolArray_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxRuntimeShader */ 
