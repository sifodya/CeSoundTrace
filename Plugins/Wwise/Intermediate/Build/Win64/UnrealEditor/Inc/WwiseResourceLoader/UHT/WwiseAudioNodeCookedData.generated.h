// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/CookedData/WwiseAudioNodeCookedData.h"

#ifdef WWISERESOURCELOADER_WwiseAudioNodeCookedData_generated_h
#error "WwiseAudioNodeCookedData.generated.h already included, missing '#pragma once' in WwiseAudioNodeCookedData.h"
#endif
#define WWISERESOURCELOADER_WwiseAudioNodeCookedData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWwiseAudioNodeCookedData *****************************************
struct Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioNodeCookedData_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWwiseAudioNodeCookedData;
// ********** End ScriptStruct FWwiseAudioNodeCookedData *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioNodeCookedData_h

// ********** Begin Enum EWwiseAssetDestroyOptions *************************************************
#define FOREACH_ENUM_EWWISEASSETDESTROYOPTIONS(op) \
	op(EWwiseAssetDestroyOptions::StopEventOnDestroy) \
	op(EWwiseAssetDestroyOptions::WaitForEventEnd) 

enum class EWwiseAssetDestroyOptions : uint8;
template<> struct TIsUEnumClass<EWwiseAssetDestroyOptions> { enum { Value = true }; };
template<> WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseAssetDestroyOptions>();
// ********** End Enum EWwiseAssetDestroyOptions ***************************************************

// ********** Begin Enum EWwiseAudioNodeLoading ****************************************************
#define FOREACH_ENUM_EWWISEAUDIONODELOADING(op) \
	op(EWwiseAudioNodeLoading::AlwaysLoad) \
	op(EWwiseAudioNodeLoading::LoadOnReference) \
	op(EWwiseAudioNodeLoading::LoadOnResolve) \
	op(EWwiseAudioNodeLoading::LoadOnEnqueue) 

enum class EWwiseAudioNodeLoading : uint8;
template<> struct TIsUEnumClass<EWwiseAudioNodeLoading> { enum { Value = true }; };
template<> WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseAudioNodeLoading>();
// ********** End Enum EWwiseAudioNodeLoading ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
