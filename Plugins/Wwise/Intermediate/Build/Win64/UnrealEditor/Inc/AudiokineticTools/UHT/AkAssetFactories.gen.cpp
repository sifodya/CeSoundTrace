// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAssetFactories.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAssetFactories() {}

// ********** Begin Cross Module References ********************************************************
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAcousticTextureFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAcousticTextureFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAssetFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAssetFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSetFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSetFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioEventFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioEventFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioNodeFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioNodeFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAuxBusFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAuxBusFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkDialogueEventFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkDialogueEventFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkEffectShareSetFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkEffectShareSetFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkRtpcFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkRtpcFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkStateValueFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkStateValueFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkSwitchValueFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkSwitchValueFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkTriggerFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkTriggerFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkAssetFactory **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAssetFactory;
UClass* UAkAssetFactory::GetPrivateStaticClass()
{
	using TClass = UAkAssetFactory;
	if (!Z_Registration_Info_UClass_UAkAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkAssetFactory"),
			Z_Registration_Info_UClass_UAkAssetFactory.InnerSingleton,
			StaticRegisterNativesUAkAssetFactory,
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
	return Z_Registration_Info_UClass_UAkAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkAssetFactory_NoRegister()
{
	return UAkAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAssetFactory constinit property declarations **************************
// ********** End Class UAkAssetFactory constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkAssetFactory_Statics
UObject* (*const Z_Construct_UClass_UAkAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetFactory_Statics::ClassParams = {
	&UAkAssetFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAssetFactory_Statics::Class_MetaDataParams)
};
void UAkAssetFactory::StaticRegisterNativesUAkAssetFactory()
{
}
UClass* Z_Construct_UClass_UAkAssetFactory()
{
	if (!Z_Registration_Info_UClass_UAkAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetFactory.OuterSingleton, Z_Construct_UClass_UAkAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAssetFactory.OuterSingleton;
}
UAkAssetFactory::UAkAssetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAssetFactory);
UAkAssetFactory::~UAkAssetFactory() {}
// ********** End Class UAkAssetFactory ************************************************************

// ********** Begin Class UAkAcousticTextureFactory ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAcousticTextureFactory;
UClass* UAkAcousticTextureFactory::GetPrivateStaticClass()
{
	using TClass = UAkAcousticTextureFactory;
	if (!Z_Registration_Info_UClass_UAkAcousticTextureFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkAcousticTextureFactory"),
			Z_Registration_Info_UClass_UAkAcousticTextureFactory.InnerSingleton,
			StaticRegisterNativesUAkAcousticTextureFactory,
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
	return Z_Registration_Info_UClass_UAkAcousticTextureFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkAcousticTextureFactory_NoRegister()
{
	return UAkAcousticTextureFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkAcousticTextureFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAcousticTextureFactory constinit property declarations ****************
// ********** End Class UAkAcousticTextureFactory constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAcousticTextureFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkAcousticTextureFactory_Statics
UObject* (*const Z_Construct_UClass_UAkAcousticTextureFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTextureFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAcousticTextureFactory_Statics::ClassParams = {
	&UAkAcousticTextureFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTextureFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAcousticTextureFactory_Statics::Class_MetaDataParams)
};
void UAkAcousticTextureFactory::StaticRegisterNativesUAkAcousticTextureFactory()
{
}
UClass* Z_Construct_UClass_UAkAcousticTextureFactory()
{
	if (!Z_Registration_Info_UClass_UAkAcousticTextureFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAcousticTextureFactory.OuterSingleton, Z_Construct_UClass_UAkAcousticTextureFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAcousticTextureFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAcousticTextureFactory);
UAkAcousticTextureFactory::~UAkAcousticTextureFactory() {}
// ********** End Class UAkAcousticTextureFactory **************************************************

// ********** Begin Class UAkAudioEventFactory *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAudioEventFactory;
UClass* UAkAudioEventFactory::GetPrivateStaticClass()
{
	using TClass = UAkAudioEventFactory;
	if (!Z_Registration_Info_UClass_UAkAudioEventFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkAudioEventFactory"),
			Z_Registration_Info_UClass_UAkAudioEventFactory.InnerSingleton,
			StaticRegisterNativesUAkAudioEventFactory,
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
	return Z_Registration_Info_UClass_UAkAudioEventFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkAudioEventFactory_NoRegister()
{
	return UAkAudioEventFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkAudioEventFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAudioEventFactory constinit property declarations *********************
// ********** End Class UAkAudioEventFactory constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioEventFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkAudioEventFactory_Statics
UObject* (*const Z_Construct_UClass_UAkAudioEventFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioEventFactory_Statics::ClassParams = {
	&UAkAudioEventFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioEventFactory_Statics::Class_MetaDataParams)
};
void UAkAudioEventFactory::StaticRegisterNativesUAkAudioEventFactory()
{
}
UClass* Z_Construct_UClass_UAkAudioEventFactory()
{
	if (!Z_Registration_Info_UClass_UAkAudioEventFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioEventFactory.OuterSingleton, Z_Construct_UClass_UAkAudioEventFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioEventFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAudioEventFactory);
UAkAudioEventFactory::~UAkAudioEventFactory() {}
// ********** End Class UAkAudioEventFactory *******************************************************

// ********** Begin Class UAkAudioNodeFactory ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAudioNodeFactory;
UClass* UAkAudioNodeFactory::GetPrivateStaticClass()
{
	using TClass = UAkAudioNodeFactory;
	if (!Z_Registration_Info_UClass_UAkAudioNodeFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkAudioNodeFactory"),
			Z_Registration_Info_UClass_UAkAudioNodeFactory.InnerSingleton,
			StaticRegisterNativesUAkAudioNodeFactory,
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
	return Z_Registration_Info_UClass_UAkAudioNodeFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkAudioNodeFactory_NoRegister()
{
	return UAkAudioNodeFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkAudioNodeFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAudioNodeFactory constinit property declarations **********************
// ********** End Class UAkAudioNodeFactory constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioNodeFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkAudioNodeFactory_Statics
UObject* (*const Z_Construct_UClass_UAkAudioNodeFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioNodeFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioNodeFactory_Statics::ClassParams = {
	&UAkAudioNodeFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioNodeFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioNodeFactory_Statics::Class_MetaDataParams)
};
void UAkAudioNodeFactory::StaticRegisterNativesUAkAudioNodeFactory()
{
}
UClass* Z_Construct_UClass_UAkAudioNodeFactory()
{
	if (!Z_Registration_Info_UClass_UAkAudioNodeFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioNodeFactory.OuterSingleton, Z_Construct_UClass_UAkAudioNodeFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioNodeFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAudioNodeFactory);
UAkAudioNodeFactory::~UAkAudioNodeFactory() {}
// ********** End Class UAkAudioNodeFactory ********************************************************

// ********** Begin Class UAkDialogueEventFactory **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkDialogueEventFactory;
UClass* UAkDialogueEventFactory::GetPrivateStaticClass()
{
	using TClass = UAkDialogueEventFactory;
	if (!Z_Registration_Info_UClass_UAkDialogueEventFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkDialogueEventFactory"),
			Z_Registration_Info_UClass_UAkDialogueEventFactory.InnerSingleton,
			StaticRegisterNativesUAkDialogueEventFactory,
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
	return Z_Registration_Info_UClass_UAkDialogueEventFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkDialogueEventFactory_NoRegister()
{
	return UAkDialogueEventFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkDialogueEventFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkDialogueEventFactory constinit property declarations ******************
// ********** End Class UAkDialogueEventFactory constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDialogueEventFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkDialogueEventFactory_Statics
UObject* (*const Z_Construct_UClass_UAkDialogueEventFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDialogueEventFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkDialogueEventFactory_Statics::ClassParams = {
	&UAkDialogueEventFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDialogueEventFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkDialogueEventFactory_Statics::Class_MetaDataParams)
};
void UAkDialogueEventFactory::StaticRegisterNativesUAkDialogueEventFactory()
{
}
UClass* Z_Construct_UClass_UAkDialogueEventFactory()
{
	if (!Z_Registration_Info_UClass_UAkDialogueEventFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDialogueEventFactory.OuterSingleton, Z_Construct_UClass_UAkDialogueEventFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkDialogueEventFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkDialogueEventFactory);
UAkDialogueEventFactory::~UAkDialogueEventFactory() {}
// ********** End Class UAkDialogueEventFactory ****************************************************

// ********** Begin Class UAkAuxBusFactory *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAuxBusFactory;
UClass* UAkAuxBusFactory::GetPrivateStaticClass()
{
	using TClass = UAkAuxBusFactory;
	if (!Z_Registration_Info_UClass_UAkAuxBusFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkAuxBusFactory"),
			Z_Registration_Info_UClass_UAkAuxBusFactory.InnerSingleton,
			StaticRegisterNativesUAkAuxBusFactory,
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
	return Z_Registration_Info_UClass_UAkAuxBusFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkAuxBusFactory_NoRegister()
{
	return UAkAuxBusFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkAuxBusFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAuxBusFactory constinit property declarations *************************
// ********** End Class UAkAuxBusFactory constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAuxBusFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkAuxBusFactory_Statics
UObject* (*const Z_Construct_UClass_UAkAuxBusFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBusFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAuxBusFactory_Statics::ClassParams = {
	&UAkAuxBusFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBusFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAuxBusFactory_Statics::Class_MetaDataParams)
};
void UAkAuxBusFactory::StaticRegisterNativesUAkAuxBusFactory()
{
}
UClass* Z_Construct_UClass_UAkAuxBusFactory()
{
	if (!Z_Registration_Info_UClass_UAkAuxBusFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAuxBusFactory.OuterSingleton, Z_Construct_UClass_UAkAuxBusFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAuxBusFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAuxBusFactory);
UAkAuxBusFactory::~UAkAuxBusFactory() {}
// ********** End Class UAkAuxBusFactory ***********************************************************

// ********** Begin Class UAkRtpcFactory ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkRtpcFactory;
UClass* UAkRtpcFactory::GetPrivateStaticClass()
{
	using TClass = UAkRtpcFactory;
	if (!Z_Registration_Info_UClass_UAkRtpcFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkRtpcFactory"),
			Z_Registration_Info_UClass_UAkRtpcFactory.InnerSingleton,
			StaticRegisterNativesUAkRtpcFactory,
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
	return Z_Registration_Info_UClass_UAkRtpcFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkRtpcFactory_NoRegister()
{
	return UAkRtpcFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkRtpcFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkRtpcFactory constinit property declarations ***************************
// ********** End Class UAkRtpcFactory constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkRtpcFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkRtpcFactory_Statics
UObject* (*const Z_Construct_UClass_UAkRtpcFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpcFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkRtpcFactory_Statics::ClassParams = {
	&UAkRtpcFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpcFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkRtpcFactory_Statics::Class_MetaDataParams)
};
void UAkRtpcFactory::StaticRegisterNativesUAkRtpcFactory()
{
}
UClass* Z_Construct_UClass_UAkRtpcFactory()
{
	if (!Z_Registration_Info_UClass_UAkRtpcFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkRtpcFactory.OuterSingleton, Z_Construct_UClass_UAkRtpcFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkRtpcFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkRtpcFactory);
UAkRtpcFactory::~UAkRtpcFactory() {}
// ********** End Class UAkRtpcFactory *************************************************************

// ********** Begin Class UAkTriggerFactory ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkTriggerFactory;
UClass* UAkTriggerFactory::GetPrivateStaticClass()
{
	using TClass = UAkTriggerFactory;
	if (!Z_Registration_Info_UClass_UAkTriggerFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkTriggerFactory"),
			Z_Registration_Info_UClass_UAkTriggerFactory.InnerSingleton,
			StaticRegisterNativesUAkTriggerFactory,
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
	return Z_Registration_Info_UClass_UAkTriggerFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkTriggerFactory_NoRegister()
{
	return UAkTriggerFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkTriggerFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkTriggerFactory constinit property declarations ************************
// ********** End Class UAkTriggerFactory constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkTriggerFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkTriggerFactory_Statics
UObject* (*const Z_Construct_UClass_UAkTriggerFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTriggerFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkTriggerFactory_Statics::ClassParams = {
	&UAkTriggerFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTriggerFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkTriggerFactory_Statics::Class_MetaDataParams)
};
void UAkTriggerFactory::StaticRegisterNativesUAkTriggerFactory()
{
}
UClass* Z_Construct_UClass_UAkTriggerFactory()
{
	if (!Z_Registration_Info_UClass_UAkTriggerFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkTriggerFactory.OuterSingleton, Z_Construct_UClass_UAkTriggerFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkTriggerFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkTriggerFactory);
UAkTriggerFactory::~UAkTriggerFactory() {}
// ********** End Class UAkTriggerFactory **********************************************************

// ********** Begin Class UAkStateValueFactory *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkStateValueFactory;
UClass* UAkStateValueFactory::GetPrivateStaticClass()
{
	using TClass = UAkStateValueFactory;
	if (!Z_Registration_Info_UClass_UAkStateValueFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkStateValueFactory"),
			Z_Registration_Info_UClass_UAkStateValueFactory.InnerSingleton,
			StaticRegisterNativesUAkStateValueFactory,
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
	return Z_Registration_Info_UClass_UAkStateValueFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkStateValueFactory_NoRegister()
{
	return UAkStateValueFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkStateValueFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// mlarouche - For now Switch and State factory are only used in drag & drop\n" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mlarouche - For now Switch and State factory are only used in drag & drop" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkStateValueFactory constinit property declarations *********************
// ********** End Class UAkStateValueFactory constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkStateValueFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkStateValueFactory_Statics
UObject* (*const Z_Construct_UClass_UAkStateValueFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkStateValueFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkStateValueFactory_Statics::ClassParams = {
	&UAkStateValueFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkStateValueFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkStateValueFactory_Statics::Class_MetaDataParams)
};
void UAkStateValueFactory::StaticRegisterNativesUAkStateValueFactory()
{
}
UClass* Z_Construct_UClass_UAkStateValueFactory()
{
	if (!Z_Registration_Info_UClass_UAkStateValueFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkStateValueFactory.OuterSingleton, Z_Construct_UClass_UAkStateValueFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkStateValueFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkStateValueFactory);
UAkStateValueFactory::~UAkStateValueFactory() {}
// ********** End Class UAkStateValueFactory *******************************************************

// ********** Begin Class UAkSwitchValueFactory ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkSwitchValueFactory;
UClass* UAkSwitchValueFactory::GetPrivateStaticClass()
{
	using TClass = UAkSwitchValueFactory;
	if (!Z_Registration_Info_UClass_UAkSwitchValueFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkSwitchValueFactory"),
			Z_Registration_Info_UClass_UAkSwitchValueFactory.InnerSingleton,
			StaticRegisterNativesUAkSwitchValueFactory,
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
	return Z_Registration_Info_UClass_UAkSwitchValueFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkSwitchValueFactory_NoRegister()
{
	return UAkSwitchValueFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkSwitchValueFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkSwitchValueFactory constinit property declarations ********************
// ********** End Class UAkSwitchValueFactory constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSwitchValueFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkSwitchValueFactory_Statics
UObject* (*const Z_Construct_UClass_UAkSwitchValueFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSwitchValueFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSwitchValueFactory_Statics::ClassParams = {
	&UAkSwitchValueFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSwitchValueFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkSwitchValueFactory_Statics::Class_MetaDataParams)
};
void UAkSwitchValueFactory::StaticRegisterNativesUAkSwitchValueFactory()
{
}
UClass* Z_Construct_UClass_UAkSwitchValueFactory()
{
	if (!Z_Registration_Info_UClass_UAkSwitchValueFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSwitchValueFactory.OuterSingleton, Z_Construct_UClass_UAkSwitchValueFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkSwitchValueFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkSwitchValueFactory);
UAkSwitchValueFactory::~UAkSwitchValueFactory() {}
// ********** End Class UAkSwitchValueFactory ******************************************************

// ********** Begin Class UAkEffectShareSetFactory *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkEffectShareSetFactory;
UClass* UAkEffectShareSetFactory::GetPrivateStaticClass()
{
	using TClass = UAkEffectShareSetFactory;
	if (!Z_Registration_Info_UClass_UAkEffectShareSetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkEffectShareSetFactory"),
			Z_Registration_Info_UClass_UAkEffectShareSetFactory.InnerSingleton,
			StaticRegisterNativesUAkEffectShareSetFactory,
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
	return Z_Registration_Info_UClass_UAkEffectShareSetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkEffectShareSetFactory_NoRegister()
{
	return UAkEffectShareSetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkEffectShareSetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkEffectShareSetFactory constinit property declarations *****************
// ********** End Class UAkEffectShareSetFactory constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkEffectShareSetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkEffectShareSetFactory_Statics
UObject* (*const Z_Construct_UClass_UAkEffectShareSetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkEffectShareSetFactory_Statics::ClassParams = {
	&UAkEffectShareSetFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkEffectShareSetFactory_Statics::Class_MetaDataParams)
};
void UAkEffectShareSetFactory::StaticRegisterNativesUAkEffectShareSetFactory()
{
}
UClass* Z_Construct_UClass_UAkEffectShareSetFactory()
{
	if (!Z_Registration_Info_UClass_UAkEffectShareSetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkEffectShareSetFactory.OuterSingleton, Z_Construct_UClass_UAkEffectShareSetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkEffectShareSetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkEffectShareSetFactory);
UAkEffectShareSetFactory::~UAkEffectShareSetFactory() {}
// ********** End Class UAkEffectShareSetFactory ***************************************************

// ********** Begin Class UAkAudioDeviceShareSetFactory ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory;
UClass* UAkAudioDeviceShareSetFactory::GetPrivateStaticClass()
{
	using TClass = UAkAudioDeviceShareSetFactory;
	if (!Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkAudioDeviceShareSetFactory"),
			Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory.InnerSingleton,
			StaticRegisterNativesUAkAudioDeviceShareSetFactory,
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
	return Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkAudioDeviceShareSetFactory_NoRegister()
{
	return UAkAudioDeviceShareSetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAudioDeviceShareSetFactory constinit property declarations ************
// ********** End Class UAkAudioDeviceShareSetFactory constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioDeviceShareSetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics
UObject* (*const Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::ClassParams = {
	&UAkAudioDeviceShareSetFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::Class_MetaDataParams)
};
void UAkAudioDeviceShareSetFactory::StaticRegisterNativesUAkAudioDeviceShareSetFactory()
{
}
UClass* Z_Construct_UClass_UAkAudioDeviceShareSetFactory()
{
	if (!Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory.OuterSingleton, Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAudioDeviceShareSetFactory);
UAkAudioDeviceShareSetFactory::~UAkAudioDeviceShareSetFactory() {}
// ********** End Class UAkAudioDeviceShareSetFactory **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Public_AkAssetFactories_h__Script_AudiokineticTools_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAssetFactory, UAkAssetFactory::StaticClass, TEXT("UAkAssetFactory"), &Z_Registration_Info_UClass_UAkAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetFactory), 1915103442U) },
		{ Z_Construct_UClass_UAkAcousticTextureFactory, UAkAcousticTextureFactory::StaticClass, TEXT("UAkAcousticTextureFactory"), &Z_Registration_Info_UClass_UAkAcousticTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAcousticTextureFactory), 1012203736U) },
		{ Z_Construct_UClass_UAkAudioEventFactory, UAkAudioEventFactory::StaticClass, TEXT("UAkAudioEventFactory"), &Z_Registration_Info_UClass_UAkAudioEventFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioEventFactory), 2396552310U) },
		{ Z_Construct_UClass_UAkAudioNodeFactory, UAkAudioNodeFactory::StaticClass, TEXT("UAkAudioNodeFactory"), &Z_Registration_Info_UClass_UAkAudioNodeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioNodeFactory), 3184903014U) },
		{ Z_Construct_UClass_UAkDialogueEventFactory, UAkDialogueEventFactory::StaticClass, TEXT("UAkDialogueEventFactory"), &Z_Registration_Info_UClass_UAkDialogueEventFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDialogueEventFactory), 2661271150U) },
		{ Z_Construct_UClass_UAkAuxBusFactory, UAkAuxBusFactory::StaticClass, TEXT("UAkAuxBusFactory"), &Z_Registration_Info_UClass_UAkAuxBusFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAuxBusFactory), 1263297901U) },
		{ Z_Construct_UClass_UAkRtpcFactory, UAkRtpcFactory::StaticClass, TEXT("UAkRtpcFactory"), &Z_Registration_Info_UClass_UAkRtpcFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkRtpcFactory), 3344897574U) },
		{ Z_Construct_UClass_UAkTriggerFactory, UAkTriggerFactory::StaticClass, TEXT("UAkTriggerFactory"), &Z_Registration_Info_UClass_UAkTriggerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkTriggerFactory), 1453029123U) },
		{ Z_Construct_UClass_UAkStateValueFactory, UAkStateValueFactory::StaticClass, TEXT("UAkStateValueFactory"), &Z_Registration_Info_UClass_UAkStateValueFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkStateValueFactory), 3310840016U) },
		{ Z_Construct_UClass_UAkSwitchValueFactory, UAkSwitchValueFactory::StaticClass, TEXT("UAkSwitchValueFactory"), &Z_Registration_Info_UClass_UAkSwitchValueFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSwitchValueFactory), 1592444181U) },
		{ Z_Construct_UClass_UAkEffectShareSetFactory, UAkEffectShareSetFactory::StaticClass, TEXT("UAkEffectShareSetFactory"), &Z_Registration_Info_UClass_UAkEffectShareSetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkEffectShareSetFactory), 1147139289U) },
		{ Z_Construct_UClass_UAkAudioDeviceShareSetFactory, UAkAudioDeviceShareSetFactory::StaticClass, TEXT("UAkAudioDeviceShareSetFactory"), &Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioDeviceShareSetFactory), 3520448549U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Public_AkAssetFactories_h__Script_AudiokineticTools_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Public_AkAssetFactories_h__Script_AudiokineticTools_3440425114{
	TEXT("/Script/AudiokineticTools"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Public_AkAssetFactories_h__Script_AudiokineticTools_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Public_AkAssetFactories_h__Script_AudiokineticTools_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
