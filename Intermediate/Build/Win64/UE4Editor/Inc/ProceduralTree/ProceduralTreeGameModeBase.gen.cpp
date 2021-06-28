// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTree/ProceduralTreeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralTreeGameModeBase() {}
// Cross Module References
	PROCEDURALTREE_API UClass* Z_Construct_UClass_AProceduralTreeGameModeBase_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_AProceduralTreeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProceduralTree();
// End Cross Module References
	void AProceduralTreeGameModeBase::StaticRegisterNativesAProceduralTreeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProceduralTreeGameModeBase_NoRegister()
	{
		return AProceduralTreeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralTreeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralTreeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralTreeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProceduralTreeGameModeBase.h" },
		{ "ModuleRelativePath", "ProceduralTreeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralTreeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralTreeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralTreeGameModeBase_Statics::ClassParams = {
		&AProceduralTreeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralTreeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTreeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralTreeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralTreeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralTreeGameModeBase, 2221162830);
	template<> PROCEDURALTREE_API UClass* StaticClass<AProceduralTreeGameModeBase>()
	{
		return AProceduralTreeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralTreeGameModeBase(Z_Construct_UClass_AProceduralTreeGameModeBase, &AProceduralTreeGameModeBase::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("AProceduralTreeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralTreeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
