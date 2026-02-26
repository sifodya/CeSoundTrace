// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_tvOS/AkTVOSPlatformInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkTVOSPlatformInfo() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkTVOSPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkTVOSPlatformInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkTVOSPlatformInfo ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkTVOSPlatformInfo;
UClass* UAkTVOSPlatformInfo::GetPrivateStaticClass()
{
	using TClass = UAkTVOSPlatformInfo;
	if (!Z_Registration_Info_UClass_UAkTVOSPlatformInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkTVOSPlatformInfo"),
			Z_Registration_Info_UClass_UAkTVOSPlatformInfo.InnerSingleton,
			StaticRegisterNativesUAkTVOSPlatformInfo,
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
	return Z_Registration_Info_UClass_UAkTVOSPlatformInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkTVOSPlatformInfo_NoRegister()
{
	return UAkTVOSPlatformInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkTVOSPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_tvOS/AkTVOSPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkTVOSPlatformInfo constinit property declarations **********************
// ********** End Class UAkTVOSPlatformInfo constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkTVOSPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkTVOSPlatformInfo_Statics
UObject* (*const Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::ClassParams = {
	&UAkTVOSPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::Class_MetaDataParams)
};
void UAkTVOSPlatformInfo::StaticRegisterNativesUAkTVOSPlatformInfo()
{
}
UClass* Z_Construct_UClass_UAkTVOSPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkTVOSPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkTVOSPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkTVOSPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkTVOSPlatformInfo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkTVOSPlatformInfo);
UAkTVOSPlatformInfo::~UAkTVOSPlatformInfo() {}
// ********** End Class UAkTVOSPlatformInfo ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSPlatformInfo_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkTVOSPlatformInfo, UAkTVOSPlatformInfo::StaticClass, TEXT("UAkTVOSPlatformInfo"), &Z_Registration_Info_UClass_UAkTVOSPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkTVOSPlatformInfo), 3860258376U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSPlatformInfo_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSPlatformInfo_h__Script_AkAudio_3656954592{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSPlatformInfo_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSPlatformInfo_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
