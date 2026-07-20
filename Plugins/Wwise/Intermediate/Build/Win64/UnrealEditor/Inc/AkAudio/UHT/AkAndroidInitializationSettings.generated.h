// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h"

#ifdef AKAUDIO_AkAndroidInitializationSettings_generated_h
#error "AkAndroidInitializationSettings.generated.h already included, missing '#pragma once' in AkAndroidInitializationSettings.h"
#endif
#define AKAUDIO_AkAndroidInitializationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAkAndroidAdvancedInitializationSettings **************************
struct Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettingsWithMultiCoreRendering Super;


struct FAkAndroidAdvancedInitializationSettings;
// ********** End ScriptStruct FAkAndroidAdvancedInitializationSettings ****************************

// ********** Begin Class UAkAndroidInitializationSettings *****************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


struct Z_Construct_UClass_UAkAndroidInitializationSettings_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidInitializationSettings_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAndroidInitializationSettings(); \
	friend struct ::Z_Construct_UClass_UAkAndroidInitializationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkAndroidInitializationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkAndroidInitializationSettings, UAkPlatformInitializationSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkAndroidInitializationSettings_NoRegister) \
	DECLARE_SERIALIZER(UAkAndroidInitializationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_81_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkAndroidInitializationSettings(UAkAndroidInitializationSettings&&) = delete; \
	UAkAndroidInitializationSettings(const UAkAndroidInitializationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAndroidInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAndroidInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAndroidInitializationSettings) \
	NO_API virtual ~UAkAndroidInitializationSettings();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_78_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_81_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkAndroidInitializationSettings;

// ********** End Class UAkAndroidInitializationSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h

// ********** Begin Enum EAkAndroidAudioAPI ********************************************************
#define FOREACH_ENUM_EAKANDROIDAUDIOAPI(op) \
	op(EAkAndroidAudioAPI::AAudio) \
	op(EAkAndroidAudioAPI::OpenSL_ES) 

enum class EAkAndroidAudioAPI : uint32;
template<> struct TIsUEnumClass<EAkAndroidAudioAPI> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAndroidAudioAPI>();
// ********** End Enum EAkAndroidAudioAPI **********************************************************

// ********** Begin Enum EAkAndroidSpatializerAPI **************************************************
#define FOREACH_ENUM_EAKANDROIDSPATIALIZERAPI(op) \
	op(EAkAndroidSpatializerAPI::DolbyAtmos) \
	op(EAkAndroidSpatializerAPI::AndroidSpatializer) 

enum class EAkAndroidSpatializerAPI : uint32;
template<> struct TIsUEnumClass<EAkAndroidSpatializerAPI> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAndroidSpatializerAPI>();
// ********** End Enum EAkAndroidSpatializerAPI ****************************************************

// ********** Begin Enum EAkAndroidAudioPath *******************************************************
#define FOREACH_ENUM_EAKANDROIDAUDIOPATH(op) \
	op(EAkAndroidAudioPath::Legacy) \
	op(EAkAndroidAudioPath::LowLatency) \
	op(EAkAndroidAudioPath::Exclusive) 

enum class EAkAndroidAudioPath : uint32;
template<> struct TIsUEnumClass<EAkAndroidAudioPath> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAndroidAudioPath>();
// ********** End Enum EAkAndroidAudioPath *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
