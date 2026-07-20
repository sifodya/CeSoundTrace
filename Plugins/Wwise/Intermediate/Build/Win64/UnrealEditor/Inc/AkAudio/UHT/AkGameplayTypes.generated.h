// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkGameplayTypes.h"

#ifdef AKAUDIO_AkGameplayTypes_generated_h
#error "AkGameplayTypes.generated.h already included, missing '#pragma once' in AkGameplayTypes.h"
#endif
#define AKAUDIO_AkGameplayTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkCallbackInfo;
enum class EAkCallbackType : uint8;
enum class EAkMidiEventType : uint8;
enum class EAkResult : uint8;
struct FAkMidiCc;
struct FAkMidiChannelAftertouch;
struct FAkMidiGeneric;
struct FAkMidiNoteAftertouch;
struct FAkMidiNoteOnOff;
struct FAkMidiPitchBend;
struct FAkMidiProgramChange;

// ********** Begin Class UAkCallbackInfo **********************************************************
struct Z_Construct_UClass_UAkCallbackInfo_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_487_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkCallbackInfo(); \
	friend struct ::Z_Construct_UClass_UAkCallbackInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkCallbackInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkCallbackInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkCallbackInfo_NoRegister) \
	DECLARE_SERIALIZER(UAkCallbackInfo)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_487_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkCallbackInfo(UAkCallbackInfo&&) = delete; \
	UAkCallbackInfo(const UAkCallbackInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkCallbackInfo) \
	NO_API virtual ~UAkCallbackInfo();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_484_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_487_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_487_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_487_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkCallbackInfo;

// ********** End Class UAkCallbackInfo ************************************************************

// ********** Begin ScriptStruct FAkChannelMask ****************************************************
struct Z_Construct_UScriptStruct_FAkChannelMask_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_502_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkChannelMask_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


struct FAkChannelMask;
// ********** End ScriptStruct FAkChannelMask ******************************************************

// ********** Begin ScriptStruct FAkOutputSettings *************************************************
struct Z_Construct_UScriptStruct_FAkOutputSettings_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_511_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkOutputSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


struct FAkOutputSettings;
// ********** End ScriptStruct FAkOutputSettings ***************************************************

// ********** Begin Class UAkEventCallbackInfo *****************************************************
struct Z_Construct_UClass_UAkEventCallbackInfo_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_533_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkEventCallbackInfo(); \
	friend struct ::Z_Construct_UClass_UAkEventCallbackInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkEventCallbackInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkEventCallbackInfo, UAkCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkEventCallbackInfo_NoRegister) \
	DECLARE_SERIALIZER(UAkEventCallbackInfo)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_533_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkEventCallbackInfo(UAkEventCallbackInfo&&) = delete; \
	UAkEventCallbackInfo(const UAkEventCallbackInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkEventCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkEventCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkEventCallbackInfo) \
	NO_API virtual ~UAkEventCallbackInfo();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_530_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_533_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_533_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_533_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkEventCallbackInfo;

// ********** End Class UAkEventCallbackInfo *******************************************************

// ********** Begin Class UAkDynamicSequenceItemCallbackInfo ***************************************
struct Z_Construct_UClass_UAkDynamicSequenceItemCallbackInfo_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequenceItemCallbackInfo_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_554_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkDynamicSequenceItemCallbackInfo(); \
	friend struct ::Z_Construct_UClass_UAkDynamicSequenceItemCallbackInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkDynamicSequenceItemCallbackInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkDynamicSequenceItemCallbackInfo, UAkCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkDynamicSequenceItemCallbackInfo_NoRegister) \
	DECLARE_SERIALIZER(UAkDynamicSequenceItemCallbackInfo)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_554_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkDynamicSequenceItemCallbackInfo(UAkDynamicSequenceItemCallbackInfo&&) = delete; \
	UAkDynamicSequenceItemCallbackInfo(const UAkDynamicSequenceItemCallbackInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkDynamicSequenceItemCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkDynamicSequenceItemCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkDynamicSequenceItemCallbackInfo) \
	NO_API virtual ~UAkDynamicSequenceItemCallbackInfo();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_551_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_554_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_554_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_554_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkDynamicSequenceItemCallbackInfo;

// ********** End Class UAkDynamicSequenceItemCallbackInfo *****************************************

// ********** Begin ScriptStruct FAkMidiEventBase **************************************************
struct Z_Construct_UScriptStruct_FAkMidiEventBase_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_704_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkMidiEventBase_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


struct FAkMidiEventBase;
// ********** End ScriptStruct FAkMidiEventBase ****************************************************

// ********** Begin ScriptStruct FAkMidiGeneric ****************************************************
struct Z_Construct_UScriptStruct_FAkMidiGeneric_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkMidiGeneric_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


struct FAkMidiGeneric;
// ********** End ScriptStruct FAkMidiGeneric ******************************************************

// ********** Begin ScriptStruct FAkMidiNoteOnOff **************************************************
struct Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_742_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


struct FAkMidiNoteOnOff;
// ********** End ScriptStruct FAkMidiNoteOnOff ****************************************************

// ********** Begin ScriptStruct FAkMidiCc *********************************************************
struct Z_Construct_UScriptStruct_FAkMidiCc_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_761_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkMidiCc_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


struct FAkMidiCc;
// ********** End ScriptStruct FAkMidiCc ***********************************************************

// ********** Begin ScriptStruct FAkMidiPitchBend **************************************************
struct Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_780_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


struct FAkMidiPitchBend;
// ********** End ScriptStruct FAkMidiPitchBend ****************************************************

// ********** Begin ScriptStruct FAkMidiNoteAftertouch *********************************************
struct Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_803_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


struct FAkMidiNoteAftertouch;
// ********** End ScriptStruct FAkMidiNoteAftertouch ***********************************************

// ********** Begin ScriptStruct FAkMidiChannelAftertouch ******************************************
struct Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_822_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


struct FAkMidiChannelAftertouch;
// ********** End ScriptStruct FAkMidiChannelAftertouch ********************************************

// ********** Begin ScriptStruct FAkMidiProgramChange **********************************************
struct Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_837_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


struct FAkMidiProgramChange;
// ********** End ScriptStruct FAkMidiProgramChange ************************************************

// ********** Begin Class UAkMIDIEventCallbackInfo *************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_856_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetProgramChange); \
	DECLARE_FUNCTION(execGetChannelAftertouch); \
	DECLARE_FUNCTION(execGetNoteAftertouch); \
	DECLARE_FUNCTION(execGetPitchBend); \
	DECLARE_FUNCTION(execGetCc); \
	DECLARE_FUNCTION(execGetNoteOff); \
	DECLARE_FUNCTION(execGetNoteOn); \
	DECLARE_FUNCTION(execGetGeneric); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetType);


struct Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_856_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkMIDIEventCallbackInfo(); \
	friend struct ::Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkMIDIEventCallbackInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkMIDIEventCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkMIDIEventCallbackInfo_NoRegister) \
	DECLARE_SERIALIZER(UAkMIDIEventCallbackInfo)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_856_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkMIDIEventCallbackInfo(UAkMIDIEventCallbackInfo&&) = delete; \
	UAkMIDIEventCallbackInfo(const UAkMIDIEventCallbackInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMIDIEventCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMIDIEventCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMIDIEventCallbackInfo) \
	NO_API virtual ~UAkMIDIEventCallbackInfo();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_853_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_856_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_856_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_856_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_856_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkMIDIEventCallbackInfo;

// ********** End Class UAkMIDIEventCallbackInfo ***************************************************

// ********** Begin Class UAkMarkerCallbackInfo ****************************************************
struct Z_Construct_UClass_UAkMarkerCallbackInfo_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkMarkerCallbackInfo_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_904_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkMarkerCallbackInfo(); \
	friend struct ::Z_Construct_UClass_UAkMarkerCallbackInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkMarkerCallbackInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkMarkerCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkMarkerCallbackInfo_NoRegister) \
	DECLARE_SERIALIZER(UAkMarkerCallbackInfo)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_904_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkMarkerCallbackInfo(UAkMarkerCallbackInfo&&) = delete; \
	UAkMarkerCallbackInfo(const UAkMarkerCallbackInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMarkerCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMarkerCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMarkerCallbackInfo) \
	NO_API virtual ~UAkMarkerCallbackInfo();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_901_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_904_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_904_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_904_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkMarkerCallbackInfo;

// ********** End Class UAkMarkerCallbackInfo ******************************************************

// ********** Begin Class UAkDurationCallbackInfo **************************************************
struct Z_Construct_UClass_UAkDurationCallbackInfo_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkDurationCallbackInfo_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_926_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkDurationCallbackInfo(); \
	friend struct ::Z_Construct_UClass_UAkDurationCallbackInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkDurationCallbackInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkDurationCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkDurationCallbackInfo_NoRegister) \
	DECLARE_SERIALIZER(UAkDurationCallbackInfo)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_926_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkDurationCallbackInfo(UAkDurationCallbackInfo&&) = delete; \
	UAkDurationCallbackInfo(const UAkDurationCallbackInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkDurationCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkDurationCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkDurationCallbackInfo) \
	NO_API virtual ~UAkDurationCallbackInfo();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_923_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_926_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_926_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_926_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkDurationCallbackInfo;

// ********** End Class UAkDurationCallbackInfo ****************************************************

// ********** Begin ScriptStruct FAkSegmentInfo ****************************************************
struct Z_Construct_UScriptStruct_FAkSegmentInfo_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_951_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkSegmentInfo_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


struct FAkSegmentInfo;
// ********** End ScriptStruct FAkSegmentInfo ******************************************************

// ********** Begin Class UAkMusicSyncCallbackInfo *************************************************
struct Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_997_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkMusicSyncCallbackInfo(); \
	friend struct ::Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkMusicSyncCallbackInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkMusicSyncCallbackInfo, UAkCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkMusicSyncCallbackInfo_NoRegister) \
	DECLARE_SERIALIZER(UAkMusicSyncCallbackInfo)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_997_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkMusicSyncCallbackInfo(UAkMusicSyncCallbackInfo&&) = delete; \
	UAkMusicSyncCallbackInfo(const UAkMusicSyncCallbackInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMusicSyncCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMusicSyncCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMusicSyncCallbackInfo) \
	NO_API virtual ~UAkMusicSyncCallbackInfo();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_994_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_997_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_997_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_997_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkMusicSyncCallbackInfo;

// ********** End Class UAkMusicSyncCallbackInfo ***************************************************

// ********** Begin Delegate FOnAkPostEventCallback ************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_1016_DELEGATE \
AKAUDIO_API void FOnAkPostEventCallback_DelegateWrapper(const FScriptDelegate& OnAkPostEventCallback, EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);


// ********** End Delegate FOnAkPostEventCallback **************************************************

// ********** Begin Delegate FOnAkBankCallback *****************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_1017_DELEGATE \
AKAUDIO_API void FOnAkBankCallback_DelegateWrapper(const FScriptDelegate& OnAkBankCallback, EAkResult Result);


// ********** End Delegate FOnAkBankCallback *******************************************************

// ********** Begin Delegate FOnSetCurrentAudioCultureCallback *************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_1018_DELEGATE \
AKAUDIO_API void FOnSetCurrentAudioCultureCallback_DelegateWrapper(const FScriptDelegate& OnSetCurrentAudioCultureCallback, bool Succeeded);


// ********** End Delegate FOnSetCurrentAudioCultureCallback ***************************************

// ********** Begin ScriptStruct FAkExternalSourceInfo *********************************************
struct Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_1180_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


struct FAkExternalSourceInfo;
// ********** End ScriptStruct FAkExternalSourceInfo ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h

// ********** Begin Enum EAkAudioContext ***********************************************************
#define FOREACH_ENUM_EAKAUDIOCONTEXT(op) \
	op(EAkAudioContext::Foreign) \
	op(EAkAudioContext::GameplayAudio) \
	op(EAkAudioContext::EditorAudio) \
	op(EAkAudioContext::AlwaysActive) 

enum class EAkAudioContext : uint8;
template<> struct TIsUEnumClass<EAkAudioContext> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAudioContext>();
// ********** End Enum EAkAudioContext *************************************************************

// ********** Begin Enum EPanningRule **************************************************************
#define FOREACH_ENUM_EPANNINGRULE(op) \
	op(EPanningRule::PanningRule_Speakers) \
	op(EPanningRule::PanningRule_Headphones) \
	op(EPanningRule::Last) 

enum class EPanningRule : uint8;
template<> struct TIsUEnumClass<EPanningRule> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EPanningRule>();
// ********** End Enum EPanningRule ****************************************************************

// ********** Begin Enum EAkAcousticPortalState ****************************************************
#define FOREACH_ENUM_EAKACOUSTICPORTALSTATE(op) \
	op(EAkAcousticPortalState::Closed) \
	op(EAkAcousticPortalState::Open) 

enum class EAkAcousticPortalState : uint8;
template<> struct TIsUEnumClass<EAkAcousticPortalState> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAcousticPortalState>();
// ********** End Enum EAkAcousticPortalState ******************************************************

// ********** Begin Enum EAkChannelConfiguration ***************************************************
#define FOREACH_ENUM_EAKCHANNELCONFIGURATION(op) \
	op(EAkChannelConfiguration::Ak_Parent) \
	op(EAkChannelConfiguration::Ak_MainMix) \
	op(EAkChannelConfiguration::Ak_Passthrough) \
	op(EAkChannelConfiguration::Ak_LFE) \
	op(EAkChannelConfiguration::AK_Audio_Objects) \
	op(EAkChannelConfiguration::Ak_1_0) \
	op(EAkChannelConfiguration::Ak_2_0) \
	op(EAkChannelConfiguration::Ak_2_1) \
	op(EAkChannelConfiguration::Ak_3_0) \
	op(EAkChannelConfiguration::Ak_3_1) \
	op(EAkChannelConfiguration::Ak_4_0) \
	op(EAkChannelConfiguration::Ak_4_1) \
	op(EAkChannelConfiguration::Ak_5_0) \
	op(EAkChannelConfiguration::Ak_5_1) \
	op(EAkChannelConfiguration::Ak_7_1) \
	op(EAkChannelConfiguration::Ak_5_1_2) \
	op(EAkChannelConfiguration::Ak_7_1_2) \
	op(EAkChannelConfiguration::Ak_7_1_4) \
	op(EAkChannelConfiguration::Ak_Auro_9_1) \
	op(EAkChannelConfiguration::Ak_Auro_10_1) \
	op(EAkChannelConfiguration::Ak_Auro_11_1) \
	op(EAkChannelConfiguration::Ak_Auro_13_1) \
	op(EAkChannelConfiguration::Ak_Ambisonics_1st_order) \
	op(EAkChannelConfiguration::Ak_Ambisonics_2nd_order) \
	op(EAkChannelConfiguration::Ak_Ambisonics_3rd_order) \
	op(EAkChannelConfiguration::Ak_Ambisonics_4th_order) \
	op(EAkChannelConfiguration::Ak_Ambisonics_5th_order) 

enum class EAkChannelConfiguration : uint8;
template<> struct TIsUEnumClass<EAkChannelConfiguration> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkChannelConfiguration>();
// ********** End Enum EAkChannelConfiguration *****************************************************

// ********** Begin Enum EAkSpeakerConfiguration ***************************************************
#define FOREACH_ENUM_EAKSPEAKERCONFIGURATION(op) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Front_Left) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Front_Right) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Front_Center) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Low_Frequency) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Back_Left) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Back_Right) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Back_Center) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Side_Left) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Side_Right) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Top) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Height_Front_Left) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Height_Front_Center) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Height_Front_Right) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Height_Back_Left) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Height_Back_Center) \
	op(EAkSpeakerConfiguration::Ak_Speaker_Height_Back_Right) 

enum class EAkSpeakerConfiguration;
template<> struct TIsUEnumClass<EAkSpeakerConfiguration> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkSpeakerConfiguration>();
// ********** End Enum EAkSpeakerConfiguration *****************************************************

// ********** Begin Enum EAkMultiPositionType ******************************************************
#define FOREACH_ENUM_EAKMULTIPOSITIONTYPE(op) \
	op(EAkMultiPositionType::SingleSource) \
	op(EAkMultiPositionType::MultiSources) \
	op(EAkMultiPositionType::MultiDirections) \
	op(EAkMultiPositionType::Last) 

enum class EAkMultiPositionType : uint8;
template<> struct TIsUEnumClass<EAkMultiPositionType> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkMultiPositionType>();
// ********** End Enum EAkMultiPositionType ********************************************************

// ********** Begin Enum EAkActionOnEventType ******************************************************
#define FOREACH_ENUM_EAKACTIONONEVENTTYPE(op) \
	op(EAkActionOnEventType::Stop) \
	op(EAkActionOnEventType::Pause) \
	op(EAkActionOnEventType::Resume) \
	op(EAkActionOnEventType::Break) \
	op(EAkActionOnEventType::ReleaseEnvelope) \
	op(EAkActionOnEventType::Last) 

enum class EAkActionOnEventType : uint8;
template<> struct TIsUEnumClass<EAkActionOnEventType> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkActionOnEventType>();
// ********** End Enum EAkActionOnEventType ********************************************************

// ********** Begin Enum EAkCurveInterpolation *****************************************************
#define FOREACH_ENUM_EAKCURVEINTERPOLATION(op) \
	op(EAkCurveInterpolation::Log3) \
	op(EAkCurveInterpolation::Sine) \
	op(EAkCurveInterpolation::Log1) \
	op(EAkCurveInterpolation::InvSCurve) \
	op(EAkCurveInterpolation::Linear) \
	op(EAkCurveInterpolation::SCurve) \
	op(EAkCurveInterpolation::Exp1) \
	op(EAkCurveInterpolation::SineRecip) \
	op(EAkCurveInterpolation::Exp3) \
	op(EAkCurveInterpolation::LastFadeCurve) \
	op(EAkCurveInterpolation::Constant) \
	op(EAkCurveInterpolation::Last) 

enum class EAkCurveInterpolation : uint8;
template<> struct TIsUEnumClass<EAkCurveInterpolation> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkCurveInterpolation>();
// ********** End Enum EAkCurveInterpolation *******************************************************

// ********** Begin Enum EAkResult *****************************************************************
#define FOREACH_ENUM_EAKRESULT(op) \
	op(EAkResult::NotImplemented) \
	op(EAkResult::Success) \
	op(EAkResult::Fail) \
	op(EAkResult::PartialSuccess) \
	op(EAkResult::NotCompatible) \
	op(EAkResult::AlreadyConnected) \
	op(EAkResult::InvalidFile) \
	op(EAkResult::AudioFileHeaderTooLarge) \
	op(EAkResult::MaxReached) \
	op(EAkResult::InvalidID) \
	op(EAkResult::IDNotFound) \
	op(EAkResult::InvalidInstanceID) \
	op(EAkResult::NoMoreData) \
	op(EAkResult::InvalidStateGroup) \
	op(EAkResult::ChildAlreadyHasAParent) \
	op(EAkResult::InvalidLanguage) \
	op(EAkResult::CannotAddItselfAsAChild) \
	op(EAkResult::InvalidParameter) \
	op(EAkResult::ElementAlreadyInList) \
	op(EAkResult::PathNotFound) \
	op(EAkResult::PathNoVertices) \
	op(EAkResult::PathNotRunning) \
	op(EAkResult::PathNotPaused) \
	op(EAkResult::PathNodeAlreadyInList) \
	op(EAkResult::PathNodeNotInList) \
	op(EAkResult::DataNeeded) \
	op(EAkResult::NoDataNeeded) \
	op(EAkResult::DataReady) \
	op(EAkResult::NoDataReady) \
	op(EAkResult::InsufficientMemory) \
	op(EAkResult::Cancelled) \
	op(EAkResult::UnknownBankID) \
	op(EAkResult::BankReadError) \
	op(EAkResult::InvalidSwitchType) \
	op(EAkResult::FormatNotReady) \
	op(EAkResult::WrongBankVersion) \
	op(EAkResult::FileNotFound) \
	op(EAkResult::DeviceNotReady) \
	op(EAkResult::BankAlreadyLoaded) \
	op(EAkResult::RenderedFX) \
	op(EAkResult::ProcessNeeded) \
	op(EAkResult::ProcessDone) \
	op(EAkResult::MemManagerNotInitialized) \
	op(EAkResult::StreamMgrNotInitialized) \
	op(EAkResult::SSEInstructionsNotSupported) \
	op(EAkResult::Busy) \
	op(EAkResult::UnsupportedChannelConfig) \
	op(EAkResult::PluginMediaNotAvailable) \
	op(EAkResult::MustBeVirtualized) \
	op(EAkResult::CommandTooLarge) \
	op(EAkResult::RejectedByFilter) \
	op(EAkResult::InvalidCustomPlatformName) \
	op(EAkResult::DLLCannotLoad) \
	op(EAkResult::DLLPathNotFound) \
	op(EAkResult::NoJavaVM) \
	op(EAkResult::OpenSLError) \
	op(EAkResult::PluginNotRegistered) \
	op(EAkResult::DataAlignmentError) \
	op(EAkResult::DeviceNotCompatible) \
	op(EAkResult::DuplicateUniqueID) \
	op(EAkResult::InitBankNotLoaded) \
	op(EAkResult::DeviceNotFound) \
	op(EAkResult::PlayingIDNotFound) \
	op(EAkResult::InvalidFloatValue) \
	op(EAkResult::FileFormatMismatch) \
	op(EAkResult::NoDistinctListener) \
	op(EAkResult::ResourceInUse) \
	op(EAkResult::InvalidBankType) \
	op(EAkResult::AlreadyInitialized) \
	op(EAkResult::NotInitialized) \
	op(EAkResult::FilePermissionError) \
	op(EAkResult::UnknownFileError) \
	op(EAkResult::TooManyConcurrentOperations) \
	op(EAkResult::InvalidFileSize) \
	op(EAkResult::Deferred) \
	op(EAkResult::FilePathTooLong) \
	op(EAkResult::Last) 

enum class EAkResult : uint8;
template<> struct TIsUEnumClass<EAkResult> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkResult>();
// ********** End Enum EAkResult *******************************************************************

// ********** Begin Enum EAkCallbackType ***********************************************************
#define FOREACH_ENUM_EAKCALLBACKTYPE(op) \
	op(EAkCallbackType::EndOfEvent) \
	op(EAkCallbackType::EndOfDynamicSequenceItem) \
	op(EAkCallbackType::Marker) \
	op(EAkCallbackType::Duration) \
	op(EAkCallbackType::Starvation) \
	op(EAkCallbackType::MusicPlayStarted) \
	op(EAkCallbackType::MusicSyncBeat) \
	op(EAkCallbackType::MusicSyncBar) \
	op(EAkCallbackType::MusicSyncEntry) \
	op(EAkCallbackType::MusicSyncExit) \
	op(EAkCallbackType::MusicSyncGrid) \
	op(EAkCallbackType::MusicSyncUserCue) \
	op(EAkCallbackType::MusicSyncPoint) \
	op(EAkCallbackType::MIDIEvent) \
	op(EAkCallbackType::Last) 

enum class EAkCallbackType : uint8;
template<> struct TIsUEnumClass<EAkCallbackType> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkCallbackType>();
// ********** End Enum EAkCallbackType *************************************************************

// ********** Begin Enum ERTPCValueType ************************************************************
#define FOREACH_ENUM_ERTPCVALUETYPE(op) \
	op(ERTPCValueType::Default) \
	op(ERTPCValueType::Global) \
	op(ERTPCValueType::GameObject) \
	op(ERTPCValueType::PlayingID) \
	op(ERTPCValueType::Unavailable) \
	op(ERTPCValueType::Last) 

enum class ERTPCValueType : uint8;
template<> struct TIsUEnumClass<ERTPCValueType> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<ERTPCValueType>();
// ********** End Enum ERTPCValueType **************************************************************

// ********** Begin Enum EAkMidiEventType **********************************************************
#define FOREACH_ENUM_EAKMIDIEVENTTYPE(op) \
	op(EAkMidiEventType::AkMidiEventTypeInvalid) \
	op(EAkMidiEventType::AkMidiEventTypeNoteOff) \
	op(EAkMidiEventType::AkMidiEventTypeNoteOn) \
	op(EAkMidiEventType::AkMidiEventTypeNoteAftertouch) \
	op(EAkMidiEventType::AkMidiEventTypeController) \
	op(EAkMidiEventType::AkMidiEventTypeProgramChange) \
	op(EAkMidiEventType::AkMidiEventTypeChannelAftertouch) \
	op(EAkMidiEventType::AkMidiEventTypePitchBend) \
	op(EAkMidiEventType::AkMidiEventTypeSysex) \
	op(EAkMidiEventType::AkMidiEventTypeEscape) \
	op(EAkMidiEventType::AkMidiEventTypeMeta) 

enum class EAkMidiEventType : uint8;
template<> struct TIsUEnumClass<EAkMidiEventType> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkMidiEventType>();
// ********** End Enum EAkMidiEventType ************************************************************

// ********** Begin Enum EAkMidiCcValues ***********************************************************
#define FOREACH_ENUM_EAKMIDICCVALUES(op) \
	op(EAkMidiCcValues::AkMidiCcBankSelectCoarse) \
	op(EAkMidiCcValues::AkMidiCcModWheelCoarse) \
	op(EAkMidiCcValues::AkMidiCcBreathCtrlCoarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl3Coarse) \
	op(EAkMidiCcValues::AkMidiCcFootPedalCoarse) \
	op(EAkMidiCcValues::AkMidiCcPortamentoCoarse) \
	op(EAkMidiCcValues::AkMidiCcDataEntryCoarse) \
	op(EAkMidiCcValues::AkMidiCcVolumeCoarse) \
	op(EAkMidiCcValues::AkMidiCcBalanceCoarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl9Coarse) \
	op(EAkMidiCcValues::AkMidiCcPanPositionCoarse) \
	op(EAkMidiCcValues::AkMidiCcExpressionCoarse) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl14Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl15Coarse) \
	op(EAkMidiCcValues::AkMidiCcGenSlider1) \
	op(EAkMidiCcValues::AkMidiCcGenSlider2) \
	op(EAkMidiCcValues::AkMidiCcGenSlider3) \
	op(EAkMidiCcValues::AkMidiCcGenSlider4) \
	op(EAkMidiCcValues::AkMidiCcCtrl20Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl21Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl22Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl23Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl24Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl25Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl26Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl27Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl28Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl29Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl30Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl31Coarse) \
	op(EAkMidiCcValues::AkMidiCcBankSelectFine) \
	op(EAkMidiCcValues::AkMidiCcModWheelFine) \
	op(EAkMidiCcValues::AkMidiCcBreathCtrlFine) \
	op(EAkMidiCcValues::AkMidiCcCtrl3Fine) \
	op(EAkMidiCcValues::AkMidiCcFootPedalFine) \
	op(EAkMidiCcValues::AkMidiCcPortamentoFine) \
	op(EAkMidiCcValues::AkMidiCcDataEntryFine) \
	op(EAkMidiCcValues::AkMidiCcVolumeFine) \
	op(EAkMidiCcValues::AkMidiCcBalanceFine) \
	op(EAkMidiCcValues::AkMidiCcCtrl9Fine) \
	op(EAkMidiCcValues::AkMidiCcPanPositionFine) \
	op(EAkMidiCcValues::AkMidiCcExpressionFine) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl1Fine) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl2Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl14Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl15Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl20Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl21Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl22Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl23Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl24Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl25Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl26Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl27Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl28Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl29Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl30Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl31Fine) \
	op(EAkMidiCcValues::AkMidiCcHoldPedal) \
	op(EAkMidiCcValues::AkMidiCcPortamentoOnOff) \
	op(EAkMidiCcValues::AkMidiCcSustenutoPedal) \
	op(EAkMidiCcValues::AkMidiCcSoftPedal) \
	op(EAkMidiCcValues::AkMidiCcLegatoPedal) \
	op(EAkMidiCcValues::AkMidiCcHoldPedal2) \
	op(EAkMidiCcValues::AkMidiCcSoundVariation) \
	op(EAkMidiCcValues::AkMidiCcSoundTimbre) \
	op(EAkMidiCcValues::AkMidiCcSoundReleaseTime) \
	op(EAkMidiCcValues::AkMidiCcSoundAttackTime) \
	op(EAkMidiCcValues::AkMidiCcSoundBrightness) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl6) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl7) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl8) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl9) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl10) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton1) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton2) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton3) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton4) \
	op(EAkMidiCcValues::AkMidiCcReverbLevel) \
	op(EAkMidiCcValues::AkMidiCcTremoloLevel) \
	op(EAkMidiCcValues::AkMidiCcChorusLevel) \
	op(EAkMidiCcValues::AkMidiCcCelesteLevel) \
	op(EAkMidiCcValues::AkMidiCcPhaserLevel) \
	op(EAkMidiCcValues::AkMidiCcDataButtonP1) \
	op(EAkMidiCcValues::AkMidiCcDataButtonM1) \
	op(EAkMidiCcValues::AkMidiCcNonRegisterCoarse) \
	op(EAkMidiCcValues::AkMidiCcNonRegisterFine) \
	op(EAkMidiCcValues::AkMidiCcAllSoundOff) \
	op(EAkMidiCcValues::AkMidiCcAllControllersOff) \
	op(EAkMidiCcValues::AkMidiCcLocalKeyboard) \
	op(EAkMidiCcValues::AkMidiCcAllNotesOff) \
	op(EAkMidiCcValues::AkMidiCcOmniModeOff) \
	op(EAkMidiCcValues::AkMidiCcOmniModeOn) \
	op(EAkMidiCcValues::AkMidiCcOmniMonophonicOn) \
	op(EAkMidiCcValues::AkMidiCcOmniPolyphonicOn) 

enum class EAkMidiCcValues : uint8;
template<> struct TIsUEnumClass<EAkMidiCcValues> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkMidiCcValues>();
// ********** End Enum EAkMidiCcValues *************************************************************

// ********** Begin Enum EAkCodecId ****************************************************************
#define FOREACH_ENUM_EAKCODECID(op) \
	op(EAkCodecId::None) \
	op(EAkCodecId::PCM) \
	op(EAkCodecId::ADPCM) \
	op(EAkCodecId::Vorbis) \
	op(EAkCodecId::ATRAC9) \
	op(EAkCodecId::OpusNX) \
	op(EAkCodecId::AkOpus) \
	op(EAkCodecId::AkOpusWEM) 

enum class EAkCodecId : uint8;
template<> struct TIsUEnumClass<EAkCodecId> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkCodecId>();
// ********** End Enum EAkCodecId ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
