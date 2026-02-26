// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkWindowsPlatformInfo() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin32PlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin32PlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin64PlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin64PlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWindowsPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWindowsPlatformInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkWin32PlatformInfo *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkWin32PlatformInfo;
UClass* UAkWin32PlatformInfo::GetPrivateStaticClass()
{
	using TClass = UAkWin32PlatformInfo;
	if (!Z_Registration_Info_UClass_UAkWin32PlatformInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkWin32PlatformInfo"),
			Z_Registration_Info_UClass_UAkWin32PlatformInfo.InnerSingleton,
			StaticRegisterNativesUAkWin32PlatformInfo,
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
	return Z_Registration_Info_UClass_UAkWin32PlatformInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkWin32PlatformInfo_NoRegister()
{
	return UAkWin32PlatformInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkWin32PlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkWin32PlatformInfo constinit property declarations *********************
// ********** End Class UAkWin32PlatformInfo constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWin32PlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkWin32PlatformInfo_Statics
UObject* (*const Z_Construct_UClass_UAkWin32PlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWin32PlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWin32PlatformInfo_Statics::ClassParams = {
	&UAkWin32PlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWin32PlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWin32PlatformInfo_Statics::Class_MetaDataParams)
};
void UAkWin32PlatformInfo::StaticRegisterNativesUAkWin32PlatformInfo()
{
}
UClass* Z_Construct_UClass_UAkWin32PlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWin32PlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkWin32PlatformInfo);
UAkWin32PlatformInfo::~UAkWin32PlatformInfo() {}
// ********** End Class UAkWin32PlatformInfo *******************************************************

// ********** Begin Class UAkWin64PlatformInfo *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkWin64PlatformInfo;
UClass* UAkWin64PlatformInfo::GetPrivateStaticClass()
{
	using TClass = UAkWin64PlatformInfo;
	if (!Z_Registration_Info_UClass_UAkWin64PlatformInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkWin64PlatformInfo"),
			Z_Registration_Info_UClass_UAkWin64PlatformInfo.InnerSingleton,
			StaticRegisterNativesUAkWin64PlatformInfo,
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
	return Z_Registration_Info_UClass_UAkWin64PlatformInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkWin64PlatformInfo_NoRegister()
{
	return UAkWin64PlatformInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkWin64PlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkWin64PlatformInfo constinit property declarations *********************
// ********** End Class UAkWin64PlatformInfo constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWin64PlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkWin64PlatformInfo_Statics
UObject* (*const Z_Construct_UClass_UAkWin64PlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWin64PlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWin64PlatformInfo_Statics::ClassParams = {
	&UAkWin64PlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWin64PlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWin64PlatformInfo_Statics::Class_MetaDataParams)
};
void UAkWin64PlatformInfo::StaticRegisterNativesUAkWin64PlatformInfo()
{
}
UClass* Z_Construct_UClass_UAkWin64PlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkWin64PlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWin64PlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWin64PlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWin64PlatformInfo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkWin64PlatformInfo);
UAkWin64PlatformInfo::~UAkWin64PlatformInfo() {}
// ********** End Class UAkWin64PlatformInfo *******************************************************

// ********** Begin Class UAkWindowsPlatformInfo ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkWindowsPlatformInfo;
UClass* UAkWindowsPlatformInfo::GetPrivateStaticClass()
{
	using TClass = UAkWindowsPlatformInfo;
	if (!Z_Registration_Info_UClass_UAkWindowsPlatformInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkWindowsPlatformInfo"),
			Z_Registration_Info_UClass_UAkWindowsPlatformInfo.InnerSingleton,
			StaticRegisterNativesUAkWindowsPlatformInfo,
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
	return Z_Registration_Info_UClass_UAkWindowsPlatformInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkWindowsPlatformInfo_NoRegister()
{
	return UAkWindowsPlatformInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkWindowsPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkWindowsPlatformInfo constinit property declarations *******************
// ********** End Class UAkWindowsPlatformInfo constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWindowsPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkWindowsPlatformInfo_Statics
UObject* (*const Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkWin64PlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::ClassParams = {
	&UAkWindowsPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::Class_MetaDataParams)
};
void UAkWindowsPlatformInfo::StaticRegisterNativesUAkWindowsPlatformInfo()
{
}
UClass* Z_Construct_UClass_UAkWindowsPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkWindowsPlatformInfo);
UAkWindowsPlatformInfo::~UAkWindowsPlatformInfo() {}
// ********** End Class UAkWindowsPlatformInfo *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsPlatformInfo_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkWin32PlatformInfo, UAkWin32PlatformInfo::StaticClass, TEXT("UAkWin32PlatformInfo"), &Z_Registration_Info_UClass_UAkWin32PlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWin32PlatformInfo), 1742470156U) },
		{ Z_Construct_UClass_UAkWin64PlatformInfo, UAkWin64PlatformInfo::StaticClass, TEXT("UAkWin64PlatformInfo"), &Z_Registration_Info_UClass_UAkWin64PlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWin64PlatformInfo), 54976680U) },
		{ Z_Construct_UClass_UAkWindowsPlatformInfo, UAkWindowsPlatformInfo::StaticClass, TEXT("UAkWindowsPlatformInfo"), &Z_Registration_Info_UClass_UAkWindowsPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWindowsPlatformInfo), 3821724620U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsPlatformInfo_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsPlatformInfo_h__Script_AkAudio_177091606{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsPlatformInfo_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsPlatformInfo_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
