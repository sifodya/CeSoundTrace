// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_Linux/AkLinuxPlatformInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkLinuxPlatformInfo() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxPlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkLinuxPlatformInfo *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkLinuxPlatformInfo;
UClass* UAkLinuxPlatformInfo::GetPrivateStaticClass()
{
	using TClass = UAkLinuxPlatformInfo;
	if (!Z_Registration_Info_UClass_UAkLinuxPlatformInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkLinuxPlatformInfo"),
			Z_Registration_Info_UClass_UAkLinuxPlatformInfo.InnerSingleton,
			StaticRegisterNativesUAkLinuxPlatformInfo,
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
	return Z_Registration_Info_UClass_UAkLinuxPlatformInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkLinuxPlatformInfo_NoRegister()
{
	return UAkLinuxPlatformInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkLinuxPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Linux/AkLinuxPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Linux/AkLinuxPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkLinuxPlatformInfo constinit property declarations *********************
// ********** End Class UAkLinuxPlatformInfo constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLinuxPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkLinuxPlatformInfo_Statics
UObject* (*const Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::ClassParams = {
	&UAkLinuxPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::Class_MetaDataParams)
};
void UAkLinuxPlatformInfo::StaticRegisterNativesUAkLinuxPlatformInfo()
{
}
UClass* Z_Construct_UClass_UAkLinuxPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkLinuxPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLinuxPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkLinuxPlatformInfo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkLinuxPlatformInfo);
UAkLinuxPlatformInfo::~UAkLinuxPlatformInfo() {}
// ********** End Class UAkLinuxPlatformInfo *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxPlatformInfo_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkLinuxPlatformInfo, UAkLinuxPlatformInfo::StaticClass, TEXT("UAkLinuxPlatformInfo"), &Z_Registration_Info_UClass_UAkLinuxPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLinuxPlatformInfo), 976463363U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxPlatformInfo_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxPlatformInfo_h__Script_AkAudio_2407355205{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxPlatformInfo_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxPlatformInfo_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
