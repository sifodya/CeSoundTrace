// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkSettings.h"

#ifdef AKAUDIO_AkSettings_generated_h
#error "AkSettings.generated.h already included, missing '#pragma once' in AkSettings.h"
#endif
#define AKAUDIO_AkSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAkGeometrySurfacePropertiesToMap *********************************
struct Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


struct FAkGeometrySurfacePropertiesToMap;
// ********** End ScriptStruct FAkGeometrySurfacePropertiesToMap ***********************************

// ********** Begin ScriptStruct FWwiseGeometrySurfacePropertiesRow ********************************
struct Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FWwiseGeometrySurfacePropertiesRow;
// ********** End ScriptStruct FWwiseGeometrySurfacePropertiesRow **********************************

// ********** Begin ScriptStruct FWwiseDecayAuxBusRow **********************************************
struct Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_120_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FWwiseDecayAuxBusRow;
// ********** End ScriptStruct FWwiseDecayAuxBusRow ************************************************

// ********** Begin ScriptStruct FAkAcousticTextureParams ******************************************
struct Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_142_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


struct FAkAcousticTextureParams;
// ********** End ScriptStruct FAkAcousticTextureParams ********************************************

// ********** Begin Class UAkSettings **************************************************************
struct Z_Construct_UClass_UAkSettings_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSettings(); \
	friend struct ::Z_Construct_UClass_UAkSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkSettings_NoRegister) \
	DECLARE_SERIALIZER(UAkSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_167_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkSettings(UAkSettings&&) = delete; \
	UAkSettings(const UAkSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSettings)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_164_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_167_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_167_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkSettings;

// ********** End Class UAkSettings ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h

// ********** Begin Enum EAkCollisionChannel *******************************************************
#define FOREACH_ENUM_EAKCOLLISIONCHANNEL(op) \
	op(EAKCC_WorldStatic) \
	op(EAKCC_WorldDynamic) \
	op(EAKCC_Pawn) \
	op(EAKCC_Visibility) \
	op(EAKCC_Camera) \
	op(EAKCC_PhysicsBody) \
	op(EAKCC_Vehicle) \
	op(EAKCC_Destructible) \
	op(EAKCC_UseIntegrationSettingsDefault) 
// ********** End Enum EAkCollisionChannel *********************************************************

// ********** Begin Enum EAkUnrealAudioRouting *****************************************************
#define FOREACH_ENUM_EAKUNREALAUDIOROUTING(op) \
	op(EAkUnrealAudioRouting::EnableWwiseOnly) \
	op(EAkUnrealAudioRouting::Separate) \
	op(EAkUnrealAudioRouting::AudioLink) \
	op(EAkUnrealAudioRouting::EnableUnrealOnly) \
	op(EAkUnrealAudioRouting::Custom) 

enum class EAkUnrealAudioRouting;
template<> struct TIsUEnumClass<EAkUnrealAudioRouting> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkUnrealAudioRouting>();
// ********** End Enum EAkUnrealAudioRouting *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
