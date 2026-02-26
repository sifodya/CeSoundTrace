// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkLateReverbComponent.h"

#ifdef AKAUDIO_AkLateReverbComponent_generated_h
#error "AkLateReverbComponent.generated.h already included, missing '#pragma once' in AkLateReverbComponent.h"
#endif
#define AKAUDIO_AkLateReverbComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAcousticTextureSetComponent;

// ********** Begin Class UAkLateReverbComponent ***************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAssociateAkTextureSetComponent); \
	DECLARE_FUNCTION(execSetAutoAssignAuxBus);


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkLateReverbComponent, NO_API)


struct Z_Construct_UClass_UAkLateReverbComponent_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkLateReverbComponent(); \
	friend struct ::Z_Construct_UClass_UAkLateReverbComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkLateReverbComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkLateReverbComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkLateReverbComponent_NoRegister) \
	DECLARE_SERIALIZER(UAkLateReverbComponent) \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_ARCHIVESERIALIZER


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkLateReverbComponent(UAkLateReverbComponent&&) = delete; \
	UAkLateReverbComponent(const UAkLateReverbComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkLateReverbComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkLateReverbComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkLateReverbComponent) \
	NO_API virtual ~UAkLateReverbComponent();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_31_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkLateReverbComponent;

// ********** End Class UAkLateReverbComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
