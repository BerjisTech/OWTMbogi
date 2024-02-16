// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "openWorldTemplate/Public/AIDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDriver() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	OPENWORLDTEMPLATE_API UClass* Z_Construct_UClass_UAIDriver();
	OPENWORLDTEMPLATE_API UClass* Z_Construct_UClass_UAIDriver_NoRegister();
	UPackage* Z_Construct_UPackage__Script_openWorldTemplate();
// End Cross Module References
	void UAIDriver::StaticRegisterNativesUAIDriver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIDriver);
	UClass* Z_Construct_UClass_UAIDriver_NoRegister()
	{
		return UAIDriver::StaticClass();
	}
	struct Z_Construct_UClass_UAIDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_openWorldTemplate,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIDriver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDriver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AIDriver.h" },
		{ "ModuleRelativePath", "Public/AIDriver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIDriver_Statics::ClassParams = {
		&UAIDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIDriver_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAIDriver()
	{
		if (!Z_Registration_Info_UClass_UAIDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIDriver.OuterSingleton, Z_Construct_UClass_UAIDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIDriver.OuterSingleton;
	}
	template<> OPENWORLDTEMPLATE_API UClass* StaticClass<UAIDriver>()
	{
		return UAIDriver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDriver);
	UAIDriver::~UAIDriver() {}
	struct Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_AIDriver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_AIDriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIDriver, UAIDriver::StaticClass, TEXT("UAIDriver"), &Z_Registration_Info_UClass_UAIDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIDriver), 3279054737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_AIDriver_h_1664522026(TEXT("/Script/openWorldTemplate"),
		Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_AIDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_AIDriver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
