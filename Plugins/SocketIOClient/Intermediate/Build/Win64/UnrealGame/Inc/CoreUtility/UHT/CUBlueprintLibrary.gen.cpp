// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CUBlueprintLibrary.h"
#include "Engine/LatentActionManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCUBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUTILITY_API UClass* Z_Construct_UClass_UCUBlueprintLibrary();
COREUTILITY_API UClass* Z_Construct_UClass_UCUBlueprintLibrary_NoRegister();
COREUTILITY_API UEnum* Z_Construct_UEnum_CoreUtility_EImageFormatBPType();
COREUTILITY_API UEnum* Z_Construct_UEnum_CoreUtility_ESIOCallbackType();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_CoreUtility();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EImageFormatBPType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EImageFormatBPType;
static UEnum* EImageFormatBPType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EImageFormatBPType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EImageFormatBPType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUtility_EImageFormatBPType, (UObject*)Z_Construct_UPackage__Script_CoreUtility(), TEXT("EImageFormatBPType"));
	}
	return Z_Registration_Info_UEnum_EImageFormatBPType.OuterSingleton;
}
template<> COREUTILITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EImageFormatBPType>()
{
	return EImageFormatBPType_StaticEnum();
}
struct Z_Construct_UEnum_CoreUtility_EImageFormatBPType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BMP.Comment", "/** Windows Bitmap. */" },
		{ "BMP.Name", "EImageFormatBPType::BMP" },
		{ "BMP.ToolTip", "Windows Bitmap." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wrapper for EImageFormat::Type for BP */" },
#endif
		{ "EXR.Comment", "/** OpenEXR (HDR) image file format. */" },
		{ "EXR.Name", "EImageFormatBPType::EXR" },
		{ "EXR.ToolTip", "OpenEXR (HDR) image file format." },
		{ "GrayscaleJPEG.Comment", "/** Single channel JPEG. */" },
		{ "GrayscaleJPEG.Name", "EImageFormatBPType::GrayscaleJPEG" },
		{ "GrayscaleJPEG.ToolTip", "Single channel JPEG." },
		{ "ICNS.Comment", "/** Mac icon. */" },
		{ "ICNS.Name", "EImageFormatBPType::ICNS" },
		{ "ICNS.ToolTip", "Mac icon." },
		{ "ICO.Comment", "/** Windows Icon resource. */" },
		{ "ICO.Name", "EImageFormatBPType::ICO" },
		{ "ICO.ToolTip", "Windows Icon resource." },
		{ "Invalid.Comment", "/** Invalid or unrecognized format. */" },
		{ "Invalid.Name", "EImageFormatBPType::Invalid" },
		{ "Invalid.ToolTip", "Invalid or unrecognized format." },
		{ "JPEG.Comment", "/** Joint Photographic Experts Group. */" },
		{ "JPEG.Name", "EImageFormatBPType::JPEG" },
		{ "JPEG.ToolTip", "Joint Photographic Experts Group." },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
		{ "PNG.Comment", "/** Portable Network Graphics. */" },
		{ "PNG.Name", "EImageFormatBPType::PNG" },
		{ "PNG.ToolTip", "Portable Network Graphics." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper for EImageFormat::Type for BP" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EImageFormatBPType::Invalid", (int64)EImageFormatBPType::Invalid },
		{ "EImageFormatBPType::PNG", (int64)EImageFormatBPType::PNG },
		{ "EImageFormatBPType::JPEG", (int64)EImageFormatBPType::JPEG },
		{ "EImageFormatBPType::GrayscaleJPEG", (int64)EImageFormatBPType::GrayscaleJPEG },
		{ "EImageFormatBPType::BMP", (int64)EImageFormatBPType::BMP },
		{ "EImageFormatBPType::ICO", (int64)EImageFormatBPType::ICO },
		{ "EImageFormatBPType::EXR", (int64)EImageFormatBPType::EXR },
		{ "EImageFormatBPType::ICNS", (int64)EImageFormatBPType::ICNS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CoreUtility_EImageFormatBPType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUtility_EImageFormatBPType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUtility,
	nullptr,
	"EImageFormatBPType",
	"EImageFormatBPType",
	Z_Construct_UEnum_CoreUtility_EImageFormatBPType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUtility_EImageFormatBPType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUtility_EImageFormatBPType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUtility_EImageFormatBPType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUtility_EImageFormatBPType()
{
	if (!Z_Registration_Info_UEnum_EImageFormatBPType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EImageFormatBPType.InnerSingleton, Z_Construct_UEnum_CoreUtility_EImageFormatBPType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EImageFormatBPType.InnerSingleton;
}
// ********** End Enum EImageFormatBPType **********************************************************

// ********** Begin Enum ESIOCallbackType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIOCallbackType;
static UEnum* ESIOCallbackType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIOCallbackType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIOCallbackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUtility_ESIOCallbackType, (UObject*)Z_Construct_UPackage__Script_CoreUtility(), TEXT("ESIOCallbackType"));
	}
	return Z_Registration_Info_UEnum_ESIOCallbackType.OuterSingleton;
}
template<> COREUTILITY_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIOCallbackType>()
{
	return ESIOCallbackType_StaticEnum();
}
struct Z_Construct_UEnum_CoreUtility_ESIOCallbackType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CALLBACK_BACKGROUND_TASKGRAPH.Name", "CALLBACK_BACKGROUND_TASKGRAPH" },
		{ "CALLBACK_BACKGROUND_THREADPOOL.Name", "CALLBACK_BACKGROUND_THREADPOOL" },
		{ "CALLBACK_GAME_THREAD.Name", "CALLBACK_GAME_THREAD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Callback threading option */" },
#endif
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback threading option" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALLBACK_GAME_THREAD", (int64)CALLBACK_GAME_THREAD },
		{ "CALLBACK_BACKGROUND_THREADPOOL", (int64)CALLBACK_BACKGROUND_THREADPOOL },
		{ "CALLBACK_BACKGROUND_TASKGRAPH", (int64)CALLBACK_BACKGROUND_TASKGRAPH },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CoreUtility_ESIOCallbackType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUtility_ESIOCallbackType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUtility,
	nullptr,
	"ESIOCallbackType",
	"ESIOCallbackType",
	Z_Construct_UEnum_CoreUtility_ESIOCallbackType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUtility_ESIOCallbackType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUtility_ESIOCallbackType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUtility_ESIOCallbackType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUtility_ESIOCallbackType()
{
	if (!Z_Registration_Info_UEnum_ESIOCallbackType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIOCallbackType.InnerSingleton, Z_Construct_UEnum_CoreUtility_ESIOCallbackType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIOCallbackType.InnerSingleton;
}
// ********** End Enum ESIOCallbackType ************************************************************

// ********** Begin Class UCUBlueprintLibrary Function BytesToStruct *******************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics
{
	struct CUBlueprintLibrary_eventBytesToStruct_Parms
	{
		TArray<uint8> InBytes;
		TFieldPath<FProperty> OutAnyStruct;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SocketIOFunctions" },
		{ "CustomStructureParam", "OutAnyStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BytesToStruct constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_OutAnyStruct;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BytesToStruct constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BytesToStruct Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventBytesToStruct_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBytes_MetaData), NewProp_InBytes_MetaData) };
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::NewProp_OutAnyStruct = { "OutAnyStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventBytesToStruct_Parms, OutAnyStruct), &FProperty::StaticClass, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUBlueprintLibrary_eventBytesToStruct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUBlueprintLibrary_eventBytesToStruct_Parms), &Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::NewProp_InBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::NewProp_InBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::NewProp_OutAnyStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::PropPointers) < 2048);
// ********** End Function BytesToStruct Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "BytesToStruct", 	Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::CUBlueprintLibrary_eventBytesToStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::CUBlueprintLibrary_eventBytesToStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCUBlueprintLibrary Function BytesToStruct *********************************

// ********** Begin Class UCUBlueprintLibrary Function CallFunctionOnThread ************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics
{
	struct CUBlueprintLibrary_eventCallFunctionOnThread_Parms
	{
		FString Function;
		TEnumAsByte<ESIOCallbackType> ThreadType;
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoreUtility|Threading" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09*\x09""Calls function by name given calling context on thread specified. Use e.g. delay (0) to return to game thread\n\x09*\x09or use game thread callback for threadtype. This allows you to run certain functions on a background thread or\n\x09*\x09taskgraph in blueprints. Keep in mind that you should not create or destroy UObjects non-game threads.\n\x09*/" },
#endif
		{ "CPP_Default_WorldContextObject", "None" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls function by name given calling context on thread specified. Use e.g. delay (0) to return to game thread\nor use game thread callback for threadtype. This allows you to run certain functions on a background thread or\ntaskgraph in blueprints. Keep in mind that you should not create or destroy UObjects non-game threads." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CallFunctionOnThread constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Function;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThreadType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CallFunctionOnThread constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CallFunctionOnThread Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventCallFunctionOnThread_Parms, Function), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::NewProp_ThreadType = { "ThreadType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventCallFunctionOnThread_Parms, ThreadType), Z_Construct_UEnum_CoreUtility_ESIOCallbackType, METADATA_PARAMS(0, nullptr) }; // 1695061350
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventCallFunctionOnThread_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::NewProp_ThreadType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::PropPointers) < 2048);
// ********** End Function CallFunctionOnThread Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "CallFunctionOnThread", 	Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::CUBlueprintLibrary_eventCallFunctionOnThread_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::CUBlueprintLibrary_eventCallFunctionOnThread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execCallFunctionOnThread)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Function);
	P_GET_PROPERTY(FByteProperty,Z_Param_ThreadType);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCUBlueprintLibrary::CallFunctionOnThread(Z_Param_Function,ESIOCallbackType(Z_Param_ThreadType),Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function CallFunctionOnThread **************************

// ********** Begin Class UCUBlueprintLibrary Function CallFunctionOnThreadGraphReturn *************
struct Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics
{
	struct CUBlueprintLibrary_eventCallFunctionOnThreadGraphReturn_Parms
	{
		FString Function;
		TEnumAsByte<ESIOCallbackType> ThreadType;
		FLatentActionInfo LatentInfo;
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoreUtility|Threading" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Calls specified function on thread type with a latent graph return. This allows you to run certain functions on a background thread or\n\x09*\x09taskgraph in blueprints. Keep in mind that you should not create or destroy UObjects non-game threads.\n\x09*/" },
#endif
		{ "CPP_Default_WorldContextObject", "None" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls specified function on thread type with a latent graph return. This allows you to run certain functions on a background thread or\ntaskgraph in blueprints. Keep in mind that you should not create or destroy UObjects non-game threads." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CallFunctionOnThreadGraphReturn constinit property declarations *******
	static const UECodeGen_Private::FStrPropertyParams NewProp_Function;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThreadType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CallFunctionOnThreadGraphReturn constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CallFunctionOnThreadGraphReturn Property Definitions ******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventCallFunctionOnThreadGraphReturn_Parms, Function), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::NewProp_ThreadType = { "ThreadType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventCallFunctionOnThreadGraphReturn_Parms, ThreadType), Z_Construct_UEnum_CoreUtility_ESIOCallbackType, METADATA_PARAMS(0, nullptr) }; // 1695061350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventCallFunctionOnThreadGraphReturn_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventCallFunctionOnThreadGraphReturn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::NewProp_ThreadType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::PropPointers) < 2048);
// ********** End Function CallFunctionOnThreadGraphReturn Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "CallFunctionOnThreadGraphReturn", 	Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::CUBlueprintLibrary_eventCallFunctionOnThreadGraphReturn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::CUBlueprintLibrary_eventCallFunctionOnThreadGraphReturn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execCallFunctionOnThreadGraphReturn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Function);
	P_GET_PROPERTY(FByteProperty,Z_Param_ThreadType);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCUBlueprintLibrary::CallFunctionOnThreadGraphReturn(Z_Param_Function,ESIOCallbackType(Z_Param_ThreadType),Z_Param_LatentInfo,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function CallFunctionOnThreadGraphReturn ***************

// ********** Begin Class UCUBlueprintLibrary Function Conv_BytesToString **************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics
{
	struct CUBlueprintLibrary_eventConv_BytesToString_Parms
	{
		TArray<uint8> InBytes;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Convert any unicode bytes to string\n\x09*/" },
#endif
		{ "DisplayName", "To String (Bytes)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert any unicode bytes to string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_BytesToString constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_BytesToString constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_BytesToString Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_BytesToString_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBytes_MetaData), NewProp_InBytes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_BytesToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::NewProp_InBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::NewProp_InBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::PropPointers) < 2048);
// ********** End Function Conv_BytesToString Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "Conv_BytesToString", 	Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::CUBlueprintLibrary_eventConv_BytesToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::CUBlueprintLibrary_eventConv_BytesToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConv_BytesToString)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UCUBlueprintLibrary::Conv_BytesToString(Z_Param_Out_InBytes);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function Conv_BytesToString ****************************

// ********** Begin Class UCUBlueprintLibrary Function Conv_BytesToTexture *************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics
{
	struct CUBlueprintLibrary_eventConv_BytesToTexture_Parms
	{
		TArray<uint8> InBytes;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Convert bytes to UTexture2D using auto-detection - optimized, but can still have performance implication\n\x09*/" },
#endif
		{ "DisplayName", "To Texture2D (Bytes)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert bytes to UTexture2D using auto-detection - optimized, but can still have performance implication" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_BytesToTexture constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_BytesToTexture constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_BytesToTexture Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_BytesToTexture_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBytes_MetaData), NewProp_InBytes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_BytesToTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::NewProp_InBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::NewProp_InBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::PropPointers) < 2048);
// ********** End Function Conv_BytesToTexture Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "Conv_BytesToTexture", 	Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::CUBlueprintLibrary_eventConv_BytesToTexture_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::CUBlueprintLibrary_eventConv_BytesToTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConv_BytesToTexture)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UCUBlueprintLibrary::Conv_BytesToTexture(Z_Param_Out_InBytes);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function Conv_BytesToTexture ***************************

// ********** Begin Class UCUBlueprintLibrary Function Conv_CompactBytesToTransforms ***************
struct Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics
{
	struct CUBlueprintLibrary_eventConv_CompactBytesToTransforms_Parms
	{
		TArray<uint8> InCompactBytes;
		TArray<FTransform> OutTransforms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Compact Transform bytes are [[pitch,yaw,roll,x,y,z,sx,sy,sz],...]\n\x09*/" },
#endif
		{ "DisplayName", "To Transforms (Bytes)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compact Transform bytes are [[pitch,yaw,roll,x,y,z,sx,sy,sz],...]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCompactBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_CompactBytesToTransforms constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCompactBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InCompactBytes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_CompactBytesToTransforms constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_CompactBytesToTransforms Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::NewProp_InCompactBytes_Inner = { "InCompactBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::NewProp_InCompactBytes = { "InCompactBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_CompactBytesToTransforms_Parms, InCompactBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCompactBytes_MetaData), NewProp_InCompactBytes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::NewProp_OutTransforms_Inner = { "OutTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::NewProp_OutTransforms = { "OutTransforms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_CompactBytesToTransforms_Parms, OutTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::NewProp_InCompactBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::NewProp_InCompactBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::NewProp_OutTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::NewProp_OutTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::PropPointers) < 2048);
// ********** End Function Conv_CompactBytesToTransforms Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "Conv_CompactBytesToTransforms", 	Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::CUBlueprintLibrary_eventConv_CompactBytesToTransforms_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::CUBlueprintLibrary_eventConv_CompactBytesToTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConv_CompactBytesToTransforms)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InCompactBytes);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutTransforms);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCUBlueprintLibrary::Conv_CompactBytesToTransforms(Z_Param_Out_InCompactBytes,Z_Param_Out_OutTransforms);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function Conv_CompactBytesToTransforms *****************

// ********** Begin Class UCUBlueprintLibrary Function Conv_CompactPositionBytesToTransforms *******
struct Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics
{
	struct CUBlueprintLibrary_eventConv_CompactPositionBytesToTransforms_Parms
	{
		TArray<uint8> InCompactBytes;
		TArray<FTransform> OutTransforms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Compact Position bytes are [[x,y,z],...]\n\x09*/" },
#endif
		{ "DisplayName", "To Transforms (Location Bytes)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compact Position bytes are [[x,y,z],...]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCompactBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_CompactPositionBytesToTransforms constinit property declarations *
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCompactBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InCompactBytes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_CompactPositionBytesToTransforms constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_CompactPositionBytesToTransforms Property Definitions ************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::NewProp_InCompactBytes_Inner = { "InCompactBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::NewProp_InCompactBytes = { "InCompactBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_CompactPositionBytesToTransforms_Parms, InCompactBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCompactBytes_MetaData), NewProp_InCompactBytes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::NewProp_OutTransforms_Inner = { "OutTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::NewProp_OutTransforms = { "OutTransforms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_CompactPositionBytesToTransforms_Parms, OutTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::NewProp_InCompactBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::NewProp_InCompactBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::NewProp_OutTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::NewProp_OutTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::PropPointers) < 2048);
// ********** End Function Conv_CompactPositionBytesToTransforms Property Definitions **************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "Conv_CompactPositionBytesToTransforms", 	Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::CUBlueprintLibrary_eventConv_CompactPositionBytesToTransforms_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::CUBlueprintLibrary_eventConv_CompactPositionBytesToTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConv_CompactPositionBytesToTransforms)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InCompactBytes);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutTransforms);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCUBlueprintLibrary::Conv_CompactPositionBytesToTransforms(Z_Param_Out_InCompactBytes,Z_Param_Out_OutTransforms);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function Conv_CompactPositionBytesToTransforms *********

// ********** Begin Class UCUBlueprintLibrary Function Conv_OpusBytesToWav *************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics
{
	struct CUBlueprintLibrary_eventConv_OpusBytesToWav_Parms
	{
		TArray<uint8> InBytes;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Audio decompression - Convert opus (currently raw serialized) to wav\n\x09*/" },
#endif
		{ "DisplayName", "To Wav Bytes (Opus Bytes)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio decompression - Convert opus (currently raw serialized) to wav" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_OpusBytesToWav constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_OpusBytesToWav constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_OpusBytesToWav Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_OpusBytesToWav_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBytes_MetaData), NewProp_InBytes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_OpusBytesToWav_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::NewProp_InBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::NewProp_InBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::PropPointers) < 2048);
// ********** End Function Conv_OpusBytesToWav Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "Conv_OpusBytesToWav", 	Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::CUBlueprintLibrary_eventConv_OpusBytesToWav_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::CUBlueprintLibrary_eventConv_OpusBytesToWav_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConv_OpusBytesToWav)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_OpusBytesToWav(Z_Param_Out_InBytes);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function Conv_OpusBytesToWav ***************************

// ********** Begin Class UCUBlueprintLibrary Function Conv_PCMToWav *******************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics
{
	struct CUBlueprintLibrary_eventConv_PCMToWav_Parms
	{
		TArray<uint8> InPCM;
		int32 SampleRate;
		int32 Channels;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Audio conversion - Convert PCM bytes + definition to wav\n\x09*/" },
#endif
		{ "DisplayName", "To Wav Bytes (PCM Bytes)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio conversion - Convert PCM bytes + definition to wav" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPCM_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_PCMToWav constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InPCM_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InPCM;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_PCMToWav constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_PCMToWav Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_InPCM_Inner = { "InPCM", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_InPCM = { "InPCM", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_PCMToWav_Parms, InPCM), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPCM_MetaData), NewProp_InPCM_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_PCMToWav_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_PCMToWav_Parms, Channels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_PCMToWav_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_InPCM_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_InPCM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_Channels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::PropPointers) < 2048);
// ********** End Function Conv_PCMToWav Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "Conv_PCMToWav", 	Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::CUBlueprintLibrary_eventConv_PCMToWav_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::CUBlueprintLibrary_eventConv_PCMToWav_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConv_PCMToWav)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InPCM);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_PCMToWav(Z_Param_Out_InPCM,Z_Param_SampleRate,Z_Param_Channels);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function Conv_PCMToWav *********************************

// ********** Begin Class UCUBlueprintLibrary Function Conv_SoundWaveToWavBytes ********************
struct Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics
{
	struct CUBlueprintLibrary_eventConv_SoundWaveToWavBytes_Parms
	{
		USoundWave* SoundWave;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""convert a soundwave into wav bytes\n\x09*/" },
#endif
		{ "DisplayName", "To Bytes (SoundWave)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "convert a soundwave into wav bytes" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_SoundWaveToWavBytes constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_SoundWaveToWavBytes constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_SoundWaveToWavBytes Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_SoundWaveToWavBytes_Parms, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_SoundWaveToWavBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::NewProp_SoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::PropPointers) < 2048);
// ********** End Function Conv_SoundWaveToWavBytes Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "Conv_SoundWaveToWavBytes", 	Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::CUBlueprintLibrary_eventConv_SoundWaveToWavBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::CUBlueprintLibrary_eventConv_SoundWaveToWavBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConv_SoundWaveToWavBytes)
{
	P_GET_OBJECT(USoundWave,Z_Param_SoundWave);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_SoundWaveToWavBytes(Z_Param_SoundWave);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function Conv_SoundWaveToWavBytes **********************

// ********** Begin Class UCUBlueprintLibrary Function Conv_StringToBytes **************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics
{
	struct CUBlueprintLibrary_eventConv_StringToBytes_Parms
	{
		FString InString;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Convert string to UTF8 bytes\n\x09*/" },
#endif
		{ "DisplayName", "To Bytes (String)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert string to UTF8 bytes" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_StringToBytes constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_StringToBytes constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_StringToBytes Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_StringToBytes_Parms, InString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_StringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::PropPointers) < 2048);
// ********** End Function Conv_StringToBytes Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "Conv_StringToBytes", 	Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::CUBlueprintLibrary_eventConv_StringToBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::CUBlueprintLibrary_eventConv_StringToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConv_StringToBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_StringToBytes(Z_Param_InString);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function Conv_StringToBytes ****************************

// ********** Begin Class UCUBlueprintLibrary Function Conv_TextureToBytes *************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics
{
	struct CUBlueprintLibrary_eventConv_TextureToBytes_Parms
	{
		UTexture2D* Texture;
		TArray<uint8> OutBuffer;
		EImageFormatBPType Format;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Convert UTexture2D to bytes in given format - can have performance implication\n\x09*/" },
#endif
		{ "CPP_Default_Format", "PNG" },
		{ "DisplayName", "To Bytes (Texture2D)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert UTexture2D to bytes in given format - can have performance implication" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_TextureToBytes constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBuffer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_TextureToBytes constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_TextureToBytes Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_TextureToBytes_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_OutBuffer_Inner = { "OutBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_TextureToBytes_Parms, OutBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_TextureToBytes_Parms, Format), Z_Construct_UEnum_CoreUtility_EImageFormatBPType, METADATA_PARAMS(0, nullptr) }; // 1562966631
void Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUBlueprintLibrary_eventConv_TextureToBytes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUBlueprintLibrary_eventConv_TextureToBytes_Parms), &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_OutBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_OutBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::PropPointers) < 2048);
// ********** End Function Conv_TextureToBytes Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "Conv_TextureToBytes", 	Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::CUBlueprintLibrary_eventConv_TextureToBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::CUBlueprintLibrary_eventConv_TextureToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConv_TextureToBytes)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer);
	P_GET_ENUM(EImageFormatBPType,Z_Param_Format);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCUBlueprintLibrary::Conv_TextureToBytes(Z_Param_Texture,Z_Param_Out_OutBuffer,EImageFormatBPType(Z_Param_Format));
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function Conv_TextureToBytes ***************************

// ********** Begin Class UCUBlueprintLibrary Function Conv_WavBytesToOpus *************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics
{
	struct CUBlueprintLibrary_eventConv_WavBytesToOpus_Parms
	{
		TArray<uint8> InBytes;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Audio compression - Convert wav to opus (currently raw serialized)\n\x09*/" },
#endif
		{ "DisplayName", "To Opus Bytes (Wav Bytes)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio compression - Convert wav to opus (currently raw serialized)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_WavBytesToOpus constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_WavBytesToOpus constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_WavBytesToOpus Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_WavBytesToOpus_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBytes_MetaData), NewProp_InBytes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_WavBytesToOpus_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::NewProp_InBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::NewProp_InBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::PropPointers) < 2048);
// ********** End Function Conv_WavBytesToOpus Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "Conv_WavBytesToOpus", 	Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::CUBlueprintLibrary_eventConv_WavBytesToOpus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::CUBlueprintLibrary_eventConv_WavBytesToOpus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConv_WavBytesToOpus)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UCUBlueprintLibrary::Conv_WavBytesToOpus(Z_Param_Out_InBytes);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function Conv_WavBytesToOpus ***************************

// ********** Begin Class UCUBlueprintLibrary Function Conv_WavBytesToSoundWave ********************
struct Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics
{
	struct CUBlueprintLibrary_eventConv_WavBytesToSoundWave_Parms
	{
		TArray<uint8> InBytes;
		USoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Assumes .wav chunks - handles async alloc, callable from any thread\n\x09*/" },
#endif
		{ "DisplayName", "To SoundWave (Wav Bytes)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assumes .wav chunks - handles async alloc, callable from any thread" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Conv_WavBytesToSoundWave constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Conv_WavBytesToSoundWave constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Conv_WavBytesToSoundWave Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_WavBytesToSoundWave_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBytes_MetaData), NewProp_InBytes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConv_WavBytesToSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::NewProp_InBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::NewProp_InBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::PropPointers) < 2048);
// ********** End Function Conv_WavBytesToSoundWave Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "Conv_WavBytesToSoundWave", 	Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::CUBlueprintLibrary_eventConv_WavBytesToSoundWave_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::CUBlueprintLibrary_eventConv_WavBytesToSoundWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConv_WavBytesToSoundWave)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundWave**)Z_Param__Result=UCUBlueprintLibrary::Conv_WavBytesToSoundWave(Z_Param_Out_InBytes);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function Conv_WavBytesToSoundWave **********************

// ********** Begin Class UCUBlueprintLibrary Function ConvertWavToPCM *****************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics
{
	struct CUBlueprintLibrary_eventConvertWavToPCM_Parms
	{
		TArray<uint8> WavData;
		TArray<uint8> OutPCMData;
		int32 OutSampleRate;
		int32 OutNumChannels;
		int32 OutBitsPerSample;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Audio conversion - Convert Wav into PCM + header info\n\x09*/" },
#endif
		{ "DisplayName", "To PCM Bytes (Wav Bytes)" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio conversion - Convert Wav into PCM + header info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WavData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertWavToPCM constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_WavData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WavData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutPCMData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPCMData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutSampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutBitsPerSample;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertWavToPCM constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertWavToPCM Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_WavData_Inner = { "WavData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_WavData = { "WavData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConvertWavToPCM_Parms, WavData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WavData_MetaData), NewProp_WavData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_OutPCMData_Inner = { "OutPCMData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_OutPCMData = { "OutPCMData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConvertWavToPCM_Parms, OutPCMData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_OutSampleRate = { "OutSampleRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConvertWavToPCM_Parms, OutSampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_OutNumChannels = { "OutNumChannels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConvertWavToPCM_Parms, OutNumChannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_OutBitsPerSample = { "OutBitsPerSample", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventConvertWavToPCM_Parms, OutBitsPerSample), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUBlueprintLibrary_eventConvertWavToPCM_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUBlueprintLibrary_eventConvertWavToPCM_Parms), &Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_WavData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_WavData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_OutPCMData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_OutPCMData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_OutSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_OutNumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_OutBitsPerSample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::PropPointers) < 2048);
// ********** End Function ConvertWavToPCM Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "ConvertWavToPCM", 	Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::CUBlueprintLibrary_eventConvertWavToPCM_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::CUBlueprintLibrary_eventConvertWavToPCM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execConvertWavToPCM)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_WavData);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutPCMData);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutSampleRate);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumChannels);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutBitsPerSample);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCUBlueprintLibrary::ConvertWavToPCM(Z_Param_Out_WavData,Z_Param_Out_OutPCMData,Z_Param_Out_OutSampleRate,Z_Param_Out_OutNumChannels,Z_Param_Out_OutBitsPerSample);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function ConvertWavToPCM *******************************

// ********** Begin Class UCUBlueprintLibrary Function GetLoginId **********************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics
{
	struct CUBlueprintLibrary_eventGetLoginId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoreUtility|Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns a type of Unique Hardware ID\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a type of Unique Hardware ID" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLoginId constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLoginId constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLoginId Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventGetLoginId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::PropPointers) < 2048);
// ********** End Function GetLoginId Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "GetLoginId", 	Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::CUBlueprintLibrary_eventGetLoginId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::CUBlueprintLibrary_eventGetLoginId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execGetLoginId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UCUBlueprintLibrary::GetLoginId();
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function GetLoginId ************************************

// ********** Begin Class UCUBlueprintLibrary Function MeasureTimerStart ***************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics
{
	struct CUBlueprintLibrary_eventMeasureTimerStart_Parms
	{
		FString Category;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoreUtility|Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Time inter-tick durations for simple\n\x09*/" },
#endif
		{ "CPP_Default_Category", "TimeTaken" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time inter-tick durations for simple" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MeasureTimerStart constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MeasureTimerStart constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MeasureTimerStart Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventMeasureTimerStart_Parms, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::NewProp_Category,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::PropPointers) < 2048);
// ********** End Function MeasureTimerStart Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "MeasureTimerStart", 	Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::CUBlueprintLibrary_eventMeasureTimerStart_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::CUBlueprintLibrary_eventMeasureTimerStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execMeasureTimerStart)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Category);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCUBlueprintLibrary::MeasureTimerStart(Z_Param_Category);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function MeasureTimerStart *****************************

// ********** Begin Class UCUBlueprintLibrary Function MeasureTimerStop ****************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics
{
	struct CUBlueprintLibrary_eventMeasureTimerStop_Parms
	{
		FString Category;
		bool bShouldLogResult;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoreUtility|Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Stops the timer started for this category and returns the duration taken in milliseconds \n\x09*/" },
#endif
		{ "CPP_Default_bShouldLogResult", "true" },
		{ "CPP_Default_Category", "TimeTaken" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the timer started for this category and returns the duration taken in milliseconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MeasureTimerStop constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static void NewProp_bShouldLogResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLogResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MeasureTimerStop constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MeasureTimerStop Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventMeasureTimerStop_Parms, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
void Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::NewProp_bShouldLogResult_SetBit(void* Obj)
{
	((CUBlueprintLibrary_eventMeasureTimerStop_Parms*)Obj)->bShouldLogResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::NewProp_bShouldLogResult = { "bShouldLogResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUBlueprintLibrary_eventMeasureTimerStop_Parms), &Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::NewProp_bShouldLogResult_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventMeasureTimerStop_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::NewProp_bShouldLogResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::PropPointers) < 2048);
// ********** End Function MeasureTimerStop Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "MeasureTimerStop", 	Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::CUBlueprintLibrary_eventMeasureTimerStop_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::CUBlueprintLibrary_eventMeasureTimerStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execMeasureTimerStop)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Category);
	P_GET_UBOOL(Z_Param_bShouldLogResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCUBlueprintLibrary::MeasureTimerStop(Z_Param_Category,Z_Param_bShouldLogResult);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function MeasureTimerStop ******************************

// ********** Begin Class UCUBlueprintLibrary Function NowUTCString ********************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics
{
	struct CUBlueprintLibrary_eventNowUTCString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoreUtility|Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Current UTC time in string format\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current UTC time in string format" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function NowUTCString constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NowUTCString constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NowUTCString Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventNowUTCString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::PropPointers) < 2048);
// ********** End Function NowUTCString Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "NowUTCString", 	Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::CUBlueprintLibrary_eventNowUTCString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::CUBlueprintLibrary_eventNowUTCString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execNowUTCString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UCUBlueprintLibrary::NowUTCString();
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function NowUTCString **********************************

// ********** Begin Class UCUBlueprintLibrary Function SetSoundWaveFromWavBytes ********************
struct Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics
{
	struct CUBlueprintLibrary_eventSetSoundWaveFromWavBytes_Parms
	{
		USoundWaveProcedural* InSoundWave;
		TArray<uint8> InBytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoreUtility|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Sets and updates soundwave if needed from incoming bytes. Callable on background threads\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets and updates soundwave if needed from incoming bytes. Callable on background threads" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSoundWaveFromWavBytes constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSoundWave;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSoundWaveFromWavBytes constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSoundWaveFromWavBytes Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::NewProp_InSoundWave = { "InSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventSetSoundWaveFromWavBytes_Parms, InSoundWave), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventSetSoundWaveFromWavBytes_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBytes_MetaData), NewProp_InBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::NewProp_InSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::NewProp_InBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::NewProp_InBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::PropPointers) < 2048);
// ********** End Function SetSoundWaveFromWavBytes Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "SetSoundWaveFromWavBytes", 	Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::CUBlueprintLibrary_eventSetSoundWaveFromWavBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::CUBlueprintLibrary_eventSetSoundWaveFromWavBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execSetSoundWaveFromWavBytes)
{
	P_GET_OBJECT(USoundWaveProcedural,Z_Param_InSoundWave);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCUBlueprintLibrary::SetSoundWaveFromWavBytes(Z_Param_InSoundWave,Z_Param_Out_InBytes);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function SetSoundWaveFromWavBytes **********************

// ********** Begin Class UCUBlueprintLibrary Function StructToBytes *******************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics
{
	struct CUBlueprintLibrary_eventStructToBytes_Parms
	{
		TFieldPath<FProperty> AnyStruct;
		TArray<uint8> OutBytes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SocketIOFunctions" },
		{ "CustomStructureParam", "AnyStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StructToBytes constinit property declarations *************************
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_AnyStruct;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBytes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StructToBytes constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StructToBytes Property Definitions ************************************
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::NewProp_AnyStruct = { "AnyStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventStructToBytes_Parms, AnyStruct), &FProperty::StaticClass, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::NewProp_OutBytes_Inner = { "OutBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::NewProp_OutBytes = { "OutBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventStructToBytes_Parms, OutBytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUBlueprintLibrary_eventStructToBytes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUBlueprintLibrary_eventStructToBytes_Parms), &Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::NewProp_AnyStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::NewProp_OutBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::NewProp_OutBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::PropPointers) < 2048);
// ********** End Function StructToBytes Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "StructToBytes", 	Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::CUBlueprintLibrary_eventStructToBytes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::CUBlueprintLibrary_eventStructToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCUBlueprintLibrary Function StructToBytes *********************************

// ********** Begin Class UCUBlueprintLibrary Function ToHashCode **********************************
struct Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics
{
	struct CUBlueprintLibrary_eventToHashCode_Parms
	{
		FString String;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CoreUtility|Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Return a somewhat unique int for given string\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a somewhat unique int for given string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToHashCode constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToHashCode constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToHashCode Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventToHashCode_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUBlueprintLibrary_eventToHashCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::PropPointers) < 2048);
// ********** End Function ToHashCode Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCUBlueprintLibrary, nullptr, "ToHashCode", 	Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::CUBlueprintLibrary_eventToHashCode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::CUBlueprintLibrary_eventToHashCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUBlueprintLibrary::execToHashCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UCUBlueprintLibrary::ToHashCode(Z_Param_String);
	P_NATIVE_END;
}
// ********** End Class UCUBlueprintLibrary Function ToHashCode ************************************

// ********** Begin Class UCUBlueprintLibrary ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCUBlueprintLibrary;
UClass* UCUBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UCUBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UCUBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CUBlueprintLibrary"),
			Z_Registration_Info_UClass_UCUBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUCUBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UCUBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UCUBlueprintLibrary_NoRegister()
{
	return UCUBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCUBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Useful generic blueprint functions, mostly conversion\n */" },
#endif
		{ "IncludePath", "CUBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/CUBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Useful generic blueprint functions, mostly conversion" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UCUBlueprintLibrary constinit property declarations **********************
// ********** End Class UCUBlueprintLibrary constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BytesToStruct"), .Pointer = &UCUBlueprintLibrary::execBytesToStruct },
		{ .NameUTF8 = UTF8TEXT("CallFunctionOnThread"), .Pointer = &UCUBlueprintLibrary::execCallFunctionOnThread },
		{ .NameUTF8 = UTF8TEXT("CallFunctionOnThreadGraphReturn"), .Pointer = &UCUBlueprintLibrary::execCallFunctionOnThreadGraphReturn },
		{ .NameUTF8 = UTF8TEXT("Conv_BytesToString"), .Pointer = &UCUBlueprintLibrary::execConv_BytesToString },
		{ .NameUTF8 = UTF8TEXT("Conv_BytesToTexture"), .Pointer = &UCUBlueprintLibrary::execConv_BytesToTexture },
		{ .NameUTF8 = UTF8TEXT("Conv_CompactBytesToTransforms"), .Pointer = &UCUBlueprintLibrary::execConv_CompactBytesToTransforms },
		{ .NameUTF8 = UTF8TEXT("Conv_CompactPositionBytesToTransforms"), .Pointer = &UCUBlueprintLibrary::execConv_CompactPositionBytesToTransforms },
		{ .NameUTF8 = UTF8TEXT("Conv_OpusBytesToWav"), .Pointer = &UCUBlueprintLibrary::execConv_OpusBytesToWav },
		{ .NameUTF8 = UTF8TEXT("Conv_PCMToWav"), .Pointer = &UCUBlueprintLibrary::execConv_PCMToWav },
		{ .NameUTF8 = UTF8TEXT("Conv_SoundWaveToWavBytes"), .Pointer = &UCUBlueprintLibrary::execConv_SoundWaveToWavBytes },
		{ .NameUTF8 = UTF8TEXT("Conv_StringToBytes"), .Pointer = &UCUBlueprintLibrary::execConv_StringToBytes },
		{ .NameUTF8 = UTF8TEXT("Conv_TextureToBytes"), .Pointer = &UCUBlueprintLibrary::execConv_TextureToBytes },
		{ .NameUTF8 = UTF8TEXT("Conv_WavBytesToOpus"), .Pointer = &UCUBlueprintLibrary::execConv_WavBytesToOpus },
		{ .NameUTF8 = UTF8TEXT("Conv_WavBytesToSoundWave"), .Pointer = &UCUBlueprintLibrary::execConv_WavBytesToSoundWave },
		{ .NameUTF8 = UTF8TEXT("ConvertWavToPCM"), .Pointer = &UCUBlueprintLibrary::execConvertWavToPCM },
		{ .NameUTF8 = UTF8TEXT("GetLoginId"), .Pointer = &UCUBlueprintLibrary::execGetLoginId },
		{ .NameUTF8 = UTF8TEXT("MeasureTimerStart"), .Pointer = &UCUBlueprintLibrary::execMeasureTimerStart },
		{ .NameUTF8 = UTF8TEXT("MeasureTimerStop"), .Pointer = &UCUBlueprintLibrary::execMeasureTimerStop },
		{ .NameUTF8 = UTF8TEXT("NowUTCString"), .Pointer = &UCUBlueprintLibrary::execNowUTCString },
		{ .NameUTF8 = UTF8TEXT("SetSoundWaveFromWavBytes"), .Pointer = &UCUBlueprintLibrary::execSetSoundWaveFromWavBytes },
		{ .NameUTF8 = UTF8TEXT("StructToBytes"), .Pointer = &UCUBlueprintLibrary::execStructToBytes },
		{ .NameUTF8 = UTF8TEXT("ToHashCode"), .Pointer = &UCUBlueprintLibrary::execToHashCode },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_BytesToStruct, "BytesToStruct" }, // 2054405249
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThread, "CallFunctionOnThread" }, // 1318891469
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_CallFunctionOnThreadGraphReturn, "CallFunctionOnThreadGraphReturn" }, // 1213355325
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToString, "Conv_BytesToString" }, // 3975742037
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_BytesToTexture, "Conv_BytesToTexture" }, // 521784833
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactBytesToTransforms, "Conv_CompactBytesToTransforms" }, // 3318407046
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_CompactPositionBytesToTransforms, "Conv_CompactPositionBytesToTransforms" }, // 149543838
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_OpusBytesToWav, "Conv_OpusBytesToWav" }, // 1370374616
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_PCMToWav, "Conv_PCMToWav" }, // 331197172
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_SoundWaveToWavBytes, "Conv_SoundWaveToWavBytes" }, // 1628603829
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_StringToBytes, "Conv_StringToBytes" }, // 1700428552
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_TextureToBytes, "Conv_TextureToBytes" }, // 300791272
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToOpus, "Conv_WavBytesToOpus" }, // 3545918610
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_Conv_WavBytesToSoundWave, "Conv_WavBytesToSoundWave" }, // 3970915525
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_ConvertWavToPCM, "ConvertWavToPCM" }, // 2781523401
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_GetLoginId, "GetLoginId" }, // 1371535348
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStart, "MeasureTimerStart" }, // 1818271038
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_MeasureTimerStop, "MeasureTimerStop" }, // 25071879
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_NowUTCString, "NowUTCString" }, // 4014576780
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_SetSoundWaveFromWavBytes, "SetSoundWaveFromWavBytes" }, // 3541346110
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_StructToBytes, "StructToBytes" }, // 3121096363
		{ &Z_Construct_UFunction_UCUBlueprintLibrary_ToHashCode, "ToHashCode" }, // 1076198396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCUBlueprintLibrary_Statics
UObject* (*const Z_Construct_UClass_UCUBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUtility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCUBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCUBlueprintLibrary_Statics::ClassParams = {
	&UCUBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCUBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCUBlueprintLibrary_Statics::Class_MetaDataParams)
};
void UCUBlueprintLibrary::StaticRegisterNativesUCUBlueprintLibrary()
{
	UClass* Class = UCUBlueprintLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCUBlueprintLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCUBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UCUBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCUBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCUBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCUBlueprintLibrary.OuterSingleton;
}
UCUBlueprintLibrary::UCUBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCUBlueprintLibrary);
UCUBlueprintLibrary::~UCUBlueprintLibrary() {}
// ********** End Class UCUBlueprintLibrary ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUBlueprintLibrary_h__Script_CoreUtility_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EImageFormatBPType_StaticEnum, TEXT("EImageFormatBPType"), &Z_Registration_Info_UEnum_EImageFormatBPType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1562966631U) },
		{ ESIOCallbackType_StaticEnum, TEXT("ESIOCallbackType"), &Z_Registration_Info_UEnum_ESIOCallbackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1695061350U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCUBlueprintLibrary, UCUBlueprintLibrary::StaticClass, TEXT("UCUBlueprintLibrary"), &Z_Registration_Info_UClass_UCUBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCUBlueprintLibrary), 1589564491U) },
	};
}; // Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUBlueprintLibrary_h__Script_CoreUtility_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUBlueprintLibrary_h__Script_CoreUtility_3423913423{
	TEXT("/Script/CoreUtility"),
	Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUBlueprintLibrary_h__Script_CoreUtility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUBlueprintLibrary_h__Script_CoreUtility_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUBlueprintLibrary_h__Script_CoreUtility_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_CoreUtility_Public_CUBlueprintLibrary_h__Script_CoreUtility_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
