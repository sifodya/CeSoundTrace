// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAcousticTexture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Wwise/CookedData/WwiseAcousticTextureCookedData.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAcousticTexture() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkAcousticTexture *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAcousticTexture;
UClass* UAkAcousticTexture::GetPrivateStaticClass()
{
	using TClass = UAkAcousticTexture;
	if (!Z_Registration_Info_UClass_UAkAcousticTexture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkAcousticTexture"),
			Z_Registration_Info_UClass_UAkAcousticTexture.InnerSingleton,
			StaticRegisterNativesUAkAcousticTexture,
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
	return Z_Registration_Info_UClass_UAkAcousticTexture.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister()
{
	return UAkAcousticTexture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkAcousticTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAcousticTexture.h" },
		{ "ModuleRelativePath", "Classes/AkAcousticTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTextureCookedData_MetaData[] = {
		{ "Category", "AkTexture" },
		{ "ModuleRelativePath", "Classes/AkAcousticTexture.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditColor_MetaData[] = {
		{ "Category", "AkTexture" },
		{ "ModuleRelativePath", "Classes/AkAcousticTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTextureInfo_MetaData[] = {
		{ "Category", "AkTexture" },
		{ "ModuleRelativePath", "Classes/AkAcousticTexture.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UAkAcousticTexture constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticTextureCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticTextureInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkAcousticTexture constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAcousticTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkAcousticTexture_Statics

// ********** Begin Class UAkAcousticTexture Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureCookedData = { "AcousticTextureCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAcousticTexture, AcousticTextureCookedData), Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTextureCookedData_MetaData), NewProp_AcousticTextureCookedData_MetaData) }; // 2843107687
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_EditColor = { "EditColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAcousticTexture, EditColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditColor_MetaData), NewProp_EditColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureInfo = { "AcousticTextureInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAcousticTexture, AcousticTextureInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTextureInfo_MetaData), NewProp_AcousticTextureInfo_MetaData) }; // 2762036770
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_EditColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers) < 2048);
// ********** End Class UAkAcousticTexture Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UAkAcousticTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAcousticTexture_Statics::ClassParams = {
	&UAkAcousticTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAcousticTexture_Statics::Class_MetaDataParams)
};
void UAkAcousticTexture::StaticRegisterNativesUAkAcousticTexture()
{
}
UClass* Z_Construct_UClass_UAkAcousticTexture()
{
	if (!Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton, Z_Construct_UClass_UAkAcousticTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton;
}
UAkAcousticTexture::UAkAcousticTexture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAcousticTexture);
UAkAcousticTexture::~UAkAcousticTexture() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAcousticTexture)
// ********** End Class UAkAcousticTexture *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAcousticTexture, UAkAcousticTexture::StaticClass, TEXT("UAkAcousticTexture"), &Z_Registration_Info_UClass_UAkAcousticTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAcousticTexture), 3798907286U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h__Script_AkAudio_3978145705{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
