// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EShapeTypes.h"

#ifdef LEGOCONNECTIONTOOL_EShapeTypes_generated_h
#error "EShapeTypes.generated.h already included, missing '#pragma once' in EShapeTypes.h"
#endif
#define LEGOCONNECTIONTOOL_EShapeTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_EShapeTypes_h

// ********** Begin Enum EShapeTypes ***************************************************************
#define FOREACH_ENUM_ESHAPETYPES(op) \
	op(EShapeTypes::Box) \
	op(EShapeTypes::Sphere) \
	op(EShapeTypes::Capsule) \
	op(EShapeTypes::Convex) 

enum class EShapeTypes : uint8;
template<> struct TIsUEnumClass<EShapeTypes> { enum { Value = true }; };
template<> LEGOCONNECTIONTOOL_API UEnum* StaticEnum<EShapeTypes>();
// ********** End Enum EShapeTypes *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
