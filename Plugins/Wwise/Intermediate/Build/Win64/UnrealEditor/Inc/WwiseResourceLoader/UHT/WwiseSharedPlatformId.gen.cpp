// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwiseSharedPlatformId.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseSharedPlatformId() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedPlatformId();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseSharedPlatformId ********************************************
struct Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseSharedPlatformId); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseSharedPlatformId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedPlatformId.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseSharedPlatformId constinit property declarations ************
// ********** End ScriptStruct FWwiseSharedPlatformId constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSharedPlatformId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId;
class UScriptStruct* FWwiseSharedPlatformId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSharedPlatformId, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseSharedPlatformId"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseSharedPlatformId",
	nullptr,
	0,
	sizeof(FWwiseSharedPlatformId),
	alignof(FWwiseSharedPlatformId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedPlatformId()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.InnerSingleton);
}
// ********** End ScriptStruct FWwiseSharedPlatformId **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseSharedPlatformId::StaticStruct, Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::NewStructOps, TEXT("WwiseSharedPlatformId"),&Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSharedPlatformId), 3019307941U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h__Script_WwiseResourceLoader_1277946615{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
