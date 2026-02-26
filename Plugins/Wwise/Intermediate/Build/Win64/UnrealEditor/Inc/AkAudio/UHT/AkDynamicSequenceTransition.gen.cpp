// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkDynamicSequenceTransition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkDynamicSequenceTransition() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkDynamicSequenceTransition();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAkDynamicSequenceTransition **************************************
struct Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkDynamicSequenceTransition); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkDynamicSequenceTransition); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Transition Settings used in AkDynamicSequence.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequenceTransition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transition Settings used in AkDynamicSequence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionDurationMs_MetaData[] = {
		{ "Category", "Audiokinetic|AkDynamicSequenceTransition" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequenceTransition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[] = {
		{ "Category", "Audiokinetic|AkDynamicSequenceTransition" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequenceTransition.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkDynamicSequenceTransition constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionDurationMs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkDynamicSequenceTransition constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkDynamicSequenceTransition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkDynamicSequenceTransition;
class UScriptStruct* FAkDynamicSequenceTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkDynamicSequenceTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkDynamicSequenceTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkDynamicSequenceTransition, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkDynamicSequenceTransition"));
	}
	return Z_Registration_Info_UScriptStruct_FAkDynamicSequenceTransition.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkDynamicSequenceTransition Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::NewProp_TransitionDurationMs = { "TransitionDurationMs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkDynamicSequenceTransition, TransitionDurationMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionDurationMs_MetaData), NewProp_TransitionDurationMs_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkDynamicSequenceTransition, FadeCurve), Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeCurve_MetaData), NewProp_FadeCurve_MetaData) }; // 1185152346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::NewProp_TransitionDurationMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::NewProp_FadeCurve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::NewProp_FadeCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkDynamicSequenceTransition Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkDynamicSequenceTransition",
	Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::PropPointers),
	sizeof(FAkDynamicSequenceTransition),
	alignof(FAkDynamicSequenceTransition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkDynamicSequenceTransition()
{
	if (!Z_Registration_Info_UScriptStruct_FAkDynamicSequenceTransition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkDynamicSequenceTransition.InnerSingleton, Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkDynamicSequenceTransition.InnerSingleton);
}
// ********** End ScriptStruct FAkDynamicSequenceTransition ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceTransition_h__Script_AkAudio_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkDynamicSequenceTransition::StaticStruct, Z_Construct_UScriptStruct_FAkDynamicSequenceTransition_Statics::NewStructOps, TEXT("AkDynamicSequenceTransition"),&Z_Registration_Info_UScriptStruct_FAkDynamicSequenceTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkDynamicSequenceTransition), 2371024039U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceTransition_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceTransition_h__Script_AkAudio_3363106920{
	TEXT("/Script/AkAudio"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceTransition_h__Script_AkAudio_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceTransition_h__Script_AkAudio_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
