// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAuxBus.h"

#ifdef AKAUDIO_AkAuxBus_generated_h
#error "AkAuxBus.generated.h already included, missing '#pragma once' in AkAuxBus.h"
#endif
#define AKAUDIO_AkAuxBus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAkAuxBus ****************************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_35_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAuxBus, NO_API)


struct Z_Construct_UClass_UAkAuxBus_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAuxBus(); \
	friend struct ::Z_Construct_UClass_UAkAuxBus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkAuxBus_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkAuxBus, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkAuxBus_NoRegister) \
	DECLARE_SERIALIZER(UAkAuxBus) \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_35_ARCHIVESERIALIZER


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAuxBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkAuxBus(UAkAuxBus&&) = delete; \
	UAkAuxBus(const UAkAuxBus&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAuxBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAuxBus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAuxBus) \
	NO_API virtual ~UAkAuxBus();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_32_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_35_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkAuxBus;

// ********** End Class UAkAuxBus ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
