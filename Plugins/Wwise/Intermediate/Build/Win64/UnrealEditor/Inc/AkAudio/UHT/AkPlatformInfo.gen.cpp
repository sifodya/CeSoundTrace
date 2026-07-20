// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatformInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkPlatformInfo() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkPlatformInfo **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkPlatformInfo;
UClass* UAkPlatformInfo::GetPrivateStaticClass()
{
	using TClass = UAkPlatformInfo;
	if (!Z_Registration_Info_UClass_UAkPlatformInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkPlatformInfo"),
			Z_Registration_Info_UClass_UAkPlatformInfo.InnerSingleton,
			StaticRegisterNativesUAkPlatformInfo,
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
	return Z_Registration_Info_UClass_UAkPlatformInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkPlatformInfo_NoRegister()
{
	return UAkPlatformInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkPlatformInfo constinit property declarations **************************
// ********** End Class UAkPlatformInfo constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkPlatformInfo_Statics
UObject* (*const Z_Construct_UClass_UAkPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkPlatformInfo_Statics::ClassParams = {
	&UAkPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkPlatformInfo_Statics::Class_MetaDataParams)
};
void UAkPlatformInfo::StaticRegisterNativesUAkPlatformInfo()
{
}
UClass* Z_Construct_UClass_UAkPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkPlatformInfo.OuterSingleton;
}
UAkPlatformInfo::UAkPlatformInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkPlatformInfo);
UAkPlatformInfo::~UAkPlatformInfo() {}
// ********** End Class UAkPlatformInfo ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkPlatformInfo, UAkPlatformInfo::StaticClass, TEXT("UAkPlatformInfo"), &Z_Registration_Info_UClass_UAkPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkPlatformInfo), 826818980U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h__Script_AkAudio_3949265985{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatformInfo_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
