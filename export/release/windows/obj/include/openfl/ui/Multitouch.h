// Generated by Haxe 4.2.2
#ifndef INCLUDED_openfl_ui_Multitouch
#define INCLUDED_openfl_ui_Multitouch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,ui,Multitouch)

namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Multitouch_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Multitouch_obj OBJ_;
		Multitouch_obj();

	public:
		enum { _hx_ClassId = 0x647efaea };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.ui.Multitouch")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.ui.Multitouch"); }

		inline static ::hx::ObjectPtr< Multitouch_obj > __new() {
			::hx::ObjectPtr< Multitouch_obj > __this = new Multitouch_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Multitouch_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Multitouch_obj *__this = (Multitouch_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Multitouch_obj), false, "openfl.ui.Multitouch"));
			*(void **)__this = Multitouch_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Multitouch_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		static void __init__();

		::String __ToString() const { return HX_("Multitouch",c6,fa,68,47); }

		static void __boot();
		static  ::Dynamic inputMode;
		static int maxTouchPoints;
		static  ::openfl::_Vector::ObjectVector supportedGestures;
		static bool supportsGestureEvents;
		static bool get_supportsTouchEvents();
		static ::Dynamic get_supportsTouchEvents_dyn();

};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_Multitouch */ 
