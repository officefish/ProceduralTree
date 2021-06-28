// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTree/FirTreeBranch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirTreeBranch() {}
// Cross Module References
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FNeedleSettings();
	UPackage* Z_Construct_UPackage__Script_ProceduralTree();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FPhiBallSettings();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionRangeValueProperty();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FTreeElementPrototypeData();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ATreeElement_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_APhiBall_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_APhiBall();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ATreeElement();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_AFirTreeBranch_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_AFirTreeBranch();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ATreeBranch();
// End Cross Module References
class UScriptStruct* FNeedleSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FNeedleSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeedleSettings, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("NeedleSettings"), sizeof(FNeedleSettings), Get_Z_Construct_UScriptStruct_FNeedleSettings_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FNeedleSettings>()
{
	return FNeedleSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNeedleSettings(FNeedleSettings::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("NeedleSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFNeedleSettings
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFNeedleSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NeedleSettings")),new UScriptStruct::TCppStructOps<FNeedleSettings>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFNeedleSettings;
	struct Z_Construct_UScriptStruct_FNeedleSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedleSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeedleSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeedleSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedleSettings_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNeedleSettings_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNeedleSettings, Density), METADATA_PARAMS(Z_Construct_UScriptStruct_FNeedleSettings_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedleSettings_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedleSettings_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNeedleSettings_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNeedleSettings, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FNeedleSettings_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedleSettings_Statics::NewProp_Length_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeedleSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeedleSettings_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeedleSettings_Statics::NewProp_Length,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeedleSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"NeedleSettings",
		sizeof(FNeedleSettings),
		alignof(FNeedleSettings),
		Z_Construct_UScriptStruct_FNeedleSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedleSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNeedleSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedleSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNeedleSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNeedleSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NeedleSettings"), sizeof(FNeedleSettings), Get_Z_Construct_UScriptStruct_FNeedleSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNeedleSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNeedleSettings_Hash() { return 4173420227U; }
class UScriptStruct* FPhiBallSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FPhiBallSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhiBallSettings, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("PhiBallSettings"), sizeof(FPhiBallSettings), Get_Z_Construct_UScriptStruct_FPhiBallSettings_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FPhiBallSettings>()
{
	return FPhiBallSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhiBallSettings(FPhiBallSettings::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("PhiBallSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFPhiBallSettings
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFPhiBallSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhiBallSettings")),new UScriptStruct::TCppStructOps<FPhiBallSettings>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFPhiBallSettings;
	struct Z_Construct_UScriptStruct_FPhiBallSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhiBallSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhiBallSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Num_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhiBallSettings, Num), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Num_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Num_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhiBallSettings, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhiBallSettings, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhiBallSettings, Pitch), Z_Construct_UScriptStruct_FFunctionRangeValueProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhiBallSettings, Yaw), Z_Construct_UScriptStruct_FFunctionRangeValueProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhiBallSettings, Roll), Z_Construct_UScriptStruct_FFunctionRangeValueProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Chance_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhiBallSettings, Chance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Chance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Chance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhiBallSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhiBallSettings_Statics::NewProp_Chance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhiBallSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"PhiBallSettings",
		sizeof(FPhiBallSettings),
		alignof(FPhiBallSettings),
		Z_Construct_UScriptStruct_FPhiBallSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhiBallSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhiBallSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhiBallSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhiBallSettings"), sizeof(FPhiBallSettings), Get_Z_Construct_UScriptStruct_FPhiBallSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhiBallSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhiBallSettings_Hash() { return 586890059U; }
class UScriptStruct* FTreeElementPrototypeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FTreeElementPrototypeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTreeElementPrototypeData, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("TreeElementPrototypeData"), sizeof(FTreeElementPrototypeData), Get_Z_Construct_UScriptStruct_FTreeElementPrototypeData_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FTreeElementPrototypeData>()
{
	return FTreeElementPrototypeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTreeElementPrototypeData(FTreeElementPrototypeData::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("TreeElementPrototypeData"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFTreeElementPrototypeData
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFTreeElementPrototypeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TreeElementPrototypeData")),new UScriptStruct::TCppStructOps<FTreeElementPrototypeData>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFTreeElementPrototypeData;
	struct Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prototype_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Prototype;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTreeElementPrototypeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Chance_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeElementPrototypeData, Chance), METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Chance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Chance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeElementPrototypeData, Density), METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_MinDistance_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeElementPrototypeData, MinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeElementPrototypeData, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Prototype_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Prototype = { "Prototype", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTreeElementPrototypeData, Prototype), Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Prototype_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Prototype_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Chance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::NewProp_Prototype,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"TreeElementPrototypeData",
		sizeof(FTreeElementPrototypeData),
		alignof(FTreeElementPrototypeData),
		Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTreeElementPrototypeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTreeElementPrototypeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TreeElementPrototypeData"), sizeof(FTreeElementPrototypeData), Get_Z_Construct_UScriptStruct_FTreeElementPrototypeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTreeElementPrototypeData_Hash() { return 3578388765U; }
	void APhiBall::StaticRegisterNativesAPhiBall()
	{
	}
	UClass* Z_Construct_UClass_APhiBall_NoRegister()
	{
		return APhiBall::StaticClass();
	}
	struct Z_Construct_UClass_APhiBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prototype_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Prototype;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhiBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATreeElement,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhiBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirTreeBranch.h" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhiBall_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APhiBall_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhiBall, Settings), Z_Construct_UScriptStruct_FPhiBallSettings, METADATA_PARAMS(Z_Construct_UClass_APhiBall_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhiBall_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhiBall_Statics::NewProp_Prototype_MetaData[] = {
		{ "Category", "Geometry" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Geometry\")\n//FTreeBranchProperties BranchProperties;\n" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Geometry\")\nFTreeBranchProperties BranchProperties;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhiBall_Statics::NewProp_Prototype = { "Prototype", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhiBall, Prototype), Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhiBall_Statics::NewProp_Prototype_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhiBall_Statics::NewProp_Prototype_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhiBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhiBall_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhiBall_Statics::NewProp_Prototype,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhiBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhiBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhiBall_Statics::ClassParams = {
		&APhiBall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APhiBall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APhiBall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhiBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhiBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhiBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhiBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhiBall, 1227386288);
	template<> PROCEDURALTREE_API UClass* StaticClass<APhiBall>()
	{
		return APhiBall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhiBall(Z_Construct_UClass_APhiBall, &APhiBall::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("APhiBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhiBall);
	DEFINE_FUNCTION(AFirTreeBranch::execRemoveAllPrototypes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllPrototypes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirTreeBranch::execRemoveAllFirComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllFirComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirTreeBranch::execAddFirComponent)
	{
		P_GET_OBJECT(ATreeElement,Z_Param_InElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFirComponent(Z_Param_InElement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirTreeBranch::execRedrawFirComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RedrawFirComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirTreeBranch::execNewFirBranch)
	{
		P_GET_TARRAY_REF(FTreeElementPrototypeData,Z_Param_Out_Prototypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATreeElement**)Z_Param__Result=P_THIS->NewFirBranch(Z_Param_Out_Prototypes);
		P_NATIVE_END;
	}
	void AFirTreeBranch::StaticRegisterNativesAFirTreeBranch()
	{
		UClass* Class = AFirTreeBranch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFirComponent", &AFirTreeBranch::execAddFirComponent },
			{ "NewFirBranch", &AFirTreeBranch::execNewFirBranch },
			{ "RedrawFirComponents", &AFirTreeBranch::execRedrawFirComponents },
			{ "RemoveAllFirComponents", &AFirTreeBranch::execRemoveAllFirComponents },
			{ "RemoveAllPrototypes", &AFirTreeBranch::execRemoveAllPrototypes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirTreeBranch_AddFirComponent_Statics
	{
		struct FirTreeBranch_eventAddFirComponent_Parms
		{
			ATreeElement* InElement;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InElement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirTreeBranch_AddFirComponent_Statics::NewProp_InElement = { "InElement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirTreeBranch_eventAddFirComponent_Parms, InElement), Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirTreeBranch_AddFirComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirTreeBranch_AddFirComponent_Statics::NewProp_InElement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirTreeBranch_AddFirComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirTreeBranch_AddFirComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirTreeBranch, nullptr, "AddFirComponent", nullptr, nullptr, sizeof(FirTreeBranch_eventAddFirComponent_Parms), Z_Construct_UFunction_AFirTreeBranch_AddFirComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirTreeBranch_AddFirComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirTreeBranch_AddFirComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirTreeBranch_AddFirComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirTreeBranch_AddFirComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirTreeBranch_AddFirComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics
	{
		struct FirTreeBranch_eventNewFirBranch_Parms
		{
			TArray<FTreeElementPrototypeData> Prototypes;
			ATreeElement* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Prototypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prototypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Prototypes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::NewProp_Prototypes_Inner = { "Prototypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTreeElementPrototypeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::NewProp_Prototypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::NewProp_Prototypes = { "Prototypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirTreeBranch_eventNewFirBranch_Parms, Prototypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::NewProp_Prototypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::NewProp_Prototypes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirTreeBranch_eventNewFirBranch_Parms, ReturnValue), Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::NewProp_Prototypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::NewProp_Prototypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirTreeBranch, nullptr, "NewFirBranch", nullptr, nullptr, sizeof(FirTreeBranch_eventNewFirBranch_Parms), Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirTreeBranch_NewFirBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirTreeBranch_NewFirBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirTreeBranch_RedrawFirComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirTreeBranch_RedrawFirComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirTreeBranch_RedrawFirComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirTreeBranch, nullptr, "RedrawFirComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirTreeBranch_RedrawFirComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirTreeBranch_RedrawFirComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirTreeBranch_RedrawFirComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirTreeBranch_RedrawFirComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirTreeBranch_RemoveAllFirComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirTreeBranch_RemoveAllFirComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirTreeBranch_RemoveAllFirComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirTreeBranch, nullptr, "RemoveAllFirComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirTreeBranch_RemoveAllFirComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirTreeBranch_RemoveAllFirComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirTreeBranch_RemoveAllFirComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirTreeBranch_RemoveAllFirComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirTreeBranch_RemoveAllPrototypes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirTreeBranch_RemoveAllPrototypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirTreeBranch_RemoveAllPrototypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirTreeBranch, nullptr, "RemoveAllPrototypes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirTreeBranch_RemoveAllPrototypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirTreeBranch_RemoveAllPrototypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirTreeBranch_RemoveAllPrototypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirTreeBranch_RemoveAllPrototypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirTreeBranch_NoRegister()
	{
		return AFirTreeBranch::StaticClass();
	}
	struct Z_Construct_UClass_AFirTreeBranch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FirComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirTreeBranch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATreeBranch,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirTreeBranch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirTreeBranch_AddFirComponent, "AddFirComponent" }, // 892252239
		{ &Z_Construct_UFunction_AFirTreeBranch_NewFirBranch, "NewFirBranch" }, // 852487302
		{ &Z_Construct_UFunction_AFirTreeBranch_RedrawFirComponents, "RedrawFirComponents" }, // 1974881789
		{ &Z_Construct_UFunction_AFirTreeBranch_RemoveAllFirComponents, "RemoveAllFirComponents" }, // 1045819384
		{ &Z_Construct_UFunction_AFirTreeBranch_RemoveAllPrototypes, "RemoveAllPrototypes" }, // 2353391892
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirTreeBranch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "FirTreeBranch.h" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirTreeBranch_Statics::NewProp_FirComponents_Inner = { "FirComponents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirTreeBranch_Statics::NewProp_FirComponents_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "FirTreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFirTreeBranch_Statics::NewProp_FirComponents = { "FirComponents", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirTreeBranch, FirComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFirTreeBranch_Statics::NewProp_FirComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirTreeBranch_Statics::NewProp_FirComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirTreeBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirTreeBranch_Statics::NewProp_FirComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirTreeBranch_Statics::NewProp_FirComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirTreeBranch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirTreeBranch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirTreeBranch_Statics::ClassParams = {
		&AFirTreeBranch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirTreeBranch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirTreeBranch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirTreeBranch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirTreeBranch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirTreeBranch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirTreeBranch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirTreeBranch, 3219046441);
	template<> PROCEDURALTREE_API UClass* StaticClass<AFirTreeBranch>()
	{
		return AFirTreeBranch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirTreeBranch(Z_Construct_UClass_AFirTreeBranch, &AFirTreeBranch::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("AFirTreeBranch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirTreeBranch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
