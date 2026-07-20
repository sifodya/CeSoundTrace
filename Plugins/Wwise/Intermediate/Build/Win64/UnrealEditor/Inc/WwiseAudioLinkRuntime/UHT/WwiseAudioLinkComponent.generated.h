// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/AudioLink/WwiseAudioLinkComponent.h"

#ifdef WWISEAUDIOLINKRUNTIME_WwiseAudioLinkComponent_generated_h
#error "WwiseAudioLinkComponent.generated.h already included, missing '#pragma once' in WwiseAudioLinkComponent.h"
#endif
#define WWISEAUDIOLINKRUNTIME_WwiseAudioLinkComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWwiseAudioLinkComponent *************************************************
struct Z_Construct_UClass_UWwiseAudioLinkComponent_Statics;
WWISEAUDIOLINKRUNTIME_API UClass* Z_Construct_UClass_UWwiseAudioLinkComponent_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseAudioLinkComponent(); \
	friend struct ::Z_Construct_UClass_UWwiseAudioLinkComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WWISEAUDIOLINKRUNTIME_API UClass* ::Z_Construct_UClass_UWwiseAudioLinkComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWwiseAudioLinkComponent, UAkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WwiseAudioLinkRuntime"), Z_Construct_UClass_UWwiseAudioLinkComponent_NoRegister) \
	DECLARE_SERIALIZER(UWwiseAudioLinkComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UWwiseAudioLinkComponent*>(this); }


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWwiseAudioLinkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWwiseAudioLinkComponent(UWwiseAudioLinkComponent&&) = delete; \
	UWwiseAudioLinkComponent(const UWwiseAudioLinkComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseAudioLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseAudioLinkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWwiseAudioLinkComponent) \
	NO_API virtual ~UWwiseAudioLinkComponent();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_29_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWwiseAudioLinkComponent;

// ********** End Class UWwiseAudioLinkComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
