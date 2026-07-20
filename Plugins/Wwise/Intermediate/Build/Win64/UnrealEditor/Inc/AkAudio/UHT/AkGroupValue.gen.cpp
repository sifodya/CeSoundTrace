// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkGroupValue.h"
#include "Wwise/CookedData/WwiseGroupValueCookedData.h"
#include "Wwise/Info/WwiseGroupValueInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkGroupValue() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkGroupValue ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkGroupValue;
UClass* UAkGroupValue::GetPrivateStaticClass()
{
	using TClass = UAkGroupValue;
	if (!Z_Registration_Info_UClass_UAkGroupValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkGroupValue"),
			Z_Registration_Info_UClass_UAkGroupValue.InnerSingleton,
			StaticRegisterNativesUAkGroupValue,
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
	return Z_Registration_Info_UClass_UAkGroupValue.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkGroupValue_NoRegister()
{
	return UAkGroupValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkGroupValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkGroupValue.h" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupValueCookedData_MetaData[] = {
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupValueInfo_MetaData[] = {
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupShortID_MetaData[] = {
		{ "Deprecated", "" },
		{ "DeprecationMessage", "Use Group ID from Load Data. Used for migration from older versions." },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkGroupValue constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValueCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValueInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GroupShortID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkGroupValue constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGroupValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkGroupValue_Statics

// ********** Begin Class UAkGroupValue Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueCookedData = { "GroupValueCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGroupValue, GroupValueCookedData), Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupValueCookedData_MetaData), NewProp_GroupValueCookedData_MetaData) }; // 518714856
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueInfo = { "GroupValueInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGroupValue, GroupValueInfo), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupValueInfo_MetaData), NewProp_GroupValueInfo_MetaData) }; // 3734965903
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID = { "GroupShortID", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGroupValue, GroupShortID_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupShortID_MetaData), NewProp_GroupShortID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGroupValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueInfo,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::PropPointers) < 2048);
// ********** End Class UAkGroupValue Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UAkGroupValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkGroupValue_Statics::ClassParams = {
	&UAkGroupValue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkGroupValue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams)
};
void UAkGroupValue::StaticRegisterNativesUAkGroupValue()
{
}
UClass* Z_Construct_UClass_UAkGroupValue()
{
	if (!Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton, Z_Construct_UClass_UAkGroupValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton;
}
UAkGroupValue::UAkGroupValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkGroupValue);
UAkGroupValue::~UAkGroupValue() {}
// ********** End Class UAkGroupValue **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGroupValue_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkGroupValue, UAkGroupValue::StaticClass, TEXT("UAkGroupValue"), &Z_Registration_Info_UClass_UAkGroupValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGroupValue), 2808036262U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGroupValue_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGroupValue_h__Script_AkAudio_3380343296{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGroupValue_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGroupValue_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
