#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_animateatlas__HelperEnums_LoopMode_Impl_
#include <animateatlas/_HelperEnums/LoopMode_Impl_.h>
#endif
#ifndef INCLUDED_animateatlas__HelperEnums_SymbolType_Impl_
#include <animateatlas/_HelperEnums/SymbolType_Impl_.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteAnimationLibrary
#include <animateatlas/displayobject/SpriteAnimationLibrary.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteSymbol
#include <animateatlas/displayobject/SpriteSymbol.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BlurFilter
#include <openfl/filters/BlurFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_28_new,"animateatlas.displayobject.SpriteSymbol","new",0x7427b240,"animateatlas.displayobject.SpriteSymbol.new","animateatlas/displayobject/SpriteSymbol.hx",28,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_92_reset,"animateatlas.displayobject.SpriteSymbol","reset",0xe0c063af,"animateatlas.displayobject.SpriteSymbol.reset","animateatlas/displayobject/SpriteSymbol.hx",92,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_100_nextFrame,"animateatlas.displayobject.SpriteSymbol","nextFrame",0x02031c1a,"animateatlas.displayobject.SpriteSymbol.nextFrame","animateatlas/displayobject/SpriteSymbol.hx",100,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_108_prevFrame,"animateatlas.displayobject.SpriteSymbol","prevFrame",0x4614a21a,"animateatlas.displayobject.SpriteSymbol.prevFrame","animateatlas/displayobject/SpriteSymbol.hx",108,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_117_moveMovieclip_MovieClips,"animateatlas.displayobject.SpriteSymbol","moveMovieclip_MovieClips",0x37b80463,"animateatlas.displayobject.SpriteSymbol.moveMovieclip_MovieClips","animateatlas/displayobject/SpriteSymbol.hx",117,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_132_update,"animateatlas.displayobject.SpriteSymbol","update",0x46241029,"animateatlas.displayobject.SpriteSymbol.update","animateatlas/displayobject/SpriteSymbol.hx",132,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_141_updateLayer,"animateatlas.displayobject.SpriteSymbol","updateLayer",0x14b1ace8,"animateatlas.displayobject.SpriteSymbol.updateLayer","animateatlas/displayobject/SpriteSymbol.hx",141,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_215_createLayers,"animateatlas.displayobject.SpriteSymbol","createLayers",0x295737be,"animateatlas.displayobject.SpriteSymbol.createLayers","animateatlas/displayobject/SpriteSymbol.hx",215,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_236_setBitmap,"animateatlas.displayobject.SpriteSymbol","setBitmap",0xa4ee0f11,"animateatlas.displayobject.SpriteSymbol.setBitmap","animateatlas/displayobject/SpriteSymbol.hx",236,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_271_setFilterData,"animateatlas.displayobject.SpriteSymbol","setFilterData",0xc8951624,"animateatlas.displayobject.SpriteSymbol.setFilterData","animateatlas/displayobject/SpriteSymbol.hx",271,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_305_setTransformationMatrix,"animateatlas.displayobject.SpriteSymbol","setTransformationMatrix",0x0fffdb8c,"animateatlas.displayobject.SpriteSymbol.setTransformationMatrix","animateatlas/displayobject/SpriteSymbol.hx",305,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_312_setColor,"animateatlas.displayobject.SpriteSymbol","setColor",0x03fe2c81,"animateatlas.displayobject.SpriteSymbol.setColor","animateatlas/displayobject/SpriteSymbol.hx",312,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_330_setLoop,"animateatlas.displayobject.SpriteSymbol","setLoop",0x88d63906,"animateatlas.displayobject.SpriteSymbol.setLoop","animateatlas/displayobject/SpriteSymbol.hx",330,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_338_setType,"animateatlas.displayobject.SpriteSymbol","setType",0x8e27855c,"animateatlas.displayobject.SpriteSymbol.setType","animateatlas/displayobject/SpriteSymbol.hx",338,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_343_getNumFrames,"animateatlas.displayobject.SpriteSymbol","getNumFrames",0x1b2e7936,"animateatlas.displayobject.SpriteSymbol.getNumFrames","animateatlas/displayobject/SpriteSymbol.hx",343,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_364__getFrameLabels,"animateatlas.displayobject.SpriteSymbol","_getFrameLabels",0x93d2c195,"animateatlas.displayobject.SpriteSymbol._getFrameLabels","animateatlas/displayobject/SpriteSymbol.hx",364,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_384_getFrameLabels,"animateatlas.displayobject.SpriteSymbol","getFrameLabels",0x3d48f136,"animateatlas.displayobject.SpriteSymbol.getFrameLabels","animateatlas/displayobject/SpriteSymbol.hx",384,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_389_sortLabels,"animateatlas.displayobject.SpriteSymbol","sortLabels",0x0560b81d,"animateatlas.displayobject.SpriteSymbol.sortLabels","animateatlas/displayobject/SpriteSymbol.hx",389,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_402_getLayer,"animateatlas.displayobject.SpriteSymbol","getLayer",0x7b04e37b,"animateatlas.displayobject.SpriteSymbol.getLayer","animateatlas/displayobject/SpriteSymbol.hx",402,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_407_getTexture,"animateatlas.displayobject.SpriteSymbol","getTexture",0x4d406905,"animateatlas.displayobject.SpriteSymbol.getTexture","animateatlas/displayobject/SpriteSymbol.hx",407,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_410_getNextLabel,"animateatlas.displayobject.SpriteSymbol","getNextLabel",0xd49ba6ab,"animateatlas.displayobject.SpriteSymbol.getNextLabel","animateatlas/displayobject/SpriteSymbol.hx",410,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_424_get_currentLabel,"animateatlas.displayobject.SpriteSymbol","get_currentLabel",0xcd9651a4,"animateatlas.displayobject.SpriteSymbol.get_currentLabel","animateatlas/displayobject/SpriteSymbol.hx",424,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_441_getFrame,"animateatlas.displayobject.SpriteSymbol","getFrame",0x11c7d9d7,"animateatlas.displayobject.SpriteSymbol.getFrame","animateatlas/displayobject/SpriteSymbol.hx",441,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_453_get_currentFrame,"animateatlas.displayobject.SpriteSymbol","get_currentFrame",0x646abbdd,"animateatlas.displayobject.SpriteSymbol.get_currentFrame","animateatlas/displayobject/SpriteSymbol.hx",453,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_456_set_currentFrame,"animateatlas.displayobject.SpriteSymbol","set_currentFrame",0xbaaca951,"animateatlas.displayobject.SpriteSymbol.set_currentFrame","animateatlas/displayobject/SpriteSymbol.hx",456,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_474_get_type,"animateatlas.displayobject.SpriteSymbol","get_type",0x78310063,"animateatlas.displayobject.SpriteSymbol.get_type","animateatlas/displayobject/SpriteSymbol.hx",474,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_477_set_type,"animateatlas.displayobject.SpriteSymbol","set_type",0x268e59d7,"animateatlas.displayobject.SpriteSymbol.set_type","animateatlas/displayobject/SpriteSymbol.hx",477,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_487_get_loopMode,"animateatlas.displayobject.SpriteSymbol","get_loopMode",0x9e393e10,"animateatlas.displayobject.SpriteSymbol.get_loopMode","animateatlas/displayobject/SpriteSymbol.hx",487,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_490_set_loopMode,"animateatlas.displayobject.SpriteSymbol","set_loopMode",0xb3326184,"animateatlas.displayobject.SpriteSymbol.set_loopMode","animateatlas/displayobject/SpriteSymbol.hx",490,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_500_get_symbolName,"animateatlas.displayobject.SpriteSymbol","get_symbolName",0x23d80c2c,"animateatlas.displayobject.SpriteSymbol.get_symbolName","animateatlas/displayobject/SpriteSymbol.hx",500,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_504_get_numLayers,"animateatlas.displayobject.SpriteSymbol","get_numLayers",0xa38b2e1f,"animateatlas.displayobject.SpriteSymbol.get_numLayers","animateatlas/displayobject/SpriteSymbol.hx",504,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_508_get_numFrames,"animateatlas.displayobject.SpriteSymbol","get_numFrames",0xf75fc843,"animateatlas.displayobject.SpriteSymbol.get_numFrames","animateatlas/displayobject/SpriteSymbol.hx",508,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_514_getLayerData,"animateatlas.displayobject.SpriteSymbol","getLayerData",0x42383f45,"animateatlas.displayobject.SpriteSymbol.getLayerData","animateatlas/displayobject/SpriteSymbol.hx",514,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_517_getFrameData,"animateatlas.displayobject.SpriteSymbol","getFrameData",0xed8b93a1,"animateatlas.displayobject.SpriteSymbol.getFrameData","animateatlas/displayobject/SpriteSymbol.hx",517,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_57_boot,"animateatlas.displayobject.SpriteSymbol","boot",0x26ad4652,"animateatlas.displayobject.SpriteSymbol.boot","animateatlas/displayobject/SpriteSymbol.hx",57,0xa3b5bfae)
namespace animateatlas{
namespace displayobject{

void SpriteSymbol_obj::__construct( ::Dynamic data, ::animateatlas::displayobject::SpriteAnimationLibrary library, ::openfl::display::BitmapData texture){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_28_new)
HXLINE(  55)		this->smoothing = true;
HXLINE(  53)		this->_zeroPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  52)		this->_tempRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  60)		super::__construct();
HXLINE(  61)		this->_data = data;
HXLINE(  62)		this->_library = library;
HXLINE(  63)		this->_composedFrame = -1;
HXLINE(  64)		this->_numLayers = ( (::Array< ::Dynamic>)( ::Dynamic(data->__Field(HX_("TIMELINE",81,fe,c0,56),::hx::paccDynamic))->__Field(HX_("LAYERS",82,c1,33,0b),::hx::paccDynamic)) )->length;
HXLINE(  65)		this->_numFrames = this->getNumFrames();
HXLINE(  66)		this->_frameLabels = this->_getFrameLabels();
HXLINE(  67)		this->_symbolName = ( (::String)(data->__Field(HX_("SYMBOL_name",d2,13,ee,07),::hx::paccDynamic)) );
HXLINE(  68)		this->_type = HX_("graphic",a8,5a,07,74);
HXLINE(  69)		this->_loopMode = HX_("loop",64,a6,b7,47);
HXLINE(  70)		this->_texture = texture;
HXLINE(  72)		this->createLayers();
HXLINE(  75)		{
HXLINE(  75)			int _g = 0;
HXDLIN(  75)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)( ::Dynamic(data->__Field(HX_("TIMELINE",81,fe,c0,56),::hx::paccDynamic))->__Field(HX_("LAYERS",82,c1,33,0b),::hx::paccDynamic)) );
HXDLIN(  75)			while((_g < _g1->length)){
HXLINE(  75)				 ::Dynamic layer = _g1->__get(_g);
HXDLIN(  75)				_g = (_g + 1);
HXLINE(  76)				if (::hx::IsNotNull( layer->__Field(HX_("FrameMap",8f,a0,a2,f6),::hx::paccDynamic) )) {
HXLINE(  77)					return;
            				}
HXLINE(  79)				 ::haxe::ds::IntMap map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  81)				{
HXLINE(  81)					int _g2 = 0;
HXDLIN(  81)					int _g3 = ( (::Array< ::Dynamic>)(layer->__Field(HX_("Frames",c6,23,1a,e1),::hx::paccDynamic)) )->length;
HXDLIN(  81)					while((_g2 < _g3)){
HXLINE(  81)						_g2 = (_g2 + 1);
HXDLIN(  81)						int i = (_g2 - 1);
HXLINE(  82)						 ::Dynamic frame =  ::Dynamic(layer->__Field(HX_("Frames",c6,23,1a,e1),::hx::paccDynamic))->__GetItem(i);
HXLINE(  83)						{
HXLINE(  83)							int _g = 0;
HXDLIN(  83)							int _g1 = ( (int)(frame->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic)) );
HXDLIN(  83)							while((_g < _g1)){
HXLINE(  83)								_g = (_g + 1);
HXDLIN(  83)								int j = (_g - 1);
HXLINE(  84)								map->set((i + j),frame);
            							}
            						}
            					}
            				}
HXLINE(  88)				layer->__SetField(HX_("FrameMap",8f,a0,a2,f6),map,::hx::paccDynamic);
            			}
            		}
            	}

Dynamic SpriteSymbol_obj::__CreateEmpty() { return new SpriteSymbol_obj; }

void *SpriteSymbol_obj::_hx_vtable = 0;

Dynamic SpriteSymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SpriteSymbol_obj > _hx_result = new SpriteSymbol_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SpriteSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4fa115b0) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x4fa115b0;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void SpriteSymbol_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_92_reset)
HXLINE(  93)		::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->identity();
HXLINE(  94)		 ::openfl::geom::Transform _hx_tmp = this->get_transform();
HXDLIN(  94)		_hx_tmp->set_matrix(::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->clone());
HXLINE(  95)		this->set_alpha(((Float)1.0));
HXLINE(  96)		this->_currentFrame = 0;
HXLINE(  97)		this->_composedFrame = -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,reset,(void))

void SpriteSymbol_obj::nextFrame(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_100_nextFrame)
HXLINE( 101)		if ((this->_loopMode != HX_("singleframe",a5,64,19,5d))) {
HXLINE( 102)			this->set_currentFrame((this->get_currentFrame() + 1));
            		}
HXLINE( 105)		this->moveMovieclip_MovieClips(1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,nextFrame,(void))

void SpriteSymbol_obj::prevFrame(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_108_prevFrame)
HXLINE( 109)		if ((this->_loopMode != HX_("singleframe",a5,64,19,5d))) {
HXLINE( 110)			this->set_currentFrame((this->get_currentFrame() - 1));
            		}
HXLINE( 113)		this->moveMovieclip_MovieClips(-1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,prevFrame,(void))

void SpriteSymbol_obj::moveMovieclip_MovieClips(::hx::Null< int >  __o_direction){
            		int direction = __o_direction.Default(1);
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_117_moveMovieclip_MovieClips)
HXLINE( 118)		if ((this->_type == HX_("movieclip",80,d6,41,2d))) {
HXLINE( 119)			this->set_currentFrame((this->get_currentFrame() + direction));
            		}
HXLINE( 122)		{
HXLINE( 122)			int _g = 0;
HXDLIN( 122)			int _g1 = this->_numLayers;
HXDLIN( 122)			while((_g < _g1)){
HXLINE( 122)				_g = (_g + 1);
HXDLIN( 122)				int l = (_g - 1);
HXLINE( 123)				 ::openfl::display::Sprite layer = this->getLayer(l);
HXLINE( 124)				int numElements = layer->get_numChildren();
HXLINE( 126)				{
HXLINE( 126)					int _g1 = 0;
HXDLIN( 126)					int _g2 = numElements;
HXDLIN( 126)					while((_g1 < _g2)){
HXLINE( 126)						_g1 = (_g1 + 1);
HXDLIN( 126)						int e = (_g1 - 1);
HXLINE( 127)						 ::animateatlas::displayobject::SpriteSymbol _hx_tmp;
HXDLIN( 127)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 127)							_hx_tmp = ::hx::TCast<  ::animateatlas::displayobject::SpriteSymbol >::cast(layer->getChildAt(e));
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 127)								{
HXLINE( 127)									null();
            								}
HXDLIN( 127)								_hx_tmp = null();
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
HXDLIN( 127)						_hx_tmp->moveMovieclip_MovieClips(direction);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,moveMovieclip_MovieClips,(void))

void SpriteSymbol_obj::update(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_132_update)
HXLINE( 133)		{
HXLINE( 133)			int _g = 0;
HXDLIN( 133)			int _g1 = this->_numLayers;
HXDLIN( 133)			while((_g < _g1)){
HXLINE( 133)				_g = (_g + 1);
HXDLIN( 133)				int i = (_g - 1);
HXLINE( 134)				this->updateLayer(i);
            			}
            		}
HXLINE( 137)		this->_composedFrame = this->_currentFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,update,(void))

void SpriteSymbol_obj::updateLayer(int layerIndex){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_141_updateLayer)
HXLINE( 142)		 ::openfl::display::Sprite layer = this->getLayer(layerIndex);
HXLINE( 143)		 ::Dynamic frameData = this->getFrameData(layerIndex,this->_currentFrame);
HXLINE( 144)		::Array< ::Dynamic> elements;
HXDLIN( 144)		if (::hx::IsNotNull( frameData )) {
HXLINE( 144)			elements = ( (::Array< ::Dynamic>)(frameData->__Field(HX_("elements",37,36,c4,83),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 144)			elements = null();
            		}
HXLINE( 145)		int numElements;
HXDLIN( 145)		if (::hx::IsNotNull( elements )) {
HXLINE( 145)			numElements = elements->length;
            		}
            		else {
HXLINE( 145)			numElements = 0;
            		}
HXLINE( 146)		{
HXLINE( 146)			int _g = 0;
HXDLIN( 146)			int _g1 = numElements;
HXDLIN( 146)			while((_g < _g1)){
HXLINE( 146)				_g = (_g + 1);
HXDLIN( 146)				int i = (_g - 1);
HXLINE( 147)				 ::Dynamic elementData = elements->__get(i)->__Field(HX_("SYMBOL_Instance",bc,4c,fe,3f),::hx::paccDynamic);
HXLINE( 149)				if (::hx::IsNull( elementData )) {
HXLINE( 150)					continue;
            				}
HXLINE( 154)				 ::animateatlas::displayobject::SpriteSymbol oldSymbol;
HXDLIN( 154)				if ((layer->get_numChildren() > i)) {
HXLINE( 154)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 154)						oldSymbol = ::hx::TCast<  ::animateatlas::displayobject::SpriteSymbol >::cast(layer->getChildAt(i));
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 156)							{
HXLINE( 156)								null();
            							}
HXLINE( 154)							oldSymbol = null();
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
            				else {
HXLINE( 154)					oldSymbol = null();
            				}
HXLINE( 159)				 ::animateatlas::displayobject::SpriteSymbol newSymbol = null();
HXLINE( 161)				::String symbolName = ( (::String)(elementData->__Field(HX_("SYMBOL_name",d2,13,ee,07),::hx::paccDynamic)) );
HXLINE( 163)				if (!(this->_library->hasSymbol(symbolName))) {
HXLINE( 164)					symbolName = HX_("___atlas_sprite___",c7,68,ad,ec);
            				}
HXLINE( 167)				bool _hx_tmp;
HXDLIN( 167)				if (::hx::IsNotNull( oldSymbol )) {
HXLINE( 167)					_hx_tmp = (oldSymbol->_symbolName == symbolName);
            				}
            				else {
HXLINE( 167)					_hx_tmp = false;
            				}
HXDLIN( 167)				if (_hx_tmp) {
HXLINE( 168)					newSymbol = oldSymbol;
            				}
            				else {
HXLINE( 170)					if (::hx::IsNotNull( oldSymbol )) {
HXLINE( 171)						if (::hx::IsNotNull( oldSymbol->parent )) {
HXLINE( 172)							oldSymbol->removeChild(oldSymbol);
            						}
HXLINE( 173)						this->_library->putSymbol(oldSymbol);
            					}
HXLINE( 176)					newSymbol = this->_library->getSymbol(symbolName);
HXLINE( 177)					layer->addChildAt(newSymbol,i);
            				}
HXLINE( 180)				newSymbol->setTransformationMatrix(elementData->__Field(HX_("Matrix3D",52,f1,a4,40),::hx::paccDynamic));
HXLINE( 181)				newSymbol->setBitmap(elementData->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic));
HXLINE( 182)				newSymbol->setFilterData(elementData->__Field(HX_("filters",bb,a1,46,09),::hx::paccDynamic));
HXLINE( 183)				newSymbol->setColor(elementData->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic));
HXLINE( 184)				newSymbol->setLoop(( (::String)(elementData->__Field(HX_("loop",64,a6,b7,47),::hx::paccDynamic)) ));
HXLINE( 185)				newSymbol->setType(( (::String)(elementData->__Field(HX_("symbolType",32,5a,06,24),::hx::paccDynamic)) ));
HXLINE( 189)				if ((newSymbol->get_type() == HX_("graphic",a8,5a,07,74))) {
HXLINE( 190)					int firstFrame = ( (int)(elementData->__Field(HX_("firstFrame",dd,c1,61,44),::hx::paccDynamic)) );
HXLINE( 191)					int frameAge = ::Std_obj::_hx_int(( (Float)((this->_currentFrame - ( (int)(frameData->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) ))) ));
HXLINE( 193)					if ((newSymbol->get_loopMode() == HX_("singleframe",a5,64,19,5d))) {
HXLINE( 194)						newSymbol->set_currentFrame(firstFrame);
            					}
            					else {
HXLINE( 195)						if ((newSymbol->get_loopMode() == HX_("loop",64,a6,b7,47))) {
HXLINE( 196)							newSymbol->set_currentFrame(::hx::Mod((firstFrame + frameAge),newSymbol->_numFrames));
            						}
            						else {
HXLINE( 198)							newSymbol->set_currentFrame((firstFrame + frameAge));
            						}
            					}
            				}
            			}
            		}
HXLINE( 204)		int numObsoleteSymbols = (layer->get_numChildren() - numElements);
HXLINE( 206)		{
HXLINE( 206)			int _g2 = 0;
HXDLIN( 206)			int _g3 = numObsoleteSymbols;
HXDLIN( 206)			while((_g2 < _g3)){
HXLINE( 206)				_g2 = (_g2 + 1);
HXDLIN( 206)				int i = (_g2 - 1);
HXLINE( 207)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 208)					 ::animateatlas::displayobject::SpriteSymbol oldSymbol = ::hx::TCast<  ::animateatlas::displayobject::SpriteSymbol >::cast(layer->removeChildAt(numElements));
HXLINE( 209)					if (::hx::IsNotNull( oldSymbol )) {
HXLINE( 210)						this->_library->putSymbol(oldSymbol);
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 211)						{
HXLINE( 211)							null();
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,updateLayer,(void))

void SpriteSymbol_obj::createLayers(){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_215_createLayers)
HXLINE( 217)		if (::hx::IsNotNull( this->_layers )) {
HXLINE( 218)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("You must not call this twice",85,de,40,3e),null())));
            		}
HXLINE( 220)		this->_layers = ::Array_obj< ::Dynamic>::__new();
HXLINE( 222)		if ((this->_numLayers <= 1)) {
HXLINE( 223)			this->_layers->push(::hx::ObjectPtr<OBJ_>(this));
            		}
            		else {
HXLINE( 225)			int _g = 0;
HXDLIN( 225)			int _g1 = this->_numLayers;
HXDLIN( 225)			while((_g < _g1)){
HXLINE( 225)				_g = (_g + 1);
HXDLIN( 225)				int i = (_g - 1);
HXLINE( 226)				 ::openfl::display::Sprite layer =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 227)				layer->set_name(( (::String)(this->getLayerData(i)->__Field(HX_("Layer_name",d9,da,23,05),::hx::paccDynamic)) ));
HXLINE( 228)				this->addChild(layer);
HXLINE( 229)				this->_layers->push(layer);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,createLayers,(void))

void SpriteSymbol_obj::setBitmap( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_236_setBitmap)
HXDLIN( 236)		if (::hx::IsNotNull( data )) {
HXLINE( 237)			 ::Dynamic spriteData = this->_library->getSpriteData(( (::String)((data->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_("",00,00,00,00))) ));
HXLINE( 239)			if (::hx::IsNull( this->_bitmap )) {
HXLINE( 240)				this->_bitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,1,null(),null()),1,this->smoothing);
HXLINE( 241)				this->addChild(this->_bitmap);
            			}
HXLINE( 244)			bool _hx_tmp;
HXDLIN( 244)			bool _hx_tmp1;
HXDLIN( 244)			bool _hx_tmp2;
HXDLIN( 244)			if (::hx::IsEq( this->_tempRect->x,spriteData->__Field(HX_("x",78,00,00,00),::hx::paccDynamic) )) {
HXLINE( 244)				_hx_tmp2 = ::hx::IsNotEq( this->_tempRect->y,spriteData->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 244)				_hx_tmp2 = true;
            			}
HXDLIN( 244)			if (!(_hx_tmp2)) {
HXLINE( 244)				_hx_tmp1 = ::hx::IsNotEq( this->_tempRect->width,spriteData->__Field(HX_("w",77,00,00,00),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 244)				_hx_tmp1 = true;
            			}
HXDLIN( 244)			if (!(_hx_tmp1)) {
HXLINE( 244)				_hx_tmp = ::hx::IsNotEq( this->_tempRect->height,spriteData->__Field(HX_("h",68,00,00,00),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 244)				_hx_tmp = true;
            			}
HXDLIN( 244)			if (_hx_tmp) {
HXLINE( 245)				 ::openfl::display::BitmapData clippedTexture =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,( (int)(spriteData->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) ),( (int)(spriteData->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) ),null(),null());
HXLINE( 246)				this->_tempRect->setTo(( (Float)(spriteData->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ),( (Float)(spriteData->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ),( (Float)(spriteData->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) ),( (Float)(spriteData->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) ));
HXLINE( 247)				clippedTexture->copyPixels(this->_texture,this->_tempRect,this->_zeroPoint,null(),null(),null());
HXLINE( 248)				this->_bitmap->set_bitmapData(clippedTexture);
HXLINE( 249)				this->_bitmap->smoothing = this->smoothing;
            			}
HXLINE( 254)			if (( (bool)(spriteData->__Field(HX_("rotated",a9,49,1d,f1),::hx::paccDynamic)) )) {
HXLINE( 255)				this->_bitmap->set_rotation(( (Float)(-90) ));
HXLINE( 256)				this->_bitmap->set_x(( (Float)( ::Dynamic(data->__Field(HX_("Position",c9,5c,ac,a4),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE( 257)				this->_bitmap->set_y(( (Float)(( ::Dynamic(data->__Field(HX_("Position",c9,5c,ac,a4),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) + spriteData->__Field(HX_("w",77,00,00,00),::hx::paccDynamic))) ));
            			}
            			else {
HXLINE( 259)				this->_bitmap->set_rotation(( (Float)(0) ));
HXLINE( 260)				this->_bitmap->set_x(( (Float)( ::Dynamic(data->__Field(HX_("Position",c9,5c,ac,a4),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE( 261)				this->_bitmap->set_y(( (Float)( ::Dynamic(data->__Field(HX_("Position",c9,5c,ac,a4),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
            			}
HXLINE( 264)			this->addChildAt(this->_bitmap,0);
            		}
            		else {
HXLINE( 265)			if (::hx::IsNotNull( this->_bitmap )) {
HXLINE( 266)				if (::hx::IsNotNull( this->_bitmap->parent )) {
HXLINE( 267)					this->_bitmap->parent->removeChild(this->_bitmap);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setBitmap,(void))

void SpriteSymbol_obj::setFilterData( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_271_setFilterData)
HXLINE( 272)		 ::openfl::filters::BlurFilter blur;
HXLINE( 273)		 ::openfl::filters::GlowFilter glow;
HXLINE( 274)		if (::hx::IsNotNull( data )) {
HXLINE( 275)			if (::hx::IsNotNull( data->__Field(HX_("BlurFilter",df,d1,71,f3),::hx::paccDynamic) )) {
HXLINE( 276)				blur =  ::openfl::filters::BlurFilter_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 277)				blur->set_blurX(( (Float)( ::Dynamic(data->__Field(HX_("BlurFilter",df,d1,71,f3),::hx::paccDynamic))->__Field(HX_("blurX",d1,0f,01,b5),::hx::paccDynamic)) ));
HXLINE( 278)				blur->set_blurY(( (Float)( ::Dynamic(data->__Field(HX_("BlurFilter",df,d1,71,f3),::hx::paccDynamic))->__Field(HX_("blurY",d2,0f,01,b5),::hx::paccDynamic)) ));
HXLINE( 279)				blur->set_quality(( (int)( ::Dynamic(data->__Field(HX_("BlurFilter",df,d1,71,f3),::hx::paccDynamic))->__Field(HX_("quality",bf,04,4c,44),::hx::paccDynamic)) ));
            			}
HXLINE( 283)			bool _hx_tmp = ::hx::IsNotNull( data->__Field(HX_("GlowFilter",45,ce,a2,2d),::hx::paccDynamic) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setFilterData,(void))

void SpriteSymbol_obj::setTransformationMatrix( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_305_setTransformationMatrix)
HXLINE( 306)		::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->setTo(( (Float)(data->__Field(HX_("m00",ad,df,52,00),::hx::paccDynamic)) ),( (Float)(data->__Field(HX_("m01",ae,df,52,00),::hx::paccDynamic)) ),( (Float)(data->__Field(HX_("m10",8c,e0,52,00),::hx::paccDynamic)) ),( (Float)(data->__Field(HX_("m11",8d,e0,52,00),::hx::paccDynamic)) ),( (Float)(data->__Field(HX_("m30",4a,e2,52,00),::hx::paccDynamic)) ),( (Float)(data->__Field(HX_("m31",4b,e2,52,00),::hx::paccDynamic)) ));
HXLINE( 307)		bool _hx_tmp;
HXDLIN( 307)		bool _hx_tmp1;
HXDLIN( 307)		bool _hx_tmp2;
HXDLIN( 307)		bool _hx_tmp3;
HXDLIN( 307)		bool _hx_tmp4;
HXDLIN( 307)		Float _hx_tmp5 = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->a;
HXDLIN( 307)		if ((_hx_tmp5 == this->get_transform()->get_matrix()->a)) {
HXLINE( 307)			Float _hx_tmp = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->b;
HXDLIN( 307)			_hx_tmp4 = (_hx_tmp != this->get_transform()->get_matrix()->b);
            		}
            		else {
HXLINE( 307)			_hx_tmp4 = true;
            		}
HXDLIN( 307)		if (!(_hx_tmp4)) {
HXLINE( 307)			Float _hx_tmp = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->c;
HXDLIN( 307)			_hx_tmp3 = (_hx_tmp != this->get_transform()->get_matrix()->c);
            		}
            		else {
HXLINE( 307)			_hx_tmp3 = true;
            		}
HXDLIN( 307)		if (!(_hx_tmp3)) {
HXLINE( 307)			Float _hx_tmp = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->d;
HXDLIN( 307)			_hx_tmp2 = (_hx_tmp != this->get_transform()->get_matrix()->d);
            		}
            		else {
HXLINE( 307)			_hx_tmp2 = true;
            		}
HXDLIN( 307)		if (!(_hx_tmp2)) {
HXLINE( 308)			Float _hx_tmp = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->tx;
HXLINE( 307)			_hx_tmp1 = (_hx_tmp != this->get_transform()->get_matrix()->tx);
            		}
            		else {
HXLINE( 307)			_hx_tmp1 = true;
            		}
HXDLIN( 307)		if (!(_hx_tmp1)) {
HXLINE( 308)			Float _hx_tmp1 = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->ty;
HXLINE( 307)			_hx_tmp = (_hx_tmp1 != this->get_transform()->get_matrix()->ty);
            		}
            		else {
HXLINE( 307)			_hx_tmp = true;
            		}
HXDLIN( 307)		if (_hx_tmp) {
HXLINE( 309)			 ::openfl::geom::Transform _hx_tmp = this->get_transform();
HXDLIN( 309)			_hx_tmp->set_matrix(::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->clone());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setTransformationMatrix,(void))

void SpriteSymbol_obj::setColor( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_312_setColor)
HXLINE( 313)		 ::openfl::geom::ColorTransform newTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 314)		if (::hx::IsNotNull( data )) {
HXLINE( 315)			Float _hx_tmp;
HXDLIN( 315)			if (::hx::IsNull( data->__Field(HX_("redOffset",c4,37,9e,53),::hx::paccDynamic) )) {
HXLINE( 315)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE( 315)				_hx_tmp = ( (Float)(data->__Field(HX_("redOffset",c4,37,9e,53),::hx::paccDynamic)) );
            			}
HXDLIN( 315)			newTransform->redOffset = _hx_tmp;
HXLINE( 316)			Float _hx_tmp1;
HXDLIN( 316)			if (::hx::IsNull( data->__Field(HX_("greenOffset",b6,0e,d9,b7),::hx::paccDynamic) )) {
HXLINE( 316)				_hx_tmp1 = ( (Float)(0) );
            			}
            			else {
HXLINE( 316)				_hx_tmp1 = ( (Float)(data->__Field(HX_("greenOffset",b6,0e,d9,b7),::hx::paccDynamic)) );
            			}
HXDLIN( 316)			newTransform->greenOffset = _hx_tmp1;
HXLINE( 317)			Float _hx_tmp2;
HXDLIN( 317)			if (::hx::IsNull( data->__Field(HX_("blueOffset",cd,3d,34,bb),::hx::paccDynamic) )) {
HXLINE( 317)				_hx_tmp2 = ( (Float)(0) );
            			}
            			else {
HXLINE( 317)				_hx_tmp2 = ( (Float)(data->__Field(HX_("blueOffset",cd,3d,34,bb),::hx::paccDynamic)) );
            			}
HXDLIN( 317)			newTransform->blueOffset = _hx_tmp2;
HXLINE( 318)			Float _hx_tmp3;
HXDLIN( 318)			if (::hx::IsNull( data->__Field(HX_("AlphaOffset",71,25,76,b4),::hx::paccDynamic) )) {
HXLINE( 318)				_hx_tmp3 = ( (Float)(0) );
            			}
            			else {
HXLINE( 318)				_hx_tmp3 = ( (Float)(data->__Field(HX_("AlphaOffset",71,25,76,b4),::hx::paccDynamic)) );
            			}
HXDLIN( 318)			newTransform->alphaOffset = _hx_tmp3;
HXLINE( 320)			Float _hx_tmp4;
HXDLIN( 320)			if (::hx::IsNull( data->__Field(HX_("RedMultiplier",12,44,da,96),::hx::paccDynamic) )) {
HXLINE( 320)				_hx_tmp4 = ( (Float)(1) );
            			}
            			else {
HXLINE( 320)				_hx_tmp4 = ( (Float)(data->__Field(HX_("RedMultiplier",12,44,da,96),::hx::paccDynamic)) );
            			}
HXDLIN( 320)			newTransform->redMultiplier = _hx_tmp4;
HXLINE( 321)			Float _hx_tmp5;
HXDLIN( 321)			if (::hx::IsNull( data->__Field(HX_("greenMultiplier",24,2c,40,6f),::hx::paccDynamic) )) {
HXLINE( 321)				_hx_tmp5 = ( (Float)(1) );
            			}
            			else {
HXLINE( 321)				_hx_tmp5 = ( (Float)(data->__Field(HX_("greenMultiplier",24,2c,40,6f),::hx::paccDynamic)) );
            			}
HXDLIN( 321)			newTransform->greenMultiplier = _hx_tmp5;
HXLINE( 322)			Float _hx_tmp6;
HXDLIN( 322)			if (::hx::IsNull( data->__Field(HX_("blueMultiplier",bb,32,96,cf),::hx::paccDynamic) )) {
HXLINE( 322)				_hx_tmp6 = ( (Float)(1) );
            			}
            			else {
HXLINE( 322)				_hx_tmp6 = ( (Float)(data->__Field(HX_("blueMultiplier",bb,32,96,cf),::hx::paccDynamic)) );
            			}
HXDLIN( 322)			newTransform->blueMultiplier = _hx_tmp6;
HXLINE( 323)			Float _hx_tmp7;
HXDLIN( 323)			if (::hx::IsNull( data->__Field(HX_("alphaMultiplier",7f,b4,82,9a),::hx::paccDynamic) )) {
HXLINE( 323)				_hx_tmp7 = ( (Float)(1) );
            			}
            			else {
HXLINE( 323)				_hx_tmp7 = ( (Float)(data->__Field(HX_("alphaMultiplier",7f,b4,82,9a),::hx::paccDynamic)) );
            			}
HXDLIN( 323)			newTransform->alphaMultiplier = _hx_tmp7;
            		}
HXLINE( 325)		this->get_transform()->set_colorTransform(newTransform);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setColor,(void))

void SpriteSymbol_obj::setLoop(::String data){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_330_setLoop)
HXDLIN( 330)		if (::hx::IsNotNull( data )) {
HXLINE( 331)			this->_loopMode = data;
            		}
            		else {
HXLINE( 333)			this->_loopMode = HX_("loop",64,a6,b7,47);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setLoop,(void))

void SpriteSymbol_obj::setType(::String data){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_338_setType)
HXDLIN( 338)		if (::hx::IsNotNull( data )) {
HXLINE( 339)			this->_type = data;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setType,(void))

int SpriteSymbol_obj::getNumFrames(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_343_getNumFrames)
HXLINE( 344)		int numFrames = 0;
HXLINE( 346)		{
HXLINE( 346)			int _g = 0;
HXDLIN( 346)			int _g1 = this->_numLayers;
HXDLIN( 346)			while((_g < _g1)){
HXLINE( 346)				_g = (_g + 1);
HXDLIN( 346)				int i = (_g - 1);
HXLINE( 347)				 ::Dynamic layer = this->getLayerData(i);
HXLINE( 348)				::Array< ::Dynamic> frameDates;
HXDLIN( 348)				if (::hx::IsNull( layer )) {
HXLINE( 348)					frameDates = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 348)					frameDates = ( (::Array< ::Dynamic>)(layer->__Field(HX_("Frames",c6,23,1a,e1),::hx::paccDynamic)) );
            				}
HXLINE( 349)				int numFrameDates;
HXDLIN( 349)				if (::hx::IsNotNull( frameDates )) {
HXLINE( 349)					numFrameDates = frameDates->length;
            				}
            				else {
HXLINE( 349)					numFrameDates = 0;
            				}
HXLINE( 350)				int layerNumFrames;
HXDLIN( 350)				if ((numFrameDates != 0)) {
HXLINE( 350)					layerNumFrames = ( (int)(frameDates->__get(0)->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 350)					layerNumFrames = 0;
            				}
HXLINE( 352)				{
HXLINE( 352)					int _g1 = 0;
HXDLIN( 352)					int _g2 = numFrameDates;
HXDLIN( 352)					while((_g1 < _g2)){
HXLINE( 352)						_g1 = (_g1 + 1);
HXDLIN( 352)						int j = (_g1 - 1);
HXLINE( 353)						layerNumFrames = ( (int)((layerNumFrames + frameDates->__get(j)->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic))) );
            					}
            				}
HXLINE( 356)				if ((layerNumFrames > numFrames)) {
HXLINE( 357)					numFrames = layerNumFrames;
            				}
            			}
            		}
HXLINE( 361)		if ((numFrames == 0)) {
HXLINE( 361)			return 1;
            		}
            		else {
HXLINE( 361)			return numFrames;
            		}
HXDLIN( 361)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,getNumFrames,return )

::Array< ::Dynamic> SpriteSymbol_obj::_getFrameLabels(){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_364__getFrameLabels)
HXLINE( 365)		::Array< ::Dynamic> labels = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 367)		{
HXLINE( 367)			int _g = 0;
HXDLIN( 367)			int _g1 = this->_numLayers;
HXDLIN( 367)			while((_g < _g1)){
HXLINE( 367)				_g = (_g + 1);
HXDLIN( 367)				int i = (_g - 1);
HXLINE( 368)				 ::Dynamic layer = this->getLayerData(i);
HXLINE( 369)				::Array< ::Dynamic> frameDates;
HXDLIN( 369)				if (::hx::IsNull( layer )) {
HXLINE( 369)					frameDates = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 369)					frameDates = ( (::Array< ::Dynamic>)(layer->__Field(HX_("Frames",c6,23,1a,e1),::hx::paccDynamic)) );
            				}
HXLINE( 370)				int numFrameDates;
HXDLIN( 370)				if (::hx::IsNotNull( frameDates )) {
HXLINE( 370)					numFrameDates = frameDates->length;
            				}
            				else {
HXLINE( 370)					numFrameDates = 0;
            				}
HXLINE( 372)				{
HXLINE( 372)					int _g1 = 0;
HXDLIN( 372)					int _g2 = numFrameDates;
HXDLIN( 372)					while((_g1 < _g2)){
HXLINE( 372)						_g1 = (_g1 + 1);
HXDLIN( 372)						int j = (_g1 - 1);
HXLINE( 373)						 ::Dynamic frameData = frameDates->__get(j);
HXLINE( 374)						if (::hx::IsNotNull( frameData->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) )) {
HXLINE( 375)							labels->push( ::openfl::display::FrameLabel_obj::__alloc( HX_CTX ,( (::String)(frameData->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),( (int)(frameData->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) )));
            						}
            					}
            				}
            			}
            		}
HXLINE( 379)		labels->sort(this->sortLabels_dyn());
HXLINE( 380)		return labels;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,_getFrameLabels,return )

::Array< ::String > SpriteSymbol_obj::getFrameLabels(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_384_getFrameLabels)
HXDLIN( 384)		::Array< ::Dynamic> _this = this->_frameLabels;
HXDLIN( 384)		::Array< ::String > result = ::Array_obj< ::String >::__new(_this->length);
HXDLIN( 384)		{
HXDLIN( 384)			int _g = 0;
HXDLIN( 384)			int _g1 = _this->length;
HXDLIN( 384)			while((_g < _g1)){
HXDLIN( 384)				_g = (_g + 1);
HXDLIN( 384)				int i = (_g - 1);
HXDLIN( 384)				{
HXDLIN( 384)					::String inValue = ( ( ::openfl::display::FrameLabel)(_hx_array_unsafe_get(_this,i)) )->name;
HXDLIN( 384)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN( 384)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,getFrameLabels,return )

int SpriteSymbol_obj::sortLabels( ::openfl::display::FrameLabel i1, ::openfl::display::FrameLabel i2){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_389_sortLabels)
HXLINE( 390)		int f1 = i1->frame;
HXLINE( 391)		int f2 = i2->frame;
HXLINE( 392)		if ((f1 < f2)) {
HXLINE( 393)			return -1;
            		}
            		else {
HXLINE( 394)			if ((f1 > f2)) {
HXLINE( 395)				return 1;
            			}
            			else {
HXLINE( 397)				return 0;
            			}
            		}
HXLINE( 392)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SpriteSymbol_obj,sortLabels,return )

 ::openfl::display::Sprite SpriteSymbol_obj::getLayer(int layerIndex){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_402_getLayer)
HXDLIN( 402)		return this->_layers->__get(layerIndex).StaticCast<  ::openfl::display::Sprite >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,getLayer,return )

 ::openfl::display::BitmapData SpriteSymbol_obj::getTexture(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_407_getTexture)
HXDLIN( 407)		return this->_texture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,getTexture,return )

::String SpriteSymbol_obj::getNextLabel(::String afterLabel){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_410_getNextLabel)
HXLINE( 411)		int numLabels = this->_frameLabels->length;
HXLINE( 412)		::String startFrame;
HXDLIN( 412)		if (::hx::IsNull( afterLabel )) {
HXLINE( 412)			startFrame = this->get_currentLabel();
            		}
            		else {
HXLINE( 412)			startFrame = afterLabel;
            		}
HXDLIN( 412)		int startFrame1 = this->getFrame(startFrame);
HXLINE( 414)		{
HXLINE( 414)			int _g = 0;
HXDLIN( 414)			int _g1 = numLabels;
HXDLIN( 414)			while((_g < _g1)){
HXLINE( 414)				_g = (_g + 1);
HXDLIN( 414)				int i = (_g - 1);
HXLINE( 415)				 ::openfl::display::FrameLabel label = this->_frameLabels->__get(i).StaticCast<  ::openfl::display::FrameLabel >();
HXLINE( 416)				if ((label->frame > startFrame1)) {
HXLINE( 417)					return label->name;
            				}
            			}
            		}
HXLINE( 421)		if (::hx::IsNotNull( this->_frameLabels )) {
HXLINE( 421)			return this->_frameLabels->__get(0).StaticCast<  ::openfl::display::FrameLabel >()->name;
            		}
            		else {
HXLINE( 421)			return null();
            		}
HXDLIN( 421)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,getNextLabel,return )

::String SpriteSymbol_obj::get_currentLabel(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_424_get_currentLabel)
HXLINE( 425)		int numLabels = this->_frameLabels->length;
HXLINE( 426)		 ::openfl::display::FrameLabel highestLabel;
HXDLIN( 426)		if ((numLabels != 0)) {
HXLINE( 426)			highestLabel = this->_frameLabels->__get(0).StaticCast<  ::openfl::display::FrameLabel >();
            		}
            		else {
HXLINE( 426)			highestLabel = null();
            		}
HXLINE( 428)		{
HXLINE( 428)			int _g = 1;
HXDLIN( 428)			int _g1 = numLabels;
HXDLIN( 428)			while((_g < _g1)){
HXLINE( 428)				_g = (_g + 1);
HXDLIN( 428)				int i = (_g - 1);
HXLINE( 429)				 ::openfl::display::FrameLabel label = this->_frameLabels->__get(i).StaticCast<  ::openfl::display::FrameLabel >();
HXLINE( 431)				if ((label->frame <= this->_currentFrame)) {
HXLINE( 432)					highestLabel = label;
            				}
            				else {
HXLINE( 434)					goto _hx_goto_36;
            				}
            			}
            			_hx_goto_36:;
            		}
HXLINE( 438)		if (::hx::IsNotNull( highestLabel )) {
HXLINE( 438)			return highestLabel->name;
            		}
            		else {
HXLINE( 438)			return null();
            		}
HXDLIN( 438)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_currentLabel,return )

int SpriteSymbol_obj::getFrame(::String label){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_441_getFrame)
HXLINE( 442)		int numLabels = this->_frameLabels->length;
HXLINE( 443)		{
HXLINE( 443)			int _g = 0;
HXDLIN( 443)			int _g1 = numLabels;
HXDLIN( 443)			while((_g < _g1)){
HXLINE( 443)				_g = (_g + 1);
HXDLIN( 443)				int i = (_g - 1);
HXLINE( 444)				 ::openfl::display::FrameLabel frameLabel = this->_frameLabels->__get(i).StaticCast<  ::openfl::display::FrameLabel >();
HXLINE( 445)				if ((frameLabel->name == label)) {
HXLINE( 446)					return frameLabel->frame;
            				}
            			}
            		}
HXLINE( 449)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,getFrame,return )

int SpriteSymbol_obj::get_currentFrame(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_453_get_currentFrame)
HXDLIN( 453)		return this->_currentFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_currentFrame,return )

int SpriteSymbol_obj::set_currentFrame(int value){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_456_set_currentFrame)
HXLINE( 457)		while((value < 0)){
HXLINE( 458)			value = (value + this->_numFrames);
            		}
HXLINE( 461)		if ((this->_loopMode == HX_("playonce",75,b5,ec,4e))) {
HXLINE( 462)			this->_currentFrame = ::Std_obj::_hx_int(::Math_obj::min(::Math_obj::max(( (Float)(value) ),( (Float)(0) )),( (Float)((this->_numFrames - 1)) )));
            		}
            		else {
HXLINE( 464)			this->_currentFrame = ::Std_obj::_hx_int(::Math_obj::abs(( (Float)(::hx::Mod(value,this->_numFrames)) )));
            		}
HXLINE( 467)		if ((this->_composedFrame != this->_currentFrame)) {
HXLINE( 468)			this->update();
            		}
HXLINE( 470)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,set_currentFrame,return )

::String SpriteSymbol_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_474_get_type)
HXDLIN( 474)		return this->_type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_type,return )

::String SpriteSymbol_obj::set_type(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_477_set_type)
HXLINE( 478)		if (::animateatlas::_HelperEnums::SymbolType_Impl__obj::isValid(value)) {
HXLINE( 479)			this->_type = value;
            		}
            		else {
HXLINE( 481)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Invalid symbol type: ",9f,24,99,f4) + value))));
            		}
HXLINE( 483)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,set_type,return )

::String SpriteSymbol_obj::get_loopMode(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_487_get_loopMode)
HXDLIN( 487)		return this->_loopMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_loopMode,return )

::String SpriteSymbol_obj::set_loopMode(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_490_set_loopMode)
HXLINE( 491)		if (::animateatlas::_HelperEnums::LoopMode_Impl__obj::isValid(value)) {
HXLINE( 492)			this->_loopMode = value;
            		}
            		else {
HXLINE( 494)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Invalid loop mode: ",3c,88,fe,85) + value))));
            		}
HXLINE( 496)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,set_loopMode,return )

::String SpriteSymbol_obj::get_symbolName(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_500_get_symbolName)
HXDLIN( 500)		return this->_symbolName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_symbolName,return )

int SpriteSymbol_obj::get_numLayers(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_504_get_numLayers)
HXDLIN( 504)		return this->_numLayers;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_numLayers,return )

int SpriteSymbol_obj::get_numFrames(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_508_get_numFrames)
HXDLIN( 508)		return this->_numFrames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_numFrames,return )

 ::Dynamic SpriteSymbol_obj::getLayerData(int layerIndex){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_514_getLayerData)
HXDLIN( 514)		return  ::Dynamic( ::Dynamic(this->_data->__Field(HX_("TIMELINE",81,fe,c0,56),::hx::paccDynamic))->__Field(HX_("LAYERS",82,c1,33,0b),::hx::paccDynamic))->__GetItem(layerIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,getLayerData,return )

 ::Dynamic SpriteSymbol_obj::getFrameData(int layerIndex,int frameIndex){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_517_getFrameData)
HXLINE( 518)		 ::Dynamic layer = this->getLayerData(layerIndex);
HXLINE( 519)		if (::hx::IsNull( layer )) {
HXLINE( 520)			return null();
            		}
HXLINE( 522)		return ( ( ::haxe::ds::IntMap)( ::Dynamic(layer->__Field(HX_("FrameMap",8f,a0,a2,f6),::hx::paccDynamic))) )->get(frameIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SpriteSymbol_obj,getFrameData,return )

 ::openfl::geom::Matrix SpriteSymbol_obj::sMatrix;


::hx::ObjectPtr< SpriteSymbol_obj > SpriteSymbol_obj::__new( ::Dynamic data, ::animateatlas::displayobject::SpriteAnimationLibrary library, ::openfl::display::BitmapData texture) {
	::hx::ObjectPtr< SpriteSymbol_obj > __this = new SpriteSymbol_obj();
	__this->__construct(data,library,texture);
	return __this;
}

::hx::ObjectPtr< SpriteSymbol_obj > SpriteSymbol_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic data, ::animateatlas::displayobject::SpriteAnimationLibrary library, ::openfl::display::BitmapData texture) {
	SpriteSymbol_obj *__this = (SpriteSymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SpriteSymbol_obj), true, "animateatlas.displayobject.SpriteSymbol"));
	*(void **)__this = SpriteSymbol_obj::_hx_vtable;
	__this->__construct(data,library,texture);
	return __this;
}

SpriteSymbol_obj::SpriteSymbol_obj()
{
}

void SpriteSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteSymbol);
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_library,"_library");
	HX_MARK_MEMBER_NAME(_symbolName,"_symbolName");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_loopMode,"_loopMode");
	HX_MARK_MEMBER_NAME(_currentFrame,"_currentFrame");
	HX_MARK_MEMBER_NAME(_composedFrame,"_composedFrame");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_numFrames,"_numFrames");
	HX_MARK_MEMBER_NAME(_numLayers,"_numLayers");
	HX_MARK_MEMBER_NAME(_frameLabels,"_frameLabels");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_layers,"_layers");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_tempRect,"_tempRect");
	HX_MARK_MEMBER_NAME(_zeroPoint,"_zeroPoint");
	HX_MARK_MEMBER_NAME(filterHelper,"filterHelper");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpriteSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_library,"_library");
	HX_VISIT_MEMBER_NAME(_symbolName,"_symbolName");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_loopMode,"_loopMode");
	HX_VISIT_MEMBER_NAME(_currentFrame,"_currentFrame");
	HX_VISIT_MEMBER_NAME(_composedFrame,"_composedFrame");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_numFrames,"_numFrames");
	HX_VISIT_MEMBER_NAME(_numLayers,"_numLayers");
	HX_VISIT_MEMBER_NAME(_frameLabels,"_frameLabels");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_layers,"_layers");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_tempRect,"_tempRect");
	HX_VISIT_MEMBER_NAME(_zeroPoint,"_zeroPoint");
	HX_VISIT_MEMBER_NAME(filterHelper,"filterHelper");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SpriteSymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_type() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		if (HX_FIELD_EQ(inName,"_type") ) { return ::hx::Val( _type ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return ::hx::Val( _bitmap ); }
		if (HX_FIELD_EQ(inName,"_layers") ) { return ::hx::Val( _layers ); }
		if (HX_FIELD_EQ(inName,"setLoop") ) { return ::hx::Val( setLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"setType") ) { return ::hx::Val( setType_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_loopMode() ); }
		if (HX_FIELD_EQ(inName,"_library") ) { return ::hx::Val( _library ); }
		if (HX_FIELD_EQ(inName,"_texture") ) { return ::hx::Val( _texture ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return ::hx::Val( getLayer_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFrame") ) { return ::hx::Val( getFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return ::hx::Val( set_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numLayers") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numLayers() ); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numFrames() ); }
		if (HX_FIELD_EQ(inName,"_loopMode") ) { return ::hx::Val( _loopMode ); }
		if (HX_FIELD_EQ(inName,"_tempRect") ) { return ::hx::Val( _tempRect ); }
		if (HX_FIELD_EQ(inName,"smoothing") ) { return ::hx::Val( smoothing ); }
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return ::hx::Val( nextFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return ::hx::Val( prevFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBitmap") ) { return ::hx::Val( setBitmap_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"symbolName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_symbolName() ); }
		if (HX_FIELD_EQ(inName,"_numFrames") ) { return ::hx::Val( _numFrames ); }
		if (HX_FIELD_EQ(inName,"_numLayers") ) { return ::hx::Val( _numLayers ); }
		if (HX_FIELD_EQ(inName,"_zeroPoint") ) { return ::hx::Val( _zeroPoint ); }
		if (HX_FIELD_EQ(inName,"sortLabels") ) { return ::hx::Val( sortLabels_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return ::hx::Val( getTexture_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_symbolName") ) { return ::hx::Val( _symbolName ); }
		if (HX_FIELD_EQ(inName,"updateLayer") ) { return ::hx::Val( updateLayer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLabel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentLabel() ); }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentFrame() ); }
		if (HX_FIELD_EQ(inName,"_frameLabels") ) { return ::hx::Val( _frameLabels ); }
		if (HX_FIELD_EQ(inName,"filterHelper") ) { return ::hx::Val( filterHelper ); }
		if (HX_FIELD_EQ(inName,"createLayers") ) { return ::hx::Val( createLayers_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNumFrames") ) { return ::hx::Val( getNumFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNextLabel") ) { return ::hx::Val( getNextLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_loopMode") ) { return ::hx::Val( get_loopMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_loopMode") ) { return ::hx::Val( set_loopMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLayerData") ) { return ::hx::Val( getLayerData_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFrameData") ) { return ::hx::Val( getFrameData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentFrame") ) { return ::hx::Val( _currentFrame ); }
		if (HX_FIELD_EQ(inName,"setFilterData") ) { return ::hx::Val( setFilterData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numLayers") ) { return ::hx::Val( get_numLayers_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return ::hx::Val( get_numFrames_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_composedFrame") ) { return ::hx::Val( _composedFrame ); }
		if (HX_FIELD_EQ(inName,"getFrameLabels") ) { return ::hx::Val( getFrameLabels_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_symbolName") ) { return ::hx::Val( get_symbolName_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return ::hx::Val( _colorTransform ); }
		if (HX_FIELD_EQ(inName,"_getFrameLabels") ) { return ::hx::Val( _getFrameLabels_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_currentLabel") ) { return ::hx::Val( get_currentLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return ::hx::Val( get_currentFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_currentFrame") ) { return ::hx::Val( set_currentFrame_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setTransformationMatrix") ) { return ::hx::Val( setTransformationMatrix_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"moveMovieclip_MovieClips") ) { return ::hx::Val( moveMovieclip_MovieClips_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SpriteSymbol_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sMatrix") ) { outValue = ( sMatrix ); return true; }
	}
	return false;
}

::hx::Val SpriteSymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_type(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layers") ) { _layers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_loopMode(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"_library") ) { _library=inValue.Cast<  ::animateatlas::displayobject::SpriteAnimationLibrary >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_loopMode") ) { _loopMode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tempRect") ) { _tempRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_numFrames") ) { _numFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numLayers") ) { _numLayers=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zeroPoint") ) { _zeroPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_symbolName") ) { _symbolName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_currentFrame(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_frameLabels") ) { _frameLabels=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterHelper") ) { filterHelper=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentFrame") ) { _currentFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_composedFrame") ) { _composedFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SpriteSymbol_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sMatrix") ) { sMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

void SpriteSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentLabel",fb,f2,ba,b6));
	outFields->push(HX_("currentFrame",34,5d,8f,4d));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("loopMode",e7,a7,ce,3a));
	outFields->push(HX_("symbolName",c3,d9,fc,1f));
	outFields->push(HX_("numLayers",68,60,b2,09));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("_data",09,72,74,f5));
	outFields->push(HX_("_library",7c,80,28,79));
	outFields->push(HX_("_symbolName",e2,a6,86,f2));
	outFields->push(HX_("_type",99,0e,1a,00));
	outFields->push(HX_("_loopMode",46,9f,64,82));
	outFields->push(HX_("_currentFrame",13,f0,fd,2f));
	outFields->push(HX_("_composedFrame",fc,bf,b9,de));
	outFields->push(HX_("_bitmap",8e,21,83,5f));
	outFields->push(HX_("_numFrames",4d,76,29,b9));
	outFields->push(HX_("_numLayers",29,dc,54,65));
	outFields->push(HX_("_frameLabels",0d,a2,ce,8d));
	outFields->push(HX_("_colorTransform",28,20,a0,f6));
	outFields->push(HX_("_layers",21,27,28,c7));
	outFields->push(HX_("_texture",5c,22,99,d8));
	outFields->push(HX_("_tempRect",b7,4d,b1,e2));
	outFields->push(HX_("_zeroPoint",c9,9f,7e,b3));
	outFields->push(HX_("filterHelper",46,ab,a6,10));
	outFields->push(HX_("smoothing",74,d5,e1,95));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SpriteSymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SpriteSymbol_obj,_data),HX_("_data",09,72,74,f5)},
	{::hx::fsObject /*  ::animateatlas::displayobject::SpriteAnimationLibrary */ ,(int)offsetof(SpriteSymbol_obj,_library),HX_("_library",7c,80,28,79)},
	{::hx::fsString,(int)offsetof(SpriteSymbol_obj,_symbolName),HX_("_symbolName",e2,a6,86,f2)},
	{::hx::fsString,(int)offsetof(SpriteSymbol_obj,_type),HX_("_type",99,0e,1a,00)},
	{::hx::fsString,(int)offsetof(SpriteSymbol_obj,_loopMode),HX_("_loopMode",46,9f,64,82)},
	{::hx::fsInt,(int)offsetof(SpriteSymbol_obj,_currentFrame),HX_("_currentFrame",13,f0,fd,2f)},
	{::hx::fsInt,(int)offsetof(SpriteSymbol_obj,_composedFrame),HX_("_composedFrame",fc,bf,b9,de)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(SpriteSymbol_obj,_bitmap),HX_("_bitmap",8e,21,83,5f)},
	{::hx::fsInt,(int)offsetof(SpriteSymbol_obj,_numFrames),HX_("_numFrames",4d,76,29,b9)},
	{::hx::fsInt,(int)offsetof(SpriteSymbol_obj,_numLayers),HX_("_numLayers",29,dc,54,65)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SpriteSymbol_obj,_frameLabels),HX_("_frameLabels",0d,a2,ce,8d)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(SpriteSymbol_obj,_colorTransform),HX_("_colorTransform",28,20,a0,f6)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SpriteSymbol_obj,_layers),HX_("_layers",21,27,28,c7)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(SpriteSymbol_obj,_texture),HX_("_texture",5c,22,99,d8)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(SpriteSymbol_obj,_tempRect),HX_("_tempRect",b7,4d,b1,e2)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(SpriteSymbol_obj,_zeroPoint),HX_("_zeroPoint",c9,9f,7e,b3)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(SpriteSymbol_obj,filterHelper),HX_("filterHelper",46,ab,a6,10)},
	{::hx::fsBool,(int)offsetof(SpriteSymbol_obj,smoothing),HX_("smoothing",74,d5,e1,95)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SpriteSymbol_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &SpriteSymbol_obj::sMatrix,HX_("sMatrix",14,03,81,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SpriteSymbol_obj_sMemberFields[] = {
	HX_("_data",09,72,74,f5),
	HX_("_library",7c,80,28,79),
	HX_("_symbolName",e2,a6,86,f2),
	HX_("_type",99,0e,1a,00),
	HX_("_loopMode",46,9f,64,82),
	HX_("_currentFrame",13,f0,fd,2f),
	HX_("_composedFrame",fc,bf,b9,de),
	HX_("_bitmap",8e,21,83,5f),
	HX_("_numFrames",4d,76,29,b9),
	HX_("_numLayers",29,dc,54,65),
	HX_("_frameLabels",0d,a2,ce,8d),
	HX_("_colorTransform",28,20,a0,f6),
	HX_("_layers",21,27,28,c7),
	HX_("_texture",5c,22,99,d8),
	HX_("_tempRect",b7,4d,b1,e2),
	HX_("_zeroPoint",c9,9f,7e,b3),
	HX_("filterHelper",46,ab,a6,10),
	HX_("smoothing",74,d5,e1,95),
	HX_("reset",cf,49,c8,e6),
	HX_("nextFrame",3a,92,c8,ad),
	HX_("prevFrame",3a,18,da,f1),
	HX_("moveMovieclip_MovieClips",43,72,8c,aa),
	HX_("update",09,86,05,87),
	HX_("updateLayer",08,eb,58,55),
	HX_("createLayers",9e,55,06,7b),
	HX_("setBitmap",31,85,b3,50),
	HX_("setFilterData",44,1c,20,f0),
	HX_("setTransformationMatrix",ac,c9,9b,85),
	HX_("setColor",61,da,90,58),
	HX_("setLoop",26,e7,3b,0d),
	HX_("setType",7c,33,8d,12),
	HX_("getNumFrames",16,97,dd,6c),
	HX_("_getFrameLabels",b5,8f,c3,f8),
	HX_("getFrameLabels",16,47,63,af),
	HX_("sortLabels",fd,9d,62,a6),
	HX_("getLayer",5b,91,97,cf),
	HX_("getTexture",e5,4e,42,ee),
	HX_("getNextLabel",8b,c4,4a,26),
	HX_("get_currentLabel",84,df,59,bb),
	HX_("getFrame",b7,87,5a,66),
	HX_("get_currentFrame",bd,49,2e,52),
	HX_("set_currentFrame",31,37,70,a8),
	HX_("get_type",43,ae,c3,cc),
	HX_("set_type",b7,07,21,7b),
	HX_("get_loopMode",f0,5b,e8,ef),
	HX_("set_loopMode",64,7f,e1,04),
	HX_("get_symbolName",0c,62,f2,95),
	HX_("get_numLayers",3f,34,16,cb),
	HX_("get_numFrames",63,ce,ea,1e),
	HX_("getLayerData",25,5d,e7,93),
	HX_("getFrameData",81,b1,3a,3f),
	::String(null()) };

static void SpriteSymbol_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteSymbol_obj::sMatrix,"sMatrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SpriteSymbol_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteSymbol_obj::sMatrix,"sMatrix");
};

#endif

::hx::Class SpriteSymbol_obj::__mClass;

static ::String SpriteSymbol_obj_sStaticFields[] = {
	HX_("sMatrix",14,03,81,9e),
	::String(null())
};

void SpriteSymbol_obj::__register()
{
	SpriteSymbol_obj _hx_dummy;
	SpriteSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("animateatlas.displayobject.SpriteSymbol",4e,d2,d9,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SpriteSymbol_obj::__GetStatic;
	__mClass->mSetStaticField = &SpriteSymbol_obj::__SetStatic;
	__mClass->mMarkFunc = SpriteSymbol_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SpriteSymbol_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SpriteSymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SpriteSymbol_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SpriteSymbol_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpriteSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpriteSymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SpriteSymbol_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_57_boot)
HXDLIN(  57)		sMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace animateatlas
} // end namespace displayobject
