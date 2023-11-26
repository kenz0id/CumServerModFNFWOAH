#ifndef INCLUDED_openfl_display3D__internal_ATFReader
#define INCLUDED_openfl_display3D__internal_ATFReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,display3D,_internal,ATFReader)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES ATFReader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ATFReader_obj OBJ_;
		ATFReader_obj();

	public:
		enum { _hx_ClassId = 0x1cbf0639 };

		void __construct( ::openfl::utils::ByteArrayData data,int byteArrayOffset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D._internal.ATFReader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display3D._internal.ATFReader"); }
		static ::hx::ObjectPtr< ATFReader_obj > __new( ::openfl::utils::ByteArrayData data,int byteArrayOffset);
		static ::hx::ObjectPtr< ATFReader_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData data,int byteArrayOffset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ATFReader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ATFReader",96,ad,dd,e3); }

		static void __boot();
		static  ::Dynamic __meta__;
		int atfFormat;
		bool cubeMap;
		 ::openfl::utils::ByteArrayData data;
		int height;
		int mipCount;
		int version;
		int width;
		bool readHeader(int _hx___width,int _hx___height,bool cubeMap);
		::Dynamic readHeader_dyn();

		void readTextures( ::Dynamic uploadCallback);
		::Dynamic readTextures_dyn();

		int _hx___readUInt24( ::openfl::utils::ByteArrayData data);
		::Dynamic _hx___readUInt24_dyn();

		int _hx___readUInt32( ::openfl::utils::ByteArrayData data);
		::Dynamic _hx___readUInt32_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal

#endif /* INCLUDED_openfl_display3D__internal_ATFReader */ 
