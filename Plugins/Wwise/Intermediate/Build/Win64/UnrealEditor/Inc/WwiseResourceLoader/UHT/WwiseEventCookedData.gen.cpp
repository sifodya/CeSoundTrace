// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseEventCookedData.h"
#include "Wwise/CookedData/WwiseAudioNodeCookedData.h"
#include "Wwise/CookedData/WwiseExternalSourceCookedData.h"
#include "Wwise/CookedData/WwiseGroupValueCookedData.h"
#include "Wwise/CookedData/WwiseMediaCookedData.h"
#include "Wwise/CookedData/WwiseSoundBankCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseEventCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseEventCookedData *********************************************
struct Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseEventCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseEventCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodes_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredGroupValueSet_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOptions_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseEventCookedData constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Media_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Media;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioNodes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioNodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AudioNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredGroupValueSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RequiredGroupValueSet;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseEventCookedData constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseEventCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseEventCookedData;
class UScriptStruct* FWwiseEventCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseEventCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseEventCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseEventCookedData Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, EventId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventId_MetaData), NewProp_EventId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 3588692755
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBanks_MetaData), NewProp_SoundBanks_MetaData) }; // 3588692755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(0, nullptr) }; // 3606940092
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Media_MetaData), NewProp_Media_MetaData) }; // 3606940092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData, METADATA_PARAMS(0, nullptr) }; // 1340045337
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSources_MetaData), NewProp_ExternalSources_MetaData) }; // 1340045337
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_AudioNodes_ValueProp = { "AudioNodes", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData, METADATA_PARAMS(0, nullptr) }; // 3386286980
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_AudioNodes_Key_KeyProp = { "AudioNodes_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet, METADATA_PARAMS(0, nullptr) }; // 1884731281
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_AudioNodes = { "AudioNodes", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, AudioNodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioNodes_MetaData), NewProp_AudioNodes_MetaData) }; // 1884731281 3386286980
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_RequiredGroupValueSet_ElementProp = { "RequiredGroupValueSet", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, METADATA_PARAMS(0, nullptr) }; // 518714856
static_assert(TModels_V<CGetTypeHashable, FWwiseGroupValueCookedData>, "The structure 'FWwiseGroupValueCookedData' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_RequiredGroupValueSet = { "RequiredGroupValueSet", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, RequiredGroupValueSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredGroupValueSet_MetaData), NewProp_RequiredGroupValueSet_MetaData) }; // 518714856
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOptions_MetaData), NewProp_DestroyOptions_MetaData) }; // 1375943211
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_EventId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SoundBanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_Media_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_Media,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_ExternalSources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_ExternalSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_AudioNodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_AudioNodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_AudioNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_RequiredGroupValueSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_RequiredGroupValueSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseEventCookedData Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseEventCookedData",
	Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::PropPointers),
	sizeof(FWwiseEventCookedData),
	alignof(FWwiseEventCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseEventCookedData ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseEventCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseEventCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewStructOps, TEXT("WwiseEventCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseEventCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseEventCookedData), 1693859124U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseEventCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseEventCookedData_h__Script_WwiseResourceLoader_462077968{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseEventCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseEventCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
