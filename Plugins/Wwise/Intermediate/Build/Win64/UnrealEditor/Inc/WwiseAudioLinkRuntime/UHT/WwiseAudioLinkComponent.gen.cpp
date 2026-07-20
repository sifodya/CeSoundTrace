// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/AudioLink/WwiseAudioLinkComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAudioLinkComponent() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
AUDIOLINKENGINE_API UClass* Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_WwiseAudioLinkRuntime();
WWISEAUDIOLINKRUNTIME_API UClass* Z_Construct_UClass_UWwiseAudioLinkComponent();
WWISEAUDIOLINKRUNTIME_API UClass* Z_Construct_UClass_UWwiseAudioLinkComponent_NoRegister();
WWISEAUDIOLINKRUNTIME_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWwiseAudioLinkComponent *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseAudioLinkComponent;
UClass* UWwiseAudioLinkComponent::GetPrivateStaticClass()
{
	using TClass = UWwiseAudioLinkComponent;
	if (!Z_Registration_Info_UClass_UWwiseAudioLinkComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WwiseAudioLinkComponent"),
			Z_Registration_Info_UClass_UWwiseAudioLinkComponent.InnerSingleton,
			StaticRegisterNativesUWwiseAudioLinkComponent,
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
	return Z_Registration_Info_UClass_UWwiseAudioLinkComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UWwiseAudioLinkComponent_NoRegister()
{
	return UWwiseAudioLinkComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWwiseAudioLinkComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio Common" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation PhysicsVolume" },
		{ "IncludePath", "Wwise/AudioLink/WwiseAudioLinkComponent.h" },
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The sound to be played */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sound to be played" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "AudioLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not to play the Link on start*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to play the Link on start" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseAudioLinkComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static void NewProp_bAutoPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWwiseAudioLinkComponent constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAudioLinkComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWwiseAudioLinkComponent_Statics

// ********** Begin Class UWwiseAudioLinkComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkComponent, Settings), Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkComponent, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
void Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((UWwiseAudioLinkComponent*)Obj)->bAutoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAudioLinkComponent), &Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPlay_MetaData), NewProp_bAutoPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::PropPointers) < 2048);
// ********** End Class UWwiseAudioLinkComponent Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseAudioLinkRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister, (int32)VTABLE_OFFSET(UWwiseAudioLinkComponent, IAudioLinkBlueprintInterface), false },  // 3250147520
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::ClassParams = {
	&UWwiseAudioLinkComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::Class_MetaDataParams)
};
void UWwiseAudioLinkComponent::StaticRegisterNativesUWwiseAudioLinkComponent()
{
}
UClass* Z_Construct_UClass_UWwiseAudioLinkComponent()
{
	if (!Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton, Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton;
}
UWwiseAudioLinkComponent::UWwiseAudioLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseAudioLinkComponent);
UWwiseAudioLinkComponent::~UWwiseAudioLinkComponent() {}
// ********** End Class UWwiseAudioLinkComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h__Script_WwiseAudioLinkRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAudioLinkComponent, UWwiseAudioLinkComponent::StaticClass, TEXT("UWwiseAudioLinkComponent"), &Z_Registration_Info_UClass_UWwiseAudioLinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAudioLinkComponent), 548017100U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h__Script_WwiseAudioLinkRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h__Script_WwiseAudioLinkRuntime_238010253{
	TEXT("/Script/WwiseAudioLinkRuntime"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h__Script_WwiseAudioLinkRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h__Script_WwiseAudioLinkRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
