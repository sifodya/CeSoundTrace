// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_WinGC/AkWinGDKPlatformInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkWinGDKPlatformInfo() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinAnvilPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinAnvilPlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinGDKPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinGDKPlatformInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkWinGDKPlatformInfo ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkWinGDKPlatformInfo;
UClass* UAkWinGDKPlatformInfo::GetPrivateStaticClass()
{
	using TClass = UAkWinGDKPlatformInfo;
	if (!Z_Registration_Info_UClass_UAkWinGDKPlatformInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkWinGDKPlatformInfo"),
			Z_Registration_Info_UClass_UAkWinGDKPlatformInfo.InnerSingleton,
			StaticRegisterNativesUAkWinGDKPlatformInfo,
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
	return Z_Registration_Info_UClass_UAkWinGDKPlatformInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkWinGDKPlatformInfo_NoRegister()
{
	return UAkWinGDKPlatformInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_WinGC/AkWinGDKPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkWinGDKPlatformInfo constinit property declarations ********************
// ********** End Class UAkWinGDKPlatformInfo constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWinGDKPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics
UObject* (*const Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::ClassParams = {
	&UAkWinGDKPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::Class_MetaDataParams)
};
void UAkWinGDKPlatformInfo::StaticRegisterNativesUAkWinGDKPlatformInfo()
{
}
UClass* Z_Construct_UClass_UAkWinGDKPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkWinGDKPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWinGDKPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWinGDKPlatformInfo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkWinGDKPlatformInfo);
UAkWinGDKPlatformInfo::~UAkWinGDKPlatformInfo() {}
// ********** End Class UAkWinGDKPlatformInfo ******************************************************

// ********** Begin Class UAkWinAnvilPlatformInfo **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo;
UClass* UAkWinAnvilPlatformInfo::GetPrivateStaticClass()
{
	using TClass = UAkWinAnvilPlatformInfo;
	if (!Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkWinAnvilPlatformInfo"),
			Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo.InnerSingleton,
			StaticRegisterNativesUAkWinAnvilPlatformInfo,
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
	return Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkWinAnvilPlatformInfo_NoRegister()
{
	return UAkWinAnvilPlatformInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_WinGC/AkWinGDKPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkWinAnvilPlatformInfo constinit property declarations ******************
// ********** End Class UAkWinAnvilPlatformInfo constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWinAnvilPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics
UObject* (*const Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkWinGDKPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::ClassParams = {
	&UAkWinAnvilPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::Class_MetaDataParams)
};
void UAkWinAnvilPlatformInfo::StaticRegisterNativesUAkWinAnvilPlatformInfo()
{
}
UClass* Z_Construct_UClass_UAkWinAnvilPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkWinAnvilPlatformInfo);
UAkWinAnvilPlatformInfo::~UAkWinAnvilPlatformInfo() {}
// ********** End Class UAkWinAnvilPlatformInfo ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKPlatformInfo_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkWinGDKPlatformInfo, UAkWinGDKPlatformInfo::StaticClass, TEXT("UAkWinGDKPlatformInfo"), &Z_Registration_Info_UClass_UAkWinGDKPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWinGDKPlatformInfo), 755540344U) },
		{ Z_Construct_UClass_UAkWinAnvilPlatformInfo, UAkWinAnvilPlatformInfo::StaticClass, TEXT("UAkWinAnvilPlatformInfo"), &Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWinAnvilPlatformInfo), 1861444060U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKPlatformInfo_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKPlatformInfo_h__Script_AkAudio_2952105378{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKPlatformInfo_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKPlatformInfo_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
