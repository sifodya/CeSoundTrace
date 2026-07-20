// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAudioDeviceShareSet.h"

#ifdef AKAUDIO_AkAudioDeviceShareSet_generated_h
#error "AkAudioDeviceShareSet.generated.h already included, missing '#pragma once' in AkAudioDeviceShareSet.h"
#endif
#define AKAUDIO_AkAudioDeviceShareSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAkAudioDeviceShareSet ***************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioDeviceShareSet, NO_API)


struct Z_Construct_UClass_UAkAudioDeviceShareSet_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSet_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAudioDeviceShareSet(); \
	friend struct ::Z_Construct_UClass_UAkAudioDeviceShareSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkAudioDeviceShareSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkAudioDeviceShareSet, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkAudioDeviceShareSet_NoRegister) \
	DECLARE_SERIALIZER(UAkAudioDeviceShareSet) \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_31_ARCHIVESERIALIZER


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAudioDeviceShareSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkAudioDeviceShareSet(UAkAudioDeviceShareSet&&) = delete; \
	UAkAudioDeviceShareSet(const UAkAudioDeviceShareSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioDeviceShareSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioDeviceShareSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioDeviceShareSet) \
	NO_API virtual ~UAkAudioDeviceShareSet();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_28_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_31_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkAudioDeviceShareSet;

// ********** End Class UAkAudioDeviceShareSet *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
