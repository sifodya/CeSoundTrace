// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudioNode.h"
#include "AkDynamicSequenceTransition.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Wwise/CookedData/WwiseAudioNodeCookedData.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAudioNode() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioNode();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioNode_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequence_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkDynamicSequenceTransition();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkAudioNode Function PostAmbientAudioNode *******************************
struct Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics
{
	struct AkAudioNode_eventPostAmbientAudioNode_Parms
	{
		bool bNewInstance;
		bool bPlayImmediately;
		FAkDynamicSequenceTransition Transition;
		UAkDynamicSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AkAudioNode" },
		{ "CPP_Default_bNewInstance", "false" },
		{ "CPP_Default_bPlayImmediately", "true" },
		{ "CPP_Default_Transition", "()" },
		{ "ModuleRelativePath", "Classes/AkAudioNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostAmbientAudioNode constinit property declarations ******************
	static void NewProp_bNewInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInstance;
	static void NewProp_bPlayImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayImmediately;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAmbientAudioNode constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAmbientAudioNode Property Definitions *****************************
void Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_bNewInstance_SetBit(void* Obj)
{
	((AkAudioNode_eventPostAmbientAudioNode_Parms*)Obj)->bNewInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_bNewInstance = { "bNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAudioNode_eventPostAmbientAudioNode_Parms), &Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_bNewInstance_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_bPlayImmediately_SetBit(void* Obj)
{
	((AkAudioNode_eventPostAmbientAudioNode_Parms*)Obj)->bPlayImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_bPlayImmediately = { "bPlayImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAudioNode_eventPostAmbientAudioNode_Parms), &Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_bPlayImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioNode_eventPostAmbientAudioNode_Parms, Transition), Z_Construct_UScriptStruct_FAkDynamicSequenceTransition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transition_MetaData), NewProp_Transition_MetaData) }; // 2371024039
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioNode_eventPostAmbientAudioNode_Parms, ReturnValue), Z_Construct_UClass_UAkDynamicSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_bNewInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_bPlayImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_Transition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::PropPointers) < 2048);
// ********** End Function PostAmbientAudioNode Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkAudioNode, nullptr, "PostAmbientAudioNode", 	Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::AkAudioNode_eventPostAmbientAudioNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::AkAudioNode_eventPostAmbientAudioNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioNode::execPostAmbientAudioNode)
{
	P_GET_UBOOL(Z_Param_bNewInstance);
	P_GET_UBOOL(Z_Param_bPlayImmediately);
	P_GET_STRUCT(FAkDynamicSequenceTransition,Z_Param_Transition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkDynamicSequence**)Z_Param__Result=P_THIS->PostAmbientAudioNode(Z_Param_bNewInstance,Z_Param_bPlayImmediately,Z_Param_Transition);
	P_NATIVE_END;
}
// ********** End Class UAkAudioNode Function PostAmbientAudioNode *********************************

// ********** Begin Class UAkAudioNode Function PostAudioNode **************************************
struct Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics
{
	struct AkAudioNode_eventPostAudioNode_Parms
	{
		UAkGameObject* GameObject;
		bool bNewInstance;
		bool bPlayImmediately;
		FAkDynamicSequenceTransition Transition;
		UAkDynamicSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AkAudioNode" },
		{ "CPP_Default_bNewInstance", "false" },
		{ "CPP_Default_bPlayImmediately", "true" },
		{ "CPP_Default_Transition", "()" },
		{ "ModuleRelativePath", "Classes/AkAudioNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameObject_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostAudioNode constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObject;
	static void NewProp_bNewInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInstance;
	static void NewProp_bPlayImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayImmediately;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAudioNode constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAudioNode Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_GameObject = { "GameObject", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioNode_eventPostAudioNode_Parms, GameObject), Z_Construct_UClass_UAkGameObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameObject_MetaData), NewProp_GameObject_MetaData) };
void Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_bNewInstance_SetBit(void* Obj)
{
	((AkAudioNode_eventPostAudioNode_Parms*)Obj)->bNewInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_bNewInstance = { "bNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAudioNode_eventPostAudioNode_Parms), &Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_bNewInstance_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_bPlayImmediately_SetBit(void* Obj)
{
	((AkAudioNode_eventPostAudioNode_Parms*)Obj)->bPlayImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_bPlayImmediately = { "bPlayImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAudioNode_eventPostAudioNode_Parms), &Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_bPlayImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioNode_eventPostAudioNode_Parms, Transition), Z_Construct_UScriptStruct_FAkDynamicSequenceTransition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transition_MetaData), NewProp_Transition_MetaData) }; // 2371024039
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioNode_eventPostAudioNode_Parms, ReturnValue), Z_Construct_UClass_UAkDynamicSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_GameObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_bNewInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_bPlayImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_Transition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::PropPointers) < 2048);
// ********** End Function PostAudioNode Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkAudioNode, nullptr, "PostAudioNode", 	Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::AkAudioNode_eventPostAudioNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::AkAudioNode_eventPostAudioNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioNode_PostAudioNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioNode_PostAudioNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioNode::execPostAudioNode)
{
	P_GET_OBJECT(UAkGameObject,Z_Param_GameObject);
	P_GET_UBOOL(Z_Param_bNewInstance);
	P_GET_UBOOL(Z_Param_bPlayImmediately);
	P_GET_STRUCT(FAkDynamicSequenceTransition,Z_Param_Transition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkDynamicSequence**)Z_Param__Result=P_THIS->PostAudioNode(Z_Param_GameObject,Z_Param_bNewInstance,Z_Param_bPlayImmediately,Z_Param_Transition);
	P_NATIVE_END;
}
// ********** End Class UAkAudioNode Function PostAudioNode ****************************************

// ********** Begin Class UAkAudioNode *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAudioNode;
UClass* UAkAudioNode::GetPrivateStaticClass()
{
	using TClass = UAkAudioNode;
	if (!Z_Registration_Info_UClass_UAkAudioNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkAudioNode"),
			Z_Registration_Info_UClass_UAkAudioNode.InnerSingleton,
			StaticRegisterNativesUAkAudioNode,
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
	return Z_Registration_Info_UClass_UAkAudioNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkAudioNode_NoRegister()
{
	return UAkAudioNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkAudioNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wwise Audio Node.\n *\n * This is typically provided by UAkDialogueEvent::Resolve for Dialogue Events, and are not loaded by traditional serialization.\n *\n * These can be enqueued into a UAkDynamicSequence through the UAkDynamicSequencePlaylist object.\n */" },
#endif
		{ "IncludePath", "AkAudioNode.h" },
		{ "ModuleRelativePath", "Classes/AkAudioNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Audio Node.\n\nThis is typically provided by UAkDialogueEvent::Resolve for Dialogue Events, and are not loaded by traditional serialization.\n\nThese can be enqueued into a UAkDynamicSequence through the UAkDynamicSequencePlaylist object." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayingPreview_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkAudioNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodeInfo_MetaData[] = {
		{ "Category", "AkAudioNode" },
		{ "ModuleRelativePath", "Classes/AkAudioNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardCodedSoundBanks_MetaData[] = {
		{ "Category", "AkAudioNode" },
		{ "ModuleRelativePath", "Classes/AkAudioNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardCodedMedia_MetaData[] = {
		{ "Category", "AkAudioNode" },
		{ "ModuleRelativePath", "Classes/AkAudioNode.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodeCookedData_MetaData[] = {
		{ "Category", "AkAudioNode" },
		{ "ModuleRelativePath", "Classes/AkAudioNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAudioNode constinit property declarations *****************************
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingPreview;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioNodeInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HardCodedSoundBanks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedMedia_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HardCodedMedia;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioNodeCookedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkAudioNode constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PostAmbientAudioNode"), .Pointer = &UAkAudioNode::execPostAmbientAudioNode },
		{ .NameUTF8 = UTF8TEXT("PostAudioNode"), .Pointer = &UAkAudioNode::execPostAudioNode },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAudioNode_PostAmbientAudioNode, "PostAmbientAudioNode" }, // 577726265
		{ &Z_Construct_UFunction_UAkAudioNode_PostAudioNode, "PostAudioNode" }, // 1434941949
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkAudioNode_Statics

// ********** Begin Class UAkAudioNode Property Definitions ****************************************
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioNode_Statics::NewProp_PlayingPreview = { "PlayingPreview", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioNode, PlayingPreview), Z_Construct_UClass_UAkDynamicSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayingPreview_MetaData), NewProp_PlayingPreview_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAudioNode_Statics::NewProp_AudioNodeInfo = { "AudioNodeInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioNode, AudioNodeInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioNodeInfo_MetaData), NewProp_AudioNodeInfo_MetaData) }; // 2762036770
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkAudioNode_Statics::NewProp_HardCodedSoundBanks_Inner = { "HardCodedSoundBanks", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAudioNode_Statics::NewProp_HardCodedSoundBanks = { "HardCodedSoundBanks", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioNode, HardCodedSoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardCodedSoundBanks_MetaData), NewProp_HardCodedSoundBanks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkAudioNode_Statics::NewProp_HardCodedMedia_Inner = { "HardCodedMedia", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAudioNode_Statics::NewProp_HardCodedMedia = { "HardCodedMedia", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioNode, HardCodedMedia), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardCodedMedia_MetaData), NewProp_HardCodedMedia_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAudioNode_Statics::NewProp_AudioNodeCookedData = { "AudioNodeCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioNode, AudioNodeCookedData), Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioNodeCookedData_MetaData), NewProp_AudioNodeCookedData_MetaData) }; // 3386286980
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioNode_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioNode_Statics::NewProp_PlayingPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioNode_Statics::NewProp_AudioNodeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioNode_Statics::NewProp_HardCodedSoundBanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioNode_Statics::NewProp_HardCodedSoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioNode_Statics::NewProp_HardCodedMedia_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioNode_Statics::NewProp_HardCodedMedia,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioNode_Statics::NewProp_AudioNodeCookedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioNode_Statics::PropPointers) < 2048);
// ********** End Class UAkAudioNode Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UAkAudioNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioNode_Statics::ClassParams = {
	&UAkAudioNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkAudioNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioNode_Statics::Class_MetaDataParams)
};
void UAkAudioNode::StaticRegisterNativesUAkAudioNode()
{
	UClass* Class = UAkAudioNode::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAkAudioNode_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAkAudioNode()
{
	if (!Z_Registration_Info_UClass_UAkAudioNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioNode.OuterSingleton, Z_Construct_UClass_UAkAudioNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioNode.OuterSingleton;
}
UAkAudioNode::UAkAudioNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAudioNode);
UAkAudioNode::~UAkAudioNode() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioNode)
// ********** End Class UAkAudioNode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioNode, UAkAudioNode::StaticClass, TEXT("UAkAudioNode"), &Z_Registration_Info_UClass_UAkAudioNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioNode), 157784936U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h__Script_AkAudio_2452881{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
