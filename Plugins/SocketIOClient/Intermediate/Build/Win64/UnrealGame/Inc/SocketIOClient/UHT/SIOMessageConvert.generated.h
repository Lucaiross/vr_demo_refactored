// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SIOMessageConvert.h"

#ifdef SOCKETIOCLIENT_SIOMessageConvert_generated_h
#error "SIOMessageConvert.generated.h already included, missing '#pragma once' in SIOMessageConvert.h"
#endif
#define SOCKETIOCLIENT_SIOMessageConvert_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSIOConnectParams *************************************************
struct Z_Construct_UScriptStruct_FSIOConnectParams_Statics;
#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SIOMessageConvert_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIOConnectParams_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSIOConnectParams;
// ********** End ScriptStruct FSIOConnectParams ***************************************************

// ********** Begin Class USIOMessageConvert *******************************************************
struct Z_Construct_UClass_USIOMessageConvert_Statics;
SOCKETIOCLIENT_API UClass* Z_Construct_UClass_USIOMessageConvert_NoRegister();

#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SIOMessageConvert_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIOMessageConvert(); \
	friend struct ::Z_Construct_UClass_USIOMessageConvert_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCKETIOCLIENT_API UClass* ::Z_Construct_UClass_USIOMessageConvert_NoRegister(); \
public: \
	DECLARE_CLASS2(USIOMessageConvert, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketIOClient"), Z_Construct_UClass_USIOMessageConvert_NoRegister) \
	DECLARE_SERIALIZER(USIOMessageConvert)


#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SIOMessageConvert_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIOMessageConvert(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIOMessageConvert(USIOMessageConvert&&) = delete; \
	USIOMessageConvert(const USIOMessageConvert&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIOMessageConvert); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIOMessageConvert); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIOMessageConvert) \
	NO_API virtual ~USIOMessageConvert();


#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SIOMessageConvert_h_57_PROLOG
#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SIOMessageConvert_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SIOMessageConvert_h_60_INCLASS_NO_PURE_DECLS \
	FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SIOMessageConvert_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIOMessageConvert;

// ********** End Class USIOMessageConvert *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SIOMessageConvert_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
