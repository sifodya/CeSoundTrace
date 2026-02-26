// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneAkAudioEventSection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventSection() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMovieSceneAkAudioEventSection *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection;
UClass* UMovieSceneAkAudioEventSection::GetPrivateStaticClass()
{
	using TClass = UMovieSceneAkAudioEventSection;
	if (!Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MovieSceneAkAudioEventSection"),
			Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.InnerSingleton,
			StaticRegisterNativesUMovieSceneAkAudioEventSection,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister()
{
	return UMovieSceneAkAudioEventSection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A single floating point section that triggers a Wwise event.\n*/" },
#endif
		{ "IncludePath", "MovieSceneAkAudioEventSection.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single floating point section that triggers a Wwise event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "Category", "AkAudioEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The AkAudioEvent represented by this section */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The AkAudioEvent represented by this section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetriggerEvent_MetaData[] = {
		{ "Category", "AkAudioEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Indicates whether the Wwise event will be re-triggered when the end is reached. */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the Wwise event will be re-triggered when the end is reached." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrubTailLengthMs_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ClampMax", "500" },
		{ "ClampMin", "30" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The length, in ms, of scrub snippets */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The length, in ms, of scrub snippets" },
#endif
		{ "UIMax", "500" },
		{ "UIMin", "30" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopAtSectionEnd_MetaData[] = {
		{ "Category", "AkAudioEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates whether the Wwise event should be stopped when the section stops in the Unreal Sequencer. */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the Wwise event should be stopped when the section stops in the Unreal Sequencer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSourceDuration_MetaData[] = {
		{ "Category", "AkAudioEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The duration of the longest Wwise source that the Wwise event contains (taking trim into account). */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The duration of the longest Wwise source that the Wwise event contains (taking trim into account)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDurationSourceID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ID of the longest Wwise source that the Wwise event contains. */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the longest Wwise source that the Wwise event contains." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMovieSceneAkAudioEventSection constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static void NewProp_RetriggerEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RetriggerEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScrubTailLengthMs;
	static void NewProp_StopAtSectionEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopAtSectionEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSourceDuration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaxDurationSourceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMovieSceneAkAudioEventSection constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkAudioEventSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics

// ********** Begin Class UMovieSceneAkAudioEventSection Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, Event), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) };
void Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_RetriggerEvent_SetBit(void* Obj)
{
	((UMovieSceneAkAudioEventSection*)Obj)->RetriggerEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_RetriggerEvent = { "RetriggerEvent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAkAudioEventSection), &Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_RetriggerEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetriggerEvent_MetaData), NewProp_RetriggerEvent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_ScrubTailLengthMs = { "ScrubTailLengthMs", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, ScrubTailLengthMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrubTailLengthMs_MetaData), NewProp_ScrubTailLengthMs_MetaData) };
void Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_StopAtSectionEnd_SetBit(void* Obj)
{
	((UMovieSceneAkAudioEventSection*)Obj)->StopAtSectionEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_StopAtSectionEnd = { "StopAtSectionEnd", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAkAudioEventSection), &Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_StopAtSectionEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopAtSectionEnd_MetaData), NewProp_StopAtSectionEnd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxSourceDuration = { "MaxSourceDuration", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, MaxSourceDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSourceDuration_MetaData), NewProp_MaxSourceDuration_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxDurationSourceID = { "MaxDurationSourceID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, MaxDurationSourceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDurationSourceID_MetaData), NewProp_MaxDurationSourceID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_RetriggerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_ScrubTailLengthMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_StopAtSectionEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxSourceDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxDurationSourceID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::PropPointers) < 2048);
// ********** End Class UMovieSceneAkAudioEventSection Property Definitions ************************
UObject* (*const Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::ClassParams = {
	&UMovieSceneAkAudioEventSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::Class_MetaDataParams)
};
void UMovieSceneAkAudioEventSection::StaticRegisterNativesUMovieSceneAkAudioEventSection()
{
}
UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.OuterSingleton, Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.OuterSingleton;
}
UMovieSceneAkAudioEventSection::UMovieSceneAkAudioEventSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMovieSceneAkAudioEventSection);
UMovieSceneAkAudioEventSection::~UMovieSceneAkAudioEventSection() {}
// ********** End Class UMovieSceneAkAudioEventSection *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAkAudioEventSection, UMovieSceneAkAudioEventSection::StaticClass, TEXT("UMovieSceneAkAudioEventSection"), &Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAkAudioEventSection), 586971682U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h__Script_AkAudio_2223606215{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
