#include <hxcpp.h>

#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_ExprDef
#include <hscript/ExprDef.h>
#endif
#ifndef INCLUDED_hscript_Tools
#include <hscript/Tools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_28_iter,"hscript.Tools","iter",0xa012dc86,"hscript.Tools.iter","hscript/Tools.hx",28,0x0fa283ff)
HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_63_map,"hscript.Tools","map",0xde4a3aee,"hscript.Tools.map","hscript/Tools.hx",63,0x0fa283ff)
HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_95_expr,"hscript.Tools","expr",0x9d7114a3,"hscript.Tools.expr","hscript/Tools.hx",95,0x0fa283ff)
HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_103_mk,"hscript.Tools","mk",0x3cb11f4c,"hscript.Tools.mk","hscript/Tools.hx",103,0x0fa283ff)
namespace hscript{

void Tools_obj::__construct() { }

Dynamic Tools_obj::__CreateEmpty() { return new Tools_obj; }

void *Tools_obj::_hx_vtable = 0;

Dynamic Tools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools_obj > _hx_result = new Tools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x74d191e8;
}

void Tools_obj::iter( ::Dynamic e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_28_iter)
HXDLIN(  28)		 ::hscript::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(  28)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  29)				 ::hscript::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hscript::Const >();
            			}
            			break;
            			case (int)1: {
HXLINE(  29)				::String _g1 = _g->_hx_getString(0);
            			}
            			break;
            			case (int)2: {
HXLINE(  30)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  30)				 ::hscript::CType _g2 = _g->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN(  30)				{
HXLINE(  30)					 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  30)					if (::hx::IsNotNull( e )) {
HXLINE(  30)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  31)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  31)				f(e);
            			}
            			break;
            			case (int)4: {
HXLINE(  32)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  32)				{
HXLINE(  32)					int _g1 = 0;
HXDLIN(  32)					while((_g1 < el->length)){
HXLINE(  32)						 ::Dynamic e = el->__get(_g1);
HXDLIN(  32)						_g1 = (_g1 + 1);
HXDLIN(  32)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE(  33)				::String _g1 = _g->_hx_getString(1);
HXDLIN(  33)				{
HXLINE(  33)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  33)					f(e);
            				}
            			}
            			break;
            			case (int)6: {
HXLINE(  34)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  34)				{
HXLINE(  34)					 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  34)					 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  34)					{
HXLINE(  34)						f(e1);
HXDLIN(  34)						f(e2);
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE(  35)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  35)				bool _g2 = _g->_hx_getBool(1);
HXDLIN(  35)				{
HXLINE(  35)					 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  35)					f(e);
            				}
            			}
            			break;
            			case (int)8: {
HXLINE(  36)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  36)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  36)				{
HXLINE(  36)					f(e);
HXDLIN(  36)					{
HXLINE(  36)						int _g1 = 0;
HXDLIN(  36)						while((_g1 < args->length)){
HXLINE(  36)							 ::Dynamic a = args->__get(_g1);
HXDLIN(  36)							_g1 = (_g1 + 1);
HXDLIN(  36)							f(a);
            						}
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXLINE(  37)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  37)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  37)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  37)				{
HXLINE(  37)					f(c);
HXDLIN(  37)					f(e1);
HXDLIN(  37)					if (::hx::IsNotNull( e2 )) {
HXLINE(  37)						f(e2);
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE(  38)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  38)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  38)				{
HXLINE(  38)					f(c);
HXDLIN(  38)					f(e);
            				}
            			}
            			break;
            			case (int)11: {
HXLINE(  40)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  40)				{
HXLINE(  40)					 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN(  40)					 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  40)					{
HXLINE(  40)						f(it);
HXDLIN(  40)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)12: case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE(  42)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  42)				::String _g2 = _g->_hx_getString(2);
HXDLIN(  42)				 ::hscript::CType _g3 = _g->_hx_getObject(3).StaticCast<  ::hscript::CType >();
HXDLIN(  42)				{
HXLINE(  42)					 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  42)					f(e);
            				}
            			}
            			break;
            			case (int)15: {
HXLINE(  43)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  43)				if (::hx::IsNotNull( e )) {
HXLINE(  43)					f(e);
            				}
            			}
            			break;
            			case (int)16: {
HXLINE(  44)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  44)				 ::Dynamic i = _g->_hx_getObject(1);
HXDLIN(  44)				{
HXLINE(  44)					f(e);
HXDLIN(  44)					f(i);
            				}
            			}
            			break;
            			case (int)17: {
HXLINE(  45)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  45)				{
HXLINE(  45)					int _g1 = 0;
HXDLIN(  45)					while((_g1 < el->length)){
HXLINE(  45)						 ::Dynamic e = el->__get(_g1);
HXDLIN(  45)						_g1 = (_g1 + 1);
HXDLIN(  45)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)18: {
HXLINE(  46)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  46)				{
HXLINE(  46)					::Array< ::Dynamic> el = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  46)					{
HXLINE(  46)						int _g2 = 0;
HXDLIN(  46)						while((_g2 < el->length)){
HXLINE(  46)							 ::Dynamic e = el->__get(_g2);
HXDLIN(  46)							_g2 = (_g2 + 1);
HXDLIN(  46)							f(e);
            						}
            					}
            				}
            			}
            			break;
            			case (int)19: {
HXLINE(  47)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  47)				f(e);
            			}
            			break;
            			case (int)20: {
HXLINE(  48)				::String _g1 = _g->_hx_getString(1);
HXDLIN(  48)				 ::hscript::CType _g2 = _g->_hx_getObject(2).StaticCast<  ::hscript::CType >();
HXDLIN(  48)				{
HXLINE(  48)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  48)					 ::Dynamic c = _g->_hx_getObject(3);
HXDLIN(  48)					{
HXLINE(  48)						f(e);
HXDLIN(  48)						f(c);
            					}
            				}
            			}
            			break;
            			case (int)21: {
HXLINE(  49)				::Array< ::Dynamic> fl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  49)				{
HXLINE(  49)					int _g1 = 0;
HXDLIN(  49)					while((_g1 < fl->length)){
HXLINE(  49)						 ::Dynamic fi = fl->__get(_g1);
HXDLIN(  49)						_g1 = (_g1 + 1);
HXDLIN(  49)						f( ::Dynamic(fi->__Field(HX_("e",65,00,00,00),::hx::paccDynamic)));
            					}
            				}
            			}
            			break;
            			case (int)22: {
HXLINE(  50)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  50)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  50)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  50)				{
HXLINE(  50)					f(c);
HXDLIN(  50)					f(e1);
HXDLIN(  50)					f(e2);
            				}
            			}
            			break;
            			case (int)23: {
HXLINE(  51)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  51)				::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  51)				 ::Dynamic def = _g->_hx_getObject(2);
HXDLIN(  51)				{
HXLINE(  52)					f(e);
HXLINE(  53)					{
HXLINE(  53)						int _g1 = 0;
HXDLIN(  53)						while((_g1 < cases->length)){
HXLINE(  53)							 ::Dynamic c = cases->__get(_g1);
HXDLIN(  53)							_g1 = (_g1 + 1);
HXLINE(  54)							{
HXLINE(  54)								int _g = 0;
HXDLIN(  54)								::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN(  54)								while((_g < _g2->length)){
HXLINE(  54)									 ::Dynamic v = _g2->__get(_g);
HXDLIN(  54)									_g = (_g + 1);
HXDLIN(  54)									f(v);
            								}
            							}
HXLINE(  55)							f( ::Dynamic(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)));
            						}
            					}
HXLINE(  57)					if (::hx::IsNotNull( def )) {
HXLINE(  57)						f(def);
            					}
            				}
            			}
            			break;
            			case (int)24: {
HXLINE(  39)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  39)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  39)				{
HXLINE(  39)					f(c);
HXDLIN(  39)					f(e);
            				}
            			}
            			break;
            			case (int)25: {
HXLINE(  58)				::String name = _g->_hx_getString(0);
HXDLIN(  58)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  58)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  58)				{
HXLINE(  58)					if (::hx::IsNotNull( args )) {
HXLINE(  58)						int _g = 0;
HXDLIN(  58)						while((_g < args->length)){
HXLINE(  58)							 ::Dynamic a = args->__get(_g);
HXDLIN(  58)							_g = (_g + 1);
HXDLIN(  58)							f(a);
            						}
            					}
HXDLIN(  58)					f(e);
            				}
            			}
            			break;
            			case (int)26: {
HXLINE(  59)				 ::hscript::CType _g1 = _g->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN(  59)				{
HXLINE(  59)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  59)					f(e);
            				}
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,iter,(void))

 ::Dynamic Tools_obj::map( ::Dynamic e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_63_map)
HXLINE(  64)		 ::hscript::ExprDef edef;
HXDLIN(  64)		 ::hscript::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(  64)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  65)				 ::hscript::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXLINE(  64)				edef = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)1: {
HXLINE(  65)				::String _g1 = _g->_hx_getString(0);
HXLINE(  64)				edef = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)2: {
HXLINE(  66)				::String n = _g->_hx_getString(0);
HXDLIN(  66)				 ::hscript::CType t = _g->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN(  66)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  66)				 ::Dynamic edef1;
HXDLIN(  66)				if (::hx::IsNotNull( e )) {
HXLINE(  66)					edef1 = f(e);
            				}
            				else {
HXLINE(  66)					edef1 = null();
            				}
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EVar(n,t,edef1);
            			}
            			break;
            			case (int)3: {
HXLINE(  67)				 ::Dynamic e = _g->_hx_getObject(0);
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EParent(f(e));
            			}
            			break;
            			case (int)4: {
HXLINE(  68)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  68)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  68)				{
HXLINE(  68)					int _g2 = 0;
HXDLIN(  68)					while((_g2 < el->length)){
HXLINE(  68)						 ::Dynamic e = el->__get(_g2);
HXDLIN(  68)						_g2 = (_g2 + 1);
HXDLIN(  68)						_g1->push(f(e));
            					}
            				}
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EBlock(_g1);
            			}
            			break;
            			case (int)5: {
HXLINE(  69)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  69)				::String fi = _g->_hx_getString(1);
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EField(f(e),fi);
            			}
            			break;
            			case (int)6: {
HXLINE(  70)				::String op = _g->_hx_getString(0);
HXDLIN(  70)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  70)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  70)				 ::Dynamic edef1 = f(e1);
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EBinop(op,edef1,f(e2));
            			}
            			break;
            			case (int)7: {
HXLINE(  71)				::String op = _g->_hx_getString(0);
HXDLIN(  71)				bool pre = _g->_hx_getBool(1);
HXDLIN(  71)				 ::Dynamic e = _g->_hx_getObject(2);
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EUnop(op,pre,f(e));
            			}
            			break;
            			case (int)8: {
HXLINE(  72)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  72)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  72)				 ::Dynamic edef1 = f(e);
HXDLIN(  72)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  72)				{
HXLINE(  72)					int _g2 = 0;
HXDLIN(  72)					while((_g2 < args->length)){
HXLINE(  72)						 ::Dynamic a = args->__get(_g2);
HXDLIN(  72)						_g2 = (_g2 + 1);
HXDLIN(  72)						_g1->push(f(a));
            					}
            				}
HXLINE(  64)				edef = ::hscript::ExprDef_obj::ECall(edef1,_g1);
            			}
            			break;
            			case (int)9: {
HXLINE(  73)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  73)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  73)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  73)				 ::Dynamic edef1 = f(c);
HXDLIN(  73)				 ::Dynamic edef2 = f(e1);
HXDLIN(  73)				 ::Dynamic edef3;
HXDLIN(  73)				if (::hx::IsNotNull( e2 )) {
HXLINE(  73)					edef3 = f(e2);
            				}
            				else {
HXLINE(  73)					edef3 = null();
            				}
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EIf(edef1,edef2,edef3);
            			}
            			break;
            			case (int)10: {
HXLINE(  74)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  74)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  74)				 ::Dynamic edef1 = f(c);
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EWhile(edef1,f(e));
            			}
            			break;
            			case (int)11: {
HXLINE(  76)				::String v = _g->_hx_getString(0);
HXDLIN(  76)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN(  76)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  76)				 ::Dynamic edef1 = f(it);
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EFor(v,edef1,f(e));
            			}
            			break;
            			case (int)12: case (int)13: {
HXLINE(  64)				edef = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)14: {
HXLINE(  77)				::Array< ::Dynamic> args = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  77)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  77)				::String name = _g->_hx_getString(2);
HXDLIN(  77)				 ::hscript::CType t = _g->_hx_getObject(3).StaticCast<  ::hscript::CType >();
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EFunction(args,f(e),name,t);
            			}
            			break;
            			case (int)15: {
HXLINE(  78)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  78)				 ::Dynamic edef1;
HXDLIN(  78)				if (::hx::IsNotNull( e )) {
HXLINE(  78)					edef1 = f(e);
            				}
            				else {
HXLINE(  78)					edef1 = null();
            				}
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EReturn(edef1);
            			}
            			break;
            			case (int)16: {
HXLINE(  79)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  79)				 ::Dynamic i = _g->_hx_getObject(1);
HXDLIN(  79)				 ::Dynamic edef1 = f(e);
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EArray(edef1,f(i));
            			}
            			break;
            			case (int)17: {
HXLINE(  80)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  80)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  80)				{
HXLINE(  80)					int _g2 = 0;
HXDLIN(  80)					while((_g2 < el->length)){
HXLINE(  80)						 ::Dynamic e = el->__get(_g2);
HXDLIN(  80)						_g2 = (_g2 + 1);
HXDLIN(  80)						_g1->push(f(e));
            					}
            				}
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EArrayDecl(_g1);
            			}
            			break;
            			case (int)18: {
HXLINE(  81)				::String cl = _g->_hx_getString(0);
HXDLIN(  81)				::Array< ::Dynamic> el = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  81)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  81)				{
HXLINE(  81)					int _g2 = 0;
HXDLIN(  81)					while((_g2 < el->length)){
HXLINE(  81)						 ::Dynamic e = el->__get(_g2);
HXDLIN(  81)						_g2 = (_g2 + 1);
HXDLIN(  81)						_g1->push(f(e));
            					}
            				}
HXLINE(  64)				edef = ::hscript::ExprDef_obj::ENew(cl,_g1);
            			}
            			break;
            			case (int)19: {
HXLINE(  82)				 ::Dynamic e = _g->_hx_getObject(0);
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EThrow(f(e));
            			}
            			break;
            			case (int)20: {
HXLINE(  83)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  83)				::String v = _g->_hx_getString(1);
HXDLIN(  83)				 ::hscript::CType t = _g->_hx_getObject(2).StaticCast<  ::hscript::CType >();
HXDLIN(  83)				 ::Dynamic c = _g->_hx_getObject(3);
HXDLIN(  83)				 ::Dynamic edef1 = f(e);
HXLINE(  64)				edef = ::hscript::ExprDef_obj::ETry(edef1,v,t,f(c));
            			}
            			break;
            			case (int)21: {
HXLINE(  84)				::Array< ::Dynamic> fl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  84)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  84)				{
HXLINE(  84)					int _g2 = 0;
HXDLIN(  84)					while((_g2 < fl->length)){
HXLINE(  84)						 ::Dynamic fi = fl->__get(_g2);
HXDLIN(  84)						_g2 = (_g2 + 1);
HXDLIN(  84)						::String fi1 = ( (::String)(fi->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN(  84)						_g1->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("e",65,00,00,00),f( ::Dynamic(fi->__Field(HX_("e",65,00,00,00),::hx::paccDynamic))))
            							->setFixed(1,HX_("name",4b,72,ff,48),fi1)));
            					}
            				}
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EObject(_g1);
            			}
            			break;
            			case (int)22: {
HXLINE(  85)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  85)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  85)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  85)				 ::Dynamic edef1 = f(c);
HXDLIN(  85)				 ::Dynamic edef2 = f(e1);
HXLINE(  64)				edef = ::hscript::ExprDef_obj::ETernary(edef1,edef2,f(e2));
            			}
            			break;
            			case (int)23: {
HXLINE(  86)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  86)				::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  86)				 ::Dynamic def = _g->_hx_getObject(2);
HXDLIN(  86)				 ::Dynamic edef1 = f(e);
HXDLIN(  86)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  86)				{
HXLINE(  86)					int _g2 = 0;
HXDLIN(  86)					while((_g2 < cases->length)){
HXLINE(  86)						 ::Dynamic c = cases->__get(_g2);
HXDLIN(  86)						_g2 = (_g2 + 1);
HXDLIN(  86)						::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  86)						{
HXLINE(  86)							int _g3 = 0;
HXDLIN(  86)							::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN(  86)							while((_g3 < _g4->length)){
HXLINE(  86)								 ::Dynamic v = _g4->__get(_g3);
HXDLIN(  86)								_g3 = (_g3 + 1);
HXDLIN(  86)								_g->push(f(v));
            							}
            						}
HXDLIN(  86)						_g1->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("expr",35,fd,1d,43),f( ::Dynamic(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))))
            							->setFixed(1,HX_("values",e2,03,b7,4f),_g)));
            					}
            				}
HXDLIN(  86)				 ::Dynamic edef2;
HXDLIN(  86)				if (::hx::IsNull( def )) {
HXLINE(  86)					edef2 = null();
            				}
            				else {
HXLINE(  86)					edef2 = f(def);
            				}
HXLINE(  64)				edef = ::hscript::ExprDef_obj::ESwitch(edef1,_g1,edef2);
            			}
            			break;
            			case (int)24: {
HXLINE(  75)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  75)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  75)				 ::Dynamic edef1 = f(c);
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EDoWhile(edef1,f(e));
            			}
            			break;
            			case (int)25: {
HXLINE(  87)				::String name = _g->_hx_getString(0);
HXDLIN(  87)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  87)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  87)				::Array< ::Dynamic> edef1;
HXDLIN(  87)				if (::hx::IsNull( args )) {
HXLINE(  87)					edef1 = null();
            				}
            				else {
HXLINE(  87)					::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  87)					{
HXLINE(  87)						int _g1 = 0;
HXDLIN(  87)						while((_g1 < args->length)){
HXLINE(  87)							 ::Dynamic a = args->__get(_g1);
HXDLIN(  87)							_g1 = (_g1 + 1);
HXDLIN(  87)							_g->push(f(a));
            						}
            					}
HXDLIN(  87)					edef1 = _g;
            				}
HXLINE(  64)				edef = ::hscript::ExprDef_obj::EMeta(name,edef1,f(e));
            			}
            			break;
            			case (int)26: {
HXLINE(  88)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  88)				 ::hscript::CType t = _g->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXLINE(  64)				edef = ::hscript::ExprDef_obj::ECheckType(f(e),t);
            			}
            			break;
            		}
HXLINE(  90)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("e",65,00,00,00),edef)
            			->setFixed(1,HX_("line",f4,17,b3,47), ::Dynamic(e->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)))
            			->setFixed(2,HX_("pmax",34,f0,5a,4a), ::Dynamic(e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)))
            			->setFixed(3,HX_("pmin",22,f7,5a,4a), ::Dynamic(e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)))
            			->setFixed(4,HX_("origin",e6,19,01,4b), ::Dynamic(e->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,map,return )

 ::hscript::ExprDef Tools_obj::expr( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_95_expr)
HXDLIN(  95)		return e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,expr,return )

 ::Dynamic Tools_obj::mk( ::hscript::ExprDef e, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_103_mk)
HXDLIN( 103)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("e",65,00,00,00),e)
            			->setFixed(1,HX_("line",f4,17,b3,47), ::Dynamic(p->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)))
            			->setFixed(2,HX_("pmax",34,f0,5a,4a), ::Dynamic(p->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)))
            			->setFixed(3,HX_("pmin",22,f7,5a,4a), ::Dynamic(p->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)))
            			->setFixed(4,HX_("origin",e6,19,01,4b), ::Dynamic(p->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,mk,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { outValue = mk_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"expr") ) { outValue = expr_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("iter",18,c5,bf,45),
	HX_("map",9c,0a,53,00),
	HX_("expr",35,fd,1d,43),
	HX_("mk",5e,5f,00,00),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hscript.Tools",c0,7f,f4,c4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscript
