// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InitializationSettings/AkInitializationSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkInitializationSettings() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCommSystem();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkTransmissionOperation();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAkPanningRule ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkPanningRule;
static UEnum* EAkPanningRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkPanningRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkPanningRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkPanningRule, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkPanningRule"));
	}
	return Z_Registration_Info_UEnum_EAkPanningRule.OuterSingleton;
}
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkPanningRule>()
{
	return EAkPanningRule_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Headphones.Name", "EAkPanningRule::Headphones" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "Speakers.Name", "EAkPanningRule::Speakers" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkPanningRule::Speakers", (int64)EAkPanningRule::Speakers },
		{ "EAkPanningRule::Headphones", (int64)EAkPanningRule::Headphones },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkPanningRule",
	"EAkPanningRule",
	Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule()
{
	if (!Z_Registration_Info_UEnum_EAkPanningRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkPanningRule.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkPanningRule.InnerSingleton;
}
// ********** End Enum EAkPanningRule **************************************************************

// ********** Begin Enum EAkChannelConfigType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkChannelConfigType;
static UEnum* EAkChannelConfigType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkChannelConfigType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkChannelConfigType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkChannelConfigType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkChannelConfigType"));
	}
	return Z_Registration_Info_UEnum_EAkChannelConfigType.OuterSingleton;
}
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkChannelConfigType>()
{
	return EAkChannelConfigType_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ambisonic.Name", "EAkChannelConfigType::Ambisonic" },
		{ "Anonymous.Name", "EAkChannelConfigType::Anonymous" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "Standard.Name", "EAkChannelConfigType::Standard" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkChannelConfigType::Anonymous", (int64)EAkChannelConfigType::Anonymous },
		{ "EAkChannelConfigType::Standard", (int64)EAkChannelConfigType::Standard },
		{ "EAkChannelConfigType::Ambisonic", (int64)EAkChannelConfigType::Ambisonic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkChannelConfigType",
	"EAkChannelConfigType",
	Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType()
{
	if (!Z_Registration_Info_UEnum_EAkChannelConfigType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkChannelConfigType.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkChannelConfigType.InnerSingleton;
}
// ********** End Enum EAkChannelConfigType ********************************************************

// ********** Begin Enum EAkChannelMask ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkChannelMask;
static UEnum* EAkChannelMask_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkChannelMask.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkChannelMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkChannelMask, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkChannelMask"));
	}
	return Z_Registration_Info_UEnum_EAkChannelMask.OuterSingleton;
}
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkChannelMask>()
{
	return EAkChannelMask_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BackCenter.Name", "EAkChannelMask::BackCenter" },
		{ "BackLeft.Name", "EAkChannelMask::BackLeft" },
		{ "BackRight.Name", "EAkChannelMask::BackRight" },
		{ "Bitmask", "" },
		{ "FrontCenter.Name", "EAkChannelMask::FrontCenter" },
		{ "FrontLeft.Name", "EAkChannelMask::FrontLeft" },
		{ "FrontRight.Name", "EAkChannelMask::FrontRight" },
		{ "HeightBackCenter.Name", "EAkChannelMask::HeightBackCenter" },
		{ "HeightBackLeft.Name", "EAkChannelMask::HeightBackLeft" },
		{ "HeightBackRight.Name", "EAkChannelMask::HeightBackRight" },
		{ "HeightFrontCenter.Name", "EAkChannelMask::HeightFrontCenter" },
		{ "HeightFrontLeft.Name", "EAkChannelMask::HeightFrontLeft" },
		{ "HeightFrontRight.Name", "EAkChannelMask::HeightFrontRight" },
		{ "LowFrequency.Name", "EAkChannelMask::LowFrequency" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "SideLeft.Name", "EAkChannelMask::SideLeft" },
		{ "SideRight.Name", "EAkChannelMask::SideRight" },
		{ "Top.Name", "EAkChannelMask::Top" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkChannelMask::FrontLeft", (int64)EAkChannelMask::FrontLeft },
		{ "EAkChannelMask::FrontRight", (int64)EAkChannelMask::FrontRight },
		{ "EAkChannelMask::FrontCenter", (int64)EAkChannelMask::FrontCenter },
		{ "EAkChannelMask::LowFrequency", (int64)EAkChannelMask::LowFrequency },
		{ "EAkChannelMask::BackLeft", (int64)EAkChannelMask::BackLeft },
		{ "EAkChannelMask::BackRight", (int64)EAkChannelMask::BackRight },
		{ "EAkChannelMask::BackCenter", (int64)EAkChannelMask::BackCenter },
		{ "EAkChannelMask::SideLeft", (int64)EAkChannelMask::SideLeft },
		{ "EAkChannelMask::SideRight", (int64)EAkChannelMask::SideRight },
		{ "EAkChannelMask::Top", (int64)EAkChannelMask::Top },
		{ "EAkChannelMask::HeightFrontLeft", (int64)EAkChannelMask::HeightFrontLeft },
		{ "EAkChannelMask::HeightFrontCenter", (int64)EAkChannelMask::HeightFrontCenter },
		{ "EAkChannelMask::HeightFrontRight", (int64)EAkChannelMask::HeightFrontRight },
		{ "EAkChannelMask::HeightBackLeft", (int64)EAkChannelMask::HeightBackLeft },
		{ "EAkChannelMask::HeightBackCenter", (int64)EAkChannelMask::HeightBackCenter },
		{ "EAkChannelMask::HeightBackRight", (int64)EAkChannelMask::HeightBackRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkChannelMask",
	"EAkChannelMask",
	Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask()
{
	if (!Z_Registration_Info_UEnum_EAkChannelMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkChannelMask.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkChannelMask.InnerSingleton;
}
// ********** End Enum EAkChannelMask **************************************************************

// ********** Begin Enum EAkTransmissionOperation **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkTransmissionOperation;
static UEnum* EAkTransmissionOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkTransmissionOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkTransmissionOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkTransmissionOperation, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkTransmissionOperation"));
	}
	return Z_Registration_Info_UEnum_EAkTransmissionOperation.OuterSingleton;
}
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkTransmissionOperation>()
{
	return EAkTransmissionOperation_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkTransmissionOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Name", "EAkTransmissionOperation::Add" },
		{ "Max.Name", "EAkTransmissionOperation::Max" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "Multiply.Name", "EAkTransmissionOperation::Multiply" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkTransmissionOperation::Add", (int64)EAkTransmissionOperation::Add },
		{ "EAkTransmissionOperation::Multiply", (int64)EAkTransmissionOperation::Multiply },
		{ "EAkTransmissionOperation::Max", (int64)EAkTransmissionOperation::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AkAudio_EAkTransmissionOperation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkTransmissionOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkTransmissionOperation",
	"EAkTransmissionOperation",
	Z_Construct_UEnum_AkAudio_EAkTransmissionOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkTransmissionOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkTransmissionOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkTransmissionOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkTransmissionOperation()
{
	if (!Z_Registration_Info_UEnum_EAkTransmissionOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkTransmissionOperation.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkTransmissionOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkTransmissionOperation.InnerSingleton;
}
// ********** End Enum EAkTransmissionOperation ****************************************************

// ********** Begin Enum EAkCommSystem *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkCommSystem;
static UEnum* EAkCommSystem_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkCommSystem.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkCommSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCommSystem, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCommSystem"));
	}
	return Z_Registration_Info_UEnum_EAkCommSystem.OuterSingleton;
}
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkCommSystem>()
{
	return EAkCommSystem_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HTCS.Comment", "// AkCommSettings::AkCommSystem_Socket,\n" },
		{ "HTCS.Name", "EAkCommSystem::HTCS" },
		{ "HTCS.ToolTip", "AkCommSettings::AkCommSystem_Socket," },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "Socket.Name", "EAkCommSystem::Socket" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkCommSystem::Socket", (int64)EAkCommSystem::Socket },
		{ "EAkCommSystem::HTCS", (int64)EAkCommSystem::HTCS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkCommSystem",
	"EAkCommSystem",
	Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkCommSystem()
{
	if (!Z_Registration_Info_UEnum_EAkCommSystem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkCommSystem.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkCommSystem.InnerSingleton;
}
// ********** End Enum EAkCommSystem ***************************************************************

// ********** Begin ScriptStruct FAkMainOutputSettings *********************************************
struct Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkMainOutputSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMainOutputSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSet_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of a custom audio device to use. Custom audio devices are defined in the Audio Device ShareSet section of the Wwise project. Leave this empty to output normally through the default audio device." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Device-specific identifier when you are using multiple devices of the same type. Leave the setting at 0 (default) if you are using only one device." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanningRule_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rule for 3D panning of signals routed to a stereo bus. In \"Speakers\" mode, the angle of the front loudspeakers is used. In \"Headphones\" mode, the speaker angles are superseded by constant power panning between two virtual microphones spaced 180 degrees apart." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelConfigType_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A code that completes the identification of channels by uChannelMask. Anonymous: Channel mask == 0 and channels. Standard: Channels must be identified with standard defines in AkSpeakerConfigs. Ambisonic: Channel mask == 0 and channels follow standard ambisonic order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkChannelMask" },
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A bit field, whose channel identifiers depend on AkChannelConfigType (up to 20)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfChannels_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of channels, identified (deduced from channel mask) or anonymous (set directly)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMainOutputSettings constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioDeviceShareSet;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PanningRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PanningRule;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelConfigType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelConfigType;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ChannelMask;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMainOutputSettings constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMainOutputSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMainOutputSettings;
class UScriptStruct* FAkMainOutputSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMainOutputSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMainOutputSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkMainOutputSettings Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet = { "AudioDeviceShareSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, AudioDeviceShareSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDeviceShareSet_MetaData), NewProp_AudioDeviceShareSet_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, DeviceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceID_MetaData), NewProp_DeviceID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule = { "PanningRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, PanningRule), Z_Construct_UEnum_AkAudio_EAkPanningRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanningRule_MetaData), NewProp_PanningRule_MetaData) }; // 4172237828
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType = { "ChannelConfigType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, ChannelConfigType), Z_Construct_UEnum_AkAudio_EAkChannelConfigType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelConfigType_MetaData), NewProp_ChannelConfigType_MetaData) }; // 1469764677
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, ChannelMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelMask_MetaData), NewProp_ChannelMask_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels = { "NumberOfChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, NumberOfChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfChannels_MetaData), NewProp_NumberOfChannels_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkMainOutputSettings Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkMainOutputSettings",
	Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers),
	sizeof(FAkMainOutputSettings),
	alignof(FAkMainOutputSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.InnerSingleton);
}
// ********** End ScriptStruct FAkMainOutputSettings ***********************************************

// ********** Begin ScriptStruct FAkSpatialAudioSettings *******************************************
struct Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkSpatialAudioSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkSpatialAudioSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSoundPropagationDepth_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of portals that sound can propagate through. The default value is 8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementThreshold_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance (in game units) that an emitter or listener has to move to trigger a recalculation of reflections and diffraction. A high distance value has a lower CPU load than a low distance value, but the accuracy is also lower. Note that this value does not affect the ray tracing itself. Rays are cast each time a Spatial Audio update is executed. The default value is 25." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrimaryRays_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of primary rays used in the ray tracing engine. A larger value increases the chances of finding reflection and diffraction paths but results in higher CPU usage. The default value is 35." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionOrder_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum reflection order: the number of \"bounces\" in a reflection path.A higher reflection order renders more detail at the expense of higher CPU usage.The default value is 2." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDiffractionPaths_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limit the maximum number of diffraction paths computed per emitter, excluding the direct/transmission path. The acoustics engine searches for up to 'Max Diffraction Paths' paths and stops searching when this limit is reached. Setting a low number for uMaxDiffractionPaths (1-4) uses fewer CPU resources, but is more likely to cause discontinuities in the resulting audio. This can occur, for example, when a more prominent path is discovered, displacing a less prominent one. Conversely, a larger number (8 or more) produces higher quality output but requires more CPU resources. The recommended range is 2-8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGlobalReflectionPaths_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Max Global Reflection Paths [Experimental]" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a global reflection path limit among all sound emitters with early reflections enabled. Potential reflection paths, discovered by raycasting, are first sorted according to a heuristic to determine which paths are the most prominent. Afterwards, the full reflection path calculation is only performed on the most prominent 'Max Reflection Paths'. Limiting the total number of reflection path calculations can significantly reduce CPU usage. Recommended range: 10-50. Set to 0 to disable the limit. In this case, the number of paths computed is unbounded and depends on how many are discovered by raycasting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffractionOrder_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum diffraction order: the number of \"bends\" in a diffraction path. A high diffraction order accommodates more complex geometry at the expense of higher CPU usage. Diffraction must be enabled on the geometry to find diffraction paths. Set to 0 to disable diffraction on all geometry. This parameter limits the recursion depth of diffraction rays cast from the listener to scan the environment and also the depth of the diffraction search to find paths between emitter and listener. To optimize CPU usage, set it to the maximum number of edges you expect the obstructing geometry to traverse. The default value is 4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEmitterRoomAuxSends_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "MinWwiseVersion", "2023.1" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of game-defined auxiliary sends that can originate from a single emitter. An emitter can send to its own Room and to all adjacent Rooms if the emitter and listener are in the same Room. If a limit is set, the most prominent sends are kept, based on spread to the adjacent portal from the emitter's perspective. Set to 1 to only allow emitters to send directly to their current Room, and to the Room a listener is transitioning to if inside a portal. Set to 0 to disable the limit. The default value is 3." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffractionOnReflectionsOrder_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum possible number of diffraction points at each end of a reflection path. Diffraction on reflection allows reflections to fade in and out smoothly as the listener or emitter moves in and out of the reflection's shadow zone. When greater than zero, diffraction rays are sent from the listener to search for reflections around one or more corners from the listener. Diffraction must be enabled on the geometry to find diffracted reflections. Set to 0 to disable diffraction on reflections. Set to 2 or greater to allow Reflection paths to travel through Portals. The default value is 2." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDiffractionAngleDegrees_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "MinWwiseVersion", "2024.1" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The largest possible diffraction value, in degrees, beyond which paths are not computed and are inaudible. Must be greater than zero. Default value: 180 degrees. A large value (for example, 360 degrees) allows paths to propagate further around corners and obstacles, but takes more CPU time to compute. A gain is applied to each diffraction path to taper the volume of the path to zero as the diffraction angle approaches fMaxDiffractionAngleDegrees, and appears in the Voice Inspector as 'Propagation Path Gain'. This tapering gain is applied in addition to the diffraction curves, and prevents paths from popping in or out suddenly when the maximum diffraction angle is exceeded. In Wwise Authoring, the horizontal axis of a diffraction curve in the attenuation editor is defined over the range 0-100%, corresponding to angles 0-180 degrees.  If fMaxDiffractionAngleDegrees is greater than 180 degrees, diffraction coefficients over 100% are clamped and the curve is evaluated at the rightmost point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPathLength_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of the rays that are cast inside Spatial Audio. Effectively caps the maximum length of an individual segment in a reflection or diffraction path. The default value is 100000." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPULimitPercentage_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "CPU Limit Percentage" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the targeted max computation time allocated for Spatial Audio as a percentage [0, 100] of the current audio frame. When the value is not 0, Spatial Audio dynamically adapts the load balancing spread. The default value is 0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingConstantMs_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Smoothing Constant (ms) [Experimental]" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable parameter smoothing on the diffraction paths generated by the Acoustics Engine. Set 'Smoothing Constant (ms)' to a value greater than 0 to define the time constant (in milliseconds) for parameter smoothing. The time constant of an exponential moving average is the amount of time for the smoothed response of a unit step function to reach 1 - 1/e ~= 63.2% of the original signal. A large value (eg. 500-1000 ms) results in less variance but introduces lag, which is a good choice when using conservative values for uNumberOfPrimaryRays (eg. 5-10), uMaxDiffractionPaths (eg. 1-3) or fMovementThreshold ( > 1m ), in order to reduce overall CPU cost. A small value (eg. 10-100 ms) results in greater accuracy and faster convergence of rendering parameters. Set to 0 to disable path smoothing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentRoomBleed_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A global scaling factor that manipulates reverb send values, affecting the proportion of audio sent to adjacent rooms versus the proportion sent to the emitter's current room.\n\nThis global factor is multiplied by the per-portal AkPortalParams::AdjacentRoomBleed value.\n\nWhen calculating reverb send amounts, each portal's aperture is multiplied by this factor, altering its perceived size:\n  - 1.0 (Default): Maintain portals at their true geometric size.\n  - > 1.0: Increases the perceived size of all portals, allowing more bleed into adjacent rooms.\n  - < 1.0: Decreases the perceived size of all portals, reducing bleed into adjacent rooms.\n\nValid range: (0.0 - infinity)\nNote: Values approaching 0 may result in abrupt portal transitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadBalancingSpread_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Load Balancing Spread" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The computation of Spatial Audio paths is spread on LoadBalancingSpread frames. Spreading the computation of paths over several frames can prevent CPU peaks. The spread introduces a delay in path computation. The default value is 1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableGeometricDiffractionAndTransmission_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable computation of geometric diffraction and transmission paths for all sources that have the \"Diffraction and Transmission\" option selected in the Positioning tab of the Wwise Property Editor. This flag enables sound paths around (diffraction) and through (transmission) geometry. Setting EnableGeometricDiffractionAndTransmission to false implies that geometry is only to be used for reflection calculation. Diffraction edges must be enabled on geometry for diffraction calculation. If EnableGeometricDiffractionAndTransmission is false but a sound has \"Diffraction and Transmission\" selected in the Positioning tab of Wwise Authoring, the sound will diffract through portals but pass through geometry as if it isn't there. Typically, we recommend you disable this setting if the game will perform obstruction calculations, but geometry is still passed to Spatial Audio for reflection calculations. The default value is true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalcEmitterVirtualPosition_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An emitter that is diffracted through a portal or around geometry will have its apparent or virtual position calculated by Wwise Spatial Audio and passed on to the sound engine. The default value is true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionOperation_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "MinWwiseVersion", "2024.1" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The operation used to determine transmission loss on direct paths." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusteringMinPoints_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Clustering Minimum Points [Experimental]" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum number of emitters in a cluster. Default value is 0. Values less than 2 disable the clustering." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusteringMaxDistance_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max distance between emitters to be considered as neighbors. This distance is specified for the reference distance defined by fClusteringDeadZoneDistance. Default value is 500.0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusteringDeadZoneDistance_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines a dead zone around the listener where no emitters are clusters. Default value is 1000.0." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkSpatialAudioSettings constinit property declarations ***********
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxSoundPropagationDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementThreshold;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfPrimaryRays;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ReflectionOrder;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxDiffractionPaths;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxGlobalReflectionPaths;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DiffractionOrder;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxEmitterRoomAuxSends;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DiffractionOnReflectionsOrder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDiffractionAngleDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumPathLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CPULimitPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingConstantMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjacentRoomBleed;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LoadBalancingSpread;
	static void NewProp_EnableGeometricDiffractionAndTransmission_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGeometricDiffractionAndTransmission;
	static void NewProp_CalcEmitterVirtualPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CalcEmitterVirtualPosition;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TransmissionOperation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransmissionOperation;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ClusteringMinPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusteringMaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusteringDeadZoneDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkSpatialAudioSettings constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSpatialAudioSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings;
class UScriptStruct* FAkSpatialAudioSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSpatialAudioSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSpatialAudioSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkSpatialAudioSettings Property Definitions **********************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth = { "MaxSoundPropagationDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxSoundPropagationDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSoundPropagationDepth_MetaData), NewProp_MaxSoundPropagationDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold = { "MovementThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MovementThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementThreshold_MetaData), NewProp_MovementThreshold_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays = { "NumberOfPrimaryRays", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, NumberOfPrimaryRays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPrimaryRays_MetaData), NewProp_NumberOfPrimaryRays_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder = { "ReflectionOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, ReflectionOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionOrder_MetaData), NewProp_ReflectionOrder_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxDiffractionPaths = { "MaxDiffractionPaths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxDiffractionPaths), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDiffractionPaths_MetaData), NewProp_MaxDiffractionPaths_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxGlobalReflectionPaths = { "MaxGlobalReflectionPaths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxGlobalReflectionPaths), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGlobalReflectionPaths_MetaData), NewProp_MaxGlobalReflectionPaths_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder = { "DiffractionOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, DiffractionOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffractionOrder_MetaData), NewProp_DiffractionOrder_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxEmitterRoomAuxSends = { "MaxEmitterRoomAuxSends", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxEmitterRoomAuxSends), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEmitterRoomAuxSends_MetaData), NewProp_MaxEmitterRoomAuxSends_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder = { "DiffractionOnReflectionsOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, DiffractionOnReflectionsOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffractionOnReflectionsOrder_MetaData), NewProp_DiffractionOnReflectionsOrder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxDiffractionAngleDegrees = { "MaxDiffractionAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxDiffractionAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDiffractionAngleDegrees_MetaData), NewProp_MaxDiffractionAngleDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength = { "MaximumPathLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaximumPathLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumPathLength_MetaData), NewProp_MaximumPathLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage = { "CPULimitPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, CPULimitPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPULimitPercentage_MetaData), NewProp_CPULimitPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_SmoothingConstantMs = { "SmoothingConstantMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, SmoothingConstantMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingConstantMs_MetaData), NewProp_SmoothingConstantMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_AdjacentRoomBleed = { "AdjacentRoomBleed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, AdjacentRoomBleed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjacentRoomBleed_MetaData), NewProp_AdjacentRoomBleed_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread = { "LoadBalancingSpread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, LoadBalancingSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadBalancingSpread_MetaData), NewProp_LoadBalancingSpread_MetaData) };
void Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_SetBit(void* Obj)
{
	((FAkSpatialAudioSettings*)Obj)->EnableGeometricDiffractionAndTransmission = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission = { "EnableGeometricDiffractionAndTransmission", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkSpatialAudioSettings), &Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableGeometricDiffractionAndTransmission_MetaData), NewProp_EnableGeometricDiffractionAndTransmission_MetaData) };
void Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_SetBit(void* Obj)
{
	((FAkSpatialAudioSettings*)Obj)->CalcEmitterVirtualPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition = { "CalcEmitterVirtualPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkSpatialAudioSettings), &Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalcEmitterVirtualPosition_MetaData), NewProp_CalcEmitterVirtualPosition_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_TransmissionOperation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_TransmissionOperation = { "TransmissionOperation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, TransmissionOperation), Z_Construct_UEnum_AkAudio_EAkTransmissionOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmissionOperation_MetaData), NewProp_TransmissionOperation_MetaData) }; // 3698322233
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ClusteringMinPoints = { "ClusteringMinPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, ClusteringMinPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusteringMinPoints_MetaData), NewProp_ClusteringMinPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ClusteringMaxDistance = { "ClusteringMaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, ClusteringMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusteringMaxDistance_MetaData), NewProp_ClusteringMaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ClusteringDeadZoneDistance = { "ClusteringDeadZoneDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, ClusteringDeadZoneDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusteringDeadZoneDistance_MetaData), NewProp_ClusteringDeadZoneDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxDiffractionPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxGlobalReflectionPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxEmitterRoomAuxSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxDiffractionAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_SmoothingConstantMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_AdjacentRoomBleed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_TransmissionOperation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_TransmissionOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ClusteringMinPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ClusteringMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ClusteringDeadZoneDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkSpatialAudioSettings Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkSpatialAudioSettings",
	Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers),
	sizeof(FAkSpatialAudioSettings),
	alignof(FAkSpatialAudioSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.InnerSingleton);
}
// ********** End ScriptStruct FAkSpatialAudioSettings *********************************************

// ********** Begin ScriptStruct FAkCommunicationSettings ******************************************
struct Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkCommunicationSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkCommunicationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the communication pool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveryBroadcastPort_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The port where the authoring application broadcasts \"Game Discovery\" requests to discover games running on the network. Default value: 24024. (Cannot be set to 0)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandPort_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The \"command\" channel port. Set to 0 to request a dynamic/ephemeral port." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkName_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name used to identify this game within the authoring application. Leave empty to use FApp::GetProjectName()." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkCommunicationSettings constinit property declarations **********
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PoolSize;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_DiscoveryBroadcastPort;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_CommandPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NetworkName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkCommunicationSettings constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkCommunicationSettings;
class UScriptStruct* FAkCommunicationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkCommunicationSettings Property Definitions *********************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, PoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolSize_MetaData), NewProp_PoolSize_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort = { "DiscoveryBroadcastPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, DiscoveryBroadcastPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscoveryBroadcastPort_MetaData), NewProp_DiscoveryBroadcastPort_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort = { "CommandPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, CommandPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandPort_MetaData), NewProp_CommandPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName = { "NetworkName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, NetworkName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkName_MetaData), NewProp_NetworkName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkCommunicationSettings Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkCommunicationSettings",
	Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers),
	sizeof(FAkCommunicationSettings),
	alignof(FAkCommunicationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.InnerSingleton);
}
// ********** End ScriptStruct FAkCommunicationSettings ********************************************

// ********** Begin ScriptStruct FAkCommunicationSettingsWithSystemInitialization ******************
struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkCommunicationSettingsWithSystemInitialization); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkCommunicationSettingsWithSystemInitialization); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializeSystemComms_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether or not to initialize the communication system. Some consoles have critical requirements for initialization of their communications systems. Set to false only if your game already uses sockets before sound engine initialization." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkCommunicationSettingsWithSystemInitialization constinit property declarations 
	static void NewProp_InitializeSystemComms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InitializeSystemComms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkCommunicationSettingsWithSystemInitialization constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithSystemInitialization>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics
static_assert(std::is_polymorphic<FAkCommunicationSettingsWithSystemInitialization>() == std::is_polymorphic<FAkCommunicationSettings>(), "USTRUCT FAkCommunicationSettingsWithSystemInitialization cannot be polymorphic unless super FAkCommunicationSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization;
class UScriptStruct* FAkCommunicationSettingsWithSystemInitialization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettingsWithSystemInitialization"));
	}
	return Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkCommunicationSettingsWithSystemInitialization Property Definitions 
void Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_SetBit(void* Obj)
{
	((FAkCommunicationSettingsWithSystemInitialization*)Obj)->InitializeSystemComms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms = { "InitializeSystemComms", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkCommunicationSettingsWithSystemInitialization), &Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializeSystemComms_MetaData), NewProp_InitializeSystemComms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkCommunicationSettingsWithSystemInitialization Property Definitions 
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkCommunicationSettings,
	&NewStructOps,
	"AkCommunicationSettingsWithSystemInitialization",
	Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers),
	sizeof(FAkCommunicationSettingsWithSystemInitialization),
	alignof(FAkCommunicationSettingsWithSystemInitialization),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization()
{
	if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.InnerSingleton, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.InnerSingleton);
}
// ********** End ScriptStruct FAkCommunicationSettingsWithSystemInitialization ********************

// ********** Begin ScriptStruct FAkCommunicationSettingsWithCommSelection *************************
struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkCommunicationSettingsWithCommSelection); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkCommunicationSettingsWithCommSelection); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSystem_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select between Socket and HTCS communication protocol. Socket is the Default option." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkCommunicationSettingsWithCommSelection constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_CommunicationSystem_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CommunicationSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkCommunicationSettingsWithCommSelection constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithCommSelection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics
static_assert(std::is_polymorphic<FAkCommunicationSettingsWithCommSelection>() == std::is_polymorphic<FAkCommunicationSettings>(), "USTRUCT FAkCommunicationSettingsWithCommSelection cannot be polymorphic unless super FAkCommunicationSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection;
class UScriptStruct* FAkCommunicationSettingsWithCommSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettingsWithCommSelection"));
	}
	return Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkCommunicationSettingsWithCommSelection Property Definitions ****
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem = { "CommunicationSystem", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettingsWithCommSelection, CommunicationSystem), Z_Construct_UEnum_AkAudio_EAkCommSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSystem_MetaData), NewProp_CommunicationSystem_MetaData) }; // 2891146978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkCommunicationSettingsWithCommSelection Property Definitions ******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkCommunicationSettings,
	&NewStructOps,
	"AkCommunicationSettingsWithCommSelection",
	Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers),
	sizeof(FAkCommunicationSettingsWithCommSelection),
	alignof(FAkCommunicationSettingsWithCommSelection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection()
{
	if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.InnerSingleton, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.InnerSingleton);
}
// ********** End ScriptStruct FAkCommunicationSettingsWithCommSelection ***************************

// ********** Begin ScriptStruct FAkMemoryArenaInitializationSettings ******************************
struct Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkMemoryArenaInitializationSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMemoryArenaInitializationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySbaInitSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial size of SBA portion of the Primary Memory Arena." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryTlsfInitSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial size of TLSF portion of the Primary Memory Arena." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryTlsfSpanSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of each secondary span initialized for TLSF portion of the Primary Memory Arena." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryMemReservedLimit_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum amount of memory that will be reserved for the Primary Memory Arena. A value of 0 will indicate no limit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAllocSizeHuge_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum size of allocations to be considered 'Huge' for the Primary Memory Arena. Huge allocations are put into standalone spans, separate from the TLSF spans" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTlsfInitSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial size of TLSF portion of the Media Memory Arena." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTlsfSpanSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of each secondary span initialized for TLSF portion of the Media Memory Arena." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaMemReservedLimit_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum amount of memory that will be reserved for the Media Memory Arena. A value of 0 will indicate no limit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaAllocSizeHuge_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum size of allocations to be considered 'Huge' for the Media Memory Arena. Huge allocations are put into standalone spans, separate from the TLSF spans" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMemoryArenaInitializationSettings constinit property declarations 
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrimarySbaInitSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrimaryTlsfInitSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrimaryTlsfSpanSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrimaryMemReservedLimit;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrimaryAllocSizeHuge;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MediaTlsfInitSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MediaTlsfSpanSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MediaMemReservedLimit;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MediaAllocSizeHuge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMemoryArenaInitializationSettings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMemoryArenaInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings;
class UScriptStruct* FAkMemoryArenaInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMemoryArenaInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkMemoryArenaInitializationSettings Property Definitions *********
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_PrimarySbaInitSize = { "PrimarySbaInitSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, PrimarySbaInitSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimarySbaInitSize_MetaData), NewProp_PrimarySbaInitSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_PrimaryTlsfInitSize = { "PrimaryTlsfInitSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, PrimaryTlsfInitSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryTlsfInitSize_MetaData), NewProp_PrimaryTlsfInitSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_PrimaryTlsfSpanSize = { "PrimaryTlsfSpanSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, PrimaryTlsfSpanSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryTlsfSpanSize_MetaData), NewProp_PrimaryTlsfSpanSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_PrimaryMemReservedLimit = { "PrimaryMemReservedLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, PrimaryMemReservedLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryMemReservedLimit_MetaData), NewProp_PrimaryMemReservedLimit_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_PrimaryAllocSizeHuge = { "PrimaryAllocSizeHuge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, PrimaryAllocSizeHuge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAllocSizeHuge_MetaData), NewProp_PrimaryAllocSizeHuge_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_MediaTlsfInitSize = { "MediaTlsfInitSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, MediaTlsfInitSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTlsfInitSize_MetaData), NewProp_MediaTlsfInitSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_MediaTlsfSpanSize = { "MediaTlsfSpanSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, MediaTlsfSpanSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTlsfSpanSize_MetaData), NewProp_MediaTlsfSpanSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_MediaMemReservedLimit = { "MediaMemReservedLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, MediaMemReservedLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaMemReservedLimit_MetaData), NewProp_MediaMemReservedLimit_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_MediaAllocSizeHuge = { "MediaAllocSizeHuge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, MediaAllocSizeHuge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaAllocSizeHuge_MetaData), NewProp_MediaAllocSizeHuge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_PrimarySbaInitSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_PrimaryTlsfInitSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_PrimaryTlsfSpanSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_PrimaryMemReservedLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_PrimaryAllocSizeHuge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_MediaTlsfInitSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_MediaTlsfSpanSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_MediaMemReservedLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewProp_MediaAllocSizeHuge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkMemoryArenaInitializationSettings Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkMemoryArenaInitializationSettings",
	Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::PropPointers),
	sizeof(FAkMemoryArenaInitializationSettings),
	alignof(FAkMemoryArenaInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.InnerSingleton);
}
// ********** End ScriptStruct FAkMemoryArenaInitializationSettings ********************************

// ********** Begin ScriptStruct FAkCommonInitializationSettings ***********************************
struct Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkCommonInitializationSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkCommonInitializationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfMemoryPools_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of memory pools. A memory pool is required for each loaded bank." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfPositioningPaths_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of automation paths for positioning sounds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandQueueSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the command queue." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerFrame_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of samples per audio frame (256, 512, 1024, or 2048)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainOutputSettings_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform-independent initialization settings of output devices." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLookAheadRatio_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplication factor for all streaming look-ahead heuristic values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfRefillsInVoice_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of refill buffers in voice buffer. Set to 2 for double-buffered. The default value is 4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialAudioSettings_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryArenaSettings_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "MinWwiseVersion", "2024.1" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkCommonInitializationSettings constinit property declarations ***
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumNumberOfMemoryPools;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumNumberOfPositioningPaths;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CommandQueueSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SamplesPerFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MainOutputSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingLookAheadRatio;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_NumberOfRefillsInVoice;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpatialAudioSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MemoryArenaSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkCommonInitializationSettings constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommonInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings;
class UScriptStruct* FAkCommonInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommonInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommonInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkCommonInitializationSettings Property Definitions **************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools = { "MaximumNumberOfMemoryPools", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MaximumNumberOfMemoryPools), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumNumberOfMemoryPools_MetaData), NewProp_MaximumNumberOfMemoryPools_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths = { "MaximumNumberOfPositioningPaths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MaximumNumberOfPositioningPaths), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumNumberOfPositioningPaths_MetaData), NewProp_MaximumNumberOfPositioningPaths_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize = { "CommandQueueSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, CommandQueueSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandQueueSize_MetaData), NewProp_CommandQueueSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame = { "SamplesPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, SamplesPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplesPerFrame_MetaData), NewProp_SamplesPerFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings = { "MainOutputSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MainOutputSettings), Z_Construct_UScriptStruct_FAkMainOutputSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainOutputSettings_MetaData), NewProp_MainOutputSettings_MetaData) }; // 622595151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio = { "StreamingLookAheadRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, StreamingLookAheadRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingLookAheadRatio_MetaData), NewProp_StreamingLookAheadRatio_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice = { "NumberOfRefillsInVoice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, NumberOfRefillsInVoice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfRefillsInVoice_MetaData), NewProp_NumberOfRefillsInVoice_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings = { "SpatialAudioSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, SpatialAudioSettings), Z_Construct_UScriptStruct_FAkSpatialAudioSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialAudioSettings_MetaData), NewProp_SpatialAudioSettings_MetaData) }; // 1793695092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MemoryArenaSettings = { "MemoryArenaSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MemoryArenaSettings), Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryArenaSettings_MetaData), NewProp_MemoryArenaSettings_MetaData) }; // 1388559887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MemoryArenaSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkCommonInitializationSettings Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkCommonInitializationSettings",
	Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers),
	sizeof(FAkCommonInitializationSettings),
	alignof(FAkCommonInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.InnerSingleton);
}
// ********** End ScriptStruct FAkCommonInitializationSettings *************************************

// ********** Begin ScriptStruct FAkCommonInitializationSettingsWithSampleRate *********************
struct Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkCommonInitializationSettingsWithSampleRate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkCommonInitializationSettingsWithSampleRate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "Common Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sampling Rate. Default is 48000 Hz. Use 24000hz for low quality. Any positive reasonable sample rate is supported; however, be careful setting a custom value. Using an odd or really low sample rate may cause the sound engine to malfunction." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkCommonInitializationSettingsWithSampleRate constinit property declarations 
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkCommonInitializationSettingsWithSampleRate constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommonInitializationSettingsWithSampleRate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics
static_assert(std::is_polymorphic<FAkCommonInitializationSettingsWithSampleRate>() == std::is_polymorphic<FAkCommonInitializationSettings>(), "USTRUCT FAkCommonInitializationSettingsWithSampleRate cannot be polymorphic unless super FAkCommonInitializationSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate;
class UScriptStruct* FAkCommonInitializationSettingsWithSampleRate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommonInitializationSettingsWithSampleRate"));
	}
	return Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkCommonInitializationSettingsWithSampleRate Property Definitions 
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettingsWithSampleRate, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkCommonInitializationSettingsWithSampleRate Property Definitions **
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkCommonInitializationSettings,
	&NewStructOps,
	"AkCommonInitializationSettingsWithSampleRate",
	Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers),
	sizeof(FAkCommonInitializationSettingsWithSampleRate),
	alignof(FAkCommonInitializationSettingsWithSampleRate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate()
{
	if (!Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.InnerSingleton, Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.InnerSingleton);
}
// ********** End ScriptStruct FAkCommonInitializationSettingsWithSampleRate ***********************

// ********** Begin ScriptStruct FAkAdvancedInitializationSettings *********************************
struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkAdvancedInitializationSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkAdvancedInitializationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IO_MemorySize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of memory pool for I/O (for automatic streams). It is rounded down to a multiple of uGranularity and then passed directly to AK::MemoryMgr::CreatePool()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IO_Granularity_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "I/O requests granularity (typical bytes/request)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAutoStreamBufferLength_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Targeted automatic stream buffer length (ms). When a stream reaches that buffering, it stops being scheduled for I/O except if the scheduler is idle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseStreamCache_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the device attempts to reuse I/O buffers that have already been streamed from disk. This is particularly useful when streaming small looping sounds. However, there is a small increase in CPU usage when allocating memory, and a slightly larger memory footprint in the StreamManager pool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPinnedBytesInCache_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of bytes that can be \"pinned\" using AK::SoundEngine::PinEventInStreamCache() or AK::IAkStreamMgr::PinFileInCache()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableGameSyncPreparation_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to enable AK::SoundEngine::PrepareGameSync usage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousPlaybackLookAhead_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of quanta ahead when continuous containers instantiate a new voice before the following sounds start playing. This look-ahead time allows I/O to occur, and is especially useful to reduce the latency of continuous containers with trigger rate or sample-accurate transitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonitorQueuePoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the monitoring queue pool. This parameter is ignored in Release builds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHardwareTimeoutMs_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time (in milliseconds) to wait for hardware devices to trigger an audio interrupt. If there is no interrupt after that time, the sound engine reverts to silent mode and continues operating until the hardware responds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugOutOfRangeCheckEnabled_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug setting: Enable checks for out-of-range (and NAN) floats in the processing code. Do not enable in any normal usage because this setting uses a lot of CPU. It prints error messages in the log if invalid values are found at various points in the pipeline. Contact AK Support with the new error messages for more information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugOutOfRangeLimit_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "EditCondition", "DebugOutOfRangeCheckEnabled" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug setting: Only used when Debug Out Of Range Check Enabled is true. This defines the maximum values samples can have. Normal audio must be contained within +1/-1. Set this limit to a value greater than 1 to allow temporary or short excursions out of range. The default value is 16." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkAdvancedInitializationSettings constinit property declarations *
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_IO_MemorySize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_IO_Granularity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetAutoStreamBufferLength;
	static void NewProp_UseStreamCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseStreamCache;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumPinnedBytesInCache;
	static void NewProp_EnableGameSyncPreparation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGameSyncPreparation;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ContinuousPlaybackLookAhead;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MonitorQueuePoolSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumHardwareTimeoutMs;
	static void NewProp_DebugOutOfRangeCheckEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugOutOfRangeCheckEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugOutOfRangeLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkAdvancedInitializationSettings constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings;
class UScriptStruct* FAkAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkAdvancedInitializationSettings Property Definitions ************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize = { "IO_MemorySize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, IO_MemorySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IO_MemorySize_MetaData), NewProp_IO_MemorySize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity = { "IO_Granularity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, IO_Granularity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IO_Granularity_MetaData), NewProp_IO_Granularity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength = { "TargetAutoStreamBufferLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, TargetAutoStreamBufferLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAutoStreamBufferLength_MetaData), NewProp_TargetAutoStreamBufferLength_MetaData) };
void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_SetBit(void* Obj)
{
	((FAkAdvancedInitializationSettings*)Obj)->UseStreamCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache = { "UseStreamCache", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseStreamCache_MetaData), NewProp_UseStreamCache_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache = { "MaximumPinnedBytesInCache", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumPinnedBytesInCache), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumPinnedBytesInCache_MetaData), NewProp_MaximumPinnedBytesInCache_MetaData) };
void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_SetBit(void* Obj)
{
	((FAkAdvancedInitializationSettings*)Obj)->EnableGameSyncPreparation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation = { "EnableGameSyncPreparation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableGameSyncPreparation_MetaData), NewProp_EnableGameSyncPreparation_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead = { "ContinuousPlaybackLookAhead", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, ContinuousPlaybackLookAhead), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinuousPlaybackLookAhead_MetaData), NewProp_ContinuousPlaybackLookAhead_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize = { "MonitorQueuePoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MonitorQueuePoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonitorQueuePoolSize_MetaData), NewProp_MonitorQueuePoolSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs = { "MaximumHardwareTimeoutMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumHardwareTimeoutMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumHardwareTimeoutMs_MetaData), NewProp_MaximumHardwareTimeoutMs_MetaData) };
void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_SetBit(void* Obj)
{
	((FAkAdvancedInitializationSettings*)Obj)->DebugOutOfRangeCheckEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled = { "DebugOutOfRangeCheckEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugOutOfRangeCheckEnabled_MetaData), NewProp_DebugOutOfRangeCheckEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit = { "DebugOutOfRangeLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, DebugOutOfRangeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugOutOfRangeLimit_MetaData), NewProp_DebugOutOfRangeLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkAdvancedInitializationSettings Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkAdvancedInitializationSettings",
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers),
	sizeof(FAkAdvancedInitializationSettings),
	alignof(FAkAdvancedInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.InnerSingleton);
}
// ********** End ScriptStruct FAkAdvancedInitializationSettings ***********************************

// ********** Begin ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering ***********
struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkAdvancedInitializationSettingsWithMultiCoreRendering); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableMultiCoreRendering_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable to run SoundEngine processing tasks on the Unreal Engine worker threads. Requires Editor restart." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumJobWorkers_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "EditCondition", "EnableMultiCoreRendering" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configure the maximum number of workers that the Sound Engine will request at any given time. Requires Editor restart." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JobWorkerMaxExecutionTimeUSec_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "EditCondition", "EnableMultiCoreRendering" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum time allotted for each Sound Engine job in microseconds (0 is unlimited). Requires Editor restart." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering constinit property declarations 
	static void NewProp_EnableMultiCoreRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableMultiCoreRendering;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumJobWorkers;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_JobWorkerMaxExecutionTimeUSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettingsWithMultiCoreRendering>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics
static_assert(std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>() == std::is_polymorphic<FAkAdvancedInitializationSettings>(), "USTRUCT FAkAdvancedInitializationSettingsWithMultiCoreRendering cannot be polymorphic unless super FAkAdvancedInitializationSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering;
class UScriptStruct* FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"));
	}
	return Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering Property Definitions 
void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_SetBit(void* Obj)
{
	((FAkAdvancedInitializationSettingsWithMultiCoreRendering*)Obj)->EnableMultiCoreRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering = { "EnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableMultiCoreRendering_MetaData), NewProp_EnableMultiCoreRendering_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers = { "MaxNumJobWorkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettingsWithMultiCoreRendering, MaxNumJobWorkers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumJobWorkers_MetaData), NewProp_MaxNumJobWorkers_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec = { "JobWorkerMaxExecutionTimeUSec", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettingsWithMultiCoreRendering, JobWorkerMaxExecutionTimeUSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JobWorkerMaxExecutionTimeUSec_MetaData), NewProp_JobWorkerMaxExecutionTimeUSec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering Property Definitions 
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings,
	&NewStructOps,
	"AkAdvancedInitializationSettingsWithMultiCoreRendering",
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers),
	sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering),
	alignof(FAkAdvancedInitializationSettingsWithMultiCoreRendering),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering()
{
	if (!Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton);
}
// ********** End ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering *************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h__Script_AkAudio_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAkPanningRule_StaticEnum, TEXT("EAkPanningRule"), &Z_Registration_Info_UEnum_EAkPanningRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4172237828U) },
		{ EAkChannelConfigType_StaticEnum, TEXT("EAkChannelConfigType"), &Z_Registration_Info_UEnum_EAkChannelConfigType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1469764677U) },
		{ EAkChannelMask_StaticEnum, TEXT("EAkChannelMask"), &Z_Registration_Info_UEnum_EAkChannelMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1513151789U) },
		{ EAkTransmissionOperation_StaticEnum, TEXT("EAkTransmissionOperation"), &Z_Registration_Info_UEnum_EAkTransmissionOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3698322233U) },
		{ EAkCommSystem_StaticEnum, TEXT("EAkCommSystem"), &Z_Registration_Info_UEnum_EAkCommSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2891146978U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkMainOutputSettings::StaticStruct, Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewStructOps, TEXT("AkMainOutputSettings"),&Z_Registration_Info_UScriptStruct_FAkMainOutputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMainOutputSettings), 622595151U) },
		{ FAkSpatialAudioSettings::StaticStruct, Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewStructOps, TEXT("AkSpatialAudioSettings"),&Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSpatialAudioSettings), 1793695092U) },
		{ FAkCommunicationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewStructOps, TEXT("AkCommunicationSettings"),&Z_Registration_Info_UScriptStruct_FAkCommunicationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettings), 3140611267U) },
		{ FAkCommunicationSettingsWithSystemInitialization::StaticStruct, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewStructOps, TEXT("AkCommunicationSettingsWithSystemInitialization"),&Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettingsWithSystemInitialization), 641881017U) },
		{ FAkCommunicationSettingsWithCommSelection::StaticStruct, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewStructOps, TEXT("AkCommunicationSettingsWithCommSelection"),&Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettingsWithCommSelection), 2076045402U) },
		{ FAkMemoryArenaInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewStructOps, TEXT("AkMemoryArenaInitializationSettings"),&Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMemoryArenaInitializationSettings), 1388559887U) },
		{ FAkCommonInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewStructOps, TEXT("AkCommonInitializationSettings"),&Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommonInitializationSettings), 283463748U) },
		{ FAkCommonInitializationSettingsWithSampleRate::StaticStruct, Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewStructOps, TEXT("AkCommonInitializationSettingsWithSampleRate"),&Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommonInitializationSettingsWithSampleRate), 3594173707U) },
		{ FAkAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkAdvancedInitializationSettings"),&Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAdvancedInitializationSettings), 2403817778U) },
		{ FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewStructOps, TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"),&Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), 19744564U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h__Script_AkAudio_139380771{
	TEXT("/Script/AkAudio"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h__Script_AkAudio_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h__Script_AkAudio_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h__Script_AkAudio_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h__Script_AkAudio_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
