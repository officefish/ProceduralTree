// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTree/TreeElementFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeElementFunctionLibrary() {}
// Cross Module References
	PROCEDURALTREE_API UEnum* Z_Construct_UEnum_ProceduralTree_ETrigonometry();
	UPackage* Z_Construct_UPackage__Script_ProceduralTree();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionRangeValueProperty();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FRangeValueProperty();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionValueProperty();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeElementFunctionLibrary_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeElementFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* ETrigonometry_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTree_ETrigonometry, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("ETrigonometry"));
		}
		return Singleton;
	}
	template<> PROCEDURALTREE_API UEnum* StaticEnum<ETrigonometry::Function>()
	{
		return ETrigonometry_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrigonometry(ETrigonometry_StaticEnum, TEXT("/Script/ProceduralTree"), TEXT("ETrigonometry"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralTree_ETrigonometry_Hash() { return 3750465953U; }
	UEnum* Z_Construct_UEnum_ProceduralTree_ETrigonometry()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrigonometry"), 0, Get_Z_Construct_UEnum_ProceduralTree_ETrigonometry_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrigonometry::SIN", (int64)ETrigonometry::SIN },
				{ "ETrigonometry::COS", (int64)ETrigonometry::COS },
				{ "ETrigonometry::TAN", (int64)ETrigonometry::TAN },
				{ "ETrigonometry::ASIN", (int64)ETrigonometry::ASIN },
				{ "ETrigonometry::ACOS", (int64)ETrigonometry::ACOS },
				{ "ETrigonometry::ATAN", (int64)ETrigonometry::ATAN },
				{ "ETrigonometry::SINH", (int64)ETrigonometry::SINH },
				{ "ETrigonometry::COSH", (int64)ETrigonometry::COSH },
				{ "ETrigonometry::TANH", (int64)ETrigonometry::TANH },
				{ "ETrigonometry::EXP", (int64)ETrigonometry::EXP },
				{ "ETrigonometry::EXP2", (int64)ETrigonometry::EXP2 },
				{ "ETrigonometry::LOG", (int64)ETrigonometry::LOG },
				{ "ETrigonometry::SQR", (int64)ETrigonometry::SQR },
				{ "ETrigonometry::SQRT", (int64)ETrigonometry::SQRT },
				{ "ETrigonometry::PHI", (int64)ETrigonometry::PHI },
				{ "ETrigonometry::PI_N", (int64)ETrigonometry::PI_N },
				{ "ETrigonometry::CLAMP", (int64)ETrigonometry::CLAMP },
				{ "ETrigonometry::RAND", (int64)ETrigonometry::RAND },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACOS.Comment", "/**\n *\n */" },
				{ "ACOS.Name", "ETrigonometry::ACOS" },
				{ "ASIN.Comment", "/**\n *\n */" },
				{ "ASIN.Name", "ETrigonometry::ASIN" },
				{ "ATAN.Comment", "/**\n *\n */" },
				{ "ATAN.Name", "ETrigonometry::ATAN" },
				{ "BlueprintType", "true" },
				{ "CLAMP.Comment", "/**\n *\n */" },
				{ "CLAMP.Name", "ETrigonometry::CLAMP" },
				{ "Comment", "/**\n *\n */" },
				{ "COS.Comment", "/**\n *\n */" },
				{ "COS.Name", "ETrigonometry::COS" },
				{ "COSH.Comment", "/**\n *\n */" },
				{ "COSH.Name", "ETrigonometry::COSH" },
				{ "EXP.Comment", "/**\n *\n */" },
				{ "EXP.Name", "ETrigonometry::EXP" },
				{ "EXP2.Comment", "/**\n *\n */" },
				{ "EXP2.Name", "ETrigonometry::EXP2" },
				{ "LOG.Comment", "/**\n *\n */" },
				{ "LOG.Name", "ETrigonometry::LOG" },
				{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
				{ "PHI.Comment", "/**\n *\n */" },
				{ "PHI.Name", "ETrigonometry::PHI" },
				{ "PI_N.Comment", "/**\n *\n */" },
				{ "PI_N.Name", "ETrigonometry::PI_N" },
				{ "RAND.Comment", "/**\n *\n */" },
				{ "RAND.Name", "ETrigonometry::RAND" },
				{ "SIN.Comment", "/**\n *\n */" },
				{ "SIN.Name", "ETrigonometry::SIN" },
				{ "SINH.Comment", "/**\n *\n */" },
				{ "SINH.Name", "ETrigonometry::SINH" },
				{ "SQR.Comment", "/**\n *\n */" },
				{ "SQR.Name", "ETrigonometry::SQR" },
				{ "SQRT.Comment", "/**\n *\n */" },
				{ "SQRT.Name", "ETrigonometry::SQRT" },
				{ "TAN.Comment", "/**\n *\n */" },
				{ "TAN.Name", "ETrigonometry::TAN" },
				{ "TANH.Comment", "/**\n *\n */" },
				{ "TANH.Name", "ETrigonometry::TANH" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTree,
				nullptr,
				"ETrigonometry",
				"ETrigonometry::Function",
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
class UScriptStruct* FFunctionRangeValueProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionRangeValueProperty, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("FunctionRangeValueProperty"), sizeof(FFunctionRangeValueProperty), Get_Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FFunctionRangeValueProperty>()
{
	return FFunctionRangeValueProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFunctionRangeValueProperty(FFunctionRangeValueProperty::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("FunctionRangeValueProperty"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFFunctionRangeValueProperty
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFFunctionRangeValueProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FunctionRangeValueProperty")),new UScriptStruct::TCppStructOps<FFunctionRangeValueProperty>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFFunctionRangeValueProperty;
	struct Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Function;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionRangeValueProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_Function_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionRangeValueProperty, Function), Z_Construct_UEnum_ProceduralTree_ETrigonometry, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "3.1416" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
		{ "UIMax", "3.1416" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionRangeValueProperty, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "3.1416" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
		{ "UIMax", "3.1416" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionRangeValueProperty, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_MaxValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::NewProp_MaxValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"FunctionRangeValueProperty",
		sizeof(FFunctionRangeValueProperty),
		alignof(FFunctionRangeValueProperty),
		Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionRangeValueProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FunctionRangeValueProperty"), sizeof(FFunctionRangeValueProperty), Get_Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFunctionRangeValueProperty_Hash() { return 2015043686U; }
class UScriptStruct* FRangeValueProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FRangeValueProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRangeValueProperty, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("RangeValueProperty"), sizeof(FRangeValueProperty), Get_Z_Construct_UScriptStruct_FRangeValueProperty_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FRangeValueProperty>()
{
	return FRangeValueProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRangeValueProperty(FRangeValueProperty::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("RangeValueProperty"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFRangeValueProperty
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFRangeValueProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RangeValueProperty")),new UScriptStruct::TCppStructOps<FRangeValueProperty>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFRangeValueProperty;
	struct Z_Construct_UScriptStruct_FRangeValueProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRangeValueProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRangeValueProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRangeValueProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRangeValueProperty_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRangeValueProperty_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRangeValueProperty, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRangeValueProperty_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangeValueProperty_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRangeValueProperty_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRangeValueProperty_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRangeValueProperty, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRangeValueProperty_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangeValueProperty_Statics::NewProp_MaxValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRangeValueProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRangeValueProperty_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRangeValueProperty_Statics::NewProp_MaxValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRangeValueProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"RangeValueProperty",
		sizeof(FRangeValueProperty),
		alignof(FRangeValueProperty),
		Z_Construct_UScriptStruct_FRangeValueProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangeValueProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRangeValueProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangeValueProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRangeValueProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRangeValueProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RangeValueProperty"), sizeof(FRangeValueProperty), Get_Z_Construct_UScriptStruct_FRangeValueProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRangeValueProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRangeValueProperty_Hash() { return 4193064180U; }
class UScriptStruct* FFunctionValueProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FFunctionValueProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionValueProperty, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("FunctionValueProperty"), sizeof(FFunctionValueProperty), Get_Z_Construct_UScriptStruct_FFunctionValueProperty_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FFunctionValueProperty>()
{
	return FFunctionValueProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFunctionValueProperty(FFunctionValueProperty::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("FunctionValueProperty"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFFunctionValueProperty
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFFunctionValueProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FunctionValueProperty")),new UScriptStruct::TCppStructOps<FFunctionValueProperty>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFFunctionValueProperty;
	struct Z_Construct_UScriptStruct_FFunctionValueProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Function;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionValueProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::NewProp_Function_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionValueProperty, Function), Z_Construct_UEnum_ProceduralTree_ETrigonometry, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionValueProperty, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"FunctionValueProperty",
		sizeof(FFunctionValueProperty),
		alignof(FFunctionValueProperty),
		Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionValueProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFunctionValueProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FunctionValueProperty"), sizeof(FFunctionValueProperty), Get_Z_Construct_UScriptStruct_FFunctionValueProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFunctionValueProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFunctionValueProperty_Hash() { return 651946750U; }
	DEFINE_FUNCTION(UTreeElementFunctionLibrary::execCall)
	{
		P_GET_STRUCT_REF(FFunctionRangeValueProperty,Z_Param_Out_Property);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UTreeElementFunctionLibrary::Call(Z_Param_Out_Property,Z_Param_InValue,Z_Param_Multiplier);
		P_NATIVE_END;
	}
	void UTreeElementFunctionLibrary::StaticRegisterNativesUTreeElementFunctionLibrary()
	{
		UClass* Class = UTreeElementFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Call", &UTreeElementFunctionLibrary::execCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics
	{
		struct TreeElementFunctionLibrary_eventCall_Parms
		{
			FFunctionRangeValueProperty Property;
			float InValue;
			float Multiplier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::NewProp_Property_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElementFunctionLibrary_eventCall_Parms, Property), Z_Construct_UScriptStruct_FFunctionRangeValueProperty, METADATA_PARAMS(Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::NewProp_Property_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElementFunctionLibrary_eventCall_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElementFunctionLibrary_eventCall_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElementFunctionLibrary_eventCall_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::NewProp_Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::NewProp_Multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "Comment", "/**\n\x09*Add Rule to Genesis alphabet\n\x09*\n\x09*@param\x09\x09""Alphabet\x09\x09Genesis Alphabet Object Reference\n\x09*@param\x09\x09Rule\x09\x09\x09Genesis Rule Object Reference\n\x09*@return\x09void\n\x09*/" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
		{ "ToolTip", "Add Rule to Genesis alphabet\n\n@param         Alphabet                Genesis Alphabet Object Reference\n@param         Rule                    Genesis Rule Object Reference\n@return        void" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeElementFunctionLibrary, nullptr, "Call", nullptr, nullptr, sizeof(TreeElementFunctionLibrary_eventCall_Parms), Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeElementFunctionLibrary_Call()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeElementFunctionLibrary_Call_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTreeElementFunctionLibrary_NoRegister()
	{
		return UTreeElementFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTreeElementFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreeElementFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTreeElementFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTreeElementFunctionLibrary_Call, "Call" }, // 2148065036
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeElementFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeElementFunctionLibrary.h" },
		{ "ModuleRelativePath", "TreeElementFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreeElementFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeElementFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTreeElementFunctionLibrary_Statics::ClassParams = {
		&UTreeElementFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTreeElementFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeElementFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreeElementFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTreeElementFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTreeElementFunctionLibrary, 860277509);
	template<> PROCEDURALTREE_API UClass* StaticClass<UTreeElementFunctionLibrary>()
	{
		return UTreeElementFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTreeElementFunctionLibrary(Z_Construct_UClass_UTreeElementFunctionLibrary, &UTreeElementFunctionLibrary::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UTreeElementFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeElementFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
