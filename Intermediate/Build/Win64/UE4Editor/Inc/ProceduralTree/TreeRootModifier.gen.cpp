// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTree/TreeRootModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeRootModifier() {}
// Cross Module References
	PROCEDURALTREE_API UEnum* Z_Construct_UEnum_ProceduralTree_EAlebra();
	UPackage* Z_Construct_UPackage__Script_ProceduralTree();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeRootModifier_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeRootModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UBaseRadiusModifier_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UBaseRadiusModifier();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeRootModifierLibrary_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeRootModifierLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EAlebra_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTree_EAlebra, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("EAlebra"));
		}
		return Singleton;
	}
	template<> PROCEDURALTREE_API UEnum* StaticEnum<EAlebra::Function>()
	{
		return EAlebra_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAlebra(EAlebra_StaticEnum, TEXT("/Script/ProceduralTree"), TEXT("EAlebra"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralTree_EAlebra_Hash() { return 2997525211U; }
	UEnum* Z_Construct_UEnum_ProceduralTree_EAlebra()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAlebra"), 0, Get_Z_Construct_UEnum_ProceduralTree_EAlebra_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAlebra::SUM", (int64)EAlebra::SUM },
				{ "EAlebra::DEVIDE", (int64)EAlebra::DEVIDE },
				{ "EAlebra::POWER", (int64)EAlebra::POWER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DEVIDE.Name", "EAlebra::DEVIDE" },
				{ "ModuleRelativePath", "TreeRootModifier.h" },
				{ "POWER.Name", "EAlebra::POWER" },
				{ "SUM.Name", "EAlebra::SUM" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTree,
				nullptr,
				"EAlebra",
				"EAlebra::Function",
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
class UScriptStruct* FAlgebraFunctionValueProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("AlgebraFunctionValueProperty"), sizeof(FAlgebraFunctionValueProperty), Get_Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FAlgebraFunctionValueProperty>()
{
	return FAlgebraFunctionValueProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAlgebraFunctionValueProperty(FAlgebraFunctionValueProperty::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("AlgebraFunctionValueProperty"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFAlgebraFunctionValueProperty
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFAlgebraFunctionValueProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AlgebraFunctionValueProperty")),new UScriptStruct::TCppStructOps<FAlgebraFunctionValueProperty>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFAlgebraFunctionValueProperty;
	struct Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Coficient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TreeRootModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlgebraFunctionValueProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::NewProp_Function_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeRootModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAlgebraFunctionValueProperty, Function), Z_Construct_UEnum_ProceduralTree_EAlebra, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::NewProp_Coficient_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeRootModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::NewProp_Coficient = { "Coficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAlgebraFunctionValueProperty, Coficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::NewProp_Coficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::NewProp_Coficient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::NewProp_Coficient,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"AlgebraFunctionValueProperty",
		sizeof(FAlgebraFunctionValueProperty),
		alignof(FAlgebraFunctionValueProperty),
		Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AlgebraFunctionValueProperty"), sizeof(FAlgebraFunctionValueProperty), Get_Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty_Hash() { return 3154034160U; }
	void UTreeRootModifier::StaticRegisterNativesUTreeRootModifier()
	{
	}
	UClass* Z_Construct_UClass_UTreeRootModifier_NoRegister()
	{
		return UTreeRootModifier::StaticClass();
	}
	struct Z_Construct_UClass_UTreeRootModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreeRootModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeRootModifier_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeRootModifier.h" },
		{ "ModuleRelativePath", "TreeRootModifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreeRootModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeRootModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTreeRootModifier_Statics::ClassParams = {
		&UTreeRootModifier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTreeRootModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeRootModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreeRootModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTreeRootModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTreeRootModifier, 587705416);
	template<> PROCEDURALTREE_API UClass* StaticClass<UTreeRootModifier>()
	{
		return UTreeRootModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTreeRootModifier(Z_Construct_UClass_UTreeRootModifier, &UTreeRootModifier::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UTreeRootModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeRootModifier);
	void UBaseRadiusModifier::StaticRegisterNativesUBaseRadiusModifier()
	{
	}
	UClass* Z_Construct_UClass_UBaseRadiusModifier_NoRegister()
	{
		return UBaseRadiusModifier::StaticClass();
	}
	struct Z_Construct_UClass_UBaseRadiusModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Function;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseRadiusModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTreeRootModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseRadiusModifier_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeRootModifier.h" },
		{ "ModuleRelativePath", "TreeRootModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseRadiusModifier_Statics::NewProp_Function_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeRootModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseRadiusModifier_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseRadiusModifier, Function), Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty, METADATA_PARAMS(Z_Construct_UClass_UBaseRadiusModifier_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseRadiusModifier_Statics::NewProp_Function_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseRadiusModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseRadiusModifier_Statics::NewProp_Function,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseRadiusModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseRadiusModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseRadiusModifier_Statics::ClassParams = {
		&UBaseRadiusModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseRadiusModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseRadiusModifier_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseRadiusModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseRadiusModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseRadiusModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseRadiusModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseRadiusModifier, 681686296);
	template<> PROCEDURALTREE_API UClass* StaticClass<UBaseRadiusModifier>()
	{
		return UBaseRadiusModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseRadiusModifier(Z_Construct_UClass_UBaseRadiusModifier, &UBaseRadiusModifier::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UBaseRadiusModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseRadiusModifier);
	DEFINE_FUNCTION(UTreeRootModifierLibrary::execCall)
	{
		P_GET_STRUCT_REF(FAlgebraFunctionValueProperty,Z_Param_Out_Function);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Base);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UTreeRootModifierLibrary::Call(Z_Param_Out_Function,Z_Param_Base);
		P_NATIVE_END;
	}
	void UTreeRootModifierLibrary::StaticRegisterNativesUTreeRootModifierLibrary()
	{
		UClass* Class = UTreeRootModifierLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Call", &UTreeRootModifierLibrary::execCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics
	{
		struct TreeRootModifierLibrary_eventCall_Parms
		{
			FAlgebraFunctionValueProperty Function;
			float Base;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Function;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Base;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::NewProp_Function_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeRootModifierLibrary_eventCall_Parms, Function), Z_Construct_UScriptStruct_FAlgebraFunctionValueProperty, METADATA_PARAMS(Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::NewProp_Function_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeRootModifierLibrary_eventCall_Parms, Base), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeRootModifierLibrary_eventCall_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeRootModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeRootModifierLibrary, nullptr, "Call", nullptr, nullptr, sizeof(TreeRootModifierLibrary_eventCall_Parms), Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeRootModifierLibrary_Call()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeRootModifierLibrary_Call_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTreeRootModifierLibrary_NoRegister()
	{
		return UTreeRootModifierLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTreeRootModifierLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreeRootModifierLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTreeRootModifierLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTreeRootModifierLibrary_Call, "Call" }, // 3124924362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeRootModifierLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "TreeRootModifier.h" },
		{ "ModuleRelativePath", "TreeRootModifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreeRootModifierLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeRootModifierLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTreeRootModifierLibrary_Statics::ClassParams = {
		&UTreeRootModifierLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTreeRootModifierLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeRootModifierLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreeRootModifierLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTreeRootModifierLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTreeRootModifierLibrary, 3331972573);
	template<> PROCEDURALTREE_API UClass* StaticClass<UTreeRootModifierLibrary>()
	{
		return UTreeRootModifierLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTreeRootModifierLibrary(Z_Construct_UClass_UTreeRootModifierLibrary, &UTreeRootModifierLibrary::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UTreeRootModifierLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeRootModifierLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
