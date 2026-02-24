// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIOJLibrary.h"
#include "Engine/LatentActionManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIOJLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
SIOJSON_API UClass* Z_Construct_UClass_USIOJLibrary();
SIOJSON_API UClass* Z_Construct_UClass_USIOJLibrary_NoRegister();
SIOJSON_API UClass* Z_Construct_UClass_USIOJRequestJSON_NoRegister();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonObject_NoRegister();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonValue_NoRegister();
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIORequestContentType();
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIORequestVerb();
SIOJSON_API UFunction* Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature();
SIOJSON_API UScriptStruct* Z_Construct_UScriptStruct_FSIOJCallResponse();
UPackage* Z_Construct_UPackage__Script_SIOJson();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSIOJCallDelegate *****************************************************
struct Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics
{
	struct _Script_SIOJson_eventSIOJCallDelegate_Parms
	{
		USIOJRequestJSON* Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIOJCallDelegate constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIOJCallDelegate constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIOJCallDelegate Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SIOJson_eventSIOJCallDelegate_Parms, Request), Z_Construct_UClass_USIOJRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIOJCallDelegate Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SIOJson, nullptr, "SIOJCallDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::_Script_SIOJson_eventSIOJCallDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::_Script_SIOJson_eventSIOJCallDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIOJCallDelegate_DelegateWrapper(const FScriptDelegate& SIOJCallDelegate, USIOJRequestJSON* Request)
{
	struct _Script_SIOJson_eventSIOJCallDelegate_Parms
	{
		USIOJRequestJSON* Request;
	};
	_Script_SIOJson_eventSIOJCallDelegate_Parms Parms;
	Parms.Request=Request;
	SIOJCallDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIOJCallDelegate *******************************************************

// ********** Begin ScriptStruct FSIOJCallResponse *************************************************
struct Z_Construct_UScriptStruct_FSIOJCallResponse_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIOJCallResponse); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIOJCallResponse); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIOJCallResponse constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIOJCallResponse constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIOJCallResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIOJCallResponse_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIOJCallResponse;
class UScriptStruct* FSIOJCallResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIOJCallResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIOJCallResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIOJCallResponse, (UObject*)Z_Construct_UPackage__Script_SIOJson(), TEXT("SIOJCallResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FSIOJCallResponse.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIOJCallResponse Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIOJCallResponse, Request), Z_Construct_UClass_USIOJRequestJSON_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIOJCallResponse, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIOJCallResponse, Callback), Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1476374027
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIOJCallResponse Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SIOJson,
	nullptr,
	&NewStructOps,
	"SIOJCallResponse",
	Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::PropPointers),
	sizeof(FSIOJCallResponse),
	alignof(FSIOJCallResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIOJCallResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FSIOJCallResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIOJCallResponse.InnerSingleton, Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIOJCallResponse.InnerSingleton);
}
// ********** End ScriptStruct FSIOJCallResponse ***************************************************

// ********** Begin Class USIOJLibrary Function Base64Decode ***************************************
struct Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics
{
	struct SIOJLibrary_eventBase64Decode_Parms
	{
		FString Source;
		FString Dest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Decodes a Base64 string into a FString\n\x09 *\n\x09 * @param Source\x09The stringified data to convert\n\x09 * @param Dest\x09\x09The out buffer that will be filled with the decoded data\n\x09 * @return\x09\x09\x09True if the buffer was decoded, false if it failed to decode\n\x09 */" },
#endif
		{ "DisplayName", "Base64 Decode (To String)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decodes a Base64 string into a FString\n\n@param Source        The stringified data to convert\n@param Dest          The out buffer that will be filled with the decoded data\n@return                      True if the buffer was decoded, false if it failed to decode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Base64Decode constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Dest;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Base64Decode constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Base64Decode Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventBase64Decode_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventBase64Decode_Parms, Dest), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJLibrary_eventBase64Decode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJLibrary_eventBase64Decode_Parms), &Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::NewProp_Dest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::PropPointers) < 2048);
// ********** End Function Base64Decode Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Base64Decode", 	Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::SIOJLibrary_eventBase64Decode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::SIOJLibrary_eventBase64Decode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Base64Decode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Base64Decode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execBase64Decode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Dest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIOJLibrary::Base64Decode(Z_Param_Source,Z_Param_Out_Dest);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Base64Decode *****************************************

// ********** Begin Class USIOJLibrary Function Base64DecodeBytes **********************************
struct Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics
{
	struct SIOJLibrary_eventBase64DecodeBytes_Parms
	{
		FString Source;
		TArray<uint8> Dest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Decodes a Base64 string into a Byte array\n\x09 *\n\x09 * @param Source\x09The stringified data to convert\n\x09 * @param Dest\x09\x09The out buffer that will be filled with the decoded data\n\x09 * @return\x09\x09\x09True if the buffer was decoded, false if it failed to decode\n\x09 */" },
#endif
		{ "DisplayName", "Base64 Decode (To Bytes)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decodes a Base64 string into a Byte array\n\n@param Source        The stringified data to convert\n@param Dest          The out buffer that will be filled with the decoded data\n@return                      True if the buffer was decoded, false if it failed to decode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Base64DecodeBytes constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Dest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dest;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Base64DecodeBytes constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Base64DecodeBytes Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventBase64DecodeBytes_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::NewProp_Dest_Inner = { "Dest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventBase64DecodeBytes_Parms, Dest), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJLibrary_eventBase64DecodeBytes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJLibrary_eventBase64DecodeBytes_Parms), &Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::NewProp_Dest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::NewProp_Dest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::PropPointers) < 2048);
// ********** End Function Base64DecodeBytes Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Base64DecodeBytes", 	Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::SIOJLibrary_eventBase64DecodeBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::SIOJLibrary_eventBase64DecodeBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execBase64DecodeBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Dest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIOJLibrary::Base64DecodeBytes(Z_Param_Source,Z_Param_Out_Dest);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Base64DecodeBytes ************************************

// ********** Begin Class USIOJLibrary Function Base64Encode ***************************************
struct Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics
{
	struct SIOJLibrary_eventBase64Encode_Parms
	{
		FString Source;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Encodes a FString into a Base64 string\n\x09 *\n\x09 * @param Source\x09The string data to convert\n\x09 * @return\x09\x09\x09""A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols\n\x09 */" },
#endif
		{ "DisplayName", "Base64 Encode (String)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Encodes a FString into a Base64 string\n\n@param Source        The string data to convert\n@return                      A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Base64Encode constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Base64Encode constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Base64Encode Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventBase64Encode_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventBase64Encode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::PropPointers) < 2048);
// ********** End Function Base64Encode Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Base64Encode", 	Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::SIOJLibrary_eventBase64Encode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::SIOJLibrary_eventBase64Encode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Base64Encode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Base64Encode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execBase64Encode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIOJLibrary::Base64Encode(Z_Param_Source);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Base64Encode *****************************************

// ********** Begin Class USIOJLibrary Function Base64EncodeBytes **********************************
struct Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics
{
	struct SIOJLibrary_eventBase64EncodeBytes_Parms
	{
		TArray<uint8> Source;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Encodes a Byte array into a Base64 string\n\x09 *\n\x09 * @param Source\x09The string data to convert\n\x09 * @return\x09\x09\x09""A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols\n\x09 */" },
#endif
		{ "DisplayName", "Base64 Encode (Bytes)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Encodes a Byte array into a Base64 string\n\n@param Source        The string data to convert\n@return                      A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Base64EncodeBytes constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Base64EncodeBytes constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Base64EncodeBytes Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::NewProp_Source_Inner = { "Source", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventBase64EncodeBytes_Parms, Source), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventBase64EncodeBytes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::NewProp_Source_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::PropPointers) < 2048);
// ********** End Function Base64EncodeBytes Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Base64EncodeBytes", 	Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::SIOJLibrary_eventBase64EncodeBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::SIOJLibrary_eventBase64EncodeBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execBase64EncodeBytes)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIOJLibrary::Base64EncodeBytes(Z_Param_Out_Source);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Base64EncodeBytes ************************************

// ********** Begin Class USIOJLibrary Function CallURL ********************************************
struct Z_Construct_UFunction_USIOJLibrary_CallURL_Statics
{
	struct SIOJLibrary_eventCallURL_Parms
	{
		UObject* WorldContextObject;
		FString URL;
		ESIORequestVerb Verb;
		ESIORequestContentType ContentType;
		USIOJsonObject* SIOJJson;
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Easy way to process http requests */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Easy way to process http requests" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CallURL constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SIOJJson;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CallURL constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CallURL Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventCallURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventCallURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventCallURL_Parms, Verb), Z_Construct_UEnum_SIOJson_ESIORequestVerb, METADATA_PARAMS(0, nullptr) }; // 795667494
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventCallURL_Parms, ContentType), Z_Construct_UEnum_SIOJson_ESIORequestContentType, METADATA_PARAMS(0, nullptr) }; // 3626241558
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_SIOJJson = { "SIOJJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventCallURL_Parms, SIOJJson), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventCallURL_Parms, Callback), Z_Construct_UDelegateFunction_SIOJson_SIOJCallDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1476374027
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_Verb_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_Verb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_ContentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_SIOJJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::PropPointers) < 2048);
// ********** End Function CallURL Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "CallURL", 	Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::SIOJLibrary_eventCallURL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::SIOJLibrary_eventCallURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_CallURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_CallURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execCallURL)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_ENUM(ESIORequestVerb,Z_Param_Verb);
	P_GET_ENUM(ESIORequestContentType,Z_Param_ContentType);
	P_GET_OBJECT(USIOJsonObject,Z_Param_SIOJJson);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIOJLibrary::CallURL(Z_Param_WorldContextObject,Z_Param_URL,ESIORequestVerb(Z_Param_Verb),ESIORequestContentType(Z_Param_ContentType),Z_Param_SIOJJson,FSIOJCallDelegate(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function CallURL **********************************************

// ********** Begin Class USIOJLibrary Function Conv_ArrayToJsonValue ******************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics
{
	struct SIOJLibrary_eventConv_ArrayToJsonValue_Parms
	{
		TArray<USIOJsonValue*> InArray;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To JsonValue (Array)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To JsonValue (Array)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To JsonValue (Array)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_ArrayToJsonValue constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_ArrayToJsonValue constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_ArrayToJsonValue Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_ArrayToJsonValue_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArray_MetaData), NewProp_InArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_ArrayToJsonValue_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::NewProp_InArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::PropPointers) < 2048);
// ********** End Function Conv_ArrayToJsonValue Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_ArrayToJsonValue", 	Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::SIOJLibrary_eventConv_ArrayToJsonValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::SIOJLibrary_eventConv_ArrayToJsonValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_ArrayToJsonValue)
{
	P_GET_TARRAY_REF(USIOJsonValue*,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJLibrary::Conv_ArrayToJsonValue(Z_Param_Out_InArray);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_ArrayToJsonValue ********************************

// ********** Begin Class USIOJLibrary Function Conv_BoolToJsonValue *******************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics
{
	struct SIOJLibrary_eventConv_BoolToJsonValue_Parms
	{
		bool InBool;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To JsonValue (Bool)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To JsonValue (Bool)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To JsonValue (Bool)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_BoolToJsonValue constinit property declarations ******************
	static void NewProp_InBool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InBool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_BoolToJsonValue constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_BoolToJsonValue Property Definitions *****************************
void Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::NewProp_InBool_SetBit(void* Obj)
{
	((SIOJLibrary_eventConv_BoolToJsonValue_Parms*)Obj)->InBool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::NewProp_InBool = { "InBool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJLibrary_eventConv_BoolToJsonValue_Parms), &Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::NewProp_InBool_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_BoolToJsonValue_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::NewProp_InBool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::PropPointers) < 2048);
// ********** End Function Conv_BoolToJsonValue Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_BoolToJsonValue", 	Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::SIOJLibrary_eventConv_BoolToJsonValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::SIOJLibrary_eventConv_BoolToJsonValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_BoolToJsonValue)
{
	P_GET_UBOOL(Z_Param_InBool);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJLibrary::Conv_BoolToJsonValue(Z_Param_InBool);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_BoolToJsonValue *********************************

// ********** Begin Class USIOJLibrary Function Conv_BytesToJsonValue ******************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics
{
	struct SIOJLibrary_eventConv_BytesToJsonValue_Parms
	{
		TArray<uint8> InBytes;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To JsonValue (Bytes)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To JsonValue (Bytes)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To JsonValue (Bytes)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_BytesToJsonValue constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_BytesToJsonValue constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_BytesToJsonValue Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_BytesToJsonValue_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBytes_MetaData), NewProp_InBytes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_BytesToJsonValue_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::NewProp_InBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::NewProp_InBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::PropPointers) < 2048);
// ********** End Function Conv_BytesToJsonValue Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_BytesToJsonValue", 	Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::SIOJLibrary_eventConv_BytesToJsonValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::SIOJLibrary_eventConv_BytesToJsonValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_BytesToJsonValue)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJLibrary::Conv_BytesToJsonValue(Z_Param_Out_InBytes);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_BytesToJsonValue ********************************

// ********** Begin Class USIOJLibrary Function Conv_FloatToJsonValue ******************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics
{
	struct SIOJLibrary_eventConv_FloatToJsonValue_Parms
	{
		float InFloat;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To JsonValue (Float)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To JsonValue (Float)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To JsonValue (Float)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_FloatToJsonValue constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_FloatToJsonValue constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_FloatToJsonValue Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_FloatToJsonValue_Parms, InFloat), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_FloatToJsonValue_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::NewProp_InFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::PropPointers) < 2048);
// ********** End Function Conv_FloatToJsonValue Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_FloatToJsonValue", 	Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::SIOJLibrary_eventConv_FloatToJsonValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::SIOJLibrary_eventConv_FloatToJsonValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_FloatToJsonValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJLibrary::Conv_FloatToJsonValue(Z_Param_InFloat);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_FloatToJsonValue ********************************

// ********** Begin Class USIOJLibrary Function Conv_IntToJsonValue ********************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics
{
	struct SIOJLibrary_eventConv_IntToJsonValue_Parms
	{
		int32 InInt;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To JsonValue (Integer)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To JsonValue (Integer)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To JsonValue (Integer)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_IntToJsonValue constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InInt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_IntToJsonValue constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_IntToJsonValue Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::NewProp_InInt = { "InInt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_IntToJsonValue_Parms, InInt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_IntToJsonValue_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::NewProp_InInt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::PropPointers) < 2048);
// ********** End Function Conv_IntToJsonValue Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_IntToJsonValue", 	Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::SIOJLibrary_eventConv_IntToJsonValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::SIOJLibrary_eventConv_IntToJsonValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_IntToJsonValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InInt);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJLibrary::Conv_IntToJsonValue(Z_Param_InInt);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_IntToJsonValue **********************************

// ********** Begin Class USIOJLibrary Function Conv_JsonObjectToJsonValue *************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics
{
	struct SIOJLibrary_eventConv_JsonObjectToJsonValue_Parms
	{
		USIOJsonObject* InObject;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To JsonValue (JsonObject)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To JsonValue (JsonObject)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To JsonValue (JsonObject)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_JsonObjectToJsonValue constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_JsonObjectToJsonValue constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_JsonObjectToJsonValue Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_JsonObjectToJsonValue_Parms, InObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_JsonObjectToJsonValue_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_InObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::PropPointers) < 2048);
// ********** End Function Conv_JsonObjectToJsonValue Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_JsonObjectToJsonValue", 	Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::SIOJLibrary_eventConv_JsonObjectToJsonValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::SIOJLibrary_eventConv_JsonObjectToJsonValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_JsonObjectToJsonValue)
{
	P_GET_OBJECT(USIOJsonObject,Z_Param_InObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJLibrary::Conv_JsonObjectToJsonValue(Z_Param_InObject);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_JsonObjectToJsonValue ***************************

// ********** Begin Class USIOJLibrary Function Conv_JsonValueToBool *******************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics
{
	struct SIOJLibrary_eventConv_JsonValueToBool_Parms
	{
		USIOJsonValue* InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To Bool (JsonValue)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Bool (JsonValue)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To Bool (JsonValue)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_JsonValueToBool constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_JsonValueToBool constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_JsonValueToBool Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_JsonValueToBool_Parms, InValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJLibrary_eventConv_JsonValueToBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJLibrary_eventConv_JsonValueToBool_Parms), &Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::PropPointers) < 2048);
// ********** End Function Conv_JsonValueToBool Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_JsonValueToBool", 	Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::SIOJLibrary_eventConv_JsonValueToBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::SIOJLibrary_eventConv_JsonValueToBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_JsonValueToBool)
{
	P_GET_OBJECT(USIOJsonValue,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIOJLibrary::Conv_JsonValueToBool(Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_JsonValueToBool *********************************

// ********** Begin Class USIOJLibrary Function Conv_JsonValueToBytes ******************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics
{
	struct SIOJLibrary_eventConv_JsonValueToBytes_Parms
	{
		USIOJsonValue* InValue;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To Bytes (JsonValue)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Bytes (JsonValue)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To Bytes (JsonValue)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_JsonValueToBytes constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_JsonValueToBytes constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_JsonValueToBytes Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_JsonValueToBytes_Parms, InValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_JsonValueToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::PropPointers) < 2048);
// ********** End Function Conv_JsonValueToBytes Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_JsonValueToBytes", 	Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::SIOJLibrary_eventConv_JsonValueToBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::SIOJLibrary_eventConv_JsonValueToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_JsonValueToBytes)
{
	P_GET_OBJECT(USIOJsonValue,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USIOJLibrary::Conv_JsonValueToBytes(Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_JsonValueToBytes ********************************

// ********** Begin Class USIOJLibrary Function Conv_JsonValueToFloat ******************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics
{
	struct SIOJLibrary_eventConv_JsonValueToFloat_Parms
	{
		USIOJsonValue* InValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To Float (JsonValue)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Float (JsonValue)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To Float (JsonValue)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_JsonValueToFloat constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_JsonValueToFloat constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_JsonValueToFloat Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_JsonValueToFloat_Parms, InValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_JsonValueToFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::PropPointers) < 2048);
// ********** End Function Conv_JsonValueToFloat Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_JsonValueToFloat", 	Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::SIOJLibrary_eventConv_JsonValueToFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::SIOJLibrary_eventConv_JsonValueToFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_JsonValueToFloat)
{
	P_GET_OBJECT(USIOJsonValue,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USIOJLibrary::Conv_JsonValueToFloat(Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_JsonValueToFloat ********************************

// ********** Begin Class USIOJLibrary Function Conv_JsonValueToInt ********************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics
{
	struct SIOJLibrary_eventConv_JsonValueToInt_Parms
	{
		USIOJsonValue* InValue;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To Integer (JsonValue)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Integer (JsonValue)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To Integer (JsonValue)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_JsonValueToInt constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_JsonValueToInt constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_JsonValueToInt Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_JsonValueToInt_Parms, InValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_JsonValueToInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::PropPointers) < 2048);
// ********** End Function Conv_JsonValueToInt Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_JsonValueToInt", 	Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::SIOJLibrary_eventConv_JsonValueToInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::SIOJLibrary_eventConv_JsonValueToInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_JsonValueToInt)
{
	P_GET_OBJECT(USIOJsonValue,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIOJLibrary::Conv_JsonValueToInt(Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_JsonValueToInt **********************************

// ********** Begin Class USIOJLibrary Function Conv_JsonValueToJsonObject *************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics
{
	struct SIOJLibrary_eventConv_JsonValueToJsonObject_Parms
	{
		USIOJsonValue* InValue;
		USIOJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To Object (JsonValue)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Object (JsonValue)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To Object (JsonValue)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_JsonValueToJsonObject constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_JsonValueToJsonObject constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_JsonValueToJsonObject Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_JsonValueToJsonObject_Parms, InValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_JsonValueToJsonObject_Parms, ReturnValue), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::PropPointers) < 2048);
// ********** End Function Conv_JsonValueToJsonObject Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_JsonValueToJsonObject", 	Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::SIOJLibrary_eventConv_JsonValueToJsonObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::SIOJLibrary_eventConv_JsonValueToJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_JsonValueToJsonObject)
{
	P_GET_OBJECT(USIOJsonValue,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonObject**)Z_Param__Result=USIOJLibrary::Conv_JsonValueToJsonObject(Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_JsonValueToJsonObject ***************************

// ********** Begin Class USIOJLibrary Function Conv_SIOJsonObjectToString *************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics
{
	struct SIOJLibrary_eventConv_SIOJsonObjectToString_Parms
	{
		USIOJsonObject* InObject;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To String (JsonObject) - doesn't autocast due to get display name\n" },
#endif
		{ "DisplayName", "To String (JsonObject)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To String (JsonObject) - doesn't autocast due to get display name" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_SIOJsonObjectToString constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_SIOJsonObjectToString constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_SIOJsonObjectToString Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_SIOJsonObjectToString_Parms, InObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_SIOJsonObjectToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::NewProp_InObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::PropPointers) < 2048);
// ********** End Function Conv_SIOJsonObjectToString Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_SIOJsonObjectToString", 	Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::SIOJLibrary_eventConv_SIOJsonObjectToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::SIOJLibrary_eventConv_SIOJsonObjectToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_SIOJsonObjectToString)
{
	P_GET_OBJECT(USIOJsonObject,Z_Param_InObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIOJLibrary::Conv_SIOJsonObjectToString(Z_Param_InObject);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_SIOJsonObjectToString ***************************

// ********** Begin Class USIOJLibrary Function Conv_SIOJsonValueToString **************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics
{
	struct SIOJLibrary_eventConv_SIOJsonValueToString_Parms
	{
		USIOJsonValue* InValue;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To String (JsonValue) - doesn't autocast due to get display name\n" },
#endif
		{ "DisplayName", "To String (JsonValue)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To String (JsonValue) - doesn't autocast due to get display name" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_SIOJsonValueToString constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_SIOJsonValueToString constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_SIOJsonValueToString Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_SIOJsonValueToString_Parms, InValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_SIOJsonValueToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::PropPointers) < 2048);
// ********** End Function Conv_SIOJsonValueToString Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_SIOJsonValueToString", 	Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::SIOJLibrary_eventConv_SIOJsonValueToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::SIOJLibrary_eventConv_SIOJsonValueToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_SIOJsonValueToString)
{
	P_GET_OBJECT(USIOJsonValue,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIOJLibrary::Conv_SIOJsonValueToString(Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_SIOJsonValueToString ****************************

// ********** Begin Class USIOJLibrary Function Conv_StringToJsonValue *****************************
struct Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics
{
	struct SIOJLibrary_eventConv_StringToJsonValue_Parms
	{
		FString InString;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To JsonValue (String)\n" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To JsonValue (String)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To JsonValue (String)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_StringToJsonValue constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_StringToJsonValue constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_StringToJsonValue Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_StringToJsonValue_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventConv_StringToJsonValue_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::PropPointers) < 2048);
// ********** End Function Conv_StringToJsonValue Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "Conv_StringToJsonValue", 	Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::SIOJLibrary_eventConv_StringToJsonValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::SIOJLibrary_eventConv_StringToJsonValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execConv_StringToJsonValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJLibrary::Conv_StringToJsonValue(Z_Param_InString);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function Conv_StringToJsonValue *******************************

// ********** Begin Class USIOJLibrary Function GetURLBinary ***************************************
struct Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics
{
	struct SIOJLibrary_eventGetURLBinary_Parms
	{
		UObject* WorldContextObject;
		FString URL;
		ESIORequestVerb Verb;
		ESIORequestContentType ContentType;
		TArray<uint8> OutResultData;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Easy way to fetch resources using get */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Easy way to fetch resources using get" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetURLBinary constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResultData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutResultData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetURLBinary constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetURLBinary Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventGetURLBinary_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventGetURLBinary_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventGetURLBinary_Parms, Verb), Z_Construct_UEnum_SIOJson_ESIORequestVerb, METADATA_PARAMS(0, nullptr) }; // 795667494
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventGetURLBinary_Parms, ContentType), Z_Construct_UEnum_SIOJson_ESIORequestContentType, METADATA_PARAMS(0, nullptr) }; // 3626241558
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_OutResultData_Inner = { "OutResultData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_OutResultData = { "OutResultData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventGetURLBinary_Parms, OutResultData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventGetURLBinary_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_Verb_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_Verb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_ContentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_OutResultData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_OutResultData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::PropPointers) < 2048);
// ********** End Function GetURLBinary Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "GetURLBinary", 	Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::SIOJLibrary_eventGetURLBinary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::SIOJLibrary_eventGetURLBinary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_GetURLBinary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_GetURLBinary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execGetURLBinary)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_ENUM(ESIORequestVerb,Z_Param_Verb);
	P_GET_ENUM(ESIORequestContentType,Z_Param_ContentType);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutResultData);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIOJLibrary::GetURLBinary(Z_Param_WorldContextObject,Z_Param_URL,ESIORequestVerb(Z_Param_Verb),ESIORequestContentType(Z_Param_ContentType),Z_Param_Out_OutResultData,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function GetURLBinary *****************************************

// ********** Begin Class USIOJLibrary Function JsonObjectToStruct *********************************
struct Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics
{
	struct SIOJLibrary_eventJsonObjectToStruct_Parms
	{
		USIOJsonObject* JsonObject;
		TFieldPath<FProperty> AnyStruct;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SocketIOFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Uses the reflection system to fill an unreal struct from data defined in JsonObject.\n\x09*\n\x09* @param JsonObject\x09\x09The source JsonObject for properties to fill\n\x09* @param AnyStruct\x09\x09The struct you wish to fill\n\x09* @return\x09\x09\x09\x09Whether all properties filled correctly\n\x09*/" },
#endif
		{ "CustomStructureParam", "AnyStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses the reflection system to fill an unreal struct from data defined in JsonObject.\n\n@param JsonObject             The source JsonObject for properties to fill\n@param AnyStruct              The struct you wish to fill\n@return                               Whether all properties filled correctly" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function JsonObjectToStruct constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_AnyStruct;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function JsonObjectToStruct constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function JsonObjectToStruct Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventJsonObjectToStruct_Parms, JsonObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::NewProp_AnyStruct = { "AnyStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventJsonObjectToStruct_Parms, AnyStruct), &FProperty::StaticClass, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJLibrary_eventJsonObjectToStruct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJLibrary_eventJsonObjectToStruct_Parms), &Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::NewProp_AnyStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::PropPointers) < 2048);
// ********** End Function JsonObjectToStruct Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "JsonObjectToStruct", 	Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::SIOJLibrary_eventJsonObjectToStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::SIOJLibrary_eventJsonObjectToStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USIOJLibrary Function JsonObjectToStruct ***********************************

// ********** Begin Class USIOJLibrary Function LoadJsonFileToStruct *******************************
struct Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics
{
	struct SIOJLibrary_eventLoadJsonFileToStruct_Parms
	{
		FString FilePath;
		TFieldPath<FProperty> AnyStruct;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SocketIOFunctions" },
		{ "CustomStructureParam", "AnyStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadJsonFileToStruct constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_AnyStruct;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadJsonFileToStruct constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadJsonFileToStruct Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventLoadJsonFileToStruct_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::NewProp_AnyStruct = { "AnyStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventLoadJsonFileToStruct_Parms, AnyStruct), &FProperty::StaticClass, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJLibrary_eventLoadJsonFileToStruct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJLibrary_eventLoadJsonFileToStruct_Parms), &Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::NewProp_AnyStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::PropPointers) < 2048);
// ********** End Function LoadJsonFileToStruct Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "LoadJsonFileToStruct", 	Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::SIOJLibrary_eventLoadJsonFileToStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::SIOJLibrary_eventLoadJsonFileToStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USIOJLibrary Function LoadJsonFileToStruct *********************************

// ********** Begin Class USIOJLibrary Function PercentEncode **************************************
struct Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics
{
	struct SIOJLibrary_eventPercentEncode_Parms
	{
		FString Source;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies percent-encoding to text */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies percent-encoding to text" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PercentEncode constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PercentEncode constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PercentEncode Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventPercentEncode_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventPercentEncode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::PropPointers) < 2048);
// ********** End Function PercentEncode Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "PercentEncode", 	Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::SIOJLibrary_eventPercentEncode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::SIOJLibrary_eventPercentEncode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_PercentEncode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_PercentEncode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execPercentEncode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIOJLibrary::PercentEncode(Z_Param_Source);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function PercentEncode ****************************************

// ********** Begin Class USIOJLibrary Function SaveStructToJsonFile *******************************
struct Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics
{
	struct SIOJLibrary_eventSaveStructToJsonFile_Parms
	{
		TFieldPath<FProperty> AnyStruct;
		FString FilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SocketIOFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convenience - Saving/Loading structs from files\n" },
#endif
		{ "CustomStructureParam", "AnyStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience - Saving/Loading structs from files" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveStructToJsonFile constinit property declarations ******************
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_AnyStruct;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveStructToJsonFile constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveStructToJsonFile Property Definitions *****************************
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::NewProp_AnyStruct = { "AnyStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventSaveStructToJsonFile_Parms, AnyStruct), &FProperty::StaticClass, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventSaveStructToJsonFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJLibrary_eventSaveStructToJsonFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJLibrary_eventSaveStructToJsonFile_Parms), &Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::NewProp_AnyStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::PropPointers) < 2048);
// ********** End Function SaveStructToJsonFile Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "SaveStructToJsonFile", 	Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::SIOJLibrary_eventSaveStructToJsonFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::SIOJLibrary_eventSaveStructToJsonFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USIOJLibrary Function SaveStructToJsonFile *********************************

// ********** Begin Class USIOJLibrary Function StringToJsonValueArray *****************************
struct Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics
{
	struct SIOJLibrary_eventStringToJsonValueArray_Parms
	{
		FString JsonString;
		TArray<USIOJsonValue*> OutJsonValueArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Decodes a json string into an array of stringified json Values\n\x09*\n\x09* @param JsonString\x09\x09\x09\x09Input stringified json\n\x09* @param OutJsonValueArray\x09\x09The decoded Array of JsonValue\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decodes a json string into an array of stringified json Values\n\n@param JsonString                             Input stringified json\n@param OutJsonValueArray              The decoded Array of JsonValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StringToJsonValueArray constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutJsonValueArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutJsonValueArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StringToJsonValueArray constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StringToJsonValueArray Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventStringToJsonValueArray_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::NewProp_OutJsonValueArray_Inner = { "OutJsonValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::NewProp_OutJsonValueArray = { "OutJsonValueArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventStringToJsonValueArray_Parms, OutJsonValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJLibrary_eventStringToJsonValueArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJLibrary_eventStringToJsonValueArray_Parms), &Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::NewProp_OutJsonValueArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::NewProp_OutJsonValueArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::PropPointers) < 2048);
// ********** End Function StringToJsonValueArray Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "StringToJsonValueArray", 	Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::SIOJLibrary_eventStringToJsonValueArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::SIOJLibrary_eventStringToJsonValueArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJLibrary::execStringToJsonValueArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_TARRAY_REF(USIOJsonValue*,Z_Param_Out_OutJsonValueArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIOJLibrary::StringToJsonValueArray(Z_Param_JsonString,Z_Param_Out_OutJsonValueArray);
	P_NATIVE_END;
}
// ********** End Class USIOJLibrary Function StringToJsonValueArray *******************************

// ********** Begin Class USIOJLibrary Function StructToJsonObject *********************************
struct Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics
{
	struct SIOJLibrary_eventStructToJsonObject_Parms
	{
		TFieldPath<FProperty> AnyStruct;
		USIOJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SocketIOFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Uses the reflection system to convert an unreal struct into a JsonObject\n\x09*\n\x09* @param AnyStruct\x09\x09The struct you wish to convert\n\x09* @return\x09\x09\x09\x09""Converted Json Object\n\x09*/" },
#endif
		{ "CustomStructureParam", "AnyStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses the reflection system to convert an unreal struct into a JsonObject\n\n@param AnyStruct              The struct you wish to convert\n@return                               Converted Json Object" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StructToJsonObject constinit property declarations ********************
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_AnyStruct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StructToJsonObject constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StructToJsonObject Property Definitions *******************************
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::NewProp_AnyStruct = { "AnyStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventStructToJsonObject_Parms, AnyStruct), &FProperty::StaticClass, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventStructToJsonObject_Parms, ReturnValue), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::NewProp_AnyStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::PropPointers) < 2048);
// ********** End Function StructToJsonObject Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "StructToJsonObject", 	Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::SIOJLibrary_eventStructToJsonObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::SIOJLibrary_eventStructToJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_StructToJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_StructToJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USIOJLibrary Function StructToJsonObject ***********************************

// ********** Begin Class USIOJLibrary Function StructToJsonValue **********************************
struct Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics
{
	struct SIOJLibrary_eventStructToJsonValue_Parms
	{
		TFieldPath<FProperty> AnyStruct;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|SocketIO" },
		{ "CustomStructureParam", "AnyStruct" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "To JsonValue (Struct)" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StructToJsonValue constinit property declarations *********************
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_AnyStruct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StructToJsonValue constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StructToJsonValue Property Definitions ********************************
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::NewProp_AnyStruct = { "AnyStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventStructToJsonValue_Parms, AnyStruct), &FProperty::StaticClass, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJLibrary_eventStructToJsonValue_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::NewProp_AnyStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::PropPointers) < 2048);
// ********** End Function StructToJsonValue Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJLibrary, nullptr, "StructToJsonValue", 	Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::SIOJLibrary_eventStructToJsonValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::SIOJLibrary_eventStructToJsonValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJLibrary_StructToJsonValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJLibrary_StructToJsonValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USIOJLibrary Function StructToJsonValue ************************************

// ********** Begin Class USIOJLibrary *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIOJLibrary;
UClass* USIOJLibrary::GetPrivateStaticClass()
{
	using TClass = USIOJLibrary;
	if (!Z_Registration_Info_UClass_USIOJLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIOJLibrary"),
			Z_Registration_Info_UClass_USIOJLibrary.InnerSingleton,
			StaticRegisterNativesUSIOJLibrary,
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
	return Z_Registration_Info_UClass_USIOJLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIOJLibrary_NoRegister()
{
	return USIOJLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIOJLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Usefull tools for REST communications\n */" },
#endif
		{ "IncludePath", "SIOJLibrary.h" },
		{ "ModuleRelativePath", "Public/SIOJLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Usefull tools for REST communications" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USIOJLibrary constinit property declarations *****************************
// ********** End Class USIOJLibrary constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Base64Decode"), .Pointer = &USIOJLibrary::execBase64Decode },
		{ .NameUTF8 = UTF8TEXT("Base64DecodeBytes"), .Pointer = &USIOJLibrary::execBase64DecodeBytes },
		{ .NameUTF8 = UTF8TEXT("Base64Encode"), .Pointer = &USIOJLibrary::execBase64Encode },
		{ .NameUTF8 = UTF8TEXT("Base64EncodeBytes"), .Pointer = &USIOJLibrary::execBase64EncodeBytes },
		{ .NameUTF8 = UTF8TEXT("CallURL"), .Pointer = &USIOJLibrary::execCallURL },
		{ .NameUTF8 = UTF8TEXT("Conv_ArrayToJsonValue"), .Pointer = &USIOJLibrary::execConv_ArrayToJsonValue },
		{ .NameUTF8 = UTF8TEXT("Conv_BoolToJsonValue"), .Pointer = &USIOJLibrary::execConv_BoolToJsonValue },
		{ .NameUTF8 = UTF8TEXT("Conv_BytesToJsonValue"), .Pointer = &USIOJLibrary::execConv_BytesToJsonValue },
		{ .NameUTF8 = UTF8TEXT("Conv_FloatToJsonValue"), .Pointer = &USIOJLibrary::execConv_FloatToJsonValue },
		{ .NameUTF8 = UTF8TEXT("Conv_IntToJsonValue"), .Pointer = &USIOJLibrary::execConv_IntToJsonValue },
		{ .NameUTF8 = UTF8TEXT("Conv_JsonObjectToJsonValue"), .Pointer = &USIOJLibrary::execConv_JsonObjectToJsonValue },
		{ .NameUTF8 = UTF8TEXT("Conv_JsonValueToBool"), .Pointer = &USIOJLibrary::execConv_JsonValueToBool },
		{ .NameUTF8 = UTF8TEXT("Conv_JsonValueToBytes"), .Pointer = &USIOJLibrary::execConv_JsonValueToBytes },
		{ .NameUTF8 = UTF8TEXT("Conv_JsonValueToFloat"), .Pointer = &USIOJLibrary::execConv_JsonValueToFloat },
		{ .NameUTF8 = UTF8TEXT("Conv_JsonValueToInt"), .Pointer = &USIOJLibrary::execConv_JsonValueToInt },
		{ .NameUTF8 = UTF8TEXT("Conv_JsonValueToJsonObject"), .Pointer = &USIOJLibrary::execConv_JsonValueToJsonObject },
		{ .NameUTF8 = UTF8TEXT("Conv_SIOJsonObjectToString"), .Pointer = &USIOJLibrary::execConv_SIOJsonObjectToString },
		{ .NameUTF8 = UTF8TEXT("Conv_SIOJsonValueToString"), .Pointer = &USIOJLibrary::execConv_SIOJsonValueToString },
		{ .NameUTF8 = UTF8TEXT("Conv_StringToJsonValue"), .Pointer = &USIOJLibrary::execConv_StringToJsonValue },
		{ .NameUTF8 = UTF8TEXT("GetURLBinary"), .Pointer = &USIOJLibrary::execGetURLBinary },
		{ .NameUTF8 = UTF8TEXT("JsonObjectToStruct"), .Pointer = &USIOJLibrary::execJsonObjectToStruct },
		{ .NameUTF8 = UTF8TEXT("LoadJsonFileToStruct"), .Pointer = &USIOJLibrary::execLoadJsonFileToStruct },
		{ .NameUTF8 = UTF8TEXT("PercentEncode"), .Pointer = &USIOJLibrary::execPercentEncode },
		{ .NameUTF8 = UTF8TEXT("SaveStructToJsonFile"), .Pointer = &USIOJLibrary::execSaveStructToJsonFile },
		{ .NameUTF8 = UTF8TEXT("StringToJsonValueArray"), .Pointer = &USIOJLibrary::execStringToJsonValueArray },
		{ .NameUTF8 = UTF8TEXT("StructToJsonObject"), .Pointer = &USIOJLibrary::execStructToJsonObject },
		{ .NameUTF8 = UTF8TEXT("StructToJsonValue"), .Pointer = &USIOJLibrary::execStructToJsonValue },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIOJLibrary_Base64Decode, "Base64Decode" }, // 3638107084
		{ &Z_Construct_UFunction_USIOJLibrary_Base64DecodeBytes, "Base64DecodeBytes" }, // 3321060365
		{ &Z_Construct_UFunction_USIOJLibrary_Base64Encode, "Base64Encode" }, // 106388225
		{ &Z_Construct_UFunction_USIOJLibrary_Base64EncodeBytes, "Base64EncodeBytes" }, // 1695620906
		{ &Z_Construct_UFunction_USIOJLibrary_CallURL, "CallURL" }, // 2064596781
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_ArrayToJsonValue, "Conv_ArrayToJsonValue" }, // 3315564678
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_BoolToJsonValue, "Conv_BoolToJsonValue" }, // 769829038
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_BytesToJsonValue, "Conv_BytesToJsonValue" }, // 1504780304
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_FloatToJsonValue, "Conv_FloatToJsonValue" }, // 1301798652
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_IntToJsonValue, "Conv_IntToJsonValue" }, // 129215587
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_JsonObjectToJsonValue, "Conv_JsonObjectToJsonValue" }, // 791714867
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBool, "Conv_JsonValueToBool" }, // 254423731
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToBytes, "Conv_JsonValueToBytes" }, // 512322604
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToFloat, "Conv_JsonValueToFloat" }, // 1941361967
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToInt, "Conv_JsonValueToInt" }, // 2267958363
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_JsonValueToJsonObject, "Conv_JsonValueToJsonObject" }, // 2114418586
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonObjectToString, "Conv_SIOJsonObjectToString" }, // 1190951641
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_SIOJsonValueToString, "Conv_SIOJsonValueToString" }, // 2498322986
		{ &Z_Construct_UFunction_USIOJLibrary_Conv_StringToJsonValue, "Conv_StringToJsonValue" }, // 1467244198
		{ &Z_Construct_UFunction_USIOJLibrary_GetURLBinary, "GetURLBinary" }, // 674920161
		{ &Z_Construct_UFunction_USIOJLibrary_JsonObjectToStruct, "JsonObjectToStruct" }, // 3594349554
		{ &Z_Construct_UFunction_USIOJLibrary_LoadJsonFileToStruct, "LoadJsonFileToStruct" }, // 677015893
		{ &Z_Construct_UFunction_USIOJLibrary_PercentEncode, "PercentEncode" }, // 3866690714
		{ &Z_Construct_UFunction_USIOJLibrary_SaveStructToJsonFile, "SaveStructToJsonFile" }, // 1302332862
		{ &Z_Construct_UFunction_USIOJLibrary_StringToJsonValueArray, "StringToJsonValueArray" }, // 916471903
		{ &Z_Construct_UFunction_USIOJLibrary_StructToJsonObject, "StructToJsonObject" }, // 1957204479
		{ &Z_Construct_UFunction_USIOJLibrary_StructToJsonValue, "StructToJsonValue" }, // 1636896432
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIOJLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIOJLibrary_Statics
UObject* (*const Z_Construct_UClass_USIOJLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SIOJson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIOJLibrary_Statics::ClassParams = {
	&USIOJLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIOJLibrary_Statics::Class_MetaDataParams)
};
void USIOJLibrary::StaticRegisterNativesUSIOJLibrary()
{
	UClass* Class = USIOJLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIOJLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIOJLibrary()
{
	if (!Z_Registration_Info_UClass_USIOJLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIOJLibrary.OuterSingleton, Z_Construct_UClass_USIOJLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIOJLibrary.OuterSingleton;
}
USIOJLibrary::USIOJLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIOJLibrary);
USIOJLibrary::~USIOJLibrary() {}
// ********** End Class USIOJLibrary ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h__Script_SIOJson_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIOJCallResponse::StaticStruct, Z_Construct_UScriptStruct_FSIOJCallResponse_Statics::NewStructOps, TEXT("SIOJCallResponse"),&Z_Registration_Info_UScriptStruct_FSIOJCallResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIOJCallResponse), 1039073111U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIOJLibrary, USIOJLibrary::StaticClass, TEXT("USIOJLibrary"), &Z_Registration_Info_UClass_USIOJLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIOJLibrary), 4276883503U) },
	};
}; // Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h__Script_SIOJson_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h__Script_SIOJson_1134031740{
	TEXT("/Script/SIOJson"),
	Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h__Script_SIOJson_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h__Script_SIOJson_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h__Script_SIOJson_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJLibrary_h__Script_SIOJson_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
