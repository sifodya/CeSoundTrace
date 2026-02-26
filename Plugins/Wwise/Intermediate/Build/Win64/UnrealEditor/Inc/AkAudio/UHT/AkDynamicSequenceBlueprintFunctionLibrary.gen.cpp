// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkDynamicSequenceBlueprintFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkDynamicSequenceBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioNode_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDialogueEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkDynamicSequenceBlueprintFunctionLibrary Function CreateDynamicSequencePlaylistItemFromAudioNode 
struct Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics
{
	struct AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromAudioNode_Parms
	{
		UAkAudioNode* AudioNode;
		int32 DelayMs;
		UObject* CustomData;
		UAkDynamicSequencePlaylistItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
		{ "CPP_Default_CustomData", "None" },
		{ "CPP_Default_DelayMs", "0" },
		{ "Keywords", "Wwise" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequenceBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateDynamicSequencePlaylistItemFromAudioNode constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioNode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DelayMs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateDynamicSequencePlaylistItemFromAudioNode constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateDynamicSequencePlaylistItemFromAudioNode Property Definitions ***
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::NewProp_AudioNode = { "AudioNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromAudioNode_Parms, AudioNode), Z_Construct_UClass_UAkAudioNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::NewProp_DelayMs = { "DelayMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromAudioNode_Parms, DelayMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromAudioNode_Parms, CustomData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromAudioNode_Parms, ReturnValue), Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::NewProp_AudioNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::NewProp_DelayMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::PropPointers) < 2048);
// ********** End Function CreateDynamicSequencePlaylistItemFromAudioNode Property Definitions *****
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary, nullptr, "CreateDynamicSequencePlaylistItemFromAudioNode", 	Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromAudioNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromAudioNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequenceBlueprintFunctionLibrary::execCreateDynamicSequencePlaylistItemFromAudioNode)
{
	P_GET_OBJECT(UAkAudioNode,Z_Param_AudioNode);
	P_GET_PROPERTY(FIntProperty,Z_Param_DelayMs);
	P_GET_OBJECT(UObject,Z_Param_CustomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkDynamicSequencePlaylistItem**)Z_Param__Result=UAkDynamicSequenceBlueprintFunctionLibrary::CreateDynamicSequencePlaylistItemFromAudioNode(Z_Param_AudioNode,Z_Param_DelayMs,Z_Param_CustomData);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequenceBlueprintFunctionLibrary Function CreateDynamicSequencePlaylistItemFromAudioNode 

// ********** Begin Class UAkDynamicSequenceBlueprintFunctionLibrary Function CreateDynamicSequencePlaylistItemFromDialogueEvent 
struct Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics
{
	struct AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromDialogueEvent_Parms
	{
		UAkDialogueEvent* DialogueEvent;
		TArray<UAkGroupValue*> Arguments;
		bool bOrderedPath;
		int32 DelayMs;
		UObject* CustomData;
		UAkDynamicSequencePlaylistItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
		{ "CPP_Default_bOrderedPath", "false" },
		{ "CPP_Default_CustomData", "None" },
		{ "CPP_Default_DelayMs", "0" },
		{ "Keywords", "Wwise" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequenceBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateDynamicSequencePlaylistItemFromDialogueEvent constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Arguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
	static void NewProp_bOrderedPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrderedPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DelayMs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateDynamicSequencePlaylistItemFromDialogueEvent constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateDynamicSequencePlaylistItemFromDialogueEvent Property Definitions 
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_DialogueEvent = { "DialogueEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromDialogueEvent_Parms, DialogueEvent), Z_Construct_UClass_UAkDialogueEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromDialogueEvent_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arguments_MetaData), NewProp_Arguments_MetaData) };
void Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_bOrderedPath_SetBit(void* Obj)
{
	((AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromDialogueEvent_Parms*)Obj)->bOrderedPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_bOrderedPath = { "bOrderedPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromDialogueEvent_Parms), &Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_bOrderedPath_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_DelayMs = { "DelayMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromDialogueEvent_Parms, DelayMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromDialogueEvent_Parms, CustomData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromDialogueEvent_Parms, ReturnValue), Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_DialogueEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_Arguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_Arguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_bOrderedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_DelayMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::PropPointers) < 2048);
// ********** End Function CreateDynamicSequencePlaylistItemFromDialogueEvent Property Definitions *
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary, nullptr, "CreateDynamicSequencePlaylistItemFromDialogueEvent", 	Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromDialogueEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::AkDynamicSequenceBlueprintFunctionLibrary_eventCreateDynamicSequencePlaylistItemFromDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequenceBlueprintFunctionLibrary::execCreateDynamicSequencePlaylistItemFromDialogueEvent)
{
	P_GET_OBJECT(UAkDialogueEvent,Z_Param_DialogueEvent);
	P_GET_TARRAY_REF(UAkGroupValue*,Z_Param_Out_Arguments);
	P_GET_UBOOL(Z_Param_bOrderedPath);
	P_GET_PROPERTY(FIntProperty,Z_Param_DelayMs);
	P_GET_OBJECT(UObject,Z_Param_CustomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkDynamicSequencePlaylistItem**)Z_Param__Result=UAkDynamicSequenceBlueprintFunctionLibrary::CreateDynamicSequencePlaylistItemFromDialogueEvent(Z_Param_DialogueEvent,Z_Param_Out_Arguments,Z_Param_bOrderedPath,Z_Param_DelayMs,Z_Param_CustomData);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequenceBlueprintFunctionLibrary Function CreateDynamicSequencePlaylistItemFromDialogueEvent 

// ********** Begin Class UAkDynamicSequenceBlueprintFunctionLibrary *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkDynamicSequenceBlueprintFunctionLibrary;
UClass* UAkDynamicSequenceBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAkDynamicSequenceBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAkDynamicSequenceBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkDynamicSequenceBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAkDynamicSequenceBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAkDynamicSequenceBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAkDynamicSequenceBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_NoRegister()
{
	return UAkDynamicSequenceBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Convenience operations for Dynamic Sequences. \n */" },
#endif
		{ "IncludePath", "AkDynamicSequenceBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequenceBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience operations for Dynamic Sequences." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkDynamicSequenceBlueprintFunctionLibrary constinit property declarations 
// ********** End Class UAkDynamicSequenceBlueprintFunctionLibrary constinit property declarations *
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateDynamicSequencePlaylistItemFromAudioNode"), .Pointer = &UAkDynamicSequenceBlueprintFunctionLibrary::execCreateDynamicSequencePlaylistItemFromAudioNode },
		{ .NameUTF8 = UTF8TEXT("CreateDynamicSequencePlaylistItemFromDialogueEvent"), .Pointer = &UAkDynamicSequenceBlueprintFunctionLibrary::execCreateDynamicSequencePlaylistItemFromDialogueEvent },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromAudioNode, "CreateDynamicSequencePlaylistItemFromAudioNode" }, // 3520266767
		{ &Z_Construct_UFunction_UAkDynamicSequenceBlueprintFunctionLibrary_CreateDynamicSequencePlaylistItemFromDialogueEvent, "CreateDynamicSequencePlaylistItemFromDialogueEvent" }, // 2760290146
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDynamicSequenceBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAkDynamicSequenceBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
void UAkDynamicSequenceBlueprintFunctionLibrary::StaticRegisterNativesUAkDynamicSequenceBlueprintFunctionLibrary()
{
	UClass* Class = UAkDynamicSequenceBlueprintFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAkDynamicSequenceBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDynamicSequenceBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkDynamicSequenceBlueprintFunctionLibrary.OuterSingleton;
}
UAkDynamicSequenceBlueprintFunctionLibrary::UAkDynamicSequenceBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkDynamicSequenceBlueprintFunctionLibrary);
UAkDynamicSequenceBlueprintFunctionLibrary::~UAkDynamicSequenceBlueprintFunctionLibrary() {}
// ********** End Class UAkDynamicSequenceBlueprintFunctionLibrary *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary, UAkDynamicSequenceBlueprintFunctionLibrary::StaticClass, TEXT("UAkDynamicSequenceBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAkDynamicSequenceBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDynamicSequenceBlueprintFunctionLibrary), 1543056141U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h__Script_AkAudio_2602733122{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
