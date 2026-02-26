// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseObjectInfoLibrary.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseObjectInfoLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseObjectInfoLibrary();
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseObjectInfoLibrary_NoRegister();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWwiseObjectInfoLibrary Function BreakStruct *****************************
struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics
{
	struct WwiseObjectInfoLibrary_eventBreakStruct_Parms
	{
		FWwiseObjectInfo Ref;
		FGuid OutWwiseGuid;
		int32 OutWwiseShortId;
		FString OutWwiseName;
		int32 OutHardCodedSoundBankShortId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OutHardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|WwiseObjectInfo" },
		{ "DisplayName", "Break WwiseObjectInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakStruct constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutWwiseGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutWwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutWwiseName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutHardCodedSoundBankShortId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakStruct constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakStruct Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 2762036770
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseGuid = { "OutWwiseGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutWwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId = { "OutWwiseShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutWwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName = { "OutWwiseName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutWwiseName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutHardCodedSoundBankShortId = { "OutHardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutHardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutHardCodedSoundBankShortId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::PropPointers) < 2048);
// ********** End Function BreakStruct Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "BreakStruct", 	Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::WwiseObjectInfoLibrary_eventBreakStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::WwiseObjectInfoLibrary_eventBreakStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execBreakStruct)
{
	P_GET_STRUCT(FWwiseObjectInfo,Z_Param_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutWwiseGuid);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWwiseShortId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutWwiseName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWwiseObjectInfoLibrary::BreakStruct(Z_Param_Ref,Z_Param_Out_OutWwiseGuid,Z_Param_Out_OutWwiseShortId,Z_Param_Out_OutWwiseName,Z_Param_Out_OutHardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function BreakStruct *******************************

// ********** Begin Class UWwiseObjectInfoLibrary Function GetHardCodedSoundBankShortId ************
struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics
{
	struct WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms
	{
		FWwiseObjectInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 2762036770
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers) < 2048);
// ********** End Function GetHardCodedSoundBankShortId Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetHardCodedSoundBankShortId", 	Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetHardCodedSoundBankShortId)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseObjectInfoLibrary::GetHardCodedSoundBankShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function GetHardCodedSoundBankShortId **************

// ********** Begin Class UWwiseObjectInfoLibrary Function GetWwiseGuid ****************************
struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics
{
	struct WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms
	{
		FWwiseObjectInfo Ref;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 2762036770
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::PropPointers) < 2048);
// ********** End Function GetWwiseGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetWwiseGuid", 	Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetWwiseGuid)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UWwiseObjectInfoLibrary::GetWwiseGuid(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function GetWwiseGuid ******************************

// ********** Begin Class UWwiseObjectInfoLibrary Function GetWwiseName ****************************
struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics
{
	struct WwiseObjectInfoLibrary_eventGetWwiseName_Parms
	{
		FWwiseObjectInfo Ref;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 2762036770
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::PropPointers) < 2048);
// ********** End Function GetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetWwiseName", 	Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::WwiseObjectInfoLibrary_eventGetWwiseName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::WwiseObjectInfoLibrary_eventGetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWwiseObjectInfoLibrary::GetWwiseName(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function GetWwiseName ******************************

// ********** Begin Class UWwiseObjectInfoLibrary Function GetWwiseShortId *************************
struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics
{
	struct WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms
	{
		FWwiseObjectInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 2762036770
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::PropPointers) < 2048);
// ********** End Function GetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetWwiseShortId", 	Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseObjectInfoLibrary::GetWwiseShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function GetWwiseShortId ***************************

// ********** Begin Class UWwiseObjectInfoLibrary Function MakeStruct ******************************
struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics
{
	struct WwiseObjectInfoLibrary_eventMakeStruct_Parms
	{
		FGuid WwiseGuid;
		int32 WwiseShortId;
		FString WwiseName;
		int32 HardCodedSoundBankShortId;
		FWwiseObjectInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "HardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|WwiseObjectInfo" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "DisplayName", "Make WwiseObjectInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStruct constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBankShortId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStruct constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStruct Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2762036770
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_HardCodedSoundBankShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::PropPointers) < 2048);
// ********** End Function MakeStruct Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "MakeStruct", 	Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::WwiseObjectInfoLibrary_eventMakeStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::WwiseObjectInfoLibrary_eventMakeStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execMakeStruct)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::MakeStruct(Z_Param_Out_WwiseGuid,Z_Param_WwiseShortId,Z_Param_WwiseName,Z_Param_HardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function MakeStruct ********************************

// ********** Begin Class UWwiseObjectInfoLibrary Function SetHardCodedSoundBankShortId ************
struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics
{
	struct WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms
	{
		FWwiseObjectInfo Ref;
		int32 HardCodedSoundBankShortId;
		FWwiseObjectInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 2762036770
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2762036770
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_HardCodedSoundBankShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers) < 2048);
// ********** End Function SetHardCodedSoundBankShortId Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetHardCodedSoundBankShortId", 	Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetHardCodedSoundBankShortId)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetHardCodedSoundBankShortId(Z_Param_Out_Ref,Z_Param_HardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function SetHardCodedSoundBankShortId **************

// ********** Begin Class UWwiseObjectInfoLibrary Function SetWwiseGuid ****************************
struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics
{
	struct WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms
	{
		FWwiseObjectInfo Ref;
		FGuid WwiseGuid;
		FWwiseObjectInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 2762036770
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2762036770
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::PropPointers) < 2048);
// ********** End Function SetWwiseGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetWwiseGuid", 	Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetWwiseGuid)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetWwiseGuid(Z_Param_Out_Ref,Z_Param_Out_WwiseGuid);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function SetWwiseGuid ******************************

// ********** Begin Class UWwiseObjectInfoLibrary Function SetWwiseName ****************************
struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics
{
	struct WwiseObjectInfoLibrary_eventSetWwiseName_Parms
	{
		FWwiseObjectInfo Ref;
		FString WwiseName;
		FWwiseObjectInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 2762036770
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseName_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseName_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2762036770
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::PropPointers) < 2048);
// ********** End Function SetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetWwiseName", 	Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::WwiseObjectInfoLibrary_eventSetWwiseName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::WwiseObjectInfoLibrary_eventSetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetWwiseName(Z_Param_Out_Ref,Z_Param_WwiseName);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function SetWwiseName ******************************

// ********** Begin Class UWwiseObjectInfoLibrary Function SetWwiseShortId *************************
struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics
{
	struct WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms
	{
		FWwiseObjectInfo Ref;
		int32 WwiseShortId;
		FWwiseObjectInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 2762036770
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2762036770
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::PropPointers) < 2048);
// ********** End Function SetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetWwiseShortId", 	Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetWwiseShortId(Z_Param_Out_Ref,Z_Param_WwiseShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function SetWwiseShortId ***************************

// ********** Begin Class UWwiseObjectInfoLibrary **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseObjectInfoLibrary;
UClass* UWwiseObjectInfoLibrary::GetPrivateStaticClass()
{
	using TClass = UWwiseObjectInfoLibrary;
	if (!Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseObjectInfoLibrary"),
			Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.InnerSingleton,
			StaticRegisterNativesUWwiseObjectInfoLibrary,
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
	return Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseObjectInfoLibrary_NoRegister()
{
	return UWwiseObjectInfoLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/Info/WwiseObjectInfoLibrary.h" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseObjectInfoLibrary constinit property declarations ******************
// ********** End Class UWwiseObjectInfoLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BreakStruct"), .Pointer = &UWwiseObjectInfoLibrary::execBreakStruct },
		{ .NameUTF8 = UTF8TEXT("GetHardCodedSoundBankShortId"), .Pointer = &UWwiseObjectInfoLibrary::execGetHardCodedSoundBankShortId },
		{ .NameUTF8 = UTF8TEXT("GetWwiseGuid"), .Pointer = &UWwiseObjectInfoLibrary::execGetWwiseGuid },
		{ .NameUTF8 = UTF8TEXT("GetWwiseName"), .Pointer = &UWwiseObjectInfoLibrary::execGetWwiseName },
		{ .NameUTF8 = UTF8TEXT("GetWwiseShortId"), .Pointer = &UWwiseObjectInfoLibrary::execGetWwiseShortId },
		{ .NameUTF8 = UTF8TEXT("MakeStruct"), .Pointer = &UWwiseObjectInfoLibrary::execMakeStruct },
		{ .NameUTF8 = UTF8TEXT("SetHardCodedSoundBankShortId"), .Pointer = &UWwiseObjectInfoLibrary::execSetHardCodedSoundBankShortId },
		{ .NameUTF8 = UTF8TEXT("SetWwiseGuid"), .Pointer = &UWwiseObjectInfoLibrary::execSetWwiseGuid },
		{ .NameUTF8 = UTF8TEXT("SetWwiseName"), .Pointer = &UWwiseObjectInfoLibrary::execSetWwiseName },
		{ .NameUTF8 = UTF8TEXT("SetWwiseShortId"), .Pointer = &UWwiseObjectInfoLibrary::execSetWwiseShortId },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct, "BreakStruct" }, // 2535235059
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId, "GetHardCodedSoundBankShortId" }, // 4177046620
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid, "GetWwiseGuid" }, // 2147139128
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName, "GetWwiseName" }, // 3620770307
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId, "GetWwiseShortId" }, // 1091384065
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct, "MakeStruct" }, // 3906781543
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId, "SetHardCodedSoundBankShortId" }, // 993257555
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid, "SetWwiseGuid" }, // 1417876398
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName, "SetWwiseName" }, // 1441840264
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId, "SetWwiseShortId" }, // 1449211628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseObjectInfoLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics
UObject* (*const Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::ClassParams = {
	&UWwiseObjectInfoLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::Class_MetaDataParams)
};
void UWwiseObjectInfoLibrary::StaticRegisterNativesUWwiseObjectInfoLibrary()
{
	UClass* Class = UWwiseObjectInfoLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWwiseObjectInfoLibrary()
{
	if (!Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.OuterSingleton, Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.OuterSingleton;
}
UWwiseObjectInfoLibrary::UWwiseObjectInfoLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseObjectInfoLibrary);
UWwiseObjectInfoLibrary::~UWwiseObjectInfoLibrary() {}
// ********** End Class UWwiseObjectInfoLibrary ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseObjectInfoLibrary, UWwiseObjectInfoLibrary::StaticClass, TEXT("UWwiseObjectInfoLibrary"), &Z_Registration_Info_UClass_UWwiseObjectInfoLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseObjectInfoLibrary), 1529129009U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h__Script_WwiseResourceLoader_3269134422{
	TEXT("/Script/WwiseResourceLoader"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h__Script_WwiseResourceLoader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h__Script_WwiseResourceLoader_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
