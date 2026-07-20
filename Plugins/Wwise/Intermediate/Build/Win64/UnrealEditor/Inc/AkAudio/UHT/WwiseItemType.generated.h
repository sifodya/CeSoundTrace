// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WwiseItemType.h"

#ifdef AKAUDIO_WwiseItemType_generated_h
#error "WwiseItemType.generated.h already included, missing '#pragma once' in WwiseItemType.h"
#endif
#define AKAUDIO_WwiseItemType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_WwiseItemType_h

// ********** Begin Enum EWwiseItemType ************************************************************
#define FOREACH_ENUM_EWWISEITEMTYPE(op) \
	op(EWwiseItemType::Event) \
	op(EWwiseItemType::AuxBus) \
	op(EWwiseItemType::Switch) \
	op(EWwiseItemType::State) \
	op(EWwiseItemType::GameParameter) \
	op(EWwiseItemType::DialogueEvent) \
	op(EWwiseItemType::EffectShareSet) \
	op(EWwiseItemType::Trigger) \
	op(EWwiseItemType::AcousticTexture) \
	op(EWwiseItemType::AudioDeviceShareSet) \
	op(EWwiseItemType::ActorMixer) \
	op(EWwiseItemType::Bus) \
	op(EWwiseItemType::Project) \
	op(EWwiseItemType::StandaloneWorkUnit) \
	op(EWwiseItemType::NestedWorkUnit) \
	op(EWwiseItemType::PhysicalFolder) \
	op(EWwiseItemType::Folder) \
	op(EWwiseItemType::Sound) \
	op(EWwiseItemType::SwitchContainer) \
	op(EWwiseItemType::RandomSequenceContainer) \
	op(EWwiseItemType::BlendContainer) \
	op(EWwiseItemType::MotionBus) \
	op(EWwiseItemType::StateGroup) \
	op(EWwiseItemType::SwitchGroup) \
	op(EWwiseItemType::InitBank) \
	op(EWwiseItemType::AudioNode) \
	op(EWwiseItemType::First) \
	op(EWwiseItemType::Last) \
	op(EWwiseItemType::LastWwiseBrowserType) \
	op(EWwiseItemType::None) 

enum class EWwiseItemType;
template<> struct TIsUEnumClass<EWwiseItemType> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseItemType>();
// ********** End Enum EWwiseItemType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
