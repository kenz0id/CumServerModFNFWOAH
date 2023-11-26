#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_MenuCharacter
#include <MenuCharacter.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ab0efa272e315d84_22_new,"MenuCharacter","new",0x6b6b77dc,"MenuCharacter.new","MenuCharacter.hx",22,0x28a93714)
HX_LOCAL_STACK_FRAME(_hx_pos_ab0efa272e315d84_35_changeCharacter,"MenuCharacter","changeCharacter",0x891f6d95,"MenuCharacter.changeCharacter","MenuCharacter.hx",35,0x28a93714)
HX_LOCAL_STACK_FRAME(_hx_pos_ab0efa272e315d84_26_boot,"MenuCharacter","boot",0x8ab66936,"MenuCharacter.boot","MenuCharacter.hx",26,0x28a93714)

void MenuCharacter_obj::__construct(Float x,::String __o_character){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            	HX_STACKFRAME(&_hx_pos_ab0efa272e315d84_22_new)
HXLINE(  25)		this->hasConfirmAnimation = false;
HXLINE(  30)		super::__construct(x,null(),null());
HXLINE(  32)		this->changeCharacter(character);
            	}

Dynamic MenuCharacter_obj::__CreateEmpty() { return new MenuCharacter_obj; }

void *MenuCharacter_obj::_hx_vtable = 0;

Dynamic MenuCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuCharacter_obj > _hx_result = new MenuCharacter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MenuCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5962df7e) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x5962df7e;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void MenuCharacter_obj::changeCharacter(::String __o_character){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_ab0efa272e315d84_35_changeCharacter)
HXLINE(  36)		if (::hx::IsNull( character )) {
HXLINE(  36)			character = HX_("",00,00,00,00);
            		}
HXLINE(  37)		if ((character == this->character)) {
HXLINE(  37)			return;
            		}
HXLINE(  39)		this->character = character;
HXLINE(  40)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  41)		this->set_visible(true);
HXLINE(  43)		bool dontPlayAnim = false;
HXLINE(  44)		this->scale->set(1,1);
HXLINE(  45)		this->updateHitbox();
HXLINE(  47)		this->hasConfirmAnimation = false;
HXLINE(  48)		if (::hx::IsNull( character )) {
HXLINE(  53)			::String characterPath = ((HX_("images/menucharacters/",6f,fa,bf,a6) + character) + HX_(".json",56,f1,d6,c2));
HXLINE(  54)			::String rawJson = null();
HXLINE(  57)			::String path = ::Paths_obj::modFolders(characterPath);
HXLINE(  58)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  59)				::String file = characterPath;
HXDLIN(  59)				if (::hx::IsNull( file )) {
HXLINE(  59)					file = HX_("",00,00,00,00);
            				}
HXDLIN(  59)				path = (HX_("assets/",4c,2a,dc,36) + file);
            			}
HXLINE(  62)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  63)				::String file = ((HX_("images/menucharacters/",6f,fa,bf,a6) + ::MenuCharacter_obj::DEFAULT_CHARACTER) + HX_(".json",56,f1,d6,c2));
HXDLIN(  63)				if (::hx::IsNull( file )) {
HXLINE(  63)					file = HX_("",00,00,00,00);
            				}
HXDLIN(  63)				path = (HX_("assets/",4c,2a,dc,36) + file);
            			}
HXLINE(  65)			rawJson = ::sys::io::File_obj::getContent(path);
HXLINE(  75)			 ::Dynamic charFile =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
HXLINE(  76)			::String key = ( (::String)((HX_("menucharacters/",06,2d,77,01) + charFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic))) );
HXDLIN(  76)			::String library = null();
HXDLIN(  76)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXDLIN(  76)			bool xmlExists = false;
HXDLIN(  76)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  76)				xmlExists = true;
            			}
HXDLIN(  76)			 ::Dynamic _hx_tmp;
HXDLIN(  76)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  76)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  76)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXDLIN(  76)				_hx_tmp = returnAsset;
            			}
HXDLIN(  76)			::String _hx_tmp1;
HXDLIN(  76)			if (xmlExists) {
HXLINE(  76)				_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  76)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  76)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  77)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),( (::String)(charFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic)) ),24,null(),null(),null());
HXLINE(  79)			::String confirmAnim = ( (::String)(charFile->__Field(HX_("confirm_anim",f0,e4,4f,7c),::hx::paccDynamic)) );
HXLINE(  80)			bool _hx_tmp2;
HXDLIN(  80)			if (::hx::IsNotNull( confirmAnim )) {
HXLINE(  80)				_hx_tmp2 = ::hx::IsNotEq( confirmAnim,charFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  80)				_hx_tmp2 = false;
            			}
HXDLIN(  80)			if (_hx_tmp2) {
HXLINE(  82)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),confirmAnim,24,false,null(),null());
HXLINE(  83)				if (::hx::IsNotNull( this->animation->_animations->get(HX_("confirm",00,9d,39,10)) )) {
HXLINE(  84)					this->hasConfirmAnimation = true;
            				}
            			}
HXLINE(  87)			this->set_flipX(::hx::IsEq( charFile->__Field(HX_("flipX",0b,45,92,02),::hx::paccDynamic),true ));
HXLINE(  89)			if (::hx::IsNotEq( charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),1 )) {
HXLINE(  90)				this->scale->set(charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic));
HXLINE(  91)				this->updateHitbox();
            			}
HXLINE(  93)			this->offset->set( ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0), ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1));
HXLINE(  94)			this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
            		else {
HXLINE(  48)			if ((character == HX_("",00,00,00,00))) {
HXLINE(  50)				this->set_visible(false);
HXLINE(  51)				dontPlayAnim = true;
            			}
            			else {
HXLINE(  53)				::String characterPath = ((HX_("images/menucharacters/",6f,fa,bf,a6) + character) + HX_(".json",56,f1,d6,c2));
HXLINE(  54)				::String rawJson = null();
HXLINE(  57)				::String path = ::Paths_obj::modFolders(characterPath);
HXLINE(  58)				if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  59)					::String file = characterPath;
HXDLIN(  59)					if (::hx::IsNull( file )) {
HXLINE(  59)						file = HX_("",00,00,00,00);
            					}
HXDLIN(  59)					path = (HX_("assets/",4c,2a,dc,36) + file);
            				}
HXLINE(  62)				if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  63)					::String file = ((HX_("images/menucharacters/",6f,fa,bf,a6) + ::MenuCharacter_obj::DEFAULT_CHARACTER) + HX_(".json",56,f1,d6,c2));
HXDLIN(  63)					if (::hx::IsNull( file )) {
HXLINE(  63)						file = HX_("",00,00,00,00);
            					}
HXDLIN(  63)					path = (HX_("assets/",4c,2a,dc,36) + file);
            				}
HXLINE(  65)				rawJson = ::sys::io::File_obj::getContent(path);
HXLINE(  75)				 ::Dynamic charFile =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
HXLINE(  76)				::String key = ( (::String)((HX_("menucharacters/",06,2d,77,01) + charFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic))) );
HXDLIN(  76)				::String library = null();
HXDLIN(  76)				 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXDLIN(  76)				bool xmlExists = false;
HXDLIN(  76)				if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  76)					xmlExists = true;
            				}
HXDLIN(  76)				 ::Dynamic _hx_tmp;
HXDLIN(  76)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  76)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  76)					 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXDLIN(  76)					_hx_tmp = returnAsset;
            				}
HXDLIN(  76)				::String _hx_tmp1;
HXDLIN(  76)				if (xmlExists) {
HXLINE(  76)					_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            				}
            				else {
HXLINE(  76)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            				}
HXDLIN(  76)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  77)				this->animation->addByPrefix(HX_("idle",14,a7,b3,45),( (::String)(charFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic)) ),24,null(),null(),null());
HXLINE(  79)				::String confirmAnim = ( (::String)(charFile->__Field(HX_("confirm_anim",f0,e4,4f,7c),::hx::paccDynamic)) );
HXLINE(  80)				bool _hx_tmp2;
HXDLIN(  80)				if (::hx::IsNotNull( confirmAnim )) {
HXLINE(  80)					_hx_tmp2 = ::hx::IsNotEq( confirmAnim,charFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic) );
            				}
            				else {
HXLINE(  80)					_hx_tmp2 = false;
            				}
HXDLIN(  80)				if (_hx_tmp2) {
HXLINE(  82)					this->animation->addByPrefix(HX_("confirm",00,9d,39,10),confirmAnim,24,false,null(),null());
HXLINE(  83)					if (::hx::IsNotNull( this->animation->_animations->get(HX_("confirm",00,9d,39,10)) )) {
HXLINE(  84)						this->hasConfirmAnimation = true;
            					}
            				}
HXLINE(  87)				this->set_flipX(::hx::IsEq( charFile->__Field(HX_("flipX",0b,45,92,02),::hx::paccDynamic),true ));
HXLINE(  89)				if (::hx::IsNotEq( charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),1 )) {
HXLINE(  90)					this->scale->set(charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic));
HXLINE(  91)					this->updateHitbox();
            				}
HXLINE(  93)				this->offset->set( ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0), ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1));
HXLINE(  94)				this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCharacter_obj,changeCharacter,(void))

::String MenuCharacter_obj::DEFAULT_CHARACTER;


::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__new(Float x,::String __o_character) {
	::hx::ObjectPtr< MenuCharacter_obj > __this = new MenuCharacter_obj();
	__this->__construct(x,__o_character);
	return __this;
}

::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,::String __o_character) {
	MenuCharacter_obj *__this = (MenuCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuCharacter_obj), true, "MenuCharacter"));
	*(void **)__this = MenuCharacter_obj::_hx_vtable;
	__this->__construct(x,__o_character);
	return __this;
}

MenuCharacter_obj::MenuCharacter_obj()
{
}

void MenuCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuCharacter);
	HX_MARK_MEMBER_NAME(character,"character");
	HX_MARK_MEMBER_NAME(hasConfirmAnimation,"hasConfirmAnimation");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(character,"character");
	HX_VISIT_MEMBER_NAME(hasConfirmAnimation,"hasConfirmAnimation");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { return ::hx::Val( character ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeCharacter") ) { return ::hx::Val( changeCharacter_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hasConfirmAnimation") ) { return ::hx::Val( hasConfirmAnimation ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MenuCharacter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { outValue = ( DEFAULT_CHARACTER ); return true; }
	}
	return false;
}

::hx::Val MenuCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { character=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hasConfirmAnimation") ) { hasConfirmAnimation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MenuCharacter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { DEFAULT_CHARACTER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MenuCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("character",a9,db,d1,41));
	outFields->push(HX_("hasConfirmAnimation",5e,81,e2,2b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(MenuCharacter_obj,character),HX_("character",a9,db,d1,41)},
	{::hx::fsBool,(int)offsetof(MenuCharacter_obj,hasConfirmAnimation),HX_("hasConfirmAnimation",5e,81,e2,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MenuCharacter_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MenuCharacter_obj::DEFAULT_CHARACTER,HX_("DEFAULT_CHARACTER",2b,e7,14,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MenuCharacter_obj_sMemberFields[] = {
	HX_("character",a9,db,d1,41),
	HX_("hasConfirmAnimation",5e,81,e2,2b),
	HX_("changeCharacter",19,7c,6c,fc),
	::String(null()) };

static void MenuCharacter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuCharacter_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuCharacter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuCharacter_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
};

#endif

::hx::Class MenuCharacter_obj::__mClass;

static ::String MenuCharacter_obj_sStaticFields[] = {
	HX_("DEFAULT_CHARACTER",2b,e7,14,33),
	::String(null())
};

void MenuCharacter_obj::__register()
{
	MenuCharacter_obj _hx_dummy;
	MenuCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuCharacter",ea,99,ab,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MenuCharacter_obj::__GetStatic;
	__mClass->mSetStaticField = &MenuCharacter_obj::__SetStatic;
	__mClass->mMarkFunc = MenuCharacter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MenuCharacter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuCharacter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuCharacter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MenuCharacter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ab0efa272e315d84_26_boot)
HXDLIN(  26)		DEFAULT_CHARACTER = HX_("bf",c4,55,00,00);
            	}
}

