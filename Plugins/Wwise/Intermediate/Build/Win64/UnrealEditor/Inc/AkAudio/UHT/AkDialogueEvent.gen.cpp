// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkDialogueEvent.h"
#include "AkDynamicSequenceTransition.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h"
#include "Wwise/Info/WwiseDialogueEventInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkDialogueEvent() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioNode_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDialogueEvent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDialogueEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequence_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkDynamicSequenceTransition();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueEventInfo();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkDialogueEvent Function FetchAudioNodeObject ***************************
struct Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics
{
	struct AkDialogueEvent_eventFetchAudioNodeObject_Parms
	{
		int32 AudioNodeId;
		UAkAudioNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AkDialogueEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Retrieves the AudioNode's UAkAudioNode from its id.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the AudioNode's UAkAudioNode from its id." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FetchAudioNodeObject constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioNodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FetchAudioNodeObject constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FetchAudioNodeObject Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::NewProp_AudioNodeId = { "AudioNodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventFetchAudioNodeObject_Parms, AudioNodeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventFetchAudioNodeObject_Parms, ReturnValue), Z_Construct_UClass_UAkAudioNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::NewProp_AudioNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::PropPointers) < 2048);
// ********** End Function FetchAudioNodeObject Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDialogueEvent, nullptr, "FetchAudioNodeObject", 	Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::AkDialogueEvent_eventFetchAudioNodeObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::AkDialogueEvent_eventFetchAudioNodeObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDialogueEvent::execFetchAudioNodeObject)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AudioNodeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkAudioNode**)Z_Param__Result=P_THIS->FetchAudioNodeObject(Z_Param_AudioNodeId);
	P_NATIVE_END;
}
// ********** End Class UAkDialogueEvent Function FetchAudioNodeObject *****************************

// ********** Begin Class UAkDialogueEvent Function PostAmbientDialogueEvent ***********************
struct Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics
{
	struct AkDialogueEvent_eventPostAmbientDialogueEvent_Parms
	{
		TArray<UAkGroupValue*> Arguments;
		bool bOrderedPath;
		bool bNewInstance;
		bool bPlayImmediately;
		FAkDynamicSequenceTransition Transition;
		UAkDynamicSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AkDialogueEvent" },
		{ "CPP_Default_bNewInstance", "false" },
		{ "CPP_Default_bOrderedPath", "false" },
		{ "CPP_Default_bPlayImmediately", "true" },
		{ "CPP_Default_Transition", "()" },
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostAmbientDialogueEvent constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Arguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
	static void NewProp_bOrderedPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrderedPath;
	static void NewProp_bNewInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInstance;
	static void NewProp_bPlayImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayImmediately;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAmbientDialogueEvent constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAmbientDialogueEvent Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventPostAmbientDialogueEvent_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arguments_MetaData), NewProp_Arguments_MetaData) };
void Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bOrderedPath_SetBit(void* Obj)
{
	((AkDialogueEvent_eventPostAmbientDialogueEvent_Parms*)Obj)->bOrderedPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bOrderedPath = { "bOrderedPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDialogueEvent_eventPostAmbientDialogueEvent_Parms), &Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bOrderedPath_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bNewInstance_SetBit(void* Obj)
{
	((AkDialogueEvent_eventPostAmbientDialogueEvent_Parms*)Obj)->bNewInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bNewInstance = { "bNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDialogueEvent_eventPostAmbientDialogueEvent_Parms), &Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bNewInstance_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bPlayImmediately_SetBit(void* Obj)
{
	((AkDialogueEvent_eventPostAmbientDialogueEvent_Parms*)Obj)->bPlayImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bPlayImmediately = { "bPlayImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDialogueEvent_eventPostAmbientDialogueEvent_Parms), &Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bPlayImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventPostAmbientDialogueEvent_Parms, Transition), Z_Construct_UScriptStruct_FAkDynamicSequenceTransition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transition_MetaData), NewProp_Transition_MetaData) }; // 2371024039
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventPostAmbientDialogueEvent_Parms, ReturnValue), Z_Construct_UClass_UAkDynamicSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_Arguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_Arguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bOrderedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bNewInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_bPlayImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_Transition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::PropPointers) < 2048);
// ********** End Function PostAmbientDialogueEvent Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDialogueEvent, nullptr, "PostAmbientDialogueEvent", 	Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::AkDialogueEvent_eventPostAmbientDialogueEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::AkDialogueEvent_eventPostAmbientDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDialogueEvent::execPostAmbientDialogueEvent)
{
	P_GET_TARRAY_REF(UAkGroupValue*,Z_Param_Out_Arguments);
	P_GET_UBOOL(Z_Param_bOrderedPath);
	P_GET_UBOOL(Z_Param_bNewInstance);
	P_GET_UBOOL(Z_Param_bPlayImmediately);
	P_GET_STRUCT(FAkDynamicSequenceTransition,Z_Param_Transition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkDynamicSequence**)Z_Param__Result=P_THIS->PostAmbientDialogueEvent(Z_Param_Out_Arguments,Z_Param_bOrderedPath,Z_Param_bNewInstance,Z_Param_bPlayImmediately,Z_Param_Transition);
	P_NATIVE_END;
}
// ********** End Class UAkDialogueEvent Function PostAmbientDialogueEvent *************************

// ********** Begin Class UAkDialogueEvent Function PostDialogueEvent ******************************
struct Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics
{
	struct AkDialogueEvent_eventPostDialogueEvent_Parms
	{
		UAkGameObject* GameObject;
		TArray<UAkGroupValue*> Arguments;
		bool bOrderedPath;
		bool bNewInstance;
		bool bPlayImmediately;
		FAkDynamicSequenceTransition Transition;
		UAkDynamicSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AkDialogueEvent" },
		{ "CPP_Default_bNewInstance", "false" },
		{ "CPP_Default_bOrderedPath", "false" },
		{ "CPP_Default_bPlayImmediately", "true" },
		{ "CPP_Default_Transition", "()" },
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameObject_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostDialogueEvent constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Arguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
	static void NewProp_bOrderedPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrderedPath;
	static void NewProp_bNewInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInstance;
	static void NewProp_bPlayImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayImmediately;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostDialogueEvent constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostDialogueEvent Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_GameObject = { "GameObject", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventPostDialogueEvent_Parms, GameObject), Z_Construct_UClass_UAkGameObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameObject_MetaData), NewProp_GameObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventPostDialogueEvent_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arguments_MetaData), NewProp_Arguments_MetaData) };
void Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bOrderedPath_SetBit(void* Obj)
{
	((AkDialogueEvent_eventPostDialogueEvent_Parms*)Obj)->bOrderedPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bOrderedPath = { "bOrderedPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDialogueEvent_eventPostDialogueEvent_Parms), &Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bOrderedPath_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bNewInstance_SetBit(void* Obj)
{
	((AkDialogueEvent_eventPostDialogueEvent_Parms*)Obj)->bNewInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bNewInstance = { "bNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDialogueEvent_eventPostDialogueEvent_Parms), &Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bNewInstance_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bPlayImmediately_SetBit(void* Obj)
{
	((AkDialogueEvent_eventPostDialogueEvent_Parms*)Obj)->bPlayImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bPlayImmediately = { "bPlayImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDialogueEvent_eventPostDialogueEvent_Parms), &Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bPlayImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventPostDialogueEvent_Parms, Transition), Z_Construct_UScriptStruct_FAkDynamicSequenceTransition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transition_MetaData), NewProp_Transition_MetaData) }; // 2371024039
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventPostDialogueEvent_Parms, ReturnValue), Z_Construct_UClass_UAkDynamicSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_GameObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_Arguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_Arguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bOrderedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bNewInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_bPlayImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_Transition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::PropPointers) < 2048);
// ********** End Function PostDialogueEvent Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDialogueEvent, nullptr, "PostDialogueEvent", 	Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::AkDialogueEvent_eventPostDialogueEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::AkDialogueEvent_eventPostDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDialogueEvent::execPostDialogueEvent)
{
	P_GET_OBJECT(UAkGameObject,Z_Param_GameObject);
	P_GET_TARRAY_REF(UAkGroupValue*,Z_Param_Out_Arguments);
	P_GET_UBOOL(Z_Param_bOrderedPath);
	P_GET_UBOOL(Z_Param_bNewInstance);
	P_GET_UBOOL(Z_Param_bPlayImmediately);
	P_GET_STRUCT(FAkDynamicSequenceTransition,Z_Param_Transition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkDynamicSequence**)Z_Param__Result=P_THIS->PostDialogueEvent(Z_Param_GameObject,Z_Param_Out_Arguments,Z_Param_bOrderedPath,Z_Param_bNewInstance,Z_Param_bPlayImmediately,Z_Param_Transition);
	P_NATIVE_END;
}
// ********** End Class UAkDialogueEvent Function PostDialogueEvent ********************************

// ********** Begin Class UAkDialogueEvent Function ResolveArguments *******************************
struct Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics
{
	struct AkDialogueEvent_eventResolveArguments_Parms
	{
		TArray<UAkGroupValue*> Arguments;
		UAkAudioNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AkDialogueEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Resolve a dialogue event into an UAkAudioNode based on the specified arguments.\n///\n/// Any number of arguments can be passed, in any order. Arguments cannot be overridden. Missing arguments are considered fallback.\n///\n/// It's possible to ask ResolveArguments in a precise order instead. This is recommended if multiple identical GroupValues are used.\n/// In this case, use ResolveOrderedArguments.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolve a dialogue event into an UAkAudioNode based on the specified arguments.\n\nAny number of arguments can be passed, in any order. Arguments cannot be overridden. Missing arguments are considered fallback.\n\nIt's possible to ask ResolveArguments in a precise order instead. This is recommended if multiple identical GroupValues are used.\nIn this case, use ResolveOrderedArguments." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResolveArguments constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Arguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResolveArguments constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResolveArguments Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventResolveArguments_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventResolveArguments_Parms, ReturnValue), Z_Construct_UClass_UAkAudioNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::NewProp_Arguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::NewProp_Arguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::PropPointers) < 2048);
// ********** End Function ResolveArguments Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDialogueEvent, nullptr, "ResolveArguments", 	Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::AkDialogueEvent_eventResolveArguments_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::AkDialogueEvent_eventResolveArguments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDialogueEvent::execResolveArguments)
{
	P_GET_TARRAY(UAkGroupValue*,Z_Param_Arguments);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkAudioNode**)Z_Param__Result=P_THIS->ResolveArguments(Z_Param_Arguments);
	P_NATIVE_END;
}
// ********** End Class UAkDialogueEvent Function ResolveArguments *********************************

// ********** Begin Class UAkDialogueEvent Function ResolveOrderedArguments ************************
struct Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics
{
	struct AkDialogueEvent_eventResolveOrderedArguments_Parms
	{
		TArray<UAkGroupValue*> Arguments;
		UAkAudioNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AkDialogueEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Resolve a dialogue event into an UAkAudioNode based on the specified arguments.\n///\n/// Exactly the proper list of arguments must be used, with the proper typing. If a value is fallthrough, it must have no\n/// object applied in the arguments.\n///\n/// It's possible to provide any arguments through the ResolveArguments operation. This is typically the simpler way to provide arguments.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolve a dialogue event into an UAkAudioNode based on the specified arguments.\n\nExactly the proper list of arguments must be used, with the proper typing. If a value is fallthrough, it must have no\nobject applied in the arguments.\n\nIt's possible to provide any arguments through the ResolveArguments operation. This is typically the simpler way to provide arguments." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResolveOrderedArguments constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Arguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResolveOrderedArguments constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResolveOrderedArguments Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventResolveOrderedArguments_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDialogueEvent_eventResolveOrderedArguments_Parms, ReturnValue), Z_Construct_UClass_UAkAudioNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::NewProp_Arguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::NewProp_Arguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::PropPointers) < 2048);
// ********** End Function ResolveOrderedArguments Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDialogueEvent, nullptr, "ResolveOrderedArguments", 	Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::AkDialogueEvent_eventResolveOrderedArguments_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::AkDialogueEvent_eventResolveOrderedArguments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDialogueEvent::execResolveOrderedArguments)
{
	P_GET_TARRAY(UAkGroupValue*,Z_Param_Arguments);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkAudioNode**)Z_Param__Result=P_THIS->ResolveOrderedArguments(Z_Param_Arguments);
	P_NATIVE_END;
}
// ********** End Class UAkDialogueEvent Function ResolveOrderedArguments **************************

// ********** Begin Class UAkDialogueEvent *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkDialogueEvent;
UClass* UAkDialogueEvent::GetPrivateStaticClass()
{
	using TClass = UAkDialogueEvent;
	if (!Z_Registration_Info_UClass_UAkDialogueEvent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkDialogueEvent"),
			Z_Registration_Info_UClass_UAkDialogueEvent.InnerSingleton,
			StaticRegisterNativesUAkDialogueEvent,
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
	return Z_Registration_Info_UClass_UAkDialogueEvent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkDialogueEvent_NoRegister()
{
	return UAkDialogueEvent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkDialogueEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dialogue Event (Dynamic Dialogue).\n *\n * Allows dialogue argument paths to be resolved to an UAkAudioNode.\n */" },
#endif
		{ "IncludePath", "AkDialogueEvent.h" },
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Event (Dynamic Dialogue).\n\nAllows dialogue argument paths to be resolved to an UAkAudioNode." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueEventInfo_MetaData[] = {
		{ "Category", "AkDialogueEvent" },
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueEventCookedData_MetaData[] = {
		{ "Category", "AkDialogueEvent" },
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGroupValues_MetaData[] = {
		{ "Category", "AkDialogueEvent" },
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewOrderedPath_MetaData[] = {
		{ "Category", "AkDialogueEvent" },
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayingPreview_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedAudioNodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkDialogueEvent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkDialogueEvent constinit property declarations *************************
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueEventInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueEventCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGroupValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewGroupValues;
	static void NewProp_bPreviewOrderedPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewOrderedPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingPreview;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedAudioNodes_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoadedAudioNodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedAudioNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkDialogueEvent constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FetchAudioNodeObject"), .Pointer = &UAkDialogueEvent::execFetchAudioNodeObject },
		{ .NameUTF8 = UTF8TEXT("PostAmbientDialogueEvent"), .Pointer = &UAkDialogueEvent::execPostAmbientDialogueEvent },
		{ .NameUTF8 = UTF8TEXT("PostDialogueEvent"), .Pointer = &UAkDialogueEvent::execPostDialogueEvent },
		{ .NameUTF8 = UTF8TEXT("ResolveArguments"), .Pointer = &UAkDialogueEvent::execResolveArguments },
		{ .NameUTF8 = UTF8TEXT("ResolveOrderedArguments"), .Pointer = &UAkDialogueEvent::execResolveOrderedArguments },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkDialogueEvent_FetchAudioNodeObject, "FetchAudioNodeObject" }, // 2024903183
		{ &Z_Construct_UFunction_UAkDialogueEvent_PostAmbientDialogueEvent, "PostAmbientDialogueEvent" }, // 3426462521
		{ &Z_Construct_UFunction_UAkDialogueEvent_PostDialogueEvent, "PostDialogueEvent" }, // 2560189976
		{ &Z_Construct_UFunction_UAkDialogueEvent_ResolveArguments, "ResolveArguments" }, // 3657481424
		{ &Z_Construct_UFunction_UAkDialogueEvent_ResolveOrderedArguments, "ResolveOrderedArguments" }, // 125356993
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDialogueEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkDialogueEvent_Statics

// ********** Begin Class UAkDialogueEvent Property Definitions ************************************
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_DialogueEventInfo = { "DialogueEventInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDialogueEvent, DialogueEventInfo), Z_Construct_UScriptStruct_FWwiseDialogueEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueEventInfo_MetaData), NewProp_DialogueEventInfo_MetaData) }; // 885366332
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_DialogueEventCookedData = { "DialogueEventCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDialogueEvent, DialogueEventCookedData), Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueEventCookedData_MetaData), NewProp_DialogueEventCookedData_MetaData) }; // 1811738429
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_PreviewGroupValues_Inner = { "PreviewGroupValues", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_PreviewGroupValues = { "PreviewGroupValues", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDialogueEvent, PreviewGroupValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewGroupValues_MetaData), NewProp_PreviewGroupValues_MetaData) };
void Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_bPreviewOrderedPath_SetBit(void* Obj)
{
	((UAkDialogueEvent*)Obj)->bPreviewOrderedPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_bPreviewOrderedPath = { "bPreviewOrderedPath", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkDialogueEvent), &Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_bPreviewOrderedPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewOrderedPath_MetaData), NewProp_bPreviewOrderedPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_PlayingPreview = { "PlayingPreview", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDialogueEvent, PlayingPreview), Z_Construct_UClass_UAkDynamicSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayingPreview_MetaData), NewProp_PlayingPreview_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_LoadedAudioNodes_ValueProp = { "LoadedAudioNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAkAudioNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_LoadedAudioNodes_Key_KeyProp = { "LoadedAudioNodes_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_LoadedAudioNodes = { "LoadedAudioNodes", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDialogueEvent, LoadedAudioNodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedAudioNodes_MetaData), NewProp_LoadedAudioNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkDialogueEvent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_DialogueEventInfo,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_DialogueEventCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_PreviewGroupValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_PreviewGroupValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_bPreviewOrderedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_PlayingPreview,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_LoadedAudioNodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_LoadedAudioNodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDialogueEvent_Statics::NewProp_LoadedAudioNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDialogueEvent_Statics::PropPointers) < 2048);
// ********** End Class UAkDialogueEvent Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UAkDialogueEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDialogueEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkDialogueEvent_Statics::ClassParams = {
	&UAkDialogueEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkDialogueEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkDialogueEvent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDialogueEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkDialogueEvent_Statics::Class_MetaDataParams)
};
void UAkDialogueEvent::StaticRegisterNativesUAkDialogueEvent()
{
	UClass* Class = UAkDialogueEvent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAkDialogueEvent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAkDialogueEvent()
{
	if (!Z_Registration_Info_UClass_UAkDialogueEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDialogueEvent.OuterSingleton, Z_Construct_UClass_UAkDialogueEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkDialogueEvent.OuterSingleton;
}
UAkDialogueEvent::UAkDialogueEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkDialogueEvent);
UAkDialogueEvent::~UAkDialogueEvent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkDialogueEvent)
// ********** End Class UAkDialogueEvent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkDialogueEvent, UAkDialogueEvent::StaticClass, TEXT("UAkDialogueEvent"), &Z_Registration_Info_UClass_UAkDialogueEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDialogueEvent), 3837069681U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h__Script_AkAudio_1301293534{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
