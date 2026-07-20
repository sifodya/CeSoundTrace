// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseAudioNodeCookedData.h"
#include "Wwise/CookedData/WwiseExternalSourceCookedData.h"
#include "Wwise/CookedData/WwiseMediaCookedData.h"
#include "Wwise/CookedData/WwiseSoundBankCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAudioNodeCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWwiseAssetDestroyOptions *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseAssetDestroyOptions;
static UEnum* EWwiseAssetDestroyOptions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWwiseAssetDestroyOptions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWwiseAssetDestroyOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("EWwiseAssetDestroyOptions"));
	}
	return Z_Registration_Info_UEnum_EWwiseAssetDestroyOptions.OuterSingleton;
}
template<> WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseAssetDestroyOptions>()
{
	return EWwiseAssetDestroyOptions_StaticEnum();
}
struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioNodeCookedData.h" },
		{ "StopEventOnDestroy.Name", "EWwiseAssetDestroyOptions::StopEventOnDestroy" },
		{ "WaitForEventEnd.Name", "EWwiseAssetDestroyOptions::WaitForEventEnd" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseAssetDestroyOptions::StopEventOnDestroy", (int64)EWwiseAssetDestroyOptions::StopEventOnDestroy },
		{ "EWwiseAssetDestroyOptions::WaitForEventEnd", (int64)EWwiseAssetDestroyOptions::WaitForEventEnd },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	"EWwiseAssetDestroyOptions",
	"EWwiseAssetDestroyOptions",
	Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions()
{
	if (!Z_Registration_Info_UEnum_EWwiseAssetDestroyOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseAssetDestroyOptions.InnerSingleton, Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWwiseAssetDestroyOptions.InnerSingleton;
}
// ********** End Enum EWwiseAssetDestroyOptions ***************************************************

// ********** Begin Enum EWwiseAudioNodeLoading ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseAudioNodeLoading;
static UEnum* EWwiseAudioNodeLoading_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWwiseAudioNodeLoading.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWwiseAudioNodeLoading.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("EWwiseAudioNodeLoading"));
	}
	return Z_Registration_Info_UEnum_EWwiseAudioNodeLoading.OuterSingleton;
}
template<> WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseAudioNodeLoading>()
{
	return EWwiseAudioNodeLoading_StaticEnum();
}
struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlwaysLoad.DisplayName", "Always Load Media" },
		{ "AlwaysLoad.Name", "EWwiseAudioNodeLoading::AlwaysLoad" },
		{ "BlueprintType", "true" },
		{ "LoadOnEnqueue.DisplayName", "Load Media Only When Enqueued" },
		{ "LoadOnEnqueue.Name", "EWwiseAudioNodeLoading::LoadOnEnqueue" },
		{ "LoadOnReference.DisplayName", "Load Media Only When Referenced" },
		{ "LoadOnReference.Name", "EWwiseAudioNodeLoading::LoadOnReference" },
		{ "LoadOnResolve.DisplayName", "Load Media Only When Resolved" },
		{ "LoadOnResolve.Name", "EWwiseAudioNodeLoading::LoadOnResolve" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioNodeCookedData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseAudioNodeLoading::AlwaysLoad", (int64)EWwiseAudioNodeLoading::AlwaysLoad },
		{ "EWwiseAudioNodeLoading::LoadOnReference", (int64)EWwiseAudioNodeLoading::LoadOnReference },
		{ "EWwiseAudioNodeLoading::LoadOnResolve", (int64)EWwiseAudioNodeLoading::LoadOnResolve },
		{ "EWwiseAudioNodeLoading::LoadOnEnqueue", (int64)EWwiseAudioNodeLoading::LoadOnEnqueue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	"EWwiseAudioNodeLoading",
	"EWwiseAudioNodeLoading",
	Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading()
{
	if (!Z_Registration_Info_UEnum_EWwiseAudioNodeLoading.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseAudioNodeLoading.InnerSingleton, Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWwiseAudioNodeLoading.InnerSingleton;
}
// ********** End Enum EWwiseAudioNodeLoading ******************************************************

// ********** Begin ScriptStruct FWwiseAudioNodeCookedData *****************************************
struct Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseAudioNodeCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseAudioNodeCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioNodeCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodeId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioNodeCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioNodeCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioNodeCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioNodeCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodeLoading_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioNodeCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOptions_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioNodeCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAudioNodeCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseAudioNodeCookedData constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioNodeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Media_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Media;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioNodeLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioNodeLoading;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseAudioNodeCookedData constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAudioNodeCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseAudioNodeCookedData;
class UScriptStruct* FWwiseAudioNodeCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseAudioNodeCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseAudioNodeCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseAudioNodeCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseAudioNodeCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseAudioNodeCookedData Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_AudioNodeId = { "AudioNodeId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAudioNodeCookedData, AudioNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioNodeId_MetaData), NewProp_AudioNodeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 3588692755
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAudioNodeCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBanks_MetaData), NewProp_SoundBanks_MetaData) }; // 3588692755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(0, nullptr) }; // 3606940092
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAudioNodeCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Media_MetaData), NewProp_Media_MetaData) }; // 3606940092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData, METADATA_PARAMS(0, nullptr) }; // 1340045337
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAudioNodeCookedData, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSources_MetaData), NewProp_ExternalSources_MetaData) }; // 1340045337
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_AudioNodeLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_AudioNodeLoading = { "AudioNodeLoading", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAudioNodeCookedData, AudioNodeLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioNodeLoading_MetaData), NewProp_AudioNodeLoading_MetaData) }; // 3114630479
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAudioNodeCookedData, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOptions_MetaData), NewProp_DestroyOptions_MetaData) }; // 1375943211
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAudioNodeCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_AudioNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_SoundBanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_SoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_Media_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_Media,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_ExternalSources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_ExternalSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_AudioNodeLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_AudioNodeLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_DestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseAudioNodeCookedData Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseAudioNodeCookedData",
	Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::PropPointers),
	sizeof(FWwiseAudioNodeCookedData),
	alignof(FWwiseAudioNodeCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseAudioNodeCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseAudioNodeCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseAudioNodeCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseAudioNodeCookedData *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioNodeCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWwiseAssetDestroyOptions_StaticEnum, TEXT("EWwiseAssetDestroyOptions"), &Z_Registration_Info_UEnum_EWwiseAssetDestroyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1375943211U) },
		{ EWwiseAudioNodeLoading_StaticEnum, TEXT("EWwiseAudioNodeLoading"), &Z_Registration_Info_UEnum_EWwiseAudioNodeLoading, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3114630479U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseAudioNodeCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData_Statics::NewStructOps, TEXT("WwiseAudioNodeCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseAudioNodeCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAudioNodeCookedData), 3386286980U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioNodeCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioNodeCookedData_h__Script_WwiseResourceLoader_259631633{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioNodeCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioNodeCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioNodeCookedData_h__Script_WwiseResourceLoader_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAudioNodeCookedData_h__Script_WwiseResourceLoader_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
