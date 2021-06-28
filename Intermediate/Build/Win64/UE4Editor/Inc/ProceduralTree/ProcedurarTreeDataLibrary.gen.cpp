// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTree/ProcedurarTreeDataLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcedurarTreeDataLibrary() {}
// Cross Module References
	PROCEDURALTREE_API UEnum* Z_Construct_UEnum_ProceduralTree_ELengthSegments();
	UPackage* Z_Construct_UPackage__Script_ProceduralTree();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FTreeBranchProperties();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FTreeElementProperties();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UProcedurarTreeDataLibrary_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UProcedurarTreeDataLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* ELengthSegments_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTree_ELengthSegments, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("ELengthSegments"));
		}
		return Singleton;
	}
	template<> PROCEDURALTREE_API UEnum* StaticEnum<ELengthSegments::Mode>()
	{
		return ELengthSegments_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELengthSegments(ELengthSegments_StaticEnum, TEXT("/Script/ProceduralTree"), TEXT("ELengthSegments"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralTree_ELengthSegments_Hash() { return 793159806U; }
	UEnum* Z_Construct_UEnum_ProceduralTree_ELengthSegments()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELengthSegments"), 0, Get_Z_Construct_UEnum_ProceduralTree_ELengthSegments_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELengthSegments::Total", (int64)ELengthSegments::Total },
				{ "ELengthSegments::PerSegment", (int64)ELengthSegments::PerSegment },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
				{ "PerSegment.Name", "ELengthSegments::PerSegment" },
				{ "Total.Name", "ELengthSegments::Total" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTree,
				nullptr,
				"ELengthSegments",
				"ELengthSegments::Mode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTreeBranchProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FTreeBranchProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTreeBranchProperties, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("TreeBranchProperties"), sizeof(FTreeBranchProperties), Get_Z_Construct_UScriptStruct_FTreeBranchProperties_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FTreeBranchProperties>()
{
	return FTreeBranchProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTreeBranchProperties(FTreeBranchProperties::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("TreeBranchProperties"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFTreeBranchProperties
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFTreeBranchProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TreeBranchProperties")),new UScriptStruct::TCppStructOps<FTreeBranchProperties>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFTreeBranchProperties;
	struct Z_Construct_UScriptStruct_FTreeBranchProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stricture_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stricture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTreeBranchProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::NewProp_BaseRadius_MetaData[] = {
		{ "Category", "Tree Branch Data" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::NewProp_BaseRadius = { "BaseRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeBranchProperties, BaseRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::NewProp_BaseRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::NewProp_BaseRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::NewProp_Stricture_MetaData[] = {
		{ "Category", "Tree Branch Data" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::NewProp_Stricture = { "Stricture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeBranchProperties, Stricture), METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::NewProp_Stricture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::NewProp_Stricture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::NewProp_BaseRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::NewProp_Stricture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"TreeBranchProperties",
		sizeof(FTreeBranchProperties),
		alignof(FTreeBranchProperties),
		Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTreeBranchProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTreeBranchProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TreeBranchProperties"), sizeof(FTreeBranchProperties), Get_Z_Construct_UScriptStruct_FTreeBranchProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTreeBranchProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTreeBranchProperties_Hash() { return 2156450194U; }
class UScriptStruct* FMeshSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FMeshSectionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSectionData, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("MeshSectionData"), sizeof(FMeshSectionData), Get_Z_Construct_UScriptStruct_FMeshSectionData_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FMeshSectionData>()
{
	return FMeshSectionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshSectionData(FMeshSectionData::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("MeshSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFMeshSectionData
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFMeshSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshSectionData")),new UScriptStruct::TCppStructOps<FMeshSectionData>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFMeshSectionData;
	struct Z_Construct_UScriptStruct_FMeshSectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPaintUVs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotPaintUVs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PivotPaintUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSectionData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "Mesh Section Data" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "Mesh Section Data" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_UVs_MetaData[] = {
		{ "Category", "Mesh Section Data" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionData, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_UVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_UVs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Category", "Mesh Section Data" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionData, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_PivotPaintUVs_Inner = { "PivotPaintUVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_PivotPaintUVs_MetaData[] = {
		{ "Category", "Mesh Section Data" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_PivotPaintUVs = { "PivotPaintUVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionData, PivotPaintUVs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_PivotPaintUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_PivotPaintUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Mesh Section Data" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionData, SphereRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_SphereRadius_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "Mesh Section Data" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionData, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Tangents_MetaData[] = {
		{ "Category", "Mesh Section Data" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionData, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Tangents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshSectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_UVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_UVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_VertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_PivotPaintUVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_PivotPaintUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionData_Statics::NewProp_Tangents,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"MeshSectionData",
		sizeof(FMeshSectionData),
		alignof(FMeshSectionData),
		Z_Construct_UScriptStruct_FMeshSectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshSectionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshSectionData"), sizeof(FMeshSectionData), Get_Z_Construct_UScriptStruct_FMeshSectionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshSectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshSectionData_Hash() { return 804906113U; }
class UScriptStruct* FTreeElementProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FTreeElementProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTreeElementProperties, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("TreeElementProperties"), sizeof(FTreeElementProperties), Get_Z_Construct_UScriptStruct_FTreeElementProperties_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FTreeElementProperties>()
{
	return FTreeElementProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTreeElementProperties(FTreeElementProperties::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("TreeElementProperties"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFTreeElementProperties
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFTreeElementProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TreeElementProperties")),new UScriptStruct::TCppStructOps<FTreeElementProperties>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFTreeElementProperties;
	struct Z_Construct_UScriptStruct_FTreeElementProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthSegmentsMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LengthSegmentsMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LengthSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RadiusSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShadowCasting_MetaData[];
#endif
		static void NewProp_bShadowCasting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShadowCasting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTreeElementProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_LengthSegmentsMode_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_LengthSegmentsMode = { "LengthSegmentsMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeElementProperties, LengthSegmentsMode), Z_Construct_UEnum_ProceduralTree_ELengthSegments, METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_LengthSegmentsMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_LengthSegmentsMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_LengthSegments_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "128" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
		{ "UIMax", "128" },
		{ "UIMin", "3" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_LengthSegments = { "LengthSegments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeElementProperties, LengthSegments), METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_LengthSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_LengthSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_RadiusSegments_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "128" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
		{ "UIMax", "128" },
		{ "UIMin", "3" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_RadiusSegments = { "RadiusSegments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeElementProperties, RadiusSegments), METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_RadiusSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_RadiusSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeElementProperties, Material), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeElementProperties, UVScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeElementProperties, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_bShadowCasting_MetaData[] = {
		{ "Category", "Shadows" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_bShadowCasting_SetBit(void* Obj)
	{
		((FTreeElementProperties*)Obj)->bShadowCasting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_bShadowCasting = { "bShadowCasting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTreeElementProperties), &Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_bShadowCasting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_bShadowCasting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_bShadowCasting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTreeElementProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_LengthSegmentsMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_LengthSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_RadiusSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_UVScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementProperties_Statics::NewProp_bShadowCasting,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTreeElementProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"TreeElementProperties",
		sizeof(FTreeElementProperties),
		alignof(FTreeElementProperties),
		Z_Construct_UScriptStruct_FTreeElementProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTreeElementProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTreeElementProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TreeElementProperties"), sizeof(FTreeElementProperties), Get_Z_Construct_UScriptStruct_FTreeElementProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTreeElementProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTreeElementProperties_Hash() { return 3687991514U; }
	void UProcedurarTreeDataLibrary::StaticRegisterNativesUProcedurarTreeDataLibrary()
	{
	}
	UClass* Z_Construct_UClass_UProcedurarTreeDataLibrary_NoRegister()
	{
		return UProcedurarTreeDataLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UProcedurarTreeDataLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProcedurarTreeDataLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcedurarTreeDataLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ProcedurarTreeDataLibrary.h" },
		{ "ModuleRelativePath", "ProcedurarTreeDataLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProcedurarTreeDataLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProcedurarTreeDataLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProcedurarTreeDataLibrary_Statics::ClassParams = {
		&UProcedurarTreeDataLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProcedurarTreeDataLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProcedurarTreeDataLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProcedurarTreeDataLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProcedurarTreeDataLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProcedurarTreeDataLibrary, 1773567989);
	template<> PROCEDURALTREE_API UClass* StaticClass<UProcedurarTreeDataLibrary>()
	{
		return UProcedurarTreeDataLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProcedurarTreeDataLibrary(Z_Construct_UClass_UProcedurarTreeDataLibrary, &UProcedurarTreeDataLibrary::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UProcedurarTreeDataLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcedurarTreeDataLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
