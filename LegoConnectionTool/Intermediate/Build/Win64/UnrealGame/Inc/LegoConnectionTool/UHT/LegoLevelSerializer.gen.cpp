// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LegoLevelSerializer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLegoLevelSerializer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
LEGOCONNECTIONTOOL_API UClass* Z_Construct_UClass_ULegoLevelSerializer();
LEGOCONNECTIONTOOL_API UClass* Z_Construct_UClass_ULegoLevelSerializer_NoRegister();
LEGOCONNECTIONTOOL_API UEnum* Z_Construct_UEnum_LegoConnectionTool_EShapeTypes();
LEGOCONNECTIONTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FLegoActorImage();
UPackage* Z_Construct_UPackage__Script_LegoConnectionTool();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLegoActorImage ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLegoActorImage;
class UScriptStruct* FLegoActorImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLegoActorImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLegoActorImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegoActorImage, (UObject*)Z_Construct_UPackage__Script_LegoConnectionTool(), TEXT("LegoActorImage"));
	}
	return Z_Registration_Info_UScriptStruct_FLegoActorImage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLegoActorImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LegoLevelSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegoLevelSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegoLevelSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegoLevelSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegoLevelSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegoLevelSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegoLevelSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedGuids_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegoLevelSerializer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectedGuids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedGuids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegoActorImage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLegoActorImage, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLegoActorImage, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLegoActorImage, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLegoActorImage, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLegoActorImage, Shape), Z_Construct_UEnum_LegoConnectionTool_EShapeTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) }; // 1620522322
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLegoActorImage, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_ConnectedGuids_Inner = { "ConnectedGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_ConnectedGuids = { "ConnectedGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLegoActorImage, ConnectedGuids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedGuids_MetaData), NewProp_ConnectedGuids_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegoActorImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_ConnectedGuids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewProp_ConnectedGuids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegoActorImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegoActorImage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LegoConnectionTool,
	nullptr,
	&NewStructOps,
	"LegoActorImage",
	Z_Construct_UScriptStruct_FLegoActorImage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegoActorImage_Statics::PropPointers),
	sizeof(FLegoActorImage),
	alignof(FLegoActorImage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegoActorImage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLegoActorImage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLegoActorImage()
{
	if (!Z_Registration_Info_UScriptStruct_FLegoActorImage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLegoActorImage.InnerSingleton, Z_Construct_UScriptStruct_FLegoActorImage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLegoActorImage.InnerSingleton;
}
// ********** End ScriptStruct FLegoActorImage *****************************************************

// ********** Begin Class ULegoLevelSerializer *****************************************************
void ULegoLevelSerializer::StaticRegisterNativesULegoLevelSerializer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULegoLevelSerializer;
UClass* ULegoLevelSerializer::GetPrivateStaticClass()
{
	using TClass = ULegoLevelSerializer;
	if (!Z_Registration_Info_UClass_ULegoLevelSerializer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LegoLevelSerializer"),
			Z_Registration_Info_UClass_ULegoLevelSerializer.InnerSingleton,
			StaticRegisterNativesULegoLevelSerializer,
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
	return Z_Registration_Info_UClass_ULegoLevelSerializer.InnerSingleton;
}
UClass* Z_Construct_UClass_ULegoLevelSerializer_NoRegister()
{
	return ULegoLevelSerializer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULegoLevelSerializer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LegoLevelSerializer.h" },
		{ "ModuleRelativePath", "Public/LegoLevelSerializer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegoLevelSerializer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULegoLevelSerializer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LegoConnectionTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULegoLevelSerializer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegoLevelSerializer_Statics::ClassParams = {
	&ULegoLevelSerializer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULegoLevelSerializer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULegoLevelSerializer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULegoLevelSerializer()
{
	if (!Z_Registration_Info_UClass_ULegoLevelSerializer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegoLevelSerializer.OuterSingleton, Z_Construct_UClass_ULegoLevelSerializer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULegoLevelSerializer.OuterSingleton;
}
ULegoLevelSerializer::ULegoLevelSerializer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULegoLevelSerializer);
ULegoLevelSerializer::~ULegoLevelSerializer() {}
// ********** End Class ULegoLevelSerializer *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoLevelSerializer_h__Script_LegoConnectionTool_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLegoActorImage::StaticStruct, Z_Construct_UScriptStruct_FLegoActorImage_Statics::NewStructOps, TEXT("LegoActorImage"), &Z_Registration_Info_UScriptStruct_FLegoActorImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLegoActorImage), 1734554841U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULegoLevelSerializer, ULegoLevelSerializer::StaticClass, TEXT("ULegoLevelSerializer"), &Z_Registration_Info_UClass_ULegoLevelSerializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegoLevelSerializer), 970978453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoLevelSerializer_h__Script_LegoConnectionTool_3262795577(TEXT("/Script/LegoConnectionTool"),
	Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoLevelSerializer_h__Script_LegoConnectionTool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoLevelSerializer_h__Script_LegoConnectionTool_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoLevelSerializer_h__Script_LegoConnectionTool_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoLevelSerializer_h__Script_LegoConnectionTool_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
