// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkDynamicSequence.h"
#include "AkAudioNode.h"
#include "AkDynamicSequenceTransition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkDynamicSequence() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioNode_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDialogueEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequence();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequence_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequencePlaylist_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkResult();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkDynamicSequenceTransition();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAkDynamicSequenceState ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkDynamicSequenceState;
static UEnum* EAkDynamicSequenceState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkDynamicSequenceState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkDynamicSequenceState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkDynamicSequenceState"));
	}
	return Z_Registration_Info_UEnum_EAkDynamicSequenceState.OuterSingleton;
}
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkDynamicSequenceState>()
{
	return EAkDynamicSequenceState_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dynamic Sequence's Playback State.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
		{ "Playing.Name", "EAkDynamicSequenceState::Playing" },
		{ "Stopped.Name", "EAkDynamicSequenceState::Stopped" },
		{ "Stopping.Name", "EAkDynamicSequenceState::Stopping" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic Sequence's Playback State." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkDynamicSequenceState::Stopped", (int64)EAkDynamicSequenceState::Stopped },
		{ "EAkDynamicSequenceState::Playing", (int64)EAkDynamicSequenceState::Playing },
		{ "EAkDynamicSequenceState::Stopping", (int64)EAkDynamicSequenceState::Stopping },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkDynamicSequenceState",
	"EAkDynamicSequenceState",
	Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState()
{
	if (!Z_Registration_Info_UEnum_EAkDynamicSequenceState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkDynamicSequenceState.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkDynamicSequenceState.InnerSingleton;
}
// ********** End Enum EAkDynamicSequenceState *****************************************************

// ********** Begin Class UAkDynamicSequence Function Break ****************************************
struct Z_Construct_UFunction_UAkDynamicSequence_Break_Statics
{
	struct AkDynamicSequence_eventBreak_Parms
	{
		EAkResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Break specified Dynamic Sequence.\n///\n/// The sequence will stop after the current item.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Break specified Dynamic Sequence.\n\nThe sequence will stop after the current item." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Break constinit property declarations *********************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Break constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Break Property Definitions ********************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventBreak_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(0, nullptr) }; // 355863608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::PropPointers) < 2048);
// ********** End Function Break Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "Break", 	Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::AkDynamicSequence_eventBreak_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::AkDynamicSequence_eventBreak_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_Break()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_Break_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execBreak)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAkResult*)Z_Param__Result=P_THIS->Break();
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function Break ******************************************

// ********** Begin Class UAkDynamicSequence Function GetPauseTimes ********************************
struct Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics
{
	struct AkDynamicSequence_eventGetPauseTimes_Parms
	{
		int32 PauseTime;
		int32 Duration;
		EAkResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get pause times.\n///\n/// @param PauseTime If sequence is currently paused, time when pause started, else 0\n/// @param Duration Total pause duration since last call to GetPauseTimes, excluding the time elapsed in the current pause\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get pause times.\n\n@param PauseTime If sequence is currently paused, time when pause started, else 0\n@param Duration Total pause duration since last call to GetPauseTimes, excluding the time elapsed in the current pause" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPauseTimes constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PauseTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPauseTimes constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPauseTimes Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::NewProp_PauseTime = { "PauseTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventGetPauseTimes_Parms, PauseTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventGetPauseTimes_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventGetPauseTimes_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(0, nullptr) }; // 355863608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::NewProp_PauseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::PropPointers) < 2048);
// ********** End Function GetPauseTimes Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "GetPauseTimes", 	Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::AkDynamicSequence_eventGetPauseTimes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::AkDynamicSequence_eventGetPauseTimes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execGetPauseTimes)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PauseTime);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAkResult*)Z_Param__Result=P_THIS->GetPauseTimes(Z_Param_Out_PauseTime,Z_Param_Out_Duration);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function GetPauseTimes **********************************

// ********** Begin Class UAkDynamicSequence Function GetPlayingItem *******************************
struct Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics
{
	struct AkDynamicSequence_eventGetPlayingItem_Parms
	{
		UAkAudioNode* AudioNode;
		EAkResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get currently playing item. Note that this may be different from the currently heard item\n/// when sequence is in sample-accurate mode.\n/// @param AudioNode Returned audio node of playing item.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get currently playing item. Note that this may be different from the currently heard item\nwhen sequence is in sample-accurate mode.\n@param AudioNode Returned audio node of playing item." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayingItem constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioNode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayingItem constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayingItem Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::NewProp_AudioNode = { "AudioNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventGetPlayingItem_Parms, AudioNode), Z_Construct_UClass_UAkAudioNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventGetPlayingItem_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(0, nullptr) }; // 355863608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::NewProp_AudioNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::PropPointers) < 2048);
// ********** End Function GetPlayingItem Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "GetPlayingItem", 	Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::AkDynamicSequence_eventGetPlayingItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::AkDynamicSequence_eventGetPlayingItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execGetPlayingItem)
{
	P_GET_OBJECT_REF(UAkAudioNode,Z_Param_Out_AudioNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAkResult*)Z_Param__Result=P_THIS->GetPlayingItem(P_ARG_GC_BARRIER(Z_Param_Out_AudioNode));
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function GetPlayingItem *********************************

// ********** Begin Class UAkDynamicSequence Function ModifyPlaylist *******************************
struct Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics
{
	struct AkDynamicSequence_eventModifyPlaylist_Parms
	{
		UAkDynamicSequencePlaylist* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Lock the Playlist for editing.\n///\n/// Structure needs to be commited to allow the playlist to continue.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lock the Playlist for editing.\n\nStructure needs to be commited to allow the playlist to continue." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ModifyPlaylist constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ModifyPlaylist constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ModifyPlaylist Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventModifyPlaylist_Parms, ReturnValue), Z_Construct_UClass_UAkDynamicSequencePlaylist_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::PropPointers) < 2048);
// ********** End Function ModifyPlaylist Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "ModifyPlaylist", 	Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::AkDynamicSequence_eventModifyPlaylist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::AkDynamicSequence_eventModifyPlaylist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execModifyPlaylist)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkDynamicSequencePlaylist**)Z_Param__Result=P_THIS->ModifyPlaylist();
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function ModifyPlaylist *********************************

// ********** Begin Class UAkDynamicSequence Function OnGameObjectCallback *************************
struct Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics
{
	struct AkDynamicSequence_eventOnGameObjectCallback_Parms
	{
		EAkCallbackType CallbackType;
		UAkCallbackInfo* CallbackInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Callback, as called by the SoundEngine.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback, as called by the SoundEngine." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnGameObjectCallback constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CallbackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CallbackType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallbackInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnGameObjectCallback constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnGameObjectCallback Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::NewProp_CallbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::NewProp_CallbackType = { "CallbackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventOnGameObjectCallback_Parms, CallbackType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(0, nullptr) }; // 532489122
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::NewProp_CallbackInfo = { "CallbackInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventOnGameObjectCallback_Parms, CallbackInfo), Z_Construct_UClass_UAkCallbackInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::NewProp_CallbackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::NewProp_CallbackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::NewProp_CallbackInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::PropPointers) < 2048);
// ********** End Function OnGameObjectCallback Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "OnGameObjectCallback", 	Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::AkDynamicSequence_eventOnGameObjectCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::AkDynamicSequence_eventOnGameObjectCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execOnGameObjectCallback)
{
	P_GET_ENUM(EAkCallbackType,Z_Param_CallbackType);
	P_GET_OBJECT(UAkCallbackInfo,Z_Param_CallbackInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameObjectCallback(EAkCallbackType(Z_Param_CallbackType),Z_Param_CallbackInfo);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function OnGameObjectCallback ***************************

// ********** Begin Class UAkDynamicSequence Function Pause ****************************************
struct Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics
{
	struct AkDynamicSequence_eventPause_Parms
	{
		FAkDynamicSequenceTransition OverrideTransition;
		EAkResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Pause specified Dynamic Sequence. \n/// \n/// @param OverrideTransition Transition to use instead of the Default Transition.\n" },
#endif
		{ "CPP_Default_OverrideTransition", "()" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pause specified Dynamic Sequence.\n\n@param OverrideTransition Transition to use instead of the Default Transition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideTransition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Pause constinit property declarations *********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideTransition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Pause constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Pause Property Definitions ********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::NewProp_OverrideTransition = { "OverrideTransition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventPause_Parms, OverrideTransition), Z_Construct_UScriptStruct_FAkDynamicSequenceTransition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideTransition_MetaData), NewProp_OverrideTransition_MetaData) }; // 2371024039
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventPause_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(0, nullptr) }; // 355863608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::NewProp_OverrideTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::PropPointers) < 2048);
// ********** End Function Pause Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "Pause", 	Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::AkDynamicSequence_eventPause_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::AkDynamicSequence_eventPause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execPause)
{
	P_GET_STRUCT(FAkDynamicSequenceTransition,Z_Param_OverrideTransition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAkResult*)Z_Param__Result=P_THIS->Pause(Z_Param_OverrideTransition);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function Pause ******************************************

// ********** Begin Class UAkDynamicSequence Function Play *****************************************
struct Z_Construct_UFunction_UAkDynamicSequence_Play_Statics
{
	struct AkDynamicSequence_eventPlay_Parms
	{
		FAkDynamicSequenceTransition OverrideTransition;
		EAkResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Play specified Dynamic Sequence.\n/// \n/// @param OverrideTransition Transition to use instead of the Default Transition.\n" },
#endif
		{ "CPP_Default_OverrideTransition", "()" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play specified Dynamic Sequence.\n\n@param OverrideTransition Transition to use instead of the Default Transition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideTransition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Play constinit property declarations **********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideTransition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Play constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Play Property Definitions *********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::NewProp_OverrideTransition = { "OverrideTransition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventPlay_Parms, OverrideTransition), Z_Construct_UScriptStruct_FAkDynamicSequenceTransition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideTransition_MetaData), NewProp_OverrideTransition_MetaData) }; // 2371024039
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventPlay_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(0, nullptr) }; // 355863608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::NewProp_OverrideTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::PropPointers) < 2048);
// ********** End Function Play Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "Play", 	Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::AkDynamicSequence_eventPlay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::AkDynamicSequence_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execPlay)
{
	P_GET_STRUCT(FAkDynamicSequenceTransition,Z_Param_OverrideTransition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAkResult*)Z_Param__Result=P_THIS->Play(Z_Param_OverrideTransition);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function Play *******************************************

// ********** Begin Class UAkDynamicSequence Function PostAudioNode ********************************
struct Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics
{
	struct AkDynamicSequence_eventPostAudioNode_Parms
	{
		UAkAudioNode* AudioNode;
		bool bPlayImmediately;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
		{ "CPP_Default_bPlayImmediately", "true" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostAudioNode constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioNode;
	static void NewProp_bPlayImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayImmediately;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAudioNode constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAudioNode Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::NewProp_AudioNode = { "AudioNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventPostAudioNode_Parms, AudioNode), Z_Construct_UClass_UAkAudioNode_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::NewProp_bPlayImmediately_SetBit(void* Obj)
{
	((AkDynamicSequence_eventPostAudioNode_Parms*)Obj)->bPlayImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::NewProp_bPlayImmediately = { "bPlayImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDynamicSequence_eventPostAudioNode_Parms), &Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::NewProp_bPlayImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AkDynamicSequence_eventPostAudioNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDynamicSequence_eventPostAudioNode_Parms), &Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::NewProp_AudioNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::NewProp_bPlayImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::PropPointers) < 2048);
// ********** End Function PostAudioNode Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "PostAudioNode", 	Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::AkDynamicSequence_eventPostAudioNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::AkDynamicSequence_eventPostAudioNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execPostAudioNode)
{
	P_GET_OBJECT(UAkAudioNode,Z_Param_AudioNode);
	P_GET_UBOOL(Z_Param_bPlayImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PostAudioNode(Z_Param_AudioNode,Z_Param_bPlayImmediately);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function PostAudioNode **********************************

// ********** Begin Class UAkDynamicSequence Function PostDialogueEventInPlaylist ******************
struct Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics
{
	struct AkDynamicSequence_eventPostDialogueEventInPlaylist_Parms
	{
		UAkDialogueEvent* DialogueEvent;
		TArray<UAkGroupValue*> Arguments;
		bool bOrderedPath;
		bool bPlayImmediately;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
		{ "CPP_Default_bOrderedPath", "false" },
		{ "CPP_Default_bPlayImmediately", "true" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostDialogueEventInPlaylist constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Arguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
	static void NewProp_bOrderedPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrderedPath;
	static void NewProp_bPlayImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayImmediately;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostDialogueEventInPlaylist constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostDialogueEventInPlaylist Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_DialogueEvent = { "DialogueEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventPostDialogueEventInPlaylist_Parms, DialogueEvent), Z_Construct_UClass_UAkDialogueEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventPostDialogueEventInPlaylist_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arguments_MetaData), NewProp_Arguments_MetaData) };
void Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_bOrderedPath_SetBit(void* Obj)
{
	((AkDynamicSequence_eventPostDialogueEventInPlaylist_Parms*)Obj)->bOrderedPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_bOrderedPath = { "bOrderedPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDynamicSequence_eventPostDialogueEventInPlaylist_Parms), &Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_bOrderedPath_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_bPlayImmediately_SetBit(void* Obj)
{
	((AkDynamicSequence_eventPostDialogueEventInPlaylist_Parms*)Obj)->bPlayImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_bPlayImmediately = { "bPlayImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDynamicSequence_eventPostDialogueEventInPlaylist_Parms), &Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_bPlayImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AkDynamicSequence_eventPostDialogueEventInPlaylist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDynamicSequence_eventPostDialogueEventInPlaylist_Parms), &Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_DialogueEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_Arguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_Arguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_bOrderedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_bPlayImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::PropPointers) < 2048);
// ********** End Function PostDialogueEventInPlaylist Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "PostDialogueEventInPlaylist", 	Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::AkDynamicSequence_eventPostDialogueEventInPlaylist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::AkDynamicSequence_eventPostDialogueEventInPlaylist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execPostDialogueEventInPlaylist)
{
	P_GET_OBJECT(UAkDialogueEvent,Z_Param_DialogueEvent);
	P_GET_TARRAY_REF(UAkGroupValue*,Z_Param_Out_Arguments);
	P_GET_UBOOL(Z_Param_bOrderedPath);
	P_GET_UBOOL(Z_Param_bPlayImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PostDialogueEventInPlaylist(Z_Param_DialogueEvent,Z_Param_Out_Arguments,Z_Param_bOrderedPath,Z_Param_bPlayImmediately);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function PostDialogueEventInPlaylist ********************

// ********** Begin Class UAkDynamicSequence Function PostPlaylistItem *****************************
struct Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics
{
	struct AkDynamicSequence_eventPostPlaylistItem_Parms
	{
		UAkDynamicSequencePlaylistItem* PlaylistItem;
		bool bPlayImmediately;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
		{ "CPP_Default_bPlayImmediately", "true" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostPlaylistItem constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaylistItem;
	static void NewProp_bPlayImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayImmediately;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostPlaylistItem constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostPlaylistItem Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::NewProp_PlaylistItem = { "PlaylistItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventPostPlaylistItem_Parms, PlaylistItem), Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::NewProp_bPlayImmediately_SetBit(void* Obj)
{
	((AkDynamicSequence_eventPostPlaylistItem_Parms*)Obj)->bPlayImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::NewProp_bPlayImmediately = { "bPlayImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDynamicSequence_eventPostPlaylistItem_Parms), &Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::NewProp_bPlayImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AkDynamicSequence_eventPostPlaylistItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDynamicSequence_eventPostPlaylistItem_Parms), &Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::NewProp_PlaylistItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::NewProp_bPlayImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::PropPointers) < 2048);
// ********** End Function PostPlaylistItem Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "PostPlaylistItem", 	Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::AkDynamicSequence_eventPostPlaylistItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::AkDynamicSequence_eventPostPlaylistItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execPostPlaylistItem)
{
	P_GET_OBJECT(UAkDynamicSequencePlaylistItem,Z_Param_PlaylistItem);
	P_GET_UBOOL(Z_Param_bPlayImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PostPlaylistItem(Z_Param_PlaylistItem,Z_Param_bPlayImmediately);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function PostPlaylistItem *******************************

// ********** Begin Class UAkDynamicSequence Function Resume ***************************************
struct Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics
{
	struct AkDynamicSequence_eventResume_Parms
	{
		FAkDynamicSequenceTransition OverrideTransition;
		EAkResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Resume specified Dynamic Sequence. \n/// \n/// @param OverrideTransition Transition to use instead of the Default Transition.\n" },
#endif
		{ "CPP_Default_OverrideTransition", "()" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resume specified Dynamic Sequence.\n\n@param OverrideTransition Transition to use instead of the Default Transition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideTransition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Resume constinit property declarations ********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideTransition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Resume constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Resume Property Definitions *******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::NewProp_OverrideTransition = { "OverrideTransition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventResume_Parms, OverrideTransition), Z_Construct_UScriptStruct_FAkDynamicSequenceTransition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideTransition_MetaData), NewProp_OverrideTransition_MetaData) }; // 2371024039
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventResume_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(0, nullptr) }; // 355863608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::NewProp_OverrideTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::PropPointers) < 2048);
// ********** End Function Resume Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "Resume", 	Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::AkDynamicSequence_eventResume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::AkDynamicSequence_eventResume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_Resume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_Resume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execResume)
{
	P_GET_STRUCT(FAkDynamicSequenceTransition,Z_Param_OverrideTransition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAkResult*)Z_Param__Result=P_THIS->Resume(Z_Param_OverrideTransition);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function Resume *****************************************

// ********** Begin Class UAkDynamicSequence Function Seek *****************************************
struct Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics
{
	struct AkDynamicSequence_eventSeek_Parms
	{
		int32 PositionMS;
		bool bSeekToNearestMarker;
		EAkResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Seek inside specified Dynamic Sequence.\n/// \n/// It is only possible to seek in the first item of the sequence.\n/// If you seek past the duration of the first item, it will be skipped and an error will reported in the Capture Log and debug output.\n///\n/// @param PositionMS Position into the the sound, in milliseconds\n/// @param bSeekToNearestMarker Snap to the marker nearest to the seek position\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seek inside specified Dynamic Sequence.\n\nIt is only possible to seek in the first item of the sequence.\nIf you seek past the duration of the first item, it will be skipped and an error will reported in the Capture Log and debug output.\n\n@param PositionMS Position into the the sound, in milliseconds\n@param bSeekToNearestMarker Snap to the marker nearest to the seek position" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Seek constinit property declarations **********************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PositionMS;
	static void NewProp_bSeekToNearestMarker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeekToNearestMarker;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Seek constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Seek Property Definitions *********************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::NewProp_PositionMS = { "PositionMS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventSeek_Parms, PositionMS), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::NewProp_bSeekToNearestMarker_SetBit(void* Obj)
{
	((AkDynamicSequence_eventSeek_Parms*)Obj)->bSeekToNearestMarker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::NewProp_bSeekToNearestMarker = { "bSeekToNearestMarker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDynamicSequence_eventSeek_Parms), &Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::NewProp_bSeekToNearestMarker_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventSeek_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(0, nullptr) }; // 355863608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::NewProp_PositionMS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::NewProp_bSeekToNearestMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::PropPointers) < 2048);
// ********** End Function Seek Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "Seek", 	Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::AkDynamicSequence_eventSeek_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::AkDynamicSequence_eventSeek_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_Seek()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_Seek_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execSeek)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PositionMS);
	P_GET_UBOOL(Z_Param_bSeekToNearestMarker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAkResult*)Z_Param__Result=P_THIS->Seek(Z_Param_PositionMS,Z_Param_bSeekToNearestMarker);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function Seek *******************************************

// ********** Begin Class UAkDynamicSequence Function SeekPercent **********************************
struct Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics
{
	struct AkDynamicSequence_eventSeekPercent_Parms
	{
		float Percent;
		bool bSeekToNearestMarker;
		EAkResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Seek inside specified Dynamic Sequence.\n/// \n/// It is only possible to seek in the first item of the sequence.\n/// If you seek past the duration of the first item, it will be skipped and an error will reported in the Capture Log and debug output.\n///\n/// @param Percent Position into the the sound, in percentage of the whole duration\n/// @param bSeekToNearestMarker Snap to the marker nearest to the seek position\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seek inside specified Dynamic Sequence.\n\nIt is only possible to seek in the first item of the sequence.\nIf you seek past the duration of the first item, it will be skipped and an error will reported in the Capture Log and debug output.\n\n@param Percent Position into the the sound, in percentage of the whole duration\n@param bSeekToNearestMarker Snap to the marker nearest to the seek position" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SeekPercent constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static void NewProp_bSeekToNearestMarker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeekToNearestMarker;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SeekPercent constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SeekPercent Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventSeekPercent_Parms, Percent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::NewProp_bSeekToNearestMarker_SetBit(void* Obj)
{
	((AkDynamicSequence_eventSeekPercent_Parms*)Obj)->bSeekToNearestMarker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::NewProp_bSeekToNearestMarker = { "bSeekToNearestMarker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDynamicSequence_eventSeekPercent_Parms), &Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::NewProp_bSeekToNearestMarker_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventSeekPercent_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(0, nullptr) }; // 355863608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::NewProp_Percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::NewProp_bSeekToNearestMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::PropPointers) < 2048);
// ********** End Function SeekPercent Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "SeekPercent", 	Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::AkDynamicSequence_eventSeekPercent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::AkDynamicSequence_eventSeekPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_SeekPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_SeekPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execSeekPercent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Percent);
	P_GET_UBOOL(Z_Param_bSeekToNearestMarker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAkResult*)Z_Param__Result=P_THIS->SeekPercent(Z_Param_Percent,Z_Param_bSeekToNearestMarker);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function SeekPercent ************************************

// ********** Begin Class UAkDynamicSequence Function Stop *****************************************
struct Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics
{
	struct AkDynamicSequence_eventStop_Parms
	{
		FAkDynamicSequenceTransition OverrideTransition;
		EAkResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Stop specified Dynamic Sequence immediately.\n/// \n/// To restart the sequence, call Play. The sequence will restart with the item that was in the \n/// playlist after the item that was stopped.\n/// \n/// @param OverrideTransition Transition to use instead of the Default Transition.\n" },
#endif
		{ "CPP_Default_OverrideTransition", "()" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop specified Dynamic Sequence immediately.\n\nTo restart the sequence, call Play. The sequence will restart with the item that was in the\nplaylist after the item that was stopped.\n\n@param OverrideTransition Transition to use instead of the Default Transition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideTransition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideTransition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Stop Property Definitions *********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::NewProp_OverrideTransition = { "OverrideTransition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventStop_Parms, OverrideTransition), Z_Construct_UScriptStruct_FAkDynamicSequenceTransition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideTransition_MetaData), NewProp_OverrideTransition_MetaData) }; // 2371024039
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequence_eventStop_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(0, nullptr) }; // 355863608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::NewProp_OverrideTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::PropPointers) < 2048);
// ********** End Function Stop Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequence, nullptr, "Stop", 	Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::AkDynamicSequence_eventStop_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::AkDynamicSequence_eventStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequence_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequence_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequence::execStop)
{
	P_GET_STRUCT(FAkDynamicSequenceTransition,Z_Param_OverrideTransition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAkResult*)Z_Param__Result=P_THIS->Stop(Z_Param_OverrideTransition);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequence Function Stop *******************************************

// ********** Begin Class UAkDynamicSequence *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkDynamicSequence;
UClass* UAkDynamicSequence::GetPrivateStaticClass()
{
	using TClass = UAkDynamicSequence;
	if (!Z_Registration_Info_UClass_UAkDynamicSequence.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkDynamicSequence"),
			Z_Registration_Info_UClass_UAkDynamicSequence.InnerSingleton,
			StaticRegisterNativesUAkDynamicSequence,
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
	return Z_Registration_Info_UClass_UAkDynamicSequence.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkDynamicSequence_NoRegister()
{
	return UAkDynamicSequence::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkDynamicSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Single Wwise Playing Object instance of a dynamic dialogue sequence.\n *\n * This can be instantiated through UAkGameObject::OpenDynamicSequence.\n */" },
#endif
		{ "IncludePath", "AkDynamicSequence.h" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single Wwise Playing Object instance of a dynamic dialogue sequence.\n\nThis can be instantiated through UAkGameObject::OpenDynamicSequence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Playing ID, as provided by UAkGameObject::OpenDynamicSequence.\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playing ID, as provided by UAkGameObject::OpenDynamicSequence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectUserCallback_MetaData[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Callback operation, as provided to AkGameObject::OpenDynamicSequence.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback operation, as provided to AkGameObject::OpenDynamicSequence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSequenceTransition_MetaData[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Structure holding the information of transitions of the sequence\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure holding the information of transitions of the sequence" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Playlist_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Cached Playlist object. Used for ModifyPlaylist to return a single instance.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached Playlist object. Used for ModifyPlaylist to return a single instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentlyPlayingAudioNodes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// List of items that disappeared from the Playlist while being played. Assumes no changes got done outside this system.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of items that disappeared from the Playlist while being played. Assumes no changes got done outside this system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkDynamicSequence.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkDynamicSequence constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_GameObjectUserCallback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicSequenceTransition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Playlist;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentlyPlayingAudioNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentlyPlayingAudioNodes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkDynamicSequence constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Break"), .Pointer = &UAkDynamicSequence::execBreak },
		{ .NameUTF8 = UTF8TEXT("GetPauseTimes"), .Pointer = &UAkDynamicSequence::execGetPauseTimes },
		{ .NameUTF8 = UTF8TEXT("GetPlayingItem"), .Pointer = &UAkDynamicSequence::execGetPlayingItem },
		{ .NameUTF8 = UTF8TEXT("ModifyPlaylist"), .Pointer = &UAkDynamicSequence::execModifyPlaylist },
		{ .NameUTF8 = UTF8TEXT("OnGameObjectCallback"), .Pointer = &UAkDynamicSequence::execOnGameObjectCallback },
		{ .NameUTF8 = UTF8TEXT("Pause"), .Pointer = &UAkDynamicSequence::execPause },
		{ .NameUTF8 = UTF8TEXT("Play"), .Pointer = &UAkDynamicSequence::execPlay },
		{ .NameUTF8 = UTF8TEXT("PostAudioNode"), .Pointer = &UAkDynamicSequence::execPostAudioNode },
		{ .NameUTF8 = UTF8TEXT("PostDialogueEventInPlaylist"), .Pointer = &UAkDynamicSequence::execPostDialogueEventInPlaylist },
		{ .NameUTF8 = UTF8TEXT("PostPlaylistItem"), .Pointer = &UAkDynamicSequence::execPostPlaylistItem },
		{ .NameUTF8 = UTF8TEXT("Resume"), .Pointer = &UAkDynamicSequence::execResume },
		{ .NameUTF8 = UTF8TEXT("Seek"), .Pointer = &UAkDynamicSequence::execSeek },
		{ .NameUTF8 = UTF8TEXT("SeekPercent"), .Pointer = &UAkDynamicSequence::execSeekPercent },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UAkDynamicSequence::execStop },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkDynamicSequence_Break, "Break" }, // 495229950
		{ &Z_Construct_UFunction_UAkDynamicSequence_GetPauseTimes, "GetPauseTimes" }, // 3252453746
		{ &Z_Construct_UFunction_UAkDynamicSequence_GetPlayingItem, "GetPlayingItem" }, // 2007268553
		{ &Z_Construct_UFunction_UAkDynamicSequence_ModifyPlaylist, "ModifyPlaylist" }, // 1777780403
		{ &Z_Construct_UFunction_UAkDynamicSequence_OnGameObjectCallback, "OnGameObjectCallback" }, // 883175248
		{ &Z_Construct_UFunction_UAkDynamicSequence_Pause, "Pause" }, // 2255363139
		{ &Z_Construct_UFunction_UAkDynamicSequence_Play, "Play" }, // 1743473624
		{ &Z_Construct_UFunction_UAkDynamicSequence_PostAudioNode, "PostAudioNode" }, // 149368254
		{ &Z_Construct_UFunction_UAkDynamicSequence_PostDialogueEventInPlaylist, "PostDialogueEventInPlaylist" }, // 4075085011
		{ &Z_Construct_UFunction_UAkDynamicSequence_PostPlaylistItem, "PostPlaylistItem" }, // 966493592
		{ &Z_Construct_UFunction_UAkDynamicSequence_Resume, "Resume" }, // 4082278756
		{ &Z_Construct_UFunction_UAkDynamicSequence_Seek, "Seek" }, // 2332409578
		{ &Z_Construct_UFunction_UAkDynamicSequence_SeekPercent, "SeekPercent" }, // 1053087337
		{ &Z_Construct_UFunction_UAkDynamicSequence_Stop, "Stop" }, // 169558476
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDynamicSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkDynamicSequence_Statics

// ********** Begin Class UAkDynamicSequence Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDynamicSequence, PlayingID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayingID_MetaData), NewProp_PlayingID_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_GameObjectUserCallback = { "GameObjectUserCallback", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDynamicSequence, GameObjectUserCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameObjectUserCallback_MetaData), NewProp_GameObjectUserCallback_MetaData) }; // 3508805760
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_DynamicSequenceTransition = { "DynamicSequenceTransition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDynamicSequence, DynamicSequenceTransition), Z_Construct_UScriptStruct_FAkDynamicSequenceTransition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicSequenceTransition_MetaData), NewProp_DynamicSequenceTransition_MetaData) }; // 2371024039
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_Playlist = { "Playlist", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDynamicSequence, Playlist), Z_Construct_UClass_UAkDynamicSequencePlaylist_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Playlist_MetaData), NewProp_Playlist_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_CurrentlyPlayingAudioNodes_Inner = { "CurrentlyPlayingAudioNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_CurrentlyPlayingAudioNodes = { "CurrentlyPlayingAudioNodes", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDynamicSequence, CurrentlyPlayingAudioNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentlyPlayingAudioNodes_MetaData), NewProp_CurrentlyPlayingAudioNodes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDynamicSequence, State), Z_Construct_UEnum_AkAudio_EAkDynamicSequenceState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2327274044
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkDynamicSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_PlayingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_GameObjectUserCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_DynamicSequenceTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_Playlist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_CurrentlyPlayingAudioNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_CurrentlyPlayingAudioNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequence_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequence_Statics::PropPointers) < 2048);
// ********** End Class UAkDynamicSequence Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UAkDynamicSequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkDynamicSequence_Statics::ClassParams = {
	&UAkDynamicSequence::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkDynamicSequence_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequence_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkDynamicSequence_Statics::Class_MetaDataParams)
};
void UAkDynamicSequence::StaticRegisterNativesUAkDynamicSequence()
{
	UClass* Class = UAkDynamicSequence::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAkDynamicSequence_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAkDynamicSequence()
{
	if (!Z_Registration_Info_UClass_UAkDynamicSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDynamicSequence.OuterSingleton, Z_Construct_UClass_UAkDynamicSequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkDynamicSequence.OuterSingleton;
}
UAkDynamicSequence::UAkDynamicSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkDynamicSequence);
UAkDynamicSequence::~UAkDynamicSequence() {}
// ********** End Class UAkDynamicSequence *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h__Script_AkAudio_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAkDynamicSequenceState_StaticEnum, TEXT("EAkDynamicSequenceState"), &Z_Registration_Info_UEnum_EAkDynamicSequenceState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2327274044U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkDynamicSequence, UAkDynamicSequence::StaticClass, TEXT("UAkDynamicSequence"), &Z_Registration_Info_UClass_UAkDynamicSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDynamicSequence), 2253080820U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h__Script_AkAudio_4103473928{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h__Script_AkAudio_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h__Script_AkAudio_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
