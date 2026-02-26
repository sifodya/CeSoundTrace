// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseAcousticTextureCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAcousticTextureCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseAcousticTextureCookedData ***********************************
struct Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseAcousticTextureCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseAcousticTextureCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionLow_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's lower Absorption value. The percentage by which sound within a low frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's lower Absorption value. The percentage by which sound within a low frequency range is dampened." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMidLow_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's mid-low Absorption value. The percentage by which sound within a mid-low frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's mid-low Absorption value. The percentage by which sound within a mid-low frequency range is dampened." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMidHigh_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's mid-high Absorption value. The percentage by which sound within a mid-high frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's mid-high Absorption value. The percentage by which sound within a mid-high frequency range is dampened." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionHigh_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's high Absorption value. The percentage by which sound within a high frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's high Absorption value. The percentage by which sound within a high frequency range is dampened." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseAcousticTextureCookedData constinit property declarations ***
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionMidLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionMidHigh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionHigh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShortId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseAcousticTextureCookedData constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAcousticTextureCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData;
class UScriptStruct* FWwiseAcousticTextureCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseAcousticTextureCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseAcousticTextureCookedData Property Definitions **************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionLow = { "AbsorptionLow", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionLow_MetaData), NewProp_AbsorptionLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidLow = { "AbsorptionMidLow", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionMidLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionMidLow_MetaData), NewProp_AbsorptionMidLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidHigh = { "AbsorptionMidHigh", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionMidHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionMidHigh_MetaData), NewProp_AbsorptionMidHigh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionHigh = { "AbsorptionHigh", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionHigh_MetaData), NewProp_AbsorptionHigh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_ShortId = { "ShortId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, ShortId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortId_MetaData), NewProp_ShortId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_ShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseAcousticTextureCookedData Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseAcousticTextureCookedData",
	Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::PropPointers),
	sizeof(FWwiseAcousticTextureCookedData),
	alignof(FWwiseAcousticTextureCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseAcousticTextureCookedData *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseAcousticTextureCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewStructOps, TEXT("WwiseAcousticTextureCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAcousticTextureCookedData), 2843107687U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h__Script_WwiseResourceLoader_2725411789{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
