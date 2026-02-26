// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkDynamicSequencePlaylist.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkDynamicSequencePlaylist() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioNode_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequencePlaylist();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequencePlaylist_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequencePlaylistItem();
AKAUDIO_API UClass* Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAkDynamicSequencePlaylistItem *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkDynamicSequencePlaylistItem;
UClass* UAkDynamicSequencePlaylistItem::GetPrivateStaticClass()
{
	using TClass = UAkDynamicSequencePlaylistItem;
	if (!Z_Registration_Info_UClass_UAkDynamicSequencePlaylistItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkDynamicSequencePlaylistItem"),
			Z_Registration_Info_UClass_UAkDynamicSequencePlaylistItem.InnerSingleton,
			StaticRegisterNativesUAkDynamicSequencePlaylistItem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAkDynamicSequencePlaylistItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister()
{
	return UAkDynamicSequencePlaylistItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Single Dynamic Sequence item.\n */" },
#endif
		{ "IncludePath", "AkDynamicSequencePlaylist.h" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequencePlaylist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single Dynamic Sequence item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioNode_MetaData[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequencePlaylist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayMs_MetaData[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequencePlaylist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequencePlaylist.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkDynamicSequencePlaylistItem constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioNode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DelayMs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkDynamicSequencePlaylistItem constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDynamicSequencePlaylistItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics

// ********** Begin Class UAkDynamicSequencePlaylistItem Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::NewProp_AudioNode = { "AudioNode", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDynamicSequencePlaylistItem, AudioNode), Z_Construct_UClass_UAkAudioNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioNode_MetaData), NewProp_AudioNode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::NewProp_DelayMs = { "DelayMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDynamicSequencePlaylistItem, DelayMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayMs_MetaData), NewProp_DelayMs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDynamicSequencePlaylistItem, CustomData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::NewProp_AudioNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::NewProp_DelayMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::NewProp_CustomData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::PropPointers) < 2048);
// ********** End Class UAkDynamicSequencePlaylistItem Property Definitions ************************
UObject* (*const Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::ClassParams = {
	&UAkDynamicSequencePlaylistItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::Class_MetaDataParams)
};
void UAkDynamicSequencePlaylistItem::StaticRegisterNativesUAkDynamicSequencePlaylistItem()
{
}
UClass* Z_Construct_UClass_UAkDynamicSequencePlaylistItem()
{
	if (!Z_Registration_Info_UClass_UAkDynamicSequencePlaylistItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDynamicSequencePlaylistItem.OuterSingleton, Z_Construct_UClass_UAkDynamicSequencePlaylistItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkDynamicSequencePlaylistItem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkDynamicSequencePlaylistItem);
UAkDynamicSequencePlaylistItem::~UAkDynamicSequencePlaylistItem() {}
// ********** End Class UAkDynamicSequencePlaylistItem *********************************************

// ********** Begin Class UAkDynamicSequencePlaylist Function AddAndCommit *************************
struct Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics
{
	struct AkDynamicSequencePlaylist_eventAddAndCommit_Parms
	{
		UAkDynamicSequencePlaylistItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds an item to the end of the playlist and commits the result.\n\x09 *\n\x09 * This is a convenience function. It assumes the playlist haven't received any change other prior to the AddAndCommit\n\x09 * call, and will merely enqueue the new item to the end of the internal list, leaving everything else alone.\n\x09 *\n\x09 * Use Commit() if more than one operation is to be handled.\n\x09 *\n\x09 * Like Commit(), the playlist object should not be kept for future reference, it can only be commited once, and then, the\n\x09 * object will be cached inside the UAkDynamicSequence.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequencePlaylist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an item to the end of the playlist and commits the result.\n\nThis is a convenience function. It assumes the playlist haven't received any change other prior to the AddAndCommit\ncall, and will merely enqueue the new item to the end of the internal list, leaving everything else alone.\n\nUse Commit() if more than one operation is to be handled.\n\nLike Commit(), the playlist object should not be kept for future reference, it can only be commited once, and then, the\nobject will be cached inside the UAkDynamicSequence." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddAndCommit constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAndCommit constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAndCommit Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequencePlaylist_eventAddAndCommit_Parms, Item), Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::PropPointers) < 2048);
// ********** End Function AddAndCommit Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequencePlaylist, nullptr, "AddAndCommit", 	Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::AkDynamicSequencePlaylist_eventAddAndCommit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::AkDynamicSequencePlaylist_eventAddAndCommit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequencePlaylist::execAddAndCommit)
{
	P_GET_OBJECT(UAkDynamicSequencePlaylistItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAndCommit(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequencePlaylist Function AddAndCommit ***************************

// ********** Begin Class UAkDynamicSequencePlaylist Function Commit *******************************
struct Z_Construct_UFunction_UAkDynamicSequencePlaylist_Commit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Commits this playlist to the Dynamic Sequence.\n\x09 *\n\x09 * The playlist object should not be kept for future reference, it can only be commited once, and then, the object\n\x09 * will be cached inside the UAkDynamicSequence.\n\x09 *\n\x09 * In order to modify the playlist a second time, you must retrieve it from the UAkDynamicSequence object again.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequencePlaylist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Commits this playlist to the Dynamic Sequence.\n\nThe playlist object should not be kept for future reference, it can only be commited once, and then, the object\nwill be cached inside the UAkDynamicSequence.\n\nIn order to modify the playlist a second time, you must retrieve it from the UAkDynamicSequence object again." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Commit constinit property declarations ********************************
// ********** End Function Commit constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequencePlaylist_Commit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequencePlaylist, nullptr, "Commit", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequencePlaylist_Commit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequencePlaylist_Commit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAkDynamicSequencePlaylist_Commit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequencePlaylist_Commit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequencePlaylist::execCommit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Commit();
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequencePlaylist Function Commit *********************************

// ********** Begin Class UAkDynamicSequencePlaylist Function CommitWithoutChanges *****************
struct Z_Construct_UFunction_UAkDynamicSequencePlaylist_CommitWithoutChanges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Commits this playlist to the Dynamic Sequence when there aren't any changes.\n\x09 *\n\x09 * This is a convenience function. It assumes the playlist haven't received any change whatsoever, leaving everything alone.\n\x09 * Use Commit() if operations are to be handled.\n\x09 *\n\x09 * Like Commit(), the playlist object should not be kept for future reference, it can only be commited once, and then, the\n\x09 * object will be cached inside the UAkDynamicSequence.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequencePlaylist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Commits this playlist to the Dynamic Sequence when there aren't any changes.\n\nThis is a convenience function. It assumes the playlist haven't received any change whatsoever, leaving everything alone.\nUse Commit() if operations are to be handled.\n\nLike Commit(), the playlist object should not be kept for future reference, it can only be commited once, and then, the\nobject will be cached inside the UAkDynamicSequence." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CommitWithoutChanges constinit property declarations ******************
// ********** End Function CommitWithoutChanges constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequencePlaylist_CommitWithoutChanges_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequencePlaylist, nullptr, "CommitWithoutChanges", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequencePlaylist_CommitWithoutChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequencePlaylist_CommitWithoutChanges_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAkDynamicSequencePlaylist_CommitWithoutChanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequencePlaylist_CommitWithoutChanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequencePlaylist::execCommitWithoutChanges)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CommitWithoutChanges();
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequencePlaylist Function CommitWithoutChanges *******************

// ********** Begin Class UAkDynamicSequencePlaylist Function OverwriteAndCommit *******************
struct Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics
{
	struct AkDynamicSequencePlaylist_eventOverwriteAndCommit_Parms
	{
		TArray<UAkDynamicSequencePlaylistItem*> InItems;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Overwrite the current playlist with the new items and commits the result.\n\x09 *\n\x09 * This is a convenience function. Can be useful if an event happen in the game where it requires to overwrite the previously enqueued items\n\x09 *\n\x09 * Use Commit() if more than one operation is to be handled.\n\x09 *\n\x09 * Like Commit(), the playlist object should not be kept for future reference, it can only be commited once, and then, the\n\x09 * object will be cached inside the UAkDynamicSequence.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequencePlaylist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overwrite the current playlist with the new items and commits the result.\n\nThis is a convenience function. Can be useful if an event happen in the game where it requires to overwrite the previously enqueued items\n\nUse Commit() if more than one operation is to be handled.\n\nLike Commit(), the playlist object should not be kept for future reference, it can only be commited once, and then, the\nobject will be cached inside the UAkDynamicSequence." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OverwriteAndCommit constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OverwriteAndCommit constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OverwriteAndCommit Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::NewProp_InItems_Inner = { "InItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::NewProp_InItems = { "InItems", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkDynamicSequencePlaylist_eventOverwriteAndCommit_Parms, InItems), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::NewProp_InItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::NewProp_InItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::PropPointers) < 2048);
// ********** End Function OverwriteAndCommit Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAkDynamicSequencePlaylist, nullptr, "OverwriteAndCommit", 	Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::AkDynamicSequencePlaylist_eventOverwriteAndCommit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::AkDynamicSequencePlaylist_eventOverwriteAndCommit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkDynamicSequencePlaylist::execOverwriteAndCommit)
{
	P_GET_TARRAY(UAkDynamicSequencePlaylistItem*,Z_Param_InItems);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverwriteAndCommit(Z_Param_InItems);
	P_NATIVE_END;
}
// ********** End Class UAkDynamicSequencePlaylist Function OverwriteAndCommit *********************

// ********** Begin Class UAkDynamicSequencePlaylist ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAkDynamicSequencePlaylist;
UClass* UAkDynamicSequencePlaylist::GetPrivateStaticClass()
{
	using TClass = UAkDynamicSequencePlaylist;
	if (!Z_Registration_Info_UClass_UAkDynamicSequencePlaylist.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AkDynamicSequencePlaylist"),
			Z_Registration_Info_UClass_UAkDynamicSequencePlaylist.InnerSingleton,
			StaticRegisterNativesUAkDynamicSequencePlaylist,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAkDynamicSequencePlaylist.InnerSingleton;
}
UClass* Z_Construct_UClass_UAkDynamicSequencePlaylist_NoRegister()
{
	return UAkDynamicSequencePlaylist::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dynamic Sequence Playlist. Can be modified through UAkDynamicSequence::ModifyPlaylist.\n *\n * It should be short-lived, and should be committed immediately after changes with Commit(), and then discarded.\n */" },
#endif
		{ "IncludePath", "AkDynamicSequencePlaylist.h" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequencePlaylist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic Sequence Playlist. Can be modified through UAkDynamicSequence::ModifyPlaylist.\n\nIt should be short-lived, and should be committed immediately after changes with Commit(), and then discarded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
		{ "ModuleRelativePath", "Classes/AkDynamicSequencePlaylist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Audiokinetic|AkDynamicSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of sequentially playing Audio Nodes.\n\x09 *\n\x09 * Can be modified. Changes are only applied when the Commit() operation is called. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkDynamicSequencePlaylist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of sequentially playing Audio Nodes.\n\nCan be modified. Changes are only applied when the Commit() operation is called." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkDynamicSequencePlaylist constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkDynamicSequencePlaylist constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddAndCommit"), .Pointer = &UAkDynamicSequencePlaylist::execAddAndCommit },
		{ .NameUTF8 = UTF8TEXT("Commit"), .Pointer = &UAkDynamicSequencePlaylist::execCommit },
		{ .NameUTF8 = UTF8TEXT("CommitWithoutChanges"), .Pointer = &UAkDynamicSequencePlaylist::execCommitWithoutChanges },
		{ .NameUTF8 = UTF8TEXT("OverwriteAndCommit"), .Pointer = &UAkDynamicSequencePlaylist::execOverwriteAndCommit },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkDynamicSequencePlaylist_AddAndCommit, "AddAndCommit" }, // 534223829
		{ &Z_Construct_UFunction_UAkDynamicSequencePlaylist_Commit, "Commit" }, // 344844550
		{ &Z_Construct_UFunction_UAkDynamicSequencePlaylist_CommitWithoutChanges, "CommitWithoutChanges" }, // 2484578046
		{ &Z_Construct_UFunction_UAkDynamicSequencePlaylist_OverwriteAndCommit, "OverwriteAndCommit" }, // 1850215143
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDynamicSequencePlaylist>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics

// ********** Begin Class UAkDynamicSequencePlaylist Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDynamicSequencePlaylist, PlayingID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayingID_MetaData), NewProp_PlayingID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkDynamicSequencePlaylistItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDynamicSequencePlaylist, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::NewProp_PlayingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::PropPointers) < 2048);
// ********** End Class UAkDynamicSequencePlaylist Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::ClassParams = {
	&UAkDynamicSequencePlaylist::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::Class_MetaDataParams)
};
void UAkDynamicSequencePlaylist::StaticRegisterNativesUAkDynamicSequencePlaylist()
{
	UClass* Class = UAkDynamicSequencePlaylist::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAkDynamicSequencePlaylist()
{
	if (!Z_Registration_Info_UClass_UAkDynamicSequencePlaylist.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDynamicSequencePlaylist.OuterSingleton, Z_Construct_UClass_UAkDynamicSequencePlaylist_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkDynamicSequencePlaylist.OuterSingleton;
}
UAkDynamicSequencePlaylist::UAkDynamicSequencePlaylist(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkDynamicSequencePlaylist);
UAkDynamicSequencePlaylist::~UAkDynamicSequencePlaylist() {}
// ********** End Class UAkDynamicSequencePlaylist *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkDynamicSequencePlaylistItem, UAkDynamicSequencePlaylistItem::StaticClass, TEXT("UAkDynamicSequencePlaylistItem"), &Z_Registration_Info_UClass_UAkDynamicSequencePlaylistItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDynamicSequencePlaylistItem), 215694482U) },
		{ Z_Construct_UClass_UAkDynamicSequencePlaylist, UAkDynamicSequencePlaylist::StaticClass, TEXT("UAkDynamicSequencePlaylist"), &Z_Registration_Info_UClass_UAkDynamicSequencePlaylist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDynamicSequencePlaylist), 2209206121U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h__Script_AkAudio_3974643400{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequencePlaylist_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
