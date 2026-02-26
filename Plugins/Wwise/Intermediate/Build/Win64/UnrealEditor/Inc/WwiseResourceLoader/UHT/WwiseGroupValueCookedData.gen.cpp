// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseGroupValueCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseGroupValueCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWwiseGroupType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseGroupType;
static UEnum* EWwiseGroupType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWwiseGroupType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWwiseGroupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("EWwiseGroupType"));
	}
	return Z_Registration_Info_UEnum_EWwiseGroupType.OuterSingleton;
}
template<> WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseGroupType>()
{
	return EWwiseGroupType_StaticEnum();
}
struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
		{ "State.Name", "EWwiseGroupType::State" },
		{ "Switch.Name", "EWwiseGroupType::Switch" },
		{ "Unknown.Name", "EWwiseGroupType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseGroupType::Switch", (int64)EWwiseGroupType::Switch },
		{ "EWwiseGroupType::State", (int64)EWwiseGroupType::State },
		{ "EWwiseGroupType::Unknown", (int64)EWwiseGroupType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	"EWwiseGroupType",
	"EWwiseGroupType",
	Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType()
{
	if (!Z_Registration_Info_UEnum_EWwiseGroupType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseGroupType.InnerSingleton, Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWwiseGroupType.InnerSingleton;
}
// ********** End Enum EWwiseGroupType *************************************************************

// ********** Begin ScriptStruct FWwiseGroupValueCookedData ****************************************
struct Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseGroupValueCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseGroupValueCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseGroupValueCookedData constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseGroupValueCookedData constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseGroupValueCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedData;
class UScriptStruct* FWwiseGroupValueCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseGroupValueCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseGroupValueCookedData Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGroupValueCookedData, Type), Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2338966817
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGroupValueCookedData, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGroupValueCookedData, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGroupValueCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseGroupValueCookedData Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseGroupValueCookedData",
	Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::PropPointers),
	sizeof(FWwiseGroupValueCookedData),
	alignof(FWwiseGroupValueCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseGroupValueCookedData ******************************************

// ********** Begin ScriptStruct FWwiseGroupValueCookedDataSet *************************************
struct Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseGroupValueCookedDataSet); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseGroupValueCookedDataSet); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupValues_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseGroupValueCookedDataSet constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValues_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_GroupValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseGroupValueCookedDataSet constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseGroupValueCookedDataSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedDataSet;
class UScriptStruct* FWwiseGroupValueCookedDataSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedDataSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedDataSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseGroupValueCookedDataSet"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedDataSet.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseGroupValueCookedDataSet Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::NewProp_GroupValues_ElementProp = { "GroupValues", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, METADATA_PARAMS(0, nullptr) }; // 518714856
static_assert(TModels_V<CGetTypeHashable, FWwiseGroupValueCookedData>, "The structure 'FWwiseGroupValueCookedData' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::NewProp_GroupValues = { "GroupValues", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGroupValueCookedDataSet, GroupValues), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupValues_MetaData), NewProp_GroupValues_MetaData) }; // 518714856
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::NewProp_GroupValues_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::NewProp_GroupValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseGroupValueCookedDataSet Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseGroupValueCookedDataSet",
	Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::PropPointers),
	sizeof(FWwiseGroupValueCookedDataSet),
	alignof(FWwiseGroupValueCookedDataSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedDataSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedDataSet.InnerSingleton, Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedDataSet.InnerSingleton);
}
// ********** End ScriptStruct FWwiseGroupValueCookedDataSet ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWwiseGroupType_StaticEnum, TEXT("EWwiseGroupType"), &Z_Registration_Info_UEnum_EWwiseGroupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2338966817U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseGroupValueCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewStructOps, TEXT("WwiseGroupValueCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseGroupValueCookedData), 518714856U) },
		{ FWwiseGroupValueCookedDataSet::StaticStruct, Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet_Statics::NewStructOps, TEXT("WwiseGroupValueCookedDataSet"),&Z_Registration_Info_UScriptStruct_FWwiseGroupValueCookedDataSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseGroupValueCookedDataSet), 1884731281U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h__Script_WwiseResourceLoader_3700295235{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h__Script_WwiseResourceLoader_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h__Script_WwiseResourceLoader_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
