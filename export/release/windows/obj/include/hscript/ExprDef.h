#ifndef INCLUDED_hscript_ExprDef
#define INCLUDED_hscript_ExprDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,CType)
HX_DECLARE_CLASS1(hscript,Const)
HX_DECLARE_CLASS1(hscript,ExprDef)
namespace hscript{


class ExprDef_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ExprDef_obj OBJ_;

	public:
		ExprDef_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscript.ExprDef",75,c4,92,0b); }
		::String __ToString() const { return HX_("ExprDef.",be,76,8e,81) + _hx_tag; }

		static ::hscript::ExprDef EArray( ::Dynamic e, ::Dynamic index);
		static ::Dynamic EArray_dyn();
		static ::hscript::ExprDef EArrayDecl(::Array< ::Dynamic> e);
		static ::Dynamic EArrayDecl_dyn();
		static ::hscript::ExprDef EBinop(::String op, ::Dynamic e1, ::Dynamic e2);
		static ::Dynamic EBinop_dyn();
		static ::hscript::ExprDef EBlock(::Array< ::Dynamic> e);
		static ::Dynamic EBlock_dyn();
		static ::hscript::ExprDef EBreak;
		static inline ::hscript::ExprDef EBreak_dyn() { return EBreak; }
		static ::hscript::ExprDef ECall( ::Dynamic e,::Array< ::Dynamic> params);
		static ::Dynamic ECall_dyn();
		static ::hscript::ExprDef ECheckType( ::Dynamic e, ::hscript::CType t);
		static ::Dynamic ECheckType_dyn();
		static ::hscript::ExprDef EConst( ::hscript::Const c);
		static ::Dynamic EConst_dyn();
		static ::hscript::ExprDef EContinue;
		static inline ::hscript::ExprDef EContinue_dyn() { return EContinue; }
		static ::hscript::ExprDef EDoWhile( ::Dynamic cond, ::Dynamic e);
		static ::Dynamic EDoWhile_dyn();
		static ::hscript::ExprDef EField( ::Dynamic e,::String f);
		static ::Dynamic EField_dyn();
		static ::hscript::ExprDef EFor(::String v, ::Dynamic it, ::Dynamic e);
		static ::Dynamic EFor_dyn();
		static ::hscript::ExprDef EFunction(::Array< ::Dynamic> args, ::Dynamic e,::String name, ::hscript::CType ret);
		static ::Dynamic EFunction_dyn();
		static ::hscript::ExprDef EIdent(::String v);
		static ::Dynamic EIdent_dyn();
		static ::hscript::ExprDef EIf( ::Dynamic cond, ::Dynamic e1, ::Dynamic e2);
		static ::Dynamic EIf_dyn();
		static ::hscript::ExprDef EMeta(::String name,::Array< ::Dynamic> args, ::Dynamic e);
		static ::Dynamic EMeta_dyn();
		static ::hscript::ExprDef ENew(::String cl,::Array< ::Dynamic> params);
		static ::Dynamic ENew_dyn();
		static ::hscript::ExprDef EObject(::Array< ::Dynamic> fl);
		static ::Dynamic EObject_dyn();
		static ::hscript::ExprDef EParent( ::Dynamic e);
		static ::Dynamic EParent_dyn();
		static ::hscript::ExprDef EReturn( ::Dynamic e);
		static ::Dynamic EReturn_dyn();
		static ::hscript::ExprDef ESwitch( ::Dynamic e,::Array< ::Dynamic> cases, ::Dynamic defaultExpr);
		static ::Dynamic ESwitch_dyn();
		static ::hscript::ExprDef ETernary( ::Dynamic cond, ::Dynamic e1, ::Dynamic e2);
		static ::Dynamic ETernary_dyn();
		static ::hscript::ExprDef EThrow( ::Dynamic e);
		static ::Dynamic EThrow_dyn();
		static ::hscript::ExprDef ETry( ::Dynamic e,::String v, ::hscript::CType t, ::Dynamic ecatch);
		static ::Dynamic ETry_dyn();
		static ::hscript::ExprDef EUnop(::String op,bool prefix, ::Dynamic e);
		static ::Dynamic EUnop_dyn();
		static ::hscript::ExprDef EVar(::String n, ::hscript::CType t, ::Dynamic e);
		static ::Dynamic EVar_dyn();
		static ::hscript::ExprDef EWhile( ::Dynamic cond, ::Dynamic e);
		static ::Dynamic EWhile_dyn();
};

} // end namespace hscript

#endif /* INCLUDED_hscript_ExprDef */ 
