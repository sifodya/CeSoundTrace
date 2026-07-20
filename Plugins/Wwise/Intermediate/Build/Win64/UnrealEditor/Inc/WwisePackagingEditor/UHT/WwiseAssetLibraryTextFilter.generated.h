// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h"

#ifdef WWISEPACKAGINGEDITOR_WwiseAssetLibraryTextFilter_generated_h
#error "WwiseAssetLibraryTextFilter.generated.h already included, missing '#pragma once' in WwiseAssetLibraryTextFilter.h"
#endif
#define WWISEPACKAGINGEDITOR_WwiseAssetLibraryTextFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWwiseAssetLibraryTextFilter *********************************************
struct Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics;
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryTextFilter_NoRegister();

#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseAssetLibraryTextFilter(); \
	friend struct ::Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WWISEPACKAGINGEDITOR_API UClass* ::Z_Construct_UClass_UWwiseAssetLibraryTextFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UWwiseAssetLibraryTextFilter, UWwiseAssetLibraryFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WwisePackagingEditor"), Z_Construct_UClass_UWwiseAssetLibraryTextFilter_NoRegister) \
	DECLARE_SERIALIZER(UWwiseAssetLibraryTextFilter)


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWwiseAssetLibraryTextFilter(UWwiseAssetLibraryTextFilter&&) = delete; \
	UWwiseAssetLibraryTextFilter(const UWwiseAssetLibraryTextFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseAssetLibraryTextFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseAssetLibraryTextFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWwiseAssetLibraryTextFilter) \
	NO_API virtual ~UWwiseAssetLibraryTextFilter();


#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_37_PROLOG
#define FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_40_INCLASS_NO_PURE_DECLS \
	FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWwiseAssetLibraryTextFilter;

// ********** End Class UWwiseAssetLibraryTextFilter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h

// ********** Begin Enum EWwiseAssetLibraryTextFilterType ******************************************
#define FOREACH_ENUM_EWWISEASSETLIBRARYTEXTFILTERTYPE(op) \
	op(EWwiseAssetLibraryTextFilterType::Name) \
	op(EWwiseAssetLibraryTextFilterType::SystemPath) \
	op(EWwiseAssetLibraryTextFilterType::PathInWwise) 

enum class EWwiseAssetLibraryTextFilterType : uint8;
template<> struct TIsUEnumClass<EWwiseAssetLibraryTextFilterType> { enum { Value = true }; };
template<> WWISEPACKAGINGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseAssetLibraryTextFilterType>();
// ********** End Enum EWwiseAssetLibraryTextFilterType ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
