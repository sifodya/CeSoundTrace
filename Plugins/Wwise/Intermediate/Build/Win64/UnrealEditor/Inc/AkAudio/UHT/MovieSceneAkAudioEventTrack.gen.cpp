// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneAkAudioEventTrack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventTrack() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMovieSceneAkAudioEventTrack *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack;
UClass* UMovieSceneAkAudioEventTrack::GetPrivateStaticClass()
{
	using TClass = UMovieSceneAkAudioEventTrack;
	if (!Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MovieSceneAkAudioEventTrack"),
			Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.InnerSingleton,
			StaticRegisterNativesUMovieSceneAkAudioEventTrack,
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
	return Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack_NoRegister()
{
	return UMovieSceneAkAudioEventTrack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneAkAudioEventTrack.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventTrack.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMovieSceneAkAudioEventTrack constinit property declarations *************
// ********** End Class UMovieSceneAkAudioEventTrack constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkAudioEventTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics
UObject* (*const Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneAkTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneAkAudioEventTrack, IMovieSceneTrackTemplateProducer), false },  // 4099870696
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::ClassParams = {
	&UMovieSceneAkAudioEventTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::Class_MetaDataParams)
};
void UMovieSceneAkAudioEventTrack::StaticRegisterNativesUMovieSceneAkAudioEventTrack()
{
}
UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMovieSceneAkAudioEventTrack);
UMovieSceneAkAudioEventTrack::~UMovieSceneAkAudioEventTrack() {}
// ********** End Class UMovieSceneAkAudioEventTrack ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAkAudioEventTrack, UMovieSceneAkAudioEventTrack::StaticClass, TEXT("UMovieSceneAkAudioEventTrack"), &Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAkAudioEventTrack), 4076999300U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h__Script_AkAudio_552752674{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
