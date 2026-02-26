// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseGroupValueInfoLibrary.h"
#include "Wwise/Info/WwiseGroupValueInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseGroupValueInfoLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary();
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary_NoRegister();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function BreakStruct *************************
struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics
{
	struct WwiseGroupValueInfoLibrary_eventBreakStruct_Parms
	{
		FWwiseGroupValueInfo Ref;
		FGuid OutAssetGuid;
		int32 OutGroupShortId;
		int32 OutWwiseShortId;
		FString OutWwiseName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValueInfo" },
		{ "DisplayName", "Break GroupValueInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakStruct constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutGroupShortId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutWwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutWwiseName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakStruct constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakStruct Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3734965903
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutAssetGuid = { "OutAssetGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutAssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutGroupShortId = { "OutGroupShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutGroupShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId = { "OutWwiseShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutWwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName = { "OutWwiseName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutWwiseName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutAssetGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutGroupShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::PropPointers) < 2048);
// ********** End Function BreakStruct Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "BreakStruct", 	Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::WwiseGroupValueInfoLibrary_eventBreakStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::WwiseGroupValueInfoLibrary_eventBreakStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execBreakStruct)
{
	P_GET_STRUCT(FWwiseGroupValueInfo,Z_Param_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutAssetGuid);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutGroupShortId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWwiseShortId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutWwiseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWwiseGroupValueInfoLibrary::BreakStruct(Z_Param_Ref,Z_Param_Out_OutAssetGuid,Z_Param_Out_OutGroupShortId,Z_Param_Out_OutWwiseShortId,Z_Param_Out_OutWwiseName);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function BreakStruct ***************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function GetAssetGuid ************************
struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics
{
	struct WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms
	{
		FWwiseGroupValueInfo Ref;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "GUID" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAssetGuid constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAssetGuid constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAssetGuid Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3734965903
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::PropPointers) < 2048);
// ********** End Function GetAssetGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetAssetGuid", 	Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetAssetGuid)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetAssetGuid(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function GetAssetGuid **************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function GetGroupShortId *********************
struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics
{
	struct WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms
	{
		FWwiseGroupValueInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Group Short Id" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGroupShortId constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGroupShortId constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGroupShortId Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3734965903
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::PropPointers) < 2048);
// ********** End Function GetGroupShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetGroupShortId", 	Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetGroupShortId)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetGroupShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function GetGroupShortId ***********************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function GetWwiseName ************************
struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics
{
	struct WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms
	{
		FWwiseGroupValueInfo Ref;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3734965903
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::PropPointers) < 2048);
// ********** End Function GetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetWwiseName", 	Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetWwiseName(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function GetWwiseName **************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function GetWwiseShortId *********************
struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics
{
	struct WwiseGroupValueInfoLibrary_eventGetWwiseShortId_Parms
	{
		FWwiseGroupValueInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3734965903
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::PropPointers) < 2048);
// ********** End Function GetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetWwiseShortId", 	Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::WwiseGroupValueInfoLibrary_eventGetWwiseShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::WwiseGroupValueInfoLibrary_eventGetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetWwiseShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function GetWwiseShortId ***********************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function MakeStruct **************************
struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics
{
	struct WwiseGroupValueInfoLibrary_eventMakeStruct_Parms
	{
		FGuid AssetGuid;
		int32 GroupShortId;
		int32 WwiseShortId;
		FString WwiseName;
		FWwiseGroupValueInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValueInfo" },
		{ "DisplayName", "Make GroupValueInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStruct constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupShortId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStruct constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStruct Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetGuid_MetaData), NewProp_AssetGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_GroupShortId = { "GroupShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, GroupShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3734965903
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_AssetGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_GroupShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::PropPointers) < 2048);
// ********** End Function MakeStruct Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "MakeStruct", 	Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::WwiseGroupValueInfoLibrary_eventMakeStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::WwiseGroupValueInfoLibrary_eventMakeStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execMakeStruct)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_AssetGuid);
	P_GET_PROPERTY(FIntProperty,Z_Param_GroupShortId);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::MakeStruct(Z_Param_Out_AssetGuid,Z_Param_GroupShortId,Z_Param_WwiseShortId,Z_Param_WwiseName);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function MakeStruct ****************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function SetAssetGuid ************************
struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics
{
	struct WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms
	{
		FWwiseGroupValueInfo Ref;
		FGuid AssetGuid;
		FWwiseGroupValueInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAssetGuid constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAssetGuid constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAssetGuid Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3734965903
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetGuid_MetaData), NewProp_AssetGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3734965903
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_AssetGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::PropPointers) < 2048);
// ********** End Function SetAssetGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetAssetGuid", 	Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetAssetGuid)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_AssetGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetAssetGuid(Z_Param_Out_Ref,Z_Param_Out_AssetGuid);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function SetAssetGuid **************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function SetGroupShortId *********************
struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics
{
	struct WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms
	{
		FWwiseGroupValueInfo Ref;
		int32 GroupShortId;
		FWwiseGroupValueInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGroupShortId constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupShortId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGroupShortId constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGroupShortId Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3734965903
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_GroupShortId = { "GroupShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms, GroupShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3734965903
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_GroupShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::PropPointers) < 2048);
// ********** End Function SetGroupShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetGroupShortId", 	Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetGroupShortId)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_GroupShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetGroupShortId(Z_Param_Out_Ref,Z_Param_GroupShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function SetGroupShortId ***********************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function SetWwiseName ************************
struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics
{
	struct WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms
	{
		FWwiseGroupValueInfo Ref;
		FString WwiseName;
		FWwiseGroupValueInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3734965903
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3734965903
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::PropPointers) < 2048);
// ********** End Function SetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetWwiseName", 	Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetWwiseName(Z_Param_Out_Ref,Z_Param_WwiseName);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function SetWwiseName **************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function SetWwiseShortId *********************
struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics
{
	struct WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms
	{
		FWwiseGroupValueInfo Ref;
		int32 WwiseShortId;
		FWwiseGroupValueInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 3734965903
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3734965903
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::PropPointers) < 2048);
// ********** End Function SetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetWwiseShortId", 	Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetWwiseShortId(Z_Param_Out_Ref,Z_Param_WwiseShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function SetWwiseShortId ***********************

// ********** Begin Class UWwiseGroupValueInfoLibrary **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary;
UClass* UWwiseGroupValueInfoLibrary::GetPrivateStaticClass()
{
	using TClass = UWwiseGroupValueInfoLibrary;
	if (!Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseGroupValueInfoLibrary"),
			Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.InnerSingleton,
			StaticRegisterNativesUWwiseGroupValueInfoLibrary,
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
	return Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary_NoRegister()
{
	return UWwiseGroupValueInfoLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/Info/WwiseGroupValueInfoLibrary.h" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseGroupValueInfoLibrary constinit property declarations **************
// ********** End Class UWwiseGroupValueInfoLibrary constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BreakStruct"), .Pointer = &UWwiseGroupValueInfoLibrary::execBreakStruct },
		{ .NameUTF8 = UTF8TEXT("GetAssetGuid"), .Pointer = &UWwiseGroupValueInfoLibrary::execGetAssetGuid },
		{ .NameUTF8 = UTF8TEXT("GetGroupShortId"), .Pointer = &UWwiseGroupValueInfoLibrary::execGetGroupShortId },
		{ .NameUTF8 = UTF8TEXT("GetWwiseName"), .Pointer = &UWwiseGroupValueInfoLibrary::execGetWwiseName },
		{ .NameUTF8 = UTF8TEXT("GetWwiseShortId"), .Pointer = &UWwiseGroupValueInfoLibrary::execGetWwiseShortId },
		{ .NameUTF8 = UTF8TEXT("MakeStruct"), .Pointer = &UWwiseGroupValueInfoLibrary::execMakeStruct },
		{ .NameUTF8 = UTF8TEXT("SetAssetGuid"), .Pointer = &UWwiseGroupValueInfoLibrary::execSetAssetGuid },
		{ .NameUTF8 = UTF8TEXT("SetGroupShortId"), .Pointer = &UWwiseGroupValueInfoLibrary::execSetGroupShortId },
		{ .NameUTF8 = UTF8TEXT("SetWwiseName"), .Pointer = &UWwiseGroupValueInfoLibrary::execSetWwiseName },
		{ .NameUTF8 = UTF8TEXT("SetWwiseShortId"), .Pointer = &UWwiseGroupValueInfoLibrary::execSetWwiseShortId },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct, "BreakStruct" }, // 1420962524
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid, "GetAssetGuid" }, // 29028412
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId, "GetGroupShortId" }, // 2593456998
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName, "GetWwiseName" }, // 1988054380
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId, "GetWwiseShortId" }, // 842902801
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct, "MakeStruct" }, // 2803247870
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid, "SetAssetGuid" }, // 4070668091
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId, "SetGroupShortId" }, // 1313286985
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName, "SetWwiseName" }, // 1584442570
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId, "SetWwiseShortId" }, // 2774884783
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseGroupValueInfoLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics
UObject* (*const Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::ClassParams = {
	&UWwiseGroupValueInfoLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::Class_MetaDataParams)
};
void UWwiseGroupValueInfoLibrary::StaticRegisterNativesUWwiseGroupValueInfoLibrary()
{
	UClass* Class = UWwiseGroupValueInfoLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary()
{
	if (!Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.OuterSingleton, Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.OuterSingleton;
}
UWwiseGroupValueInfoLibrary::UWwiseGroupValueInfoLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseGroupValueInfoLibrary);
UWwiseGroupValueInfoLibrary::~UWwiseGroupValueInfoLibrary() {}
// ********** End Class UWwiseGroupValueInfoLibrary ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseGroupValueInfoLibrary, UWwiseGroupValueInfoLibrary::StaticClass, TEXT("UWwiseGroupValueInfoLibrary"), &Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseGroupValueInfoLibrary), 3669450535U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h__Script_WwiseResourceLoader_4184667500{
	TEXT("/Script/WwiseResourceLoader"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h__Script_WwiseResourceLoader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h__Script_WwiseResourceLoader_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
