// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/ActorFactoryAkAmbientSound.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActorFactoryAkAmbientSound() {}

// ********** Begin Cross Module References ********************************************************
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorFactoryAkAmbientSound **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UActorFactoryAkAmbientSound;
UClass* UActorFactoryAkAmbientSound::GetPrivateStaticClass()
{
	using TClass = UActorFactoryAkAmbientSound;
	if (!Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ActorFactoryAkAmbientSound"),
			Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.InnerSingleton,
			StaticRegisterNativesUActorFactoryAkAmbientSound,
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
	return Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound_NoRegister()
{
	return UActorFactoryAkAmbientSound::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09UActorFactoryAkAmbientSound\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/ActorFactoryAkAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/Factories/ActorFactoryAkAmbientSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UActorFactoryAkAmbientSound" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UActorFactoryAkAmbientSound constinit property declarations **************
// ********** End Class UActorFactoryAkAmbientSound constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryAkAmbientSound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics
UObject* (*const Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::ClassParams = {
	&UActorFactoryAkAmbientSound::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000830ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::Class_MetaDataParams)
};
void UActorFactoryAkAmbientSound::StaticRegisterNativesUActorFactoryAkAmbientSound()
{
}
UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound()
{
	if (!Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.OuterSingleton, Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UActorFactoryAkAmbientSound);
UActorFactoryAkAmbientSound::~UActorFactoryAkAmbientSound() {}
// ********** End Class UActorFactoryAkAmbientSound ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h__Script_AudiokineticTools_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryAkAmbientSound, UActorFactoryAkAmbientSound::StaticClass, TEXT("UActorFactoryAkAmbientSound"), &Z_Registration_Info_UClass_UActorFactoryAkAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryAkAmbientSound), 2245819313U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h__Script_AudiokineticTools_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h__Script_AudiokineticTools_3614156696{
	TEXT("/Script/AudiokineticTools"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h__Script_AudiokineticTools_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h__Script_AudiokineticTools_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
