// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwiseReconcileCommandlet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseReconcileCommandlet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_WwiseReconcile();
WWISERECONCILE_API UClass* Z_Construct_UClass_UWwiseReconcileCommandlet();
WWISERECONCILE_API UClass* Z_Construct_UClass_UWwiseReconcileCommandlet_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWwiseReconcileCommandlet ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseReconcileCommandlet;
UClass* UWwiseReconcileCommandlet::GetPrivateStaticClass()
{
	using TClass = UWwiseReconcileCommandlet;
	if (!Z_Registration_Info_UClass_UWwiseReconcileCommandlet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseReconcileCommandlet"),
			Z_Registration_Info_UClass_UWwiseReconcileCommandlet.InnerSingleton,
			StaticRegisterNativesUWwiseReconcileCommandlet,
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
	return Z_Registration_Info_UClass_UWwiseReconcileCommandlet.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseReconcileCommandlet_NoRegister()
{
	return UWwiseReconcileCommandlet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseReconcileCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/WwiseReconcileCommandlet.h" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseReconcileCommandlet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseReconcileCommandlet constinit property declarations ****************
// ********** End Class UWwiseReconcileCommandlet constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseReconcileCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseReconcileCommandlet_Statics
UObject* (*const Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseReconcile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::ClassParams = {
	&UWwiseReconcileCommandlet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::Class_MetaDataParams)
};
void UWwiseReconcileCommandlet::StaticRegisterNativesUWwiseReconcileCommandlet()
{
}
UClass* Z_Construct_UClass_UWwiseReconcileCommandlet()
{
	if (!Z_Registration_Info_UClass_UWwiseReconcileCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseReconcileCommandlet.OuterSingleton, Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseReconcileCommandlet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseReconcileCommandlet);
UWwiseReconcileCommandlet::~UWwiseReconcileCommandlet() {}
// ********** End Class UWwiseReconcileCommandlet **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseReconcile_Public_Wwise_WwiseReconcileCommandlet_h__Script_WwiseReconcile_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseReconcileCommandlet, UWwiseReconcileCommandlet::StaticClass, TEXT("UWwiseReconcileCommandlet"), &Z_Registration_Info_UClass_UWwiseReconcileCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseReconcileCommandlet), 928062721U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseReconcile_Public_Wwise_WwiseReconcileCommandlet_h__Script_WwiseReconcile_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseReconcile_Public_Wwise_WwiseReconcileCommandlet_h__Script_WwiseReconcile_2974884341{
	TEXT("/Script/WwiseReconcile"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseReconcile_Public_Wwise_WwiseReconcileCommandlet_h__Script_WwiseReconcile_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseReconcile_Public_Wwise_WwiseReconcileCommandlet_h__Script_WwiseReconcile_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
