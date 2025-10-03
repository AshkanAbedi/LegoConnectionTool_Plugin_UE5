// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LegoActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLegoActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LEGOCONNECTIONTOOL_API UClass* Z_Construct_UClass_ALegoActor();
LEGOCONNECTIONTOOL_API UClass* Z_Construct_UClass_ALegoActor_NoRegister();
LEGOCONNECTIONTOOL_API UEnum* Z_Construct_UEnum_LegoConnectionTool_EShapeTypes();
LEGOCONNECTIONTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FConnectionData();
UPackage* Z_Construct_UPackage__Script_LegoConnectionTool();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FConnectionData ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FConnectionData;
class UScriptStruct* FConnectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FConnectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FConnectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectionData, (UObject*)Z_Construct_UPackage__Script_LegoConnectionTool(), TEXT("ConnectionData"));
	}
	return Z_Registration_Info_UScriptStruct_FConnectionData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FConnectionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedActor_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasLOS_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "// I'm not sure whether weak pointer is better here or a strong pointer?! for now, let's use weak...\n" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
		{ "ToolTip", "I'm not sure whether weak pointer is better here or a strong pointer?! for now, let's use weak..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosestPointOnThisActor_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "// for checking line of sight\n" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
		{ "ToolTip", "for checking line of sight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAngleDifference_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "// for checking the sphere bound of the actor\n" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
		{ "ToolTip", "for checking the sphere bound of the actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ConnectedActor;
	static void NewProp_bHasLOS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLOS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPointOnThisActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardAngleDifference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FConnectionData_Statics::NewProp_ConnectedActor = { "ConnectedActor", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConnectionData, ConnectedActor), Z_Construct_UClass_ALegoActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedActor_MetaData), NewProp_ConnectedActor_MetaData) };
void Z_Construct_UScriptStruct_FConnectionData_Statics::NewProp_bHasLOS_SetBit(void* Obj)
{
	((FConnectionData*)Obj)->bHasLOS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConnectionData_Statics::NewProp_bHasLOS = { "bHasLOS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConnectionData), &Z_Construct_UScriptStruct_FConnectionData_Statics::NewProp_bHasLOS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasLOS_MetaData), NewProp_bHasLOS_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConnectionData_Statics::NewProp_ClosestPointOnThisActor = { "ClosestPointOnThisActor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConnectionData, ClosestPointOnThisActor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosestPointOnThisActor_MetaData), NewProp_ClosestPointOnThisActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConnectionData_Statics::NewProp_ForwardAngleDifference = { "ForwardAngleDifference", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConnectionData, ForwardAngleDifference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardAngleDifference_MetaData), NewProp_ForwardAngleDifference_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionData_Statics::NewProp_ConnectedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionData_Statics::NewProp_bHasLOS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionData_Statics::NewProp_ClosestPointOnThisActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionData_Statics::NewProp_ForwardAngleDifference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LegoConnectionTool,
	nullptr,
	&NewStructOps,
	"ConnectionData",
	Z_Construct_UScriptStruct_FConnectionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionData_Statics::PropPointers),
	sizeof(FConnectionData),
	alignof(FConnectionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConnectionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConnectionData()
{
	if (!Z_Registration_Info_UScriptStruct_FConnectionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FConnectionData.InnerSingleton, Z_Construct_UScriptStruct_FConnectionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FConnectionData.InnerSingleton;
}
// ********** End ScriptStruct FConnectionData *****************************************************

// ********** Begin Class ALegoActor ***************************************************************
void ALegoActor::StaticRegisterNativesALegoActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALegoActor;
UClass* ALegoActor::GetPrivateStaticClass()
{
	using TClass = ALegoActor;
	if (!Z_Registration_Info_UClass_ALegoActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LegoActor"),
			Z_Registration_Info_UClass_ALegoActor.InnerSingleton,
			StaticRegisterNativesALegoActor,
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
	return Z_Registration_Info_UClass_ALegoActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ALegoActor_NoRegister()
{
	return ALegoActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALegoActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LegoActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "Lego Settings" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Lego Settings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
		{ "UIMax", "100.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Lego Settings" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "Category", "Lego Settings" },
		{ "DisplayName", "Connections" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueActorGuid_MetaData[] = {
		{ "Category", "Lego Settings" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBox_MetaData[] = {
		{ "Comment", "//**-------------------------\n//These are for making the actor more designer-friendly to edit; To have a starting shape/size/color;\n" },
		{ "ModuleRelativePath", "Public/LegoActor.h" },
		{ "ToolTip", "/-------------------------\nThese are for making the actor more designer-friendly to edit; To have a starting shape/size/color;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSphere_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCapsule_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedConvex_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegoActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueActorGuid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedConvex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALegoActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALegoActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALegoActor, Shape), Z_Construct_UEnum_LegoConnectionTool_EShapeTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) }; // 1620522322
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALegoActor, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALegoActor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConnectionData, METADATA_PARAMS(0, nullptr) }; // 1438041504
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALegoActor, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) }; // 1438041504
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_UniqueActorGuid = { "UniqueActorGuid", nullptr, (EPropertyFlags)0x0010040000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALegoActor, UniqueActorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueActorGuid_MetaData), NewProp_UniqueActorGuid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_CachedBox = { "CachedBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALegoActor, CachedBox), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBox_MetaData), NewProp_CachedBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_CachedSphere = { "CachedSphere", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALegoActor, CachedSphere), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSphere_MetaData), NewProp_CachedSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_CachedCapsule = { "CachedCapsule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALegoActor, CachedCapsule), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCapsule_MetaData), NewProp_CachedCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALegoActor_Statics::NewProp_CachedConvex = { "CachedConvex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALegoActor, CachedConvex), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedConvex_MetaData), NewProp_CachedConvex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALegoActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_Connections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_Connections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_UniqueActorGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_CachedBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_CachedSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_CachedCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALegoActor_Statics::NewProp_CachedConvex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALegoActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALegoActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LegoConnectionTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALegoActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALegoActor_Statics::ClassParams = {
	&ALegoActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALegoActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALegoActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALegoActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALegoActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALegoActor()
{
	if (!Z_Registration_Info_UClass_ALegoActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALegoActor.OuterSingleton, Z_Construct_UClass_ALegoActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALegoActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALegoActor);
ALegoActor::~ALegoActor() {}
// ********** End Class ALegoActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h__Script_LegoConnectionTool_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConnectionData::StaticStruct, Z_Construct_UScriptStruct_FConnectionData_Statics::NewStructOps, TEXT("ConnectionData"), &Z_Registration_Info_UScriptStruct_FConnectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConnectionData), 1438041504U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALegoActor, ALegoActor::StaticClass, TEXT("ALegoActor"), &Z_Registration_Info_UClass_ALegoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALegoActor), 2840757453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h__Script_LegoConnectionTool_2933893670(TEXT("/Script/LegoConnectionTool"),
	Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h__Script_LegoConnectionTool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h__Script_LegoConnectionTool_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h__Script_LegoConnectionTool_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h__Script_LegoConnectionTool_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
