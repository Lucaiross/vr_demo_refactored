// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CUFileComponent.h"

#ifdef COREUTILITY_CUFileComponent_generated_h
#error "CUFileComponent.generated.h already included, missing '#pragma once' in CUFileComponent.h"
#endif
#define COREUTILITY_CUFileComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCUFileComponent *********************************************************
#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReadBytesFromFile); \
	DECLARE_FUNCTION(execSaveBytesToFile); \
	DECLARE_FUNCTION(execProjectRelativePath); \
	DECLARE_FUNCTION(execSplitFullPath); \
	DECLARE_FUNCTION(execExternalSaveDirectory); \
	DECLARE_FUNCTION(execProjectSavedDirectory); \
	DECLARE_FUNCTION(execProjectDirectory); \
	DECLARE_FUNCTION(execProjectContentsDirectory);


struct Z_Construct_UClass_UCUFileComponent_Statics;
COREUTILITY_API UClass* Z_Construct_UClass_UCUFileComponent_NoRegister();

#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCUFileComponent(); \
	friend struct ::Z_Construct_UClass_UCUFileComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUTILITY_API UClass* ::Z_Construct_UClass_UCUFileComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCUFileComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoreUtility"), Z_Construct_UClass_UCUFileComponent_NoRegister) \
	DECLARE_SERIALIZER(UCUFileComponent)


#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUFileComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUFileComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUFileComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUFileComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCUFileComponent(UCUFileComponent&&) = delete; \
	UCUFileComponent(const UCUFileComponent&) = delete; \
	NO_API virtual ~UCUFileComponent();


#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_12_PROLOG
#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_15_RPC_WRAPPERS \
	FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_15_INCLASS \
	FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCUFileComponent;

// ********** End Class UCUFileComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
