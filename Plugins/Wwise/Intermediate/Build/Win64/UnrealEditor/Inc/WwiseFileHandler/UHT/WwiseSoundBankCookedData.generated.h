// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/CookedData/WwiseSoundBankCookedData.h"

#ifdef WWISEFILEHANDLER_WwiseSoundBankCookedData_generated_h
#error "WwiseSoundBankCookedData.generated.h already included, missing '#pragma once' in WwiseSoundBankCookedData.h"
#endif
#define WWISEFILEHANDLER_WwiseSoundBankCookedData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWwiseSoundBankCookedData *****************************************
struct Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWwiseSoundBankCookedData;
// ********** End ScriptStruct FWwiseSoundBankCookedData *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h

// ********** Begin Enum EWwiseSoundBankType *******************************************************
#define FOREACH_ENUM_EWWISESOUNDBANKTYPE(op) \
	op(EWwiseSoundBankType::User) \
	op(EWwiseSoundBankType::Event) \
	op(EWwiseSoundBankType::Bus) 

enum class EWwiseSoundBankType : uint8;
template<> struct TIsUEnumClass<EWwiseSoundBankType> { enum { Value = true }; };
template<> WWISEFILEHANDLER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseSoundBankType>();
// ********** End Enum EWwiseSoundBankType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
