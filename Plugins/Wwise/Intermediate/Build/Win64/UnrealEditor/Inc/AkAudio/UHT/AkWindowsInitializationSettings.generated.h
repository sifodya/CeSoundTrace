// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h"

#ifdef AKAUDIO_AkWindowsInitializationSettings_generated_h
#error "AkWindowsInitializationSettings.generated.h already included, missing '#pragma once' in AkWindowsInitializationSettings.h"
#endif
#define AKAUDIO_AkWindowsInitializationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAkWindowsAdvancedInitializationSettings **************************
struct Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettingsWithMultiCoreRendering Super;


struct FAkWindowsAdvancedInitializationSettings;
// ********** End ScriptStruct FAkWindowsAdvancedInitializationSettings ****************************

// ********** Begin Class UAkWindowsInitializationSettings *****************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


struct Z_Construct_UClass_UAkWindowsInitializationSettings_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkWindowsInitializationSettings_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWindowsInitializationSettings(); \
	friend struct ::Z_Construct_UClass_UAkWindowsInitializationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkWindowsInitializationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkWindowsInitializationSettings, UAkPlatformInitializationSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkWindowsInitializationSettings_NoRegister) \
	DECLARE_SERIALIZER(UAkWindowsInitializationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkWindowsInitializationSettings(UAkWindowsInitializationSettings&&) = delete; \
	UAkWindowsInitializationSettings(const UAkWindowsInitializationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWindowsInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWindowsInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWindowsInitializationSettings) \
	NO_API virtual ~UAkWindowsInitializationSettings();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_41_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_44_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkWindowsInitializationSettings;

// ********** End Class UAkWindowsInitializationSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
