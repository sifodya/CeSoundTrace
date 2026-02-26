// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Info/WwiseGroupValueInfoLibrary.h"

#ifdef WWISERESOURCELOADER_WwiseGroupValueInfoLibrary_generated_h
#error "WwiseGroupValueInfoLibrary.generated.h already included, missing '#pragma once' in WwiseGroupValueInfoLibrary.h"
#endif
#define WWISERESOURCELOADER_WwiseGroupValueInfoLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FWwiseGroupValueInfo;

// ********** Begin Class UWwiseGroupValueInfoLibrary **********************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWwiseName); \
	DECLARE_FUNCTION(execSetWwiseShortId); \
	DECLARE_FUNCTION(execSetGroupShortId); \
	DECLARE_FUNCTION(execSetAssetGuid); \
	DECLARE_FUNCTION(execGetWwiseName); \
	DECLARE_FUNCTION(execGetWwiseShortId); \
	DECLARE_FUNCTION(execGetGroupShortId); \
	DECLARE_FUNCTION(execGetAssetGuid); \
	DECLARE_FUNCTION(execBreakStruct); \
	DECLARE_FUNCTION(execMakeStruct);


struct Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics;
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseGroupValueInfoLibrary(); \
	friend struct ::Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WWISERESOURCELOADER_API UClass* ::Z_Construct_UClass_UWwiseGroupValueInfoLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UWwiseGroupValueInfoLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WwiseResourceLoader"), Z_Construct_UClass_UWwiseGroupValueInfoLibrary_NoRegister) \
	DECLARE_SERIALIZER(UWwiseGroupValueInfoLibrary)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWwiseGroupValueInfoLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWwiseGroupValueInfoLibrary(UWwiseGroupValueInfoLibrary&&) = delete; \
	UWwiseGroupValueInfoLibrary(const UWwiseGroupValueInfoLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseGroupValueInfoLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseGroupValueInfoLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWwiseGroupValueInfoLibrary) \
	NO_API virtual ~UWwiseGroupValueInfoLibrary();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h_25_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWwiseGroupValueInfoLibrary;

// ********** End Class UWwiseGroupValueInfoLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
