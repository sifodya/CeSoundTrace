// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h"
#include "InitializationSettings/AkInitializationSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkLinuxArm64InitializationSettings() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxArm64InitializationSettings();
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxArm64InitializationSettings_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkLinuxArm64InitializationSettings Function MigrateMultiCoreRendering ***
struct Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics
{
	struct AkLinuxArm64InitializationSettings_eventMigrateMultiCoreRendering_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
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
void Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((AkLinuxArm64InitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkLinuxArm64InitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers) < 2048);
// ********** End Function MigrateMultiCoreRendering Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkLinuxArm64InitializationSettings, nullptr, "MigrateMultiCoreRendering", 	Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::AkLinuxArm64InitializationSettings_eventMigrateMultiCoreRendering_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::AkLinuxArm64InitializationSettings_eventMigrateMultiCoreRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkLinuxArm64InitializationSettings::execMigrateMultiCoreRendering)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class UAkLinuxArm64InitializationSettings Function MigrateMultiCoreRendering *****

// ********** Begin Class UAkLinuxArm64InitializationSettings **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings;
UClass* UAkLinuxArm64InitializationSettings::GetPrivateStaticClass()
{
	using TClass = UAkLinuxArm64InitializationSettings;
	if (!Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkLinuxArm64InitializationSettings"),
			Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.InnerSingleton,
			StaticRegisterNativesUAkLinuxArm64InitializationSettings,
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
	return Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkLinuxArm64InitializationSettings_NoRegister()
{
	return UAkLinuxArm64InitializationSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkLinuxArm64InitializationSettings constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkLinuxArm64InitializationSettings constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("MigrateMultiCoreRendering"), .Pointer = &UAkLinuxArm64InitializationSettings::execMigrateMultiCoreRendering },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 1711010635
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLinuxArm64InitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics

// ********** Begin Class UAkLinuxArm64InitializationSettings Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLinuxArm64InitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSettings_MetaData), NewProp_CommonSettings_MetaData) }; // 3594173707
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLinuxArm64InitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSettings_MetaData), NewProp_CommunicationSettings_MetaData) }; // 641881017
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLinuxArm64InitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 19744564
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::NewProp_CommonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::NewProp_CommunicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::PropPointers) < 2048);
// ********** End Class UAkLinuxArm64InitializationSettings Property Definitions *******************
UObject* (*const Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInitializationSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::ClassParams = {
	&UAkLinuxArm64InitializationSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::Class_MetaDataParams)
};
void UAkLinuxArm64InitializationSettings::StaticRegisterNativesUAkLinuxArm64InitializationSettings()
{
	UClass* Class = UAkLinuxArm64InitializationSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAkLinuxArm64InitializationSettings()
{
	if (!Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.OuterSingleton, Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkLinuxArm64InitializationSettings);
UAkLinuxArm64InitializationSettings::~UAkLinuxArm64InitializationSettings() {}
// ********** End Class UAkLinuxArm64InitializationSettings ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkLinuxArm64InitializationSettings, UAkLinuxArm64InitializationSettings::StaticClass, TEXT("UAkLinuxArm64InitializationSettings"), &Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLinuxArm64InitializationSettings), 453305976U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h__Script_AkAudio_3156821643{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
