// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAcousticTextureSetComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAcousticTextureSetComponent() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkAcousticTextureSetComponent *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAcousticTextureSetComponent;
UClass* UAkAcousticTextureSetComponent::GetPrivateStaticClass()
{
	using TClass = UAkAcousticTextureSetComponent;
	if (!Z_Registration_Info_UClass_UAkAcousticTextureSetComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkAcousticTextureSetComponent"),
			Z_Registration_Info_UClass_UAkAcousticTextureSetComponent.InnerSingleton,
			StaticRegisterNativesUAkAcousticTextureSetComponent,
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
	return Z_Registration_Info_UClass_UAkAcousticTextureSetComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister()
{
	return UAkAcousticTextureSetComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkAcousticTextureSetComponent.h" },
		{ "ModuleRelativePath", "Classes/AkAcousticTextureSetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAcousticTextureSetComponent constinit property declarations ***********
// ********** End Class UAkAcousticTextureSetComponent constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAcousticTextureSetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics
UObject* (*const Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::ClassParams = {
	&UAkAcousticTextureSetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::Class_MetaDataParams)
};
void UAkAcousticTextureSetComponent::StaticRegisterNativesUAkAcousticTextureSetComponent()
{
}
UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent()
{
	if (!Z_Registration_Info_UClass_UAkAcousticTextureSetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAcousticTextureSetComponent.OuterSingleton, Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAcousticTextureSetComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAcousticTextureSetComponent);
UAkAcousticTextureSetComponent::~UAkAcousticTextureSetComponent() {}
// ********** End Class UAkAcousticTextureSetComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTextureSetComponent_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAcousticTextureSetComponent, UAkAcousticTextureSetComponent::StaticClass, TEXT("UAkAcousticTextureSetComponent"), &Z_Registration_Info_UClass_UAkAcousticTextureSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAcousticTextureSetComponent), 2415461430U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTextureSetComponent_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTextureSetComponent_h__Script_AkAudio_2626322688{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTextureSetComponent_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTextureSetComponent_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
