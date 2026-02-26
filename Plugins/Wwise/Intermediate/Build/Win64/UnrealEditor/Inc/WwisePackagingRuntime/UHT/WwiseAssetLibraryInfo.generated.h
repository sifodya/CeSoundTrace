// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Packaging/WwiseAssetLibraryInfo.h"

#ifdef WWISEPACKAGINGRUNTIME_WwiseAssetLibraryInfo_generated_h
#error "WwiseAssetLibraryInfo.generated.h already included, missing '#pragma once' in WwiseAssetLibraryInfo.h"
#endif
#define WWISEPACKAGINGRUNTIME_WwiseAssetLibraryInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWwiseAssetLibraryRef *********************************************
struct Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWwiseAssetLibraryRef;
// ********** End ScriptStruct FWwiseAssetLibraryRef ***********************************************

// ********** Begin ScriptStruct FWwiseAssetLibraryInfo ********************************************
struct Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWwiseAssetLibraryInfo;
// ********** End ScriptStruct FWwiseAssetLibraryInfo **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h

// ********** Begin Enum EWwiseAssetLibraryRefType *************************************************
#define FOREACH_ENUM_EWWISEASSETLIBRARYREFTYPE(op) \
	op(EWwiseAssetLibraryRefType::Unknown) \
	op(EWwiseAssetLibraryRefType::InitBank) \
	op(EWwiseAssetLibraryRefType::SoundBank) \
	op(EWwiseAssetLibraryRefType::Media) \
	op(EWwiseAssetLibraryRefType::ExternalSource) 

enum class EWwiseAssetLibraryRefType;
template<> struct TIsUEnumClass<EWwiseAssetLibraryRefType> { enum { Value = true }; };
template<> WWISEPACKAGINGRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseAssetLibraryRefType>();
// ********** End Enum EWwiseAssetLibraryRefType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
