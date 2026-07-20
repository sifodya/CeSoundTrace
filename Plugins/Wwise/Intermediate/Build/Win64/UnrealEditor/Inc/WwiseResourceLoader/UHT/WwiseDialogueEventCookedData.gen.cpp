// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseDialogueEventCookedData.h"
#include "Wwise/CookedData/WwiseAudioNodeCookedData.h"
#include "Wwise/CookedData/WwiseGroupValueCookedData.h"
#include "Wwise/CookedData/WwiseSoundBankCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseDialogueEventCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseDialogueEventCookedData *************************************
struct Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseDialogueEventCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseDialogueEventCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueEventId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodes_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseDialogueEventCookedData constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueEventId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioNodes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioNodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AudioNodes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseDialogueEventCookedData constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDialogueEventCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseDialogueEventCookedData;
class UScriptStruct* FWwiseDialogueEventCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseDialogueEventCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseDialogueEventCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseDialogueEventCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseDialogueEventCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseDialogueEventCookedData Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_DialogueEventId = { "DialogueEventId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueEventCookedData, DialogueEventId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueEventId_MetaData), NewProp_DialogueEventId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 3588692755
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueEventCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBanks_MetaData), NewProp_SoundBanks_MetaData) }; // 3588692755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes_ValueProp = { "AudioNodes", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData, METADATA_PARAMS(0, nullptr) }; // 3386286980
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes_Key_KeyProp = { "AudioNodes_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet, METADATA_PARAMS(0, nullptr) }; // 1884731281
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes = { "AudioNodes", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueEventCookedData, AudioNodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioNodes_MetaData), NewProp_AudioNodes_MetaData) }; // 1884731281 3386286980
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueEventCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_DialogueEventId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_SoundBanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_SoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseDialogueEventCookedData Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseDialogueEventCookedData",
	Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::PropPointers),
	sizeof(FWwiseDialogueEventCookedData),
	alignof(FWwiseDialogueEventCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseDialogueEventCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseDialogueEventCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseDialogueEventCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseDialogueEventCookedData ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseDialogueEventCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseDialogueEventCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewStructOps, TEXT("WwiseDialogueEventCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseDialogueEventCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDialogueEventCookedData), 1937423670U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseDialogueEventCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseDialogueEventCookedData_h__Script_WwiseResourceLoader_3072036476{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseDialogueEventCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseDialogueEventCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
