// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudioBank.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAudioBank() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkAudioBank *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAudioBank;
UClass* UAkAudioBank::GetPrivateStaticClass()
{
	using TClass = UAkAudioBank;
	if (!Z_Registration_Info_UClass_UAkAudioBank.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkAudioBank"),
			Z_Registration_Info_UClass_UAkAudioBank.InnerSingleton,
			StaticRegisterNativesUAkAudioBank,
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
	return Z_Registration_Info_UClass_UAkAudioBank.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkAudioBank_NoRegister()
{
	return UAkAudioBank::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkAudioBank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkAudioBank.h" },
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoLoad_MetaData[] = {
		{ "Deprecated", "" },
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAudioBank constinit property declarations *****************************
	static void NewProp_AutoLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoLoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkAudioBank constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioBank>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkAudioBank_Statics

// ********** Begin Class UAkAudioBank Property Definitions ****************************************
void Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_SetBit(void* Obj)
{
	((UAkAudioBank*)Obj)->AutoLoad_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad = { "AutoLoad", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkAudioBank), &Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoLoad_MetaData), NewProp_AutoLoad_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioBank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::PropPointers) < 2048);
// ********** End Class UAkAudioBank Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UAkAudioBank_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioBank_Statics::ClassParams = {
	&UAkAudioBank::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkAudioBank_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioBank_Statics::Class_MetaDataParams)
};
void UAkAudioBank::StaticRegisterNativesUAkAudioBank()
{
}
UClass* Z_Construct_UClass_UAkAudioBank()
{
	if (!Z_Registration_Info_UClass_UAkAudioBank.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioBank.OuterSingleton, Z_Construct_UClass_UAkAudioBank_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioBank.OuterSingleton;
}
UAkAudioBank::UAkAudioBank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAudioBank);
UAkAudioBank::~UAkAudioBank() {}
// ********** End Class UAkAudioBank ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioBank, UAkAudioBank::StaticClass, TEXT("UAkAudioBank"), &Z_Registration_Info_UClass_UAkAudioBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioBank), 3563574620U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h__Script_AkAudio_1495224523{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
