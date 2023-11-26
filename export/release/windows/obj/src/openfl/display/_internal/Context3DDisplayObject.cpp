#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBitmap
#include <openfl/display/_internal/Context3DBitmap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DDisplayObject
#include <openfl/display/_internal/Context3DDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DShape
#include <openfl/display/_internal/Context3DShape.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_edeaa621a2083f7d_23_render,"openfl.display._internal.Context3DDisplayObject","render",0x08270187,"openfl.display._internal.Context3DDisplayObject.render","openfl/display/_internal/Context3DDisplayObject.hx",23,0x557f86de)
HX_LOCAL_STACK_FRAME(_hx_pos_edeaa621a2083f7d_59_renderDrawable,"openfl.display._internal.Context3DDisplayObject","renderDrawable",0x79890845,"openfl.display._internal.Context3DDisplayObject.renderDrawable","openfl/display/_internal/Context3DDisplayObject.hx",59,0x557f86de)
HX_LOCAL_STACK_FRAME(_hx_pos_edeaa621a2083f7d_76_renderDrawableMask,"openfl.display._internal.Context3DDisplayObject","renderDrawableMask",0x94827bd1,"openfl.display._internal.Context3DDisplayObject.renderDrawableMask","openfl/display/_internal/Context3DDisplayObject.hx",76,0x557f86de)
HX_LOCAL_STACK_FRAME(_hx_pos_edeaa621a2083f7d_84_renderMask,"openfl.display._internal.Context3DDisplayObject","renderMask",0xfc833e13,"openfl.display._internal.Context3DDisplayObject.renderMask","openfl/display/_internal/Context3DDisplayObject.hx",84,0x557f86de)
HX_LOCAL_STACK_FRAME(_hx_pos_edeaa621a2083f7d_20_boot,"openfl.display._internal.Context3DDisplayObject","boot",0x3d767c23,"openfl.display._internal.Context3DDisplayObject.boot","openfl/display/_internal/Context3DDisplayObject.hx",20,0x557f86de)
namespace openfl{
namespace display{
namespace _internal{

void Context3DDisplayObject_obj::__construct() { }

Dynamic Context3DDisplayObject_obj::__CreateEmpty() { return new Context3DDisplayObject_obj; }

void *Context3DDisplayObject_obj::_hx_vtable = 0;

Dynamic Context3DDisplayObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DDisplayObject_obj > _hx_result = new Context3DDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DDisplayObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x23f86417;
}

void Context3DDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_edeaa621a2083f7d_23_render)
HXLINE(  24)		bool _hx_tmp;
HXDLIN(  24)		if (::hx::IsNull( displayObject->opaqueBackground )) {
HXLINE(  24)			_hx_tmp = ::hx::IsNull( displayObject->_hx___graphics );
            		}
            		else {
HXLINE(  24)			_hx_tmp = false;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  24)			return;
            		}
HXLINE(  25)		bool _hx_tmp1;
HXDLIN(  25)		if (displayObject->_hx___renderable) {
HXLINE(  25)			_hx_tmp1 = (displayObject->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  25)			_hx_tmp1 = true;
            		}
HXDLIN(  25)		if (_hx_tmp1) {
HXLINE(  25)			return;
            		}
HXLINE(  27)		bool _hx_tmp2;
HXDLIN(  27)		bool _hx_tmp3;
HXDLIN(  27)		bool _hx_tmp4;
HXDLIN(  27)		if (::hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE(  27)			_hx_tmp4 = !(displayObject->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  27)			_hx_tmp4 = false;
            		}
HXDLIN(  27)		if (_hx_tmp4) {
HXLINE(  27)			_hx_tmp3 = (displayObject->get_width() > 0);
            		}
            		else {
HXLINE(  27)			_hx_tmp3 = false;
            		}
HXDLIN(  27)		if (_hx_tmp3) {
HXLINE(  27)			_hx_tmp2 = (displayObject->get_height() > 0);
            		}
            		else {
HXLINE(  27)			_hx_tmp2 = false;
            		}
HXDLIN(  27)		if (_hx_tmp2) {
HXLINE(  32)			renderer->_hx___setBlendMode(displayObject->_hx___worldBlendMode);
HXLINE(  33)			renderer->_hx___pushMaskObject(displayObject,null());
HXLINE(  35)			 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  37)			 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(  38)			Float _hx_tmp = displayObject->get_width();
HXDLIN(  38)			rect->setTo(( (Float)(0) ),( (Float)(0) ),_hx_tmp,displayObject->get_height());
HXLINE(  39)			renderer->_hx___pushMaskRect(rect,displayObject->_hx___renderTransform);
HXLINE(  42)			int color = ( (int)(displayObject->opaqueBackground) );
HXLINE(  43)			context->clear((( (Float)((::hx::UShr(color,16) & 255)) ) / ( (Float)(255) )),(( (Float)((::hx::UShr(color,8) & 255)) ) / ( (Float)(255) )),(( (Float)((color & 255)) ) / ( (Float)(255) )),1,0,0,1);
HXLINE(  46)			renderer->_hx___popMaskRect();
HXLINE(  47)			renderer->_hx___popMaskObject(displayObject,null());
HXLINE(  49)			::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            		}
HXLINE(  52)		if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  54)			::openfl::display::_internal::Context3DShape_obj::render(displayObject,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DDisplayObject_obj,render,(void))

void Context3DDisplayObject_obj::renderDrawable( ::openfl::display::DisplayObject displayObject, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_edeaa621a2083f7d_59_renderDrawable)
HXLINE(  60)		renderer->_hx___updateCacheBitmap(displayObject,false);
HXLINE(  62)		bool _hx_tmp;
HXDLIN(  62)		if (::hx::IsNotNull( displayObject->_hx___cacheBitmap )) {
HXLINE(  62)			_hx_tmp = !(displayObject->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  62)			_hx_tmp = false;
            		}
HXDLIN(  62)		if (_hx_tmp) {
HXLINE(  64)			::openfl::display::_internal::Context3DBitmap_obj::render(displayObject->_hx___cacheBitmap,renderer);
            		}
            		else {
HXLINE(  68)			bool _hx_tmp;
HXDLIN(  68)			if (::hx::IsNull( displayObject->opaqueBackground )) {
HXLINE(  68)				_hx_tmp = ::hx::IsNull( displayObject->_hx___graphics );
            			}
            			else {
HXLINE(  68)				_hx_tmp = false;
            			}
HXDLIN(  68)			if (!(_hx_tmp)) {
HXLINE(  68)				bool _hx_tmp;
HXDLIN(  68)				if (displayObject->_hx___renderable) {
HXLINE(  68)					_hx_tmp = (displayObject->_hx___worldAlpha <= 0);
            				}
            				else {
HXLINE(  68)					_hx_tmp = true;
            				}
HXDLIN(  68)				if (!(_hx_tmp)) {
HXLINE(  68)					bool _hx_tmp;
HXDLIN(  68)					bool _hx_tmp1;
HXDLIN(  68)					bool _hx_tmp2;
HXDLIN(  68)					if (::hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE(  68)						_hx_tmp2 = !(displayObject->_hx___isCacheBitmapRender);
            					}
            					else {
HXLINE(  68)						_hx_tmp2 = false;
            					}
HXDLIN(  68)					if (_hx_tmp2) {
HXLINE(  68)						_hx_tmp1 = (displayObject->get_width() > 0);
            					}
            					else {
HXLINE(  68)						_hx_tmp1 = false;
            					}
HXDLIN(  68)					if (_hx_tmp1) {
HXLINE(  68)						_hx_tmp = (displayObject->get_height() > 0);
            					}
            					else {
HXLINE(  68)						_hx_tmp = false;
            					}
HXDLIN(  68)					if (_hx_tmp) {
HXLINE(  68)						renderer->_hx___setBlendMode(displayObject->_hx___worldBlendMode);
HXDLIN(  68)						renderer->_hx___pushMaskObject(displayObject,null());
HXDLIN(  68)						 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXDLIN(  68)						 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXDLIN(  68)						Float _hx_tmp = displayObject->get_width();
HXDLIN(  68)						rect->setTo(( (Float)(0) ),( (Float)(0) ),_hx_tmp,displayObject->get_height());
HXDLIN(  68)						renderer->_hx___pushMaskRect(rect,displayObject->_hx___renderTransform);
HXDLIN(  68)						int color = ( (int)(displayObject->opaqueBackground) );
HXDLIN(  68)						context->clear((( (Float)((::hx::UShr(color,16) & 255)) ) / ( (Float)(255) )),(( (Float)((::hx::UShr(color,8) & 255)) ) / ( (Float)(255) )),(( (Float)((color & 255)) ) / ( (Float)(255) )),1,0,0,1);
HXDLIN(  68)						renderer->_hx___popMaskRect();
HXDLIN(  68)						renderer->_hx___popMaskObject(displayObject,null());
HXDLIN(  68)						::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            					}
HXDLIN(  68)					if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  68)						::openfl::display::_internal::Context3DShape_obj::render(displayObject,renderer);
            					}
            				}
            			}
            		}
HXLINE(  71)		renderer->_hx___renderEvent(displayObject);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DDisplayObject_obj,renderDrawable,(void))

void Context3DDisplayObject_obj::renderDrawableMask( ::openfl::display::DisplayObject displayObject, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_edeaa621a2083f7d_76_renderDrawableMask)
HXDLIN(  76)		if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  79)			::openfl::display::_internal::Context3DShape_obj::renderMask(displayObject,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DDisplayObject_obj,renderDrawableMask,(void))

void Context3DDisplayObject_obj::renderMask( ::openfl::display::DisplayObject displayObject, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_edeaa621a2083f7d_84_renderMask)
HXLINE(  85)		bool _hx_tmp;
HXDLIN(  85)		if (::hx::IsNull( displayObject->opaqueBackground )) {
HXLINE(  85)			_hx_tmp = ::hx::IsNull( displayObject->_hx___graphics );
            		}
            		else {
HXLINE(  85)			_hx_tmp = false;
            		}
HXDLIN(  85)		if (_hx_tmp) {
HXLINE(  85)			return;
            		}
HXLINE(  87)		bool _hx_tmp1;
HXDLIN(  87)		bool _hx_tmp2;
HXDLIN(  87)		bool _hx_tmp3;
HXDLIN(  87)		if (::hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE(  87)			_hx_tmp3 = !(displayObject->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  87)			_hx_tmp3 = false;
            		}
HXDLIN(  87)		if (_hx_tmp3) {
HXLINE(  87)			_hx_tmp2 = (displayObject->get_width() > 0);
            		}
            		else {
HXLINE(  87)			_hx_tmp2 = false;
            		}
HXDLIN(  87)		if (_hx_tmp2) {
HXLINE(  87)			_hx_tmp1 = (displayObject->get_height() > 0);
            		}
            		else {
HXLINE(  87)			_hx_tmp1 = false;
            		}
HXLINE( 110)		if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE( 112)			::openfl::display::_internal::Context3DShape_obj::renderMask(displayObject,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DDisplayObject_obj,renderMask,(void))


Context3DDisplayObject_obj::Context3DDisplayObject_obj()
{
}

bool Context3DDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DDisplayObject_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Context3DDisplayObject_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Context3DDisplayObject_obj::__mClass;

static ::String Context3DDisplayObject_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void Context3DDisplayObject_obj::__register()
{
	Context3DDisplayObject_obj _hx_dummy;
	Context3DDisplayObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DDisplayObject",1d,6e,5e,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DDisplayObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DDisplayObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DDisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DDisplayObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DDisplayObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_edeaa621a2083f7d_20_boot)
HXDLIN(  20)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
