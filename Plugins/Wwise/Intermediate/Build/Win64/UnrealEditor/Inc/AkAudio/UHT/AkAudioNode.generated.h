// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAudioNode.h"

#ifdef AKAUDIO_AkAudioNode_generated_h
#error "AkAudioNode.generated.h already included, missing '#pragma once' in AkAudioNode.h"
#endif
#define AKAUDIO_AkAudioNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkDynamicSequence;
class UAkGameObject;
struct FAkDynamicSequenceTransition;

// ********** Begin Class UAkAudioNode *************************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPostAmbientAudioNode); \
	DECLARE_FUNCTION(execPostAudioNode);


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioNode, NO_API)


struct Z_Construct_UClass_UAkAudioNode_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioNode_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAudioNode(); \
	friend struct ::Z_Construct_UClass_UAkAudioNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkAudioNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkAudioNode, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkAudioNode_NoRegister) \
	DECLARE_SERIALIZER(UAkAudioNode) \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h_34_ARCHIVESERIALIZER


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAudioNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkAudioNode(UAkAudioNode&&) = delete; \
	UAkAudioNode(const UAkAudioNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioNode) \
	NO_API virtual ~UAkAudioNode();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h_31_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h_34_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkAudioNode;

// ********** End Class UAkAudioNode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
