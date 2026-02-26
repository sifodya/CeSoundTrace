// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/WwiseSharedAssetLibraryFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseSharedAssetLibraryFilter() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwisePackagingRuntime();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWwiseSharedAssetLibraryFilter *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter;
UClass* UWwiseSharedAssetLibraryFilter::GetPrivateStaticClass()
{
	using TClass = UWwiseSharedAssetLibraryFilter;
	if (!Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseSharedAssetLibraryFilter"),
			Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.InnerSingleton,
			StaticRegisterNativesUWwiseSharedAssetLibraryFilter,
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
	return Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_NoRegister()
{
	return UWwiseSharedAssetLibraryFilter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A reusable list of Wwise Asset Library Filters. \n */" },
#endif
		{ "DisplayName", "Wwise Shared Asset Library Filter" },
		{ "IncludePath", "Wwise/Packaging/WwiseSharedAssetLibraryFilter.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseSharedAssetLibraryFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A reusable list of Wwise Asset Library Filters." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseSharedAssetLibraryFilter constinit property declarations ***********
// ********** End Class UWwiseSharedAssetLibraryFilter constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseSharedAssetLibraryFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics
UObject* (*const Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseFilterableAssetLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::ClassParams = {
	&UWwiseSharedAssetLibraryFilter::StaticClass,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::Class_MetaDataParams)
};
void UWwiseSharedAssetLibraryFilter::StaticRegisterNativesUWwiseSharedAssetLibraryFilter()
{
}
UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter()
{
	if (!Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.OuterSingleton, Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseSharedAssetLibraryFilter);
UWwiseSharedAssetLibraryFilter::~UWwiseSharedAssetLibraryFilter() {}
// ********** End Class UWwiseSharedAssetLibraryFilter *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseSharedAssetLibraryFilter_h__Script_WwisePackagingRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseSharedAssetLibraryFilter, UWwiseSharedAssetLibraryFilter::StaticClass, TEXT("UWwiseSharedAssetLibraryFilter"), &Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseSharedAssetLibraryFilter), 673338254U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseSharedAssetLibraryFilter_h__Script_WwisePackagingRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseSharedAssetLibraryFilter_h__Script_WwisePackagingRuntime_2357572793{
	TEXT("/Script/WwisePackagingRuntime"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseSharedAssetLibraryFilter_h__Script_WwisePackagingRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseSharedAssetLibraryFilter_h__Script_WwisePackagingRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
