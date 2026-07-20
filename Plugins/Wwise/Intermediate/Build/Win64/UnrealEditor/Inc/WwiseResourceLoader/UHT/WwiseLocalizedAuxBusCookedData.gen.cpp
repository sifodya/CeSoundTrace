// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h"
#include "Wwise/CookedData/WwiseAuxBusCookedData.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseLocalizedAuxBusCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAuxBusCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseLocalizedAuxBusCookedData ***********************************
struct Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseLocalizedAuxBusCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseLocalizedAuxBusCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusLanguageMap_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseLocalizedAuxBusCookedData constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxBusLanguageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxBusLanguageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AuxBusLanguageMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AuxBusId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseLocalizedAuxBusCookedData constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLocalizedAuxBusCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData;
class UScriptStruct* FWwiseLocalizedAuxBusCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseLocalizedAuxBusCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseLocalizedAuxBusCookedData Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewProp_AuxBusLanguageMap_ValueProp = { "AuxBusLanguageMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseAuxBusCookedData, METADATA_PARAMS(0, nullptr) }; // 1824733972
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewProp_AuxBusLanguageMap_Key_KeyProp = { "AuxBusLanguageMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // 2452260452
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewProp_AuxBusLanguageMap = { "AuxBusLanguageMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedAuxBusCookedData, AuxBusLanguageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusLanguageMap_MetaData), NewProp_AuxBusLanguageMap_MetaData) }; // 2452260452 1824733972
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedAuxBusCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewProp_AuxBusId = { "AuxBusId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedAuxBusCookedData, AuxBusId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusId_MetaData), NewProp_AuxBusId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewProp_AuxBusLanguageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewProp_AuxBusLanguageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewProp_AuxBusLanguageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewProp_AuxBusId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseLocalizedAuxBusCookedData Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseLocalizedAuxBusCookedData",
	Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::PropPointers),
	sizeof(FWwiseLocalizedAuxBusCookedData),
	alignof(FWwiseLocalizedAuxBusCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseLocalizedAuxBusCookedData *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedAuxBusCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseLocalizedAuxBusCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewStructOps, TEXT("WwiseLocalizedAuxBusCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLocalizedAuxBusCookedData), 1385697730U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedAuxBusCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedAuxBusCookedData_h__Script_WwiseResourceLoader_2934613190{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedAuxBusCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedAuxBusCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
