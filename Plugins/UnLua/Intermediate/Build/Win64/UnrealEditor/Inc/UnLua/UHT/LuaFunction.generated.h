// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuaFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNLUA_LuaFunction_generated_h
#error "LuaFunction.generated.h already included, missing '#pragma once' in LuaFunction.h"
#endif
#define UNLUA_LuaFunction_generated_h

#define FID_LuaPro5_5_Plugins_UnLua_Source_UnLua_Public_LuaFunction_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaFunction(); \
	friend struct Z_Construct_UClass_ULuaFunction_Statics; \
public: \
	DECLARE_CLASS(ULuaFunction, UFunction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), NO_API) \
	DECLARE_SERIALIZER(ULuaFunction)


#define FID_LuaPro5_5_Plugins_UnLua_Source_UnLua_Public_LuaFunction_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULuaFunction(ULuaFunction&&); \
	ULuaFunction(const ULuaFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaFunction) \
	NO_API virtual ~ULuaFunction();


#define FID_LuaPro5_5_Plugins_UnLua_Source_UnLua_Public_LuaFunction_h_27_PROLOG
#define FID_LuaPro5_5_Plugins_UnLua_Source_UnLua_Public_LuaFunction_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LuaPro5_5_Plugins_UnLua_Source_UnLua_Public_LuaFunction_h_30_INCLASS_NO_PURE_DECLS \
	FID_LuaPro5_5_Plugins_UnLua_Source_UnLua_Public_LuaFunction_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUA_API UClass* StaticClass<class ULuaFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LuaPro5_5_Plugins_UnLua_Source_UnLua_Public_LuaFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
