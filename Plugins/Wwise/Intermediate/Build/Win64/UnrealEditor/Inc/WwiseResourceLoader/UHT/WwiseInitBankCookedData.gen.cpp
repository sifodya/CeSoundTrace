// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseInitBankCookedData.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"
#include "Wwise/CookedData/WwiseMediaCookedData.h"
#include "Wwise/CookedData/WwiseSoundBankCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseInitBankCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseInitBankCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseInitBankCookedData ******************************************
struct Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseInitBankCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseInitBankCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseInitBankCookedData constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Media_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Media;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Language_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Language;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseInitBankCookedData constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseInitBankCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics
static_assert(std::is_polymorphic<FWwiseInitBankCookedData>() == std::is_polymorphic<FWwiseSoundBankCookedData>(), "USTRUCT FWwiseInitBankCookedData cannot be polymorphic unless super FWwiseSoundBankCookedData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData;
class UScriptStruct* FWwiseInitBankCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseInitBankCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseInitBankCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseInitBankCookedData Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 3588692755
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseInitBankCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBanks_MetaData), NewProp_SoundBanks_MetaData) }; // 3588692755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(0, nullptr) }; // 3606940092
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseInitBankCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Media_MetaData), NewProp_Media_MetaData) }; // 3606940092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Language_Inner = { "Language", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // 2452260452
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseInitBankCookedData, Language), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) }; // 2452260452
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_SoundBanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_SoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Media_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Media,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Language_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Language,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseInitBankCookedData Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	Z_Construct_UScriptStruct_FWwiseSoundBankCookedData,
	&NewStructOps,
	"WwiseInitBankCookedData",
	Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::PropPointers),
	sizeof(FWwiseInitBankCookedData),
	alignof(FWwiseInitBankCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseInitBankCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseInitBankCookedData ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseInitBankCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewStructOps, TEXT("WwiseInitBankCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseInitBankCookedData), 3785642243U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h__Script_WwiseResourceLoader_2154821140{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
