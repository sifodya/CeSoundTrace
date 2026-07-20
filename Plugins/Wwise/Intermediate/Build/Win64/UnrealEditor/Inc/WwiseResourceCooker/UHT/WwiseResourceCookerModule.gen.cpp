// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwiseResourceCookerModule.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseResourceCookerModule() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceCooker();
WWISERESOURCECOOKER_API UEnum* Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWwiseExportDebugNameRule *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseExportDebugNameRule;
static UEnum* EWwiseExportDebugNameRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule, (UObject*)Z_Construct_UPackage__Script_WwiseResourceCooker(), TEXT("EWwiseExportDebugNameRule"));
	}
	return Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.OuterSingleton;
}
template<> WWISERESOURCECOOKER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseExportDebugNameRule>()
{
	return EWwiseExportDebugNameRule_StaticEnum();
}
struct Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseResourceCookerModule.h" },
		{ "Name.Name", "EWwiseExportDebugNameRule::Name" },
		{ "ObjectPath.Name", "EWwiseExportDebugNameRule::ObjectPath" },
		{ "Release.Name", "EWwiseExportDebugNameRule::Release" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseExportDebugNameRule::Release", (int64)EWwiseExportDebugNameRule::Release },
		{ "EWwiseExportDebugNameRule::Name", (int64)EWwiseExportDebugNameRule::Name },
		{ "EWwiseExportDebugNameRule::ObjectPath", (int64)EWwiseExportDebugNameRule::ObjectPath },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceCooker,
	nullptr,
	"EWwiseExportDebugNameRule",
	"EWwiseExportDebugNameRule",
	Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule()
{
	if (!Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.InnerSingleton, Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.InnerSingleton;
}
// ********** End Enum EWwiseExportDebugNameRule ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceCooker_Public_Wwise_WwiseResourceCookerModule_h__Script_WwiseResourceCooker_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWwiseExportDebugNameRule_StaticEnum, TEXT("EWwiseExportDebugNameRule"), &Z_Registration_Info_UEnum_EWwiseExportDebugNameRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1178404496U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceCooker_Public_Wwise_WwiseResourceCookerModule_h__Script_WwiseResourceCooker_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceCooker_Public_Wwise_WwiseResourceCookerModule_h__Script_WwiseResourceCooker_3017512814{
	TEXT("/Script/WwiseResourceCooker"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceCooker_Public_Wwise_WwiseResourceCookerModule_h__Script_WwiseResourceCooker_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceCooker_Public_Wwise_WwiseResourceCookerModule_h__Script_WwiseResourceCooker_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
