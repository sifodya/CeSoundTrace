// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_Android/AkAndroidPlatformInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAndroidPlatformInfo() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidPlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkAndroidPlatformInfo ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAndroidPlatformInfo;
UClass* UAkAndroidPlatformInfo::GetPrivateStaticClass()
{
	using TClass = UAkAndroidPlatformInfo;
	if (!Z_Registration_Info_UClass_UAkAndroidPlatformInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkAndroidPlatformInfo"),
			Z_Registration_Info_UClass_UAkAndroidPlatformInfo.InnerSingleton,
			StaticRegisterNativesUAkAndroidPlatformInfo,
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
	return Z_Registration_Info_UClass_UAkAndroidPlatformInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkAndroidPlatformInfo_NoRegister()
{
	return UAkAndroidPlatformInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkAndroidPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Android/AkAndroidPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAndroidPlatformInfo constinit property declarations *******************
// ********** End Class UAkAndroidPlatformInfo constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAndroidPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkAndroidPlatformInfo_Statics
UObject* (*const Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::ClassParams = {
	&UAkAndroidPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::Class_MetaDataParams)
};
void UAkAndroidPlatformInfo::StaticRegisterNativesUAkAndroidPlatformInfo()
{
}
UClass* Z_Construct_UClass_UAkAndroidPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkAndroidPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAndroidPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAndroidPlatformInfo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAndroidPlatformInfo);
UAkAndroidPlatformInfo::~UAkAndroidPlatformInfo() {}
// ********** End Class UAkAndroidPlatformInfo *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidPlatformInfo_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAndroidPlatformInfo, UAkAndroidPlatformInfo::StaticClass, TEXT("UAkAndroidPlatformInfo"), &Z_Registration_Info_UClass_UAkAndroidPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAndroidPlatformInfo), 1928281036U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidPlatformInfo_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidPlatformInfo_h__Script_AkAudio_3810228974{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidPlatformInfo_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidPlatformInfo_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
