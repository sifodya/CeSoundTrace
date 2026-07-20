// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UAkEventAnimNotify.h"

#ifdef AKAUDIO_UAkEventAnimNotify_generated_h
#error "UAkEventAnimNotify.generated.h already included, missing '#pragma once' in UAkEventAnimNotify.h"
#endif
#define AKAUDIO_UAkEventAnimNotify_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAkEventAnimNotify *******************************************************
struct Z_Construct_UClass_UAkEventAnimNotify_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkEventAnimNotify_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkEventAnimNotify(); \
	friend struct ::Z_Construct_UClass_UAkEventAnimNotify_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkEventAnimNotify_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkEventAnimNotify, UAnimNotify, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkEventAnimNotify_NoRegister) \
	DECLARE_SERIALIZER(UAkEventAnimNotify)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkEventAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkEventAnimNotify(UAkEventAnimNotify&&) = delete; \
	UAkEventAnimNotify(const UAkEventAnimNotify&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkEventAnimNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkEventAnimNotify); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkEventAnimNotify) \
	NO_API virtual ~UAkEventAnimNotify();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h_27_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h_30_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkEventAnimNotify;

// ********** End Class UAkEventAnimNotify *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_UAkEventAnimNotify_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
