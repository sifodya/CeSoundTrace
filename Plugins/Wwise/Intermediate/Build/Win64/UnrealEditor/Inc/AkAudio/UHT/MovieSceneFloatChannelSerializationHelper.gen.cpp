// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneFloatChannelSerializationHelper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatChannelSerializationHelper() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMovieSceneTangentDataSerializationHelper *************************
struct Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMovieSceneTangentDataSerializationHelper); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMovieSceneTangentDataSerializationHelper); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMovieSceneTangentDataSerializationHelper constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMovieSceneTangentDataSerializationHelper constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTangentDataSerializationHelper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper;
class UScriptStruct* FMovieSceneTangentDataSerializationHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneTangentDataSerializationHelper"));
	}
	return Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.OuterSingleton;
	}

// ********** Begin ScriptStruct FMovieSceneTangentDataSerializationHelper Property Definitions ****
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, ArriveTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangent_MetaData), NewProp_ArriveTangent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, LeaveTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangent_MetaData), NewProp_LeaveTangent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode = { "TangentWeightMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, TangentWeightMode), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentWeightMode_MetaData), NewProp_TangentWeightMode_MetaData) }; // 2398979481
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight = { "ArriveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, ArriveTangentWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangentWeight_MetaData), NewProp_ArriveTangentWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight = { "LeaveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, LeaveTangentWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangentWeight_MetaData), NewProp_LeaveTangentWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMovieSceneTangentDataSerializationHelper Property Definitions ******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"MovieSceneTangentDataSerializationHelper",
	Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::PropPointers),
	sizeof(FMovieSceneTangentDataSerializationHelper),
	alignof(FMovieSceneTangentDataSerializationHelper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper()
{
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.InnerSingleton);
}
// ********** End ScriptStruct FMovieSceneTangentDataSerializationHelper ***************************

// ********** Begin ScriptStruct FMovieSceneFloatValueSerializationHelper **************************
struct Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMovieSceneFloatValueSerializationHelper); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMovieSceneFloatValueSerializationHelper); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMovieSceneFloatValueSerializationHelper constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TangentMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMovieSceneFloatValueSerializationHelper constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatValueSerializationHelper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper;
class UScriptStruct* FMovieSceneFloatValueSerializationHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneFloatValueSerializationHelper"));
	}
	return Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.OuterSingleton;
	}

// ********** Begin ScriptStruct FMovieSceneFloatValueSerializationHelper Property Definitions *****
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpMode_MetaData), NewProp_InterpMode_MetaData) }; // 3137508823
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentMode_MetaData), NewProp_TangentMode_MetaData) }; // 3107947279
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, Tangent), Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangent_MetaData), NewProp_Tangent_MetaData) }; // 408391545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMovieSceneFloatValueSerializationHelper Property Definitions *******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"MovieSceneFloatValueSerializationHelper",
	Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::PropPointers),
	sizeof(FMovieSceneFloatValueSerializationHelper),
	alignof(FMovieSceneFloatValueSerializationHelper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper()
{
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.InnerSingleton);
}
// ********** End ScriptStruct FMovieSceneFloatValueSerializationHelper ****************************

// ********** Begin ScriptStruct FMovieSceneFloatChannelSerializationHelper ************************
struct Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMovieSceneFloatChannelSerializationHelper); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMovieSceneFloatChannelSerializationHelper); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMovieSceneFloatChannelSerializationHelper constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Times_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static void NewProp_bHasDefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMovieSceneFloatChannelSerializationHelper constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatChannelSerializationHelper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper;
class UScriptStruct* FMovieSceneFloatChannelSerializationHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneFloatChannelSerializationHelper"));
	}
	return Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.OuterSingleton;
	}

// ********** Begin ScriptStruct FMovieSceneFloatChannelSerializationHelper Property Definitions ***
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap = { "PreInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreInfinityExtrap_MetaData), NewProp_PreInfinityExtrap_MetaData) }; // 3300923327
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap = { "PostInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostInfinityExtrap_MetaData), NewProp_PostInfinityExtrap_MetaData) }; // 3300923327
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, Times), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Times_MetaData), NewProp_Times_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper, METADATA_PARAMS(0, nullptr) }; // 1309612955
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 1309612955
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_SetBit(void* Obj)
{
	((FMovieSceneFloatChannelSerializationHelper*)Obj)->bHasDefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue = { "bHasDefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneFloatChannelSerializationHelper), &Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasDefaultValue_MetaData), NewProp_bHasDefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Times_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Times,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMovieSceneFloatChannelSerializationHelper Property Definitions *****
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"MovieSceneFloatChannelSerializationHelper",
	Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::PropPointers),
	sizeof(FMovieSceneFloatChannelSerializationHelper),
	alignof(FMovieSceneFloatChannelSerializationHelper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper()
{
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.InnerSingleton);
}
// ********** End ScriptStruct FMovieSceneFloatChannelSerializationHelper **************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneFloatChannelSerializationHelper_h__Script_AkAudio_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTangentDataSerializationHelper::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewStructOps, TEXT("MovieSceneTangentDataSerializationHelper"),&Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTangentDataSerializationHelper), 408391545U) },
		{ FMovieSceneFloatValueSerializationHelper::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewStructOps, TEXT("MovieSceneFloatValueSerializationHelper"),&Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFloatValueSerializationHelper), 1309612955U) },
		{ FMovieSceneFloatChannelSerializationHelper::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewStructOps, TEXT("MovieSceneFloatChannelSerializationHelper"),&Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFloatChannelSerializationHelper), 1926768642U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneFloatChannelSerializationHelper_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneFloatChannelSerializationHelper_h__Script_AkAudio_2977558910{
	TEXT("/Script/AkAudio"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneFloatChannelSerializationHelper_h__Script_AkAudio_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneFloatChannelSerializationHelper_h__Script_AkAudio_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
