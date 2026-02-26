// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkDialogueEvent.h"

#ifdef AKAUDIO_AkDialogueEvent_generated_h
#error "AkDialogueEvent.generated.h already included, missing '#pragma once' in AkDialogueEvent.h"
#endif
#define AKAUDIO_AkDialogueEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioNode;
class UAkDynamicSequence;
class UAkGameObject;
class UAkGroupValue;
struct FAkDynamicSequenceTransition;

// ********** Begin Class UAkDialogueEvent *********************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPostAmbientDialogueEvent); \
	DECLARE_FUNCTION(execPostDialogueEvent); \
	DECLARE_FUNCTION(execFetchAudioNodeObject); \
	DECLARE_FUNCTION(execResolveOrderedArguments); \
	DECLARE_FUNCTION(execResolveArguments);


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h_41_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkDialogueEvent, NO_API)


struct Z_Construct_UClass_UAkDialogueEvent_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkDialogueEvent_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkDialogueEvent(); \
	friend struct ::Z_Construct_UClass_UAkDialogueEvent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkDialogueEvent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkDialogueEvent, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkDialogueEvent_NoRegister) \
	DECLARE_SERIALIZER(UAkDialogueEvent) \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h_41_ARCHIVESERIALIZER


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkDialogueEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkDialogueEvent(UAkDialogueEvent&&) = delete; \
	UAkDialogueEvent(const UAkDialogueEvent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkDialogueEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkDialogueEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkDialogueEvent) \
	NO_API virtual ~UAkDialogueEvent();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h_38_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h_41_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkDialogueEvent;

// ********** End Class UAkDialogueEvent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDialogueEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
