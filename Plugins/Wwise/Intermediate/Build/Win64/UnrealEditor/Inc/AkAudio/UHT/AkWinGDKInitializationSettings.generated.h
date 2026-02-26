// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h"

#ifdef AKAUDIO_AkWinGDKInitializationSettings_generated_h
#error "AkWinGDKInitializationSettings.generated.h already included, missing '#pragma once' in AkWinGDKInitializationSettings.h"
#endif
#define AKAUDIO_AkWinGDKInitializationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAkWinGDKAdvancedInitializationSettings ***************************
struct Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettingsWithMultiCoreRendering Super;


struct FAkWinGDKAdvancedInitializationSettings;
// ********** End ScriptStruct FAkWinGDKAdvancedInitializationSettings *****************************

// ********** Begin Class UAkWinGDKInitializationSettings ******************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


struct Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinGDKInitializationSettings_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWinGDKInitializationSettings(); \
	friend struct ::Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkWinGDKInitializationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkWinGDKInitializationSettings, UAkPlatformInitializationSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkWinGDKInitializationSettings_NoRegister) \
	DECLARE_SERIALIZER(UAkWinGDKInitializationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkWinGDKInitializationSettings(UAkWinGDKInitializationSettings&&) = delete; \
	UAkWinGDKInitializationSettings(const UAkWinGDKInitializationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWinGDKInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWinGDKInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWinGDKInitializationSettings) \
	NO_API virtual ~UAkWinGDKInitializationSettings();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_41_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_44_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkWinGDKInitializationSettings;

// ********** End Class UAkWinGDKInitializationSettings ********************************************

// ********** Begin Class UAkWinAnvilInitializationSettings ****************************************
struct Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinAnvilInitializationSettings_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWinAnvilInitializationSettings(); \
	friend struct ::Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkWinAnvilInitializationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkWinAnvilInitializationSettings, UAkWinGDKInitializationSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkWinAnvilInitializationSettings_NoRegister) \
	DECLARE_SERIALIZER(UAkWinAnvilInitializationSettings)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWinAnvilInitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkWinAnvilInitializationSettings(UAkWinAnvilInitializationSettings&&) = delete; \
	UAkWinAnvilInitializationSettings(const UAkWinAnvilInitializationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWinAnvilInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWinAnvilInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWinAnvilInitializationSettings) \
	NO_API virtual ~UAkWinAnvilInitializationSettings();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_71_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_74_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkWinAnvilInitializationSettings;

// ********** End Class UAkWinAnvilInitializationSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
