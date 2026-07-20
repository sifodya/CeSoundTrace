// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintNodes/PostEventAtLocationAsync.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePostEventAtLocationAsync() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAtLocationAsync();
AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAtLocationAsync_NoRegister();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPostEventAtLocationAsyncOutputPin ************************************
struct Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics
{
	struct _Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms
	{
		int32 PlayingID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAtLocationAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FPostEventAtLocationAsyncOutputPin constinit property declarations ****
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FPostEventAtLocationAsyncOutputPin constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FPostEventAtLocationAsyncOutputPin Property Definitions ***************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::NewProp_PlayingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FPostEventAtLocationAsyncOutputPin Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "PostEventAtLocationAsyncOutputPin__DelegateSignature", 	Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::_Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::_Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPostEventAtLocationAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PostEventAtLocationAsyncOutputPin, int32 PlayingID)
{
	struct _Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms
	{
		int32 PlayingID;
	};
	_Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms Parms;
	Parms.PlayingID=PlayingID;
	PostEventAtLocationAsyncOutputPin.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPostEventAtLocationAsyncOutputPin **************************************

// ********** Begin Class UPostEventAtLocationAsync Function PollPostEventFuture *******************
struct Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAtLocationAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PollPostEventFuture constinit property declarations *******************
// ********** End Function PollPostEventFuture constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPostEventAtLocationAsync, nullptr, "PollPostEventFuture", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPostEventAtLocationAsync::execPollPostEventFuture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PollPostEventFuture();
	P_NATIVE_END;
}
// ********** End Class UPostEventAtLocationAsync Function PollPostEventFuture *********************

// ********** Begin Class UPostEventAtLocationAsync Function PostEventAtLocationAsync **************
struct Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics
{
	struct PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms
	{
		const UObject* WorldContextObject;
		UAkAudioEvent* AkEvent;
		FVector Location;
		FRotator Orientation;
		UPostEventAtLocationAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAtLocationAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostEventAtLocationAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostEventAtLocationAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostEventAtLocationAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, ReturnValue), Z_Construct_UClass_UPostEventAtLocationAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::PropPointers) < 2048);
// ********** End Function PostEventAtLocationAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPostEventAtLocationAsync, nullptr, "PostEventAtLocationAsync", 	Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPostEventAtLocationAsync::execPostEventAtLocationAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Orientation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPostEventAtLocationAsync**)Z_Param__Result=UPostEventAtLocationAsync::PostEventAtLocationAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation);
	P_NATIVE_END;
}
// ********** End Class UPostEventAtLocationAsync Function PostEventAtLocationAsync ****************

// ********** Begin Class UPostEventAtLocationAsync ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPostEventAtLocationAsync;
UClass* UPostEventAtLocationAsync::GetPrivateStaticClass()
{
	using TClass = UPostEventAtLocationAsync;
	if (!Z_Registration_Info_UClass_UPostEventAtLocationAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PostEventAtLocationAsync"),
			Z_Registration_Info_UClass_UPostEventAtLocationAsync.InnerSingleton,
			StaticRegisterNativesUPostEventAtLocationAsync,
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
	return Z_Registration_Info_UClass_UPostEventAtLocationAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UPostEventAtLocationAsync_NoRegister()
{
	return UPostEventAtLocationAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPostEventAtLocationAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/PostEventAtLocationAsync.h" },
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAtLocationAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAtLocationAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPostEventAtLocationAsync constinit property declarations ****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPostEventAtLocationAsync constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PollPostEventFuture"), .Pointer = &UPostEventAtLocationAsync::execPollPostEventFuture },
		{ .NameUTF8 = UTF8TEXT("PostEventAtLocationAsync"), .Pointer = &UPostEventAtLocationAsync::execPostEventAtLocationAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture, "PollPostEventFuture" }, // 1145327471
		{ &Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync, "PostEventAtLocationAsync" }, // 3741593665
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostEventAtLocationAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPostEventAtLocationAsync_Statics

// ********** Begin Class UPostEventAtLocationAsync Property Definitions ***************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPostEventAtLocationAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPostEventAtLocationAsync, Completed), Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 3522648328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostEventAtLocationAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostEventAtLocationAsync_Statics::NewProp_Completed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAtLocationAsync_Statics::PropPointers) < 2048);
// ********** End Class UPostEventAtLocationAsync Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPostEventAtLocationAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAtLocationAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostEventAtLocationAsync_Statics::ClassParams = {
	&UPostEventAtLocationAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPostEventAtLocationAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAtLocationAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAtLocationAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UPostEventAtLocationAsync_Statics::Class_MetaDataParams)
};
void UPostEventAtLocationAsync::StaticRegisterNativesUPostEventAtLocationAsync()
{
	UClass* Class = UPostEventAtLocationAsync::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPostEventAtLocationAsync_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPostEventAtLocationAsync()
{
	if (!Z_Registration_Info_UClass_UPostEventAtLocationAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostEventAtLocationAsync.OuterSingleton, Z_Construct_UClass_UPostEventAtLocationAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPostEventAtLocationAsync.OuterSingleton;
}
UPostEventAtLocationAsync::UPostEventAtLocationAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPostEventAtLocationAsync);
UPostEventAtLocationAsync::~UPostEventAtLocationAsync() {}
// ********** End Class UPostEventAtLocationAsync **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h__Script_AkAudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPostEventAtLocationAsync, UPostEventAtLocationAsync::StaticClass, TEXT("UPostEventAtLocationAsync"), &Z_Registration_Info_UClass_UPostEventAtLocationAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostEventAtLocationAsync), 1731834748U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h__Script_AkAudio_2558093162{
	TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h__Script_AkAudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h__Script_AkAudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
