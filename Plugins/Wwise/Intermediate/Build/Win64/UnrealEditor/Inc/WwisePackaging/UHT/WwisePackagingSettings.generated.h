// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Packaging/WwisePackagingSettings.h"

#ifdef WWISEPACKAGING_WwisePackagingSettings_generated_h
#error "WwisePackagingSettings.generated.h already included, missing '#pragma once' in WwisePackagingSettings.h"
#endif
#define WWISEPACKAGING_WwisePackagingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWwisePackagingSettings **************************************************
struct Z_Construct_UClass_UWwisePackagingSettings_Statics;
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwisePackagingSettings_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwisePackagingSettings(); \
	friend struct ::Z_Construct_UClass_UWwisePackagingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WWISEPACKAGING_API UClass* ::Z_Construct_UClass_UWwisePackagingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWwisePackagingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WwisePackaging"), Z_Construct_UClass_UWwisePackagingSettings_NoRegister) \
	DECLARE_SERIALIZER(UWwisePackagingSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWwisePackagingSettings(UWwisePackagingSettings&&) = delete; \
	UWwisePackagingSettings(const UWwisePackagingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwisePackagingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwisePackagingSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWwisePackagingSettings)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h_24_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h_27_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWwisePackagingSettings;

// ********** End Class UWwisePackagingSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
