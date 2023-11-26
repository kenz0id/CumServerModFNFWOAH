#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime__internal_graphics__ImageDataUtil_ImageDataView
#include <lime/_internal/graphics/_ImageDataUtil/ImageDataView.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0f70c5927802d56d_1672_new,"lime._internal.graphics._ImageDataUtil.ImageDataView","new",0x36089ace,"lime._internal.graphics._ImageDataUtil.ImageDataView.new","lime/_internal/graphics/ImageDataUtil.hx",1672,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_0f70c5927802d56d_1696_clip,"lime._internal.graphics._ImageDataUtil.ImageDataView","clip",0x0a3ec4a2,"lime._internal.graphics._ImageDataUtil.ImageDataView.clip","lime/_internal/graphics/ImageDataUtil.hx",1696,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_0f70c5927802d56d_1706_hasRow,"lime._internal.graphics._ImageDataUtil.ImageDataView","hasRow",0xdbd8dd32,"lime._internal.graphics._ImageDataUtil.ImageDataView.hasRow","lime/_internal/graphics/ImageDataUtil.hx",1706,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_0f70c5927802d56d_1710_offset,"lime._internal.graphics._ImageDataUtil.ImageDataView","offset",0x80da85e5,"lime._internal.graphics._ImageDataUtil.ImageDataView.offset","lime/_internal/graphics/ImageDataUtil.hx",1710,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_0f70c5927802d56d_1738_row,"lime._internal.graphics._ImageDataUtil.ImageDataView","row",0x360bac88,"lime._internal.graphics._ImageDataUtil.ImageDataView.row","lime/_internal/graphics/ImageDataUtil.hx",1738,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_0f70c5927802d56d_1742___update,"lime._internal.graphics._ImageDataUtil.ImageDataView","__update",0xdf2597fb,"lime._internal.graphics._ImageDataUtil.ImageDataView.__update","lime/_internal/graphics/ImageDataUtil.hx",1742,0x59dddace)
namespace lime{
namespace _internal{
namespace graphics{
namespace _ImageDataUtil{

void ImageDataView_obj::__construct( ::lime::graphics::Image image, ::lime::math::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_0f70c5927802d56d_1672_new)
HXLINE(1673)		this->image = image;
HXLINE(1675)		if (::hx::IsNull( rect )) {
HXLINE(1677)			this->rect = image->get_rect();
            		}
            		else {
HXLINE(1681)			if ((rect->x < 0)) {
HXLINE(1681)				rect->x = ( (Float)(0) );
            			}
HXLINE(1682)			if ((rect->y < 0)) {
HXLINE(1682)				rect->y = ( (Float)(0) );
            			}
HXLINE(1683)			if (((rect->x + rect->width) > image->width)) {
HXLINE(1683)				rect->width = (( (Float)(image->width) ) - rect->x);
            			}
HXLINE(1684)			if (((rect->y + rect->height) > image->height)) {
HXLINE(1684)				rect->height = (( (Float)(image->height) ) - rect->y);
            			}
HXLINE(1685)			if ((rect->width < 0)) {
HXLINE(1685)				rect->width = ( (Float)(0) );
            			}
HXLINE(1686)			if ((rect->height < 0)) {
HXLINE(1686)				rect->height = ( (Float)(0) );
            			}
HXLINE(1687)			this->rect = rect;
            		}
HXLINE(1690)		this->stride = image->buffer->get_stride();
HXLINE(1692)		this->_hx___update();
            	}

Dynamic ImageDataView_obj::__CreateEmpty() { return new ImageDataView_obj; }

void *ImageDataView_obj::_hx_vtable = 0;

Dynamic ImageDataView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageDataView_obj > _hx_result = new ImageDataView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ImageDataView_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x178fc370;
}

void ImageDataView_obj::clip(int x,int y,int width,int height){
            	HX_GC_STACKFRAME(&_hx_pos_0f70c5927802d56d_1696_clip)
HXLINE(1697)		if (::hx::IsNull( this->tempRect )) {
HXLINE(1697)			this->tempRect =  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(1698)		this->tempRect->setTo(( (Float)(x) ),( (Float)(y) ),( (Float)(width) ),( (Float)(height) ));
HXLINE(1700)		this->rect->intersection(this->tempRect,this->rect);
HXLINE(1701)		this->_hx___update();
            	}


HX_DEFINE_DYNAMIC_FUNC4(ImageDataView_obj,clip,(void))

bool ImageDataView_obj::hasRow(int y){
            	HX_STACKFRAME(&_hx_pos_0f70c5927802d56d_1706_hasRow)
HXDLIN(1706)		if ((y >= 0)) {
HXDLIN(1706)			return (y < this->height);
            		}
            		else {
HXDLIN(1706)			return false;
            		}
HXDLIN(1706)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDataView_obj,hasRow,return )

void ImageDataView_obj::offset(int x,int y){
            	HX_STACKFRAME(&_hx_pos_0f70c5927802d56d_1710_offset)
HXLINE(1711)		if ((x < 0)) {
HXLINE(1713)			 ::lime::math::Rectangle fh = this->rect;
HXDLIN(1713)			fh->x = (fh->x + x);
HXLINE(1714)			if ((this->rect->x < 0)) {
HXLINE(1714)				this->rect->x = ( (Float)(0) );
            			}
            		}
            		else {
HXLINE(1718)			 ::lime::math::Rectangle fh = this->rect;
HXDLIN(1718)			fh->x = (fh->x + x);
HXLINE(1719)			 ::lime::math::Rectangle fh1 = this->rect;
HXDLIN(1719)			fh1->width = (fh1->width - ( (Float)(x) ));
            		}
HXLINE(1722)		if ((y < 0)) {
HXLINE(1724)			 ::lime::math::Rectangle fh = this->rect;
HXDLIN(1724)			fh->y = (fh->y + y);
HXLINE(1725)			if ((this->rect->y < 0)) {
HXLINE(1725)				this->rect->y = ( (Float)(0) );
            			}
            		}
            		else {
HXLINE(1729)			 ::lime::math::Rectangle fh = this->rect;
HXDLIN(1729)			fh->y = (fh->y + y);
HXLINE(1730)			 ::lime::math::Rectangle fh1 = this->rect;
HXDLIN(1730)			fh1->height = (fh1->height - ( (Float)(y) ));
            		}
HXLINE(1733)		this->_hx___update();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ImageDataView_obj,offset,(void))

int ImageDataView_obj::row(int y){
            	HX_STACKFRAME(&_hx_pos_0f70c5927802d56d_1738_row)
HXDLIN(1738)		return (this->byteOffset + (this->stride * y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDataView_obj,row,return )

void ImageDataView_obj::_hx___update(){
            	HX_STACKFRAME(&_hx_pos_0f70c5927802d56d_1742___update)
HXLINE(1743)		this->x = ::Math_obj::ceil(this->rect->x);
HXLINE(1744)		this->y = ::Math_obj::ceil(this->rect->y);
HXLINE(1745)		this->width = ::Math_obj::floor(this->rect->width);
HXLINE(1746)		this->height = ::Math_obj::floor(this->rect->height);
HXLINE(1747)		this->byteOffset = ((this->stride * (this->y + this->image->offsetY)) + ((this->x + this->image->offsetX) * 4));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDataView_obj,_hx___update,(void))


::hx::ObjectPtr< ImageDataView_obj > ImageDataView_obj::__new( ::lime::graphics::Image image, ::lime::math::Rectangle rect) {
	::hx::ObjectPtr< ImageDataView_obj > __this = new ImageDataView_obj();
	__this->__construct(image,rect);
	return __this;
}

::hx::ObjectPtr< ImageDataView_obj > ImageDataView_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::graphics::Image image, ::lime::math::Rectangle rect) {
	ImageDataView_obj *__this = (ImageDataView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageDataView_obj), true, "lime._internal.graphics._ImageDataUtil.ImageDataView"));
	*(void **)__this = ImageDataView_obj::_hx_vtable;
	__this->__construct(image,rect);
	return __this;
}

ImageDataView_obj::ImageDataView_obj()
{
}

void ImageDataView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageDataView);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_MEMBER_NAME(tempRect,"tempRect");
	HX_MARK_END_CLASS();
}

void ImageDataView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	HX_VISIT_MEMBER_NAME(tempRect,"tempRect");
}

::hx::Val ImageDataView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { return ::hx::Val( row_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return ::hx::Val( rect ); }
		if (HX_FIELD_EQ(inName,"clip") ) { return ::hx::Val( clip_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"image") ) { return ::hx::Val( image ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"stride") ) { return ::hx::Val( stride ); }
		if (HX_FIELD_EQ(inName,"hasRow") ) { return ::hx::Val( hasRow_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tempRect") ) { return ::hx::Val( tempRect ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return ::hx::Val( byteOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageDataView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast<  ::lime::math::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast<  ::lime::graphics::Image >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tempRect") ) { tempRect=inValue.Cast<  ::lime::math::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageDataView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("byteOffset",bb,20,44,38));
	outFields->push(HX_("image",5b,1f,69,bd));
	outFields->push(HX_("rect",24,4d,a7,4b));
	outFields->push(HX_("stride",19,20,30,11));
	outFields->push(HX_("tempRect",58,56,1b,9b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageDataView_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ImageDataView_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(ImageDataView_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsInt,(int)offsetof(ImageDataView_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(ImageDataView_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(ImageDataView_obj,byteOffset),HX_("byteOffset",bb,20,44,38)},
	{::hx::fsObject /*  ::lime::graphics::Image */ ,(int)offsetof(ImageDataView_obj,image),HX_("image",5b,1f,69,bd)},
	{::hx::fsObject /*  ::lime::math::Rectangle */ ,(int)offsetof(ImageDataView_obj,rect),HX_("rect",24,4d,a7,4b)},
	{::hx::fsInt,(int)offsetof(ImageDataView_obj,stride),HX_("stride",19,20,30,11)},
	{::hx::fsObject /*  ::lime::math::Rectangle */ ,(int)offsetof(ImageDataView_obj,tempRect),HX_("tempRect",58,56,1b,9b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageDataView_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageDataView_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("height",e7,07,4c,02),
	HX_("width",06,b6,62,ca),
	HX_("byteOffset",bb,20,44,38),
	HX_("image",5b,1f,69,bd),
	HX_("rect",24,4d,a7,4b),
	HX_("stride",19,20,30,11),
	HX_("tempRect",58,56,1b,9b),
	HX_("clip",d0,6e,c2,41),
	HX_("hasRow",e0,ee,3d,bb),
	HX_("offset",93,97,3f,60),
	HX_("row",1a,e2,56,00),
	HX_("__update",29,f1,34,2f),
	::String(null()) };

::hx::Class ImageDataView_obj::__mClass;

void ImageDataView_obj::__register()
{
	ImageDataView_obj _hx_dummy;
	ImageDataView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.graphics._ImageDataUtil.ImageDataView",dc,db,9b,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageDataView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageDataView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageDataView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageDataView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace graphics
} // end namespace _ImageDataUtil
