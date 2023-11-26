#ifndef INCLUDED_PhillyGlowParticle
#define INCLUDED_PhillyGlowParticle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(PhillyGlowParticle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PhillyGlowParticle_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef PhillyGlowParticle_obj OBJ_;
		PhillyGlowParticle_obj();

	public:
		enum { _hx_ClassId = 0x3ec0041b };

		void __construct(Float x,Float y,int color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PhillyGlowParticle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PhillyGlowParticle"); }
		static ::hx::ObjectPtr< PhillyGlowParticle_obj > __new(Float x,Float y,int color);
		static ::hx::ObjectPtr< PhillyGlowParticle_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PhillyGlowParticle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PhillyGlowParticle",5b,21,fc,e6); }

		Float lifeTime;
		Float decay;
		Float originalScale;
		void update(Float elapsed);

};


#endif /* INCLUDED_PhillyGlowParticle */ 
