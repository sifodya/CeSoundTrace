// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseItemType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseItemType() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EWwiseItemType();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWwiseItemType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseItemType;
static UEnum* EWwiseItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWwiseItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWwiseItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EWwiseItemType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EWwiseItemType"));
	}
	return Z_Registration_Info_UEnum_EWwiseItemType.OuterSingleton;
}
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseItemType>()
{
	return EWwiseItemType_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EWwiseItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AcousticTexture.Name", "EWwiseItemType::AcousticTexture" },
		{ "ActorMixer.Name", "EWwiseItemType::ActorMixer" },
		{ "AudioDeviceShareSet.Name", "EWwiseItemType::AudioDeviceShareSet" },
		{ "AudioNode.Name", "EWwiseItemType::AudioNode" },
		{ "AuxBus.Name", "EWwiseItemType::AuxBus" },
		{ "BlendContainer.Name", "EWwiseItemType::BlendContainer" },
		{ "Bus.Name", "EWwiseItemType::Bus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @enum EWwiseItemType\n * @brief Enumeration representing different types of Wwise items in a Wwise project.\n *\n * This enum defines all the possible item types that can be found in the Wwise project hierarchy,\n * including events, busses, switches, states, and various container types.\n */" },
#endif
		{ "DialogueEvent.Name", "EWwiseItemType::DialogueEvent" },
		{ "EffectShareSet.Name", "EWwiseItemType::EffectShareSet" },
		{ "Event.Name", "EWwiseItemType::Event" },
		{ "First.Name", "EWwiseItemType::First" },
		{ "Folder.Name", "EWwiseItemType::Folder" },
		{ "GameParameter.Name", "EWwiseItemType::GameParameter" },
		{ "InitBank.Name", "EWwiseItemType::InitBank" },
		{ "Last.Name", "EWwiseItemType::Last" },
		{ "LastWwiseBrowserType.Name", "EWwiseItemType::LastWwiseBrowserType" },
		{ "ModuleRelativePath", "Classes/WwiseItemType.h" },
		{ "MotionBus.Name", "EWwiseItemType::MotionBus" },
		{ "NestedWorkUnit.Name", "EWwiseItemType::NestedWorkUnit" },
		{ "None.Name", "EWwiseItemType::None" },
		{ "PhysicalFolder.Name", "EWwiseItemType::PhysicalFolder" },
		{ "Project.Name", "EWwiseItemType::Project" },
		{ "RandomSequenceContainer.Name", "EWwiseItemType::RandomSequenceContainer" },
		{ "Sound.Name", "EWwiseItemType::Sound" },
		{ "StandaloneWorkUnit.Name", "EWwiseItemType::StandaloneWorkUnit" },
		{ "State.Name", "EWwiseItemType::State" },
		{ "StateGroup.Name", "EWwiseItemType::StateGroup" },
		{ "Switch.Name", "EWwiseItemType::Switch" },
		{ "SwitchContainer.Name", "EWwiseItemType::SwitchContainer" },
		{ "SwitchGroup.Name", "EWwiseItemType::SwitchGroup" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@enum EWwiseItemType\n@brief Enumeration representing different types of Wwise items in a Wwise project.\n\nThis enum defines all the possible item types that can be found in the Wwise project hierarchy,\nincluding events, busses, switches, states, and various container types." },
#endif
		{ "Trigger.Name", "EWwiseItemType::Trigger" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseItemType::Event", (int64)EWwiseItemType::Event },
		{ "EWwiseItemType::AuxBus", (int64)EWwiseItemType::AuxBus },
		{ "EWwiseItemType::Switch", (int64)EWwiseItemType::Switch },
		{ "EWwiseItemType::State", (int64)EWwiseItemType::State },
		{ "EWwiseItemType::GameParameter", (int64)EWwiseItemType::GameParameter },
		{ "EWwiseItemType::DialogueEvent", (int64)EWwiseItemType::DialogueEvent },
		{ "EWwiseItemType::EffectShareSet", (int64)EWwiseItemType::EffectShareSet },
		{ "EWwiseItemType::Trigger", (int64)EWwiseItemType::Trigger },
		{ "EWwiseItemType::AcousticTexture", (int64)EWwiseItemType::AcousticTexture },
		{ "EWwiseItemType::AudioDeviceShareSet", (int64)EWwiseItemType::AudioDeviceShareSet },
		{ "EWwiseItemType::ActorMixer", (int64)EWwiseItemType::ActorMixer },
		{ "EWwiseItemType::Bus", (int64)EWwiseItemType::Bus },
		{ "EWwiseItemType::Project", (int64)EWwiseItemType::Project },
		{ "EWwiseItemType::StandaloneWorkUnit", (int64)EWwiseItemType::StandaloneWorkUnit },
		{ "EWwiseItemType::NestedWorkUnit", (int64)EWwiseItemType::NestedWorkUnit },
		{ "EWwiseItemType::PhysicalFolder", (int64)EWwiseItemType::PhysicalFolder },
		{ "EWwiseItemType::Folder", (int64)EWwiseItemType::Folder },
		{ "EWwiseItemType::Sound", (int64)EWwiseItemType::Sound },
		{ "EWwiseItemType::SwitchContainer", (int64)EWwiseItemType::SwitchContainer },
		{ "EWwiseItemType::RandomSequenceContainer", (int64)EWwiseItemType::RandomSequenceContainer },
		{ "EWwiseItemType::BlendContainer", (int64)EWwiseItemType::BlendContainer },
		{ "EWwiseItemType::MotionBus", (int64)EWwiseItemType::MotionBus },
		{ "EWwiseItemType::StateGroup", (int64)EWwiseItemType::StateGroup },
		{ "EWwiseItemType::SwitchGroup", (int64)EWwiseItemType::SwitchGroup },
		{ "EWwiseItemType::InitBank", (int64)EWwiseItemType::InitBank },
		{ "EWwiseItemType::AudioNode", (int64)EWwiseItemType::AudioNode },
		{ "EWwiseItemType::First", (int64)EWwiseItemType::First },
		{ "EWwiseItemType::Last", (int64)EWwiseItemType::Last },
		{ "EWwiseItemType::LastWwiseBrowserType", (int64)EWwiseItemType::LastWwiseBrowserType },
		{ "EWwiseItemType::None", (int64)EWwiseItemType::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AkAudio_EWwiseItemType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EWwiseItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EWwiseItemType",
	"EWwiseItemType",
	Z_Construct_UEnum_AkAudio_EWwiseItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EWwiseItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EWwiseItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EWwiseItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EWwiseItemType()
{
	if (!Z_Registration_Info_UEnum_EWwiseItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseItemType.InnerSingleton, Z_Construct_UEnum_AkAudio_EWwiseItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWwiseItemType.InnerSingleton;
}
// ********** End Enum EWwiseItemType **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_WwiseItemType_h__Script_AkAudio_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWwiseItemType_StaticEnum, TEXT("EWwiseItemType"), &Z_Registration_Info_UEnum_EWwiseItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2952816756U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_WwiseItemType_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_WwiseItemType_h__Script_AkAudio_3942038888{
	TEXT("/Script/AkAudio"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_WwiseItemType_h__Script_AkAudio_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_WwiseItemType_h__Script_AkAudio_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
