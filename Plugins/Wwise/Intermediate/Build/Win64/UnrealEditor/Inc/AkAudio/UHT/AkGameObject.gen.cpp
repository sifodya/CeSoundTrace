// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkGameObject.h"
#include "AkDynamicSequenceTransition.h"
#include "Engine/LatentActionManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkGameObject() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDialogueEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequence_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkDynamicSequenceTransition();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkGameObject Function DetachDynamicSequence *****************************
struct Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics
{
	struct AkGameObject_eventDetachDynamicSequence_Parms
	{
		UAkDynamicSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Detaches the currently assigned dynamic sequence, resetting it.\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detaches the currently assigned dynamic sequence, resetting it." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DetachDynamicSequence constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DetachDynamicSequence constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DetachDynamicSequence Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventDetachDynamicSequence_Parms, ReturnValue), Z_Construct_UClass_UAkDynamicSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::PropPointers) < 2048);
// ********** End Function DetachDynamicSequence Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "DetachDynamicSequence", 	Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::AkGameObject_eventDetachDynamicSequence_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::AkGameObject_eventDetachDynamicSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execDetachDynamicSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkDynamicSequence**)Z_Param__Result=P_THIS->DetachDynamicSequence();
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function DetachDynamicSequence *******************************

// ********** Begin Class UAkGameObject Function GetAttenuationScalingFactor ***********************
struct Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics
{
	struct AkGameObject_eventGetAttenuationScalingFactor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Audiokinetic|AkEvent" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAttenuationScalingFactor constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAttenuationScalingFactor constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAttenuationScalingFactor Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetAttenuationScalingFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::PropPointers) < 2048);
// ********** End Function GetAttenuationScalingFactor Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "GetAttenuationScalingFactor", 	Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::AkGameObject_eventGetAttenuationScalingFactor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::AkGameObject_eventGetAttenuationScalingFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execGetAttenuationScalingFactor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttenuationScalingFactor();
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function GetAttenuationScalingFactor *************************

// ********** Begin Class UAkGameObject Function GetRTPCValue **************************************
struct Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics
{
	struct AkGameObject_eventGetRTPCValue_Parms
	{
		UAkRtpc* RTPCValue;
		ERTPCValueType InputValueType;
		float Value;
		ERTPCValueType OutputValueType;
		FString RTPC;
		int32 PlayingID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "RTPC" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets an RTPC value that was set on this game object as the game object source\n\x09*\n\x09* @param RTPC\x09\x09\x09\x09The name of the RTPC to set\n\x09* @param InputValueType\x09\x09The input value type\n\x09* @param Value\x09\x09\x09\x09The value of the RTPC\n\x09* @param OutputValueType\x09The output value type\n\x09* @param PlayingID\x09\x09\x09The playing ID of the posted event (Set to zero to ignore)\n\x09*/" },
#endif
		{ "CPP_Default_PlayingID", "0" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets an RTPC value that was set on this game object as the game object source\n\n@param RTPC                           The name of the RTPC to set\n@param InputValueType         The input value type\n@param Value                          The value of the RTPC\n@param OutputValueType        The output value type\n@param PlayingID                      The playing ID of the posted event (Set to zero to ignore)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRTPCValue constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputValueType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputValueType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RTPC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRTPCValue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRTPCValue Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTPCValue_MetaData), NewProp_RTPCValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType = { "InputValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, InputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(0, nullptr) }; // 3787509754
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType = { "OutputValueType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, OutputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(0, nullptr) }; // 3787509754
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, RTPC), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPCValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_PlayingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::PropPointers) < 2048);
// ********** End Function GetRTPCValue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "GetRTPCValue", 	Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::AkGameObject_eventGetRTPCValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::AkGameObject_eventGetRTPCValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_GetRTPCValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execGetRTPCValue)
{
	P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
	P_GET_ENUM(ERTPCValueType,Z_Param_InputValueType);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_ENUM_REF(ERTPCValueType,Z_Param_Out_OutputValueType);
	P_GET_PROPERTY(FStrProperty,Z_Param_RTPC);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRTPCValue(Z_Param_RTPCValue,ERTPCValueType(Z_Param_InputValueType),Z_Param_Out_Value,(ERTPCValueType&)(Z_Param_Out_OutputValueType),Z_Param_RTPC,Z_Param_PlayingID);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function GetRTPCValue ****************************************

// ********** Begin Class UAkGameObject Function OpenDynamicSequence *******************************
struct Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics
{
	struct AkGameObject_eventOpenDynamicSequence_Parms
	{
		int32 CallbackMask;
		FScriptDelegate OpenSequenceCallback;
		FAkDynamicSequenceTransition DefaultTransition;
		bool bSampleAccurate;
		bool bNewInstance;
		UAkDynamicSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "OpenSequenceCallback" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Opens a dynamic sequence to Wwise, using this as the game object source.\n\x09 *\n\x09 * By default, the game object contains an associated dynamic sequence, and any new dialogue event will be added to this\n\x09 * associated dynamic sequence. By asking for a new dynamic sequence instance, you are responsible for its lifetime.\n\x09 *\n\x09 * If the dynamic sequence was already created, the provided callback and sample accurate is ignored.\n\x09 *\n\x09 * @param CallbackMask\x09\x09Mask of desired callbacks\n\x09 * @param OpenSequenceCallback\x09""Blueprint Event to execute on callback\n\x09 * @param DefaultTransition\x09The Transition Parameters when Pausing, Playing, Stopping the Dynamic Sequence. \n\x09 * @param bSampleAccurate\x09Sample accurate Dynamic Sequence. Disallows playlist editing in specific cases.\n\x09 * @param bNewInstance\x09\x09Request a new instance, separated from the associated dynamic sequence.\n\x09 */" },
#endif
		{ "CPP_Default_bNewInstance", "false" },
		{ "CPP_Default_bSampleAccurate", "false" },
		{ "CPP_Default_DefaultTransition", "()" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Opens a dynamic sequence to Wwise, using this as the game object source.\n\nBy default, the game object contains an associated dynamic sequence, and any new dialogue event will be added to this\nassociated dynamic sequence. By asking for a new dynamic sequence instance, you are responsible for its lifetime.\n\nIf the dynamic sequence was already created, the provided callback and sample accurate is ignored.\n\n@param CallbackMask          Mask of desired callbacks\n@param OpenSequenceCallback  Blueprint Event to execute on callback\n@param DefaultTransition     The Transition Parameters when Pausing, Playing, Stopping the Dynamic Sequence.\n@param bSampleAccurate       Sample accurate Dynamic Sequence. Disallows playlist editing in specific cases.\n@param bNewInstance          Request a new instance, separated from the associated dynamic sequence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenSequenceCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTransition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenDynamicSequence constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OpenSequenceCallback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTransition;
	static void NewProp_bSampleAccurate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSampleAccurate;
	static void NewProp_bNewInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenDynamicSequence constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenDynamicSequence Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventOpenDynamicSequence_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_OpenSequenceCallback = { "OpenSequenceCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventOpenDynamicSequence_Parms, OpenSequenceCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenSequenceCallback_MetaData), NewProp_OpenSequenceCallback_MetaData) }; // 3508805760
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_DefaultTransition = { "DefaultTransition", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventOpenDynamicSequence_Parms, DefaultTransition), Z_Construct_UScriptStruct_FAkDynamicSequenceTransition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTransition_MetaData), NewProp_DefaultTransition_MetaData) }; // 2371024039
void Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_bSampleAccurate_SetBit(void* Obj)
{
	((AkGameObject_eventOpenDynamicSequence_Parms*)Obj)->bSampleAccurate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_bSampleAccurate = { "bSampleAccurate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameObject_eventOpenDynamicSequence_Parms), &Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_bSampleAccurate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_bNewInstance_SetBit(void* Obj)
{
	((AkGameObject_eventOpenDynamicSequence_Parms*)Obj)->bNewInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_bNewInstance = { "bNewInstance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameObject_eventOpenDynamicSequence_Parms), &Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_bNewInstance_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventOpenDynamicSequence_Parms, ReturnValue), Z_Construct_UClass_UAkDynamicSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_OpenSequenceCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_DefaultTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_bSampleAccurate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_bNewInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::PropPointers) < 2048);
// ********** End Function OpenDynamicSequence Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "OpenDynamicSequence", 	Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::AkGameObject_eventOpenDynamicSequence_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::AkGameObject_eventOpenDynamicSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execOpenDynamicSequence)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OpenSequenceCallback);
	P_GET_STRUCT(FAkDynamicSequenceTransition,Z_Param_DefaultTransition);
	P_GET_UBOOL(Z_Param_bSampleAccurate);
	P_GET_UBOOL(Z_Param_bNewInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkDynamicSequence**)Z_Param__Result=P_THIS->OpenDynamicSequence(Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_OpenSequenceCallback),Z_Param_DefaultTransition,Z_Param_bSampleAccurate,Z_Param_bNewInstance);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function OpenDynamicSequence *********************************

// ********** Begin Class UAkGameObject Function PostAkDialogueEvent *******************************
struct Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics
{
	struct AkGameObject_eventPostAkDialogueEvent_Parms
	{
		UAkDialogueEvent* AkDialogueEvent;
		TArray<UAkGroupValue*> Arguments;
		bool bOrderedPath;
		bool bPlayImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Post a Dialogue Event to the associated dynamic sequence.\n\x09 * @param AkDialogueEvent\x09\x09The Dialogue Event to post\n\x09 * @param Arguments\x09\x09\x09\x09The arguments to use on the Dialogue Event\n\x09 * @param bOrderedPath\x09\x09Whether the arguments are ordered or not. See UAkDialogueEvent::ResolveOrderedArguments.\n\x09 * @param bPlayImmediately\x09\x09Issues a Play command to the Dynamic Sequence.\n\x09 */" },
#endif
		{ "CPP_Default_bOrderedPath", "false" },
		{ "CPP_Default_bPlayImmediately", "true" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Post a Dialogue Event to the associated dynamic sequence.\n@param AkDialogueEvent               The Dialogue Event to post\n@param Arguments                             The arguments to use on the Dialogue Event\n@param bOrderedPath          Whether the arguments are ordered or not. See UAkDialogueEvent::ResolveOrderedArguments.\n@param bPlayImmediately              Issues a Play command to the Dynamic Sequence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostAkDialogueEvent constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkDialogueEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Arguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
	static void NewProp_bOrderedPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrderedPath;
	static void NewProp_bPlayImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAkDialogueEvent constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAkDialogueEvent Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_AkDialogueEvent = { "AkDialogueEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkDialogueEvent_Parms, AkDialogueEvent), Z_Construct_UClass_UAkDialogueEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkDialogueEvent_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arguments_MetaData), NewProp_Arguments_MetaData) };
void Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_bOrderedPath_SetBit(void* Obj)
{
	((AkGameObject_eventPostAkDialogueEvent_Parms*)Obj)->bOrderedPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_bOrderedPath = { "bOrderedPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameObject_eventPostAkDialogueEvent_Parms), &Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_bOrderedPath_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_bPlayImmediately_SetBit(void* Obj)
{
	((AkGameObject_eventPostAkDialogueEvent_Parms*)Obj)->bPlayImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_bPlayImmediately = { "bPlayImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameObject_eventPostAkDialogueEvent_Parms), &Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_bPlayImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_AkDialogueEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_Arguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_Arguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_bOrderedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::NewProp_bPlayImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::PropPointers) < 2048);
// ********** End Function PostAkDialogueEvent Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAkDialogueEvent", 	Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::AkGameObject_eventPostAkDialogueEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::AkGameObject_eventPostAkDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execPostAkDialogueEvent)
{
	P_GET_OBJECT(UAkDialogueEvent,Z_Param_AkDialogueEvent);
	P_GET_TARRAY_REF(UAkGroupValue*,Z_Param_Out_Arguments);
	P_GET_UBOOL(Z_Param_bOrderedPath);
	P_GET_UBOOL(Z_Param_bPlayImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostAkDialogueEvent(Z_Param_AkDialogueEvent,Z_Param_Out_Arguments,Z_Param_bOrderedPath,Z_Param_bPlayImmediately);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function PostAkDialogueEvent *********************************

// ********** Begin Class UAkGameObject Function PostAkEvent ***************************************
struct Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics
{
	struct AkGameObject_eventPostAkEvent_Parms
	{
		UAkAudioEvent* AkEvent;
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts an event to Wwise, using this as the game object source\n\x09 *\n\x09 * @param AkEvent\x09\x09\x09The event to post\n\x09 * @param CallbackMask\x09\x09Mask of desired callbacks\n\x09 * @param PostEventCallback\x09""Blueprint Event to execute on callback\n\x09 *\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts an event to Wwise, using this as the game object source\n\n@param AkEvent                       The event to post\n@param CallbackMask          Mask of desired callbacks\n@param PostEventCallback     Blueprint Event to execute on callback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostAkEvent constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAkEvent constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAkEvent Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // 3508805760
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers) < 2048);
// ********** End Function PostAkEvent Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAkEvent", 	Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::AkGameObject_eventPostAkEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::AkGameObject_eventPostAkEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execPostAkEvent)
{
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostAkEvent(Z_Param_AkEvent,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback));
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function PostAkEvent *****************************************

// ********** Begin Class UAkGameObject Function PostAkEventAsync **********************************
struct Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics
{
	struct AkGameObject_eventPostAkEventAsync_Parms
	{
		const UObject* WorldContextObject;
		UAkAudioEvent* AkEvent;
		int32 PlayingID;
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts an event to Wwise, using this as the game object source\n\x09 *\n\x09 * @param AkEvent\x09\x09The event to post\n\x09 * @param CallbackMask\x09Mask of desired callbacks\n\x09 * @param PostEventCallback\x09""Blueprint Event to execute on callback\n\x09 *\n\x09 */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts an event to Wwise, using this as the game object source\n\n@param AkEvent               The event to post\n@param CallbackMask  Mask of desired callbacks\n@param PostEventCallback     Blueprint Event to execute on callback" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostAkEventAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAkEventAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAkEventAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // 3508805760
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PlayingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers) < 2048);
// ********** End Function PostAkEventAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAkEventAsync", 	Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::AkGameObject_eventPostAkEventAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::AkGameObject_eventPostAkEventAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEventAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execPostAkEventAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostAkEventAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Out_PlayingID,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_LatentInfo);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function PostAkEventAsync ************************************

// ********** Begin Class UAkGameObject Function PostAssociatedAkEvent *****************************
struct Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics
{
	struct AkGameObject_eventPostAssociatedAkEvent_Parms
	{
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts this game object's AkAudioEvent to Wwise, using this as the game object source\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts this game object's AkAudioEvent to Wwise, using this as the game object source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostAssociatedAkEvent constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAssociatedAkEvent constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAssociatedAkEvent Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // 3508805760
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers) < 2048);
// ********** End Function PostAssociatedAkEvent Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAssociatedAkEvent", 	Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::AkGameObject_eventPostAssociatedAkEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::AkGameObject_eventPostAssociatedAkEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execPostAssociatedAkEvent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEvent(Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback));
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function PostAssociatedAkEvent *******************************

// ********** Begin Class UAkGameObject Function PostAssociatedAkEventAsync ************************
struct Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics
{
	struct AkGameObject_eventPostAssociatedAkEventAsync_Parms
	{
		const UObject* WorldContextObject;
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		FLatentActionInfo LatentInfo;
		int32 PlayingID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostAssociatedAkEventAsync constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAssociatedAkEventAsync constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAssociatedAkEventAsync Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // 3508805760
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PlayingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers) < 2048);
// ********** End Function PostAssociatedAkEventAsync Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAssociatedAkEventAsync", 	Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::AkGameObject_eventPostAssociatedAkEventAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::AkGameObject_eventPostAssociatedAkEventAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execPostAssociatedAkEventAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostAssociatedAkEventAsync(Z_Param_WorldContextObject,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_LatentInfo,Z_Param_Out_PlayingID);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function PostAssociatedAkEventAsync **************************

// ********** Begin Class UAkGameObject Function PostTrigger ***************************************
struct Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics
{
	struct AkGameObject_eventPostTrigger_Parms
	{
		UAkTrigger* TriggerValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts a trigger to wwise, using this component as the game object source\n\x09 *\n\x09 * @param Trigger\x09\x09The name of the trigger\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts a trigger to wwise, using this component as the game object source\n\n@param Trigger               The name of the trigger" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostTrigger constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostTrigger constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostTrigger Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostTrigger_Parms, TriggerValue), Z_Construct_UClass_UAkTrigger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerValue_MetaData), NewProp_TriggerValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::NewProp_TriggerValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::PropPointers) < 2048);
// ********** End Function PostTrigger Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostTrigger", 	Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::AkGameObject_eventPostTrigger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::AkGameObject_eventPostTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_PostTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execPostTrigger)
{
	P_GET_OBJECT(UAkTrigger,Z_Param_TriggerValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostTrigger(Z_Param_TriggerValue);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function PostTrigger *****************************************

// ********** Begin Class UAkGameObject Function SetAttenuationScalingFactor ***********************
struct Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics
{
	struct AkGameObject_eventSetAttenuationScalingFactor_Parms
	{
		float InAttenuationScalingFactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the attenuation scaling factor, which modifies the attenuation computations of the emitter on this game object to simulate sounds with a larger or smaller area of effect. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the attenuation scaling factor, which modifies the attenuation computations of the emitter on this game object to simulate sounds with a larger or smaller area of effect." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetAttenuationScalingFactor constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAttenuationScalingFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAttenuationScalingFactor constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAttenuationScalingFactor Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::NewProp_InAttenuationScalingFactor = { "InAttenuationScalingFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetAttenuationScalingFactor_Parms, InAttenuationScalingFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::NewProp_InAttenuationScalingFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::PropPointers) < 2048);
// ********** End Function SetAttenuationScalingFactor Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "SetAttenuationScalingFactor", 	Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::AkGameObject_eventSetAttenuationScalingFactor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::AkGameObject_eventSetAttenuationScalingFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execSetAttenuationScalingFactor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAttenuationScalingFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttenuationScalingFactor(Z_Param_InAttenuationScalingFactor);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function SetAttenuationScalingFactor *************************

// ********** Begin Class UAkGameObject Function SetRTPCValue **************************************
struct Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics
{
	struct AkGameObject_eventSetRTPCValue_Parms
	{
		UAkRtpc* RTPCValue;
		float Value;
		int32 InterpolationTimeMs;
		FString RTPC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets an RTPC value, using this game object as the game object source\n\x09*\n\x09* @param RTPC\x09\x09\x09The name of the RTPC to set\n\x09* @param Value\x09\x09\x09The value of the RTPC\n\x09* @param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an RTPC value, using this game object as the game object source\n\n@param RTPC                   The name of the RTPC to set\n@param Value                  The value of the RTPC\n@param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRTPCValue constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RTPC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRTPCValue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRTPCValue Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTPCValue_MetaData), NewProp_RTPCValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPCValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_InterpolationTimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::PropPointers) < 2048);
// ********** End Function SetRTPCValue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "SetRTPCValue", 	Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::AkGameObject_eventSetRTPCValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::AkGameObject_eventSetRTPCValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_SetRTPCValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execSetRTPCValue)
{
	P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTimeMs);
	P_GET_PROPERTY(FStrProperty,Z_Param_RTPC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRTPCValue(Z_Param_RTPCValue,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_RTPC);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function SetRTPCValue ****************************************

// ********** Begin Class UAkGameObject Function SetSwitch *****************************************
struct Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics
{
	struct AkGameObject_eventSetSwitch_Parms
	{
		UAkSwitchValue* SwitchValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a switch group in wwise, using this component as the game object source\n\x09 *\n\x09 * @param SwitchGroup\x09The name of the switch group\n\x09 * @param SwitchState\x09The new state of the switch\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a switch group in wwise, using this component as the game object source\n\n@param SwitchGroup   The name of the switch group\n@param SwitchState   The new state of the switch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSwitch constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSwitch constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSwitch Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetSwitch_Parms, SwitchValue), Z_Construct_UClass_UAkSwitchValue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchValue_MetaData), NewProp_SwitchValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::NewProp_SwitchValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::PropPointers) < 2048);
// ********** End Function SetSwitch Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "SetSwitch", 	Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::AkGameObject_eventSetSwitch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::AkGameObject_eventSetSwitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_SetSwitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execSetSwitch)
{
	P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSwitch(Z_Param_SwitchValue);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function SetSwitch *******************************************

// ********** Begin Class UAkGameObject Function Stop **********************************************
struct Z_Construct_UFunction_UAkGameObject_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops playback using this game object as the game object to stop\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops playback using this game object as the game object to stop" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "Stop", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_Stop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAkGameObject_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGameObject::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function Stop ************************************************

// ********** Begin Class UAkGameObject ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkGameObject;
UClass* UAkGameObject::GetPrivateStaticClass()
{
	using TClass = UAkGameObject;
	if (!Z_Registration_Info_UClass_UAkGameObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkGameObject"),
			Z_Registration_Info_UClass_UAkGameObject.InnerSingleton,
			StaticRegisterNativesUAkGameObject,
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
	return Z_Registration_Info_UClass_UAkGameObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkGameObject_NoRegister()
{
	return UAkGameObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkGameObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkGameObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationScalingFactor_MetaData[] = {
		{ "BlueprintGetter", "GetAttenuationScalingFactor" },
		{ "BlueprintSetter", "SetAttenuationScalingFactor" },
		{ "Category", "AkEvent" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Modifies the attenuation computations of the emitter on this game object to simulate sounds with a larger or smaller area of effect. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifies the attenuation computations of the emitter on this game object to simulate sounds with a larger or smaller area of effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[] = {
		{ "Category", "AkEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Associated Wwise Event to be posted on this game object */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Associated Wwise Event to be posted on this game object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AkDynamicSequence_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Associated dynamic sequence, as generated through OpenDynamicSequence */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Associated dynamic sequence, as generated through OpenDynamicSequence" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerDestroyed_MetaData[] = {
		{ "Category", "AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop sound when owner is destroyed? */" },
#endif
		{ "DisplayName", "Stop When Owner is Destroyed" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop sound when owner is destroyed?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopFadeoutTime_MetaData[] = {
		{ "Category", "AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Fadeout time stopped sounds by destroying the Object in ms*/" },
#endif
		{ "DisplayName", "Stop Fadeout Time (ms)" },
		{ "EditCondition", "StopWhenOwnerDestroyed" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Fadeout time stopped sounds by destroying the Object in ms" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttenuationScalingMigrated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkGameObject constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationScalingFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkDynamicSequence;
	static void NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerDestroyed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopFadeoutTime;
	static void NewProp_bAttenuationScalingMigrated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttenuationScalingMigrated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkGameObject constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DetachDynamicSequence"), .Pointer = &UAkGameObject::execDetachDynamicSequence },
		{ .NameUTF8 = UTF8TEXT("GetAttenuationScalingFactor"), .Pointer = &UAkGameObject::execGetAttenuationScalingFactor },
		{ .NameUTF8 = UTF8TEXT("GetRTPCValue"), .Pointer = &UAkGameObject::execGetRTPCValue },
		{ .NameUTF8 = UTF8TEXT("OpenDynamicSequence"), .Pointer = &UAkGameObject::execOpenDynamicSequence },
		{ .NameUTF8 = UTF8TEXT("PostAkDialogueEvent"), .Pointer = &UAkGameObject::execPostAkDialogueEvent },
		{ .NameUTF8 = UTF8TEXT("PostAkEvent"), .Pointer = &UAkGameObject::execPostAkEvent },
		{ .NameUTF8 = UTF8TEXT("PostAkEventAsync"), .Pointer = &UAkGameObject::execPostAkEventAsync },
		{ .NameUTF8 = UTF8TEXT("PostAssociatedAkEvent"), .Pointer = &UAkGameObject::execPostAssociatedAkEvent },
		{ .NameUTF8 = UTF8TEXT("PostAssociatedAkEventAsync"), .Pointer = &UAkGameObject::execPostAssociatedAkEventAsync },
		{ .NameUTF8 = UTF8TEXT("PostTrigger"), .Pointer = &UAkGameObject::execPostTrigger },
		{ .NameUTF8 = UTF8TEXT("SetAttenuationScalingFactor"), .Pointer = &UAkGameObject::execSetAttenuationScalingFactor },
		{ .NameUTF8 = UTF8TEXT("SetRTPCValue"), .Pointer = &UAkGameObject::execSetRTPCValue },
		{ .NameUTF8 = UTF8TEXT("SetSwitch"), .Pointer = &UAkGameObject::execSetSwitch },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UAkGameObject::execStop },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGameObject_DetachDynamicSequence, "DetachDynamicSequence" }, // 3445836724
		{ &Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor, "GetAttenuationScalingFactor" }, // 609804078
		{ &Z_Construct_UFunction_UAkGameObject_GetRTPCValue, "GetRTPCValue" }, // 2325132896
		{ &Z_Construct_UFunction_UAkGameObject_OpenDynamicSequence, "OpenDynamicSequence" }, // 3476006119
		{ &Z_Construct_UFunction_UAkGameObject_PostAkDialogueEvent, "PostAkDialogueEvent" }, // 32524469
		{ &Z_Construct_UFunction_UAkGameObject_PostAkEvent, "PostAkEvent" }, // 1679278280
		{ &Z_Construct_UFunction_UAkGameObject_PostAkEventAsync, "PostAkEventAsync" }, // 4205523002
		{ &Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent, "PostAssociatedAkEvent" }, // 1395157401
		{ &Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync, "PostAssociatedAkEventAsync" }, // 1432698732
		{ &Z_Construct_UFunction_UAkGameObject_PostTrigger, "PostTrigger" }, // 548784928
		{ &Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor, "SetAttenuationScalingFactor" }, // 1202055638
		{ &Z_Construct_UFunction_UAkGameObject_SetRTPCValue, "SetRTPCValue" }, // 188944487
		{ &Z_Construct_UFunction_UAkGameObject_SetSwitch, "SetSwitch" }, // 4191513035
		{ &Z_Construct_UFunction_UAkGameObject_Stop, "Stop" }, // 2584958480
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGameObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkGameObject_Statics

// ********** Begin Class UAkGameObject Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkGameObject_Statics::NewProp_AttenuationScalingFactor = { "AttenuationScalingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGameObject, AttenuationScalingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationScalingFactor_MetaData), NewProp_AttenuationScalingFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGameObject, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AkAudioEvent_MetaData), NewProp_AkAudioEvent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkDynamicSequence = { "AkDynamicSequence", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGameObject, AkDynamicSequence), Z_Construct_UClass_UAkDynamicSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AkDynamicSequence_MetaData), NewProp_AkDynamicSequence_MetaData) };
void Z_Construct_UClass_UAkGameObject_Statics::NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj)
{
	((UAkGameObject*)Obj)->StopWhenOwnerDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGameObject_Statics::NewProp_StopWhenOwnerDestroyed = { "StopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGameObject), &Z_Construct_UClass_UAkGameObject_Statics::NewProp_StopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopWhenOwnerDestroyed_MetaData), NewProp_StopWhenOwnerDestroyed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkGameObject_Statics::NewProp_StopFadeoutTime = { "StopFadeoutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGameObject, StopFadeoutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopFadeoutTime_MetaData), NewProp_StopFadeoutTime_MetaData) };
void Z_Construct_UClass_UAkGameObject_Statics::NewProp_bAttenuationScalingMigrated_SetBit(void* Obj)
{
	((UAkGameObject*)Obj)->bAttenuationScalingMigrated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGameObject_Statics::NewProp_bAttenuationScalingMigrated = { "bAttenuationScalingMigrated", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGameObject), &Z_Construct_UClass_UAkGameObject_Statics::NewProp_bAttenuationScalingMigrated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttenuationScalingMigrated_MetaData), NewProp_bAttenuationScalingMigrated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGameObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGameObject_Statics::NewProp_AttenuationScalingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkDynamicSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGameObject_Statics::NewProp_StopWhenOwnerDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGameObject_Statics::NewProp_StopFadeoutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGameObject_Statics::NewProp_bAttenuationScalingMigrated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::PropPointers) < 2048);
// ********** End Class UAkGameObject Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UAkGameObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkGameObject_Statics::ClassParams = {
	&UAkGameObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkGameObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkGameObject_Statics::Class_MetaDataParams)
};
void UAkGameObject::StaticRegisterNativesUAkGameObject()
{
	UClass* Class = UAkGameObject::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAkGameObject_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAkGameObject()
{
	if (!Z_Registration_Info_UClass_UAkGameObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGameObject.OuterSingleton, Z_Construct_UClass_UAkGameObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkGameObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkGameObject);
UAkGameObject::~UAkGameObject() {}
// ********** End Class UAkGameObject **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkGameObject, UAkGameObject::StaticClass, TEXT("UAkGameObject"), &Z_Registration_Info_UClass_UAkGameObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGameObject), 2921940301U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h__Script_AkAudio_3422502177{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
