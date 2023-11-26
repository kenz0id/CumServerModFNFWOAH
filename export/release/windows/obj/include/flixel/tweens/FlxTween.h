#ifndef INCLUDED_flixel_tweens_FlxTween
#define INCLUDED_flixel_tweens_FlxTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,misc,AngleTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,ColorTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,NumTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,VarTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,CircularMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,CubicMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearPath)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadPath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace tweens{


class HXCPP_CLASS_ATTRIBUTES FlxTween_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTween_obj OBJ_;
		FlxTween_obj();

	public:
		enum { _hx_ClassId = 0x104846c5 };

		void __construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.FlxTween")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tweens.FlxTween"); }
		static ::hx::ObjectPtr< FlxTween_obj > __new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static ::hx::ObjectPtr< FlxTween_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTween_obj();

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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxTween",b9,b4,4a,d6); }

		static void __boot();
		static int PERSIST;
		static int LOOPING;
		static int PINGPONG;
		static int ONESHOT;
		static int BACKWARD;
		static  ::flixel::tweens::FlxTweenManager globalManager;
		static  ::flixel::tweens::misc::VarTween tween( ::Dynamic Object, ::Dynamic Values,::hx::Null< Float >  Duration, ::Dynamic Options);
		static ::Dynamic tween_dyn();

		static  ::flixel::tweens::misc::NumTween num(Float FromValue,Float ToValue,::hx::Null< Float >  Duration, ::Dynamic Options, ::Dynamic TweenFunction);
		static ::Dynamic num_dyn();

		static  ::flixel::tweens::misc::AngleTween angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,::hx::Null< Float >  Duration, ::Dynamic Options);
		static ::Dynamic angle_dyn();

		static  ::flixel::tweens::misc::ColorTween color( ::flixel::FlxSprite Sprite,::hx::Null< Float >  Duration,int FromColor,int ToColor, ::Dynamic Options);
		static ::Dynamic color_dyn();

		static  ::flixel::tweens::motion::LinearMotion linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,::hx::Null< Float >  DurationOrSpeed,::hx::Null< bool >  UseDuration, ::Dynamic Options);
		static ::Dynamic linearMotion_dyn();

		static  ::flixel::tweens::motion::QuadMotion quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,::hx::Null< Float >  DurationOrSpeed,::hx::Null< bool >  UseDuration, ::Dynamic Options);
		static ::Dynamic quadMotion_dyn();

		static  ::flixel::tweens::motion::CubicMotion cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,::hx::Null< Float >  Duration, ::Dynamic Options);
		static ::Dynamic cubicMotion_dyn();

		static  ::flixel::tweens::motion::CircularMotion circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,::hx::Null< Float >  DurationOrSpeed,::hx::Null< bool >  UseDuration, ::Dynamic Options);
		static ::Dynamic circularMotion_dyn();

		static  ::flixel::tweens::motion::LinearPath linearPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,::hx::Null< Float >  DurationOrSpeed,::hx::Null< bool >  UseDuration, ::Dynamic Options);
		static ::Dynamic linearPath_dyn();

		static  ::flixel::tweens::motion::QuadPath quadPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,::hx::Null< Float >  DurationOrSpeed,::hx::Null< bool >  UseDuration, ::Dynamic Options);
		static ::Dynamic quadPath_dyn();

		static void cancelTweensOf( ::Dynamic Object,::Array< ::String > FieldPaths);
		static ::Dynamic cancelTweensOf_dyn();

		static void completeTweensOf( ::Dynamic Object,::Array< ::String > FieldPaths);
		static ::Dynamic completeTweensOf_dyn();

		 ::flixel::tweens::FlxTweenManager manager;
		bool active;
		Float duration;
		 ::Dynamic ease;
		Dynamic ease_dyn() { return ease;}
		 ::Dynamic onStart;
		Dynamic onStart_dyn() { return onStart;}
		 ::Dynamic onUpdate;
		Dynamic onUpdate_dyn() { return onUpdate;}
		 ::Dynamic onComplete;
		Dynamic onComplete_dyn() { return onComplete;}
		int type;
		bool finished;
		Float scale;
		bool backward;
		int executions;
		Float startDelay;
		Float loopDelay;
		Float _secondsSinceStart;
		Float _delayToUse;
		bool _running;
		bool _waitingForRestart;
		::Array< ::Dynamic> _chainedTweens;
		 ::flixel::tweens::FlxTween _nextTweenInChain;
		 ::Dynamic resolveTweenOptions( ::Dynamic Options);
		::Dynamic resolveTweenOptions_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		 ::flixel::tweens::FlxTween then( ::flixel::tweens::FlxTween tween);
		::Dynamic then_dyn();

		 ::flixel::tweens::FlxTween wait(Float delay);
		::Dynamic wait_dyn();

		 ::flixel::tweens::FlxTween addChainedTween( ::flixel::tweens::FlxTween tween);
		::Dynamic addChainedTween_dyn();

		virtual void update(Float elapsed);
		::Dynamic update_dyn();

		virtual  ::flixel::tweens::FlxTween start();
		::Dynamic start_dyn();

		void cancel();
		::Dynamic cancel_dyn();

		void cancelChain();
		::Dynamic cancelChain_dyn();

		void finish();
		::Dynamic finish_dyn();

		virtual void onEnd();
		::Dynamic onEnd_dyn();

		void setVarsOnEnd();
		::Dynamic setVarsOnEnd_dyn();

		void processTweenChain();
		::Dynamic processTweenChain_dyn();

		void doNextTween( ::flixel::tweens::FlxTween tween);
		::Dynamic doNextTween_dyn();

		void setChain(::Array< ::Dynamic> previousChain);
		::Dynamic setChain_dyn();

		void restart();
		::Dynamic restart_dyn();

		virtual bool isTweenOf( ::Dynamic Object,::String Field);
		::Dynamic isTweenOf_dyn();

		 ::flixel::tweens::FlxTween setDelays( ::Dynamic StartDelay, ::Dynamic LoopDelay);
		::Dynamic setDelays_dyn();

		Float set_startDelay(Float value);
		::Dynamic set_startDelay_dyn();

		Float set_loopDelay( ::Dynamic value);
		::Dynamic set_loopDelay_dyn();

		Float get_percent();
		::Dynamic get_percent_dyn();

		Float set_percent(Float value);
		::Dynamic set_percent_dyn();

		int set_type(int value);
		::Dynamic set_type_dyn();

		bool set_active(bool active);
		::Dynamic set_active_dyn();

};

} // end namespace flixel
} // end namespace tweens

#endif /* INCLUDED_flixel_tweens_FlxTween */ 
