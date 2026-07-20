// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_Mac/AkMacPlatformInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkMacPlatformInfo() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkMacPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkMacPlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkMacPlatformInfo *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkMacPlatformInfo;
UClass* UAkMacPlatformInfo::GetPrivateStaticClass()
{
	using TClass = UAkMacPlatformInfo;
	if (!Z_Registration_Info_UClass_UAkMacPlatformInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkMacPlatformInfo"),
			Z_Registration_Info_UClass_UAkMacPlatformInfo.InnerSingleton,
			StaticRegisterNativesUAkMacPlatformInfo,
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
	return Z_Registration_Info_UClass_UAkMacPlatformInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkMacPlatformInfo_NoRegister()
{
	return UAkMacPlatformInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkMacPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Mac/AkMacPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Mac/AkMacPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkMacPlatformInfo constinit property declarations ***********************
// ********** End Class UAkMacPlatformInfo constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMacPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkMacPlatformInfo_Statics
UObject* (*const Z_Construct_UClass_UAkMacPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMacPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMacPlatformInfo_Statics::ClassParams = {
	&UAkMacPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMacPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkMacPlatformInfo_Statics::Class_MetaDataParams)
};
void UAkMacPlatformInfo::StaticRegisterNativesUAkMacPlatformInfo()
{
}
UClass* Z_Construct_UClass_UAkMacPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkMacPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMacPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkMacPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMacPlatformInfo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkMacPlatformInfo);
UAkMacPlatformInfo::~UAkMacPlatformInfo() {}
// ********** End Class UAkMacPlatformInfo *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacPlatformInfo_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkMacPlatformInfo, UAkMacPlatformInfo::StaticClass, TEXT("UAkMacPlatformInfo"), &Z_Registration_Info_UClass_UAkMacPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMacPlatformInfo), 579740760U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacPlatformInfo_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacPlatformInfo_h__Script_AkAudio_1291018350{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacPlatformInfo_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacPlatformInfo_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
