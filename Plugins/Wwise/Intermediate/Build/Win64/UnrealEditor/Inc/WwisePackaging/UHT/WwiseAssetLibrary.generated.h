// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Packaging/WwiseAssetLibrary.h"

#ifdef WWISEPACKAGING_WwiseAssetLibrary_generated_h
#error "WwiseAssetLibrary.generated.h already included, missing '#pragma once' in WwiseAssetLibrary.h"
#endif
#define WWISEPACKAGING_WwiseAssetLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWwiseAssetLibrary *******************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnloadData); \
	DECLARE_FUNCTION(execLoadData);


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_44_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWwiseAssetLibrary, NO_API)


struct Z_Construct_UClass_UWwiseAssetLibrary_Statics;
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibrary_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseAssetLibrary(); \
	friend struct ::Z_Construct_UClass_UWwiseAssetLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WWISEPACKAGING_API UClass* ::Z_Construct_UClass_UWwiseAssetLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UWwiseAssetLibrary, UWwiseFilterableAssetLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WwisePackaging"), Z_Construct_UClass_UWwiseAssetLibrary_NoRegister) \
	DECLARE_SERIALIZER(UWwiseAssetLibrary) \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_44_ARCHIVESERIALIZER


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWwiseAssetLibrary(UWwiseAssetLibrary&&) = delete; \
	UWwiseAssetLibrary(const UWwiseAssetLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseAssetLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseAssetLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWwiseAssetLibrary)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_41_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_44_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWwiseAssetLibrary;

// ********** End Class UWwiseAssetLibrary *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
