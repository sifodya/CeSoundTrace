// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseDialogueEventInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseDialogueEventInfo() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueEventInfo();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseDialogueEventInfo *******************************************
struct Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseDialogueEventInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseDialogueEventInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
		{ "DisplayName", "Dynamic Event Info" },
		{ "HasNativeBreak", "/Script/WwiseResourceLoader.WwiseDynamicEventInfoLibrary:BreakStruct" },
		{ "HasNativeMake", "/Script/WwiseResourceLoader.WwiseDynamicEventInfoLibrary:MakeStruct" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseDialogueEventInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodeLoading_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseDialogueEventInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOptions_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseDialogueEventInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseDialogueEventInfo constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioNodeLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioNodeLoading;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseDialogueEventInfo constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDialogueEventInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics
static_assert(std::is_polymorphic<FWwiseDialogueEventInfo>() == std::is_polymorphic<FWwiseObjectInfo>(), "USTRUCT FWwiseDialogueEventInfo cannot be polymorphic unless super FWwiseObjectInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseDialogueEventInfo;
class UScriptStruct* FWwiseDialogueEventInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseDialogueEventInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseDialogueEventInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseDialogueEventInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseDialogueEventInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseDialogueEventInfo Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::NewProp_AudioNodeLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::NewProp_AudioNodeLoading = { "AudioNodeLoading", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueEventInfo, AudioNodeLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAudioNodeLoading, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioNodeLoading_MetaData), NewProp_AudioNodeLoading_MetaData) }; // 3114630479
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueEventInfo, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseAssetDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOptions_MetaData), NewProp_DestroyOptions_MetaData) }; // 1375943211
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::NewProp_AudioNodeLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::NewProp_AudioNodeLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::NewProp_DestroyOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseDialogueEventInfo Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	Z_Construct_UScriptStruct_FWwiseObjectInfo,
	&NewStructOps,
	"WwiseDialogueEventInfo",
	Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::PropPointers),
	sizeof(FWwiseDialogueEventInfo),
	alignof(FWwiseDialogueEventInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueEventInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseDialogueEventInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseDialogueEventInfo.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseDialogueEventInfo.InnerSingleton);
}
// ********** End ScriptStruct FWwiseDialogueEventInfo *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseDialogueEventInfo_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseDialogueEventInfo::StaticStruct, Z_Construct_UScriptStruct_FWwiseDialogueEventInfo_Statics::NewStructOps, TEXT("WwiseDialogueEventInfo"),&Z_Registration_Info_UScriptStruct_FWwiseDialogueEventInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDialogueEventInfo), 885366332U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseDialogueEventInfo_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseDialogueEventInfo_h__Script_WwiseResourceLoader_2323709085{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseDialogueEventInfo_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseDialogueEventInfo_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
