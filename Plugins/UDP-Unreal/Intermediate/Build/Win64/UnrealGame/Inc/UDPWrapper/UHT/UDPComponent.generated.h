// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UDPComponent.h"

#ifdef UDPWRAPPER_UDPComponent_generated_h
#error "UDPComponent.generated.h already included, missing '#pragma once' in UDPComponent.h"
#endif
#define UDPWRAPPER_UDPComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FUDPSettings ******************************************************
struct Z_Construct_UScriptStruct_FUDPSettings_Statics;
#define FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUDPSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FUDPSettings;
// ********** End ScriptStruct FUDPSettings ********************************************************

// ********** Begin Delegate FUDPSocketStateSignature **********************************************
#define FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_131_DELEGATE \
UDPWRAPPER_API void FUDPSocketStateSignature_DelegateWrapper(const FMulticastScriptDelegate& UDPSocketStateSignature, int32 Port);


// ********** End Delegate FUDPSocketStateSignature ************************************************

// ********** Begin Delegate FUDPSocketSendStateSignature ******************************************
#define FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_132_DELEGATE \
UDPWRAPPER_API void FUDPSocketSendStateSignature_DelegateWrapper(const FMulticastScriptDelegate& UDPSocketSendStateSignature, int32 SpecifiedPort, int32 BoundPort, const FString& BoundIP);


// ********** End Delegate FUDPSocketSendStateSignature ********************************************

// ********** Begin Delegate FUDPMessageSignature **************************************************
#define FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_133_DELEGATE \
UDPWRAPPER_API void FUDPMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& UDPMessageSignature, TArray<uint8> const& Bytes, const FString& IPAddress, int32 const& Port);


// ********** End Delegate FUDPMessageSignature ****************************************************

// ********** Begin Class UUDPComponent ************************************************************
#define FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_138_RPC_WRAPPERS \
	DECLARE_FUNCTION(execEmitBytes); \
	DECLARE_FUNCTION(execCloseReceiveSocket); \
	DECLARE_FUNCTION(execOpenReceiveSocket); \
	DECLARE_FUNCTION(execCloseSendSocket); \
	DECLARE_FUNCTION(execOpenSendSocket);


struct Z_Construct_UClass_UUDPComponent_Statics;
UDPWRAPPER_API UClass* Z_Construct_UClass_UUDPComponent_NoRegister();

#define FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_138_INCLASS \
private: \
	static void StaticRegisterNativesUUDPComponent(); \
	friend struct ::Z_Construct_UClass_UUDPComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UDPWRAPPER_API UClass* ::Z_Construct_UClass_UUDPComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UUDPComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UDPWrapper"), Z_Construct_UClass_UUDPComponent_NoRegister) \
	DECLARE_SERIALIZER(UUDPComponent)


#define FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUDPComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUDPComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUDPComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUDPComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUDPComponent(UUDPComponent&&) = delete; \
	UUDPComponent(const UUDPComponent&) = delete; \
	NO_API virtual ~UUDPComponent();


#define FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_135_PROLOG
#define FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_138_RPC_WRAPPERS \
	FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_138_INCLASS \
	FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUDPComponent;

// ********** End Class UUDPComponent **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
