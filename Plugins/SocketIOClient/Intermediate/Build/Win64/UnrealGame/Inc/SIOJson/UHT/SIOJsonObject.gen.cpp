// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIOJsonObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIOJsonObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonObject();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonObject_NoRegister();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_SIOJson();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIOJsonObject Function ConstructJsonObject ******************************
struct Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics
{
	struct SIOJsonObject_eventConstructJsonObject_Parms
	{
		UObject* WorldContextObject;
		USIOJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json object, cannot be pure  */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Object" },
		{ "HidePin", "WorldContextObject" },
		{ "KeyWords", "create make" },
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json object, cannot be pure" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructJsonObject constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructJsonObject constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructJsonObject Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventConstructJsonObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventConstructJsonObject_Parms, ReturnValue), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::PropPointers) < 2048);
// ********** End Function ConstructJsonObject Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "ConstructJsonObject", 	Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::SIOJsonObject_eventConstructJsonObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::SIOJsonObject_eventConstructJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execConstructJsonObject)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonObject**)Z_Param__Result=USIOJsonObject::ConstructJsonObject(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function ConstructJsonObject ********************************

// ********** Begin Class USIOJsonObject Function DecodeJson ***************************************
struct Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics
{
	struct SIOJsonObject_eventDecodeJson_Parms
	{
		FString JsonString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Construct Json object from string */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Construct Json object from string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DecodeJson constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DecodeJson constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DecodeJson Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventDecodeJson_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
void Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventDecodeJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventDecodeJson_Parms), &Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::PropPointers) < 2048);
// ********** End Function DecodeJson Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "DecodeJson", 	Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::SIOJsonObject_eventDecodeJson_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::SIOJsonObject_eventDecodeJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_DecodeJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execDecodeJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DecodeJson(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function DecodeJson *****************************************

// ********** Begin Class USIOJsonObject Function EncodeJson ***************************************
struct Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics
{
	struct SIOJsonObject_eventEncodeJson_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Serialize Json to string (formatted with line breaks) */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serialize Json to string (formatted with line breaks)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EncodeJson constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EncodeJson constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EncodeJson Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventEncodeJson_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::PropPointers) < 2048);
// ********** End Function EncodeJson Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "EncodeJson", 	Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::SIOJsonObject_eventEncodeJson_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::SIOJsonObject_eventEncodeJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_EncodeJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execEncodeJson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->EncodeJson();
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function EncodeJson *****************************************

// ********** Begin Class USIOJsonObject Function EncodeJsonToSingleString *************************
struct Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics
{
	struct SIOJsonObject_eventEncodeJsonToSingleString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Serialize Json to string (single string without line breaks) */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serialize Json to string (single string without line breaks)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EncodeJsonToSingleString constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EncodeJsonToSingleString constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EncodeJsonToSingleString Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventEncodeJsonToSingleString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::PropPointers) < 2048);
// ********** End Function EncodeJsonToSingleString Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "EncodeJsonToSingleString", 	Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::SIOJsonObject_eventEncodeJsonToSingleString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::SIOJsonObject_eventEncodeJsonToSingleString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execEncodeJsonToSingleString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->EncodeJsonToSingleString();
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function EncodeJsonToSingleString ***************************

// ********** Begin Class USIOJsonObject Function GetArrayField ************************************
struct Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics
{
	struct SIOJsonObject_eventGetArrayField_Parms
	{
		FString FieldName;
		TArray<USIOJsonValue*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Json Array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Json Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetArrayField constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetArrayField constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetArrayField Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::PropPointers) < 2048);
// ********** End Function GetArrayField Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetArrayField", 	Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::SIOJsonObject_eventGetArrayField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::SIOJsonObject_eventGetArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USIOJsonValue*>*)Z_Param__Result=P_THIS->GetArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetArrayField **************************************

// ********** Begin Class USIOJsonObject Function GetBinaryField ***********************************
struct Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics
{
	struct SIOJsonObject_eventGetBinaryField_Parms
	{
		FString FieldName;
		TArray<uint8> OutBinary;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a binary buffer array. */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a binary buffer array." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBinaryField constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutBinary_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBinary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBinaryField constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBinaryField Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetBinaryField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_OutBinary_Inner = { "OutBinary", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_OutBinary = { "OutBinary", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetBinaryField_Parms, OutBinary), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_OutBinary_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_OutBinary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::PropPointers) < 2048);
// ********** End Function GetBinaryField Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetBinaryField", 	Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::SIOJsonObject_eventGetBinaryField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::SIOJsonObject_eventGetBinaryField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetBinaryField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetBinaryField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBinary);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBinaryField(Z_Param_FieldName,Z_Param_Out_OutBinary);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetBinaryField *************************************

// ********** Begin Class USIOJsonObject Function GetBoolArrayField ********************************
struct Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics
{
	struct SIOJsonObject_eventGetBoolArrayField_Parms
	{
		FString FieldName;
		TArray<bool> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Bool Array. Use it only if you're sure that array is uniform! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Bool Array. Use it only if you're sure that array is uniform!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoolArrayField constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoolArrayField constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoolArrayField Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetBoolArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetBoolArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::PropPointers) < 2048);
// ********** End Function GetBoolArrayField Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetBoolArrayField", 	Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::SIOJsonObject_eventGetBoolArrayField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::SIOJsonObject_eventGetBoolArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetBoolArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<bool>*)Z_Param__Result=P_THIS->GetBoolArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetBoolArrayField **********************************

// ********** Begin Class USIOJsonObject Function GetBoolField *************************************
struct Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics
{
	struct SIOJsonObject_eventGetBoolField_Parms
	{
		FString FieldName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a boolean. */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a boolean." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoolField constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoolField constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoolField Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetBoolField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventGetBoolField_Parms), &Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::PropPointers) < 2048);
// ********** End Function GetBoolField Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetBoolField", 	Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::SIOJsonObject_eventGetBoolField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::SIOJsonObject_eventGetBoolField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetBoolField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetBoolField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetBoolField ***************************************

// ********** Begin Class USIOJsonObject Function GetField *****************************************
struct Z_Construct_UFunction_USIOJsonObject_GetField_Statics
{
	struct SIOJsonObject_eventGetField_Parms
	{
		FString FieldName;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a JsonValue */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a JsonValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetField constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetField constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetField Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_GetField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetField_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetField_Statics::PropPointers) < 2048);
// ********** End Function GetField Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetField", 	Z_Construct_UFunction_USIOJsonObject_GetField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetField_Statics::SIOJsonObject_eventGetField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetField_Statics::SIOJsonObject_eventGetField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=P_THIS->GetField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetField *******************************************

// ********** Begin Class USIOJsonObject Function GetFieldNames ************************************
struct Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics
{
	struct SIOJsonObject_eventGetFieldNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a list of field names that exist in the object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a list of field names that exist in the object" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetFieldNames constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFieldNames constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFieldNames Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetFieldNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::PropPointers) < 2048);
// ********** End Function GetFieldNames Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetFieldNames", 	Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::SIOJsonObject_eventGetFieldNames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::SIOJsonObject_eventGetFieldNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetFieldNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetFieldNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetFieldNames();
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetFieldNames **************************************

// ********** Begin Class USIOJsonObject Function GetNumberArrayField ******************************
struct Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics
{
	struct SIOJsonObject_eventGetNumberArrayField_Parms
	{
		FString FieldName;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Number Array. Use it only if you're sure that array is uniform!\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Number Array. Use it only if you're sure that array is uniform!\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumberArrayField constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumberArrayField constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumberArrayField Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetNumberArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetNumberArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::PropPointers) < 2048);
// ********** End Function GetNumberArrayField Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetNumberArrayField", 	Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::SIOJsonObject_eventGetNumberArrayField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::SIOJsonObject_eventGetNumberArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetNumberArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetNumberArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetNumberArrayField ********************************

// ********** Begin Class USIOJsonObject Function GetNumberField ***********************************
struct Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics
{
	struct SIOJsonObject_eventGetNumberField_Parms
	{
		FString FieldName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a number. Ensures that the field is present and is of type Json number.\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a number. Ensures that the field is present and is of type Json number.\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumberField constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumberField constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumberField Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetNumberField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetNumberField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::PropPointers) < 2048);
// ********** End Function GetNumberField Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetNumberField", 	Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::SIOJsonObject_eventGetNumberField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::SIOJsonObject_eventGetNumberField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetNumberField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetNumberField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNumberField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetNumberField *************************************

// ********** Begin Class USIOJsonObject Function GetObjectArrayField ******************************
struct Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics
{
	struct SIOJsonObject_eventGetObjectArrayField_Parms
	{
		FString FieldName;
		TArray<USIOJsonObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as an Object Array. Use it only if you're sure that array is uniform! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as an Object Array. Use it only if you're sure that array is uniform!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetObjectArrayField constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObjectArrayField constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObjectArrayField Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetObjectArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetObjectArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::PropPointers) < 2048);
// ********** End Function GetObjectArrayField Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetObjectArrayField", 	Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::SIOJsonObject_eventGetObjectArrayField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::SIOJsonObject_eventGetObjectArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetObjectArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USIOJsonObject*>*)Z_Param__Result=P_THIS->GetObjectArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetObjectArrayField ********************************

// ********** Begin Class USIOJsonObject Function GetObjectField ***********************************
struct Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics
{
	struct SIOJsonObject_eventGetObjectField_Parms
	{
		FString FieldName;
		USIOJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Json object. */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Json object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetObjectField constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObjectField constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObjectField Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetObjectField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetObjectField_Parms, ReturnValue), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::PropPointers) < 2048);
// ********** End Function GetObjectField Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetObjectField", 	Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::SIOJsonObject_eventGetObjectField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::SIOJsonObject_eventGetObjectField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetObjectField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetObjectField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonObject**)Z_Param__Result=P_THIS->GetObjectField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetObjectField *************************************

// ********** Begin Class USIOJsonObject Function GetStringArrayField ******************************
struct Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics
{
	struct SIOJsonObject_eventGetStringArrayField_Parms
	{
		FString FieldName;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a String Array. Use it only if you're sure that array is uniform! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a String Array. Use it only if you're sure that array is uniform!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStringArrayField constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStringArrayField constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStringArrayField Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetStringArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetStringArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::PropPointers) < 2048);
// ********** End Function GetStringArrayField Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetStringArrayField", 	Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::SIOJsonObject_eventGetStringArrayField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::SIOJsonObject_eventGetStringArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetStringArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetStringArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetStringArrayField ********************************

// ********** Begin Class USIOJsonObject Function GetStringField ***********************************
struct Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics
{
	struct SIOJsonObject_eventGetStringField_Parms
	{
		FString FieldName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a string. */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStringField constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStringField constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStringField Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetStringField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetStringField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::PropPointers) < 2048);
// ********** End Function GetStringField Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetStringField", 	Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::SIOJsonObject_eventGetStringField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::SIOJsonObject_eventGetStringField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetStringField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetStringField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function GetStringField *************************************

// ********** Begin Class USIOJsonObject Function HasField *****************************************
struct Z_Construct_UFunction_USIOJsonObject_HasField_Statics
{
	struct SIOJsonObject_eventHasField_Parms
	{
		FString FieldName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks to see if the FieldName exists in the object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks to see if the FieldName exists in the object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasField constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasField constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasField Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventHasField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventHasField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventHasField_Parms), &Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_HasField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_HasField_Statics::PropPointers) < 2048);
// ********** End Function HasField Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_HasField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "HasField", 	Z_Construct_UFunction_USIOJsonObject_HasField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_HasField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_HasField_Statics::SIOJsonObject_eventHasField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_HasField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_HasField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_HasField_Statics::SIOJsonObject_eventHasField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_HasField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_HasField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execHasField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function HasField *******************************************

// ********** Begin Class USIOJsonObject Function MergeJsonObject **********************************
struct Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics
{
	struct SIOJsonObject_eventMergeJsonObject_Parms
	{
		USIOJsonObject* InJsonObject;
		bool Overwrite;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds all of the fields from one json object to this one */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds all of the fields from one json object to this one" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MergeJsonObject constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InJsonObject;
	static void NewProp_Overwrite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Overwrite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MergeJsonObject constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MergeJsonObject Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_InJsonObject = { "InJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventMergeJsonObject_Parms, InJsonObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_Overwrite_SetBit(void* Obj)
{
	((SIOJsonObject_eventMergeJsonObject_Parms*)Obj)->Overwrite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_Overwrite = { "Overwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventMergeJsonObject_Parms), &Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_Overwrite_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_InJsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_Overwrite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::PropPointers) < 2048);
// ********** End Function MergeJsonObject Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "MergeJsonObject", 	Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::SIOJsonObject_eventMergeJsonObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::SIOJsonObject_eventMergeJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_MergeJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execMergeJsonObject)
{
	P_GET_OBJECT(USIOJsonObject,Z_Param_InJsonObject);
	P_GET_UBOOL(Z_Param_Overwrite);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MergeJsonObject(Z_Param_InJsonObject,Z_Param_Overwrite);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function MergeJsonObject ************************************

// ********** Begin Class USIOJsonObject Function RemoveField **************************************
struct Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics
{
	struct SIOJsonObject_eventRemoveField_Parms
	{
		FString FieldName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove field named FieldName */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove field named FieldName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveField constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveField constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveField Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventRemoveField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::NewProp_FieldName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::PropPointers) < 2048);
// ********** End Function RemoveField Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "RemoveField", 	Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::SIOJsonObject_eventRemoveField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::SIOJsonObject_eventRemoveField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_RemoveField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execRemoveField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function RemoveField ****************************************

// ********** Begin Class USIOJsonObject Function Reset ********************************************
struct Z_Construct_UFunction_USIOJsonObject_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset all internal data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset all internal data" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Reset constinit property declarations *********************************
// ********** End Function Reset constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_Reset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "Reset", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_Reset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIOJsonObject_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function Reset **********************************************

// ********** Begin Class USIOJsonObject Function SetArrayField ************************************
struct Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics
{
	struct SIOJsonObject_eventSetArrayField_Parms
	{
		FString FieldName;
		TArray<USIOJsonValue*> InArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Json Array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Json Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetArrayField constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetArrayField constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetArrayField Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetArrayField_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArray_MetaData), NewProp_InArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_InArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::PropPointers) < 2048);
// ********** End Function SetArrayField Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetArrayField", 	Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::SIOJsonObject_eventSetArrayField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::SIOJsonObject_eventSetArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(USIOJsonValue*,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArrayField(Z_Param_FieldName,Z_Param_Out_InArray);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function SetArrayField **************************************

// ********** Begin Class USIOJsonObject Function SetBinaryField ***********************************
struct Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics
{
	struct SIOJsonObject_eventSetBinaryField_Parms
	{
		FString FieldName;
		TArray<uint8> Bytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an BinaryField named FieldName and binary buffer array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an BinaryField named FieldName and binary buffer array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBinaryField constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBinaryField constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBinaryField Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetBinaryField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetBinaryField_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_Bytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::PropPointers) < 2048);
// ********** End Function SetBinaryField Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetBinaryField", 	Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::SIOJsonObject_eventSetBinaryField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::SIOJsonObject_eventSetBinaryField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetBinaryField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetBinaryField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBinaryField(Z_Param_FieldName,Z_Param_Out_Bytes);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function SetBinaryField *************************************

// ********** Begin Class USIOJsonObject Function SetBoolArrayField ********************************
struct Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics
{
	struct SIOJsonObject_eventSetBoolArrayField_Parms
	{
		FString FieldName;
		TArray<bool> BoolArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Bool Array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Bool Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBoolArrayField constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBoolArrayField constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBoolArrayField Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetBoolArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_Inner = { "BoolArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray = { "BoolArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetBoolArrayField_Parms, BoolArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolArray_MetaData), NewProp_BoolArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::PropPointers) < 2048);
// ********** End Function SetBoolArrayField Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetBoolArrayField", 	Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::SIOJsonObject_eventSetBoolArrayField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::SIOJsonObject_eventSetBoolArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetBoolArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(bool,Z_Param_Out_BoolArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolArrayField(Z_Param_FieldName,Z_Param_Out_BoolArray);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function SetBoolArrayField **********************************

// ********** Begin Class USIOJsonObject Function SetBoolField *************************************
struct Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics
{
	struct SIOJsonObject_eventSetBoolField_Parms
	{
		FString FieldName;
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set a boolean field named FieldName and value of InValue */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a boolean field named FieldName and value of InValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBoolField constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBoolField constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBoolField Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetBoolField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventSetBoolField_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventSetBoolField_Parms), &Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::PropPointers) < 2048);
// ********** End Function SetBoolField Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetBoolField", 	Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::SIOJsonObject_eventSetBoolField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::SIOJsonObject_eventSetBoolField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetBoolField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetBoolField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolField(Z_Param_FieldName,Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function SetBoolField ***************************************

// ********** Begin Class USIOJsonObject Function SetField *****************************************
struct Z_Construct_UFunction_USIOJsonObject_SetField_Statics
{
	struct SIOJsonObject_eventSetField_Parms
	{
		FString FieldName;
		USIOJsonValue* JsonValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a field named FieldName with a Value */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a field named FieldName with a Value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetField constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetField constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetField Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_SetField_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetField_Parms, JsonValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetField_Statics::NewProp_JsonValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetField_Statics::PropPointers) < 2048);
// ********** End Function SetField Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetField", 	Z_Construct_UFunction_USIOJsonObject_SetField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_SetField_Statics::SIOJsonObject_eventSetField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetField_Statics::SIOJsonObject_eventSetField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_OBJECT(USIOJsonValue,Z_Param_JsonValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetField(Z_Param_FieldName,Z_Param_JsonValue);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function SetField *******************************************

// ********** Begin Class USIOJsonObject Function SetNumberArrayField ******************************
struct Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics
{
	struct SIOJsonObject_eventSetNumberArrayField_Parms
	{
		FString FieldName;
		TArray<float> NumberArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Number Array\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Number Array\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNumberArrayField constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumberArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NumberArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNumberArrayField constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNumberArrayField Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetNumberArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_Inner = { "NumberArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray = { "NumberArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetNumberArrayField_Parms, NumberArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberArray_MetaData), NewProp_NumberArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::PropPointers) < 2048);
// ********** End Function SetNumberArrayField Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetNumberArrayField", 	Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::SIOJsonObject_eventSetNumberArrayField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::SIOJsonObject_eventSetNumberArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetNumberArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(float,Z_Param_Out_NumberArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberArrayField(Z_Param_FieldName,Z_Param_Out_NumberArray);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function SetNumberArrayField ********************************

// ********** Begin Class USIOJsonObject Function SetNumberField ***********************************
struct Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics
{
	struct SIOJsonObject_eventSetNumberField_Parms
	{
		FString FieldName;
		float Number;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a field named FieldName with Number as value\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a field named FieldName with Number as value\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNumberField constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNumberField constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNumberField Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetNumberField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetNumberField_Parms, Number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::NewProp_Number,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::PropPointers) < 2048);
// ********** End Function SetNumberField Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetNumberField", 	Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::SIOJsonObject_eventSetNumberField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::SIOJsonObject_eventSetNumberField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetNumberField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetNumberField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberField(Z_Param_FieldName,Z_Param_Number);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function SetNumberField *************************************

// ********** Begin Class USIOJsonObject Function SetObjectArrayField ******************************
struct Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics
{
	struct SIOJsonObject_eventSetObjectArrayField_Parms
	{
		FString FieldName;
		TArray<USIOJsonObject*> ObjectArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Ob Array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Ob Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetObjectArrayField constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetObjectArrayField constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetObjectArrayField Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetObjectArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_Inner = { "ObjectArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray = { "ObjectArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetObjectArrayField_Parms, ObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectArray_MetaData), NewProp_ObjectArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::PropPointers) < 2048);
// ********** End Function SetObjectArrayField Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetObjectArrayField", 	Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::SIOJsonObject_eventSetObjectArrayField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::SIOJsonObject_eventSetObjectArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetObjectArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(USIOJsonObject*,Z_Param_Out_ObjectArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetObjectArrayField(Z_Param_FieldName,Z_Param_Out_ObjectArray);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function SetObjectArrayField ********************************

// ********** Begin Class USIOJsonObject Function SetObjectField ***********************************
struct Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics
{
	struct SIOJsonObject_eventSetObjectField_Parms
	{
		FString FieldName;
		USIOJsonObject* JsonObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of JsonObject */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of JsonObject" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetObjectField constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetObjectField constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetObjectField Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetObjectField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetObjectField_Parms, JsonObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::NewProp_JsonObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::PropPointers) < 2048);
// ********** End Function SetObjectField Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetObjectField", 	Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::SIOJsonObject_eventSetObjectField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::SIOJsonObject_eventSetObjectField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetObjectField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetObjectField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_OBJECT(USIOJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetObjectField(Z_Param_FieldName,Z_Param_JsonObject);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function SetObjectField *************************************

// ********** Begin Class USIOJsonObject Function SetStringArrayField ******************************
struct Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics
{
	struct SIOJsonObject_eventSetStringArrayField_Parms
	{
		FString FieldName;
		TArray<FString> StringArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of String Array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of String Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStringArrayField constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStringArrayField constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStringArrayField Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetStringArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetStringArrayField_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringArray_MetaData), NewProp_StringArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_StringArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_StringArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::PropPointers) < 2048);
// ********** End Function SetStringArrayField Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetStringArrayField", 	Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::SIOJsonObject_eventSetStringArrayField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::SIOJsonObject_eventSetStringArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetStringArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetStringArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStringArrayField(Z_Param_FieldName,Z_Param_Out_StringArray);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function SetStringArrayField ********************************

// ********** Begin Class USIOJsonObject Function SetStringField ***********************************
struct Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics
{
	struct SIOJsonObject_eventSetStringField_Parms
	{
		FString FieldName;
		FString StringValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a field named FieldName with value of StringValue */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a field named FieldName with value of StringValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStringField constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStringField constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStringField Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetStringField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetStringField_Parms, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::NewProp_StringValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::PropPointers) < 2048);
// ********** End Function SetStringField Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetStringField", 	Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::SIOJsonObject_eventSetStringField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::SIOJsonObject_eventSetStringField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetStringField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetStringField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStringField(Z_Param_FieldName,Z_Param_StringValue);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function SetStringField *************************************

// ********** Begin Class USIOJsonObject Function TryGetBoolField **********************************
struct Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics
{
	struct SIOJsonObject_eventTryGetBoolField_Parms
	{
		FString FieldName;
		bool OutBool;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempt to get the field named FieldName as a boolean; returns false if it doesn't exist or the type is incorrect. */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempt to get the field named FieldName as a boolean; returns false if it doesn't exist or the type is incorrect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetBoolField constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_OutBool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutBool;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetBoolField constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetBoolField Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventTryGetBoolField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::NewProp_OutBool_SetBit(void* Obj)
{
	((SIOJsonObject_eventTryGetBoolField_Parms*)Obj)->OutBool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::NewProp_OutBool = { "OutBool", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventTryGetBoolField_Parms), &Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::NewProp_OutBool_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventTryGetBoolField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventTryGetBoolField_Parms), &Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::NewProp_OutBool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::PropPointers) < 2048);
// ********** End Function TryGetBoolField Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "TryGetBoolField", 	Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::SIOJsonObject_eventTryGetBoolField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::SIOJsonObject_eventTryGetBoolField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_TryGetBoolField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_TryGetBoolField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execTryGetBoolField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_UBOOL_REF(Z_Param_Out_OutBool);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetBoolField(Z_Param_FieldName,Z_Param_Out_OutBool);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function TryGetBoolField ************************************

// ********** Begin Class USIOJsonObject Function TryGetNumberField ********************************
struct Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics
{
	struct SIOJsonObject_eventTryGetNumberField_Parms
	{
		FString FieldName;
		float OutNumber;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempt to get the field named FieldName as a number; returns false if it doesn't exist or the type is incorrect.\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempt to get the field named FieldName as a number; returns false if it doesn't exist or the type is incorrect.\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetNumberField constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutNumber;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetNumberField constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetNumberField Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventTryGetNumberField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::NewProp_OutNumber = { "OutNumber", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventTryGetNumberField_Parms, OutNumber), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventTryGetNumberField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventTryGetNumberField_Parms), &Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::NewProp_OutNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::PropPointers) < 2048);
// ********** End Function TryGetNumberField Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "TryGetNumberField", 	Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::SIOJsonObject_eventTryGetNumberField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::SIOJsonObject_eventTryGetNumberField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_TryGetNumberField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_TryGetNumberField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execTryGetNumberField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetNumberField(Z_Param_FieldName,Z_Param_Out_OutNumber);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function TryGetNumberField **********************************

// ********** Begin Class USIOJsonObject Function TryGetObjectField ********************************
struct Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics
{
	struct SIOJsonObject_eventTryGetObjectField_Parms
	{
		FString FieldName;
		USIOJsonObject* OutObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempt to get the field named FieldName as an object; returns false if it doesn't exist or the type is incorrect. */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempt to get the field named FieldName as an object; returns false if it doesn't exist or the type is incorrect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetObjectField constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetObjectField constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetObjectField Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventTryGetObjectField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::NewProp_OutObject = { "OutObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventTryGetObjectField_Parms, OutObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventTryGetObjectField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventTryGetObjectField_Parms), &Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::NewProp_OutObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::PropPointers) < 2048);
// ********** End Function TryGetObjectField Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "TryGetObjectField", 	Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::SIOJsonObject_eventTryGetObjectField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::SIOJsonObject_eventTryGetObjectField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_TryGetObjectField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_TryGetObjectField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execTryGetObjectField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_OBJECT_REF(USIOJsonObject,Z_Param_Out_OutObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetObjectField(Z_Param_FieldName,P_ARG_GC_BARRIER(Z_Param_Out_OutObject));
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function TryGetObjectField **********************************

// ********** Begin Class USIOJsonObject Function TryGetStringField ********************************
struct Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics
{
	struct SIOJsonObject_eventTryGetStringField_Parms
	{
		FString FieldName;
		FString OutString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempt to get the field named FieldName as a string; returns false if it doesn't exist or the type is incorrect. */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempt to get the field named FieldName as a string; returns false if it doesn't exist or the type is incorrect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetStringField constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetStringField constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetStringField Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventTryGetStringField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::NewProp_OutString = { "OutString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventTryGetStringField_Parms, OutString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventTryGetStringField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventTryGetStringField_Parms), &Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::NewProp_OutString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::PropPointers) < 2048);
// ********** End Function TryGetStringField Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "TryGetStringField", 	Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::SIOJsonObject_eventTryGetStringField_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::SIOJsonObject_eventTryGetStringField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_TryGetStringField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_TryGetStringField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execTryGetStringField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetStringField(Z_Param_FieldName,Z_Param_Out_OutString);
	P_NATIVE_END;
}
// ********** End Class USIOJsonObject Function TryGetStringField **********************************

// ********** Begin Class USIOJsonObject ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIOJsonObject;
UClass* USIOJsonObject::GetPrivateStaticClass()
{
	using TClass = USIOJsonObject;
	if (!Z_Registration_Info_UClass_USIOJsonObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIOJsonObject"),
			Z_Registration_Info_UClass_USIOJsonObject.InnerSingleton,
			StaticRegisterNativesUSIOJsonObject,
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
	return Z_Registration_Info_UClass_USIOJsonObject.InnerSingleton;
}
UClass* Z_Construct_UClass_USIOJsonObject_NoRegister()
{
	return USIOJsonObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIOJsonObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprintable FJsonObject wrapper\n */" },
#endif
		{ "IncludePath", "SIOJsonObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprintable FJsonObject wrapper" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USIOJsonObject constinit property declarations ***************************
// ********** End Class USIOJsonObject constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConstructJsonObject"), .Pointer = &USIOJsonObject::execConstructJsonObject },
		{ .NameUTF8 = UTF8TEXT("DecodeJson"), .Pointer = &USIOJsonObject::execDecodeJson },
		{ .NameUTF8 = UTF8TEXT("EncodeJson"), .Pointer = &USIOJsonObject::execEncodeJson },
		{ .NameUTF8 = UTF8TEXT("EncodeJsonToSingleString"), .Pointer = &USIOJsonObject::execEncodeJsonToSingleString },
		{ .NameUTF8 = UTF8TEXT("GetArrayField"), .Pointer = &USIOJsonObject::execGetArrayField },
		{ .NameUTF8 = UTF8TEXT("GetBinaryField"), .Pointer = &USIOJsonObject::execGetBinaryField },
		{ .NameUTF8 = UTF8TEXT("GetBoolArrayField"), .Pointer = &USIOJsonObject::execGetBoolArrayField },
		{ .NameUTF8 = UTF8TEXT("GetBoolField"), .Pointer = &USIOJsonObject::execGetBoolField },
		{ .NameUTF8 = UTF8TEXT("GetField"), .Pointer = &USIOJsonObject::execGetField },
		{ .NameUTF8 = UTF8TEXT("GetFieldNames"), .Pointer = &USIOJsonObject::execGetFieldNames },
		{ .NameUTF8 = UTF8TEXT("GetNumberArrayField"), .Pointer = &USIOJsonObject::execGetNumberArrayField },
		{ .NameUTF8 = UTF8TEXT("GetNumberField"), .Pointer = &USIOJsonObject::execGetNumberField },
		{ .NameUTF8 = UTF8TEXT("GetObjectArrayField"), .Pointer = &USIOJsonObject::execGetObjectArrayField },
		{ .NameUTF8 = UTF8TEXT("GetObjectField"), .Pointer = &USIOJsonObject::execGetObjectField },
		{ .NameUTF8 = UTF8TEXT("GetStringArrayField"), .Pointer = &USIOJsonObject::execGetStringArrayField },
		{ .NameUTF8 = UTF8TEXT("GetStringField"), .Pointer = &USIOJsonObject::execGetStringField },
		{ .NameUTF8 = UTF8TEXT("HasField"), .Pointer = &USIOJsonObject::execHasField },
		{ .NameUTF8 = UTF8TEXT("MergeJsonObject"), .Pointer = &USIOJsonObject::execMergeJsonObject },
		{ .NameUTF8 = UTF8TEXT("RemoveField"), .Pointer = &USIOJsonObject::execRemoveField },
		{ .NameUTF8 = UTF8TEXT("Reset"), .Pointer = &USIOJsonObject::execReset },
		{ .NameUTF8 = UTF8TEXT("SetArrayField"), .Pointer = &USIOJsonObject::execSetArrayField },
		{ .NameUTF8 = UTF8TEXT("SetBinaryField"), .Pointer = &USIOJsonObject::execSetBinaryField },
		{ .NameUTF8 = UTF8TEXT("SetBoolArrayField"), .Pointer = &USIOJsonObject::execSetBoolArrayField },
		{ .NameUTF8 = UTF8TEXT("SetBoolField"), .Pointer = &USIOJsonObject::execSetBoolField },
		{ .NameUTF8 = UTF8TEXT("SetField"), .Pointer = &USIOJsonObject::execSetField },
		{ .NameUTF8 = UTF8TEXT("SetNumberArrayField"), .Pointer = &USIOJsonObject::execSetNumberArrayField },
		{ .NameUTF8 = UTF8TEXT("SetNumberField"), .Pointer = &USIOJsonObject::execSetNumberField },
		{ .NameUTF8 = UTF8TEXT("SetObjectArrayField"), .Pointer = &USIOJsonObject::execSetObjectArrayField },
		{ .NameUTF8 = UTF8TEXT("SetObjectField"), .Pointer = &USIOJsonObject::execSetObjectField },
		{ .NameUTF8 = UTF8TEXT("SetStringArrayField"), .Pointer = &USIOJsonObject::execSetStringArrayField },
		{ .NameUTF8 = UTF8TEXT("SetStringField"), .Pointer = &USIOJsonObject::execSetStringField },
		{ .NameUTF8 = UTF8TEXT("TryGetBoolField"), .Pointer = &USIOJsonObject::execTryGetBoolField },
		{ .NameUTF8 = UTF8TEXT("TryGetNumberField"), .Pointer = &USIOJsonObject::execTryGetNumberField },
		{ .NameUTF8 = UTF8TEXT("TryGetObjectField"), .Pointer = &USIOJsonObject::execTryGetObjectField },
		{ .NameUTF8 = UTF8TEXT("TryGetStringField"), .Pointer = &USIOJsonObject::execTryGetStringField },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject, "ConstructJsonObject" }, // 455352310
		{ &Z_Construct_UFunction_USIOJsonObject_DecodeJson, "DecodeJson" }, // 2828182231
		{ &Z_Construct_UFunction_USIOJsonObject_EncodeJson, "EncodeJson" }, // 4152280904
		{ &Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString, "EncodeJsonToSingleString" }, // 680914650
		{ &Z_Construct_UFunction_USIOJsonObject_GetArrayField, "GetArrayField" }, // 1405408131
		{ &Z_Construct_UFunction_USIOJsonObject_GetBinaryField, "GetBinaryField" }, // 2644771411
		{ &Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField, "GetBoolArrayField" }, // 4135417452
		{ &Z_Construct_UFunction_USIOJsonObject_GetBoolField, "GetBoolField" }, // 3104737314
		{ &Z_Construct_UFunction_USIOJsonObject_GetField, "GetField" }, // 1873088921
		{ &Z_Construct_UFunction_USIOJsonObject_GetFieldNames, "GetFieldNames" }, // 1738319989
		{ &Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField, "GetNumberArrayField" }, // 2451225560
		{ &Z_Construct_UFunction_USIOJsonObject_GetNumberField, "GetNumberField" }, // 3628999544
		{ &Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField, "GetObjectArrayField" }, // 375837849
		{ &Z_Construct_UFunction_USIOJsonObject_GetObjectField, "GetObjectField" }, // 3289519493
		{ &Z_Construct_UFunction_USIOJsonObject_GetStringArrayField, "GetStringArrayField" }, // 2209585619
		{ &Z_Construct_UFunction_USIOJsonObject_GetStringField, "GetStringField" }, // 262084637
		{ &Z_Construct_UFunction_USIOJsonObject_HasField, "HasField" }, // 692957419
		{ &Z_Construct_UFunction_USIOJsonObject_MergeJsonObject, "MergeJsonObject" }, // 2077949437
		{ &Z_Construct_UFunction_USIOJsonObject_RemoveField, "RemoveField" }, // 1083626181
		{ &Z_Construct_UFunction_USIOJsonObject_Reset, "Reset" }, // 2802111961
		{ &Z_Construct_UFunction_USIOJsonObject_SetArrayField, "SetArrayField" }, // 2645780942
		{ &Z_Construct_UFunction_USIOJsonObject_SetBinaryField, "SetBinaryField" }, // 1314116122
		{ &Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField, "SetBoolArrayField" }, // 2778462746
		{ &Z_Construct_UFunction_USIOJsonObject_SetBoolField, "SetBoolField" }, // 913433586
		{ &Z_Construct_UFunction_USIOJsonObject_SetField, "SetField" }, // 311798262
		{ &Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField, "SetNumberArrayField" }, // 3241428851
		{ &Z_Construct_UFunction_USIOJsonObject_SetNumberField, "SetNumberField" }, // 905621151
		{ &Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField, "SetObjectArrayField" }, // 3773631478
		{ &Z_Construct_UFunction_USIOJsonObject_SetObjectField, "SetObjectField" }, // 3250272973
		{ &Z_Construct_UFunction_USIOJsonObject_SetStringArrayField, "SetStringArrayField" }, // 2835874314
		{ &Z_Construct_UFunction_USIOJsonObject_SetStringField, "SetStringField" }, // 3481475094
		{ &Z_Construct_UFunction_USIOJsonObject_TryGetBoolField, "TryGetBoolField" }, // 4224506807
		{ &Z_Construct_UFunction_USIOJsonObject_TryGetNumberField, "TryGetNumberField" }, // 4148966893
		{ &Z_Construct_UFunction_USIOJsonObject_TryGetObjectField, "TryGetObjectField" }, // 159733386
		{ &Z_Construct_UFunction_USIOJsonObject_TryGetStringField, "TryGetStringField" }, // 182767386
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIOJsonObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIOJsonObject_Statics
UObject* (*const Z_Construct_UClass_USIOJsonObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SIOJson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJsonObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIOJsonObject_Statics::ClassParams = {
	&USIOJsonObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJsonObject_Statics::Class_MetaDataParams), Z_Construct_UClass_USIOJsonObject_Statics::Class_MetaDataParams)
};
void USIOJsonObject::StaticRegisterNativesUSIOJsonObject()
{
	UClass* Class = USIOJsonObject::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIOJsonObject_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIOJsonObject()
{
	if (!Z_Registration_Info_UClass_USIOJsonObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIOJsonObject.OuterSingleton, Z_Construct_UClass_USIOJsonObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIOJsonObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIOJsonObject);
USIOJsonObject::~USIOJsonObject() {}
// ********** End Class USIOJsonObject *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h__Script_SIOJson_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIOJsonObject, USIOJsonObject::StaticClass, TEXT("USIOJsonObject"), &Z_Registration_Info_UClass_USIOJsonObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIOJsonObject), 3497796852U) },
	};
}; // Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h__Script_SIOJson_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h__Script_SIOJson_2038755692{
	TEXT("/Script/SIOJson"),
	Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h__Script_SIOJson_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h__Script_SIOJson_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
