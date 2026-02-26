// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"
#include "Wwise/CookedData/WwiseSoundBankCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseLocalizedSoundBankCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseLocalizedSoundBankCookedData ********************************
struct Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseLocalizedSoundBankCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseLocalizedSoundBankCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankLanguageMap_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* @brief Short ID for the SoundBank.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the SoundBank." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseLocalizedSoundBankCookedData constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBankLanguageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBankLanguageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SoundBankLanguageMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoundBankId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseLocalizedSoundBankCookedData constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLocalizedSoundBankCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData;
class UScriptStruct* FWwiseLocalizedSoundBankCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseLocalizedSoundBankCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseLocalizedSoundBankCookedData Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap_ValueProp = { "SoundBankLanguageMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 3588692755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap_Key_KeyProp = { "SoundBankLanguageMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // 2452260452
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap = { "SoundBankLanguageMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedSoundBankCookedData, SoundBankLanguageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBankLanguageMap_MetaData), NewProp_SoundBankLanguageMap_MetaData) }; // 2452260452 3588692755
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedSoundBankCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankId = { "SoundBankId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedSoundBankCookedData, SoundBankId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBankId_MetaData), NewProp_SoundBankId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseLocalizedSoundBankCookedData Property Definitions *************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseLocalizedSoundBankCookedData",
	Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::PropPointers),
	sizeof(FWwiseLocalizedSoundBankCookedData),
	alignof(FWwiseLocalizedSoundBankCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseLocalizedSoundBankCookedData **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseLocalizedSoundBankCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewStructOps, TEXT("WwiseLocalizedSoundBankCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLocalizedSoundBankCookedData), 588159783U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h__Script_WwiseResourceLoader_2037127182{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
