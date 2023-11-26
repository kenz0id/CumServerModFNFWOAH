#ifndef INCLUDED_vlc_bitmap_VlcBitmap
#define INCLUDED_vlc_bitmap_VlcBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_13fd500b2aab5f87
#define INCLUDED_13fd500b2aab5f87
#include "LibVLC.h"
#endif
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display3D,textures,RectangleTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(vlc,bitmap,VlcBitmap)

namespace vlc{
namespace bitmap{


class HXCPP_CLASS_ATTRIBUTES VlcBitmap_obj : public  ::openfl::display::Bitmap_obj
{
	public:
		typedef  ::openfl::display::Bitmap_obj super;
		typedef VlcBitmap_obj OBJ_;
		VlcBitmap_obj();

	public:
		enum { _hx_ClassId = 0x58b52de4 };

		void __construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height, ::Dynamic __o_autoScale);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="vlc.bitmap.VlcBitmap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"vlc.bitmap.VlcBitmap"); }
		static ::hx::ObjectPtr< VlcBitmap_obj > __new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height, ::Dynamic __o_autoScale);
		static ::hx::ObjectPtr< VlcBitmap_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height, ::Dynamic __o_autoScale);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VlcBitmap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VlcBitmap",1c,dc,ce,38); }

		int videoWidth;
		int videoHeight;
		int repeat;
		Float duration;
		Float length;
		bool initComplete;
		Float volume;
		bool isDisposed;
		bool isPlaying;
		bool disposeOnStop;
		int time;
		 ::Dynamic onVideoReady;
		Dynamic onVideoReady_dyn() { return onVideoReady;}
		 ::Dynamic onPlay;
		Dynamic onPlay_dyn() { return onPlay;}
		 ::Dynamic onStop;
		Dynamic onStop_dyn() { return onStop;}
		 ::Dynamic onPause;
		Dynamic onPause_dyn() { return onPause;}
		 ::Dynamic onResume;
		Dynamic onResume_dyn() { return onResume;}
		 ::Dynamic onSeek;
		Dynamic onSeek_dyn() { return onSeek;}
		 ::Dynamic onBuffer;
		Dynamic onBuffer_dyn() { return onBuffer;}
		 ::Dynamic onProgress;
		Dynamic onProgress_dyn() { return onProgress;}
		 ::Dynamic onOpening;
		Dynamic onOpening_dyn() { return onOpening;}
		 ::Dynamic onComplete;
		Dynamic onComplete_dyn() { return onComplete;}
		 ::Dynamic onError;
		Dynamic onError_dyn() { return onError;}
		::Array< unsigned char > bufferMem;
		 LibVLC* libvlc;
		int frameSize;
		 ::Dynamic _width;
		 ::Dynamic _height;
		 ::openfl::display3D::textures::RectangleTexture texture;
		 ::openfl::display3D::textures::RectangleTexture texture2;
		 ::openfl::display::BitmapData bmdBuf;
		 ::openfl::display::BitmapData bmdBuf2;
		int oldTime;
		bool flipBuffer;
		 ::openfl::geom::Rectangle frameRect;
		Float screenWidth;
		Float screenHeight;
		void mThread();
		::Dynamic mThread_dyn();

		void init();
		::Dynamic init_dyn();

		void onAddedToStage( ::openfl::events::Event e);
		::Dynamic onAddedToStage_dyn();

		void onResize( ::openfl::events::Event e);
		::Dynamic onResize_dyn();

		Float getVideoWidth();
		::Dynamic getVideoWidth_dyn();

		Float getVideoHeight();
		::Dynamic getVideoHeight_dyn();

		void play(::String source);
		::Dynamic play_dyn();

		void stop();
		::Dynamic stop_dyn();

		void pause();
		::Dynamic pause_dyn();

		void resume();
		::Dynamic resume_dyn();

		void seek(Float seekTotime);
		::Dynamic seek_dyn();

		Float getFPS();
		::Dynamic getFPS_dyn();

		int getTime();
		::Dynamic getTime_dyn();

		void checkFlags();
		::Dynamic checkFlags_dyn();

		void videoInitComplete();
		::Dynamic videoInitComplete_dyn();

		void vLoop( ::openfl::events::Event e);
		::Dynamic vLoop_dyn();

		void render();
		::Dynamic render_dyn();

		void setVolume(Float vol);
		::Dynamic setVolume_dyn();

		Float getVolume();
		::Dynamic getVolume_dyn();

		void statusOnOpening();
		::Dynamic statusOnOpening_dyn();

		void statusOnBuffering();
		::Dynamic statusOnBuffering_dyn();

		void statusOnPlaying();
		::Dynamic statusOnPlaying_dyn();

		void statusOnPaused();
		::Dynamic statusOnPaused_dyn();

		void statusOnStopped();
		::Dynamic statusOnStopped_dyn();

		void statusOnEndReached();
		::Dynamic statusOnEndReached_dyn();

		void statusOnTimeChanged(int newTime);
		::Dynamic statusOnTimeChanged_dyn();

		void statusOnPositionChanged(int newPos);
		::Dynamic statusOnPositionChanged_dyn();

		void statusOnSeekableChanged(int newPos);
		::Dynamic statusOnSeekableChanged_dyn();

		void statusOnForward();
		::Dynamic statusOnForward_dyn();

		void statusOnBackward();
		::Dynamic statusOnBackward_dyn();

		void onDisplay();
		::Dynamic onDisplay_dyn();

		void statusOnError();
		::Dynamic statusOnError_dyn();

		Float get_width();

		Float set_width(Float value);

		Float get_height();

		Float set_height(Float value);

		Float get_volume();
		::Dynamic get_volume_dyn();

		Float set_volume(Float value);
		::Dynamic set_volume_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace vlc
} // end namespace bitmap

#endif /* INCLUDED_vlc_bitmap_VlcBitmap */ 
