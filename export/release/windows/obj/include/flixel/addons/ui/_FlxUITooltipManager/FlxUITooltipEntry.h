// Generated by Haxe 4.2.2
#ifndef INCLUDED_flixel_addons_ui__FlxUITooltipManager_FlxUITooltipEntry
#define INCLUDED_flixel_addons_ui__FlxUITooltipManager_FlxUITooltipEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS4(flixel,addons,ui,_FlxUITooltipManager,FlxUITooltipEntry)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{
namespace _FlxUITooltipManager{


class HXCPP_CLASS_ATTRIBUTES FlxUITooltipEntry_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxUITooltipEntry_obj OBJ_;
		FlxUITooltipEntry_obj();

	public:
		enum { _hx_ClassId = 0x5dd5f2bd };

		void __construct(::Dynamic Btn, ::Dynamic Data, ::flixel::FlxObject Obj);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui._FlxUITooltipManager.FlxUITooltipEntry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui._FlxUITooltipManager.FlxUITooltipEntry"); }
		static ::hx::ObjectPtr< FlxUITooltipEntry_obj > __new(::Dynamic Btn, ::Dynamic Data, ::flixel::FlxObject Obj);
		static ::hx::ObjectPtr< FlxUITooltipEntry_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic Btn, ::Dynamic Data, ::flixel::FlxObject Obj);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUITooltipEntry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUITooltipEntry",b5,9c,98,ca); }

		 ::flixel::FlxObject obj;
		::Dynamic btn;
		Float count;
		 ::Dynamic data;
		bool enabled;
		bool sticky;
		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace _FlxUITooltipManager

#endif /* INCLUDED_flixel_addons_ui__FlxUITooltipManager_FlxUITooltipEntry */ 
