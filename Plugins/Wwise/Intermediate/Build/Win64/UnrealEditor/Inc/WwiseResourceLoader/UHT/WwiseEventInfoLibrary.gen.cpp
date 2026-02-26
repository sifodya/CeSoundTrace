// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseEventInfoLibrary.h"
#include "Wwise/Info/WwiseEventInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseEventInfoLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseEventInfoLibrary();
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseEventInfoLibrary_NoRegister();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWwiseEventInfoLibrary Function BreakStruct ******************************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics
{
	struct WwiseEventInfoLibrary_eventBreakStruct_Parms
	{
		FWwiseEventInfo Ref;
		FGuid OutWwiseGuid;
		int32 OutWwiseShortId;
		FString OutWwiseName;
		EWwiseEventSwitchContainerLoading OutSwitchContainerLoading;
		EWwiseAssetDestroyOptions OutDestroyOptions;
		int32 OutHardCodedSoundBankShortId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OutDestroyOptions, OutHardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|EventInfo" },
		{ "DisplayName", "Break EventInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakStruct constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutWwiseGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutWwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutWwiseName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutSwitchContainerLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutSwitchContainerLoading;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutDestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutDestroyOptions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutHardCodedSoundBankShortId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakStruct constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakStruct Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseGuid = { "OutWwiseGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutWwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId = { "OutWwiseShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutWwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName = { "OutWwiseName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutWwiseName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutSwitchContainerLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutSwitchContainerLoading = { "OutSwitchContainerLoading", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutSwitchContainerLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(0, nullptr) }; // 353666789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions = { "OutDestroyOptions", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutDestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, METADATA_PARAMS(0, nullptr) }; // 1375943211
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutHardCodedSoundBankShortId = { "OutHardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutHardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutSwitchContainerLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutSwitchContainerLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutHardCodedSoundBankShortId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::PropPointers) < 2048);
// ********** End Function BreakStruct Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "BreakStruct", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::WwiseEventInfoLibrary_eventBreakStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::WwiseEventInfoLibrary_eventBreakStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execBreakStruct)
{
	P_GET_STRUCT(FWwiseEventInfo,Z_Param_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutWwiseGuid);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWwiseShortId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutWwiseName);
	P_GET_ENUM_REF(EWwiseEventSwitchContainerLoading,Z_Param_Out_OutSwitchContainerLoading);
	P_GET_ENUM_REF(EWwiseAssetDestroyOptions,Z_Param_Out_OutDestroyOptions);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWwiseEventInfoLibrary::BreakStruct(Z_Param_Ref,Z_Param_Out_OutWwiseGuid,Z_Param_Out_OutWwiseShortId,Z_Param_Out_OutWwiseName,(EWwiseEventSwitchContainerLoading&)(Z_Param_Out_OutSwitchContainerLoading),(EWwiseAssetDestroyOptions&)(Z_Param_Out_OutDestroyOptions),Z_Param_Out_OutHardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function BreakStruct ********************************

// ********** Begin Class UWwiseEventInfoLibrary Function GetDestroyOptions ************************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics
{
	struct WwiseEventInfoLibrary_eventGetDestroyOptions_Parms
	{
		FWwiseEventInfo Ref;
		EWwiseAssetDestroyOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetDestroyOptions_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetDestroyOptions_Parms, ReturnValue), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1375943211
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::PropPointers) < 2048);
// ********** End Function GetDestroyOptions Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetDestroyOptions", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::WwiseEventInfoLibrary_eventGetDestroyOptions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::WwiseEventInfoLibrary_eventGetDestroyOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetDestroyOptions)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWwiseAssetDestroyOptions*)Z_Param__Result=UWwiseEventInfoLibrary::GetDestroyOptions(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetDestroyOptions **************************

// ********** Begin Class UWwiseEventInfoLibrary Function GetHardCodedSoundBankShortId *************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics
{
	struct WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms
	{
		FWwiseEventInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers) < 2048);
// ********** End Function GetHardCodedSoundBankShortId Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetHardCodedSoundBankShortId", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetHardCodedSoundBankShortId)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseEventInfoLibrary::GetHardCodedSoundBankShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetHardCodedSoundBankShortId ***************

// ********** Begin Class UWwiseEventInfoLibrary Function GetSwitchContainerLoading ****************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics
{
	struct WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms
	{
		FWwiseEventInfo Ref;
		EWwiseEventSwitchContainerLoading ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Switch Container Loading" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSwitchContainerLoading constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSwitchContainerLoading constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSwitchContainerLoading Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms, ReturnValue), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 353666789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::PropPointers) < 2048);
// ********** End Function GetSwitchContainerLoading Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetSwitchContainerLoading", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetSwitchContainerLoading)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWwiseEventSwitchContainerLoading*)Z_Param__Result=UWwiseEventInfoLibrary::GetSwitchContainerLoading(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetSwitchContainerLoading ******************

// ********** Begin Class UWwiseEventInfoLibrary Function GetWwiseGuid *****************************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics
{
	struct WwiseEventInfoLibrary_eventGetWwiseGuid_Parms
	{
		FWwiseEventInfo Ref;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::PropPointers) < 2048);
// ********** End Function GetWwiseGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetWwiseGuid", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::WwiseEventInfoLibrary_eventGetWwiseGuid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::WwiseEventInfoLibrary_eventGetWwiseGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetWwiseGuid)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UWwiseEventInfoLibrary::GetWwiseGuid(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetWwiseGuid *******************************

// ********** Begin Class UWwiseEventInfoLibrary Function GetWwiseName *****************************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics
{
	struct WwiseEventInfoLibrary_eventGetWwiseName_Parms
	{
		FWwiseEventInfo Ref;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::PropPointers) < 2048);
// ********** End Function GetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetWwiseName", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::WwiseEventInfoLibrary_eventGetWwiseName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::WwiseEventInfoLibrary_eventGetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWwiseEventInfoLibrary::GetWwiseName(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetWwiseName *******************************

// ********** Begin Class UWwiseEventInfoLibrary Function GetWwiseShortId **************************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics
{
	struct WwiseEventInfoLibrary_eventGetWwiseShortId_Parms
	{
		FWwiseEventInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::PropPointers) < 2048);
// ********** End Function GetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetWwiseShortId", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::WwiseEventInfoLibrary_eventGetWwiseShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::WwiseEventInfoLibrary_eventGetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseEventInfoLibrary::GetWwiseShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetWwiseShortId ****************************

// ********** Begin Class UWwiseEventInfoLibrary Function MakeStruct *******************************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics
{
	struct WwiseEventInfoLibrary_eventMakeStruct_Parms
	{
		FGuid WwiseGuid;
		int32 WwiseShortId;
		FString WwiseName;
		EWwiseEventSwitchContainerLoading SwitchContainerLoading;
		EWwiseAssetDestroyOptions DestroyOptions;
		int32 HardCodedSoundBankShortId;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DestroyOptions, HardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|EventInfo" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "DisplayName", "Make EventInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Event Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStruct constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SwitchContainerLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SwitchContainerLoading;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBankShortId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStruct constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStruct Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_SwitchContainerLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_SwitchContainerLoading = { "SwitchContainerLoading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, SwitchContainerLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(0, nullptr) }; // 353666789
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, METADATA_PARAMS(0, nullptr) }; // 1375943211
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3451655804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_SwitchContainerLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_SwitchContainerLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_HardCodedSoundBankShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::PropPointers) < 2048);
// ********** End Function MakeStruct Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "MakeStruct", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::WwiseEventInfoLibrary_eventMakeStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::WwiseEventInfoLibrary_eventMakeStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execMakeStruct)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_GET_ENUM(EWwiseEventSwitchContainerLoading,Z_Param_SwitchContainerLoading);
	P_GET_ENUM(EWwiseAssetDestroyOptions,Z_Param_DestroyOptions);
	P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::MakeStruct(Z_Param_Out_WwiseGuid,Z_Param_WwiseShortId,Z_Param_WwiseName,EWwiseEventSwitchContainerLoading(Z_Param_SwitchContainerLoading),EWwiseAssetDestroyOptions(Z_Param_DestroyOptions),Z_Param_HardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function MakeStruct *********************************

// ********** Begin Class UWwiseEventInfoLibrary Function SetDestroyOptions ************************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics
{
	struct WwiseEventInfoLibrary_eventSetDestroyOptions_Parms
	{
		FWwiseEventInfo Ref;
		EWwiseAssetDestroyOptions DestroyOptions;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetDestroyOptions_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetDestroyOptions_Parms, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOptions_MetaData), NewProp_DestroyOptions_MetaData) }; // 1375943211
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetDestroyOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3451655804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::PropPointers) < 2048);
// ********** End Function SetDestroyOptions Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetDestroyOptions", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::WwiseEventInfoLibrary_eventSetDestroyOptions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::WwiseEventInfoLibrary_eventSetDestroyOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetDestroyOptions)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_ENUM_REF(EWwiseAssetDestroyOptions,Z_Param_Out_DestroyOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetDestroyOptions(Z_Param_Out_Ref,(EWwiseAssetDestroyOptions&)(Z_Param_Out_DestroyOptions));
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetDestroyOptions **************************

// ********** Begin Class UWwiseEventInfoLibrary Function SetHardCodedSoundBankShortId *************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics
{
	struct WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms
	{
		FWwiseEventInfo Ref;
		int32 HardCodedSoundBankShortId;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3451655804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_HardCodedSoundBankShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers) < 2048);
// ********** End Function SetHardCodedSoundBankShortId Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetHardCodedSoundBankShortId", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetHardCodedSoundBankShortId)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetHardCodedSoundBankShortId(Z_Param_Out_Ref,Z_Param_HardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetHardCodedSoundBankShortId ***************

// ********** Begin Class UWwiseEventInfoLibrary Function SetSwitchContainerLoading ****************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics
{
	struct WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms
	{
		FWwiseEventInfo Ref;
		EWwiseEventSwitchContainerLoading SwitchContainerLoading;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchContainerLoading_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSwitchContainerLoading constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SwitchContainerLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SwitchContainerLoading;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSwitchContainerLoading constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSwitchContainerLoading Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_SwitchContainerLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_SwitchContainerLoading = { "SwitchContainerLoading", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms, SwitchContainerLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchContainerLoading_MetaData), NewProp_SwitchContainerLoading_MetaData) }; // 353666789
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3451655804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_SwitchContainerLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_SwitchContainerLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::PropPointers) < 2048);
// ********** End Function SetSwitchContainerLoading Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetSwitchContainerLoading", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetSwitchContainerLoading)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_ENUM_REF(EWwiseEventSwitchContainerLoading,Z_Param_Out_SwitchContainerLoading);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetSwitchContainerLoading(Z_Param_Out_Ref,(EWwiseEventSwitchContainerLoading&)(Z_Param_Out_SwitchContainerLoading));
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetSwitchContainerLoading ******************

// ********** Begin Class UWwiseEventInfoLibrary Function SetWwiseGuid *****************************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics
{
	struct WwiseEventInfoLibrary_eventSetWwiseGuid_Parms
	{
		FWwiseEventInfo Ref;
		FGuid WwiseGuid;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseGuid_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3451655804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::PropPointers) < 2048);
// ********** End Function SetWwiseGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetWwiseGuid", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::WwiseEventInfoLibrary_eventSetWwiseGuid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::WwiseEventInfoLibrary_eventSetWwiseGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetWwiseGuid)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetWwiseGuid(Z_Param_Out_Ref,Z_Param_Out_WwiseGuid);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetWwiseGuid *******************************

// ********** Begin Class UWwiseEventInfoLibrary Function SetWwiseName *****************************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics
{
	struct WwiseEventInfoLibrary_eventSetWwiseName_Parms
	{
		FWwiseEventInfo Ref;
		FString WwiseName;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseName_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseName_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3451655804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::PropPointers) < 2048);
// ********** End Function SetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetWwiseName", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::WwiseEventInfoLibrary_eventSetWwiseName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::WwiseEventInfoLibrary_eventSetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetWwiseName(Z_Param_Out_Ref,Z_Param_WwiseName);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetWwiseName *******************************

// ********** Begin Class UWwiseEventInfoLibrary Function SetWwiseShortId **************************
struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics
{
	struct WwiseEventInfoLibrary_eventSetWwiseShortId_Parms
	{
		FWwiseEventInfo Ref;
		int32 WwiseShortId;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3451655804
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseShortId_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3451655804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::PropPointers) < 2048);
// ********** End Function SetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetWwiseShortId", 	Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::WwiseEventInfoLibrary_eventSetWwiseShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::WwiseEventInfoLibrary_eventSetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetWwiseShortId(Z_Param_Out_Ref,Z_Param_WwiseShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetWwiseShortId ****************************

// ********** Begin Class UWwiseEventInfoLibrary ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseEventInfoLibrary;
UClass* UWwiseEventInfoLibrary::GetPrivateStaticClass()
{
	using TClass = UWwiseEventInfoLibrary;
	if (!Z_Registration_Info_UClass_UWwiseEventInfoLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseEventInfoLibrary"),
			Z_Registration_Info_UClass_UWwiseEventInfoLibrary.InnerSingleton,
			StaticRegisterNativesUWwiseEventInfoLibrary,
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
	return Z_Registration_Info_UClass_UWwiseEventInfoLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseEventInfoLibrary_NoRegister()
{
	return UWwiseEventInfoLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseEventInfoLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/Info/WwiseEventInfoLibrary.h" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseEventInfoLibrary constinit property declarations *******************
// ********** End Class UWwiseEventInfoLibrary constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BreakStruct"), .Pointer = &UWwiseEventInfoLibrary::execBreakStruct },
		{ .NameUTF8 = UTF8TEXT("GetDestroyOptions"), .Pointer = &UWwiseEventInfoLibrary::execGetDestroyOptions },
		{ .NameUTF8 = UTF8TEXT("GetHardCodedSoundBankShortId"), .Pointer = &UWwiseEventInfoLibrary::execGetHardCodedSoundBankShortId },
		{ .NameUTF8 = UTF8TEXT("GetSwitchContainerLoading"), .Pointer = &UWwiseEventInfoLibrary::execGetSwitchContainerLoading },
		{ .NameUTF8 = UTF8TEXT("GetWwiseGuid"), .Pointer = &UWwiseEventInfoLibrary::execGetWwiseGuid },
		{ .NameUTF8 = UTF8TEXT("GetWwiseName"), .Pointer = &UWwiseEventInfoLibrary::execGetWwiseName },
		{ .NameUTF8 = UTF8TEXT("GetWwiseShortId"), .Pointer = &UWwiseEventInfoLibrary::execGetWwiseShortId },
		{ .NameUTF8 = UTF8TEXT("MakeStruct"), .Pointer = &UWwiseEventInfoLibrary::execMakeStruct },
		{ .NameUTF8 = UTF8TEXT("SetDestroyOptions"), .Pointer = &UWwiseEventInfoLibrary::execSetDestroyOptions },
		{ .NameUTF8 = UTF8TEXT("SetHardCodedSoundBankShortId"), .Pointer = &UWwiseEventInfoLibrary::execSetHardCodedSoundBankShortId },
		{ .NameUTF8 = UTF8TEXT("SetSwitchContainerLoading"), .Pointer = &UWwiseEventInfoLibrary::execSetSwitchContainerLoading },
		{ .NameUTF8 = UTF8TEXT("SetWwiseGuid"), .Pointer = &UWwiseEventInfoLibrary::execSetWwiseGuid },
		{ .NameUTF8 = UTF8TEXT("SetWwiseName"), .Pointer = &UWwiseEventInfoLibrary::execSetWwiseName },
		{ .NameUTF8 = UTF8TEXT("SetWwiseShortId"), .Pointer = &UWwiseEventInfoLibrary::execSetWwiseShortId },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct, "BreakStruct" }, // 2195232993
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions, "GetDestroyOptions" }, // 4098456322
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId, "GetHardCodedSoundBankShortId" }, // 474299664
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading, "GetSwitchContainerLoading" }, // 1866294870
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid, "GetWwiseGuid" }, // 936686673
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName, "GetWwiseName" }, // 3756821073
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId, "GetWwiseShortId" }, // 2759869260
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct, "MakeStruct" }, // 868484015
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions, "SetDestroyOptions" }, // 1814094884
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId, "SetHardCodedSoundBankShortId" }, // 1708027690
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading, "SetSwitchContainerLoading" }, // 2895008507
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid, "SetWwiseGuid" }, // 270081621
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName, "SetWwiseName" }, // 1087317554
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId, "SetWwiseShortId" }, // 4046507111
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseEventInfoLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseEventInfoLibrary_Statics
UObject* (*const Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::ClassParams = {
	&UWwiseEventInfoLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::Class_MetaDataParams)
};
void UWwiseEventInfoLibrary::StaticRegisterNativesUWwiseEventInfoLibrary()
{
	UClass* Class = UWwiseEventInfoLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWwiseEventInfoLibrary()
{
	if (!Z_Registration_Info_UClass_UWwiseEventInfoLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseEventInfoLibrary.OuterSingleton, Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseEventInfoLibrary.OuterSingleton;
}
UWwiseEventInfoLibrary::UWwiseEventInfoLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseEventInfoLibrary);
UWwiseEventInfoLibrary::~UWwiseEventInfoLibrary() {}
// ********** End Class UWwiseEventInfoLibrary *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseEventInfoLibrary, UWwiseEventInfoLibrary::StaticClass, TEXT("UWwiseEventInfoLibrary"), &Z_Registration_Info_UClass_UWwiseEventInfoLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseEventInfoLibrary), 2094398882U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h__Script_WwiseResourceLoader_3463090566{
	TEXT("/Script/WwiseResourceLoader"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h__Script_WwiseResourceLoader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h__Script_WwiseResourceLoader_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
