// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseObjectInfo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseObjectInfo **************************************************
struct Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseObjectInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseObjectInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
		{ "DisplayName", "Wwise Object Info" },
		{ "HasNativeBreak", "/Script/WwiseResourceLoader.WwiseObjectInfoLibrary:BreakStruct" },
		{ "HasNativeMake", "/Script/WwiseResourceLoader.WwiseObjectInfoLibrary:MakeStruct" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseShortId_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardCodedSoundBankShortId_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseObjectInfo constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_WwiseShortId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WwiseName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_HardCodedSoundBankShortId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseObjectInfo constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseObjectInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseObjectInfo;
class UScriptStruct* FWwiseObjectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseObjectInfo, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseObjectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseObjectInfo Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseObjectInfo, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseObjectInfo, WwiseShortId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseShortId_MetaData), NewProp_WwiseShortId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseObjectInfo, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseObjectInfo, HardCodedSoundBankShortId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardCodedSoundBankShortId_MetaData), NewProp_HardCodedSoundBankShortId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_HardCodedSoundBankShortId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseObjectInfo Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseObjectInfo",
	Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::PropPointers),
	sizeof(FWwiseObjectInfo),
	alignof(FWwiseObjectInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.InnerSingleton, Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.InnerSingleton);
}
// ********** End ScriptStruct FWwiseObjectInfo ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseObjectInfo::StaticStruct, Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewStructOps, TEXT("WwiseObjectInfo"),&Z_Registration_Info_UScriptStruct_FWwiseObjectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseObjectInfo), 2762036770U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h__Script_WwiseResourceLoader_925797371{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
