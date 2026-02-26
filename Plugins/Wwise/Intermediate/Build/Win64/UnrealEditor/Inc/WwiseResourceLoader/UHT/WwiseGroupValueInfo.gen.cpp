// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseGroupValueInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseGroupValueInfo() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseGroupValueInfo **********************************************
struct Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseGroupValueInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseGroupValueInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
		{ "DisplayName", "GroupValue Info" },
		{ "HasNativeBreak", "/Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary:BreakStruct" },
		{ "HasNativeMake", "/Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary:MakeStruct" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseGroupValueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupShortId_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseGroupValueInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseGroupValueInfo constinit property declarations **************
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GroupShortId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseGroupValueInfo constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseGroupValueInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics
static_assert(std::is_polymorphic<FWwiseGroupValueInfo>() == std::is_polymorphic<FWwiseObjectInfo>(), "USTRUCT FWwiseGroupValueInfo cannot be polymorphic unless super FWwiseObjectInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo;
class UScriptStruct* FWwiseGroupValueInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseGroupValueInfo, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseGroupValueInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseGroupValueInfo Property Definitions *************************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::NewProp_GroupShortId = { "GroupShortId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGroupValueInfo, GroupShortId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupShortId_MetaData), NewProp_GroupShortId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::NewProp_GroupShortId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseGroupValueInfo Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	Z_Construct_UScriptStruct_FWwiseObjectInfo,
	&NewStructOps,
	"WwiseGroupValueInfo",
	Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::PropPointers),
	sizeof(FWwiseGroupValueInfo),
	alignof(FWwiseGroupValueInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.InnerSingleton, Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.InnerSingleton);
}
// ********** End ScriptStruct FWwiseGroupValueInfo ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseGroupValueInfo::StaticStruct, Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::NewStructOps, TEXT("WwiseGroupValueInfo"),&Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseGroupValueInfo), 3734965903U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h__Script_WwiseResourceLoader_3320346068{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
