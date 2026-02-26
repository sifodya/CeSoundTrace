// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkSwitchValue.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkSwitchValue() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue();
AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue();
AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkSwitchValue ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkSwitchValue;
UClass* UAkSwitchValue::GetPrivateStaticClass()
{
	using TClass = UAkSwitchValue;
	if (!Z_Registration_Info_UClass_UAkSwitchValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkSwitchValue"),
			Z_Registration_Info_UClass_UAkSwitchValue.InnerSingleton,
			StaticRegisterNativesUAkSwitchValue,
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
	return Z_Registration_Info_UClass_UAkSwitchValue.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister()
{
	return UAkSwitchValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkSwitchValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkSwitchValue.h" },
		{ "ModuleRelativePath", "Classes/AkSwitchValue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkSwitchValue constinit property declarations ***************************
// ********** End Class UAkSwitchValue constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSwitchValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkSwitchValue_Statics
UObject* (*const Z_Construct_UClass_UAkSwitchValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkGroupValue,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSwitchValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSwitchValue_Statics::ClassParams = {
	&UAkSwitchValue::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSwitchValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkSwitchValue_Statics::Class_MetaDataParams)
};
void UAkSwitchValue::StaticRegisterNativesUAkSwitchValue()
{
}
UClass* Z_Construct_UClass_UAkSwitchValue()
{
	if (!Z_Registration_Info_UClass_UAkSwitchValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSwitchValue.OuterSingleton, Z_Construct_UClass_UAkSwitchValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkSwitchValue.OuterSingleton;
}
UAkSwitchValue::UAkSwitchValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkSwitchValue);
UAkSwitchValue::~UAkSwitchValue() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkSwitchValue)
// ********** End Class UAkSwitchValue *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSwitchValue_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkSwitchValue, UAkSwitchValue::StaticClass, TEXT("UAkSwitchValue"), &Z_Registration_Info_UClass_UAkSwitchValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSwitchValue), 1657985219U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSwitchValue_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSwitchValue_h__Script_AkAudio_3449804262{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSwitchValue_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSwitchValue_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
