// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UDPComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUDPComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UDPWRAPPER_API UClass* Z_Construct_UClass_UUDPComponent();
UDPWRAPPER_API UClass* Z_Construct_UClass_UUDPComponent_NoRegister();
UDPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature();
UDPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature();
UDPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature();
UDPWRAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FUDPSettings();
UPackage* Z_Construct_UPackage__Script_UDPWrapper();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUDPSettings ******************************************************
struct Z_Construct_UScriptStruct_FUDPSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FUDPSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FUDPSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UDP Connection Settings\n" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UDP Connection Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendIP_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default sending socket IP string in form e.g. 127.0.0.1. */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default sending socket IP string in form e.g. 127.0.0.1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendPort_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default connection port e.g. 3001*/" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default connection port e.g. 3001" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendBoundPort_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Port to which send is bound to on this client (this should change on each open) */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Port to which send is bound to on this client (this should change on each open)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendBoundIP_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** IP to which send is bound to on this client (this could change on open) */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IP to which send is bound to on this client (this could change on open)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveIP_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default receiving socket IP string in form e.g. 0.0.0.0 for all connections, may need 127.0.0.1 for some cases. */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default receiving socket IP string in form e.g. 0.0.0.0 for all connections, may need 127.0.0.1 for some cases." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceivePort_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default connection port e.g. 3002*/" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default connection port e.g. 3002" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendSocketName_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveSocketName_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** in bytes */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "in bytes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoOpenSend_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true will auto-connect on begin play to IP/port specified for sending udp messages, plus when emit is called */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will auto-connect on begin play to IP/port specified for sending udp messages, plus when emit is called" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoOpenReceive_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true will auto-listen on begin play to port specified for receiving udp messages. */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will auto-listen on begin play to port specified for receiving udp messages." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldOpenReceiveToBoundSendPort_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This will open it to the bound send port at specified send ip and ignore passed in settings for open receive. Default False*/" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will open it to the bound send port at specified send ip and ignore passed in settings for open receive. Default False" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveDataOnGameThread_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether we should process our data on the gamethread or the udp thread. */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether we should process our data on the gamethread or the udp thread." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReceiveOpen_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSendOpen_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FUDPSettings constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SendIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SendPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SendBoundPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SendBoundIP;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReceiveIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReceivePort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SendSocketName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReceiveSocketName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
	static void NewProp_bShouldAutoOpenSend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoOpenSend;
	static void NewProp_bShouldAutoOpenReceive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoOpenReceive;
	static void NewProp_bShouldOpenReceiveToBoundSendPort_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldOpenReceiveToBoundSendPort;
	static void NewProp_bReceiveDataOnGameThread_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveDataOnGameThread;
	static void NewProp_bIsReceiveOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReceiveOpen;
	static void NewProp_bIsSendOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSendOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FUDPSettings constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUDPSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FUDPSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUDPSettings;
class UScriptStruct* FUDPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUDPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUDPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUDPSettings, (UObject*)Z_Construct_UPackage__Script_UDPWrapper(), TEXT("UDPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FUDPSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FUDPSettings Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_SendIP = { "SendIP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUDPSettings, SendIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendIP_MetaData), NewProp_SendIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_SendPort = { "SendPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUDPSettings, SendPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendPort_MetaData), NewProp_SendPort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_SendBoundPort = { "SendBoundPort", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUDPSettings, SendBoundPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendBoundPort_MetaData), NewProp_SendBoundPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_SendBoundIP = { "SendBoundIP", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUDPSettings, SendBoundIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendBoundIP_MetaData), NewProp_SendBoundIP_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_ReceiveIP = { "ReceiveIP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUDPSettings, ReceiveIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceiveIP_MetaData), NewProp_ReceiveIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_ReceivePort = { "ReceivePort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUDPSettings, ReceivePort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceivePort_MetaData), NewProp_ReceivePort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_SendSocketName = { "SendSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUDPSettings, SendSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendSocketName_MetaData), NewProp_SendSocketName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_ReceiveSocketName = { "ReceiveSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUDPSettings, ReceiveSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceiveSocketName_MetaData), NewProp_ReceiveSocketName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUDPSettings, BufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferSize_MetaData), NewProp_BufferSize_MetaData) };
void Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldAutoOpenSend_SetBit(void* Obj)
{
	((FUDPSettings*)Obj)->bShouldAutoOpenSend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldAutoOpenSend = { "bShouldAutoOpenSend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUDPSettings), &Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldAutoOpenSend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAutoOpenSend_MetaData), NewProp_bShouldAutoOpenSend_MetaData) };
void Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldAutoOpenReceive_SetBit(void* Obj)
{
	((FUDPSettings*)Obj)->bShouldAutoOpenReceive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldAutoOpenReceive = { "bShouldAutoOpenReceive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUDPSettings), &Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldAutoOpenReceive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAutoOpenReceive_MetaData), NewProp_bShouldAutoOpenReceive_MetaData) };
void Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldOpenReceiveToBoundSendPort_SetBit(void* Obj)
{
	((FUDPSettings*)Obj)->bShouldOpenReceiveToBoundSendPort = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldOpenReceiveToBoundSendPort = { "bShouldOpenReceiveToBoundSendPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUDPSettings), &Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldOpenReceiveToBoundSendPort_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldOpenReceiveToBoundSendPort_MetaData), NewProp_bShouldOpenReceiveToBoundSendPort_MetaData) };
void Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bReceiveDataOnGameThread_SetBit(void* Obj)
{
	((FUDPSettings*)Obj)->bReceiveDataOnGameThread = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bReceiveDataOnGameThread = { "bReceiveDataOnGameThread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUDPSettings), &Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bReceiveDataOnGameThread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceiveDataOnGameThread_MetaData), NewProp_bReceiveDataOnGameThread_MetaData) };
void Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bIsReceiveOpen_SetBit(void* Obj)
{
	((FUDPSettings*)Obj)->bIsReceiveOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bIsReceiveOpen = { "bIsReceiveOpen", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUDPSettings), &Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bIsReceiveOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReceiveOpen_MetaData), NewProp_bIsReceiveOpen_MetaData) };
void Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bIsSendOpen_SetBit(void* Obj)
{
	((FUDPSettings*)Obj)->bIsSendOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bIsSendOpen = { "bIsSendOpen", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUDPSettings), &Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bIsSendOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSendOpen_MetaData), NewProp_bIsSendOpen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUDPSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_SendIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_SendPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_SendBoundPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_SendBoundIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_ReceiveIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_ReceivePort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_SendSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_ReceiveSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_BufferSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldAutoOpenSend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldAutoOpenReceive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bShouldOpenReceiveToBoundSendPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bReceiveDataOnGameThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bIsReceiveOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDPSettings_Statics::NewProp_bIsSendOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDPSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FUDPSettings Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUDPSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UDPWrapper,
	nullptr,
	&NewStructOps,
	"UDPSettings",
	Z_Construct_UScriptStruct_FUDPSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDPSettings_Statics::PropPointers),
	sizeof(FUDPSettings),
	alignof(FUDPSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDPSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUDPSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUDPSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FUDPSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUDPSettings.InnerSingleton, Z_Construct_UScriptStruct_FUDPSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FUDPSettings.InnerSingleton);
}
// ********** End ScriptStruct FUDPSettings ********************************************************

// ********** Begin Delegate FUDPSocketStateSignature **********************************************
struct Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics
{
	struct _Script_UDPWrapper_eventUDPSocketStateSignature_Parms
	{
		int32 Port;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FUDPSocketStateSignature constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FUDPSocketStateSignature constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FUDPSocketStateSignature Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UDPWrapper_eventUDPSocketStateSignature_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::NewProp_Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FUDPSocketStateSignature Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UDPWrapper, nullptr, "UDPSocketStateSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::_Script_UDPWrapper_eventUDPSocketStateSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::_Script_UDPWrapper_eventUDPSocketStateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUDPSocketStateSignature_DelegateWrapper(const FMulticastScriptDelegate& UDPSocketStateSignature, int32 Port)
{
	struct _Script_UDPWrapper_eventUDPSocketStateSignature_Parms
	{
		int32 Port;
	};
	_Script_UDPWrapper_eventUDPSocketStateSignature_Parms Parms;
	Parms.Port=Port;
	UDPSocketStateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FUDPSocketStateSignature ************************************************

// ********** Begin Delegate FUDPSocketSendStateSignature ******************************************
struct Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics
{
	struct _Script_UDPWrapper_eventUDPSocketSendStateSignature_Parms
	{
		int32 SpecifiedPort;
		int32 BoundPort;
		FString BoundIP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FUDPSocketSendStateSignature constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpecifiedPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoundPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BoundIP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FUDPSocketSendStateSignature constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FUDPSocketSendStateSignature Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::NewProp_SpecifiedPort = { "SpecifiedPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UDPWrapper_eventUDPSocketSendStateSignature_Parms, SpecifiedPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::NewProp_BoundPort = { "BoundPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UDPWrapper_eventUDPSocketSendStateSignature_Parms, BoundPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::NewProp_BoundIP = { "BoundIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UDPWrapper_eventUDPSocketSendStateSignature_Parms, BoundIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundIP_MetaData), NewProp_BoundIP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::NewProp_SpecifiedPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::NewProp_BoundPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::NewProp_BoundIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FUDPSocketSendStateSignature Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UDPWrapper, nullptr, "UDPSocketSendStateSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::_Script_UDPWrapper_eventUDPSocketSendStateSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::_Script_UDPWrapper_eventUDPSocketSendStateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUDPSocketSendStateSignature_DelegateWrapper(const FMulticastScriptDelegate& UDPSocketSendStateSignature, int32 SpecifiedPort, int32 BoundPort, const FString& BoundIP)
{
	struct _Script_UDPWrapper_eventUDPSocketSendStateSignature_Parms
	{
		int32 SpecifiedPort;
		int32 BoundPort;
		FString BoundIP;
	};
	_Script_UDPWrapper_eventUDPSocketSendStateSignature_Parms Parms;
	Parms.SpecifiedPort=SpecifiedPort;
	Parms.BoundPort=BoundPort;
	Parms.BoundIP=BoundIP;
	UDPSocketSendStateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FUDPSocketSendStateSignature ********************************************

// ********** Begin Delegate FUDPMessageSignature **************************************************
struct Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics
{
	struct _Script_UDPWrapper_eventUDPMessageSignature_Parms
	{
		TArray<uint8> Bytes;
		FString IPAddress;
		int32 Port;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FUDPMessageSignature constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FUDPMessageSignature constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FUDPMessageSignature Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UDPWrapper_eventUDPMessageSignature_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UDPWrapper_eventUDPMessageSignature_Parms, IPAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPAddress_MetaData), NewProp_IPAddress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UDPWrapper_eventUDPMessageSignature_Parms, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::NewProp_IPAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::NewProp_Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FUDPMessageSignature Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UDPWrapper, nullptr, "UDPMessageSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::_Script_UDPWrapper_eventUDPMessageSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::_Script_UDPWrapper_eventUDPMessageSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUDPMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& UDPMessageSignature, TArray<uint8> const& Bytes, const FString& IPAddress, int32 const& Port)
{
	struct _Script_UDPWrapper_eventUDPMessageSignature_Parms
	{
		TArray<uint8> Bytes;
		FString IPAddress;
		int32 Port;
	};
	_Script_UDPWrapper_eventUDPMessageSignature_Parms Parms;
	Parms.Bytes=Bytes;
	Parms.IPAddress=IPAddress;
	Parms.Port=Port;
	UDPMessageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FUDPMessageSignature ****************************************************

// ********** Begin Class UUDPComponent Function CloseReceiveSocket ********************************
struct Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics
{
	struct UDPComponent_eventCloseReceiveSocket_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UDP Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Close the receiving socket. This is usually automatically done on EndPlay.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Close the receiving socket. This is usually automatically done on EndPlay." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CloseReceiveSocket constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CloseReceiveSocket constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CloseReceiveSocket Property Definitions *******************************
void Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UDPComponent_eventCloseReceiveSocket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDPComponent_eventCloseReceiveSocket_Parms), &Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::PropPointers) < 2048);
// ********** End Function CloseReceiveSocket Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUDPComponent, nullptr, "CloseReceiveSocket", 	Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::UDPComponent_eventCloseReceiveSocket_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::UDPComponent_eventCloseReceiveSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUDPComponent::execCloseReceiveSocket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CloseReceiveSocket();
	P_NATIVE_END;
}
// ********** End Class UUDPComponent Function CloseReceiveSocket **********************************

// ********** Begin Class UUDPComponent Function CloseSendSocket ***********************************
struct Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics
{
	struct UDPComponent_eventCloseSendSocket_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UDP Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Close the sending socket. This is usually automatically done on EndPlay.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Close the sending socket. This is usually automatically done on EndPlay." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CloseSendSocket constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CloseSendSocket constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CloseSendSocket Property Definitions **********************************
void Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UDPComponent_eventCloseSendSocket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDPComponent_eventCloseSendSocket_Parms), &Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::PropPointers) < 2048);
// ********** End Function CloseSendSocket Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUDPComponent, nullptr, "CloseSendSocket", 	Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::UDPComponent_eventCloseSendSocket_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::UDPComponent_eventCloseSendSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUDPComponent_CloseSendSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDPComponent_CloseSendSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUDPComponent::execCloseSendSocket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CloseSendSocket();
	P_NATIVE_END;
}
// ********** End Class UUDPComponent Function CloseSendSocket *************************************

// ********** Begin Class UUDPComponent Function EmitBytes *****************************************
struct Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics
{
	struct UDPComponent_eventEmitBytes_Parms
	{
		TArray<uint8> Bytes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UDP Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Emit specified bytes to the udp channel.\n\x09*\n\x09* @param Message\x09""Bytes\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Emit specified bytes to the udp channel.\n\n@param Message        Bytes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EmitBytes constinit property declarations *****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EmitBytes constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EmitBytes Property Definitions ****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDPComponent_eventEmitBytes_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
void Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UDPComponent_eventEmitBytes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDPComponent_eventEmitBytes_Parms), &Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::PropPointers) < 2048);
// ********** End Function EmitBytes Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUDPComponent, nullptr, "EmitBytes", 	Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::UDPComponent_eventEmitBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::UDPComponent_eventEmitBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUDPComponent_EmitBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDPComponent_EmitBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUDPComponent::execEmitBytes)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EmitBytes(Z_Param_Out_Bytes);
	P_NATIVE_END;
}
// ********** End Class UUDPComponent Function EmitBytes *******************************************

// ********** Begin Class UUDPComponent Function OpenReceiveSocket *********************************
struct Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics
{
	struct UDPComponent_eventOpenReceiveSocket_Parms
	{
		FString InListenIP;
		int32 InListenPort;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UDP Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Start listening at given port for udp messages. Will auto-listen on BeginPlay by default. Listen IP of 0.0.0.0 means all connections.\n\x09*/" },
#endif
		{ "CPP_Default_InListenIP", "0.0.0.0" },
		{ "CPP_Default_InListenPort", "3002" },
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start listening at given port for udp messages. Will auto-listen on BeginPlay by default. Listen IP of 0.0.0.0 means all connections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InListenIP_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InListenPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenReceiveSocket constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InListenIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InListenPort;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenReceiveSocket constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenReceiveSocket Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::NewProp_InListenIP = { "InListenIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDPComponent_eventOpenReceiveSocket_Parms, InListenIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InListenIP_MetaData), NewProp_InListenIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::NewProp_InListenPort = { "InListenPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDPComponent_eventOpenReceiveSocket_Parms, InListenPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InListenPort_MetaData), NewProp_InListenPort_MetaData) };
void Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UDPComponent_eventOpenReceiveSocket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDPComponent_eventOpenReceiveSocket_Parms), &Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::NewProp_InListenIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::NewProp_InListenPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::PropPointers) < 2048);
// ********** End Function OpenReceiveSocket Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUDPComponent, nullptr, "OpenReceiveSocket", 	Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::UDPComponent_eventOpenReceiveSocket_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::UDPComponent_eventOpenReceiveSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUDPComponent::execOpenReceiveSocket)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InListenIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_InListenPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenReceiveSocket(Z_Param_InListenIP,Z_Param_InListenPort);
	P_NATIVE_END;
}
// ********** End Class UUDPComponent Function OpenReceiveSocket ***********************************

// ********** Begin Class UUDPComponent Function OpenSendSocket ************************************
struct Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics
{
	struct UDPComponent_eventOpenSendSocket_Parms
	{
		FString InIP;
		int32 InPort;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UDP Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Connect to a udp endpoint, optional method if auto-connect is set to true.\n\x09* Emit function will then work as long the network is reachable. By default\n\x09* it will attempt this setup for this socket on BeginPlay.\n\x09*\n\x09* @param InIP the ip4 you wish to connect to\n\x09* @param InPort the udp port you wish to connect to\n\x09*/" },
#endif
		{ "CPP_Default_InIP", "127.0.0.1" },
		{ "CPP_Default_InPort", "3000" },
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Connect to a udp endpoint, optional method if auto-connect is set to true.\nEmit function will then work as long the network is reachable. By default\nit will attempt this setup for this socket on BeginPlay.\n\n@param InIP the ip4 you wish to connect to\n@param InPort the udp port you wish to connect to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIP_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenSendSocket constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenSendSocket constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenSendSocket Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::NewProp_InIP = { "InIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDPComponent_eventOpenSendSocket_Parms, InIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIP_MetaData), NewProp_InIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::NewProp_InPort = { "InPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDPComponent_eventOpenSendSocket_Parms, InPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPort_MetaData), NewProp_InPort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDPComponent_eventOpenSendSocket_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::NewProp_InIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::NewProp_InPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::PropPointers) < 2048);
// ********** End Function OpenSendSocket Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUDPComponent, nullptr, "OpenSendSocket", 	Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::UDPComponent_eventOpenSendSocket_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::UDPComponent_eventOpenSendSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUDPComponent_OpenSendSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDPComponent_OpenSendSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUDPComponent::execOpenSendSocket)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->OpenSendSocket(Z_Param_InIP,Z_Param_InPort);
	P_NATIVE_END;
}
// ********** End Class UUDPComponent Function OpenSendSocket **************************************

// ********** Begin Class UUDPComponent ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUDPComponent;
UClass* UUDPComponent::GetPrivateStaticClass()
{
	using TClass = UUDPComponent;
	if (!Z_Registration_Info_UClass_UUDPComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UDPComponent"),
			Z_Registration_Info_UClass_UUDPComponent.InnerSingleton,
			StaticRegisterNativesUUDPComponent,
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
	return Z_Registration_Info_UClass_UUDPComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UUDPComponent_NoRegister()
{
	return UUDPComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUDPComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Networking" },
		{ "IncludePath", "UDPComponent.h" },
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReceivedBytes_MetaData[] = {
		{ "Category", "UDP Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** On message received on receive socket from Ip address */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On message received on receive socket from Ip address" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReceiveSocketOpened_MetaData[] = {
		{ "Category", "UDP Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Callback when we start listening on the udp receive socket*/" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback when we start listening on the udp receive socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReceiveSocketClosed_MetaData[] = {
		{ "Category", "UDP Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called after receiving socket has been closed. */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called after receiving socket has been closed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSendSocketOpened_MetaData[] = {
		{ "Category", "UDP Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the send socket is ready to use; optionally open your receive socket to bound send port here */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the send socket is ready to use; optionally open your receive socket to bound send port here" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSendSocketClosed_MetaData[] = {
		{ "Category", "UDP Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the send socket has been closed */" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the send socket has been closed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "UDP Connection Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defining UDP sending and receiving Ips, ports, and other defaults*/" },
#endif
		{ "ModuleRelativePath", "Public/UDPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defining UDP sending and receiving Ips, ports, and other defaults" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UUDPComponent constinit property declarations ****************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceivedBytes;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiveSocketOpened;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiveSocketClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSendSocketOpened;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSendSocketClosed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUDPComponent constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CloseReceiveSocket"), .Pointer = &UUDPComponent::execCloseReceiveSocket },
		{ .NameUTF8 = UTF8TEXT("CloseSendSocket"), .Pointer = &UUDPComponent::execCloseSendSocket },
		{ .NameUTF8 = UTF8TEXT("EmitBytes"), .Pointer = &UUDPComponent::execEmitBytes },
		{ .NameUTF8 = UTF8TEXT("OpenReceiveSocket"), .Pointer = &UUDPComponent::execOpenReceiveSocket },
		{ .NameUTF8 = UTF8TEXT("OpenSendSocket"), .Pointer = &UUDPComponent::execOpenSendSocket },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUDPComponent_CloseReceiveSocket, "CloseReceiveSocket" }, // 2586867731
		{ &Z_Construct_UFunction_UUDPComponent_CloseSendSocket, "CloseSendSocket" }, // 2160938125
		{ &Z_Construct_UFunction_UUDPComponent_EmitBytes, "EmitBytes" }, // 1295938397
		{ &Z_Construct_UFunction_UUDPComponent_OpenReceiveSocket, "OpenReceiveSocket" }, // 2309252648
		{ &Z_Construct_UFunction_UUDPComponent_OpenSendSocket, "OpenSendSocket" }, // 3719042987
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUDPComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUDPComponent_Statics

// ********** Begin Class UUDPComponent Property Definitions ***************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUDPComponent_Statics::NewProp_OnReceivedBytes = { "OnReceivedBytes", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUDPComponent, OnReceivedBytes), Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReceivedBytes_MetaData), NewProp_OnReceivedBytes_MetaData) }; // 706370450
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUDPComponent_Statics::NewProp_OnReceiveSocketOpened = { "OnReceiveSocketOpened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUDPComponent, OnReceiveSocketOpened), Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReceiveSocketOpened_MetaData), NewProp_OnReceiveSocketOpened_MetaData) }; // 3527171478
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUDPComponent_Statics::NewProp_OnReceiveSocketClosed = { "OnReceiveSocketClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUDPComponent, OnReceiveSocketClosed), Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReceiveSocketClosed_MetaData), NewProp_OnReceiveSocketClosed_MetaData) }; // 3527171478
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUDPComponent_Statics::NewProp_OnSendSocketOpened = { "OnSendSocketOpened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUDPComponent, OnSendSocketOpened), Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSendSocketOpened_MetaData), NewProp_OnSendSocketOpened_MetaData) }; // 164983304
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUDPComponent_Statics::NewProp_OnSendSocketClosed = { "OnSendSocketClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUDPComponent, OnSendSocketClosed), Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSendSocketClosed_MetaData), NewProp_OnSendSocketClosed_MetaData) }; // 3527171478
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUDPComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUDPComponent, Settings), Z_Construct_UScriptStruct_FUDPSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 460303402
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUDPComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDPComponent_Statics::NewProp_OnReceivedBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDPComponent_Statics::NewProp_OnReceiveSocketOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDPComponent_Statics::NewProp_OnReceiveSocketClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDPComponent_Statics::NewProp_OnSendSocketOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDPComponent_Statics::NewProp_OnSendSocketClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDPComponent_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUDPComponent_Statics::PropPointers) < 2048);
// ********** End Class UUDPComponent Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UUDPComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UDPWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUDPComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUDPComponent_Statics::ClassParams = {
	&UUDPComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUDPComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUDPComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUDPComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUDPComponent_Statics::Class_MetaDataParams)
};
void UUDPComponent::StaticRegisterNativesUUDPComponent()
{
	UClass* Class = UUDPComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UUDPComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UUDPComponent()
{
	if (!Z_Registration_Info_UClass_UUDPComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUDPComponent.OuterSingleton, Z_Construct_UClass_UUDPComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUDPComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUDPComponent);
UUDPComponent::~UUDPComponent() {}
// ********** End Class UUDPComponent **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h__Script_UDPWrapper_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUDPSettings::StaticStruct, Z_Construct_UScriptStruct_FUDPSettings_Statics::NewStructOps, TEXT("UDPSettings"),&Z_Registration_Info_UScriptStruct_FUDPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUDPSettings), 460303402U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUDPComponent, UUDPComponent::StaticClass, TEXT("UUDPComponent"), &Z_Registration_Info_UClass_UUDPComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUDPComponent), 1870699266U) },
	};
}; // Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h__Script_UDPWrapper_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h__Script_UDPWrapper_488980531{
	TEXT("/Script/UDPWrapper"),
	Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h__Script_UDPWrapper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h__Script_UDPWrapper_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h__Script_UDPWrapper_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_UDP_Unreal_Source_UDPWrapper_Public_UDPComponent_h__Script_UDPWrapper_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
