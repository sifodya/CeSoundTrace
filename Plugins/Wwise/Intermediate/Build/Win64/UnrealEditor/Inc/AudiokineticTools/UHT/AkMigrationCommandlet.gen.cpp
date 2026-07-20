// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetManagement/AkMigrationCommandlet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkMigrationCommandlet() {}

// ********** Begin Cross Module References ********************************************************
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkMigrationCommandlet();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkMigrationCommandlet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkMigrationCommandlet ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkMigrationCommandlet;
UClass* UAkMigrationCommandlet::GetPrivateStaticClass()
{
	using TClass = UAkMigrationCommandlet;
	if (!Z_Registration_Info_UClass_UAkMigrationCommandlet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkMigrationCommandlet"),
			Z_Registration_Info_UClass_UAkMigrationCommandlet.InnerSingleton,
			StaticRegisterNativesUAkMigrationCommandlet,
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
	return Z_Registration_Info_UClass_UAkMigrationCommandlet.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkMigrationCommandlet_NoRegister()
{
	return UAkMigrationCommandlet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkMigrationCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AssetManagement/AkMigrationCommandlet.h" },
		{ "ModuleRelativePath", "Classes/AssetManagement/AkMigrationCommandlet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkMigrationCommandlet constinit property declarations *******************
// ********** End Class UAkMigrationCommandlet constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMigrationCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkMigrationCommandlet_Statics
UObject* (*const Z_Construct_UClass_UAkMigrationCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMigrationCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMigrationCommandlet_Statics::ClassParams = {
	&UAkMigrationCommandlet::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMigrationCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkMigrationCommandlet_Statics::Class_MetaDataParams)
};
void UAkMigrationCommandlet::StaticRegisterNativesUAkMigrationCommandlet()
{
}
UClass* Z_Construct_UClass_UAkMigrationCommandlet()
{
	if (!Z_Registration_Info_UClass_UAkMigrationCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMigrationCommandlet.OuterSingleton, Z_Construct_UClass_UAkMigrationCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMigrationCommandlet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkMigrationCommandlet);
UAkMigrationCommandlet::~UAkMigrationCommandlet() {}
// ********** End Class UAkMigrationCommandlet *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h__Script_AudiokineticTools_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkMigrationCommandlet, UAkMigrationCommandlet::StaticClass, TEXT("UAkMigrationCommandlet"), &Z_Registration_Info_UClass_UAkMigrationCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMigrationCommandlet), 4119247880U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h__Script_AudiokineticTools_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h__Script_AudiokineticTools_3346025402{
	TEXT("/Script/AudiokineticTools"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h__Script_AudiokineticTools_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h__Script_AudiokineticTools_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
