// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneWwiseGameParameterTrack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneWwiseGameParameterTrack() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMovieSceneWwiseGameParameterTrack ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack;
UClass* UMovieSceneWwiseGameParameterTrack::GetPrivateStaticClass()
{
	using TClass = UMovieSceneWwiseGameParameterTrack;
	if (!Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MovieSceneWwiseGameParameterTrack"),
			Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.InnerSingleton,
			StaticRegisterNativesUMovieSceneWwiseGameParameterTrack,
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
	return Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_NoRegister()
{
	return UMovieSceneWwiseGameParameterTrack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Handles manipulation of float properties in a movie scene\n */" },
#endif
		{ "IncludePath", "MovieSceneWwiseGameParameterTrack.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles manipulation of float properties in a movie scene" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMovieSceneWwiseGameParameterTrack constinit property declarations *******
// ********** End Class UMovieSceneWwiseGameParameterTrack constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneWwiseGameParameterTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics
UObject* (*const Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneAkTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneWwiseGameParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 4099870696
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::ClassParams = {
	&UMovieSceneWwiseGameParameterTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::Class_MetaDataParams)
};
void UMovieSceneWwiseGameParameterTrack::StaticRegisterNativesUMovieSceneWwiseGameParameterTrack()
{
}
UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMovieSceneWwiseGameParameterTrack);
UMovieSceneWwiseGameParameterTrack::~UMovieSceneWwiseGameParameterTrack() {}
// ********** End Class UMovieSceneWwiseGameParameterTrack *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterTrack_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack, UMovieSceneWwiseGameParameterTrack::StaticClass, TEXT("UMovieSceneWwiseGameParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneWwiseGameParameterTrack), 2026156095U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterTrack_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterTrack_h__Script_AkAudio_2194062924{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterTrack_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterTrack_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
