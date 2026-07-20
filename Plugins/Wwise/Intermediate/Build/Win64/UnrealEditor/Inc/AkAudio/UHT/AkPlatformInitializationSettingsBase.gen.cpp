// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InitializationSettings/AkPlatformInitializationSettingsBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkPlatformInitializationSettingsBase() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkPlatformInitializationSettingsBase ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase;
UClass* UAkPlatformInitializationSettingsBase::GetPrivateStaticClass()
{
	using TClass = UAkPlatformInitializationSettingsBase;
	if (!Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkPlatformInitializationSettingsBase"),
			Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase.InnerSingleton,
			StaticRegisterNativesUAkPlatformInitializationSettingsBase,
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
	return Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase_NoRegister()
{
	return UAkPlatformInitializationSettingsBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InitializationSettings/AkPlatformInitializationSettingsBase.h" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkPlatformInitializationSettingsBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkPlatformInitializationSettingsBase constinit property declarations ****
// ********** End Class UAkPlatformInitializationSettingsBase constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPlatformInitializationSettingsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics
UObject* (*const Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::ClassParams = {
	&UAkPlatformInitializationSettingsBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::Class_MetaDataParams)
};
void UAkPlatformInitializationSettingsBase::StaticRegisterNativesUAkPlatformInitializationSettingsBase()
{
}
UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase()
{
	if (!Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase.OuterSingleton, Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase.OuterSingleton;
}
UAkPlatformInitializationSettingsBase::UAkPlatformInitializationSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkPlatformInitializationSettingsBase);
UAkPlatformInitializationSettingsBase::~UAkPlatformInitializationSettingsBase() {}
// ********** End Class UAkPlatformInitializationSettingsBase **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitializationSettingsBase_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkPlatformInitializationSettingsBase, UAkPlatformInitializationSettingsBase::StaticClass, TEXT("UAkPlatformInitializationSettingsBase"), &Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkPlatformInitializationSettingsBase), 1525127316U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitializationSettingsBase_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitializationSettingsBase_h__Script_AkAudio_3701657031{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitializationSettingsBase_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitializationSettingsBase_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
