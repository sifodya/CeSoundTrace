// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkTrigger.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Wwise/CookedData/WwiseTriggerCookedData.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkTrigger() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger();
AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseTriggerCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkTrigger ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkTrigger;
UClass* UAkTrigger::GetPrivateStaticClass()
{
	using TClass = UAkTrigger;
	if (!Z_Registration_Info_UClass_UAkTrigger.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkTrigger"),
			Z_Registration_Info_UClass_UAkTrigger.InnerSingleton,
			StaticRegisterNativesUAkTrigger,
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
	return Z_Registration_Info_UClass_UAkTrigger.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkTrigger_NoRegister()
{
	return UAkTrigger::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkTrigger.h" },
		{ "ModuleRelativePath", "Classes/AkTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerCookedData_MetaData[] = {
		{ "Category", "AkTexture" },
		{ "ModuleRelativePath", "Classes/AkTrigger.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerInfo_MetaData[] = {
		{ "Category", "AkTexture" },
		{ "ModuleRelativePath", "Classes/AkTrigger.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UAkTrigger constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkTrigger constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkTrigger_Statics

// ********** Begin Class UAkTrigger Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkTrigger_Statics::NewProp_TriggerCookedData = { "TriggerCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkTrigger, TriggerCookedData), Z_Construct_UScriptStruct_FWwiseTriggerCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerCookedData_MetaData), NewProp_TriggerCookedData_MetaData) }; // 3428333239
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkTrigger_Statics::NewProp_TriggerInfo = { "TriggerInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkTrigger, TriggerInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerInfo_MetaData), NewProp_TriggerInfo_MetaData) }; // 2762036770
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkTrigger_Statics::NewProp_TriggerCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkTrigger_Statics::NewProp_TriggerInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTrigger_Statics::PropPointers) < 2048);
// ********** End Class UAkTrigger Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_UAkTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkTrigger_Statics::ClassParams = {
	&UAkTrigger::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkTrigger_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkTrigger_Statics::Class_MetaDataParams)
};
void UAkTrigger::StaticRegisterNativesUAkTrigger()
{
}
UClass* Z_Construct_UClass_UAkTrigger()
{
	if (!Z_Registration_Info_UClass_UAkTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkTrigger.OuterSingleton, Z_Construct_UClass_UAkTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkTrigger.OuterSingleton;
}
UAkTrigger::UAkTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkTrigger);
UAkTrigger::~UAkTrigger() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkTrigger)
// ********** End Class UAkTrigger *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkTrigger, UAkTrigger::StaticClass, TEXT("UAkTrigger"), &Z_Registration_Info_UClass_UAkTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkTrigger), 3287972546U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h__Script_AkAudio_1986141794{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
