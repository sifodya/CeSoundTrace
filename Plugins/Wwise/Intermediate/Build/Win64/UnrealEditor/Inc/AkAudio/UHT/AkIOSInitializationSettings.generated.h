// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_iOS/AkIOSInitializationSettings.h"

#ifdef AKAUDIO_AkIOSInitializationSettings_generated_h
#error "AkIOSInitializationSettings.generated.h already included, missing '#pragma once' in AkIOSInitializationSettings.h"
#endif
#define AKAUDIO_AkIOSInitializationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAkIOSAdvancedInitializationSettings ******************************
struct Z_Construct_UScriptStruct_FAkIOSAdvancedInitializationSettings_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSInitializationSettings_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkIOSAdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettingsWithMultiCoreRendering Super;


struct FAkIOSAdvancedInitializationSettings;
// ********** End ScriptStruct FAkIOSAdvancedInitializationSettings ********************************

// ********** Begin Class UAkIOSInitializationSettings *********************************************
struct Z_Construct_UClass_UAkIOSInitializationSettings_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkIOSInitializationSettings_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSInitializationSettings_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkIOSInitializationSettings(); \
	friend struct ::Z_Construct_UClass_UAkIOSInitializationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkIOSInitializationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkIOSInitializationSettings, UAkPlatformInitializationSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkIOSInitializationSettings_NoRegister) \
	DECLARE_SERIALIZER(UAkIOSInitializationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSInitializationSettings_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkIOSInitializationSettings(UAkIOSInitializationSettings&&) = delete; \
	UAkIOSInitializationSettings(const UAkIOSInitializationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkIOSInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkIOSInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkIOSInitializationSettings) \
	NO_API virtual ~UAkIOSInitializationSettings();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSInitializationSettings_h_41_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSInitializationSettings_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSInitializationSettings_h_44_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSInitializationSettings_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkIOSInitializationSettings;

// ********** End Class UAkIOSInitializationSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSInitializationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
