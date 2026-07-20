// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h"
#include "InitializationSettings/AkInitializationSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkWindowsInitializationSettings() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWindowsInitializationSettings();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWindowsInitializationSettings_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAkWindowsAdvancedInitializationSettings **************************
struct Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkWindowsAdvancedInitializationSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkWindowsAdvancedInitializationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseHeadMountedDisplayAudioDevice_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSystemAudioObjects_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of System Audio Objects to reserve. Other processes will not be able to use them. Default is 128." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkWindowsAdvancedInitializationSettings constinit property declarations 
	static void NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHeadMountedDisplayAudioDevice;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxSystemAudioObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkWindowsAdvancedInitializationSettings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWindowsAdvancedInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics
static_assert(std::is_polymorphic<FAkWindowsAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkWindowsAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkWindowsAdvancedInitializationSettings;
class UScriptStruct* FAkWindowsAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkWindowsAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkWindowsAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWindowsAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FAkWindowsAdvancedInitializationSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkWindowsAdvancedInitializationSettings Property Definitions *****
void Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj)
{
	((FAkWindowsAdvancedInitializationSettings*)Obj)->UseHeadMountedDisplayAudioDevice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice = { "UseHeadMountedDisplayAudioDevice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkWindowsAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseHeadMountedDisplayAudioDevice_MetaData), NewProp_UseHeadMountedDisplayAudioDevice_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects = { "MaxSystemAudioObjects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkWindowsAdvancedInitializationSettings, MaxSystemAudioObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSystemAudioObjects_MetaData), NewProp_MaxSystemAudioObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkWindowsAdvancedInitializationSettings Property Definitions *******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
	&NewStructOps,
	"AkWindowsAdvancedInitializationSettings",
	Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::PropPointers),
	sizeof(FAkWindowsAdvancedInitializationSettings),
	alignof(FAkWindowsAdvancedInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FAkWindowsAdvancedInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkWindowsAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkWindowsAdvancedInitializationSettings.InnerSingleton);
}
// ********** End ScriptStruct FAkWindowsAdvancedInitializationSettings ****************************

// ********** Begin Class UAkWindowsInitializationSettings Function MigrateMultiCoreRendering ******
struct Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics
{
	struct AkWindowsInitializationSettings_eventMigrateMultiCoreRendering_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h" },
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
void Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((AkWindowsInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkWindowsInitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers) < 2048);
// ********** End Function MigrateMultiCoreRendering Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkWindowsInitializationSettings, nullptr, "MigrateMultiCoreRendering", 	Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::AkWindowsInitializationSettings_eventMigrateMultiCoreRendering_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::AkWindowsInitializationSettings_eventMigrateMultiCoreRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkWindowsInitializationSettings::execMigrateMultiCoreRendering)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class UAkWindowsInitializationSettings Function MigrateMultiCoreRendering ********

// ********** Begin Class UAkWindowsInitializationSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkWindowsInitializationSettings;
UClass* UAkWindowsInitializationSettings::GetPrivateStaticClass()
{
	using TClass = UAkWindowsInitializationSettings;
	if (!Z_Registration_Info_UClass_UAkWindowsInitializationSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkWindowsInitializationSettings"),
			Z_Registration_Info_UClass_UAkWindowsInitializationSettings.InnerSingleton,
			StaticRegisterNativesUAkWindowsInitializationSettings,
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
	return Z_Registration_Info_UClass_UAkWindowsInitializationSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkWindowsInitializationSettings_NoRegister()
{
	return UAkWindowsInitializationSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkWindowsInitializationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkWindowsInitializationSettings constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkWindowsInitializationSettings constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("MigrateMultiCoreRendering"), .Pointer = &UAkWindowsInitializationSettings::execMigrateMultiCoreRendering },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkWindowsInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 1090221781
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWindowsInitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkWindowsInitializationSettings_Statics

// ********** Begin Class UAkWindowsInitializationSettings Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkWindowsInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSettings_MetaData), NewProp_CommonSettings_MetaData) }; // 3594173707
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkWindowsInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSettings_MetaData), NewProp_CommunicationSettings_MetaData) }; // 641881017
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkWindowsInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 1175822037
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::NewProp_CommonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::NewProp_CommunicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::PropPointers) < 2048);
// ********** End Class UAkWindowsInitializationSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInitializationSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::ClassParams = {
	&UAkWindowsInitializationSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::Class_MetaDataParams)
};
void UAkWindowsInitializationSettings::StaticRegisterNativesUAkWindowsInitializationSettings()
{
	UClass* Class = UAkWindowsInitializationSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAkWindowsInitializationSettings()
{
	if (!Z_Registration_Info_UClass_UAkWindowsInitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWindowsInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkWindowsInitializationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWindowsInitializationSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkWindowsInitializationSettings);
UAkWindowsInitializationSettings::~UAkWindowsInitializationSettings() {}
// ********** End Class UAkWindowsInitializationSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h__Script_AkAudio_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkWindowsAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkWindowsAdvancedInitializationSettings"),&Z_Registration_Info_UScriptStruct_FAkWindowsAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWindowsAdvancedInitializationSettings), 1175822037U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkWindowsInitializationSettings, UAkWindowsInitializationSettings::StaticClass, TEXT("UAkWindowsInitializationSettings"), &Z_Registration_Info_UClass_UAkWindowsInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWindowsInitializationSettings), 2041445133U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h__Script_AkAudio_1329416114{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h__Script_AkAudio_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h__Script_AkAudio_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h__Script_AkAudio_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
