// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTree/TreeBranchClaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeBranchClaster() {}
// Cross Module References
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeElementClaster_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeElementClaster();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ProceduralTree();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ATreeElement_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeBranchClaster_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeBranchClaster();
// End Cross Module References
	void UTreeElementClaster::StaticRegisterNativesUTreeElementClaster()
	{
	}
	UClass* Z_Construct_UClass_UTreeElementClaster_NoRegister()
	{
		return UTreeElementClaster::StaticClass();
	}
	struct Z_Construct_UClass_UTreeElementClaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Elements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Elements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreeElementClaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeElementClaster_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "TreeBranchClaster.h" },
		{ "ModuleRelativePath", "TreeBranchClaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTreeElementClaster_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeElementClaster_Statics::NewProp_Elements_MetaData[] = {
		{ "ModuleRelativePath", "TreeBranchClaster.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTreeElementClaster_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTreeElementClaster, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTreeElementClaster_Statics::NewProp_Elements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeElementClaster_Statics::NewProp_Elements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTreeElementClaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeElementClaster_Statics::NewProp_Elements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeElementClaster_Statics::NewProp_Elements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreeElementClaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeElementClaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTreeElementClaster_Statics::ClassParams = {
		&UTreeElementClaster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTreeElementClaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTreeElementClaster_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTreeElementClaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeElementClaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreeElementClaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTreeElementClaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTreeElementClaster, 3364982025);
	template<> PROCEDURALTREE_API UClass* StaticClass<UTreeElementClaster>()
	{
		return UTreeElementClaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTreeElementClaster(Z_Construct_UClass_UTreeElementClaster, &UTreeElementClaster::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UTreeElementClaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeElementClaster);
	void UTreeBranchClaster::StaticRegisterNativesUTreeBranchClaster()
	{
	}
	UClass* Z_Construct_UClass_UTreeBranchClaster_NoRegister()
	{
		return UTreeBranchClaster::StaticClass();
	}
	struct Z_Construct_UClass_UTreeBranchClaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreeBranchClaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTreeElementClaster,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeBranchClaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeBranchClaster.h" },
		{ "ModuleRelativePath", "TreeBranchClaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreeBranchClaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeBranchClaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTreeBranchClaster_Statics::ClassParams = {
		&UTreeBranchClaster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTreeBranchClaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeBranchClaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreeBranchClaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTreeBranchClaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTreeBranchClaster, 3480546983);
	template<> PROCEDURALTREE_API UClass* StaticClass<UTreeBranchClaster>()
	{
		return UTreeBranchClaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTreeBranchClaster(Z_Construct_UClass_UTreeBranchClaster, &UTreeBranchClaster::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UTreeBranchClaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeBranchClaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
