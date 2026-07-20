// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkRtpc.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Wwise/CookedData/WwiseGameParameterCookedData.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkRtpc() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc();
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGameParameterCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkRtpc ******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkRtpc;
UClass* UAkRtpc::GetPrivateStaticClass()
{
	using TClass = UAkRtpc;
	if (!Z_Registration_Info_UClass_UAkRtpc.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkRtpc"),
			Z_Registration_Info_UClass_UAkRtpc.InnerSingleton,
			StaticRegisterNativesUAkRtpc,
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
	return Z_Registration_Info_UClass_UAkRtpc.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkRtpc_NoRegister()
{
	return UAkRtpc::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkRtpc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Wwise Game Parameter" },
		{ "IncludePath", "AkRtpc.h" },
		{ "ModuleRelativePath", "Classes/AkRtpc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameParameterCookedData_MetaData[] = {
		{ "Category", "AkGameParameter" },
		{ "ModuleRelativePath", "Classes/AkRtpc.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RtpcInfo_MetaData[] = {
		{ "Category", "AkGameParameter" },
		{ "DisplayName", "Game Parameter Info" },
		{ "ModuleRelativePath", "Classes/AkRtpc.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UAkRtpc constinit property declarations **********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameParameterCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RtpcInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkRtpc constinit property declarations ************************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkRtpc>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkRtpc_Statics

// ********** Begin Class UAkRtpc Property Definitions *********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkRtpc_Statics::NewProp_GameParameterCookedData = { "GameParameterCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRtpc, GameParameterCookedData), Z_Construct_UScriptStruct_FWwiseGameParameterCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameParameterCookedData_MetaData), NewProp_GameParameterCookedData_MetaData) }; // 2043968875
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkRtpc_Statics::NewProp_RtpcInfo = { "RtpcInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRtpc, RtpcInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RtpcInfo_MetaData), NewProp_RtpcInfo_MetaData) }; // 2762036770
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkRtpc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRtpc_Statics::NewProp_GameParameterCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRtpc_Statics::NewProp_RtpcInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpc_Statics::PropPointers) < 2048);
// ********** End Class UAkRtpc Property Definitions ***********************************************
UObject* (*const Z_Construct_UClass_UAkRtpc_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpc_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkRtpc_Statics::ClassParams = {
	&UAkRtpc::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkRtpc_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpc_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpc_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkRtpc_Statics::Class_MetaDataParams)
};
void UAkRtpc::StaticRegisterNativesUAkRtpc()
{
}
UClass* Z_Construct_UClass_UAkRtpc()
{
	if (!Z_Registration_Info_UClass_UAkRtpc.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkRtpc.OuterSingleton, Z_Construct_UClass_UAkRtpc_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkRtpc.OuterSingleton;
}
UAkRtpc::UAkRtpc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkRtpc);
UAkRtpc::~UAkRtpc() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkRtpc)
// ********** End Class UAkRtpc ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkRtpc, UAkRtpc::StaticClass, TEXT("UAkRtpc"), &Z_Registration_Info_UClass_UAkRtpc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkRtpc), 4178562108U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h__Script_AkAudio_1987465550{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
