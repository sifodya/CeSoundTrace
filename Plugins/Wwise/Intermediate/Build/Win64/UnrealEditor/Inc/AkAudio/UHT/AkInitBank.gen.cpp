// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkInitBank.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Wwise/CookedData/WwiseInitBankCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkInitBank() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBank();
AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBank_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseInitBankCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkInitBank **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkInitBank;
UClass* UAkInitBank::GetPrivateStaticClass()
{
	using TClass = UAkInitBank;
	if (!Z_Registration_Info_UClass_UAkInitBank.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkInitBank"),
			Z_Registration_Info_UClass_UAkInitBank.InnerSingleton,
			StaticRegisterNativesUAkInitBank,
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
	return Z_Registration_Info_UClass_UAkInitBank.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkInitBank_NoRegister()
{
	return UAkInitBank::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkInitBank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkInitBank.h" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitBankCookedData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkInitBank constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitBankCookedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkInitBank constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkInitBank>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkInitBank_Statics

// ********** Begin Class UAkInitBank Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkInitBank_Statics::NewProp_InitBankCookedData = { "InitBankCookedData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkInitBank, InitBankCookedData), Z_Construct_UScriptStruct_FWwiseInitBankCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitBankCookedData_MetaData), NewProp_InitBankCookedData_MetaData) }; // 3785642243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkInitBank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBank_Statics::NewProp_InitBankCookedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::PropPointers) < 2048);
// ********** End Class UAkInitBank Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_UAkInitBank_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkInitBank_Statics::ClassParams = {
	&UAkInitBank::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkInitBank_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkInitBank_Statics::Class_MetaDataParams)
};
void UAkInitBank::StaticRegisterNativesUAkInitBank()
{
}
UClass* Z_Construct_UClass_UAkInitBank()
{
	if (!Z_Registration_Info_UClass_UAkInitBank.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkInitBank.OuterSingleton, Z_Construct_UClass_UAkInitBank_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkInitBank.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkInitBank);
UAkInitBank::~UAkInitBank() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkInitBank)
// ********** End Class UAkInitBank ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkInitBank, UAkInitBank::StaticClass, TEXT("UAkInitBank"), &Z_Registration_Info_UClass_UAkInitBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkInitBank), 361682956U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h__Script_AkAudio_1137053481{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
