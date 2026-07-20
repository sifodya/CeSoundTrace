// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkGeometryData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAkGeometryData() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAkAcousticSurface ************************************************
struct Z_Construct_UScriptStruct_FAkAcousticSurface_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkAcousticSurface); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkAcousticSurface); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[] = {
		{ "DisplayName", "Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkAcousticSurface constinit property declarations ****************
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Texture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkAcousticSurface constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAcousticSurface>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkAcousticSurface_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkAcousticSurface;
class UScriptStruct* FAkAcousticSurface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkAcousticSurface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkAcousticSurface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAcousticSurface, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticSurface"));
	}
	return Z_Registration_Info_UScriptStruct_FAkAcousticSurface.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkAcousticSurface Property Definitions ***************************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAcousticSurface, Texture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAcousticSurface, Occlusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Occlusion_MetaData), NewProp_Occlusion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAcousticSurface, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkAcousticSurface Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkAcousticSurface",
	Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers),
	sizeof(FAkAcousticSurface),
	alignof(FAkAcousticSurface),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface()
{
	if (!Z_Registration_Info_UScriptStruct_FAkAcousticSurface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkAcousticSurface.InnerSingleton, Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkAcousticSurface.InnerSingleton);
}
// ********** End ScriptStruct FAkAcousticSurface **************************************************

// ********** Begin ScriptStruct FAkTriangle *******************************************************
struct Z_Construct_UScriptStruct_FAkTriangle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkTriangle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkTriangle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point0_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkTriangle constinit property declarations ***********************
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Point0;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Point1;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Point2;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Surface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkTriangle constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkTriangle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkTriangle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkTriangle;
class UScriptStruct* FAkTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkTriangle, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_FAkTriangle.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkTriangle Property Definitions **********************************
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0 = { "Point0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkTriangle, Point0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point0_MetaData), NewProp_Point0_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1 = { "Point1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkTriangle, Point1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point1_MetaData), NewProp_Point1_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2 = { "Point2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkTriangle, Point2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point2_MetaData), NewProp_Point2_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkTriangle, Surface), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Surface_MetaData), NewProp_Surface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkTriangle Property Definitions ************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkTriangle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkTriangle",
	Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers),
	sizeof(FAkTriangle),
	alignof(FAkTriangle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle()
{
	if (!Z_Registration_Info_UScriptStruct_FAkTriangle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkTriangle.InnerSingleton, Z_Construct_UScriptStruct_FAkTriangle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkTriangle.InnerSingleton);
}
// ********** End ScriptStruct FAkTriangle *********************************************************

// ********** Begin ScriptStruct FAkGeometryData ***************************************************
struct Z_Construct_UScriptStruct_FAkGeometryData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAkGeometryData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkGeometryData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Surfaces_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToOverrideAcousticTexture_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to store the physical material to override the acoustic texture with at begin play. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to store the physical material to override the acoustic texture with at begin play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToOverrideOcclusion_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to store the physical material to override the transmission loss values with at begin play. */" },
#endif
		{ "DisplayName", "To Override Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to store the physical material to override the transmission loss values with at begin play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialToSurfaceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkGeometryData constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Surfaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Surfaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToOverrideAcousticTexture_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToOverrideAcousticTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToOverrideOcclusion_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToOverrideOcclusion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialToSurfaceIndex_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialToSurfaceIndex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialToSurfaceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkGeometryData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAkGeometryData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkGeometryData;
class UScriptStruct* FAkGeometryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAkGeometryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAkGeometryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometryData, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometryData"));
	}
	return Z_Registration_Info_UScriptStruct_FAkGeometryData.OuterSingleton;
	}

// ********** Begin ScriptStruct FAkGeometryData Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometryData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_Inner = { "Surfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkAcousticSurface, METADATA_PARAMS(0, nullptr) }; // 4158196417
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces = { "Surfaces", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometryData, Surfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Surfaces_MetaData), NewProp_Surfaces_MetaData) }; // 4158196417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkTriangle, METADATA_PARAMS(0, nullptr) }; // 3644779531
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometryData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triangles_MetaData), NewProp_Triangles_MetaData) }; // 3644779531
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_Inner = { "ToOverrideAcousticTexture", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture = { "ToOverrideAcousticTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometryData, ToOverrideAcousticTexture), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToOverrideAcousticTexture_MetaData), NewProp_ToOverrideAcousticTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_Inner = { "ToOverrideOcclusion", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion = { "ToOverrideOcclusion", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometryData, ToOverrideOcclusion), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToOverrideOcclusion_MetaData), NewProp_ToOverrideOcclusion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_MaterialToSurfaceIndex_ValueProp = { "MaterialToSurfaceIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_MaterialToSurfaceIndex_Key_KeyProp = { "MaterialToSurfaceIndex_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_MaterialToSurfaceIndex = { "MaterialToSurfaceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometryData, MaterialToSurfaceIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialToSurfaceIndex_MetaData), NewProp_MaterialToSurfaceIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_MaterialToSurfaceIndex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_MaterialToSurfaceIndex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_MaterialToSurfaceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAkGeometryData Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkGeometryData",
	Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers),
	sizeof(FAkGeometryData),
	alignof(FAkGeometryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData()
{
	if (!Z_Registration_Info_UScriptStruct_FAkGeometryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkGeometryData.InnerSingleton, Z_Construct_UScriptStruct_FAkGeometryData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkGeometryData.InnerSingleton);
}
// ********** End ScriptStruct FAkGeometryData *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryData_h__Script_AkAudio_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkAcousticSurface::StaticStruct, Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewStructOps, TEXT("AkAcousticSurface"),&Z_Registration_Info_UScriptStruct_FAkAcousticSurface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAcousticSurface), 4158196417U) },
		{ FAkTriangle::StaticStruct, Z_Construct_UScriptStruct_FAkTriangle_Statics::NewStructOps, TEXT("AkTriangle"),&Z_Registration_Info_UScriptStruct_FAkTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkTriangle), 3644779531U) },
		{ FAkGeometryData::StaticStruct, Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewStructOps, TEXT("AkGeometryData"),&Z_Registration_Info_UScriptStruct_FAkGeometryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkGeometryData), 3602025293U) },
	};
}; // Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryData_h__Script_AkAudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryData_h__Script_AkAudio_296359745{
	TEXT("/Script/AkAudio"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryData_h__Script_AkAudio_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MA_Project_ProtV1_5_7_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryData_h__Script_AkAudio_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
