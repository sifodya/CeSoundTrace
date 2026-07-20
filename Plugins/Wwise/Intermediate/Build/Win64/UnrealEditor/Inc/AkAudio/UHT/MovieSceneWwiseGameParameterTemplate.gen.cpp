// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneWwiseGameParameterTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneWwiseGameParameterTemplate() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMovieSceneWwiseGameParameterTemplate *****************************
struct Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMovieSceneWwiseGameParameterTemplate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMovieSceneWwiseGameParameterTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieSceneWwiseGameParameterTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieSceneWwiseGameParameterTemplate.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMovieSceneWwiseGameParameterTemplate constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMovieSceneWwiseGameParameterTemplate constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneWwiseGameParameterTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics
static_assert(std::is_polymorphic<FMovieSceneWwiseGameParameterTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneWwiseGameParameterTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate;
class UScriptStruct* FMovieSceneWwiseGameParameterTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneWwiseGameParameterTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.OuterSingleton;
	}

// ********** Begin ScriptStruct FMovieSceneWwiseGameParameterTemplate Property Definitions ********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneWwiseGameParameterTemplate, Section), Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMovieSceneWwiseGameParameterTemplate Property Definitions **********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneWwiseGameParameterTemplate",
	Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::PropPointers),
	sizeof(FMovieSceneWwiseGameParameterTemplate),
	alignof(FMovieSceneWwiseGameParameterTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.InnerSingleton);
}
// ********** End ScriptStruct FMovieSceneWwiseGameParameterTemplate *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Private_MovieSceneWwiseGameParameterTemplate_h__Script_AkAudio_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneWwiseGameParameterTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::NewStructOps, TEXT("MovieSceneWwiseGameParameterTemplate"),&Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneWwiseGameParameterTemplate), 854673520U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Private_MovieSceneWwiseGameParameterTemplate_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Private_MovieSceneWwiseGameParameterTemplate_h__Script_AkAudio_2195856833{
	TEXT("/Script/AkAudio"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Private_MovieSceneWwiseGameParameterTemplate_h__Script_AkAudio_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Private_MovieSceneWwiseGameParameterTemplate_h__Script_AkAudio_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
