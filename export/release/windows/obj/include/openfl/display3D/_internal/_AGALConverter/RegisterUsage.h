#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_RegisterUsage
#define INCLUDED_openfl_display3D__internal__AGALConverter_RegisterUsage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,display3D,_internal,_AGALConverter,RegisterUsage)
namespace openfl{
namespace display3D{
namespace _internal{
namespace _AGALConverter{


class RegisterUsage_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef RegisterUsage_obj OBJ_;

	public:
		RegisterUsage_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("openfl.display3D._internal._AGALConverter.RegisterUsage",cb,41,38,21); }
		::String __ToString() const { return HX_("RegisterUsage.",d0,3a,d9,af) + _hx_tag; }

		static ::openfl::display3D::_internal::_AGALConverter::RegisterUsage MATRIX_4_4;
		static inline ::openfl::display3D::_internal::_AGALConverter::RegisterUsage MATRIX_4_4_dyn() { return MATRIX_4_4; }
		static ::openfl::display3D::_internal::_AGALConverter::RegisterUsage SAMPLER_2D;
		static inline ::openfl::display3D::_internal::_AGALConverter::RegisterUsage SAMPLER_2D_dyn() { return SAMPLER_2D; }
		static ::openfl::display3D::_internal::_AGALConverter::RegisterUsage SAMPLER_2D_ALPHA;
		static inline ::openfl::display3D::_internal::_AGALConverter::RegisterUsage SAMPLER_2D_ALPHA_dyn() { return SAMPLER_2D_ALPHA; }
		static ::openfl::display3D::_internal::_AGALConverter::RegisterUsage SAMPLER_CUBE;
		static inline ::openfl::display3D::_internal::_AGALConverter::RegisterUsage SAMPLER_CUBE_dyn() { return SAMPLER_CUBE; }
		static ::openfl::display3D::_internal::_AGALConverter::RegisterUsage SAMPLER_CUBE_ALPHA;
		static inline ::openfl::display3D::_internal::_AGALConverter::RegisterUsage SAMPLER_CUBE_ALPHA_dyn() { return SAMPLER_CUBE_ALPHA; }
		static ::openfl::display3D::_internal::_AGALConverter::RegisterUsage UNUSED;
		static inline ::openfl::display3D::_internal::_AGALConverter::RegisterUsage UNUSED_dyn() { return UNUSED; }
		static ::openfl::display3D::_internal::_AGALConverter::RegisterUsage VECTOR_4;
		static inline ::openfl::display3D::_internal::_AGALConverter::RegisterUsage VECTOR_4_dyn() { return VECTOR_4; }
		static ::openfl::display3D::_internal::_AGALConverter::RegisterUsage VECTOR_4_ARRAY;
		static inline ::openfl::display3D::_internal::_AGALConverter::RegisterUsage VECTOR_4_ARRAY_dyn() { return VECTOR_4_ARRAY; }
};

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl_display3D__internal__AGALConverter_RegisterUsage */ 
