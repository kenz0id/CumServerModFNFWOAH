#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedSprite
#include <AttachedSprite.h>
#endif
#ifndef INCLUDED_ModMetadata
#include <ModMetadata.h>
#endif
#ifndef INCLUDED_ModsMenuState
#include <ModsMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f8fd466029c4d025_721_new,"ModMetadata","new",0x98e8f1a3,"ModMetadata.new","ModsMenuState.hx",721,0xc380473d)

void ModMetadata_obj::__construct(::String folder){
            	HX_GC_STACKFRAME(&_hx_pos_f8fd466029c4d025_721_new)
HXLINE( 722)		this->folder = folder;
HXLINE( 723)		this->name = folder;
HXLINE( 724)		this->description = HX_("No description provided.",88,46,cb,66);
HXLINE( 725)		this->color = ::ModsMenuState_obj::defaultColor;
HXLINE( 726)		this->restart = false;
HXLINE( 729)		::String key = (folder + HX_("/pack.json",ce,a9,3a,e3));
HXDLIN( 729)		if (::hx::IsNull( key )) {
HXLINE( 729)			key = HX_("",00,00,00,00);
            		}
HXDLIN( 729)		::String path = (HX_("mods/",9e,2f,58,0c) + key);
HXLINE( 730)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 731)			::String rawJson = ::sys::io::File_obj::getContent(path);
HXLINE( 732)			bool _hx_tmp;
HXDLIN( 732)			if (::hx::IsNotNull( rawJson )) {
HXLINE( 732)				_hx_tmp = (rawJson.length > 0);
            			}
            			else {
HXLINE( 732)				_hx_tmp = false;
            			}
HXDLIN( 732)			if (_hx_tmp) {
HXLINE( 733)				 ::Dynamic stuff =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
HXLINE( 735)				::Array< int > colors = ( (::Array< int >)(::Reflect_obj::getProperty(stuff,HX_("color",63,71,5c,4a))) );
HXLINE( 736)				::String description = ( (::String)(::Reflect_obj::getProperty(stuff,HX_("description",fc,08,1d,5f))) );
HXLINE( 737)				::String name = ( (::String)(::Reflect_obj::getProperty(stuff,HX_("name",4b,72,ff,48))) );
HXLINE( 738)				bool restart = ( (bool)(::Reflect_obj::getProperty(stuff,HX_("restart",cf,c7,a5,6a))) );
HXLINE( 740)				bool _hx_tmp;
HXDLIN( 740)				if (::hx::IsNotNull( name )) {
HXLINE( 740)					_hx_tmp = (name.length > 0);
            				}
            				else {
HXLINE( 740)					_hx_tmp = false;
            				}
HXDLIN( 740)				if (_hx_tmp) {
HXLINE( 742)					this->name = name;
            				}
HXLINE( 744)				bool _hx_tmp1;
HXDLIN( 744)				if (::hx::IsNotNull( description )) {
HXLINE( 744)					_hx_tmp1 = (description.length > 0);
            				}
            				else {
HXLINE( 744)					_hx_tmp1 = false;
            				}
HXDLIN( 744)				if (_hx_tmp1) {
HXLINE( 746)					this->description = description;
            				}
HXLINE( 748)				if ((name == HX_("Name",6b,9e,d8,33))) {
HXLINE( 750)					this->name = folder;
            				}
HXLINE( 752)				if ((description == HX_("Description",dc,a0,4f,43))) {
HXLINE( 754)					this->description = HX_("No description provided.",88,46,cb,66);
            				}
HXLINE( 756)				bool _hx_tmp2;
HXDLIN( 756)				if (::hx::IsNotNull( colors )) {
HXLINE( 756)					_hx_tmp2 = (colors->length > 2);
            				}
            				else {
HXLINE( 756)					_hx_tmp2 = false;
            				}
HXDLIN( 756)				if (_hx_tmp2) {
HXLINE( 758)					int Red = colors->__get(0);
HXDLIN( 758)					int Green = colors->__get(1);
HXDLIN( 758)					int Blue = colors->__get(2);
HXDLIN( 758)					int Alpha = 255;
HXDLIN( 758)					int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 758)					{
HXLINE( 758)						color = (color & -16711681);
HXDLIN( 758)						int color1;
HXDLIN( 758)						if ((Red > 255)) {
HXLINE( 758)							color1 = 255;
            						}
            						else {
HXLINE( 758)							if ((Red < 0)) {
HXLINE( 758)								color1 = 0;
            							}
            							else {
HXLINE( 758)								color1 = Red;
            							}
            						}
HXDLIN( 758)						color = (color | (color1 << 16));
            					}
HXDLIN( 758)					{
HXLINE( 758)						color = (color & -65281);
HXDLIN( 758)						int color2;
HXDLIN( 758)						if ((Green > 255)) {
HXLINE( 758)							color2 = 255;
            						}
            						else {
HXLINE( 758)							if ((Green < 0)) {
HXLINE( 758)								color2 = 0;
            							}
            							else {
HXLINE( 758)								color2 = Green;
            							}
            						}
HXDLIN( 758)						color = (color | (color2 << 8));
            					}
HXDLIN( 758)					{
HXLINE( 758)						color = (color & -256);
HXDLIN( 758)						int color3;
HXDLIN( 758)						if ((Blue > 255)) {
HXLINE( 758)							color3 = 255;
            						}
            						else {
HXLINE( 758)							if ((Blue < 0)) {
HXLINE( 758)								color3 = 0;
            							}
            							else {
HXLINE( 758)								color3 = Blue;
            							}
            						}
HXDLIN( 758)						color = (color | color3);
            					}
HXDLIN( 758)					{
HXLINE( 758)						color = (color & 16777215);
HXDLIN( 758)						int color4;
HXDLIN( 758)						if ((Alpha > 255)) {
HXLINE( 758)							color4 = 255;
            						}
            						else {
HXLINE( 758)							if ((Alpha < 0)) {
HXLINE( 758)								color4 = 0;
            							}
            							else {
HXLINE( 758)								color4 = Alpha;
            							}
            						}
HXDLIN( 758)						color = (color | (color4 << 24));
            					}
HXDLIN( 758)					this->color = color;
            				}
HXLINE( 761)				this->restart = restart;
            			}
            		}
            	}

Dynamic ModMetadata_obj::__CreateEmpty() { return new ModMetadata_obj; }

void *ModMetadata_obj::_hx_vtable = 0;

Dynamic ModMetadata_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ModMetadata_obj > _hx_result = new ModMetadata_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ModMetadata_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x56442971;
}


::hx::ObjectPtr< ModMetadata_obj > ModMetadata_obj::__new(::String folder) {
	::hx::ObjectPtr< ModMetadata_obj > __this = new ModMetadata_obj();
	__this->__construct(folder);
	return __this;
}

::hx::ObjectPtr< ModMetadata_obj > ModMetadata_obj::__alloc(::hx::Ctx *_hx_ctx,::String folder) {
	ModMetadata_obj *__this = (ModMetadata_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ModMetadata_obj), true, "ModMetadata"));
	*(void **)__this = ModMetadata_obj::_hx_vtable;
	__this->__construct(folder);
	return __this;
}

ModMetadata_obj::ModMetadata_obj()
{
}

void ModMetadata_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModMetadata);
	HX_MARK_MEMBER_NAME(folder,"folder");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(restart,"restart");
	HX_MARK_MEMBER_NAME(alphabet,"alphabet");
	HX_MARK_MEMBER_NAME(icon,"icon");
	HX_MARK_END_CLASS();
}

void ModMetadata_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(folder,"folder");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(restart,"restart");
	HX_VISIT_MEMBER_NAME(alphabet,"alphabet");
	HX_VISIT_MEMBER_NAME(icon,"icon");
}

::hx::Val ModMetadata_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"icon") ) { return ::hx::Val( icon ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { return ::hx::Val( folder ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restart") ) { return ::hx::Val( restart ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"alphabet") ) { return ::hx::Val( alphabet ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return ::hx::Val( description ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ModMetadata_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"icon") ) { icon=inValue.Cast<  ::AttachedSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { folder=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restart") ) { restart=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"alphabet") ) { alphabet=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModMetadata_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("folder",ae,76,90,f9));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("description",fc,08,1d,5f));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("restart",cf,c7,a5,6a));
	outFields->push(HX_("alphabet",b3,7c,38,21));
	outFields->push(HX_("icon",79,e7,b2,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ModMetadata_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ModMetadata_obj,folder),HX_("folder",ae,76,90,f9)},
	{::hx::fsString,(int)offsetof(ModMetadata_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(ModMetadata_obj,description),HX_("description",fc,08,1d,5f)},
	{::hx::fsInt,(int)offsetof(ModMetadata_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsBool,(int)offsetof(ModMetadata_obj,restart),HX_("restart",cf,c7,a5,6a)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(ModMetadata_obj,alphabet),HX_("alphabet",b3,7c,38,21)},
	{::hx::fsObject /*  ::AttachedSprite */ ,(int)offsetof(ModMetadata_obj,icon),HX_("icon",79,e7,b2,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ModMetadata_obj_sStaticStorageInfo = 0;
#endif

static ::String ModMetadata_obj_sMemberFields[] = {
	HX_("folder",ae,76,90,f9),
	HX_("name",4b,72,ff,48),
	HX_("description",fc,08,1d,5f),
	HX_("color",63,71,5c,4a),
	HX_("restart",cf,c7,a5,6a),
	HX_("alphabet",b3,7c,38,21),
	HX_("icon",79,e7,b2,45),
	::String(null()) };

::hx::Class ModMetadata_obj::__mClass;

void ModMetadata_obj::__register()
{
	ModMetadata_obj _hx_dummy;
	ModMetadata_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ModMetadata",31,e4,48,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ModMetadata_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ModMetadata_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModMetadata_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModMetadata_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

