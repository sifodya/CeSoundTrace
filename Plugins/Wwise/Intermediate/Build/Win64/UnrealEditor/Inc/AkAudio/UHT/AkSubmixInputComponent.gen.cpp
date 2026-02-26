// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkSubmixInputComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkSubmixInputComponent() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDEPRECATED_UAkSubmixInputComponent **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent;
UClass* UDEPRECATED_UAkSubmixInputComponent::GetPrivateStaticClass()
{
	using TClass = UDEPRECATED_UAkSubmixInputComponent;
	if (!Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UAkSubmixInputComponent"),
			Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.InnerSingleton,
			StaticRegisterNativesUDEPRECATED_UAkSubmixInputComponent,
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
	return Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_NoRegister()
{
	return UDEPRECATED_UAkSubmixInputComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "DisplayName", "AkSubmixInput ( DEPRECATED )" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkSubmixInputComponent.h" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "(DEPRECATED) See AudioLink: https://www.audiokinetic.com/en/library/edge/?source=UE4&id=using_audio_link.html)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[] = {
		{ "Category", "SubmixInput" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDEPRECATED_UAkSubmixInputComponent constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDEPRECATED_UAkSubmixInputComponent constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UAkSubmixInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics

// ********** Begin Class UDEPRECATED_UAkSubmixInputComponent Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_UAkSubmixInputComponent, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixToRecord_MetaData), NewProp_SubmixToRecord_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::PropPointers) < 2048);
// ********** End Class UDEPRECATED_UAkSubmixInputComponent Property Definitions *******************
UObject* (*const Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::ClassParams = {
	&UDEPRECATED_UAkSubmixInputComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::PropPointers),
	0,
	0x02B002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::Class_MetaDataParams)
};
void UDEPRECATED_UAkSubmixInputComponent::StaticRegisterNativesUDEPRECATED_UAkSubmixInputComponent()
{
}
UClass* Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDEPRECATED_UAkSubmixInputComponent);
UDEPRECATED_UAkSubmixInputComponent::~UDEPRECATED_UAkSubmixInputComponent() {}
// ********** End Class UDEPRECATED_UAkSubmixInputComponent ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent, UDEPRECATED_UAkSubmixInputComponent::StaticClass, TEXT("UDEPRECATED_UAkSubmixInputComponent"), &Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UAkSubmixInputComponent), 4142947785U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h__Script_AkAudio_7548513{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
