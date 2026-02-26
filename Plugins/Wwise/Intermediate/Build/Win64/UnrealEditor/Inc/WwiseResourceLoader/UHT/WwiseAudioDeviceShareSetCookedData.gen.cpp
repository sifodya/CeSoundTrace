// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseAudioDeviceShareSetCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAudioDeviceShareSetCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseAudioDeviceShareSetCookedData *******************************
struct Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseAudioDeviceShareSetCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseAudioDeviceShareSetCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioDeviceShareSetCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioDeviceShareSetCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioDeviceShareSetCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseAudioDeviceShareSetCookedData constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShortId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseAudioDeviceShareSetCookedData constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAudioDeviceShareSetCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseAudioDeviceShareSetCookedData;
class UScriptStruct* FWwiseAudioDeviceShareSetCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseAudioDeviceShareSetCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseAudioDeviceShareSetCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseAudioDeviceShareSetCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseAudioDeviceShareSetCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseAudioDeviceShareSetCookedData Property Definitions **********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::NewProp_ShortId = { "ShortId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAudioDeviceShareSetCookedData, ShortId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortId_MetaData), NewProp_ShortId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAudioDeviceShareSetCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::NewProp_ShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseAudioDeviceShareSetCookedData Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseAudioDeviceShareSetCookedData",
	Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::PropPointers),
	sizeof(FWwiseAudioDeviceShareSetCookedData),
	alignof(FWwiseAudioDeviceShareSetCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseAudioDeviceShareSetCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseAudioDeviceShareSetCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseAudioDeviceShareSetCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseAudioDeviceShareSetCookedData *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioDeviceShareSetCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseAudioDeviceShareSetCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData_Statics::NewStructOps, TEXT("WwiseAudioDeviceShareSetCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseAudioDeviceShareSetCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAudioDeviceShareSetCookedData), 771973336U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioDeviceShareSetCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioDeviceShareSetCookedData_h__Script_WwiseResourceLoader_1744078009{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioDeviceShareSetCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioDeviceShareSetCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
