// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SIOJLibrary.h"

#ifdef SIOJSON_SIOJLibrary_generated_h
#error "SIOJLibrary.generated.h already included, missing '#pragma once' in SIOJLibrary.h"
#endif
#define SIOJSON_SIOJLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USIOJRequestJSON;
class USIOJsonObject;
class USIOJsonValue;
enum class ESIORequestContentType : uint8;
enum class ESIORequestVerb : uint8;
struct FLatentActionInfo;

class FProperty;

// ********** Begin Delegate FSIOJCallDelegate *****************************************************
#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h_17_DELEGATE \
SIOJSON_API void FSIOJCallDelegate_DelegateWrapper(const FScriptDelegate& SIOJCallDelegate, USIOJRequestJSON* Request);


// ********** End Delegate FSIOJCallDelegate *******************************************************

// ********** Begin ScriptStruct FSIOJCallResponse *************************************************
struct Z_Construct_UScriptStruct_FSIOJCallResponse_Statics;
#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIOJCallResponse_Statics; \
	SIOJSON_API static class UScriptStruct* StaticStruct();


struct FSIOJCallResponse;
// ********** End ScriptStruct FSIOJCallResponse ***************************************************

// ********** Begin Class USIOJLibrary *************************************************************
#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetURLBinary); \
	DECLARE_FUNCTION(execCallURL); \
	DECLARE_FUNCTION(execConv_JsonValueToJsonObject); \
	DECLARE_FUNCTION(execConv_SIOJsonObjectToString); \
	DECLARE_FUNCTION(execConv_JsonValueToBytes); \
	DECLARE_FUNCTION(execConv_JsonValueToBool); \
	DECLARE_FUNCTION(execConv_JsonValueToFloat); \
	DECLARE_FUNCTION(execConv_JsonValueToInt); \
	DECLARE_FUNCTION(execConv_SIOJsonValueToString); \
	DECLARE_FUNCTION(execConv_BoolToJsonValue); \
	DECLARE_FUNCTION(execConv_FloatToJsonValue); \
	DECLARE_FUNCTION(execConv_IntToJsonValue); \
	DECLARE_FUNCTION(execConv_StringToJsonValue); \
	DECLARE_FUNCTION(execConv_BytesToJsonValue); \
	DECLARE_FUNCTION(execConv_JsonObjectToJsonValue); \
	DECLARE_FUNCTION(execConv_ArrayToJsonValue); \
	DECLARE_FUNCTION(execStringToJsonValueArray); \
	DECLARE_FUNCTION(execBase64DecodeBytes); \
	DECLARE_FUNCTION(execBase64Decode); \
	DECLARE_FUNCTION(execBase64EncodeBytes); \
	DECLARE_FUNCTION(execBase64Encode); \
	DECLARE_FUNCTION(execPercentEncode);


struct Z_Construct_UClass_USIOJLibrary_Statics;
	struct Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics; \
	struct Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics; \
	struct Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics; \
	struct Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics; \
	struct Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics; \
SIOJSON_API UClass* Z_Construct_UClass_USIOJLibrary_NoRegister();

#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIOJLibrary(); \
	friend struct ::Z_Construct_UClass_USIOJLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics; \
	friend struct ::Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics; \
	friend struct ::Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics; \
	friend struct ::Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics; \
	friend struct ::Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIOJSON_API UClass* ::Z_Construct_UClass_USIOJLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIOJLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SIOJson"), Z_Construct_UClass_USIOJLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIOJLibrary)


#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIOJLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIOJLibrary(USIOJLibrary&&) = delete; \
	USIOJLibrary(const USIOJLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIOJLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIOJLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIOJLibrary) \
	NO_API virtual ~USIOJLibrary();


#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h_47_PROLOG
#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h_50_INCLASS_NO_PURE_DECLS \
	FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIOJLibrary;

// ********** End Class USIOJLibrary ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
