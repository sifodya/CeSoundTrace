// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkSettingsPerUser.h"

#ifdef AKAUDIO_AkSettingsPerUser_generated_h
#error "AkSettingsPerUser.generated.h already included, missing '#pragma once' in AkSettingsPerUser.h"
#endif
#define AKAUDIO_AkSettingsPerUser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAkSettingsPerUser *******************************************************
struct Z_Construct_UClass_UAkSettingsPerUser_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkSettingsPerUser_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSettingsPerUser(); \
	friend struct ::Z_Construct_UClass_UAkSettingsPerUser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkSettingsPerUser_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkSettingsPerUser, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkSettingsPerUser_NoRegister) \
	DECLARE_SERIALIZER(UAkSettingsPerUser) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkSettingsPerUser(UAkSettingsPerUser&&) = delete; \
	UAkSettingsPerUser(const UAkSettingsPerUser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSettingsPerUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSettingsPerUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSettingsPerUser) \
	NO_API virtual ~UAkSettingsPerUser();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_33_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkSettingsPerUser;

// ********** End Class UAkSettingsPerUser *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
