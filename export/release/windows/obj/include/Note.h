#ifndef INCLUDED_Note
#define INCLUDED_Note

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(ColorSwap)
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES Note_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Note_obj OBJ_;
		Note_obj();

	public:
		enum { _hx_ClassId = 0x08363a36 };

		void __construct(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Note")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Note"); }
		static ::hx::ObjectPtr< Note_obj > __new(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor);
		static ::hx::ObjectPtr< Note_obj > __alloc(::hx::Ctx *_hx_ctx,Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Note_obj();

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
		::String __ToString() const { return HX_("Note",12,44,e3,33); }

		static void __boot();
		static Float swagWidth;
		static int PURP_NOTE;
		static int GREEN_NOTE;
		static int BLUE_NOTE;
		static int RED_NOTE;
		 ::haxe::ds::StringMap extraData;
		Float strumTime;
		bool mustPress;
		int noteData;
		bool canBeHit;
		bool tooLate;
		bool wasGoodHit;
		bool ignoreNote;
		bool hitByOpponent;
		bool noteWasHit;
		 ::Note prevNote;
		 ::Note nextNote;
		bool spawned;
		::Array< ::Dynamic> tail;
		 ::Note parent;
		bool blockHit;
		Float sustainLength;
		bool isSustainNote;
		::String noteType;
		::String eventName;
		int eventLength;
		::String eventVal1;
		::String eventVal2;
		 ::ColorSwap colorSwap;
		bool inEditor;
		::String animSuffix;
		bool gfNote;
		Float earlyHitMult;
		Float lateHitMult;
		bool lowPriority;
		bool noteSplashDisabled;
		::String noteSplashTexture;
		Float noteSplashHue;
		Float noteSplashSat;
		Float noteSplashBrt;
		Float offsetX;
		Float offsetY;
		Float offsetAngle;
		Float multAlpha;
		Float multSpeed;
		bool copyX;
		bool copyY;
		bool copyAngle;
		bool copyAlpha;
		Float hitHealth;
		Float missHealth;
		::String rating;
		Float ratingMod;
		bool ratingDisabled;
		::String texture;
		bool noAnimation;
		bool noMissAnimation;
		bool hitCausesMiss;
		Float distance;
		bool hitsoundDisabled;
		Float set_multSpeed(Float value);
		::Dynamic set_multSpeed_dyn();

		void resizeByRatio(Float ratio);
		::Dynamic resizeByRatio_dyn();

		::String set_texture(::String value);
		::Dynamic set_texture_dyn();

		::String set_noteType(::String value);
		::Dynamic set_noteType_dyn();

		Float lastNoteOffsetXForPixelAutoAdjusting;
		Float lastNoteScaleToo;
		Float originalHeightForCalcs;
		void reloadNote(::String prefix,::String texture,::String suffix);
		::Dynamic reloadNote_dyn();

		void loadNoteAnims();
		::Dynamic loadNoteAnims_dyn();

		void loadPixelNoteAnims();
		::Dynamic loadPixelNoteAnims_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_Note */ 
