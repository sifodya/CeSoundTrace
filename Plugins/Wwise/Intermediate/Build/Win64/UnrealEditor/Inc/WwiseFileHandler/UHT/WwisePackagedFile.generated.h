// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/WwisePackagedFile.h"

#ifdef WWISEFILEHANDLER_WwisePackagedFile_generated_h
#error "WwisePackagedFile.generated.h already included, missing '#pragma once' in WwisePackagedFile.h"
#endif
#define WWISEFILEHANDLER_WwisePackagedFile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWwisePackagedFile ************************************************
struct Z_Construct_UScriptStruct_FWwisePackagedFile_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwisePackagedFile_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwisePackagedFile_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWwisePackagedFile;
// ********** End ScriptStruct FWwisePackagedFile **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwisePackagedFile_h

// ********** Begin Enum EWwisePackagingStrategy ***************************************************
#define FOREACH_ENUM_EWWISEPACKAGINGSTRATEGY(op) \
	op(EWwisePackagingStrategy::Source) \
	op(EWwisePackagingStrategy::AdditionalFile) \
	op(EWwisePackagingStrategy::HybridAdditionalFile) \
	op(EWwisePackagingStrategy::BulkData) \
	op(EWwisePackagingStrategy::External) 

enum class EWwisePackagingStrategy : uint8;
template<> struct TIsUEnumClass<EWwisePackagingStrategy> { enum { Value = true }; };
template<> WWISEFILEHANDLER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwisePackagingStrategy>();
// ********** End Enum EWwisePackagingStrategy *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
