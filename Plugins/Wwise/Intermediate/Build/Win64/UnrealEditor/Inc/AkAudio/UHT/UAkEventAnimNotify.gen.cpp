// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UAkEventAnimNotify.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUAkEventAnimNotify() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkEventAnimNotify();
AKAUDIO_API UClass* Z_Construct_UClass_UAkEventAnimNotify_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkEventAnimNotify *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkEventAnimNotify;
UClass* UAkEventAnimNotify::GetPrivateStaticClass()
{
	using TClass = UAkEventAnimNotify;
	if (!Z_Registration_Info_UClass_UAkEventAnimNotify.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkEventAnimNotify"),
			Z_Registration_Info_UClass_UAkEventAnimNotify.InnerSingleton,
			StaticRegisterNativesUAkEventAnimNotify,
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
	return Z_Registration_Info_UClass_UAkEventAnimNotify.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkEventAnimNotify_NoRegister()
{
	return UAkEventAnimNotify::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkEventAnimNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A notification to post an AkEvent */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "UAkEventAnimNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/UAkEventAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A notification to post an AkEvent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachName_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Socket or bone name to attach sound to */" },
#endif
		{ "ModuleRelativePath", "Classes/UAkEventAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket or bone name to attach sound to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AAudiokEvent to play */" },
#endif
		{ "ModuleRelativePath", "Classes/UAkEventAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAudiokEvent to play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Follow_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If this sound should follow its owner */" },
#endif
		{ "ModuleRelativePath", "Classes/UAkEventAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this sound should follow its owner" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkEventAnimNotify constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttachName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static void NewProp_Follow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Follow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkEventAnimNotify constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkEventAnimNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkEventAnimNotify_Statics

// ********** Begin Class UAkEventAnimNotify Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkEventAnimNotify_Statics::NewProp_AttachName = { "AttachName", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkEventAnimNotify, AttachName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachName_MetaData), NewProp_AttachName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkEventAnimNotify_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0114000000000011, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkEventAnimNotify, Event), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) };
void Z_Construct_UClass_UAkEventAnimNotify_Statics::NewProp_Follow_SetBit(void* Obj)
{
	((UAkEventAnimNotify*)Obj)->Follow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkEventAnimNotify_Statics::NewProp_Follow = { "Follow", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkEventAnimNotify), &Z_Construct_UClass_UAkEventAnimNotify_Statics::NewProp_Follow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Follow_MetaData), NewProp_Follow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkEventAnimNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEventAnimNotify_Statics::NewProp_AttachName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEventAnimNotify_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEventAnimNotify_Statics::NewProp_Follow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventAnimNotify_Statics::PropPointers) < 2048);
// ********** End Class UAkEventAnimNotify Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UAkEventAnimNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventAnimNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkEventAnimNotify_Statics::ClassParams = {
	&UAkEventAnimNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkEventAnimNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventAnimNotify_Statics::PropPointers),
	0,
	0x000120A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkEventAnimNotify_Statics::Class_MetaDataParams)
};
void UAkEventAnimNotify::StaticRegisterNativesUAkEventAnimNotify()
{
}
UClass* Z_Construct_UClass_UAkEventAnimNotify()
{
	if (!Z_Registration_Info_UClass_UAkEventAnimNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkEventAnimNotify.OuterSingleton, Z_Construct_UClass_UAkEventAnimNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkEventAnimNotify.OuterSingleton;
}
UAkEventAnimNotify::UAkEventAnimNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkEventAnimNotify);
UAkEventAnimNotify::~UAkEventAnimNotify() {}
// ********** End Class UAkEventAnimNotify *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkEventAnimNotify, UAkEventAnimNotify::StaticClass, TEXT("UAkEventAnimNotify"), &Z_Registration_Info_UClass_UAkEventAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkEventAnimNotify), 2758089075U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h__Script_AkAudio_4211087790{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
