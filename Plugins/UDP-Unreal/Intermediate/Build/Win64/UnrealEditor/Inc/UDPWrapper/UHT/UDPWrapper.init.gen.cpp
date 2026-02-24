// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDPWrapper_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	UDPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature();
	UDPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature();
	UDPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UDPWrapper;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UDPWrapper()
	{
		if (!Z_Registration_Info_UPackage__Script_UDPWrapper.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_UDPWrapper_UDPMessageSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketSendStateSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_UDPWrapper_UDPSocketStateSignature__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/UDPWrapper",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x6617FC84,
			0xC44EB2D1,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UDPWrapper.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_UDPWrapper.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UDPWrapper(Z_Construct_UPackage__Script_UDPWrapper, TEXT("/Script/UDPWrapper"), Z_Registration_Info_UPackage__Script_UDPWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6617FC84, 0xC44EB2D1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
