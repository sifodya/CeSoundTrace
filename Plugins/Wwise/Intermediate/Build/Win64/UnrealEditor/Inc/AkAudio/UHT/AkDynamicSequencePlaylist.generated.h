// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkDynamicSequencePlaylist.h"

#ifdef AKAUDIO_AkDynamicSequencePlaylist_generated_h
#error "AkDynamicSequencePlaylist.generated.h already included, missing '#pragma once' in AkDynamicSequencePlaylist.h"
#endif
#define AKAUDIO_AkDynamicSequencePlaylist_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkDynamicSequencePlaylistItem;

// ********** Begin Class UAkDynamicSequencePlaylistItem *******************************************
struct Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkDynamicSequencePlaylistItem(); \
	friend struct ::Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkDynamicSequencePlaylistItem, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister) \
	DECLARE_SERIALIZER(UAkDynamicSequencePlaylistItem)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkDynamicSequencePlaylistItem(UAkDynamicSequencePlaylistItem&&) = delete; \
	UAkDynamicSequencePlaylistItem(const UAkDynamicSequencePlaylistItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkDynamicSequencePlaylistItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkDynamicSequencePlaylistItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkDynamicSequencePlaylistItem) \
	NO_API virtual ~UAkDynamicSequencePlaylistItem();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_26_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_29_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkDynamicSequencePlaylistItem;

// ********** End Class UAkDynamicSequencePlaylistItem *********************************************

// ********** Begin Class UAkDynamicSequencePlaylist ***********************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOverwriteAndCommit); \
	DECLARE_FUNCTION(execAddAndCommit); \
	DECLARE_FUNCTION(execCommitWithoutChanges); \
	DECLARE_FUNCTION(execCommit);


struct Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequencePlaylist_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkDynamicSequencePlaylist(); \
	friend struct ::Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkDynamicSequencePlaylist_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkDynamicSequencePlaylist, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkDynamicSequencePlaylist_NoRegister) \
	DECLARE_SERIALIZER(UAkDynamicSequencePlaylist)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkDynamicSequencePlaylist(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkDynamicSequencePlaylist(UAkDynamicSequencePlaylist&&) = delete; \
	UAkDynamicSequencePlaylist(const UAkDynamicSequencePlaylist&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkDynamicSequencePlaylist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkDynamicSequencePlaylist); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkDynamicSequencePlaylist) \
	NO_API virtual ~UAkDynamicSequencePlaylist();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_49_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_52_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkDynamicSequencePlaylist;

// ********** End Class UAkDynamicSequencePlaylist *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
