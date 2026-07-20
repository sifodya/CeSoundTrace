// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkDynamicSequenceBlueprintFunctionLibrary.h"

#ifdef AKAUDIO_AkDynamicSequenceBlueprintFunctionLibrary_generated_h
#error "AkDynamicSequenceBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AkDynamicSequenceBlueprintFunctionLibrary.h"
#endif
#define AKAUDIO_AkDynamicSequenceBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioNode;
class UAkDialogueEvent;
class UAkDynamicSequencePlaylistItem;
class UAkGroupValue;
class UObject;

// ********** Begin Class UAkDynamicSequenceBlueprintFunctionLibrary *******************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateDynamicSequencePlaylistItemFromDialogueEvent); \
	DECLARE_FUNCTION(execCreateDynamicSequencePlaylistItemFromAudioNode);


struct Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkDynamicSequenceBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkDynamicSequenceBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkDynamicSequenceBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAkDynamicSequenceBlueprintFunctionLibrary)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkDynamicSequenceBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkDynamicSequenceBlueprintFunctionLibrary(UAkDynamicSequenceBlueprintFunctionLibrary&&) = delete; \
	UAkDynamicSequenceBlueprintFunctionLibrary(const UAkDynamicSequenceBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkDynamicSequenceBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkDynamicSequenceBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkDynamicSequenceBlueprintFunctionLibrary) \
	NO_API virtual ~UAkDynamicSequenceBlueprintFunctionLibrary();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h_32_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h_35_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkDynamicSequenceBlueprintFunctionLibrary;

// ********** End Class UAkDynamicSequenceBlueprintFunctionLibrary *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequenceBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
