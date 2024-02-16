// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "openWorldTemplate/Public/mapLocator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemapLocator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	OPENWORLDTEMPLATE_API UClass* Z_Construct_UClass_AmapLocator();
	OPENWORLDTEMPLATE_API UClass* Z_Construct_UClass_AmapLocator_NoRegister();
	OPENWORLDTEMPLATE_API UClass* Z_Construct_UClass_AStartPathFinder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_openWorldTemplate();
// End Cross Module References
	void AmapLocator::StaticRegisterNativesAmapLocator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AmapLocator);
	UClass* Z_Construct_UClass_AmapLocator_NoRegister()
	{
		return AmapLocator::StaticClass();
	}
	struct Z_Construct_UClass_AmapLocator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathFinder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PathFinder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationCategory;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Neighbors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Neighbors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmapLocator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_openWorldTemplate,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmapLocator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmapLocator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "mapLocator.h" },
		{ "ModuleRelativePath", "Public/mapLocator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmapLocator_Statics::NewProp_PathFinder_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/mapLocator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmapLocator_Statics::NewProp_PathFinder = { "PathFinder", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmapLocator, PathFinder), Z_Construct_UClass_AStartPathFinder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmapLocator_Statics::NewProp_PathFinder_MetaData), Z_Construct_UClass_AmapLocator_Statics::NewProp_PathFinder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationName_MetaData[] = {
		{ "Category", "Location Details" },
		{ "ModuleRelativePath", "Public/mapLocator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationName = { "LocationName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmapLocator, LocationName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationName_MetaData), Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationType_MetaData[] = {
		{ "Category", "Location Details" },
		{ "ModuleRelativePath", "Public/mapLocator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmapLocator, LocationType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationType_MetaData), Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationCategory_MetaData[] = {
		{ "Category", "Location Details" },
		{ "ModuleRelativePath", "Public/mapLocator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationCategory = { "LocationCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmapLocator, LocationCategory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationCategory_MetaData), Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationCategory_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmapLocator_Statics::NewProp_Neighbors_Inner = { "Neighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AmapLocator_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmapLocator_Statics::NewProp_Neighbors_MetaData[] = {
		{ "Category", "Location Details" },
		{ "ModuleRelativePath", "Public/mapLocator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AmapLocator_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmapLocator, Neighbors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmapLocator_Statics::NewProp_Neighbors_MetaData), Z_Construct_UClass_AmapLocator_Statics::NewProp_Neighbors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmapLocator_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/mapLocator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmapLocator_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmapLocator, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmapLocator_Statics::NewProp_BoxCollision_MetaData), Z_Construct_UClass_AmapLocator_Statics::NewProp_BoxCollision_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AmapLocator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmapLocator_Statics::NewProp_PathFinder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmapLocator_Statics::NewProp_LocationCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmapLocator_Statics::NewProp_Neighbors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmapLocator_Statics::NewProp_Neighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmapLocator_Statics::NewProp_BoxCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmapLocator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmapLocator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AmapLocator_Statics::ClassParams = {
		&AmapLocator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AmapLocator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AmapLocator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmapLocator_Statics::Class_MetaDataParams), Z_Construct_UClass_AmapLocator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmapLocator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AmapLocator()
	{
		if (!Z_Registration_Info_UClass_AmapLocator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmapLocator.OuterSingleton, Z_Construct_UClass_AmapLocator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AmapLocator.OuterSingleton;
	}
	template<> OPENWORLDTEMPLATE_API UClass* StaticClass<AmapLocator>()
	{
		return AmapLocator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmapLocator);
	AmapLocator::~AmapLocator() {}
	struct Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_mapLocator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_mapLocator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AmapLocator, AmapLocator::StaticClass, TEXT("AmapLocator"), &Z_Registration_Info_UClass_AmapLocator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmapLocator), 4127681374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_mapLocator_h_3370641402(TEXT("/Script/openWorldTemplate"),
		Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_mapLocator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_mapLocator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
