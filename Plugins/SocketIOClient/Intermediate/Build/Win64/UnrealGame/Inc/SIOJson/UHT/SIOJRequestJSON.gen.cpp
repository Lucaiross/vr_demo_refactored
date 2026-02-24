// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIOJRequestJSON.h"
#include "Engine/LatentActionManager.h"
#include "SIOJsonObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIOJRequestJSON() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
SIOJSON_API UClass* Z_Construct_UClass_USIOJRequestJSON();
SIOJSON_API UClass* Z_Construct_UClass_USIOJRequestJSON_NoRegister();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonObject_NoRegister();
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIORequestContentType();
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIORequestStatus();
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIORequestVerb();
SIOJSON_API UFunction* Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature();
SIOJSON_API UFunction* Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SIOJson();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRequestComplete ****************************************************
struct Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics
{
	struct _Script_SIOJson_eventOnRequestComplete_Parms
	{
		USIOJRequestJSON* Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generate a delegates for callback events */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a delegates for callback events" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestComplete constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestComplete constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestComplete Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SIOJson_eventOnRequestComplete_Parms, Request), Z_Construct_UClass_USIOJRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestComplete Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SIOJson, nullptr, "OnRequestComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::_Script_SIOJson_eventOnRequestComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::_Script_SIOJson_eventOnRequestComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, USIOJRequestJSON* Request)
{
	struct _Script_SIOJson_eventOnRequestComplete_Parms
	{
		USIOJRequestJSON* Request;
	};
	_Script_SIOJson_eventOnRequestComplete_Parms Parms;
	Parms.Request=Request;
	OnRequestComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestComplete ******************************************************

// ********** Begin Delegate FOnRequestFail ********************************************************
struct Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics
{
	struct _Script_SIOJson_eventOnRequestFail_Parms
	{
		USIOJRequestJSON* Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestFail constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestFail constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestFail Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SIOJson_eventOnRequestFail_Parms, Request), Z_Construct_UClass_USIOJRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestFail Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SIOJson, nullptr, "OnRequestFail__DelegateSignature", 	Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::_Script_SIOJson_eventOnRequestFail_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::_Script_SIOJson_eventOnRequestFail_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestFail_DelegateWrapper(const FMulticastScriptDelegate& OnRequestFail, USIOJRequestJSON* Request)
{
	struct _Script_SIOJson_eventOnRequestFail_Parms
	{
		USIOJRequestJSON* Request;
	};
	_Script_SIOJson_eventOnRequestFail_Parms Parms;
	Parms.Request=Request;
	OnRequestFail.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestFail **********************************************************

// ********** Begin Class USIOJRequestJSON Function AddTag *****************************************
struct Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics
{
	struct SIOJRequestJSON_eventAddTag_Parms
	{
		FName Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add tag to this request */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add tag to this request" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddTag constinit property declarations ********************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTag constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTag Property Definitions *******************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventAddTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::PropPointers) < 2048);
// ********** End Function AddTag Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "AddTag", 	Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::SIOJRequestJSON_eventAddTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::SIOJRequestJSON_eventAddTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_AddTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execAddTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function AddTag *******************************************

// ********** Begin Class USIOJRequestJSON Function ApplyURL ***************************************
struct Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics
{
	struct SIOJRequestJSON_eventApplyURL_Parms
	{
		FString Url;
		USIOJsonObject* Result;
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Open URL in latent mode */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open URL in latent mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyURL constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyURL constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyURL Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventApplyURL_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventApplyURL_Parms, Result), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventApplyURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventApplyURL_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::PropPointers) < 2048);
// ********** End Function ApplyURL Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ApplyURL", 	Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::SIOJRequestJSON_eventApplyURL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::SIOJRequestJSON_eventApplyURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ApplyURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execApplyURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_GET_OBJECT_REF(USIOJsonObject,Z_Param_Out_Result);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyURL(Z_Param_Url,P_ARG_GC_BARRIER(Z_Param_Out_Result),Z_Param_WorldContextObject,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function ApplyURL *****************************************

// ********** Begin Class USIOJRequestJSON Function Cancel *****************************************
struct Z_Construct_UFunction_USIOJRequestJSON_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cancel latent response waiting  */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel latent response waiting" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Cancel constinit property declarations ********************************
// ********** End Function Cancel constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "Cancel", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_Cancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIOJRequestJSON_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function Cancel *******************************************

// ********** Begin Class USIOJRequestJSON Function ConstructRequest *******************************
struct Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics
{
	struct SIOJRequestJSON_eventConstructRequest_Parms
	{
		UObject* WorldContextObject;
		USIOJRequestJSON* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates new request (totally empty) */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Request (Empty)" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates new request (totally empty)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructRequest constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructRequest constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructRequest Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequest_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequest_Parms, ReturnValue), Z_Construct_UClass_USIOJRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::PropPointers) < 2048);
// ********** End Function ConstructRequest Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ConstructRequest", 	Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::SIOJRequestJSON_eventConstructRequest_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::SIOJRequestJSON_eventConstructRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execConstructRequest)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJRequestJSON**)Z_Param__Result=USIOJRequestJSON::ConstructRequest(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function ConstructRequest *********************************

// ********** Begin Class USIOJRequestJSON Function ConstructRequestExt ****************************
struct Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics
{
	struct SIOJRequestJSON_eventConstructRequestExt_Parms
	{
		UObject* WorldContextObject;
		ESIORequestVerb Verb;
		ESIORequestContentType ContentType;
		USIOJRequestJSON* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates new request with defined verb and content type */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Request" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates new request with defined verb and content type" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructRequestExt constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructRequestExt constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructRequestExt Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequestExt_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequestExt_Parms, Verb), Z_Construct_UEnum_SIOJson_ESIORequestVerb, METADATA_PARAMS(0, nullptr) }; // 795667494
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequestExt_Parms, ContentType), Z_Construct_UEnum_SIOJson_ESIORequestContentType, METADATA_PARAMS(0, nullptr) }; // 3626241558
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequestExt_Parms, ReturnValue), Z_Construct_UClass_USIOJRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_Verb_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_Verb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ContentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::PropPointers) < 2048);
// ********** End Function ConstructRequestExt Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ConstructRequestExt", 	Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::SIOJRequestJSON_eventConstructRequestExt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::SIOJRequestJSON_eventConstructRequestExt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execConstructRequestExt)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(ESIORequestVerb,Z_Param_Verb);
	P_GET_ENUM(ESIORequestContentType,Z_Param_ContentType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJRequestJSON**)Z_Param__Result=USIOJRequestJSON::ConstructRequestExt(Z_Param_WorldContextObject,ESIORequestVerb(Z_Param_Verb),ESIORequestContentType(Z_Param_ContentType));
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function ConstructRequestExt ******************************

// ********** Begin Class USIOJRequestJSON Function GetAllResponseHeaders **************************
struct Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics
{
	struct SIOJRequestJSON_eventGetAllResponseHeaders_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get list of all response headers */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get list of all response headers" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllResponseHeaders constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllResponseHeaders constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllResponseHeaders Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetAllResponseHeaders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::PropPointers) < 2048);
// ********** End Function GetAllResponseHeaders Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetAllResponseHeaders", 	Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::SIOJRequestJSON_eventGetAllResponseHeaders_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::SIOJRequestJSON_eventGetAllResponseHeaders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetAllResponseHeaders)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllResponseHeaders();
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function GetAllResponseHeaders ****************************

// ********** Begin Class USIOJRequestJSON Function GetRequestObject *******************************
struct Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics
{
	struct SIOJRequestJSON_eventGetRequestObject_Parms
	{
		USIOJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the Request Json object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Request Json object" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRequestObject constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRequestObject constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRequestObject Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetRequestObject_Parms, ReturnValue), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::PropPointers) < 2048);
// ********** End Function GetRequestObject Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetRequestObject", 	Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::SIOJRequestJSON_eventGetRequestObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::SIOJRequestJSON_eventGetRequestObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetRequestObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonObject**)Z_Param__Result=P_THIS->GetRequestObject();
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function GetRequestObject *********************************

// ********** Begin Class USIOJRequestJSON Function GetResponseCode ********************************
struct Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics
{
	struct SIOJRequestJSON_eventGetResponseCode_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the response code of the last query */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the response code of the last query" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetResponseCode constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResponseCode constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResponseCode Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetResponseCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::PropPointers) < 2048);
// ********** End Function GetResponseCode Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetResponseCode", 	Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::SIOJRequestJSON_eventGetResponseCode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::SIOJRequestJSON_eventGetResponseCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetResponseCode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetResponseCode();
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function GetResponseCode **********************************

// ********** Begin Class USIOJRequestJSON Function GetResponseHeader ******************************
struct Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics
{
	struct SIOJRequestJSON_eventGetResponseHeader_Parms
	{
		FString HeaderName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get value of desired response header */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get value of desired response header" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResponseHeader constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResponseHeader constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResponseHeader Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetResponseHeader_Parms, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderName_MetaData), NewProp_HeaderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetResponseHeader_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::PropPointers) < 2048);
// ********** End Function GetResponseHeader Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetResponseHeader", 	Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::SIOJRequestJSON_eventGetResponseHeader_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::SIOJRequestJSON_eventGetResponseHeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetResponseHeader)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetResponseHeader(Z_Param_HeaderName);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function GetResponseHeader ********************************

// ********** Begin Class USIOJRequestJSON Function GetResponseObject ******************************
struct Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics
{
	struct SIOJRequestJSON_eventGetResponseObject_Parms
	{
		USIOJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the Response Json object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Response Json object" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetResponseObject constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResponseObject constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResponseObject Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetResponseObject_Parms, ReturnValue), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::PropPointers) < 2048);
// ********** End Function GetResponseObject Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetResponseObject", 	Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::SIOJRequestJSON_eventGetResponseObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::SIOJRequestJSON_eventGetResponseObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetResponseObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonObject**)Z_Param__Result=P_THIS->GetResponseObject();
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function GetResponseObject ********************************

// ********** Begin Class USIOJRequestJSON Function GetStatus **************************************
struct Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics
{
	struct SIOJRequestJSON_eventGetStatus_Parms
	{
		ESIORequestStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get status of http request */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get status of http request" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetStatus constinit property declarations *****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStatus constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStatus Property Definitions ****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_SIOJson_ESIORequestStatus, METADATA_PARAMS(0, nullptr) }; // 2431702031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::PropPointers) < 2048);
// ********** End Function GetStatus Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetStatus", 	Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::SIOJRequestJSON_eventGetStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::SIOJRequestJSON_eventGetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESIORequestStatus*)Z_Param__Result=P_THIS->GetStatus();
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function GetStatus ****************************************

// ********** Begin Class USIOJRequestJSON Function GetURL *****************************************
struct Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics
{
	struct SIOJRequestJSON_eventGetURL_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get url of http request */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get url of http request" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetURL constinit property declarations ********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetURL constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetURL Property Definitions *******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetURL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::PropPointers) < 2048);
// ********** End Function GetURL Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetURL", 	Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::SIOJRequestJSON_eventGetURL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::SIOJRequestJSON_eventGetURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetURL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetURL();
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function GetURL *******************************************

// ********** Begin Class USIOJRequestJSON Function HasTag *****************************************
struct Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics
{
	struct SIOJRequestJSON_eventHasTag_Parms
	{
		FName Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See if this request contains the supplied tag */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See if this request contains the supplied tag" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HasTag constinit property declarations ********************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasTag constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasTag Property Definitions *******************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventHasTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJRequestJSON_eventHasTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJRequestJSON_eventHasTag_Parms), &Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::PropPointers) < 2048);
// ********** End Function HasTag Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "HasTag", 	Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::SIOJRequestJSON_eventHasTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::SIOJRequestJSON_eventHasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_HasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execHasTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function HasTag *******************************************

// ********** Begin Class USIOJRequestJSON Function ProcessURL *************************************
struct Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics
{
	struct SIOJRequestJSON_eventProcessURL_Parms
	{
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Open URL with current setup */" },
#endif
		{ "CPP_Default_Url", "http://alyamkin.com" },
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open URL with current setup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessURL constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessURL constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessURL Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventProcessURL_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::PropPointers) < 2048);
// ********** End Function ProcessURL Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ProcessURL", 	Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::SIOJRequestJSON_eventProcessURL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::SIOJRequestJSON_eventProcessURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ProcessURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execProcessURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessURL(Z_Param_Url);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function ProcessURL ***************************************

// ********** Begin Class USIOJRequestJSON Function RemoveTag **************************************
struct Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics
{
	struct SIOJRequestJSON_eventRemoveTag_Parms
	{
		FName Tag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Remove tag from this request \n\x09 *\n\x09 * @return Number of removed elements \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove tag from this request\n\n@return Number of removed elements" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTag constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTag constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTag Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventRemoveTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventRemoveTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::PropPointers) < 2048);
// ********** End Function RemoveTag Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "RemoveTag", 	Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::SIOJRequestJSON_eventRemoveTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::SIOJRequestJSON_eventRemoveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_RemoveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execRemoveTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function RemoveTag ****************************************

// ********** Begin Class USIOJRequestJSON Function ResetData **************************************
struct Z_Construct_UFunction_USIOJRequestJSON_ResetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset all internal saved data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset all internal saved data" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResetData constinit property declarations *****************************
// ********** End Function ResetData constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ResetData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ResetData", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ResetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ResetData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ResetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ResetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execResetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetData();
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function ResetData ****************************************

// ********** Begin Class USIOJRequestJSON Function ResetRequestData *******************************
struct Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset saved request data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset saved request data" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResetRequestData constinit property declarations **********************
// ********** End Function ResetRequestData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ResetRequestData", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execResetRequestData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetRequestData();
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function ResetRequestData *********************************

// ********** Begin Class USIOJRequestJSON Function ResetResponseData ******************************
struct Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset saved response data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset saved response data" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResetResponseData constinit property declarations *********************
// ********** End Function ResetResponseData constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ResetResponseData", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execResetResponseData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetResponseData();
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function ResetResponseData ********************************

// ********** Begin Class USIOJRequestJSON Function SetBinaryContentType ***************************
struct Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics
{
	struct SIOJRequestJSON_eventSetBinaryContentType_Parms
	{
		FString ContentType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set content type of the request for binary post data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set content type of the request for binary post data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBinaryContentType constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBinaryContentType constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBinaryContentType Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetBinaryContentType_Parms, ContentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentType_MetaData), NewProp_ContentType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::PropPointers) < 2048);
// ********** End Function SetBinaryContentType Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetBinaryContentType", 	Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::SIOJRequestJSON_eventSetBinaryContentType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::SIOJRequestJSON_eventSetBinaryContentType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetBinaryContentType)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBinaryContentType(Z_Param_ContentType);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function SetBinaryContentType *****************************

// ********** Begin Class USIOJRequestJSON Function SetBinaryRequestContent ************************
struct Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics
{
	struct SIOJRequestJSON_eventSetBinaryRequestContent_Parms
	{
		TArray<uint8> Content;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set content of the request for binary post data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set content of the request for binary post data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBinaryRequestContent constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBinaryRequestContent constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBinaryRequestContent Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetBinaryRequestContent_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::PropPointers) < 2048);
// ********** End Function SetBinaryRequestContent Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetBinaryRequestContent", 	Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::SIOJRequestJSON_eventSetBinaryRequestContent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::SIOJRequestJSON_eventSetBinaryRequestContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetBinaryRequestContent)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBinaryRequestContent(Z_Param_Out_Content);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function SetBinaryRequestContent **************************

// ********** Begin Class USIOJRequestJSON Function SetContentType *********************************
struct Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics
{
	struct SIOJRequestJSON_eventSetContentType_Parms
	{
		ESIORequestContentType ContentType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set content type to the request. If you're using the x-www-form-urlencoded, \n\x09 * params/constaints should be defined as key=ValueString pairs from Json data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set content type to the request. If you're using the x-www-form-urlencoded,\nparams/constaints should be defined as key=ValueString pairs from Json data" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetContentType constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetContentType constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetContentType Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetContentType_Parms, ContentType), Z_Construct_UEnum_SIOJson_ESIORequestContentType, METADATA_PARAMS(0, nullptr) }; // 3626241558
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::NewProp_ContentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::NewProp_ContentType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::PropPointers) < 2048);
// ********** End Function SetContentType Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetContentType", 	Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::SIOJRequestJSON_eventSetContentType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::SIOJRequestJSON_eventSetContentType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetContentType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetContentType)
{
	P_GET_ENUM(ESIORequestContentType,Z_Param_ContentType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetContentType(ESIORequestContentType(Z_Param_ContentType));
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function SetContentType ***********************************

// ********** Begin Class USIOJRequestJSON Function SetCustomVerb **********************************
struct Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics
{
	struct SIOJRequestJSON_eventSetCustomVerb_Parms
	{
		FString Verb;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set custom verb to the request */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set custom verb to the request" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomVerb constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomVerb constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomVerb Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetCustomVerb_Parms, Verb), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::NewProp_Verb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::PropPointers) < 2048);
// ********** End Function SetCustomVerb Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetCustomVerb", 	Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::SIOJRequestJSON_eventSetCustomVerb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::SIOJRequestJSON_eventSetCustomVerb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetCustomVerb)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Verb);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomVerb(Z_Param_Verb);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function SetCustomVerb ************************************

// ********** Begin Class USIOJRequestJSON Function SetHeader **************************************
struct Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics
{
	struct SIOJRequestJSON_eventSetHeader_Parms
	{
		FString HeaderName;
		FString HeaderValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets optional header info */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets optional header info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHeader constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHeader constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHeader Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetHeader_Parms, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderName_MetaData), NewProp_HeaderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::NewProp_HeaderValue = { "HeaderValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetHeader_Parms, HeaderValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderValue_MetaData), NewProp_HeaderValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::NewProp_HeaderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::NewProp_HeaderValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::PropPointers) < 2048);
// ********** End Function SetHeader Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetHeader", 	Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::SIOJRequestJSON_eventSetHeader_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::SIOJRequestJSON_eventSetHeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetHeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetHeader)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeader(Z_Param_HeaderName,Z_Param_HeaderValue);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function SetHeader ****************************************

// ********** Begin Class USIOJRequestJSON Function SetRequestObject *******************************
struct Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics
{
	struct SIOJRequestJSON_eventSetRequestObject_Parms
	{
		USIOJsonObject* JsonObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the Request Json object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Request Json object" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetRequestObject constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRequestObject constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRequestObject Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetRequestObject_Parms, JsonObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::NewProp_JsonObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::PropPointers) < 2048);
// ********** End Function SetRequestObject Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetRequestObject", 	Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::SIOJRequestJSON_eventSetRequestObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::SIOJRequestJSON_eventSetRequestObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetRequestObject)
{
	P_GET_OBJECT(USIOJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequestObject(Z_Param_JsonObject);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function SetRequestObject *********************************

// ********** Begin Class USIOJRequestJSON Function SetResponseObject ******************************
struct Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics
{
	struct SIOJRequestJSON_eventSetResponseObject_Parms
	{
		USIOJsonObject* JsonObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the Response Json object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Response Json object" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetResponseObject constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetResponseObject constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetResponseObject Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetResponseObject_Parms, JsonObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::NewProp_JsonObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::PropPointers) < 2048);
// ********** End Function SetResponseObject Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetResponseObject", 	Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::SIOJRequestJSON_eventSetResponseObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::SIOJRequestJSON_eventSetResponseObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetResponseObject)
{
	P_GET_OBJECT(USIOJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponseObject(Z_Param_JsonObject);
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function SetResponseObject ********************************

// ********** Begin Class USIOJRequestJSON Function SetVerb ****************************************
struct Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics
{
	struct SIOJRequestJSON_eventSetVerb_Parms
	{
		ESIORequestVerb Verb;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set verb to the request */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set verb to the request" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetVerb constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVerb constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVerb Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetVerb_Parms, Verb), Z_Construct_UEnum_SIOJson_ESIORequestVerb, METADATA_PARAMS(0, nullptr) }; // 795667494
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::NewProp_Verb_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::NewProp_Verb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::PropPointers) < 2048);
// ********** End Function SetVerb Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetVerb", 	Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::SIOJRequestJSON_eventSetVerb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::SIOJRequestJSON_eventSetVerb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetVerb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetVerb)
{
	P_GET_ENUM(ESIORequestVerb,Z_Param_Verb);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerb(ESIORequestVerb(Z_Param_Verb));
	P_NATIVE_END;
}
// ********** End Class USIOJRequestJSON Function SetVerb ******************************************

// ********** Begin Class USIOJRequestJSON *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIOJRequestJSON;
UClass* USIOJRequestJSON::GetPrivateStaticClass()
{
	using TClass = USIOJRequestJSON;
	if (!Z_Registration_Info_UClass_USIOJRequestJSON.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIOJRequestJSON"),
			Z_Registration_Info_UClass_USIOJRequestJSON.InnerSingleton,
			StaticRegisterNativesUSIOJRequestJSON,
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
	return Z_Registration_Info_UClass_USIOJRequestJSON.InnerSingleton;
}
UClass* Z_Construct_UClass_USIOJRequestJSON_NoRegister()
{
	return USIOJRequestJSON::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIOJRequestJSON_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * General helper class http requests via blueprints\n */" },
#endif
		{ "IncludePath", "SIOJRequestJSON.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "General helper class http requests via blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestComplete_MetaData[] = {
		{ "Category", "SIOJ|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event occured when the request has been completed */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event occured when the request has been completed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestFail_MetaData[] = {
		{ "Category", "SIOJ|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event occured when the request wasn't successfull */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event occured when the request wasn't successfull" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseContent_MetaData[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Request response stored as a string */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request response stored as a string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidJsonResponse_MetaData[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the response valid JSON? */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the response valid JSON?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldHaveBinaryResponse_MetaData[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If this is true it will call back on the binary callback instead of json */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is true it will call back on the binary callback instead of json" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal request data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal request data stored as JSON" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinaryContentType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Response data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Response data stored as JSON" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USIOJRequestJSON constinit property declarations *************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFail;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseContent;
	static void NewProp_bIsValidJsonResponse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidJsonResponse;
	static void NewProp_bShouldHaveBinaryResponse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHaveBinaryResponse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequestBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestBytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BinaryContentType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIOJRequestJSON constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddTag"), .Pointer = &USIOJRequestJSON::execAddTag },
		{ .NameUTF8 = UTF8TEXT("ApplyURL"), .Pointer = &USIOJRequestJSON::execApplyURL },
		{ .NameUTF8 = UTF8TEXT("Cancel"), .Pointer = &USIOJRequestJSON::execCancel },
		{ .NameUTF8 = UTF8TEXT("ConstructRequest"), .Pointer = &USIOJRequestJSON::execConstructRequest },
		{ .NameUTF8 = UTF8TEXT("ConstructRequestExt"), .Pointer = &USIOJRequestJSON::execConstructRequestExt },
		{ .NameUTF8 = UTF8TEXT("GetAllResponseHeaders"), .Pointer = &USIOJRequestJSON::execGetAllResponseHeaders },
		{ .NameUTF8 = UTF8TEXT("GetRequestObject"), .Pointer = &USIOJRequestJSON::execGetRequestObject },
		{ .NameUTF8 = UTF8TEXT("GetResponseCode"), .Pointer = &USIOJRequestJSON::execGetResponseCode },
		{ .NameUTF8 = UTF8TEXT("GetResponseHeader"), .Pointer = &USIOJRequestJSON::execGetResponseHeader },
		{ .NameUTF8 = UTF8TEXT("GetResponseObject"), .Pointer = &USIOJRequestJSON::execGetResponseObject },
		{ .NameUTF8 = UTF8TEXT("GetStatus"), .Pointer = &USIOJRequestJSON::execGetStatus },
		{ .NameUTF8 = UTF8TEXT("GetURL"), .Pointer = &USIOJRequestJSON::execGetURL },
		{ .NameUTF8 = UTF8TEXT("HasTag"), .Pointer = &USIOJRequestJSON::execHasTag },
		{ .NameUTF8 = UTF8TEXT("ProcessURL"), .Pointer = &USIOJRequestJSON::execProcessURL },
		{ .NameUTF8 = UTF8TEXT("RemoveTag"), .Pointer = &USIOJRequestJSON::execRemoveTag },
		{ .NameUTF8 = UTF8TEXT("ResetData"), .Pointer = &USIOJRequestJSON::execResetData },
		{ .NameUTF8 = UTF8TEXT("ResetRequestData"), .Pointer = &USIOJRequestJSON::execResetRequestData },
		{ .NameUTF8 = UTF8TEXT("ResetResponseData"), .Pointer = &USIOJRequestJSON::execResetResponseData },
		{ .NameUTF8 = UTF8TEXT("SetBinaryContentType"), .Pointer = &USIOJRequestJSON::execSetBinaryContentType },
		{ .NameUTF8 = UTF8TEXT("SetBinaryRequestContent"), .Pointer = &USIOJRequestJSON::execSetBinaryRequestContent },
		{ .NameUTF8 = UTF8TEXT("SetContentType"), .Pointer = &USIOJRequestJSON::execSetContentType },
		{ .NameUTF8 = UTF8TEXT("SetCustomVerb"), .Pointer = &USIOJRequestJSON::execSetCustomVerb },
		{ .NameUTF8 = UTF8TEXT("SetHeader"), .Pointer = &USIOJRequestJSON::execSetHeader },
		{ .NameUTF8 = UTF8TEXT("SetRequestObject"), .Pointer = &USIOJRequestJSON::execSetRequestObject },
		{ .NameUTF8 = UTF8TEXT("SetResponseObject"), .Pointer = &USIOJRequestJSON::execSetResponseObject },
		{ .NameUTF8 = UTF8TEXT("SetVerb"), .Pointer = &USIOJRequestJSON::execSetVerb },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIOJRequestJSON_AddTag, "AddTag" }, // 2753415343
		{ &Z_Construct_UFunction_USIOJRequestJSON_ApplyURL, "ApplyURL" }, // 1719819666
		{ &Z_Construct_UFunction_USIOJRequestJSON_Cancel, "Cancel" }, // 1148461671
		{ &Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest, "ConstructRequest" }, // 1876074145
		{ &Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt, "ConstructRequestExt" }, // 2407073195
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders, "GetAllResponseHeaders" }, // 3592048743
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject, "GetRequestObject" }, // 3090620255
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode, "GetResponseCode" }, // 1295293622
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader, "GetResponseHeader" }, // 2439567029
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject, "GetResponseObject" }, // 2528802659
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetStatus, "GetStatus" }, // 1094923662
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetURL, "GetURL" }, // 3648452822
		{ &Z_Construct_UFunction_USIOJRequestJSON_HasTag, "HasTag" }, // 3583109030
		{ &Z_Construct_UFunction_USIOJRequestJSON_ProcessURL, "ProcessURL" }, // 3048356043
		{ &Z_Construct_UFunction_USIOJRequestJSON_RemoveTag, "RemoveTag" }, // 1316030619
		{ &Z_Construct_UFunction_USIOJRequestJSON_ResetData, "ResetData" }, // 605666919
		{ &Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData, "ResetRequestData" }, // 3051247802
		{ &Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData, "ResetResponseData" }, // 2113598599
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType, "SetBinaryContentType" }, // 759798122
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent, "SetBinaryRequestContent" }, // 3240695156
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetContentType, "SetContentType" }, // 3781186616
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb, "SetCustomVerb" }, // 3862690533
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetHeader, "SetHeader" }, // 1901773746
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject, "SetRequestObject" }, // 2906556572
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject, "SetResponseObject" }, // 4255703775
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetVerb, "SetVerb" }, // 2963685253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIOJRequestJSON>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIOJRequestJSON_Statics

// ********** Begin Class USIOJRequestJSON Property Definitions ************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_OnRequestComplete = { "OnRequestComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, OnRequestComplete), Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestComplete_MetaData), NewProp_OnRequestComplete_MetaData) }; // 3689927582
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_OnRequestFail = { "OnRequestFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, OnRequestFail), Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestFail_MetaData), NewProp_OnRequestFail_MetaData) }; // 727937491
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_ResponseContent = { "ResponseContent", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, ResponseContent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseContent_MetaData), NewProp_ResponseContent_MetaData) };
void Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bIsValidJsonResponse_SetBit(void* Obj)
{
	((USIOJRequestJSON*)Obj)->bIsValidJsonResponse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bIsValidJsonResponse = { "bIsValidJsonResponse", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USIOJRequestJSON), &Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bIsValidJsonResponse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValidJsonResponse_MetaData), NewProp_bIsValidJsonResponse_MetaData) };
void Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bShouldHaveBinaryResponse_SetBit(void* Obj)
{
	((USIOJRequestJSON*)Obj)->bShouldHaveBinaryResponse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bShouldHaveBinaryResponse = { "bShouldHaveBinaryResponse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USIOJRequestJSON), &Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bShouldHaveBinaryResponse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldHaveBinaryResponse_MetaData), NewProp_bShouldHaveBinaryResponse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, RequestJsonObj), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestJsonObj_MetaData), NewProp_RequestJsonObj_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestBytes_Inner = { "RequestBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestBytes = { "RequestBytes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, RequestBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestBytes_MetaData), NewProp_RequestBytes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_BinaryContentType = { "BinaryContentType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, BinaryContentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinaryContentType_MetaData), NewProp_BinaryContentType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, ResponseJsonObj), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonObj_MetaData), NewProp_ResponseJsonObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIOJRequestJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_OnRequestComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_OnRequestFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_ResponseContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bIsValidJsonResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bShouldHaveBinaryResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestJsonObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_BinaryContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_ResponseJsonObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJRequestJSON_Statics::PropPointers) < 2048);
// ********** End Class USIOJRequestJSON Property Definitions **************************************
UObject* (*const Z_Construct_UClass_USIOJRequestJSON_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SIOJson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJRequestJSON_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIOJRequestJSON_Statics::ClassParams = {
	&USIOJRequestJSON::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIOJRequestJSON_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIOJRequestJSON_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJRequestJSON_Statics::Class_MetaDataParams), Z_Construct_UClass_USIOJRequestJSON_Statics::Class_MetaDataParams)
};
void USIOJRequestJSON::StaticRegisterNativesUSIOJRequestJSON()
{
	UClass* Class = USIOJRequestJSON::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIOJRequestJSON_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIOJRequestJSON()
{
	if (!Z_Registration_Info_UClass_USIOJRequestJSON.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIOJRequestJSON.OuterSingleton, Z_Construct_UClass_USIOJRequestJSON_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIOJRequestJSON.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIOJRequestJSON);
USIOJRequestJSON::~USIOJRequestJSON() {}
// ********** End Class USIOJRequestJSON ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h__Script_SIOJson_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIOJRequestJSON, USIOJRequestJSON::StaticClass, TEXT("USIOJRequestJSON"), &Z_Registration_Info_UClass_USIOJRequestJSON, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIOJRequestJSON), 2614036268U) },
	};
}; // Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h__Script_SIOJson_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h__Script_SIOJson_1111384269{
	TEXT("/Script/SIOJson"),
	Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h__Script_SIOJson_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h__Script_SIOJson_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
