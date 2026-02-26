// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwiseSharedLanguageId.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseSharedLanguageId() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedLanguageId();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseSharedLanguageId ********************************************
struct Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseSharedLanguageId); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseSharedLanguageId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedLanguageId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageRequirement_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedLanguageId.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseSharedLanguageId constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_LanguageRequirement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LanguageRequirement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseSharedLanguageId constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSharedLanguageId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId;
class UScriptStruct* FWwiseSharedLanguageId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSharedLanguageId, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseSharedLanguageId"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseSharedLanguageId Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement = { "LanguageRequirement", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSharedLanguageId, LanguageRequirement), Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageRequirement_MetaData), NewProp_LanguageRequirement_MetaData) }; // 3835712792
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseSharedLanguageId Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseSharedLanguageId",
	Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::PropPointers),
	sizeof(FWwiseSharedLanguageId),
	alignof(FWwiseSharedLanguageId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedLanguageId()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.InnerSingleton);
}
// ********** End ScriptStruct FWwiseSharedLanguageId **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseSharedLanguageId::StaticStruct, Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewStructOps, TEXT("WwiseSharedLanguageId"),&Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSharedLanguageId), 191360584U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h__Script_WwiseResourceLoader_3422867195{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
