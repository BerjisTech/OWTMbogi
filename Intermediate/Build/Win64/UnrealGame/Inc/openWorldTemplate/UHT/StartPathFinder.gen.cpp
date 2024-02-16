// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "openWorldTemplate/Public/StartPathFinder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartPathFinder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OPENWORLDTEMPLATE_API UClass* Z_Construct_UClass_AStartPathFinder();
	OPENWORLDTEMPLATE_API UClass* Z_Construct_UClass_AStartPathFinder_NoRegister();
	OPENWORLDTEMPLATE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphNode();
	UPackage* Z_Construct_UPackage__Script_openWorldTemplate();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphNode;
class UScriptStruct* FGraphNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphNode, (UObject*)Z_Construct_UPackage__Script_openWorldTemplate(), TEXT("GraphNode"));
	}
	return Z_Registration_Info_UScriptStruct_GraphNode.OuterSingleton;
}
template<> OPENWORLDTEMPLATE_API UScriptStruct* StaticStruct<FGraphNode>()
{
	return FGraphNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGraphNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartPathFinder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_openWorldTemplate,
		nullptr,
		&NewStructOps,
		"GraphNode",
		nullptr,
		0,
		sizeof(FGraphNode),
		alignof(FGraphNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGraphNode_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGraphNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GraphNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphNode.InnerSingleton, Z_Construct_UScriptStruct_FGraphNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GraphNode.InnerSingleton;
	}
	void AStartPathFinder::StaticRegisterNativesAStartPathFinder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStartPathFinder);
	UClass* Z_Construct_UClass_AStartPathFinder_NoRegister()
	{
		return AStartPathFinder::StaticClass();
	}
	struct Z_Construct_UClass_AStartPathFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStartPathFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_openWorldTemplate,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStartPathFinder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartPathFinder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StartPathFinder.h" },
		{ "ModuleRelativePath", "Public/StartPathFinder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStartPathFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStartPathFinder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStartPathFinder_Statics::ClassParams = {
		&AStartPathFinder::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStartPathFinder_Statics::Class_MetaDataParams), Z_Construct_UClass_AStartPathFinder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AStartPathFinder()
	{
		if (!Z_Registration_Info_UClass_AStartPathFinder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStartPathFinder.OuterSingleton, Z_Construct_UClass_AStartPathFinder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStartPathFinder.OuterSingleton;
	}
	template<> OPENWORLDTEMPLATE_API UClass* StaticClass<AStartPathFinder>()
	{
		return AStartPathFinder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStartPathFinder);
	AStartPathFinder::~AStartPathFinder() {}
	struct Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_StartPathFinder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_StartPathFinder_h_Statics::ScriptStructInfo[] = {
		{ FGraphNode::StaticStruct, Z_Construct_UScriptStruct_FGraphNode_Statics::NewStructOps, TEXT("GraphNode"), &Z_Registration_Info_UScriptStruct_GraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphNode), 179168069U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_StartPathFinder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStartPathFinder, AStartPathFinder::StaticClass, TEXT("AStartPathFinder"), &Z_Registration_Info_UClass_AStartPathFinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStartPathFinder), 4166670637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_StartPathFinder_h_3622761047(TEXT("/Script/openWorldTemplate"),
		Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_StartPathFinder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_StartPathFinder_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_StartPathFinder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sombo_Plugins_openWorldTemplate_Source_openWorldTemplate_Public_StartPathFinder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
