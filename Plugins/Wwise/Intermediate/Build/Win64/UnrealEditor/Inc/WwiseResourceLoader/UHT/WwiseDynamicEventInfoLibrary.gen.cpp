// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseDynamicEventInfoLibrary.h"
#include "Wwise/Info/WwiseDialogueEventInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseDynamicEventInfoLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseDynamicEventInfoLibrary();
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_NoRegister();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueEventInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function BreakStruct ***********************
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventBreakStruct_Parms
	{
		FWwiseDialogueEventInfo Ref;
		FGuid OutWwiseGuid;
		int32 OutWwiseShortId;
		FString OutWwiseName;
		EWwiseAudioNodeLoading AudioNodeLoading;
		EWwiseAssetDestroyOptions OutDestroyOptions;
		int32 OutHardCodedSoundBankShortId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEventInfo" },
		{ "DisplayName", "Break DynamicEventInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakStruct constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutWwiseGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutWwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutWwiseName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioNodeLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioNodeLoading;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutDestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutDestroyOptions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutHardCodedSoundBankShortId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakStruct constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakStruct Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventBreakStruct_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseGuid = { "OutWwiseGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventBreakStruct_Parms, OutWwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId = { "OutWwiseShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventBreakStruct_Parms, OutWwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName = { "OutWwiseName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventBreakStruct_Parms, OutWwiseName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_AudioNodeLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_AudioNodeLoading = { "AudioNodeLoading", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventBreakStruct_Parms, AudioNodeLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading, METADATA_PARAMS(0, nullptr) }; // 3114630479
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions = { "OutDestroyOptions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventBreakStruct_Parms, OutDestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, METADATA_PARAMS(0, nullptr) }; // 1375943211
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutHardCodedSoundBankShortId = { "OutHardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventBreakStruct_Parms, OutHardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_AudioNodeLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_AudioNodeLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::NewProp_OutHardCodedSoundBankShortId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::PropPointers) < 2048);
// ********** End Function BreakStruct Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "BreakStruct", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::WwiseDynamicEventInfoLibrary_eventBreakStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::WwiseDynamicEventInfoLibrary_eventBreakStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execBreakStruct)
{
	P_GET_STRUCT(FWwiseDialogueEventInfo,Z_Param_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutWwiseGuid);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWwiseShortId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutWwiseName);
	P_GET_ENUM_REF(EWwiseAudioNodeLoading,Z_Param_Out_AudioNodeLoading);
	P_GET_ENUM_REF(EWwiseAssetDestroyOptions,Z_Param_Out_OutDestroyOptions);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWwiseDynamicEventInfoLibrary::BreakStruct(Z_Param_Ref,Z_Param_Out_OutWwiseGuid,Z_Param_Out_OutWwiseShortId,Z_Param_Out_OutWwiseName,(EWwiseAudioNodeLoading&)(Z_Param_Out_AudioNodeLoading),(EWwiseAssetDestroyOptions&)(Z_Param_Out_OutDestroyOptions),Z_Param_Out_OutHardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function BreakStruct *************************

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function GetAudioNodeLoading ***************
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventGetAudioNodeLoading_Parms
	{
		FWwiseDialogueEventInfo Ref;
		EWwiseAudioNodeLoading ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Switch Container Loading" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAudioNodeLoading constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAudioNodeLoading constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAudioNodeLoading Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetAudioNodeLoading_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetAudioNodeLoading_Parms, ReturnValue), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3114630479
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::PropPointers) < 2048);
// ********** End Function GetAudioNodeLoading Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "GetAudioNodeLoading", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::WwiseDynamicEventInfoLibrary_eventGetAudioNodeLoading_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::WwiseDynamicEventInfoLibrary_eventGetAudioNodeLoading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execGetAudioNodeLoading)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWwiseAudioNodeLoading*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::GetAudioNodeLoading(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function GetAudioNodeLoading *****************

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function GetDestroyOptions *****************
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventGetDestroyOptions_Parms
	{
		FWwiseDialogueEventInfo Ref;
		EWwiseAssetDestroyOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Destroy Options" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDestroyOptions constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDestroyOptions constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDestroyOptions Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetDestroyOptions_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetDestroyOptions_Parms, ReturnValue), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1375943211
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::PropPointers) < 2048);
// ********** End Function GetDestroyOptions Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "GetDestroyOptions", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::WwiseDynamicEventInfoLibrary_eventGetDestroyOptions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::WwiseDynamicEventInfoLibrary_eventGetDestroyOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execGetDestroyOptions)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWwiseAssetDestroyOptions*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::GetDestroyOptions(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function GetDestroyOptions *******************

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function GetHardCodedSoundBankShortId ******
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms
	{
		FWwiseDialogueEventInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Short Id" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHardCodedSoundBankShortId constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHardCodedSoundBankShortId constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHardCodedSoundBankShortId Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers) < 2048);
// ********** End Function GetHardCodedSoundBankShortId Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "GetHardCodedSoundBankShortId", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::WwiseDynamicEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::WwiseDynamicEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execGetHardCodedSoundBankShortId)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::GetHardCodedSoundBankShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function GetHardCodedSoundBankShortId ********

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function GetWwiseGuid **********************
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventGetWwiseGuid_Parms
	{
		FWwiseDialogueEventInfo Ref;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "GUID" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWwiseGuid constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWwiseGuid constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWwiseGuid Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::PropPointers) < 2048);
// ********** End Function GetWwiseGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "GetWwiseGuid", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::WwiseDynamicEventInfoLibrary_eventGetWwiseGuid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::WwiseDynamicEventInfoLibrary_eventGetWwiseGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execGetWwiseGuid)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::GetWwiseGuid(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function GetWwiseGuid ************************

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function GetWwiseName **********************
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventGetWwiseName_Parms
	{
		FWwiseDialogueEventInfo Ref;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Name" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWwiseName constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWwiseName constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWwiseName Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetWwiseName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::PropPointers) < 2048);
// ********** End Function GetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "GetWwiseName", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::WwiseDynamicEventInfoLibrary_eventGetWwiseName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::WwiseDynamicEventInfoLibrary_eventGetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execGetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::GetWwiseName(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function GetWwiseName ************************

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function GetWwiseShortId *******************
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventGetWwiseShortId_Parms
	{
		FWwiseDialogueEventInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Short Id" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWwiseShortId constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWwiseShortId constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWwiseShortId Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventGetWwiseShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::PropPointers) < 2048);
// ********** End Function GetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "GetWwiseShortId", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::WwiseDynamicEventInfoLibrary_eventGetWwiseShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::WwiseDynamicEventInfoLibrary_eventGetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execGetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::GetWwiseShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function GetWwiseShortId *********************

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function MakeStruct ************************
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventMakeStruct_Parms
	{
		FGuid WwiseGuid;
		int32 WwiseShortId;
		FString WwiseName;
		EWwiseAudioNodeLoading AudioNodeLoading;
		EWwiseAssetDestroyOptions DestroyOptions;
		int32 HardCodedSoundBankShortId;
		FWwiseDialogueEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEventInfo" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "DisplayName", "Make DynamicEventInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStruct constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioNodeLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioNodeLoading;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBankShortId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStruct constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStruct Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventMakeStruct_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventMakeStruct_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventMakeStruct_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_AudioNodeLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_AudioNodeLoading = { "AudioNodeLoading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventMakeStruct_Parms, AudioNodeLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading, METADATA_PARAMS(0, nullptr) }; // 3114630479
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventMakeStruct_Parms, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, METADATA_PARAMS(0, nullptr) }; // 1375943211
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventMakeStruct_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventMakeStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 885366332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_AudioNodeLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_AudioNodeLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_HardCodedSoundBankShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::PropPointers) < 2048);
// ********** End Function MakeStruct Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "MakeStruct", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::WwiseDynamicEventInfoLibrary_eventMakeStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::WwiseDynamicEventInfoLibrary_eventMakeStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execMakeStruct)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_GET_ENUM(EWwiseAudioNodeLoading,Z_Param_AudioNodeLoading);
	P_GET_ENUM(EWwiseAssetDestroyOptions,Z_Param_DestroyOptions);
	P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseDialogueEventInfo*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::MakeStruct(Z_Param_Out_WwiseGuid,Z_Param_WwiseShortId,Z_Param_WwiseName,EWwiseAudioNodeLoading(Z_Param_AudioNodeLoading),EWwiseAssetDestroyOptions(Z_Param_DestroyOptions),Z_Param_HardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function MakeStruct **************************

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function SetDestroyOptions *****************
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventSetDestroyOptions_Parms
	{
		FWwiseDialogueEventInfo Ref;
		EWwiseAssetDestroyOptions DestroyOptions;
		FWwiseDialogueEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDestroyOptions constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDestroyOptions constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDestroyOptions Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetDestroyOptions_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetDestroyOptions_Parms, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOptions_MetaData), NewProp_DestroyOptions_MetaData) }; // 1375943211
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetDestroyOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 885366332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::PropPointers) < 2048);
// ********** End Function SetDestroyOptions Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "SetDestroyOptions", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::WwiseDynamicEventInfoLibrary_eventSetDestroyOptions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::WwiseDynamicEventInfoLibrary_eventSetDestroyOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execSetDestroyOptions)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_GET_ENUM_REF(EWwiseAssetDestroyOptions,Z_Param_Out_DestroyOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseDialogueEventInfo*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::SetDestroyOptions(Z_Param_Out_Ref,(EWwiseAssetDestroyOptions&)(Z_Param_Out_DestroyOptions));
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function SetDestroyOptions *******************

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function SetHardCodedSoundBankShortId ******
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms
	{
		FWwiseDialogueEventInfo Ref;
		int32 HardCodedSoundBankShortId;
		FWwiseDialogueEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHardCodedSoundBankShortId constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBankShortId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHardCodedSoundBankShortId constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHardCodedSoundBankShortId Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 885366332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_HardCodedSoundBankShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers) < 2048);
// ********** End Function SetHardCodedSoundBankShortId Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "SetHardCodedSoundBankShortId", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::WwiseDynamicEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::WwiseDynamicEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execSetHardCodedSoundBankShortId)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseDialogueEventInfo*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::SetHardCodedSoundBankShortId(Z_Param_Out_Ref,Z_Param_HardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function SetHardCodedSoundBankShortId ********

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function SetSwitchContainerLoading *********
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventSetSwitchContainerLoading_Parms
	{
		FWwiseDialogueEventInfo Ref;
		EWwiseAudioNodeLoading AudioNodeLoading;
		FWwiseDialogueEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodeLoading_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSwitchContainerLoading constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioNodeLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioNodeLoading;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSwitchContainerLoading constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSwitchContainerLoading Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetSwitchContainerLoading_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_AudioNodeLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_AudioNodeLoading = { "AudioNodeLoading", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetSwitchContainerLoading_Parms, AudioNodeLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioNodeLoading_MetaData), NewProp_AudioNodeLoading_MetaData) }; // 3114630479
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetSwitchContainerLoading_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 885366332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_AudioNodeLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_AudioNodeLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::PropPointers) < 2048);
// ********** End Function SetSwitchContainerLoading Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "SetSwitchContainerLoading", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::WwiseDynamicEventInfoLibrary_eventSetSwitchContainerLoading_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::WwiseDynamicEventInfoLibrary_eventSetSwitchContainerLoading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execSetSwitchContainerLoading)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_GET_ENUM_REF(EWwiseAudioNodeLoading,Z_Param_Out_AudioNodeLoading);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseDialogueEventInfo*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::SetSwitchContainerLoading(Z_Param_Out_Ref,(EWwiseAudioNodeLoading&)(Z_Param_Out_AudioNodeLoading));
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function SetSwitchContainerLoading ***********

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function SetWwiseGuid **********************
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventSetWwiseGuid_Parms
	{
		FWwiseDialogueEventInfo Ref;
		FGuid WwiseGuid;
		FWwiseDialogueEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWwiseGuid constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWwiseGuid constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWwiseGuid Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetWwiseGuid_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 885366332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::PropPointers) < 2048);
// ********** End Function SetWwiseGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "SetWwiseGuid", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::WwiseDynamicEventInfoLibrary_eventSetWwiseGuid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::WwiseDynamicEventInfoLibrary_eventSetWwiseGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execSetWwiseGuid)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseDialogueEventInfo*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::SetWwiseGuid(Z_Param_Out_Ref,Z_Param_Out_WwiseGuid);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function SetWwiseGuid ************************

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function SetWwiseName **********************
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventSetWwiseName_Parms
	{
		FWwiseDialogueEventInfo Ref;
		FString WwiseName;
		FWwiseDialogueEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWwiseName constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWwiseName constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWwiseName Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetWwiseName_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetWwiseName_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 885366332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::PropPointers) < 2048);
// ********** End Function SetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "SetWwiseName", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::WwiseDynamicEventInfoLibrary_eventSetWwiseName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::WwiseDynamicEventInfoLibrary_eventSetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execSetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseDialogueEventInfo*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::SetWwiseName(Z_Param_Out_Ref,Z_Param_WwiseName);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function SetWwiseName ************************

// ********** Begin Class UWwiseDynamicEventInfoLibrary Function SetWwiseShortId *******************
struct Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics
{
	struct WwiseDynamicEventInfoLibrary_eventSetWwiseShortId_Parms
	{
		FWwiseDialogueEventInfo Ref;
		int32 WwiseShortId;
		FWwiseDialogueEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|DynamicEvent Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "DynamicEvent Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWwiseShortId constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWwiseShortId constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWwiseShortId Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 885366332
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetWwiseShortId_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseDynamicEventInfoLibrary_eventSetWwiseShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 885366332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::PropPointers) < 2048);
// ********** End Function SetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, nullptr, "SetWwiseShortId", 	Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::WwiseDynamicEventInfoLibrary_eventSetWwiseShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::WwiseDynamicEventInfoLibrary_eventSetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseDynamicEventInfoLibrary::execSetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseDialogueEventInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseDialogueEventInfo*)Z_Param__Result=UWwiseDynamicEventInfoLibrary::SetWwiseShortId(Z_Param_Out_Ref,Z_Param_WwiseShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseDynamicEventInfoLibrary Function SetWwiseShortId *********************

// ********** Begin Class UWwiseDynamicEventInfoLibrary ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseDynamicEventInfoLibrary;
UClass* UWwiseDynamicEventInfoLibrary::GetPrivateStaticClass()
{
	using TClass = UWwiseDynamicEventInfoLibrary;
	if (!Z_Registration_Info_UClass_UWwiseDynamicEventInfoLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseDynamicEventInfoLibrary"),
			Z_Registration_Info_UClass_UWwiseDynamicEventInfoLibrary.InnerSingleton,
			StaticRegisterNativesUWwiseDynamicEventInfoLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UWwiseDynamicEventInfoLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_NoRegister()
{
	return UWwiseDynamicEventInfoLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseDynamicEventInfoLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseDynamicEventInfoLibrary constinit property declarations ************
// ********** End Class UWwiseDynamicEventInfoLibrary constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BreakStruct"), .Pointer = &UWwiseDynamicEventInfoLibrary::execBreakStruct },
		{ .NameUTF8 = UTF8TEXT("GetAudioNodeLoading"), .Pointer = &UWwiseDynamicEventInfoLibrary::execGetAudioNodeLoading },
		{ .NameUTF8 = UTF8TEXT("GetDestroyOptions"), .Pointer = &UWwiseDynamicEventInfoLibrary::execGetDestroyOptions },
		{ .NameUTF8 = UTF8TEXT("GetHardCodedSoundBankShortId"), .Pointer = &UWwiseDynamicEventInfoLibrary::execGetHardCodedSoundBankShortId },
		{ .NameUTF8 = UTF8TEXT("GetWwiseGuid"), .Pointer = &UWwiseDynamicEventInfoLibrary::execGetWwiseGuid },
		{ .NameUTF8 = UTF8TEXT("GetWwiseName"), .Pointer = &UWwiseDynamicEventInfoLibrary::execGetWwiseName },
		{ .NameUTF8 = UTF8TEXT("GetWwiseShortId"), .Pointer = &UWwiseDynamicEventInfoLibrary::execGetWwiseShortId },
		{ .NameUTF8 = UTF8TEXT("MakeStruct"), .Pointer = &UWwiseDynamicEventInfoLibrary::execMakeStruct },
		{ .NameUTF8 = UTF8TEXT("SetDestroyOptions"), .Pointer = &UWwiseDynamicEventInfoLibrary::execSetDestroyOptions },
		{ .NameUTF8 = UTF8TEXT("SetHardCodedSoundBankShortId"), .Pointer = &UWwiseDynamicEventInfoLibrary::execSetHardCodedSoundBankShortId },
		{ .NameUTF8 = UTF8TEXT("SetSwitchContainerLoading"), .Pointer = &UWwiseDynamicEventInfoLibrary::execSetSwitchContainerLoading },
		{ .NameUTF8 = UTF8TEXT("SetWwiseGuid"), .Pointer = &UWwiseDynamicEventInfoLibrary::execSetWwiseGuid },
		{ .NameUTF8 = UTF8TEXT("SetWwiseName"), .Pointer = &UWwiseDynamicEventInfoLibrary::execSetWwiseName },
		{ .NameUTF8 = UTF8TEXT("SetWwiseShortId"), .Pointer = &UWwiseDynamicEventInfoLibrary::execSetWwiseShortId },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_BreakStruct, "BreakStruct" }, // 1023140114
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetAudioNodeLoading, "GetAudioNodeLoading" }, // 2039374491
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetDestroyOptions, "GetDestroyOptions" }, // 4182350597
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetHardCodedSoundBankShortId, "GetHardCodedSoundBankShortId" }, // 2617276780
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseGuid, "GetWwiseGuid" }, // 1097489284
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseName, "GetWwiseName" }, // 3290339147
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_GetWwiseShortId, "GetWwiseShortId" }, // 1919977393
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_MakeStruct, "MakeStruct" }, // 3666284390
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetDestroyOptions, "SetDestroyOptions" }, // 3523686521
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetHardCodedSoundBankShortId, "SetHardCodedSoundBankShortId" }, // 1582846461
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetSwitchContainerLoading, "SetSwitchContainerLoading" }, // 4273957084
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseGuid, "SetWwiseGuid" }, // 3858017267
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseName, "SetWwiseName" }, // 3144040160
		{ &Z_Construct_UFunction_UWwiseDynamicEventInfoLibrary_SetWwiseShortId, "SetWwiseShortId" }, // 3755909120
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseDynamicEventInfoLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics
UObject* (*const Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics::ClassParams = {
	&UWwiseDynamicEventInfoLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics::Class_MetaDataParams)
};
void UWwiseDynamicEventInfoLibrary::StaticRegisterNativesUWwiseDynamicEventInfoLibrary()
{
	UClass* Class = UWwiseDynamicEventInfoLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWwiseDynamicEventInfoLibrary()
{
	if (!Z_Registration_Info_UClass_UWwiseDynamicEventInfoLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseDynamicEventInfoLibrary.OuterSingleton, Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseDynamicEventInfoLibrary.OuterSingleton;
}
UWwiseDynamicEventInfoLibrary::UWwiseDynamicEventInfoLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseDynamicEventInfoLibrary);
UWwiseDynamicEventInfoLibrary::~UWwiseDynamicEventInfoLibrary() {}
// ********** End Class UWwiseDynamicEventInfoLibrary **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseDynamicEventInfoLibrary, UWwiseDynamicEventInfoLibrary::StaticClass, TEXT("UWwiseDynamicEventInfoLibrary"), &Z_Registration_Info_UClass_UWwiseDynamicEventInfoLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseDynamicEventInfoLibrary), 2301618134U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h__Script_WwiseResourceLoader_202428468{
	TEXT("/Script/WwiseResourceLoader"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h__Script_WwiseResourceLoader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h__Script_WwiseResourceLoader_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
