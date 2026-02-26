// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AkJsonFactory.h"

#ifdef AUDIOKINETICTOOLS_AkJsonFactory_generated_h
#error "AkJsonFactory.generated.h already included, missing '#pragma once' in AkJsonFactory.h"
#endif
#define AUDIOKINETICTOOLS_AkJsonFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAkJsonFactory ***********************************************************
struct Z_Construct_UClass_UAkJsonFactory_Statics;
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkJsonFactory_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkJsonFactory(); \
	friend struct ::Z_Construct_UClass_UAkJsonFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOKINETICTOOLS_API UClass* ::Z_Construct_UClass_UAkJsonFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAkJsonFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudiokineticTools"), Z_Construct_UClass_UAkJsonFactory_NoRegister) \
	DECLARE_SERIALIZER(UAkJsonFactory)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkJsonFactory(UAkJsonFactory&&) = delete; \
	UAkJsonFactory(const UAkJsonFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkJsonFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkJsonFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkJsonFactory) \
	NO_API virtual ~UAkJsonFactory();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h_29_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h_32_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkJsonFactory;

// ********** End Class UAkJsonFactory *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
