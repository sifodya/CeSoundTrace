// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAudioInputComponent.h"

#ifdef AKAUDIO_AkAudioInputComponent_generated_h
#error "AkAudioInputComponent.generated.h already included, missing '#pragma once' in AkAudioInputComponent.h"
#endif
#define AKAUDIO_AkAudioInputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAkAudioInputComponent ***************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPostAssociatedAudioInputEvent);


struct Z_Construct_UClass_UAkAudioInputComponent_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAudioInputComponent(); \
	friend struct ::Z_Construct_UClass_UAkAudioInputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkAudioInputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkAudioInputComponent, UAkComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkAudioInputComponent_NoRegister) \
	DECLARE_SERIALIZER(UAkAudioInputComponent)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkAudioInputComponent(UAkAudioInputComponent&&) = delete; \
	UAkAudioInputComponent(const UAkAudioInputComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioInputComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioInputComponent) \
	NO_API virtual ~UAkAudioInputComponent();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_33_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkAudioInputComponent;

// ********** End Class UAkAudioInputComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
