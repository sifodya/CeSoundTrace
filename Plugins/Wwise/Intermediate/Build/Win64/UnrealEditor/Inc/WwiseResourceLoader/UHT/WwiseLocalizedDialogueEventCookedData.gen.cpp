// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h"
#include "Wwise/CookedData/WwiseDialogueEventCookedData.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseLocalizedDialogueEventCookedData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWwiseDialogueArgumentItem ****************************************
struct Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseDialogueArgumentItem); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseDialogueArgumentItem); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Group argument requirement in a dialogue event. Used for validation.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Group argument requirement in a dialogue event. Used for validation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Short ID for the Group.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Short ID for the Group." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseDialogueArgumentItem constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseDialogueArgumentItem constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDialogueArgumentItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentItem;
class UScriptStruct* FWwiseDialogueArgumentItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseDialogueArgumentItem"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentItem.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseDialogueArgumentItem Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueArgumentItem, Type), Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2338966817
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueArgumentItem, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueArgumentItem, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseDialogueArgumentItem Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseDialogueArgumentItem",
	Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::PropPointers),
	sizeof(FWwiseDialogueArgumentItem),
	alignof(FWwiseDialogueArgumentItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentItem.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentItem.InnerSingleton);
}
// ********** End ScriptStruct FWwiseDialogueArgumentItem ******************************************

// ********** Begin ScriptStruct FWwiseDialogueArgumentPosition ************************************
struct Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseDialogueArgumentPosition); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseDialogueArgumentPosition); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Group argument requirement's position in a dialogue event.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Group argument requirement's position in a dialogue event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseDialogueArgumentPosition constinit property declarations ****
	static const UECodeGen_Private::FIntPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseDialogueArgumentPosition constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDialogueArgumentPosition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentPosition;
class UScriptStruct* FWwiseDialogueArgumentPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseDialogueArgumentPosition"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentPosition.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseDialogueArgumentPosition Property Definitions ***************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueArgumentPosition, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::NewProp_Positions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseDialogueArgumentPosition Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseDialogueArgumentPosition",
	Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::PropPointers),
	sizeof(FWwiseDialogueArgumentPosition),
	alignof(FWwiseDialogueArgumentPosition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentPosition.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentPosition.InnerSingleton);
}
// ********** End ScriptStruct FWwiseDialogueArgumentPosition **************************************

// ********** Begin ScriptStruct FWwiseLocalizedDialogueEventCookedData ****************************
struct Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWwiseLocalizedDialogueEventCookedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseLocalizedDialogueEventCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dialogue Event, as cooked in the final product.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Event, as cooked in the final product." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueEventLanguageMap_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueEventId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Short ID for the Dialogue Event.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Short ID for the Dialogue Event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredArguments_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enumeration of the arguments required for this dialogue event, pointing to the position where it should be stored.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration of the arguments required for this dialogue event, pointing to the position where it should be stored." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseLocalizedDialogueEventCookedData constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueEventLanguageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueEventLanguageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DialogueEventLanguageMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueEventId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredArguments_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredArguments_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RequiredArguments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseLocalizedDialogueEventCookedData constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLocalizedDialogueEventCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseLocalizedDialogueEventCookedData;
class UScriptStruct* FWwiseLocalizedDialogueEventCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedDialogueEventCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWwiseLocalizedDialogueEventCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseLocalizedDialogueEventCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_FWwiseLocalizedDialogueEventCookedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FWwiseLocalizedDialogueEventCookedData Property Definitions *******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap_ValueProp = { "DialogueEventLanguageMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData, METADATA_PARAMS(0, nullptr) }; // 1937423670
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap_Key_KeyProp = { "DialogueEventLanguageMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // 2452260452
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap = { "DialogueEventLanguageMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedDialogueEventCookedData, DialogueEventLanguageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueEventLanguageMap_MetaData), NewProp_DialogueEventLanguageMap_MetaData) }; // 2452260452 1937423670
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedDialogueEventCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventId = { "DialogueEventId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedDialogueEventCookedData, DialogueEventId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueEventId_MetaData), NewProp_DialogueEventId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments_ValueProp = { "RequiredArguments", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition, METADATA_PARAMS(0, nullptr) }; // 57809270
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments_Key_KeyProp = { "RequiredArguments_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem, METADATA_PARAMS(0, nullptr) }; // 3192349313
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments = { "RequiredArguments", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedDialogueEventCookedData, RequiredArguments), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredArguments_MetaData), NewProp_RequiredArguments_MetaData) }; // 3192349313 57809270
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseLocalizedDialogueEventCookedData Property Definitions *********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseLocalizedDialogueEventCookedData",
	Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::PropPointers),
	sizeof(FWwiseLocalizedDialogueEventCookedData),
	alignof(FWwiseLocalizedDialogueEventCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedDialogueEventCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseLocalizedDialogueEventCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseLocalizedDialogueEventCookedData.InnerSingleton);
}
// ********** End ScriptStruct FWwiseLocalizedDialogueEventCookedData ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedDialogueEventCookedData_h__Script_WwiseResourceLoader_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseDialogueArgumentItem::StaticStruct, Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewStructOps, TEXT("WwiseDialogueArgumentItem"),&Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDialogueArgumentItem), 3192349313U) },
		{ FWwiseDialogueArgumentPosition::StaticStruct, Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::NewStructOps, TEXT("WwiseDialogueArgumentPosition"),&Z_Registration_Info_UScriptStruct_FWwiseDialogueArgumentPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDialogueArgumentPosition), 57809270U) },
		{ FWwiseLocalizedDialogueEventCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewStructOps, TEXT("WwiseLocalizedDialogueEventCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseLocalizedDialogueEventCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLocalizedDialogueEventCookedData), 1811738429U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedDialogueEventCookedData_h__Script_WwiseResourceLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedDialogueEventCookedData_h__Script_WwiseResourceLoader_3401090769{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedDialogueEventCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedDialogueEventCookedData_h__Script_WwiseResourceLoader_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
