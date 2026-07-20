// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/AkJsonFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkJsonFactory() {}

// ********** Begin Cross Module References ********************************************************
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkJsonFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkJsonFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkJsonFactory ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkJsonFactory;
UClass* UAkJsonFactory::GetPrivateStaticClass()
{
	using TClass = UAkJsonFactory;
	if (!Z_Registration_Info_UClass_UAkJsonFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkJsonFactory"),
			Z_Registration_Info_UClass_UAkJsonFactory.InnerSingleton,
			StaticRegisterNativesUAkJsonFactory,
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
	return Z_Registration_Info_UClass_UAkJsonFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkJsonFactory_NoRegister()
{
	return UAkJsonFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkJsonFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09UAkJsonFactory\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AkJsonFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/AkJsonFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAkJsonFactory" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkJsonFactory constinit property declarations ***************************
// ********** End Class UAkJsonFactory constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkJsonFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkJsonFactory_Statics
UObject* (*const Z_Construct_UClass_UAkJsonFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkJsonFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkJsonFactory_Statics::ClassParams = {
	&UAkJsonFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkJsonFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkJsonFactory_Statics::Class_MetaDataParams)
};
void UAkJsonFactory::StaticRegisterNativesUAkJsonFactory()
{
}
UClass* Z_Construct_UClass_UAkJsonFactory()
{
	if (!Z_Registration_Info_UClass_UAkJsonFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkJsonFactory.OuterSingleton, Z_Construct_UClass_UAkJsonFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkJsonFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkJsonFactory);
UAkJsonFactory::~UAkJsonFactory() {}
// ********** End Class UAkJsonFactory *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h__Script_AudiokineticTools_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkJsonFactory, UAkJsonFactory::StaticClass, TEXT("UAkJsonFactory"), &Z_Registration_Info_UClass_UAkJsonFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkJsonFactory), 1622199692U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h__Script_AudiokineticTools_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h__Script_AudiokineticTools_1865393394{
	TEXT("/Script/AudiokineticTools"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h__Script_AudiokineticTools_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h__Script_AudiokineticTools_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
