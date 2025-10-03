// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LegoActor.h"

#ifdef LEGOCONNECTIONTOOL_LegoActor_generated_h
#error "LegoActor.generated.h already included, missing '#pragma once' in LegoActor.h"
#endif
#define LEGOCONNECTIONTOOL_LegoActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConnectionData ***************************************************
#define FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConnectionData_Statics; \
	LEGOCONNECTIONTOOL_API static class UScriptStruct* StaticStruct();


struct FConnectionData;
// ********** End ScriptStruct FConnectionData *****************************************************

// ********** Begin Class ALegoActor ***************************************************************
LEGOCONNECTIONTOOL_API UClass* Z_Construct_UClass_ALegoActor_NoRegister();

#define FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALegoActor(); \
	friend struct Z_Construct_UClass_ALegoActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEGOCONNECTIONTOOL_API UClass* Z_Construct_UClass_ALegoActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALegoActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LegoConnectionTool"), Z_Construct_UClass_ALegoActor_NoRegister) \
	DECLARE_SERIALIZER(ALegoActor)


#define FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALegoActor(ALegoActor&&) = delete; \
	ALegoActor(const ALegoActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALegoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALegoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALegoActor) \
	NO_API virtual ~ALegoActor();


#define FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h_35_PROLOG
#define FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h_38_INCLASS_NO_PURE_DECLS \
	FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALegoActor;

// ********** End Class ALegoActor *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Builds_MyPlugin_Packaged_HostProject_Plugins_LegoConnectionTool_Source_LegoConnectionTool_Public_LegoActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
