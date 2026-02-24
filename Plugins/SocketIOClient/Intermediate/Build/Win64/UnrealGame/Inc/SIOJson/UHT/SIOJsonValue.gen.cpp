// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIOJsonValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIOJsonValue() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonObject_NoRegister();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonValue();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonValue_NoRegister();
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIOJson();
UPackage* Z_Construct_UPackage__Script_SIOJson();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESIOJson ******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIOJson;
static UEnum* ESIOJson_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIOJson.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIOJson.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SIOJson_ESIOJson, (UObject*)Z_Construct_UPackage__Script_SIOJson(), TEXT("ESIOJson"));
	}
	return Z_Registration_Info_UEnum_ESIOJson.OuterSingleton;
}
template<> SIOJSON_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIOJson::Type>()
{
	return ESIOJson_StaticEnum();
}
struct Z_Construct_UEnum_SIOJson_ESIOJson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Array.Name", "ESIOJson::Array" },
		{ "Binary.Name", "ESIOJson::Binary" },
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "ESIOJson::Boolean" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents all the types a Json Value can be.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
		{ "None.Name", "ESIOJson::None" },
		{ "Null.Name", "ESIOJson::Null" },
		{ "Number.Name", "ESIOJson::Number" },
		{ "Object.Name", "ESIOJson::Object" },
		{ "String.Name", "ESIOJson::String" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents all the types a Json Value can be." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIOJson::None", (int64)ESIOJson::None },
		{ "ESIOJson::Null", (int64)ESIOJson::Null },
		{ "ESIOJson::String", (int64)ESIOJson::String },
		{ "ESIOJson::Number", (int64)ESIOJson::Number },
		{ "ESIOJson::Boolean", (int64)ESIOJson::Boolean },
		{ "ESIOJson::Array", (int64)ESIOJson::Array },
		{ "ESIOJson::Object", (int64)ESIOJson::Object },
		{ "ESIOJson::Binary", (int64)ESIOJson::Binary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SIOJson_ESIOJson_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SIOJson_ESIOJson_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SIOJson,
	nullptr,
	"ESIOJson",
	"ESIOJson::Type",
	Z_Construct_UEnum_SIOJson_ESIOJson_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SIOJson_ESIOJson_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SIOJson_ESIOJson_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SIOJson_ESIOJson_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SIOJson_ESIOJson()
{
	if (!Z_Registration_Info_UEnum_ESIOJson.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIOJson.InnerSingleton, Z_Construct_UEnum_SIOJson_ESIOJson_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIOJson.InnerSingleton;
}
// ********** End Enum ESIOJson ********************************************************************

// ********** Begin Class USIOJsonValue Function AsArray *******************************************
struct Z_Construct_UFunction_USIOJsonValue_AsArray_Statics
{
	struct SIOJsonValue_eventAsArray_Parms
	{
		TArray<USIOJsonValue*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as an array, throwing an error if this is not an Json Array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as an array, throwing an error if this is not an Json Array" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AsArray constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsArray constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsArray Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::PropPointers) < 2048);
// ********** End Function AsArray Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "AsArray", 	Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::SIOJsonValue_eventAsArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::SIOJsonValue_eventAsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_AsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_AsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execAsArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USIOJsonValue*>*)Z_Param__Result=P_THIS->AsArray();
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function AsArray *********************************************

// ********** Begin Class USIOJsonValue Function AsBinary ******************************************
struct Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics
{
	struct SIOJsonValue_eventAsBinary_Parms
	{
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert message to binary data\n" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert message to binary data" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AsBinary constinit property declarations ******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsBinary constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsBinary Property Definitions *****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventAsBinary_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::PropPointers) < 2048);
// ********** End Function AsBinary Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "AsBinary", 	Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::SIOJsonValue_eventAsBinary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::SIOJsonValue_eventAsBinary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_AsBinary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_AsBinary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execAsBinary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->AsBinary();
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function AsBinary ********************************************

// ********** Begin Class USIOJsonValue Function AsBool ********************************************
struct Z_Construct_UFunction_USIOJsonValue_AsBool_Statics
{
	struct SIOJsonValue_eventAsBool_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as a boolean, throwing an error if this is not an Json Bool */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as a boolean, throwing an error if this is not an Json Bool" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AsBool constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsBool constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsBool Property Definitions *******************************************
void Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonValue_eventAsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonValue_eventAsBool_Parms), &Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::PropPointers) < 2048);
// ********** End Function AsBool Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "AsBool", 	Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::SIOJsonValue_eventAsBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::SIOJsonValue_eventAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_AsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_AsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execAsBool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AsBool();
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function AsBool **********************************************

// ********** Begin Class USIOJsonValue Function AsNumber ******************************************
struct Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics
{
	struct SIOJsonValue_eventAsNumber_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as a double, throwing an error if this is not an Json Number\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as a double, throwing an error if this is not an Json Number\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AsNumber constinit property declarations ******************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsNumber constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsNumber Property Definitions *****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::PropPointers) < 2048);
// ********** End Function AsNumber Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "AsNumber", 	Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::SIOJsonValue_eventAsNumber_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::SIOJsonValue_eventAsNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_AsNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_AsNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execAsNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->AsNumber();
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function AsNumber ********************************************

// ********** Begin Class USIOJsonValue Function AsObject ******************************************
struct Z_Construct_UFunction_USIOJsonValue_AsObject_Statics
{
	struct SIOJsonValue_eventAsObject_Parms
	{
		USIOJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as an object, throwing an error if this is not an Json Object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as an object, throwing an error if this is not an Json Object" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AsObject constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsObject constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsObject Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::PropPointers) < 2048);
// ********** End Function AsObject Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "AsObject", 	Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::SIOJsonValue_eventAsObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::SIOJsonValue_eventAsObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_AsObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_AsObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execAsObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonObject**)Z_Param__Result=P_THIS->AsObject();
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function AsObject ********************************************

// ********** Begin Class USIOJsonValue Function AsString ******************************************
struct Z_Construct_UFunction_USIOJsonValue_AsString_Statics
{
	struct SIOJsonValue_eventAsString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as a string, throwing an error if this is not an Json String */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as a string, throwing an error if this is not an Json String" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AsString constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsString constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsString Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonValue_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_AsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_AsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsString_Statics::PropPointers) < 2048);
// ********** End Function AsString Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_AsString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "AsString", 	Z_Construct_UFunction_USIOJsonValue_AsString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_AsString_Statics::SIOJsonValue_eventAsString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_AsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_AsString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_AsString_Statics::SIOJsonValue_eventAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_AsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_AsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execAsString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->AsString();
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function AsString ********************************************

// ********** Begin Class USIOJsonValue Function ConstructJsonValueArray ***************************
struct Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics
{
	struct SIOJsonValue_eventConstructJsonValueArray_Parms
	{
		UObject* WorldContextObject;
		TArray<USIOJsonValue*> InArray;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Array value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Array Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Array value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructJsonValueArray constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructJsonValueArray constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructJsonValueArray Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueArray_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArray_MetaData), NewProp_InArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueArray_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::PropPointers) < 2048);
// ********** End Function ConstructJsonValueArray Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "ConstructJsonValueArray", 	Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::SIOJsonValue_eventConstructJsonValueArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::SIOJsonValue_eventConstructJsonValueArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execConstructJsonValueArray)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(USIOJsonValue*,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJsonValue::ConstructJsonValueArray(Z_Param_WorldContextObject,Z_Param_Out_InArray);
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function ConstructJsonValueArray *****************************

// ********** Begin Class USIOJsonValue Function ConstructJsonValueBinary **************************
struct Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics
{
	struct SIOJsonValue_eventConstructJsonValueBinary_Parms
	{
		UObject* WorldContextObject;
		TArray<uint8> ByteArray;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Binary value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Binary Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Binary value" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructJsonValueBinary constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructJsonValueBinary constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructJsonValueBinary Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueBinary_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueBinary_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueBinary_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::NewProp_ByteArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::NewProp_ByteArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::PropPointers) < 2048);
// ********** End Function ConstructJsonValueBinary Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "ConstructJsonValueBinary", 	Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::SIOJsonValue_eventConstructJsonValueBinary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::SIOJsonValue_eventConstructJsonValueBinary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execConstructJsonValueBinary)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(uint8,Z_Param_ByteArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJsonValue::ConstructJsonValueBinary(Z_Param_WorldContextObject,Z_Param_ByteArray);
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function ConstructJsonValueBinary ****************************

// ********** Begin Class USIOJsonValue Function ConstructJsonValueBool ****************************
struct Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics
{
	struct SIOJsonValue_eventConstructJsonValueBool_Parms
	{
		UObject* WorldContextObject;
		bool InValue;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Bool value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Bool Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Bool value" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructJsonValueBool constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructJsonValueBool constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructJsonValueBool Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueBool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((SIOJsonValue_eventConstructJsonValueBool_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonValue_eventConstructJsonValueBool_Parms), &Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueBool_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::PropPointers) < 2048);
// ********** End Function ConstructJsonValueBool Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "ConstructJsonValueBool", 	Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::SIOJsonValue_eventConstructJsonValueBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::SIOJsonValue_eventConstructJsonValueBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execConstructJsonValueBool)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJsonValue::ConstructJsonValueBool(Z_Param_WorldContextObject,Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function ConstructJsonValueBool ******************************

// ********** Begin Class USIOJsonValue Function ConstructJsonValueNumber **************************
struct Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics
{
	struct SIOJsonValue_eventConstructJsonValueNumber_Parms
	{
		UObject* WorldContextObject;
		float Number;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Number value\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Number Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Number value\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructJsonValueNumber constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructJsonValueNumber constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructJsonValueNumber Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueNumber_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueNumber_Parms, Number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueNumber_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::NewProp_Number,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::PropPointers) < 2048);
// ********** End Function ConstructJsonValueNumber Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "ConstructJsonValueNumber", 	Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::SIOJsonValue_eventConstructJsonValueNumber_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::SIOJsonValue_eventConstructJsonValueNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execConstructJsonValueNumber)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJsonValue::ConstructJsonValueNumber(Z_Param_WorldContextObject,Z_Param_Number);
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function ConstructJsonValueNumber ****************************

// ********** Begin Class USIOJsonValue Function ConstructJsonValueObject **************************
struct Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics
{
	struct SIOJsonValue_eventConstructJsonValueObject_Parms
	{
		USIOJsonObject* JsonObject;
		UObject* WorldContextObject;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Object value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Object Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Object value" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructJsonValueObject constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructJsonValueObject constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructJsonValueObject Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueObject_Parms, JsonObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueObject_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::PropPointers) < 2048);
// ********** End Function ConstructJsonValueObject Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "ConstructJsonValueObject", 	Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::SIOJsonValue_eventConstructJsonValueObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::SIOJsonValue_eventConstructJsonValueObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execConstructJsonValueObject)
{
	P_GET_OBJECT(USIOJsonObject,Z_Param_JsonObject);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJsonValue::ConstructJsonValueObject(Z_Param_JsonObject,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function ConstructJsonValueObject ****************************

// ********** Begin Class USIOJsonValue Function ConstructJsonValueString **************************
struct Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics
{
	struct SIOJsonValue_eventConstructJsonValueString_Parms
	{
		UObject* WorldContextObject;
		FString StringValue;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json String value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json String Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json String value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConstructJsonValueString constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConstructJsonValueString constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConstructJsonValueString Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueString_Parms, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventConstructJsonValueString_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::PropPointers) < 2048);
// ********** End Function ConstructJsonValueString Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "ConstructJsonValueString", 	Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::SIOJsonValue_eventConstructJsonValueString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::SIOJsonValue_eventConstructJsonValueString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execConstructJsonValueString)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJsonValue::ConstructJsonValueString(Z_Param_WorldContextObject,Z_Param_StringValue);
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function ConstructJsonValueString ****************************

// ********** Begin Class USIOJsonValue Function EncodeJson ****************************************
struct Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics
{
	struct SIOJsonValue_eventEncodeJson_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EncodeJson constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EncodeJson constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EncodeJson Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventEncodeJson_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::PropPointers) < 2048);
// ********** End Function EncodeJson Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "EncodeJson", 	Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::SIOJsonValue_eventEncodeJson_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::SIOJsonValue_eventEncodeJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_EncodeJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_EncodeJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execEncodeJson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->EncodeJson();
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function EncodeJson ******************************************

// ********** Begin Class USIOJsonValue Function GetType *******************************************
struct Z_Construct_UFunction_USIOJsonValue_GetType_Statics
{
	struct SIOJsonValue_eventGetType_Parms
	{
		TEnumAsByte<ESIOJson::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get type of Json value (Enum) */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get type of Json value (Enum)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetType constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetType constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetType Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJsonValue_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_SIOJson_ESIOJson, METADATA_PARAMS(0, nullptr) }; // 1832242343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_GetType_Statics::PropPointers) < 2048);
// ********** End Function GetType Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_GetType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "GetType", 	Z_Construct_UFunction_USIOJsonValue_GetType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_GetType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_GetType_Statics::SIOJsonValue_eventGetType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_GetType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_GetType_Statics::SIOJsonValue_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIOJson::Type>*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function GetType *********************************************

// ********** Begin Class USIOJsonValue Function GetTypeString *************************************
struct Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics
{
	struct SIOJsonValue_eventGetTypeString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get type of Json value (String) */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get type of Json value (String)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTypeString constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTypeString constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTypeString Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventGetTypeString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::PropPointers) < 2048);
// ********** End Function GetTypeString Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "GetTypeString", 	Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::SIOJsonValue_eventGetTypeString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::SIOJsonValue_eventGetTypeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_GetTypeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_GetTypeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execGetTypeString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTypeString();
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function GetTypeString ***************************************

// ********** Begin Class USIOJsonValue Function IsNull ********************************************
struct Z_Construct_UFunction_USIOJsonValue_IsNull_Statics
{
	struct SIOJsonValue_eventIsNull_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this value is a 'null' */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this value is a 'null'" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsNull constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsNull constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsNull Property Definitions *******************************************
void Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonValue_eventIsNull_Parms), &Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::PropPointers) < 2048);
// ********** End Function IsNull Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "IsNull", 	Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::SIOJsonValue_eventIsNull_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::SIOJsonValue_eventIsNull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_IsNull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_IsNull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execIsNull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNull();
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function IsNull **********************************************

// ********** Begin Class USIOJsonValue Function ValueFromJsonString *******************************
struct Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics
{
	struct SIOJsonValue_eventValueFromJsonString_Parms
	{
		UObject* WorldContextObject;
		FString StringValue;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json value from JSON encoded string*/" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Value From Json String" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json value from JSON encoded string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ValueFromJsonString constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValueFromJsonString constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValueFromJsonString Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventValueFromJsonString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventValueFromJsonString_Parms, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonValue_eventValueFromJsonString_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::PropPointers) < 2048);
// ********** End Function ValueFromJsonString Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIOJsonValue, nullptr, "ValueFromJsonString", 	Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::SIOJsonValue_eventValueFromJsonString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::SIOJsonValue_eventValueFromJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonValue::execValueFromJsonString)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=USIOJsonValue::ValueFromJsonString(Z_Param_WorldContextObject,Z_Param_StringValue);
	P_NATIVE_END;
}
// ********** End Class USIOJsonValue Function ValueFromJsonString *********************************

// ********** Begin Class USIOJsonValue ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIOJsonValue;
UClass* USIOJsonValue::GetPrivateStaticClass()
{
	using TClass = USIOJsonValue;
	if (!Z_Registration_Info_UClass_USIOJsonValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIOJsonValue"),
			Z_Registration_Info_UClass_USIOJsonValue.InnerSingleton,
			StaticRegisterNativesUSIOJsonValue,
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
	return Z_Registration_Info_UClass_USIOJsonValue.InnerSingleton;
}
UClass* Z_Construct_UClass_USIOJsonValue_NoRegister()
{
	return USIOJsonValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIOJsonValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprintable FJsonValue wrapper\n */" },
#endif
		{ "IncludePath", "SIOJsonValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SIOJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprintable FJsonValue wrapper" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USIOJsonValue constinit property declarations ****************************
// ********** End Class USIOJsonValue constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AsArray"), .Pointer = &USIOJsonValue::execAsArray },
		{ .NameUTF8 = UTF8TEXT("AsBinary"), .Pointer = &USIOJsonValue::execAsBinary },
		{ .NameUTF8 = UTF8TEXT("AsBool"), .Pointer = &USIOJsonValue::execAsBool },
		{ .NameUTF8 = UTF8TEXT("AsNumber"), .Pointer = &USIOJsonValue::execAsNumber },
		{ .NameUTF8 = UTF8TEXT("AsObject"), .Pointer = &USIOJsonValue::execAsObject },
		{ .NameUTF8 = UTF8TEXT("AsString"), .Pointer = &USIOJsonValue::execAsString },
		{ .NameUTF8 = UTF8TEXT("ConstructJsonValueArray"), .Pointer = &USIOJsonValue::execConstructJsonValueArray },
		{ .NameUTF8 = UTF8TEXT("ConstructJsonValueBinary"), .Pointer = &USIOJsonValue::execConstructJsonValueBinary },
		{ .NameUTF8 = UTF8TEXT("ConstructJsonValueBool"), .Pointer = &USIOJsonValue::execConstructJsonValueBool },
		{ .NameUTF8 = UTF8TEXT("ConstructJsonValueNumber"), .Pointer = &USIOJsonValue::execConstructJsonValueNumber },
		{ .NameUTF8 = UTF8TEXT("ConstructJsonValueObject"), .Pointer = &USIOJsonValue::execConstructJsonValueObject },
		{ .NameUTF8 = UTF8TEXT("ConstructJsonValueString"), .Pointer = &USIOJsonValue::execConstructJsonValueString },
		{ .NameUTF8 = UTF8TEXT("EncodeJson"), .Pointer = &USIOJsonValue::execEncodeJson },
		{ .NameUTF8 = UTF8TEXT("GetType"), .Pointer = &USIOJsonValue::execGetType },
		{ .NameUTF8 = UTF8TEXT("GetTypeString"), .Pointer = &USIOJsonValue::execGetTypeString },
		{ .NameUTF8 = UTF8TEXT("IsNull"), .Pointer = &USIOJsonValue::execIsNull },
		{ .NameUTF8 = UTF8TEXT("ValueFromJsonString"), .Pointer = &USIOJsonValue::execValueFromJsonString },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIOJsonValue_AsArray, "AsArray" }, // 478800397
		{ &Z_Construct_UFunction_USIOJsonValue_AsBinary, "AsBinary" }, // 3432425861
		{ &Z_Construct_UFunction_USIOJsonValue_AsBool, "AsBool" }, // 4178648145
		{ &Z_Construct_UFunction_USIOJsonValue_AsNumber, "AsNumber" }, // 1031027438
		{ &Z_Construct_UFunction_USIOJsonValue_AsObject, "AsObject" }, // 125271236
		{ &Z_Construct_UFunction_USIOJsonValue_AsString, "AsString" }, // 4052232473
		{ &Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueArray, "ConstructJsonValueArray" }, // 2713716587
		{ &Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBinary, "ConstructJsonValueBinary" }, // 1255002236
		{ &Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueBool, "ConstructJsonValueBool" }, // 3293213354
		{ &Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueNumber, "ConstructJsonValueNumber" }, // 204473738
		{ &Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueObject, "ConstructJsonValueObject" }, // 1418442550
		{ &Z_Construct_UFunction_USIOJsonValue_ConstructJsonValueString, "ConstructJsonValueString" }, // 3741673760
		{ &Z_Construct_UFunction_USIOJsonValue_EncodeJson, "EncodeJson" }, // 3407934743
		{ &Z_Construct_UFunction_USIOJsonValue_GetType, "GetType" }, // 2191528726
		{ &Z_Construct_UFunction_USIOJsonValue_GetTypeString, "GetTypeString" }, // 2135809001
		{ &Z_Construct_UFunction_USIOJsonValue_IsNull, "IsNull" }, // 984855682
		{ &Z_Construct_UFunction_USIOJsonValue_ValueFromJsonString, "ValueFromJsonString" }, // 327563358
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIOJsonValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIOJsonValue_Statics
UObject* (*const Z_Construct_UClass_USIOJsonValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SIOJson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJsonValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIOJsonValue_Statics::ClassParams = {
	&USIOJsonValue::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJsonValue_Statics::Class_MetaDataParams), Z_Construct_UClass_USIOJsonValue_Statics::Class_MetaDataParams)
};
void USIOJsonValue::StaticRegisterNativesUSIOJsonValue()
{
	UClass* Class = USIOJsonValue::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIOJsonValue_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIOJsonValue()
{
	if (!Z_Registration_Info_UClass_USIOJsonValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIOJsonValue.OuterSingleton, Z_Construct_UClass_USIOJsonValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIOJsonValue.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIOJsonValue);
USIOJsonValue::~USIOJsonValue() {}
// ********** End Class USIOJsonValue **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h__Script_SIOJson_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIOJson_StaticEnum, TEXT("ESIOJson"), &Z_Registration_Info_UEnum_ESIOJson, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1832242343U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIOJsonValue, USIOJsonValue::StaticClass, TEXT("USIOJsonValue"), &Z_Registration_Info_UClass_USIOJsonValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIOJsonValue), 2066315623U) },
	};
}; // Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h__Script_SIOJson_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h__Script_SIOJson_774585313{
	TEXT("/Script/SIOJson"),
	Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h__Script_SIOJson_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h__Script_SIOJson_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h__Script_SIOJson_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h__Script_SIOJson_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
