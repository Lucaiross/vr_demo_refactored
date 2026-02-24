// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocketIOFunctionLibrary.h"

#ifdef SOCKETIOCLIENT_SocketIOFunctionLibrary_generated_h
#error "SocketIOFunctionLibrary.generated.h already included, missing '#pragma once' in SocketIOFunctionLibrary.h"
#endif
#define SOCKETIOCLIENT_SocketIOFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USIOJsonValue;
class USocketIOClientComponent;

// ********** Begin Class USocketIOFunctionLibrary *************************************************
#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCallFunctionByName); \
	DECLARE_FUNCTION(execConstructSocketIOComponent);


struct Z_Construct_UClass_USocketIOFunctionLibrary_Statics;
SOCKETIOCLIENT_API UClass* Z_Construct_UClass_USocketIOFunctionLibrary_NoRegister();

#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocketIOFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_USocketIOFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCKETIOCLIENT_API UClass* ::Z_Construct_UClass_USocketIOFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USocketIOFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketIOClient"), Z_Construct_UClass_USocketIOFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USocketIOFunctionLibrary)


#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketIOFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocketIOFunctionLibrary(USocketIOFunctionLibrary&&) = delete; \
	USocketIOFunctionLibrary(const USocketIOFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketIOFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketIOFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketIOFunctionLibrary) \
	NO_API virtual ~USocketIOFunctionLibrary();


#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOFunctionLibrary_h_13_PROLOG
#define FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocketIOFunctionLibrary;

// ********** End Class USocketIOFunctionLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
