#ifndef INCLUDED_hscript_ErrorDef
#define INCLUDED_hscript_ErrorDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,ErrorDef)
namespace hscript{


class ErrorDef_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ErrorDef_obj OBJ_;

	public:
		ErrorDef_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscript.ErrorDef",58,1a,2a,4c); }
		::String __ToString() const { return HX_("ErrorDef.",91,ae,a1,0a) + _hx_tag; }

		static ::hscript::ErrorDef ECustom(::String msg);
		static ::Dynamic ECustom_dyn();
		static ::hscript::ErrorDef EInvalidAccess(::String f);
		static ::Dynamic EInvalidAccess_dyn();
		static ::hscript::ErrorDef EInvalidChar(int c);
		static ::Dynamic EInvalidChar_dyn();
		static ::hscript::ErrorDef EInvalidIterator(::String v);
		static ::Dynamic EInvalidIterator_dyn();
		static ::hscript::ErrorDef EInvalidOp(::String op);
		static ::Dynamic EInvalidOp_dyn();
		static ::hscript::ErrorDef EInvalidPreprocessor(::String msg);
		static ::Dynamic EInvalidPreprocessor_dyn();
		static ::hscript::ErrorDef EUnexpected(::String s);
		static ::Dynamic EUnexpected_dyn();
		static ::hscript::ErrorDef EUnknownVariable(::String v);
		static ::Dynamic EUnknownVariable_dyn();
		static ::hscript::ErrorDef EUnterminatedComment;
		static inline ::hscript::ErrorDef EUnterminatedComment_dyn() { return EUnterminatedComment; }
		static ::hscript::ErrorDef EUnterminatedString;
		static inline ::hscript::ErrorDef EUnterminatedString_dyn() { return EUnterminatedString; }
};

} // end namespace hscript

#endif /* INCLUDED_hscript_ErrorDef */ 
