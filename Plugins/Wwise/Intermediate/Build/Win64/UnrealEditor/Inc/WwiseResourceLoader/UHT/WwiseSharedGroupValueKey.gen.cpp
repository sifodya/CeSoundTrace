// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwiseSharedGroupValueKey.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseSharedGroupValueKey() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseSharedGroupValueKey *****************************************
struct Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseSharedGroupValueKey); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseSharedGroupValueKey); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedGroupValueKey.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseSharedGroupValueKey constinit property declarations *********
// ********** End ScriptStruct FWwiseSharedGroupValueKey constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSharedGroupValueKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseSharedGroupValueKey;
class UScriptStruct* FWwiseSharedGroupValueKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseSharedGroupValueKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseSharedGroupValueKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseSharedGroupValueKey"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseSharedGroupValueKey.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseSharedGroupValueKey",
	nullptr,
	0,
	sizeof(FWwiseSharedGroupValueKey),
	alignof(FWwiseSharedGroupValueKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseSharedGroupValueKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseSharedGroupValueKey.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseSharedGroupValueKey.InnerSingleton);
}
// ********** End ScriptStruct FWwiseSharedGroupValueKey *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseSharedGroupValueKey::StaticStruct, Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::NewStructOps, TEXT("WwiseSharedGroupValueKey"),&Z_Registration_Info_UScriptStruct_FWwiseSharedGroupValueKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSharedGroupValueKey), 3679350083U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h__Script_WwiseResourceLoader_3762252481{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
