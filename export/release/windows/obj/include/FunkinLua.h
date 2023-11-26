#ifndef INCLUDED_FunkinLua
#define INCLUDED_FunkinLua

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS0(FunkinLua)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxRuntimeShader)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(hscript,Interp)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)



class HXCPP_CLASS_ATTRIBUTES FunkinLua_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FunkinLua_obj OBJ_;
		FunkinLua_obj();

	public:
		enum { _hx_ClassId = 0x574d0d5f };

		void __construct(::String script);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="FunkinLua")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"FunkinLua"); }
		static ::hx::ObjectPtr< FunkinLua_obj > __new(::String script);
		static ::hx::ObjectPtr< FunkinLua_obj > __alloc(::hx::Ctx *_hx_ctx,::String script);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FunkinLua_obj();

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
		::String __ToString() const { return HX_("FunkinLua",e7,f3,7b,36); }

		static void __boot();
		static  ::Dynamic Function_Stop;
		static  ::Dynamic Function_Continue;
		static  ::Dynamic Function_StopLua;
		static  ::hscript::Interp haxeInterp;
		static  ::Dynamic setVarInArray( ::Dynamic instance,::String variable, ::Dynamic value);
		static ::Dynamic setVarInArray_dyn();

		static  ::Dynamic getVarInArray( ::Dynamic instance,::String variable);
		static ::Dynamic getVarInArray_dyn();

		static  ::flixel::text::FlxText getTextObject(::String name);
		static ::Dynamic getTextObject_dyn();

		static  ::Dynamic getPropertyLoopThingWhatever(::Array< ::String > killMe, ::Dynamic checkForTextsToo, ::Dynamic getProperty);
		static ::Dynamic getPropertyLoopThingWhatever_dyn();

		static  ::Dynamic getObjectDirectly(::String objectName, ::Dynamic checkForTextsToo);
		static ::Dynamic getObjectDirectly_dyn();

		static  ::flixel::FlxState getInstance();
		static ::Dynamic getInstance_dyn();

		 cpp::Reference<lua_State> lua;
		 ::flixel::FlxCamera camTarget;
		::String scriptName;
		bool closed;
		void initHaxeInterp();
		::Dynamic initHaxeInterp_dyn();

		 ::flixel::addons::display::FlxRuntimeShader getShader(::String obj);
		::Dynamic getShader_dyn();

		bool initLuaShader(::String name, ::Dynamic glslVersion);
		::Dynamic initLuaShader_dyn();

		 ::Dynamic getGroupStuff( ::Dynamic leArray,::String variable);
		::Dynamic getGroupStuff_dyn();

		void loadFrames( ::flixel::FlxSprite spr,::String image,::String spriteType);
		::Dynamic loadFrames_dyn();

		void setGroupStuff( ::Dynamic leArray,::String variable, ::Dynamic value);
		::Dynamic setGroupStuff_dyn();

		void resetTextTag(::String tag);
		::Dynamic resetTextTag_dyn();

		void resetSpriteTag(::String tag);
		::Dynamic resetSpriteTag_dyn();

		void cancelTween(::String tag);
		::Dynamic cancelTween_dyn();

		 ::Dynamic tweenShit(::String tag,::String vars);
		::Dynamic tweenShit_dyn();

		void cancelTimer(::String tag);
		::Dynamic cancelTimer_dyn();

		 ::Dynamic getFlxEaseByString(::String ease);
		::Dynamic getFlxEaseByString_dyn();

		 ::Dynamic blendModeFromString(::String blend);
		::Dynamic blendModeFromString_dyn();

		 ::flixel::FlxCamera cameraFromString(::String cam);
		::Dynamic cameraFromString_dyn();

		void luaTrace(::String text,::hx::Null< bool >  ignoreCheck,::hx::Null< bool >  deprecated,::hx::Null< int >  color);
		::Dynamic luaTrace_dyn();

		::String getErrorMessage();
		::Dynamic getErrorMessage_dyn();

		 ::Dynamic getResult( cpp::Reference<lua_State> l,int result);
		::Dynamic getResult_dyn();

		::String lastCalledFunction;
		 ::Dynamic call(::String func,::cpp::VirtualArray args);
		::Dynamic call_dyn();

		bool resultIsAllowed( cpp::Reference<lua_State> leLua, ::Dynamic leResult);
		::Dynamic resultIsAllowed_dyn();

		bool isErrorAllowed(::String error);
		::Dynamic isErrorAllowed_dyn();

		void set(::String variable, ::Dynamic data);
		::Dynamic set_dyn();

		bool getBool(::String variable);
		::Dynamic getBool_dyn();

		void stop();
		::Dynamic stop_dyn();

};


#endif /* INCLUDED_FunkinLua */ 
