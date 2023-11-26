#include <hxcpp.h>

#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_WeekData
#include <WeekData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1b9a64f7c24482df_31_new,"WeekData","new",0x851ed050,"WeekData.new","WeekData.hx",31,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_52_createWeekFile,"WeekData","createWeekFile",0x4a4409bc,"WeekData.createWeekFile","WeekData.hx",52,0xa959a920)
static const ::String _hx_array_data_0344a85e_2[] = {
	HX_("dad",47,36,4c,00),HX_("bf",c4,55,00,00),HX_("gf",1f,5a,00,00),
};
static const int _hx_array_data_0344a85e_3[] = {
	(int)146,(int)113,(int)253,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_89_reloadWeekFiles,"WeekData","reloadWeekFiles",0xb9249b3a,"WeekData.reloadWeekFiles","WeekData.hx",89,0xa959a920)
static const ::String _hx_array_data_0344a85e_12[] = {
	HX_("mods/",9e,2f,58,0c),HX_("assets/",4c,2a,dc,36),
};
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_188_addWeek,"WeekData","addWeek",0x9b145aa5,"WeekData.addWeek","WeekData.hx",188,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_209_getWeekFile,"WeekData","getWeekFile",0xe9939736,"WeekData.getWeekFile","WeekData.hx",209,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_231_getWeekFileName,"WeekData","getWeekFileName",0x7c2708a1,"WeekData.getWeekFileName","WeekData.hx",231,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_236_getCurrentWeek,"WeekData","getCurrentWeek",0xdc43b1e7,"WeekData.getCurrentWeek","WeekData.hx",236,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_239_setDirectoryFromWeek,"WeekData","setDirectoryFromWeek",0xb5869219,"WeekData.setDirectoryFromWeek","WeekData.hx",239,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_247_loadTheFirstEnabledMod,"WeekData","loadTheFirstEnabledMod",0x4c172d76,"WeekData.loadTheFirstEnabledMod","WeekData.hx",247,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_32_boot,"WeekData","boot",0xedf07642,"WeekData.boot","WeekData.hx",32,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_33_boot,"WeekData","boot",0xedf07642,"WeekData.boot","WeekData.hx",33,0xa959a920)

void WeekData_obj::__construct( ::Dynamic weekFile,::String fileName){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_31_new)
HXLINE(  34)		this->folder = HX_("",00,00,00,00);
HXLINE(  72)		this->songs = ( (::cpp::VirtualArray)(weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) );
HXLINE(  73)		this->weekCharacters = ( (::Array< ::String >)(weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic)) );
HXLINE(  74)		this->weekBackground = ( (::String)(weekFile->__Field(HX_("weekBackground",02,f1,ce,ed),::hx::paccDynamic)) );
HXLINE(  75)		this->weekBefore = ( (::String)(weekFile->__Field(HX_("weekBefore",93,97,02,5d),::hx::paccDynamic)) );
HXLINE(  76)		this->storyName = ( (::String)(weekFile->__Field(HX_("storyName",e0,50,20,29),::hx::paccDynamic)) );
HXLINE(  77)		this->weekName = ( (::String)(weekFile->__Field(HX_("weekName",5f,08,2f,30),::hx::paccDynamic)) );
HXLINE(  78)		this->freeplayColor = ( (::Array< int >)(weekFile->__Field(HX_("freeplayColor",a3,0c,53,32),::hx::paccDynamic)) );
HXLINE(  79)		this->startUnlocked = ( (bool)(weekFile->__Field(HX_("startUnlocked",a5,96,c9,60),::hx::paccDynamic)) );
HXLINE(  80)		this->hiddenUntilUnlocked = ( (bool)(weekFile->__Field(HX_("hiddenUntilUnlocked",17,ed,31,dc),::hx::paccDynamic)) );
HXLINE(  81)		this->hideStoryMode = ( (bool)(weekFile->__Field(HX_("hideStoryMode",d6,b4,4e,4c),::hx::paccDynamic)) );
HXLINE(  82)		this->hideFreeplay = ( (bool)(weekFile->__Field(HX_("hideFreeplay",82,13,8c,e3),::hx::paccDynamic)) );
HXLINE(  83)		this->difficulties = ( (::String)(weekFile->__Field(HX_("difficulties",59,c7,5e,02),::hx::paccDynamic)) );
HXLINE(  85)		this->fileName = fileName;
            	}

Dynamic WeekData_obj::__CreateEmpty() { return new WeekData_obj; }

void *WeekData_obj::_hx_vtable = 0;

Dynamic WeekData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WeekData_obj > _hx_result = new WeekData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WeekData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ed59b1e;
}

 ::haxe::ds::StringMap WeekData_obj::weeksLoaded;

::Array< ::String > WeekData_obj::weeksList;

 ::Dynamic WeekData_obj::createWeekFile(){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_52_createWeekFile)
HXLINE(  53)		 ::Dynamic weekFile =  ::Dynamic(::hx::Anon_obj::Create(12)
            			->setFixed(0,HX_("songs",fe,36,c7,80),::cpp::VirtualArray_obj::__new(3)->init(0,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Bopeebo",90,29,16,da))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)))->init(1,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Fresh",4e,f6,b3,99))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Dad Battle",31,46,15,16))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253))))
            			->setFixed(1,HX_("hiddenUntilUnlocked",17,ed,31,dc),false)
            			->setFixed(2,HX_("hideFreeplay",82,13,8c,e3),false)
            			->setFixed(3,HX_("weekBackground",02,f1,ce,ed),HX_("stage",be,6a,0b,84))
            			->setFixed(4,HX_("difficulties",59,c7,5e,02),HX_("",00,00,00,00))
            			->setFixed(5,HX_("weekCharacters",be,b5,7f,1d),::Array_obj< ::String >::fromData( _hx_array_data_0344a85e_2,3))
            			->setFixed(6,HX_("storyName",e0,50,20,29),HX_("Your New Week",e1,5b,59,b7))
            			->setFixed(7,HX_("weekName",5f,08,2f,30),HX_("Custom Week",c3,aa,e2,8c))
            			->setFixed(8,HX_("freeplayColor",a3,0c,53,32),::Array_obj< int >::fromData( _hx_array_data_0344a85e_3,3))
            			->setFixed(9,HX_("hideStoryMode",d6,b4,4e,4c),false)
            			->setFixed(10,HX_("weekBefore",93,97,02,5d),HX_("tutorial",9e,8f,b5,82))
            			->setFixed(11,HX_("startUnlocked",a5,96,c9,60),true));
HXLINE(  67)		return weekFile;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,createWeekFile,return )

void WeekData_obj::reloadWeekFiles( ::Dynamic __o_isStoryMode){
            		 ::Dynamic isStoryMode = __o_isStoryMode;
            		if (::hx::IsNull(__o_isStoryMode)) isStoryMode = false;
            	HX_GC_STACKFRAME(&_hx_pos_1b9a64f7c24482df_89_reloadWeekFiles)
HXLINE(  90)		::WeekData_obj::weeksList = ::Array_obj< ::String >::__new(0);
HXLINE(  91)		::WeekData_obj::weeksLoaded->clear();
HXLINE(  93)		::Array< ::String > disabledMods = ::Array_obj< ::String >::__new(0);
HXLINE(  94)		::String modsListPath = HX_("modsList.txt",f1,ca,08,ac);
HXLINE(  95)		::Array< ::String > directories = ::Array_obj< ::String >::fromData( _hx_array_data_0344a85e_12,2);
HXLINE(  96)		int originalLength = directories->length;
HXLINE(  97)		if (::sys::FileSystem_obj::exists(modsListPath)) {
HXLINE(  99)			::Array< ::String > stuff = ::CoolUtil_obj::coolTextFile(modsListPath);
HXLINE( 100)			{
HXLINE( 100)				int _g = 0;
HXDLIN( 100)				int _g1 = stuff->length;
HXDLIN( 100)				while((_g < _g1)){
HXLINE( 100)					_g = (_g + 1);
HXDLIN( 100)					int i = (_g - 1);
HXLINE( 102)					::Array< ::String > splitName = ::StringTools_obj::trim(stuff->__get(i)).split(HX_("|",7c,00,00,00));
HXLINE( 103)					if ((splitName->__get(1) == HX_("0",30,00,00,00))) {
HXLINE( 105)						disabledMods->push(splitName->__get(0));
            					}
            					else {
HXLINE( 109)						::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,HX_("mods/",9e,2f,58,0c))->init(1,splitName->__get(0)));
HXLINE( 111)						bool _hx_tmp;
HXDLIN( 111)						bool _hx_tmp1;
HXDLIN( 111)						bool _hx_tmp2;
HXDLIN( 111)						if (::sys::FileSystem_obj::isDirectory(path)) {
HXLINE( 111)							_hx_tmp2 = !(::Paths_obj::ignoreModFolders->contains(splitName->__get(0)));
            						}
            						else {
HXLINE( 111)							_hx_tmp2 = false;
            						}
HXDLIN( 111)						if (_hx_tmp2) {
HXLINE( 111)							_hx_tmp1 = !(disabledMods->contains(splitName->__get(0)));
            						}
            						else {
HXLINE( 111)							_hx_tmp1 = false;
            						}
HXDLIN( 111)						if (_hx_tmp1) {
HXLINE( 111)							_hx_tmp = !(directories->contains((path + HX_("/",2f,00,00,00))));
            						}
            						else {
HXLINE( 111)							_hx_tmp = false;
            						}
HXDLIN( 111)						if (_hx_tmp) {
HXLINE( 113)							directories->push((path + HX_("/",2f,00,00,00)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 120)		::Array< ::String > modsDirectories = ::Paths_obj::getModDirectories();
HXLINE( 121)		{
HXLINE( 121)			int _g = 0;
HXDLIN( 121)			while((_g < modsDirectories->length)){
HXLINE( 121)				::String folder = modsDirectories->__get(_g);
HXDLIN( 121)				_g = (_g + 1);
HXLINE( 123)				::String pathThing = (::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,HX_("mods/",9e,2f,58,0c))->init(1,folder)) + HX_("/",2f,00,00,00));
HXLINE( 124)				bool _hx_tmp;
HXDLIN( 124)				if (!(disabledMods->contains(folder))) {
HXLINE( 124)					_hx_tmp = !(directories->contains(pathThing));
            				}
            				else {
HXLINE( 124)					_hx_tmp = false;
            				}
HXDLIN( 124)				if (_hx_tmp) {
HXLINE( 126)					directories->push(pathThing);
            				}
            			}
            		}
HXLINE( 135)		::String file = HX_("weeks/weekList.txt",c4,73,97,b1);
HXDLIN( 135)		if (::hx::IsNull( file )) {
HXLINE( 135)			file = HX_("",00,00,00,00);
            		}
HXDLIN( 135)		::Array< ::String > sexList = ::CoolUtil_obj::coolTextFile((HX_("assets/",4c,2a,dc,36) + file));
HXLINE( 136)		{
HXLINE( 136)			int _g1 = 0;
HXDLIN( 136)			int _g2 = sexList->length;
HXDLIN( 136)			while((_g1 < _g2)){
HXLINE( 136)				_g1 = (_g1 + 1);
HXDLIN( 136)				int i = (_g1 - 1);
HXLINE( 137)				{
HXLINE( 137)					int _g = 0;
HXDLIN( 137)					int _g2 = directories->length;
HXDLIN( 137)					while((_g < _g2)){
HXLINE( 137)						_g = (_g + 1);
HXDLIN( 137)						int j = (_g - 1);
HXLINE( 138)						::String fileToCheck = (((directories->__get(j) + HX_("weeks/",50,a9,04,ff)) + sexList->__get(i)) + HX_(".json",56,f1,d6,c2));
HXLINE( 139)						if (!(::WeekData_obj::weeksLoaded->exists(sexList->__get(i)))) {
HXLINE( 140)							 ::Dynamic week = ::WeekData_obj::getWeekFile(fileToCheck);
HXLINE( 141)							if (::hx::IsNotNull( week )) {
HXLINE( 142)								 ::WeekData weekFile =  ::WeekData_obj::__alloc( HX_CTX ,week,sexList->__get(i));
HXLINE( 145)								if ((j >= originalLength)) {
HXLINE( 146)									weekFile->folder = directories->__get(j).substring(HX_("mods/",9e,2f,58,0c).length,(directories->__get(j).length - 1));
            								}
HXLINE( 150)								bool _hx_tmp;
HXDLIN( 150)								if (::hx::IsNotNull( weekFile )) {
HXLINE( 150)									bool _hx_tmp1;
HXDLIN( 150)									if (::hx::IsNotNull( isStoryMode )) {
HXLINE( 150)										if (( (bool)(isStoryMode) )) {
HXLINE( 150)											_hx_tmp1 = !(weekFile->hideStoryMode);
            										}
            										else {
HXLINE( 150)											_hx_tmp1 = false;
            										}
            									}
            									else {
HXLINE( 150)										_hx_tmp1 = true;
            									}
HXDLIN( 150)									if (!(_hx_tmp1)) {
HXLINE( 150)										if (!(( (bool)(isStoryMode) ))) {
HXLINE( 150)											_hx_tmp = !(weekFile->hideFreeplay);
            										}
            										else {
HXLINE( 150)											_hx_tmp = false;
            										}
            									}
            									else {
HXLINE( 150)										_hx_tmp = true;
            									}
            								}
            								else {
HXLINE( 150)									_hx_tmp = false;
            								}
HXDLIN( 150)								if (_hx_tmp) {
HXLINE( 151)									::WeekData_obj::weeksLoaded->set(sexList->__get(i),weekFile);
HXLINE( 152)									::WeekData_obj::weeksList->push(sexList->__get(i));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 160)		{
HXLINE( 160)			int _g3 = 0;
HXDLIN( 160)			int _g4 = directories->length;
HXDLIN( 160)			while((_g3 < _g4)){
HXLINE( 160)				_g3 = (_g3 + 1);
HXDLIN( 160)				int i = (_g3 - 1);
HXLINE( 161)				::String directory = (directories->__get(i) + HX_("weeks/",50,a9,04,ff));
HXLINE( 162)				if (::sys::FileSystem_obj::exists(directory)) {
HXLINE( 163)					::Array< ::String > listOfWeeks = ::CoolUtil_obj::coolTextFile((directory + HX_("weekList.txt",74,12,92,5d)));
HXLINE( 164)					{
HXLINE( 164)						int _g = 0;
HXDLIN( 164)						while((_g < listOfWeeks->length)){
HXLINE( 164)							::String daWeek = listOfWeeks->__get(_g);
HXDLIN( 164)							_g = (_g + 1);
HXLINE( 166)							::String path = ((directory + daWeek) + HX_(".json",56,f1,d6,c2));
HXLINE( 167)							if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 169)								::WeekData_obj::addWeek(daWeek,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
HXLINE( 173)					{
HXLINE( 173)						int _g1 = 0;
HXDLIN( 173)						::Array< ::String > _g2 = ::sys::FileSystem_obj::readDirectory(directory);
HXDLIN( 173)						while((_g1 < _g2->length)){
HXLINE( 173)							::String file = _g2->__get(_g1);
HXDLIN( 173)							_g1 = (_g1 + 1);
HXLINE( 175)							::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,directory)->init(1,file));
HXLINE( 176)							bool _hx_tmp;
HXDLIN( 176)							if (!(::sys::FileSystem_obj::isDirectory(path))) {
HXLINE( 176)								_hx_tmp = ::StringTools_obj::endsWith(file,HX_(".json",56,f1,d6,c2));
            							}
            							else {
HXLINE( 176)								_hx_tmp = false;
            							}
HXDLIN( 176)							if (_hx_tmp) {
HXLINE( 178)								::String _hx_tmp = file.substr(0,(file.length - 5));
HXDLIN( 178)								::WeekData_obj::addWeek(_hx_tmp,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,reloadWeekFiles,(void))

void WeekData_obj::addWeek(::String weekToCheck,::String path,::String directory,int i,int originalLength){
            	HX_GC_STACKFRAME(&_hx_pos_1b9a64f7c24482df_188_addWeek)
HXDLIN( 188)		if (!(::WeekData_obj::weeksLoaded->exists(weekToCheck))) {
HXLINE( 190)			 ::Dynamic week = ::WeekData_obj::getWeekFile(path);
HXLINE( 191)			if (::hx::IsNotNull( week )) {
HXLINE( 193)				 ::WeekData weekFile =  ::WeekData_obj::__alloc( HX_CTX ,week,weekToCheck);
HXLINE( 194)				if ((i >= originalLength)) {
HXLINE( 197)					weekFile->folder = directory.substring(HX_("mods/",9e,2f,58,0c).length,(directory.length - 1));
            				}
HXLINE( 200)				bool _hx_tmp;
HXDLIN( 200)				bool _hx_tmp1;
HXDLIN( 200)				if (::PlayState_obj::isStoryMode) {
HXLINE( 200)					_hx_tmp1 = !(weekFile->hideStoryMode);
            				}
            				else {
HXLINE( 200)					_hx_tmp1 = false;
            				}
HXDLIN( 200)				if (!(_hx_tmp1)) {
HXLINE( 200)					if (!(::PlayState_obj::isStoryMode)) {
HXLINE( 200)						_hx_tmp = !(weekFile->hideFreeplay);
            					}
            					else {
HXLINE( 200)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 200)					_hx_tmp = true;
            				}
HXDLIN( 200)				if (_hx_tmp) {
HXLINE( 202)					::WeekData_obj::weeksLoaded->set(weekToCheck,weekFile);
HXLINE( 203)					::WeekData_obj::weeksList->push(weekToCheck);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(WeekData_obj,addWeek,(void))

 ::Dynamic WeekData_obj::getWeekFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_1b9a64f7c24482df_209_getWeekFile)
HXLINE( 210)		::String rawJson = null();
HXLINE( 212)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 213)			rawJson = ::sys::io::File_obj::getContent(path);
            		}
HXLINE( 221)		bool _hx_tmp;
HXDLIN( 221)		if (::hx::IsNotNull( rawJson )) {
HXLINE( 221)			_hx_tmp = (rawJson.length > 0);
            		}
            		else {
HXLINE( 221)			_hx_tmp = false;
            		}
HXDLIN( 221)		if (_hx_tmp) {
HXLINE( 222)			return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
            		}
HXLINE( 224)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,getWeekFile,return )

::String WeekData_obj::getWeekFileName(){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_231_getWeekFileName)
HXDLIN( 231)		return ::WeekData_obj::weeksList->__get(::PlayState_obj::storyWeek);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getWeekFileName,return )

 ::WeekData WeekData_obj::getCurrentWeek(){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_236_getCurrentWeek)
HXDLIN( 236)		return ( ( ::WeekData)(::WeekData_obj::weeksLoaded->get(::WeekData_obj::weeksList->__get(::PlayState_obj::storyWeek))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getCurrentWeek,return )

void WeekData_obj::setDirectoryFromWeek( ::WeekData data){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_239_setDirectoryFromWeek)
HXLINE( 240)		::Paths_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 241)		bool _hx_tmp;
HXDLIN( 241)		bool _hx_tmp1;
HXDLIN( 241)		if (::hx::IsNotNull( data )) {
HXLINE( 241)			_hx_tmp1 = ::hx::IsNotNull( data->folder );
            		}
            		else {
HXLINE( 241)			_hx_tmp1 = false;
            		}
HXDLIN( 241)		if (_hx_tmp1) {
HXLINE( 241)			_hx_tmp = (data->folder.length > 0);
            		}
            		else {
HXLINE( 241)			_hx_tmp = false;
            		}
HXDLIN( 241)		if (_hx_tmp) {
HXLINE( 242)			::Paths_obj::currentModDirectory = data->folder;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,setDirectoryFromWeek,(void))

void WeekData_obj::loadTheFirstEnabledMod(){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_247_loadTheFirstEnabledMod)
HXLINE( 248)		::Paths_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 251)		if (::sys::FileSystem_obj::exists(HX_("modsList.txt",f1,ca,08,ac))) {
HXLINE( 253)			::Array< ::String > list = ::CoolUtil_obj::listFromString(::sys::io::File_obj::getContent(HX_("modsList.txt",f1,ca,08,ac)));
HXLINE( 254)			bool foundTheTop = false;
HXLINE( 255)			{
HXLINE( 255)				int _g = 0;
HXDLIN( 255)				while((_g < list->length)){
HXLINE( 255)					::String i = list->__get(_g);
HXDLIN( 255)					_g = (_g + 1);
HXLINE( 257)					::Array< ::String > dat = i.split(HX_("|",7c,00,00,00));
HXLINE( 258)					bool _hx_tmp;
HXDLIN( 258)					if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE( 258)						_hx_tmp = !(foundTheTop);
            					}
            					else {
HXLINE( 258)						_hx_tmp = false;
            					}
HXDLIN( 258)					if (_hx_tmp) {
HXLINE( 260)						foundTheTop = true;
HXLINE( 261)						::Paths_obj::currentModDirectory = dat->__get(0);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,loadTheFirstEnabledMod,(void))


WeekData_obj::WeekData_obj()
{
}

void WeekData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeekData);
	HX_MARK_MEMBER_NAME(folder,"folder");
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_MARK_MEMBER_NAME(weekBackground,"weekBackground");
	HX_MARK_MEMBER_NAME(weekBefore,"weekBefore");
	HX_MARK_MEMBER_NAME(storyName,"storyName");
	HX_MARK_MEMBER_NAME(weekName,"weekName");
	HX_MARK_MEMBER_NAME(freeplayColor,"freeplayColor");
	HX_MARK_MEMBER_NAME(startUnlocked,"startUnlocked");
	HX_MARK_MEMBER_NAME(hiddenUntilUnlocked,"hiddenUntilUnlocked");
	HX_MARK_MEMBER_NAME(hideStoryMode,"hideStoryMode");
	HX_MARK_MEMBER_NAME(hideFreeplay,"hideFreeplay");
	HX_MARK_MEMBER_NAME(difficulties,"difficulties");
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_END_CLASS();
}

void WeekData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(folder,"folder");
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_VISIT_MEMBER_NAME(weekBackground,"weekBackground");
	HX_VISIT_MEMBER_NAME(weekBefore,"weekBefore");
	HX_VISIT_MEMBER_NAME(storyName,"storyName");
	HX_VISIT_MEMBER_NAME(weekName,"weekName");
	HX_VISIT_MEMBER_NAME(freeplayColor,"freeplayColor");
	HX_VISIT_MEMBER_NAME(startUnlocked,"startUnlocked");
	HX_VISIT_MEMBER_NAME(hiddenUntilUnlocked,"hiddenUntilUnlocked");
	HX_VISIT_MEMBER_NAME(hideStoryMode,"hideStoryMode");
	HX_VISIT_MEMBER_NAME(hideFreeplay,"hideFreeplay");
	HX_VISIT_MEMBER_NAME(difficulties,"difficulties");
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
}

::hx::Val WeekData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { return ::hx::Val( folder ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekName") ) { return ::hx::Val( weekName ); }
		if (HX_FIELD_EQ(inName,"fileName") ) { return ::hx::Val( fileName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyName") ) { return ::hx::Val( storyName ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekBefore") ) { return ::hx::Val( weekBefore ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideFreeplay") ) { return ::hx::Val( hideFreeplay ); }
		if (HX_FIELD_EQ(inName,"difficulties") ) { return ::hx::Val( difficulties ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeplayColor") ) { return ::hx::Val( freeplayColor ); }
		if (HX_FIELD_EQ(inName,"startUnlocked") ) { return ::hx::Val( startUnlocked ); }
		if (HX_FIELD_EQ(inName,"hideStoryMode") ) { return ::hx::Val( hideStoryMode ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { return ::hx::Val( weekCharacters ); }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { return ::hx::Val( weekBackground ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hiddenUntilUnlocked") ) { return ::hx::Val( hiddenUntilUnlocked ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WeekData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"addWeek") ) { outValue = addWeek_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"weeksList") ) { outValue = ( weeksList ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weeksLoaded") ) { outValue = ( weeksLoaded ); return true; }
		if (HX_FIELD_EQ(inName,"getWeekFile") ) { outValue = getWeekFile_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createWeekFile") ) { outValue = createWeekFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCurrentWeek") ) { outValue = getCurrentWeek_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"reloadWeekFiles") ) { outValue = reloadWeekFiles_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getWeekFileName") ) { outValue = getWeekFileName_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setDirectoryFromWeek") ) { outValue = setDirectoryFromWeek_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"loadTheFirstEnabledMod") ) { outValue = loadTheFirstEnabledMod_dyn(); return true; }
	}
	return false;
}

::hx::Val WeekData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { folder=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekName") ) { weekName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyName") ) { storyName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekBefore") ) { weekBefore=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideFreeplay") ) { hideFreeplay=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"difficulties") ) { difficulties=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeplayColor") ) { freeplayColor=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startUnlocked") ) { startUnlocked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideStoryMode") ) { hideStoryMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { weekCharacters=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { weekBackground=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hiddenUntilUnlocked") ) { hiddenUntilUnlocked=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WeekData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"weeksList") ) { weeksList=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weeksLoaded") ) { weeksLoaded=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void WeekData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("folder",ae,76,90,f9));
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("weekCharacters",be,b5,7f,1d));
	outFields->push(HX_("weekBackground",02,f1,ce,ed));
	outFields->push(HX_("weekBefore",93,97,02,5d));
	outFields->push(HX_("storyName",e0,50,20,29));
	outFields->push(HX_("weekName",5f,08,2f,30));
	outFields->push(HX_("freeplayColor",a3,0c,53,32));
	outFields->push(HX_("startUnlocked",a5,96,c9,60));
	outFields->push(HX_("hiddenUntilUnlocked",17,ed,31,dc));
	outFields->push(HX_("hideStoryMode",d6,b4,4e,4c));
	outFields->push(HX_("hideFreeplay",82,13,8c,e3));
	outFields->push(HX_("difficulties",59,c7,5e,02));
	outFields->push(HX_("fileName",e7,5a,43,62));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WeekData_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(WeekData_obj,folder),HX_("folder",ae,76,90,f9)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(WeekData_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(WeekData_obj,weekCharacters),HX_("weekCharacters",be,b5,7f,1d)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekBackground),HX_("weekBackground",02,f1,ce,ed)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekBefore),HX_("weekBefore",93,97,02,5d)},
	{::hx::fsString,(int)offsetof(WeekData_obj,storyName),HX_("storyName",e0,50,20,29)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekName),HX_("weekName",5f,08,2f,30)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(WeekData_obj,freeplayColor),HX_("freeplayColor",a3,0c,53,32)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,startUnlocked),HX_("startUnlocked",a5,96,c9,60)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hiddenUntilUnlocked),HX_("hiddenUntilUnlocked",17,ed,31,dc)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hideStoryMode),HX_("hideStoryMode",d6,b4,4e,4c)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hideFreeplay),HX_("hideFreeplay",82,13,8c,e3)},
	{::hx::fsString,(int)offsetof(WeekData_obj,difficulties),HX_("difficulties",59,c7,5e,02)},
	{::hx::fsString,(int)offsetof(WeekData_obj,fileName),HX_("fileName",e7,5a,43,62)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo WeekData_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &WeekData_obj::weeksLoaded,HX_("weeksLoaded",64,5b,41,21)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &WeekData_obj::weeksList,HX_("weeksList",fd,49,e7,38)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WeekData_obj_sMemberFields[] = {
	HX_("folder",ae,76,90,f9),
	HX_("songs",fe,36,c7,80),
	HX_("weekCharacters",be,b5,7f,1d),
	HX_("weekBackground",02,f1,ce,ed),
	HX_("weekBefore",93,97,02,5d),
	HX_("storyName",e0,50,20,29),
	HX_("weekName",5f,08,2f,30),
	HX_("freeplayColor",a3,0c,53,32),
	HX_("startUnlocked",a5,96,c9,60),
	HX_("hiddenUntilUnlocked",17,ed,31,dc),
	HX_("hideStoryMode",d6,b4,4e,4c),
	HX_("hideFreeplay",82,13,8c,e3),
	HX_("difficulties",59,c7,5e,02),
	HX_("fileName",e7,5a,43,62),
	::String(null()) };

static void WeekData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeekData_obj::weeksLoaded,"weeksLoaded");
	HX_MARK_MEMBER_NAME(WeekData_obj::weeksList,"weeksList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WeekData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeekData_obj::weeksLoaded,"weeksLoaded");
	HX_VISIT_MEMBER_NAME(WeekData_obj::weeksList,"weeksList");
};

#endif

::hx::Class WeekData_obj::__mClass;

static ::String WeekData_obj_sStaticFields[] = {
	HX_("weeksLoaded",64,5b,41,21),
	HX_("weeksList",fd,49,e7,38),
	HX_("createWeekFile",ac,e3,25,7d),
	HX_("reloadWeekFiles",4a,73,e1,0b),
	HX_("addWeek",b5,a2,32,8b),
	HX_("getWeekFile",46,27,df,50),
	HX_("getWeekFileName",b1,e0,e3,ce),
	HX_("getCurrentWeek",d7,8b,25,0f),
	HX_("setDirectoryFromWeek",09,80,f0,74),
	HX_("loadTheFirstEnabledMod",66,77,4c,2c),
	::String(null())
};

void WeekData_obj::__register()
{
	WeekData_obj _hx_dummy;
	WeekData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WeekData",5e,a8,44,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WeekData_obj::__GetStatic;
	__mClass->mSetStaticField = &WeekData_obj::__SetStatic;
	__mClass->mMarkFunc = WeekData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WeekData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WeekData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WeekData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WeekData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WeekData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WeekData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WeekData_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_1b9a64f7c24482df_32_boot)
HXDLIN(  32)		weeksLoaded =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_33_boot)
HXDLIN(  33)		weeksList = ::Array_obj< ::String >::__new(0);
            	}
}

