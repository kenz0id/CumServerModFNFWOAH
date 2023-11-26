#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#define INCLUDED_flixel_ui_FlxBarFillDirection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,ui,FlxBarFillDirection)
namespace flixel{
namespace ui{


class FlxBarFillDirection_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxBarFillDirection_obj OBJ_;

	public:
		FlxBarFillDirection_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.ui.FlxBarFillDirection",93,96,f4,4c); }
		::String __ToString() const { return HX_("FlxBarFillDirection.",f3,c1,c0,64) + _hx_tag; }

		static ::flixel::ui::FlxBarFillDirection BOTTOM_TO_TOP;
		static inline ::flixel::ui::FlxBarFillDirection BOTTOM_TO_TOP_dyn() { return BOTTOM_TO_TOP; }
		static ::flixel::ui::FlxBarFillDirection HORIZONTAL_INSIDE_OUT;
		static inline ::flixel::ui::FlxBarFillDirection HORIZONTAL_INSIDE_OUT_dyn() { return HORIZONTAL_INSIDE_OUT; }
		static ::flixel::ui::FlxBarFillDirection HORIZONTAL_OUTSIDE_IN;
		static inline ::flixel::ui::FlxBarFillDirection HORIZONTAL_OUTSIDE_IN_dyn() { return HORIZONTAL_OUTSIDE_IN; }
		static ::flixel::ui::FlxBarFillDirection LEFT_TO_RIGHT;
		static inline ::flixel::ui::FlxBarFillDirection LEFT_TO_RIGHT_dyn() { return LEFT_TO_RIGHT; }
		static ::flixel::ui::FlxBarFillDirection RIGHT_TO_LEFT;
		static inline ::flixel::ui::FlxBarFillDirection RIGHT_TO_LEFT_dyn() { return RIGHT_TO_LEFT; }
		static ::flixel::ui::FlxBarFillDirection TOP_TO_BOTTOM;
		static inline ::flixel::ui::FlxBarFillDirection TOP_TO_BOTTOM_dyn() { return TOP_TO_BOTTOM; }
		static ::flixel::ui::FlxBarFillDirection VERTICAL_INSIDE_OUT;
		static inline ::flixel::ui::FlxBarFillDirection VERTICAL_INSIDE_OUT_dyn() { return VERTICAL_INSIDE_OUT; }
		static ::flixel::ui::FlxBarFillDirection VERTICAL_OUTSIDE_IN;
		static inline ::flixel::ui::FlxBarFillDirection VERTICAL_OUTSIDE_IN_dyn() { return VERTICAL_OUTSIDE_IN; }
};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxBarFillDirection */ 
