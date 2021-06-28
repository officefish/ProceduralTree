// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTree/FirTreeRoot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirTreeRoot() {}
// Cross Module References
	PROCEDURALTREE_API UClass* Z_Construct_UClass_AFirTreeRoot_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_AFirTreeRoot();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_AStandartTreeRoot();
	UPackage* Z_Construct_UPackage__Script_ProceduralTree();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FTreeElementProperties();
// End Cross Module References
	void AFirTreeRoot::StaticRegisterNativesAFirTreeRoot()
	{
	}
	UClass* Z_Construct_UClass_AFirTreeRoot_NoRegister()
	{
		return AFirTreeRoot::StaticClass();
	}
	struct Z_Construct_UClass_AFirTreeRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedleElementProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeedleElementProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirTreeRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStandartTreeRoot,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirTreeRoot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "FirTreeRoot.h" },
		{ "ModuleRelativePath", "FirTreeRoot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirTreeRoot_Statics::NewProp_NeedleElementProperties_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "FirTreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirTreeRoot_Statics::NewProp_NeedleElementProperties = { "NeedleElementProperties", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirTreeRoot, NeedleElementProperties), Z_Construct_UScriptStruct_FTreeElementProperties, METADATA_PARAMS(Z_Construct_UClass_AFirTreeRoot_Statics::NewProp_NeedleElementProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirTreeRoot_Statics::NewProp_NeedleElementProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirTreeRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirTreeRoot_Statics::NewProp_NeedleElementProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirTreeRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirTreeRoot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirTreeRoot_Statics::ClassParams = {
		&AFirTreeRoot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFirTreeRoot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirTreeRoot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirTreeRoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirTreeRoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirTreeRoot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirTreeRoot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirTreeRoot, 3955922813);
	template<> PROCEDURALTREE_API UClass* StaticClass<AFirTreeRoot>()
	{
		return AFirTreeRoot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirTreeRoot(Z_Construct_UClass_AFirTreeRoot, &AFirTreeRoot::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("AFirTreeRoot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirTreeRoot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
