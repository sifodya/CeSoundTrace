// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkEffectShareSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Wwise/CookedData/WwiseLocalizedShareSetCookedData.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkEffectShareSet() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkEffectShareSet();
AKAUDIO_API UClass* Z_Construct_UClass_UAkEffectShareSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkEffectShareSet ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkEffectShareSet;
UClass* UAkEffectShareSet::GetPrivateStaticClass()
{
	using TClass = UAkEffectShareSet;
	if (!Z_Registration_Info_UClass_UAkEffectShareSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkEffectShareSet"),
			Z_Registration_Info_UClass_UAkEffectShareSet.InnerSingleton,
			StaticRegisterNativesUAkEffectShareSet,
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
	return Z_Registration_Info_UClass_UAkEffectShareSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkEffectShareSet_NoRegister()
{
	return UAkEffectShareSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkEffectShareSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkEffectShareSet.h" },
		{ "ModuleRelativePath", "Classes/AkEffectShareSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShareSetCookedData_MetaData[] = {
		{ "Category", "AkEffectShareSet" },
		{ "ModuleRelativePath", "Classes/AkEffectShareSet.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShareSetInfo_MetaData[] = {
		{ "Category", "AkEffectShareSet" },
		{ "ModuleRelativePath", "Classes/AkEffectShareSet.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UAkEffectShareSet constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShareSetCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShareSetInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkEffectShareSet constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkEffectShareSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkEffectShareSet_Statics

// ********** Begin Class UAkEffectShareSet Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData = { "ShareSetCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkEffectShareSet, ShareSetCookedData), Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShareSetCookedData_MetaData), NewProp_ShareSetCookedData_MetaData) }; // 3102067558
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetInfo = { "ShareSetInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkEffectShareSet, ShareSetInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShareSetInfo_MetaData), NewProp_ShareSetInfo_MetaData) }; // 2762036770
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkEffectShareSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSet_Statics::PropPointers) < 2048);
// ********** End Class UAkEffectShareSet Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UAkEffectShareSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkEffectShareSet_Statics::ClassParams = {
	&UAkEffectShareSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkEffectShareSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkEffectShareSet_Statics::Class_MetaDataParams)
};
void UAkEffectShareSet::StaticRegisterNativesUAkEffectShareSet()
{
}
UClass* Z_Construct_UClass_UAkEffectShareSet()
{
	if (!Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton, Z_Construct_UClass_UAkEffectShareSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton;
}
UAkEffectShareSet::UAkEffectShareSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkEffectShareSet);
UAkEffectShareSet::~UAkEffectShareSet() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkEffectShareSet)
// ********** End Class UAkEffectShareSet **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkEffectShareSet, UAkEffectShareSet::StaticClass, TEXT("UAkEffectShareSet"), &Z_Registration_Info_UClass_UAkEffectShareSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkEffectShareSet), 3579942357U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h__Script_AkAudio_3096804144{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
