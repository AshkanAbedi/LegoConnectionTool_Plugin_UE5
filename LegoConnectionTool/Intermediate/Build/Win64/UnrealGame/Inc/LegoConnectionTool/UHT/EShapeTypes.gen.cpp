// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EShapeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEShapeTypes() {}

// ********** Begin Cross Module References ********************************************************
LEGOCONNECTIONTOOL_API UEnum* Z_Construct_UEnum_LegoConnectionTool_EShapeTypes();
UPackage* Z_Construct_UPackage__Script_LegoConnectionTool();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EShapeTypes ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShapeTypes;
static UEnum* EShapeTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShapeTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShapeTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LegoConnectionTool_EShapeTypes, (UObject*)Z_Construct_UPackage__Script_LegoConnectionTool(), TEXT("EShapeTypes"));
	}
	return Z_Registration_Info_UEnum_EShapeTypes.OuterSingleton;
}
template<> LEGOCONNECTIONTOOL_API UEnum* StaticEnum<EShapeTypes>()
{
	return EShapeTypes_StaticEnum();
}
struct Z_Construct_UEnum_LegoConnectionTool_EShapeTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.DisplayName", "Box" },
		{ "Box.Name", "EShapeTypes::Box" },
		{ "Capsule.DisplayName", "Capsule" },
		{ "Capsule.Name", "EShapeTypes::Capsule" },
		{ "Convex.DisplayName", "Convex" },
		{ "Convex.Name", "EShapeTypes::Convex" },
		{ "ModuleRelativePath", "Public/EShapeTypes.h" },
		{ "Sphere.DisplayName", "Sphere" },
		{ "Sphere.Name", "EShapeTypes::Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShapeTypes::Box", (int64)EShapeTypes::Box },
		{ "EShapeTypes::Sphere", (int64)EShapeTypes::Sphere },
		{ "EShapeTypes::Capsule", (int64)EShapeTypes::Capsule },
		{ "EShapeTypes::Convex", (int64)EShapeTypes::Convex },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LegoConnectionTool_EShapeTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LegoConnectionTool,
	nullptr,
	"EShapeTypes",
	"EShapeTypes",
	Z_Construct_UEnum_LegoConnectionTool_EShapeTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LegoConnectionTool_EShapeTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LegoConnectionTool_EShapeTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LegoConnectionTool_EShapeTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LegoConnectionTool_EShapeTypes()
{
	if (!Z_Registration_Info_UEnum_EShapeTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShapeTypes.InnerSingleton, Z_Construct_UEnum_LegoConnectionTool_EShapeTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShapeTypes.InnerSingleton;
}
// ********** End Enum EShapeTypes *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_EShapeTypes_h__Script_LegoConnectionTool_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EShapeTypes_StaticEnum, TEXT("EShapeTypes"), &Z_Registration_Info_UEnum_EShapeTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1620522322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_EShapeTypes_h__Script_LegoConnectionTool_3686792550(TEXT("/Script/LegoConnectionTool"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_EShapeTypes_h__Script_LegoConnectionTool_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_EShapeTypes_h__Script_LegoConnectionTool_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
