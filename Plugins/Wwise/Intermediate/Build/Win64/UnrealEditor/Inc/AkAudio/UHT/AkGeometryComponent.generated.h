// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkGeometryComponent.h"

#ifdef AKAUDIO_AkGeometryComponent_generated_h
#error "AkGeometryComponent.generated.h already included, missing '#pragma once' in AkGeometryComponent.h"
#endif
#define AKAUDIO_AkGeometryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAcousticTexture;
class UMaterialInterface;
struct FAkGeometrySurfaceOverride;

// ********** Begin ScriptStruct FAkGeometrySurfaceOverride ****************************************
struct Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics;
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


struct FAkGeometrySurfaceOverride;
// ********** End ScriptStruct FAkGeometrySurfaceOverride ******************************************

// ********** Begin Class UAkGeometryComponent *****************************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEnableDiffraction); \
	DECLARE_FUNCTION(execSetEnableTransmissionLossOverride); \
	DECLARE_FUNCTION(execSetTransmissionLossOverride); \
	DECLARE_FUNCTION(execSetAcousticTextureOverride); \
	DECLARE_FUNCTION(execSetAcousticPropertiesOverride); \
	DECLARE_FUNCTION(execGetAcousticPropertiesOverride); \
	DECLARE_FUNCTION(execRemoveGeometry); \
	DECLARE_FUNCTION(execUpdateGeometry); \
	DECLARE_FUNCTION(execSendGeometry); \
	DECLARE_FUNCTION(execConvertMesh);


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkGeometryComponent, NO_API)


struct Z_Construct_UClass_UAkGeometryComponent_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGeometryComponent(); \
	friend struct ::Z_Construct_UClass_UAkGeometryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkGeometryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkGeometryComponent, UAkAcousticTextureSetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkGeometryComponent_NoRegister) \
	DECLARE_SERIALIZER(UAkGeometryComponent) \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ARCHIVESERIALIZER


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkGeometryComponent(UAkGeometryComponent&&) = delete; \
	UAkGeometryComponent(const UAkGeometryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGeometryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGeometryComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGeometryComponent) \
	NO_API virtual ~UAkGeometryComponent();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_77_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkGeometryComponent;

// ********** End Class UAkGeometryComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h

// ********** Begin Enum EAkMeshType ***************************************************************
#define FOREACH_ENUM_EAKMESHTYPE(op) \
	op(EAkMeshType::StaticMesh) \
	op(EAkMeshType::CollisionMesh) 

enum class EAkMeshType : uint8;
template<> struct TIsUEnumClass<EAkMeshType> { enum { Value = true }; };
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkMeshType>();
// ********** End Enum EAkMeshType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
