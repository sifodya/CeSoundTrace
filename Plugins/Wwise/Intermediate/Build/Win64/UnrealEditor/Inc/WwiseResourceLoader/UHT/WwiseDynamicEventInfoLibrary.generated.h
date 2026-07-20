// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Info/WwiseDynamicEventInfoLibrary.h"

#ifdef WWISERESOURCELOADER_WwiseDynamicEventInfoLibrary_generated_h
#error "WwiseDynamicEventInfoLibrary.generated.h already included, missing '#pragma once' in WwiseDynamicEventInfoLibrary.h"
#endif
#define WWISERESOURCELOADER_WwiseDynamicEventInfoLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWwiseAssetDestroyOptions : uint8;
enum class EWwiseAudioNodeLoading : uint8;
struct FGuid;
struct FWwiseDialogueEventInfo;

// ********** Begin Class UWwiseDynamicEventInfoLibrary ********************************************
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execSetDestroyOptions); \
	DECLARE_FUNCTION(execSetSwitchContainerLoading); \
	DECLARE_FUNCTION(execSetWwiseName); \
	DECLARE_FUNCTION(execSetWwiseShortId); \
	DECLARE_FUNCTION(execSetWwiseGuid); \
	DECLARE_FUNCTION(execGetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execGetDestroyOptions); \
	DECLARE_FUNCTION(execGetAudioNodeLoading); \
	DECLARE_FUNCTION(execGetWwiseName); \
	DECLARE_FUNCTION(execGetWwiseShortId); \
	DECLARE_FUNCTION(execGetWwiseGuid); \
	DECLARE_FUNCTION(execBreakStruct); \
	DECLARE_FUNCTION(execMakeStruct);


struct Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics;
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseDynamicEventInfoLibrary(); \
	friend struct ::Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WWISERESOURCELOADER_API UClass* ::Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UWwiseDynamicEventInfoLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WwiseResourceLoader"), Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_NoRegister) \
	DECLARE_SERIALIZER(UWwiseDynamicEventInfoLibrary)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWwiseDynamicEventInfoLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWwiseDynamicEventInfoLibrary(UWwiseDynamicEventInfoLibrary&&) = delete; \
	UWwiseDynamicEventInfoLibrary(const UWwiseDynamicEventInfoLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseDynamicEventInfoLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseDynamicEventInfoLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWwiseDynamicEventInfoLibrary) \
	NO_API virtual ~UWwiseDynamicEventInfoLibrary();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_24_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWwiseDynamicEventInfoLibrary;

// ********** End Class UWwiseDynamicEventInfoLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
