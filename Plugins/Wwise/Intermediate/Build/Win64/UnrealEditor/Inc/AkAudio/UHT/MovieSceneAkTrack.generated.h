// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneAkTrack.h"

#ifdef AKAUDIO_MovieSceneAkTrack_generated_h
#error "MovieSceneAkTrack.generated.h already included, missing '#pragma once' in MovieSceneAkTrack.h"
#endif
#define AKAUDIO_MovieSceneAkTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneAkTrack *******************************************************
struct Z_Construct_UClass_UMovieSceneAkTrack_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAkTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAkTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UMovieSceneAkTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAkTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UMovieSceneAkTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAkTrack)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AKAUDIO_API UMovieSceneAkTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAkTrack(UMovieSceneAkTrack&&) = delete; \
	UMovieSceneAkTrack(const UMovieSceneAkTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AKAUDIO_API, UMovieSceneAkTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAkTrack); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAkTrack) \
	AKAUDIO_API virtual ~UMovieSceneAkTrack();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_30_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_34_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAkTrack;

// ********** End Class UMovieSceneAkTrack *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
