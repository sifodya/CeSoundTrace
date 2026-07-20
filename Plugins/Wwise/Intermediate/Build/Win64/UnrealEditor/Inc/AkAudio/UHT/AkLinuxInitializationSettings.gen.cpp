// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_Linux/AkLinuxInitializationSettings.h"
#include "InitializationSettings/AkInitializationSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkLinuxInitializationSettings() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxInitializationSettings();
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxInitializationSettings_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkLinuxInitializationSettings Function MigrateMultiCoreRendering ********
struct Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics
{
	struct AkLinuxInitializationSettings_eventMigrateMultiCoreRendering_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Linux/AkLinuxInitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MigrateMultiCoreRendering constinit property declarations *************
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MigrateMultiCoreRendering constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MigrateMultiCoreRendering Property Definitions ************************
void Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((AkLinuxInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkLinuxInitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers) < 2048);
// ********** End Function MigrateMultiCoreRendering Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkLinuxInitializationSettings, nullptr, "MigrateMultiCoreRendering", 	Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::AkLinuxInitializationSettings_eventMigrateMultiCoreRendering_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::AkLinuxInitializationSettings_eventMigrateMultiCoreRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkLinuxInitializationSettings::execMigrateMultiCoreRendering)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class UAkLinuxInitializationSettings Function MigrateMultiCoreRendering **********

// ********** Begin Class UAkLinuxInitializationSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkLinuxInitializationSettings;
UClass* UAkLinuxInitializationSettings::GetPrivateStaticClass()
{
	using TClass = UAkLinuxInitializationSettings;
	if (!Z_Registration_Info_UClass_UAkLinuxInitializationSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkLinuxInitializationSettings"),
			Z_Registration_Info_UClass_UAkLinuxInitializationSettings.InnerSingleton,
			StaticRegisterNativesUAkLinuxInitializationSettings,
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
	return Z_Registration_Info_UClass_UAkLinuxInitializationSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkLinuxInitializationSettings_NoRegister()
{
	return UAkLinuxInitializationSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkLinuxInitializationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Linux/AkLinuxInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Linux/AkLinuxInitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Linux/AkLinuxInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Linux/AkLinuxInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Linux/AkLinuxInitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkLinuxInitializationSettings constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkLinuxInitializationSettings constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("MigrateMultiCoreRendering"), .Pointer = &UAkLinuxInitializationSettings::execMigrateMultiCoreRendering },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkLinuxInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 1081387737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLinuxInitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkLinuxInitializationSettings_Statics

// ********** Begin Class UAkLinuxInitializationSettings Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLinuxInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSettings_MetaData), NewProp_CommonSettings_MetaData) }; // 3594173707
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLinuxInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSettings_MetaData), NewProp_CommunicationSettings_MetaData) }; // 641881017
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLinuxInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 19744564
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_CommunicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::PropPointers) < 2048);
// ********** End Class UAkLinuxInitializationSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInitializationSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::ClassParams = {
	&UAkLinuxInitializationSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::Class_MetaDataParams)
};
void UAkLinuxInitializationSettings::StaticRegisterNativesUAkLinuxInitializationSettings()
{
	UClass* Class = UAkLinuxInitializationSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAkLinuxInitializationSettings()
{
	if (!Z_Registration_Info_UClass_UAkLinuxInitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLinuxInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkLinuxInitializationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkLinuxInitializationSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkLinuxInitializationSettings);
UAkLinuxInitializationSettings::~UAkLinuxInitializationSettings() {}
// ********** End Class UAkLinuxInitializationSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkLinuxInitializationSettings, UAkLinuxInitializationSettings::StaticClass, TEXT("UAkLinuxInitializationSettings"), &Z_Registration_Info_UClass_UAkLinuxInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLinuxInitializationSettings), 2949936671U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h__Script_AkAudio_4098196713{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
