// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_Linux/AkLinuxInitializationSettings.h"

#ifdef AKAUDIO_AkLinuxInitializationSettings_generated_h
#error "AkLinuxInitializationSettings.generated.h already included, missing '#pragma once' in AkLinuxInitializationSettings.h"
#endif
#define AKAUDIO_AkLinuxInitializationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAkLinuxInitializationSettings *******************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


struct Z_Construct_UClass_UAkLinuxInitializationSettings_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxInitializationSettings_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkLinuxInitializationSettings(); \
	friend struct ::Z_Construct_UClass_UAkLinuxInitializationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkLinuxInitializationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkLinuxInitializationSettings, UAkPlatformInitializationSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkLinuxInitializationSettings_NoRegister) \
	DECLARE_SERIALIZER(UAkLinuxInitializationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkLinuxInitializationSettings(UAkLinuxInitializationSettings&&) = delete; \
	UAkLinuxInitializationSettings(const UAkLinuxInitializationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkLinuxInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkLinuxInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkLinuxInitializationSettings) \
	NO_API virtual ~UAkLinuxInitializationSettings();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_26_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkLinuxInitializationSettings;

// ********** End Class UAkLinuxInitializationSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
