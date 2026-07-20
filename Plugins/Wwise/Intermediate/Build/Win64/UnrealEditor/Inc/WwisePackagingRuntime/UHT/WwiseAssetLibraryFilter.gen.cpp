// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/WwiseAssetLibraryFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryFilter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WwisePackagingRuntime();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWwiseAssetLibraryFilter *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseAssetLibraryFilter;
UClass* UWwiseAssetLibraryFilter::GetPrivateStaticClass()
{
	using TClass = UWwiseAssetLibraryFilter;
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseAssetLibraryFilter"),
			Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.InnerSingleton,
			StaticRegisterNativesUWwiseAssetLibraryFilter,
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
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter_NoRegister()
{
	return UWwiseAssetLibraryFilter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Wwise|AssetLibrary|Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Abstract base UObject representing a single AssetLibrary filter.\n *\n * A filter removes elements from the the Asset Library through the IsAssetAvailable operation.\n */" },
#endif
		{ "IncludePath", "Wwise/Packaging/WwiseAssetLibraryFilter.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abstract base UObject representing a single AssetLibrary filter.\n\nA filter removes elements from the the Asset Library through the IsAssetAvailable operation." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseAssetLibraryFilter constinit property declarations *****************
// ********** End Class UWwiseAssetLibraryFilter constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::ClassParams = {
	&UWwiseAssetLibraryFilter::StaticClass,
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
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::Class_MetaDataParams)
};
void UWwiseAssetLibraryFilter::StaticRegisterNativesUWwiseAssetLibraryFilter()
{
}
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseAssetLibraryFilter);
UWwiseAssetLibraryFilter::~UWwiseAssetLibraryFilter() {}
// ********** End Class UWwiseAssetLibraryFilter ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryFilter_h__Script_WwisePackagingRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryFilter, UWwiseAssetLibraryFilter::StaticClass, TEXT("UWwiseAssetLibraryFilter"), &Z_Registration_Info_UClass_UWwiseAssetLibraryFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryFilter), 2157684556U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryFilter_h__Script_WwisePackagingRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryFilter_h__Script_WwisePackagingRuntime_1797674785{
	TEXT("/Script/WwisePackagingRuntime"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryFilter_h__Script_WwisePackagingRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryFilter_h__Script_WwisePackagingRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
