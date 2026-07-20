// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseAssetLibraryCookedData.h"
#include "Wwise/WwisePackagedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwisePackagedFile();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseAssetLibraryCookedData **************************************
struct Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseAssetLibraryCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseAssetLibraryCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAssetLibraryCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagedFiles_MetaData[] = {
		{ "Category", "Wwise|AssetLibrary" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAssetLibraryCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise|AssetLibrary" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAssetLibraryCookedData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseAssetLibraryCookedData constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackagedFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagedFiles;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseAssetLibraryCookedData constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAssetLibraryCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData;
class UScriptStruct* FWwiseAssetLibraryCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseAssetLibraryCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseAssetLibraryCookedData Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::NewProp_PackagedFiles_Inner = { "PackagedFiles", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwisePackagedFile, METADATA_PARAMS(0, nullptr) }; // 1487929036
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::NewProp_PackagedFiles = { "PackagedFiles", nullptr, (EPropertyFlags)0x0010000000022801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryCookedData, PackagedFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagedFiles_MetaData), NewProp_PackagedFiles_MetaData) }; // 1487929036
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000022801, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::NewProp_PackagedFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::NewProp_PackagedFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseAssetLibraryCookedData Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseAssetLibraryCookedData",
	Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::PropPointers),
	sizeof(FWwiseAssetLibraryCookedData),
	alignof(FWwiseAssetLibraryCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseAssetLibraryCookedData ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAssetLibraryCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseAssetLibraryCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::NewStructOps, TEXT("WwiseAssetLibraryCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAssetLibraryCookedData), 3512133781U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAssetLibraryCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAssetLibraryCookedData_h__Script_WwiseResourceLoader_880224521{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAssetLibraryCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAssetLibraryCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
