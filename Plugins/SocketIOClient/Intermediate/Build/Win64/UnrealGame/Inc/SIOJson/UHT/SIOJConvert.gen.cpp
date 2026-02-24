// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIOJConvert.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIOJConvert() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SIOJSON_API UClass* Z_Construct_UClass_USIOJConvert();
SIOJSON_API UClass* Z_Construct_UClass_USIOJConvert_NoRegister();
UPackage* Z_Construct_UPackage__Script_SIOJson();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIOJConvert *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIOJConvert;
UClass* USIOJConvert::GetPrivateStaticClass()
{
	using TClass = USIOJConvert;
	if (!Z_Registration_Info_UClass_USIOJConvert.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIOJConvert"),
			Z_Registration_Info_UClass_USIOJConvert.InnerSingleton,
			StaticRegisterNativesUSIOJConvert,
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
	return Z_Registration_Info_UClass_USIOJConvert.InnerSingleton;
}
UClass* Z_Construct_UClass_USIOJConvert_NoRegister()
{
	return USIOJConvert::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIOJConvert_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SIOJConvert.h" },
		{ "ModuleRelativePath", "Public/SIOJConvert.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIOJConvert constinit property declarations *****************************
// ********** End Class USIOJConvert constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIOJConvert>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIOJConvert_Statics
UObject* (*const Z_Construct_UClass_USIOJConvert_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SIOJson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJConvert_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIOJConvert_Statics::ClassParams = {
	&USIOJConvert::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJConvert_Statics::Class_MetaDataParams), Z_Construct_UClass_USIOJConvert_Statics::Class_MetaDataParams)
};
void USIOJConvert::StaticRegisterNativesUSIOJConvert()
{
}
UClass* Z_Construct_UClass_USIOJConvert()
{
	if (!Z_Registration_Info_UClass_USIOJConvert.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIOJConvert.OuterSingleton, Z_Construct_UClass_USIOJConvert_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIOJConvert.OuterSingleton;
}
USIOJConvert::USIOJConvert(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIOJConvert);
USIOJConvert::~USIOJConvert() {}
// ********** End Class USIOJConvert ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJConvert_h__Script_SIOJson_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIOJConvert, USIOJConvert::StaticClass, TEXT("USIOJConvert"), &Z_Registration_Info_UClass_USIOJConvert, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIOJConvert), 1493041405U) },
	};
}; // Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJConvert_h__Script_SIOJson_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJConvert_h__Script_SIOJson_2298316641{
	TEXT("/Script/SIOJson"),
	Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJConvert_h__Script_SIOJson_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vr_demo_refactored_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJConvert_h__Script_SIOJson_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
