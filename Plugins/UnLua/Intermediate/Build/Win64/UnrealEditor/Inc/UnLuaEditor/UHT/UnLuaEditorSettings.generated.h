// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnLuaEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNLUAEDITOR_UnLuaEditorSettings_generated_h
#error "UnLuaEditorSettings.generated.h already included, missing '#pragma once' in UnLuaEditorSettings.h"
#endif
#define UNLUAEDITOR_UnLuaEditorSettings_generated_h

#define FID_LuaPro5_5_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorSettings_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaEditorSettings(); \
	friend struct Z_Construct_UClass_UUnLuaEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UUnLuaEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLuaEditor"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("UnLuaEditor");} \



#define FID_LuaPro5_5_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorSettings_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnLuaEditorSettings(UUnLuaEditorSettings&&); \
	UUnLuaEditorSettings(const UUnLuaEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaEditorSettings) \
	NO_API virtual ~UUnLuaEditorSettings();


#define FID_LuaPro5_5_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorSettings_h_39_PROLOG
#define FID_LuaPro5_5_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorSettings_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LuaPro5_5_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorSettings_h_42_INCLASS_NO_PURE_DECLS \
	FID_LuaPro5_5_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorSettings_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUAEDITOR_API UClass* StaticClass<class UUnLuaEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LuaPro5_5_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorSettings_h


#define FOREACH_ENUM_EUPDATEMODE(op) \
	op(EUpdateMode::Start) \
	op(EUpdateMode::Manual) \
	op(EUpdateMode::None) 

enum class EUpdateMode : uint8;
template<> struct TIsUEnumClass<EUpdateMode> { enum { Value = true }; };
template<> UNLUAEDITOR_API UEnum* StaticEnum<EUpdateMode>();

#define FOREACH_ENUM_EHOTRELOADMODE(op) \
	op(EHotReloadMode::Manual) \
	op(EHotReloadMode::Auto) \
	op(EHotReloadMode::Never) 

enum class EHotReloadMode : uint8;
template<> struct TIsUEnumClass<EHotReloadMode> { enum { Value = true }; };
template<> UNLUAEDITOR_API UEnum* StaticEnum<EHotReloadMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
