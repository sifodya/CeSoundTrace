// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAcousticTexture.h"

#ifdef AKAUDIO_AkAcousticTexture_generated_h
#error "AkAcousticTexture.generated.h already included, missing '#pragma once' in AkAcousticTexture.h"
#endif
#define AKAUDIO_AkAcousticTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAkAcousticTexture *******************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAcousticTexture, NO_API)


struct Z_Construct_UClass_UAkAcousticTexture_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAcousticTexture(); \
	friend struct ::Z_Construct_UClass_UAkAcousticTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkAcousticTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkAcousticTexture, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkAcousticTexture_NoRegister) \
	DECLARE_SERIALIZER(UAkAcousticTexture) \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_30_ARCHIVESERIALIZER


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAcousticTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkAcousticTexture(UAkAcousticTexture&&) = delete; \
	UAkAcousticTexture(const UAkAcousticTexture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAcousticTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAcousticTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAcousticTexture) \
	NO_API virtual ~UAkAcousticTexture();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_27_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_30_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkAcousticTexture;

// ********** End Class UAkAcousticTexture *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
