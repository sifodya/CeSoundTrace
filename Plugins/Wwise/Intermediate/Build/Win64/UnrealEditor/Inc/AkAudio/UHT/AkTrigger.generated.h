// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkTrigger.h"

#ifdef AKAUDIO_AkTrigger_generated_h
#error "AkTrigger.generated.h already included, missing '#pragma once' in AkTrigger.h"
#endif
#define AKAUDIO_AkTrigger_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAkTrigger ***************************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkTrigger, NO_API)


struct Z_Construct_UClass_UAkTrigger_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkTrigger(); \
	friend struct ::Z_Construct_UClass_UAkTrigger_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkTrigger_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkTrigger, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkTrigger_NoRegister) \
	DECLARE_SERIALIZER(UAkTrigger) \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_ARCHIVESERIALIZER


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkTrigger(UAkTrigger&&) = delete; \
	UAkTrigger(const UAkTrigger&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkTrigger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkTrigger) \
	NO_API virtual ~UAkTrigger();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_28_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkTrigger;

// ********** End Class UAkTrigger *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkTrigger_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
