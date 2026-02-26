// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/CookedData/WwiseGroupValueCookedData.h"

#ifdef WWISERESOURCELOADER_WwiseGroupValueCookedData_generated_h
#error "WwiseGroupValueCookedData.generated.h already included, missing '#pragma once' in WwiseGroupValueCookedData.h"
#endif
#define WWISERESOURCELOADER_WwiseGroupValueCookedData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWwiseGroupValueCookedData ****************************************
struct Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWwiseGroupValueCookedData;
// ********** End ScriptStruct FWwiseGroupValueCookedData ******************************************

// ********** Begin ScriptStruct FWwiseGroupValueCookedDataSet *************************************
struct Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWwiseGroupValueCookedDataSet;
// ********** End ScriptStruct FWwiseGroupValueCookedDataSet ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h

// ********** Begin Enum EWwiseGroupType ***********************************************************
#define FOREACH_ENUM_EWWISEGROUPTYPE(op) \
	op(EWwiseGroupType::Switch) \
	op(EWwiseGroupType::State) \
	op(EWwiseGroupType::Unknown) 

enum class EWwiseGroupType : uint8;
template<> struct TIsUEnumClass<EWwiseGroupType> { enum { Value = true }; };
template<> WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseGroupType>();
// ********** End Enum EWwiseGroupType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
