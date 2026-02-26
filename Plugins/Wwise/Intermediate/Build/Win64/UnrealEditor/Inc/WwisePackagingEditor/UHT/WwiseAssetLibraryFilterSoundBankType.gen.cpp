// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryFilterSoundBankType() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwisePackagingEditor();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_NoRegister();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_NoRegister();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWwiseAssetLibraryFilterUserDefinedSoundBanks ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks;
UClass* UWwiseAssetLibraryFilterUserDefinedSoundBanks::GetPrivateStaticClass()
{
	using TClass = UWwiseAssetLibraryFilterUserDefinedSoundBanks;
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseAssetLibraryFilterUserDefinedSoundBanks"),
			Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks.InnerSingleton,
			StaticRegisterNativesUWwiseAssetLibraryFilterUserDefinedSoundBanks,
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
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_NoRegister()
{
	return UWwiseAssetLibraryFilterUserDefinedSoundBanks::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|AssetLibrary|Filter" },
		{ "DisplayName", "Exclude User-Defined SoundBanks" },
		{ "IncludePath", "Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterUserBanks_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Filter SoundBanks based on their type\n// It will filter User Defined SoundBanks when disabled\n// It will filter Auto Defined SoundBanks when enabled\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filter SoundBanks based on their type\nIt will filter User Defined SoundBanks when disabled\nIt will filter Auto Defined SoundBanks when enabled" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseAssetLibraryFilterUserDefinedSoundBanks constinit property declarations 
	static void NewProp_bFilterUserBanks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterUserBanks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWwiseAssetLibraryFilterUserDefinedSoundBanks constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryFilterUserDefinedSoundBanks>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics

// ********** Begin Class UWwiseAssetLibraryFilterUserDefinedSoundBanks Property Definitions *******
void Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::NewProp_bFilterUserBanks_SetBit(void* Obj)
{
	((UWwiseAssetLibraryFilterUserDefinedSoundBanks*)Obj)->bFilterUserBanks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::NewProp_bFilterUserBanks = { "bFilterUserBanks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryFilterUserDefinedSoundBanks), &Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::NewProp_bFilterUserBanks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterUserBanks_MetaData), NewProp_bFilterUserBanks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::NewProp_bFilterUserBanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::PropPointers) < 2048);
// ********** End Class UWwiseAssetLibraryFilterUserDefinedSoundBanks Property Definitions *********
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseAssetLibraryFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::ClassParams = {
	&UWwiseAssetLibraryFilterUserDefinedSoundBanks::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::Class_MetaDataParams)
};
void UWwiseAssetLibraryFilterUserDefinedSoundBanks::StaticRegisterNativesUWwiseAssetLibraryFilterUserDefinedSoundBanks()
{
}
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseAssetLibraryFilterUserDefinedSoundBanks);
UWwiseAssetLibraryFilterUserDefinedSoundBanks::~UWwiseAssetLibraryFilterUserDefinedSoundBanks() {}
// ********** End Class UWwiseAssetLibraryFilterUserDefinedSoundBanks ******************************

// ********** Begin Class UWwiseAssetLibraryFilterAutoDefinedSoundBanks ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks;
UClass* UWwiseAssetLibraryFilterAutoDefinedSoundBanks::GetPrivateStaticClass()
{
	using TClass = UWwiseAssetLibraryFilterAutoDefinedSoundBanks;
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseAssetLibraryFilterAutoDefinedSoundBanks"),
			Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks.InnerSingleton,
			StaticRegisterNativesUWwiseAssetLibraryFilterAutoDefinedSoundBanks,
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
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_NoRegister()
{
	return UWwiseAssetLibraryFilterAutoDefinedSoundBanks::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|AssetLibrary|Filter" },
		{ "DisplayName", "Exclude Auto-Defined SoundBanks" },
		{ "IncludePath", "Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseAssetLibraryFilterAutoDefinedSoundBanks constinit property declarations 
// ********** End Class UWwiseAssetLibraryFilterAutoDefinedSoundBanks constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryFilterAutoDefinedSoundBanks>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::ClassParams = {
	&UWwiseAssetLibraryFilterAutoDefinedSoundBanks::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::Class_MetaDataParams)
};
void UWwiseAssetLibraryFilterAutoDefinedSoundBanks::StaticRegisterNativesUWwiseAssetLibraryFilterAutoDefinedSoundBanks()
{
}
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseAssetLibraryFilterAutoDefinedSoundBanks);
UWwiseAssetLibraryFilterAutoDefinedSoundBanks::~UWwiseAssetLibraryFilterAutoDefinedSoundBanks() {}
// ********** End Class UWwiseAssetLibraryFilterAutoDefinedSoundBanks ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterSoundBankType_h__Script_WwisePackagingEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks, UWwiseAssetLibraryFilterUserDefinedSoundBanks::StaticClass, TEXT("UWwiseAssetLibraryFilterUserDefinedSoundBanks"), &Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryFilterUserDefinedSoundBanks), 2202137354U) },
		{ Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks, UWwiseAssetLibraryFilterAutoDefinedSoundBanks::StaticClass, TEXT("UWwiseAssetLibraryFilterAutoDefinedSoundBanks"), &Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryFilterAutoDefinedSoundBanks), 3455505756U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterSoundBankType_h__Script_WwisePackagingEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterSoundBankType_h__Script_WwisePackagingEditor_1671524982{
	TEXT("/Script/WwisePackagingEditor"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterSoundBankType_h__Script_WwisePackagingEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterSoundBankType_h__Script_WwisePackagingEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
