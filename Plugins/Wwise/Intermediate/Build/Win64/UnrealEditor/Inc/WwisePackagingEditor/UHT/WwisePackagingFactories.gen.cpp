// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/WwisePackagingFactories.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwisePackagingFactories() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_WwisePackagingEditor();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwisePackagingFactory();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwisePackagingFactory_NoRegister();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWwisePackagingFactory ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwisePackagingFactory;
UClass* UWwisePackagingFactory::GetPrivateStaticClass()
{
	using TClass = UWwisePackagingFactory;
	if (!Z_Registration_Info_UClass_UWwisePackagingFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwisePackagingFactory"),
			Z_Registration_Info_UClass_UWwisePackagingFactory.InnerSingleton,
			StaticRegisterNativesUWwisePackagingFactory,
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
	return Z_Registration_Info_UClass_UWwisePackagingFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwisePackagingFactory_NoRegister()
{
	return UWwisePackagingFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwisePackagingFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Wwise/Packaging/WwisePackagingFactories.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwisePackagingFactory constinit property declarations *******************
// ********** End Class UWwisePackagingFactory constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwisePackagingFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwisePackagingFactory_Statics
UObject* (*const Z_Construct_UClass_UWwisePackagingFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwisePackagingFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwisePackagingFactory_Statics::ClassParams = {
	&UWwisePackagingFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwisePackagingFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwisePackagingFactory_Statics::Class_MetaDataParams)
};
void UWwisePackagingFactory::StaticRegisterNativesUWwisePackagingFactory()
{
}
UClass* Z_Construct_UClass_UWwisePackagingFactory()
{
	if (!Z_Registration_Info_UClass_UWwisePackagingFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwisePackagingFactory.OuterSingleton, Z_Construct_UClass_UWwisePackagingFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwisePackagingFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwisePackagingFactory);
UWwisePackagingFactory::~UWwisePackagingFactory() {}
// ********** End Class UWwisePackagingFactory *****************************************************

// ********** Begin Class UWwiseSharedAssetLibraryFilterFactory ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory;
UClass* UWwiseSharedAssetLibraryFilterFactory::GetPrivateStaticClass()
{
	using TClass = UWwiseSharedAssetLibraryFilterFactory;
	if (!Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseSharedAssetLibraryFilterFactory"),
			Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory.InnerSingleton,
			StaticRegisterNativesUWwiseSharedAssetLibraryFilterFactory,
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
	return Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_NoRegister()
{
	return UWwiseSharedAssetLibraryFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Wwise/Packaging/WwisePackagingFactories.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseSharedAssetLibraryFilterFactory constinit property declarations ****
// ********** End Class UWwiseSharedAssetLibraryFilterFactory constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseSharedAssetLibraryFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics
UObject* (*const Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::ClassParams = {
	&UWwiseSharedAssetLibraryFilterFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::Class_MetaDataParams)
};
void UWwiseSharedAssetLibraryFilterFactory::StaticRegisterNativesUWwiseSharedAssetLibraryFilterFactory()
{
}
UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory()
{
	if (!Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory.OuterSingleton, Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseSharedAssetLibraryFilterFactory);
UWwiseSharedAssetLibraryFilterFactory::~UWwiseSharedAssetLibraryFilterFactory() {}
// ********** End Class UWwiseSharedAssetLibraryFilterFactory **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwisePackagingFactories_h__Script_WwisePackagingEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwisePackagingFactory, UWwisePackagingFactory::StaticClass, TEXT("UWwisePackagingFactory"), &Z_Registration_Info_UClass_UWwisePackagingFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwisePackagingFactory), 2133004578U) },
		{ Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory, UWwiseSharedAssetLibraryFilterFactory::StaticClass, TEXT("UWwiseSharedAssetLibraryFilterFactory"), &Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseSharedAssetLibraryFilterFactory), 1066005784U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwisePackagingFactories_h__Script_WwisePackagingEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwisePackagingFactories_h__Script_WwisePackagingEditor_3784862639{
	TEXT("/Script/WwisePackagingEditor"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwisePackagingFactories_h__Script_WwisePackagingEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwisePackagingFactories_h__Script_WwisePackagingEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
