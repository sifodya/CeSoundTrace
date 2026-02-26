// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseLocalizedEventCookedData.h"
#include "Wwise/CookedData/WwiseEventCookedData.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseLocalizedEventCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseLocalizedEventCookedData ************************************
struct Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseLocalizedEventCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseLocalizedEventCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventLanguageMap_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* @brief Short ID for the Event.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the Event." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseLocalizedEventCookedData constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventLanguageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventLanguageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EventLanguageMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseLocalizedEventCookedData constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLocalizedEventCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData;
class UScriptStruct* FWwiseLocalizedEventCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseLocalizedEventCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseLocalizedEventCookedData Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap_ValueProp = { "EventLanguageMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseEventCookedData, METADATA_PARAMS(0, nullptr) }; // 1693859124
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap_Key_KeyProp = { "EventLanguageMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // 2452260452
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap = { "EventLanguageMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedEventCookedData, EventLanguageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventLanguageMap_MetaData), NewProp_EventLanguageMap_MetaData) }; // 2452260452 1693859124
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedEventCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedEventCookedData, EventId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventId_MetaData), NewProp_EventId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventLanguageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewProp_EventId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseLocalizedEventCookedData Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseLocalizedEventCookedData",
	Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::PropPointers),
	sizeof(FWwiseLocalizedEventCookedData),
	alignof(FWwiseLocalizedEventCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseLocalizedEventCookedData **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedEventCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseLocalizedEventCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewStructOps, TEXT("WwiseLocalizedEventCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLocalizedEventCookedData), 1399687171U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedEventCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedEventCookedData_h__Script_WwiseResourceLoader_532896636{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedEventCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedEventCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
