#include <hxcpp.h>

#ifndef INCLUDED_animateatlas_displayobject_SpriteAnimationLibrary
#include <animateatlas/displayobject/SpriteAnimationLibrary.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteMovieClip
#include <animateatlas/displayobject/SpriteMovieClip.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_248c9c494826a4bb_21_new,"animateatlas.displayobject.SpriteAnimationLibrary","new",0x5e9d463f,"animateatlas.displayobject.SpriteAnimationLibrary.new","animateatlas/displayobject/SpriteAnimationLibrary.hx",21,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_60_hasAnimation,"animateatlas.displayobject.SpriteAnimationLibrary","hasAnimation",0x72c52a8b,"animateatlas.displayobject.SpriteAnimationLibrary.hasAnimation","animateatlas/displayobject/SpriteAnimationLibrary.hx",60,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_63_createAnimation,"animateatlas.displayobject.SpriteAnimationLibrary","createAnimation",0xcffbf0c7,"animateatlas.displayobject.SpriteAnimationLibrary.createAnimation","animateatlas/displayobject/SpriteAnimationLibrary.hx",63,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_82_getAnimationNames,"animateatlas.displayobject.SpriteAnimationLibrary","getAnimationNames",0x4c582f79,"animateatlas.displayobject.SpriteAnimationLibrary.getAnimationNames","animateatlas/displayobject/SpriteAnimationLibrary.hx",82,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_72_getAnimationNames,"animateatlas.displayobject.SpriteAnimationLibrary","getAnimationNames",0x4c582f79,"animateatlas.displayobject.SpriteAnimationLibrary.getAnimationNames","animateatlas/displayobject/SpriteAnimationLibrary.hx",72,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_97_getSpriteData,"animateatlas.displayobject.SpriteAnimationLibrary","getSpriteData",0xa0b0c3a4,"animateatlas.displayobject.SpriteAnimationLibrary.getSpriteData","animateatlas/displayobject/SpriteAnimationLibrary.hx",97,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_101_hasSymbol,"animateatlas.displayobject.SpriteAnimationLibrary","hasSymbol",0x73480971,"animateatlas.displayobject.SpriteAnimationLibrary.hasSymbol","animateatlas/displayobject/SpriteAnimationLibrary.hx",101,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_109_getSymbol,"animateatlas.displayobject.SpriteAnimationLibrary","getSymbol",0xaeb5dfad,"animateatlas.displayobject.SpriteAnimationLibrary.getSymbol","animateatlas/displayobject/SpriteAnimationLibrary.hx",109,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_120_putSymbol,"animateatlas.displayobject.SpriteAnimationLibrary","putSymbol",0xac59b2a6,"animateatlas.displayobject.SpriteAnimationLibrary.putSymbol","animateatlas/displayobject/SpriteAnimationLibrary.hx",120,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_127_getSymbolPool,"animateatlas.displayobject.SpriteAnimationLibrary","getSymbolPool",0xda196729,"animateatlas.displayobject.SpriteAnimationLibrary.getSymbolPool","animateatlas/displayobject/SpriteAnimationLibrary.hx",127,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_138_parseAnimationData,"animateatlas.displayobject.SpriteAnimationLibrary","parseAnimationData",0x372d9c1c,"animateatlas.displayobject.SpriteAnimationLibrary.parseAnimationData","animateatlas/displayobject/SpriteAnimationLibrary.hx",138,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_169_preprocessSymbolData,"animateatlas.displayobject.SpriteAnimationLibrary","preprocessSymbolData",0xe043acaf,"animateatlas.displayobject.SpriteAnimationLibrary.preprocessSymbolData","animateatlas/displayobject/SpriteAnimationLibrary.hx",169,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_215_parseAtlasData,"animateatlas.displayobject.SpriteAnimationLibrary","parseAtlasData",0x3ba42ae3,"animateatlas.displayobject.SpriteAnimationLibrary.parseAtlasData","animateatlas/displayobject/SpriteAnimationLibrary.hx",215,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_225_getSymbolData,"animateatlas.displayobject.SpriteAnimationLibrary","getSymbolData",0xd2203c77,"animateatlas.displayobject.SpriteAnimationLibrary.getSymbolData","animateatlas/displayobject/SpriteAnimationLibrary.hx",225,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_31_boot,"animateatlas.displayobject.SpriteAnimationLibrary","boot",0x63193173,"animateatlas.displayobject.SpriteAnimationLibrary.boot","animateatlas/displayobject/SpriteAnimationLibrary.hx",31,0xa72c3a0f)
HX_LOCAL_STACK_FRAME(_hx_pos_248c9c494826a4bb_33_boot,"animateatlas.displayobject.SpriteAnimationLibrary","boot",0x63193173,"animateatlas.displayobject.SpriteAnimationLibrary.boot","animateatlas/displayobject/SpriteAnimationLibrary.hx",33,0xa72c3a0f)
namespace animateatlas{
namespace displayobject{

void SpriteAnimationLibrary_obj::__construct( ::Dynamic data, ::Dynamic atlas, ::openfl::display::BitmapData texture){
            	HX_GC_STACKFRAME(&_hx_pos_248c9c494826a4bb_21_new)
HXLINE(  29)		this->smoothing = true;
HXLINE(  53)		this->parseAnimationData(data);
HXLINE(  54)		this->parseAtlasData(atlas);
HXLINE(  55)		this->_texture = texture;
HXLINE(  56)		this->_symbolPool =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic SpriteAnimationLibrary_obj::__CreateEmpty() { return new SpriteAnimationLibrary_obj; }

void *SpriteAnimationLibrary_obj::_hx_vtable = 0;

Dynamic SpriteAnimationLibrary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SpriteAnimationLibrary_obj > _hx_result = new SpriteAnimationLibrary_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SpriteAnimationLibrary_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4b15ccaf;
}

bool SpriteAnimationLibrary_obj::hasAnimation(::String name){
            	HX_STACKFRAME(&_hx_pos_248c9c494826a4bb_60_hasAnimation)
HXDLIN(  60)		return this->hasSymbol(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationLibrary_obj,hasAnimation,return )

 ::animateatlas::displayobject::SpriteMovieClip SpriteAnimationLibrary_obj::createAnimation(bool noAntialiasing,::String symbol){
            	HX_GC_STACKFRAME(&_hx_pos_248c9c494826a4bb_63_createAnimation)
HXLINE(  64)		this->smoothing = !(noAntialiasing);
HXLINE(  65)		if (::hx::IsNull( symbol )) {
HXLINE(  65)			symbol = this->_defaultSymbolName;
            		}
HXLINE(  66)		if (!(this->hasSymbol(symbol))) {
HXLINE(  67)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Symbol not found: ",b3,dc,5e,d7) + symbol))));
            		}
HXLINE(  69)		return  ::animateatlas::displayobject::SpriteMovieClip_obj::__alloc( HX_CTX ,this->getSymbol(symbol));
            	}


HX_DEFINE_DYNAMIC_FUNC2(SpriteAnimationLibrary_obj,createAnimation,return )

::Array< ::String > SpriteAnimationLibrary_obj::getAnimationNames(::String __o_prefix){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run(::String a1,::String a2){
            			HX_STACKFRAME(&_hx_pos_248c9c494826a4bb_82_getAnimationNames)
HXLINE(  83)			a1 = a1.toLowerCase();
HXLINE(  84)			a2 = a2.toLowerCase();
HXLINE(  85)			if ((a1 < a2)) {
HXLINE(  86)				return -1;
            			}
            			else {
HXLINE(  87)				if ((a1 > a2)) {
HXLINE(  88)					return 1;
            				}
            				else {
HXLINE(  90)					return 0;
            				}
            			}
HXLINE(  85)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		::String prefix = __o_prefix;
            		if (::hx::IsNull(__o_prefix)) prefix = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_248c9c494826a4bb_72_getAnimationNames)
HXLINE(  73)		::Array< ::String > out = ::Array_obj< ::String >::__new();
HXLINE(  75)		{
HXLINE(  75)			 ::Dynamic name = this->_symbolData->keys();
HXDLIN(  75)			while(( (bool)(name->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  75)				::String name1 = ( (::String)(name->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  76)				bool _hx_tmp;
HXDLIN(  76)				if ((name1 != HX_("___atlas_sprite___",c7,68,ad,ec))) {
HXLINE(  76)					_hx_tmp = (name1.indexOf(prefix,null()) == 0);
            				}
            				else {
HXLINE(  76)					_hx_tmp = false;
            				}
HXDLIN(  76)				if (_hx_tmp) {
HXLINE(  77)					out->push(name1);
            				}
            			}
            		}
HXLINE(  82)		out->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE(  93)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationLibrary_obj,getAnimationNames,return )

 ::Dynamic SpriteAnimationLibrary_obj::getSpriteData(::String name){
            	HX_STACKFRAME(&_hx_pos_248c9c494826a4bb_97_getSpriteData)
HXDLIN(  97)		return this->_atlas->get(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationLibrary_obj,getSpriteData,return )

bool SpriteAnimationLibrary_obj::hasSymbol(::String name){
            	HX_STACKFRAME(&_hx_pos_248c9c494826a4bb_101_hasSymbol)
HXDLIN( 101)		return this->_symbolData->exists(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationLibrary_obj,hasSymbol,return )

 ::animateatlas::displayobject::SpriteSymbol SpriteAnimationLibrary_obj::getSymbol(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_248c9c494826a4bb_109_getSymbol)
HXLINE( 110)		::Array< ::Dynamic> pool = this->getSymbolPool(name);
HXLINE( 111)		if ((pool->length == 0)) {
HXLINE( 112)			 ::Dynamic symbol = this->getSymbolData(name);
HXDLIN( 112)			 ::animateatlas::displayobject::SpriteSymbol symbol1 =  ::animateatlas::displayobject::SpriteSymbol_obj::__alloc( HX_CTX ,symbol,::hx::ObjectPtr<OBJ_>(this),this->_texture);
HXLINE( 113)			symbol1->smoothing = this->smoothing;
HXLINE( 114)			return symbol1;
            		}
            		else {
HXLINE( 116)			return pool->pop().StaticCast<  ::animateatlas::displayobject::SpriteSymbol >();
            		}
HXLINE( 111)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationLibrary_obj,getSymbol,return )

void SpriteAnimationLibrary_obj::putSymbol( ::animateatlas::displayobject::SpriteSymbol symbol){
            	HX_STACKFRAME(&_hx_pos_248c9c494826a4bb_120_putSymbol)
HXLINE( 121)		symbol->reset();
HXLINE( 122)		::Array< ::Dynamic> pool = this->getSymbolPool(symbol->get_symbolName());
HXLINE( 123)		pool->push(symbol);
HXLINE( 124)		symbol->set_currentFrame(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationLibrary_obj,putSymbol,(void))

::Array< ::Dynamic> SpriteAnimationLibrary_obj::getSymbolPool(::String name){
            	HX_STACKFRAME(&_hx_pos_248c9c494826a4bb_127_getSymbolPool)
HXLINE( 128)		::Array< ::Dynamic> pool = ( (::Array< ::Dynamic>)(this->_symbolPool->get(name)) );
HXLINE( 129)		if (::hx::IsNull( pool )) {
HXLINE( 130)			pool = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 131)			this->_symbolPool->set(name,pool);
            		}
HXLINE( 133)		return pool;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationLibrary_obj,getSymbolPool,return )

void SpriteAnimationLibrary_obj::parseAnimationData( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_248c9c494826a4bb_138_parseAnimationData)
HXLINE( 139)		 ::Dynamic metaData = data->__Field(HX_("metadata",6f,e7,19,40),::hx::paccDynamic);
HXLINE( 141)		bool _hx_tmp;
HXDLIN( 141)		bool _hx_tmp1;
HXDLIN( 141)		if (::hx::IsNotNull( metaData )) {
HXLINE( 141)			_hx_tmp1 = ::hx::IsNotNull( metaData->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 141)			_hx_tmp1 = false;
            		}
HXDLIN( 141)		if (_hx_tmp1) {
HXLINE( 141)			_hx_tmp = ::hx::IsGreater( metaData->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic),0 );
            		}
            		else {
HXLINE( 141)			_hx_tmp = false;
            		}
HXDLIN( 141)		if (_hx_tmp) {
HXLINE( 142)			this->frameRate = ( (Float)(metaData->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 144)			this->frameRate = ( (Float)(24) );
            		}
HXLINE( 147)		this->_symbolData =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 150)		::Array< ::Dynamic> symbols = ( (::Array< ::Dynamic>)( ::Dynamic(data->__Field(HX_("SYMBOL_DICTIONARY",5d,08,42,4b),::hx::paccDynamic))->__Field(HX_("Symbols",fb,e5,6c,e0),::hx::paccDynamic)) );
HXLINE( 151)		{
HXLINE( 151)			int _g = 0;
HXDLIN( 151)			while((_g < symbols->length)){
HXLINE( 151)				 ::Dynamic symbolData = symbols->__get(_g);
HXDLIN( 151)				_g = (_g + 1);
HXLINE( 152)				{
HXLINE( 152)					::Dynamic this1 = this->_symbolData;
HXDLIN( 152)					::String k = ( (::String)(symbolData->__Field(HX_("SYMBOL_name",d2,13,ee,07),::hx::paccDynamic)) );
HXDLIN( 152)					 ::Dynamic v = this->preprocessSymbolData(symbolData);
HXDLIN( 152)					( ( ::haxe::ds::StringMap)(this1) )->set(k,v);
            				}
            			}
            		}
HXLINE( 156)		 ::Dynamic defaultSymbolData = this->preprocessSymbolData(data->__Field(HX_("ANIMATION",e4,5e,8d,46),::hx::paccDynamic));
HXLINE( 157)		this->_defaultSymbolName = ( (::String)(defaultSymbolData->__Field(HX_("SYMBOL_name",d2,13,ee,07),::hx::paccDynamic)) );
HXLINE( 158)		this->_symbolData->set(this->_defaultSymbolName,defaultSymbolData);
HXLINE( 161)		this->_symbolData->set(HX_("___atlas_sprite___",c7,68,ad,ec), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("SYMBOL_name",d2,13,ee,07),HX_("___atlas_sprite___",c7,68,ad,ec))
            			->setFixed(1,HX_("TIMELINE",81,fe,c0,56), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("LAYERS",82,c1,33,0b),::Array_obj< ::Dynamic>::__new(0))))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationLibrary_obj,parseAnimationData,(void))

 ::Dynamic SpriteAnimationLibrary_obj::preprocessSymbolData( ::Dynamic symbolData){
            	HX_STACKFRAME(&_hx_pos_248c9c494826a4bb_169_preprocessSymbolData)
HXLINE( 170)		 ::Dynamic timeLineData = symbolData->__Field(HX_("TIMELINE",81,fe,c0,56),::hx::paccDynamic);
HXLINE( 171)		::Array< ::Dynamic> layerDates = ( (::Array< ::Dynamic>)(timeLineData->__Field(HX_("LAYERS",82,c1,33,0b),::hx::paccDynamic)) );
HXLINE( 176)		if (!(( (bool)(timeLineData->__Field(HX_("sortedForRender",42,90,ab,5e),::hx::paccDynamic)) ))) {
HXLINE( 177)			timeLineData->__SetField(HX_("sortedForRender",42,90,ab,5e),true,::hx::paccDynamic);
HXLINE( 178)			layerDates->reverse();
            		}
HXLINE( 184)		{
HXLINE( 184)			int _g = 0;
HXDLIN( 184)			while((_g < layerDates->length)){
HXLINE( 184)				 ::Dynamic layerData = layerDates->__get(_g);
HXDLIN( 184)				_g = (_g + 1);
HXLINE( 185)				::Array< ::Dynamic> frames = ( (::Array< ::Dynamic>)(layerData->__Field(HX_("Frames",c6,23,1a,e1),::hx::paccDynamic)) );
HXLINE( 187)				{
HXLINE( 187)					int _g1 = 0;
HXDLIN( 187)					while((_g1 < frames->length)){
HXLINE( 187)						 ::Dynamic frame = frames->__get(_g1);
HXDLIN( 187)						_g1 = (_g1 + 1);
HXLINE( 188)						::Array< ::Dynamic> elements = ( (::Array< ::Dynamic>)(frame->__Field(HX_("elements",37,36,c4,83),::hx::paccDynamic)) );
HXLINE( 189)						{
HXLINE( 189)							int _g = 0;
HXDLIN( 189)							int _g2 = elements->length;
HXDLIN( 189)							while((_g < _g2)){
HXLINE( 189)								_g = (_g + 1);
HXDLIN( 189)								int e = (_g - 1);
HXLINE( 190)								 ::Dynamic element = elements->__get(e);
HXLINE( 191)								if (::hx::IsNotNull( element->__Field(HX_("ATLAS_SPRITE_instance",fb,f3,3a,ba),::hx::paccDynamic) )) {
HXLINE( 192)									element = (elements[e] =  ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("SYMBOL_Instance",bc,4c,fe,3f), ::Dynamic(::hx::Anon_obj::Create(8)
            											->setFixed(0,HX_("transformationPoint",c7,cd,1b,d6), ::Dynamic(::hx::Anon_obj::Create(2)
            												->setFixed(0,HX_("x",78,00,00,00),0)
            												->setFixed(1,HX_("y",79,00,00,00),0)))
            											->setFixed(1,HX_("bitmap",ef,0f,0c,f1), ::Dynamic(element->__Field(HX_("ATLAS_SPRITE_instance",fb,f3,3a,ba),::hx::paccDynamic)))
            											->setFixed(2,HX_("SYMBOL_name",d2,13,ee,07),HX_("___atlas_sprite___",c7,68,ad,ec))
            											->setFixed(3,HX_("Instance_Name",75,4e,b5,08),HX_("InstName",51,f9,f9,26))
            											->setFixed(4,HX_("symbolType",32,5a,06,24),HX_("graphic",a8,5a,07,74))
            											->setFixed(5,HX_("Matrix3D",52,f1,a4,40),::animateatlas::displayobject::SpriteAnimationLibrary_obj::STD_MATRIX3D_DATA)
            											->setFixed(6,HX_("firstFrame",dd,c1,61,44),0)
            											->setFixed(7,HX_("loop",64,a6,b7,47),HX_("loop",64,a6,b7,47))))));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 212)		return symbolData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationLibrary_obj,preprocessSymbolData,return )

void SpriteAnimationLibrary_obj::parseAtlasData( ::Dynamic atlas){
            	HX_GC_STACKFRAME(&_hx_pos_248c9c494826a4bb_215_parseAtlasData)
HXLINE( 216)		this->_atlas =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 217)		bool _hx_tmp;
HXDLIN( 217)		if (::hx::IsNotNull( atlas->__Field(HX_("ATLAS",2b,85,cb,a4),::hx::paccDynamic) )) {
HXLINE( 217)			_hx_tmp = ::hx::IsNotNull(  ::Dynamic(atlas->__Field(HX_("ATLAS",2b,85,cb,a4),::hx::paccDynamic))->__Field(HX_("SPRITES",ae,7c,5e,df),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 217)			_hx_tmp = false;
            		}
HXDLIN( 217)		if (_hx_tmp) {
HXLINE( 218)			int _g = 0;
HXDLIN( 218)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)( ::Dynamic(atlas->__Field(HX_("ATLAS",2b,85,cb,a4),::hx::paccDynamic))->__Field(HX_("SPRITES",ae,7c,5e,df),::hx::paccDynamic)) );
HXDLIN( 218)			while((_g < _g1->length)){
HXLINE( 218)				 ::Dynamic s = _g1->__get(_g);
HXDLIN( 218)				_g = (_g + 1);
HXLINE( 219)				this->_atlas->set(( (::String)( ::Dynamic(s->__Field(HX_("SPRITE",05,88,18,76),::hx::paccDynamic))->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ), ::Dynamic(s->__Field(HX_("SPRITE",05,88,18,76),::hx::paccDynamic)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationLibrary_obj,parseAtlasData,(void))

 ::Dynamic SpriteAnimationLibrary_obj::getSymbolData(::String name){
            	HX_STACKFRAME(&_hx_pos_248c9c494826a4bb_225_getSymbolData)
HXDLIN( 225)		return this->_symbolData->get(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteAnimationLibrary_obj,getSymbolData,return )

::String SpriteAnimationLibrary_obj::BITMAP_SYMBOL_NAME;

 ::Dynamic SpriteAnimationLibrary_obj::STD_MATRIX3D_DATA;


::hx::ObjectPtr< SpriteAnimationLibrary_obj > SpriteAnimationLibrary_obj::__new( ::Dynamic data, ::Dynamic atlas, ::openfl::display::BitmapData texture) {
	::hx::ObjectPtr< SpriteAnimationLibrary_obj > __this = new SpriteAnimationLibrary_obj();
	__this->__construct(data,atlas,texture);
	return __this;
}

::hx::ObjectPtr< SpriteAnimationLibrary_obj > SpriteAnimationLibrary_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic data, ::Dynamic atlas, ::openfl::display::BitmapData texture) {
	SpriteAnimationLibrary_obj *__this = (SpriteAnimationLibrary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SpriteAnimationLibrary_obj), true, "animateatlas.displayobject.SpriteAnimationLibrary"));
	*(void **)__this = SpriteAnimationLibrary_obj::_hx_vtable;
	__this->__construct(data,atlas,texture);
	return __this;
}

SpriteAnimationLibrary_obj::SpriteAnimationLibrary_obj()
{
}

void SpriteAnimationLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteAnimationLibrary);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(_atlas,"_atlas");
	HX_MARK_MEMBER_NAME(_symbolData,"_symbolData");
	HX_MARK_MEMBER_NAME(_symbolPool,"_symbolPool");
	HX_MARK_MEMBER_NAME(_defaultSymbolName,"_defaultSymbolName");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_END_CLASS();
}

void SpriteAnimationLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(_atlas,"_atlas");
	HX_VISIT_MEMBER_NAME(_symbolData,"_symbolData");
	HX_VISIT_MEMBER_NAME(_symbolPool,"_symbolPool");
	HX_VISIT_MEMBER_NAME(_defaultSymbolName,"_defaultSymbolName");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
}

::hx::Val SpriteAnimationLibrary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_atlas") ) { return ::hx::Val( _atlas ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { return ::hx::Val( _texture ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return ::hx::Val( frameRate ); }
		if (HX_FIELD_EQ(inName,"smoothing") ) { return ::hx::Val( smoothing ); }
		if (HX_FIELD_EQ(inName,"hasSymbol") ) { return ::hx::Val( hasSymbol_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSymbol") ) { return ::hx::Val( getSymbol_dyn() ); }
		if (HX_FIELD_EQ(inName,"putSymbol") ) { return ::hx::Val( putSymbol_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_symbolData") ) { return ::hx::Val( _symbolData ); }
		if (HX_FIELD_EQ(inName,"_symbolPool") ) { return ::hx::Val( _symbolPool ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasAnimation") ) { return ::hx::Val( hasAnimation_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getSpriteData") ) { return ::hx::Val( getSpriteData_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSymbolPool") ) { return ::hx::Val( getSymbolPool_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSymbolData") ) { return ::hx::Val( getSymbolData_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseAtlasData") ) { return ::hx::Val( parseAtlasData_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createAnimation") ) { return ::hx::Val( createAnimation_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAnimationNames") ) { return ::hx::Val( getAnimationNames_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_defaultSymbolName") ) { return ::hx::Val( _defaultSymbolName ); }
		if (HX_FIELD_EQ(inName,"parseAnimationData") ) { return ::hx::Val( parseAnimationData_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"preprocessSymbolData") ) { return ::hx::Val( preprocessSymbolData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SpriteAnimationLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"STD_MATRIX3D_DATA") ) { outValue = ( STD_MATRIX3D_DATA ); return true; }
	}
	return false;
}

::hx::Val SpriteAnimationLibrary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_atlas") ) { _atlas=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_symbolData") ) { _symbolData=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_symbolPool") ) { _symbolPool=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_defaultSymbolName") ) { _defaultSymbolName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SpriteAnimationLibrary_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"STD_MATRIX3D_DATA") ) { STD_MATRIX3D_DATA=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void SpriteAnimationLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frameRate",ad,11,25,39));
	outFields->push(HX_("_atlas",8c,94,c4,22));
	outFields->push(HX_("_symbolData",c1,8a,ea,eb));
	outFields->push(HX_("_symbolPool",73,b5,e3,f3));
	outFields->push(HX_("_defaultSymbolName",a5,36,74,c9));
	outFields->push(HX_("_texture",5c,22,99,d8));
	outFields->push(HX_("smoothing",74,d5,e1,95));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SpriteAnimationLibrary_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(SpriteAnimationLibrary_obj,frameRate),HX_("frameRate",ad,11,25,39)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(SpriteAnimationLibrary_obj,_atlas),HX_("_atlas",8c,94,c4,22)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(SpriteAnimationLibrary_obj,_symbolData),HX_("_symbolData",c1,8a,ea,eb)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(SpriteAnimationLibrary_obj,_symbolPool),HX_("_symbolPool",73,b5,e3,f3)},
	{::hx::fsString,(int)offsetof(SpriteAnimationLibrary_obj,_defaultSymbolName),HX_("_defaultSymbolName",a5,36,74,c9)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(SpriteAnimationLibrary_obj,_texture),HX_("_texture",5c,22,99,d8)},
	{::hx::fsBool,(int)offsetof(SpriteAnimationLibrary_obj,smoothing),HX_("smoothing",74,d5,e1,95)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SpriteAnimationLibrary_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SpriteAnimationLibrary_obj::BITMAP_SYMBOL_NAME,HX_("BITMAP_SYMBOL_NAME",42,f0,a8,d3)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SpriteAnimationLibrary_obj::STD_MATRIX3D_DATA,HX_("STD_MATRIX3D_DATA",9b,b7,c7,58)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SpriteAnimationLibrary_obj_sMemberFields[] = {
	HX_("frameRate",ad,11,25,39),
	HX_("_atlas",8c,94,c4,22),
	HX_("_symbolData",c1,8a,ea,eb),
	HX_("_symbolPool",73,b5,e3,f3),
	HX_("_defaultSymbolName",a5,36,74,c9),
	HX_("_texture",5c,22,99,d8),
	HX_("smoothing",74,d5,e1,95),
	HX_("hasAnimation",4a,d4,86,d8),
	HX_("createAnimation",68,a8,29,ec),
	HX_("getAnimationNames",5a,d1,1b,19),
	HX_("getSpriteData",05,a1,63,44),
	HX_("hasSymbol",52,62,c6,2f),
	HX_("getSymbol",8e,38,34,6b),
	HX_("putSymbol",87,0b,d8,68),
	HX_("getSymbolPool",8a,44,cc,7d),
	HX_("parseAnimationData",1b,9f,97,95),
	HX_("preprocessSymbolData",6e,ad,73,2f),
	HX_("parseAtlasData",62,02,73,d4),
	HX_("getSymbolData",d8,19,d3,75),
	::String(null()) };

static void SpriteAnimationLibrary_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteAnimationLibrary_obj::BITMAP_SYMBOL_NAME,"BITMAP_SYMBOL_NAME");
	HX_MARK_MEMBER_NAME(SpriteAnimationLibrary_obj::STD_MATRIX3D_DATA,"STD_MATRIX3D_DATA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SpriteAnimationLibrary_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteAnimationLibrary_obj::BITMAP_SYMBOL_NAME,"BITMAP_SYMBOL_NAME");
	HX_VISIT_MEMBER_NAME(SpriteAnimationLibrary_obj::STD_MATRIX3D_DATA,"STD_MATRIX3D_DATA");
};

#endif

::hx::Class SpriteAnimationLibrary_obj::__mClass;

static ::String SpriteAnimationLibrary_obj_sStaticFields[] = {
	HX_("BITMAP_SYMBOL_NAME",42,f0,a8,d3),
	HX_("STD_MATRIX3D_DATA",9b,b7,c7,58),
	::String(null())
};

void SpriteAnimationLibrary_obj::__register()
{
	SpriteAnimationLibrary_obj _hx_dummy;
	SpriteAnimationLibrary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("animateatlas.displayobject.SpriteAnimationLibrary",cd,ba,57,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SpriteAnimationLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &SpriteAnimationLibrary_obj::__SetStatic;
	__mClass->mMarkFunc = SpriteAnimationLibrary_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SpriteAnimationLibrary_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SpriteAnimationLibrary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SpriteAnimationLibrary_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SpriteAnimationLibrary_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpriteAnimationLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpriteAnimationLibrary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SpriteAnimationLibrary_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_248c9c494826a4bb_31_boot)
HXDLIN(  31)		BITMAP_SYMBOL_NAME = HX_("___atlas_sprite___",c7,68,ad,ec);
            	}
{
            	HX_STACKFRAME(&_hx_pos_248c9c494826a4bb_33_boot)
HXDLIN(  33)		STD_MATRIX3D_DATA =  ::Dynamic(::hx::Anon_obj::Create(16)
            			->setFixed(0,HX_("m00",ad,df,52,00),( (Float)(1) ))
            			->setFixed(1,HX_("m01",ae,df,52,00),( (Float)(0) ))
            			->setFixed(2,HX_("m02",af,df,52,00),( (Float)(0) ))
            			->setFixed(3,HX_("m03",b0,df,52,00),( (Float)(0) ))
            			->setFixed(4,HX_("m10",8c,e0,52,00),( (Float)(0) ))
            			->setFixed(5,HX_("m11",8d,e0,52,00),( (Float)(1) ))
            			->setFixed(6,HX_("m12",8e,e0,52,00),( (Float)(0) ))
            			->setFixed(7,HX_("m13",8f,e0,52,00),( (Float)(0) ))
            			->setFixed(8,HX_("m20",6b,e1,52,00),( (Float)(0) ))
            			->setFixed(9,HX_("m21",6c,e1,52,00),( (Float)(0) ))
            			->setFixed(10,HX_("m22",6d,e1,52,00),( (Float)(1) ))
            			->setFixed(11,HX_("m23",6e,e1,52,00),( (Float)(0) ))
            			->setFixed(12,HX_("m30",4a,e2,52,00),( (Float)(0) ))
            			->setFixed(13,HX_("m31",4b,e2,52,00),( (Float)(0) ))
            			->setFixed(14,HX_("m32",4c,e2,52,00),( (Float)(0) ))
            			->setFixed(15,HX_("m33",4d,e2,52,00),( (Float)(1) )));
            	}
}

} // end namespace animateatlas
} // end namespace displayobject
