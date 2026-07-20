// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/Filters/WwiseAssetLibraryFilterMultiReference.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryFilterMultiReference() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwisePackagingEditor();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_NoRegister();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWwiseAssetLibraryFilterMultiReference ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference;
UClass* UWwiseAssetLibraryFilterMultiReference::GetPrivateStaticClass()
{
	using TClass = UWwiseAssetLibraryFilterMultiReference;
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseAssetLibraryFilterMultiReference"),
			Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference.InnerSingleton,
			StaticRegisterNativesUWwiseAssetLibraryFilterMultiReference,
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
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_NoRegister()
{
	return UWwiseAssetLibraryFilterMultiReference::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|AssetLibrary|Filter" },
		{ "DisplayName", "Keep Multiple Reference Assets Only" },
		{ "IncludePath", "Wwise/Packaging/Filters/WwiseAssetLibraryFilterMultiReference.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterMultiReference.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseAssetLibraryFilterMultiReference constinit property declarations ***
// ********** End Class UWwiseAssetLibraryFilterMultiReference constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryFilterMultiReference>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseAssetLibraryFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::ClassParams = {
	&UWwiseAssetLibraryFilterMultiReference::StaticClass,
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
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::Class_MetaDataParams)
};
void UWwiseAssetLibraryFilterMultiReference::StaticRegisterNativesUWwiseAssetLibraryFilterMultiReference()
{
}
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseAssetLibraryFilterMultiReference);
UWwiseAssetLibraryFilterMultiReference::~UWwiseAssetLibraryFilterMultiReference() {}
// ********** End Class UWwiseAssetLibraryFilterMultiReference *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterMultiReference_h__Script_WwisePackagingEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference, UWwiseAssetLibraryFilterMultiReference::StaticClass, TEXT("UWwiseAssetLibraryFilterMultiReference"), &Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryFilterMultiReference), 1164370894U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterMultiReference_h__Script_WwisePackagingEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterMultiReference_h__Script_WwisePackagingEditor_3701951914{
	TEXT("/Script/WwisePackagingEditor"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterMultiReference_h__Script_WwisePackagingEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterMultiReference_h__Script_WwisePackagingEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
