#ifndef INCLUDED_flixel_addons_transition_FlxTransitionSprite
#define INCLUDED_flixel_addons_transition_FlxTransitionSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace transition{


class HXCPP_CLASS_ATTRIBUTES FlxTransitionSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxTransitionSprite_obj OBJ_;
		FlxTransitionSprite_obj();

	public:
		enum { _hx_ClassId = 0x3cb08108 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,Float Delay, ::Dynamic Graphic,::hx::Null< int >  __o_GraphicWidth,::hx::Null< int >  __o_GraphicHeight,::hx::Null< int >  __o_FrameRate);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.transition.FlxTransitionSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.transition.FlxTransitionSprite"); }
		static ::hx::ObjectPtr< FlxTransitionSprite_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,Float Delay, ::Dynamic Graphic,::hx::Null< int >  __o_GraphicWidth,::hx::Null< int >  __o_GraphicHeight,::hx::Null< int >  __o_FrameRate);
		static ::hx::ObjectPtr< FlxTransitionSprite_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,Float Delay, ::Dynamic Graphic,::hx::Null< int >  __o_GraphicWidth,::hx::Null< int >  __o_GraphicHeight,::hx::Null< int >  __o_FrameRate);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTransitionSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTransitionSprite",ec,57,81,a4); }

		Float _delay;
		Float _count;
		bool _starting;
		bool _finished;
		int status;
		int _newStatus;
		void start(int NewStatus);
		::Dynamic start_dyn();

		void startStatus(int NewStatus);
		::Dynamic startStatus_dyn();

		void setStatus(int Status);
		::Dynamic setStatus_dyn();

		void onFinishAnim(::String str);
		::Dynamic onFinishAnim_dyn();

		void update(Float elapsed);

		void onTime();
		::Dynamic onTime_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace transition

#endif /* INCLUDED_flixel_addons_transition_FlxTransitionSprite */ 
