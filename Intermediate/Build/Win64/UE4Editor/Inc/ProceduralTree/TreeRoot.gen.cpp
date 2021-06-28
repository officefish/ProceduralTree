// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTree/TreeRoot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeRoot() {}
// Cross Module References
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FRuleWidgetElement();
	UPackage* Z_Construct_UPackage__Script_ProceduralTree();
	PROCEDURALTREE_API UEnum* Z_Construct_UEnum_ProceduralTree_EGenesisAlphabet();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ATreeRoot_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ATreeRoot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ATreeBranch_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeGenesis_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_AStandartTreeRoot_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_AStandartTreeRoot();
// End Cross Module References
class UScriptStruct* FRuleWidgetElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FRuleWidgetElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuleWidgetElement, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("RuleWidgetElement"), sizeof(FRuleWidgetElement), Get_Z_Construct_UScriptStruct_FRuleWidgetElement_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FRuleWidgetElement>()
{
	return FRuleWidgetElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuleWidgetElement(FRuleWidgetElement::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("RuleWidgetElement"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFRuleWidgetElement
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFRuleWidgetElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuleWidgetElement")),new UScriptStruct::TCppStructOps<FRuleWidgetElement>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFRuleWidgetElement;
	struct Z_Construct_UScriptStruct_FRuleWidgetElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Symbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Symbol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axiom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Axiom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuleWidgetElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Symbol_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Symbol = { "Symbol", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuleWidgetElement, Symbol), Z_Construct_UEnum_ProceduralTree_EGenesisAlphabet, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Symbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Symbol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Axiom_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Axiom = { "Axiom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuleWidgetElement, Axiom), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Axiom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Axiom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Chance_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TreeRoot.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuleWidgetElement, Chance), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Chance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Chance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Symbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Axiom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::NewProp_Chance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"RuleWidgetElement",
		sizeof(FRuleWidgetElement),
		alignof(FRuleWidgetElement),
		Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuleWidgetElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuleWidgetElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuleWidgetElement"), sizeof(FRuleWidgetElement), Get_Z_Construct_UScriptStruct_FRuleWidgetElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuleWidgetElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuleWidgetElement_Hash() { return 3233554459U; }
	DEFINE_FUNCTION(ATreeRoot::execRedraw)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Redraw(Z_Param_Step);
		P_NATIVE_END;
	}
	void ATreeRoot::StaticRegisterNativesATreeRoot()
	{
		UClass* Class = ATreeRoot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Redraw", &ATreeRoot::execRedraw },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATreeRoot_Redraw_Statics
	{
		struct TreeRoot_eventRedraw_Parms
		{
			int32 Step;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATreeRoot_Redraw_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeRoot_eventRedraw_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeRoot_Redraw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeRoot_Redraw_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeRoot_Redraw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "Comment", "//UFUNCTION(BlueprintPure, Category = \"Genesis\")\n//UTreeGenesis* GetGenesis() const;\n" },
		{ "ModuleRelativePath", "TreeRoot.h" },
		{ "ToolTip", "UFUNCTION(BlueprintPure, Category = \"Genesis\")\nUTreeGenesis* GetGenesis() const;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeRoot_Redraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeRoot, nullptr, "Redraw", nullptr, nullptr, sizeof(TreeRoot_eventRedraw_Parms), Z_Construct_UFunction_ATreeRoot_Redraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeRoot_Redraw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeRoot_Redraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeRoot_Redraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeRoot_Redraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeRoot_Redraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATreeRoot_NoRegister()
	{
		return ATreeRoot::StaticClass();
	}
	struct Z_Construct_UClass_ATreeRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeTrunk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreeTrunk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Genesis_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Genesis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModifiersInit_MetaData[];
#endif
		static void NewProp_bModifiersInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModifiersInit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATreeRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATreeRoot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATreeRoot_Redraw, "Redraw" }, // 1352899682
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeRoot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeRoot.h" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeRoot_Statics::NewProp_ForwardValue_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATreeRoot_Statics::NewProp_ForwardValue = { "ForwardValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeRoot, ForwardValue), METADATA_PARAMS(Z_Construct_UClass_ATreeRoot_Statics::NewProp_ForwardValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeRoot_Statics::NewProp_ForwardValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeRoot_Statics::NewProp_AngleValue_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATreeRoot_Statics::NewProp_AngleValue = { "AngleValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeRoot, AngleValue), METADATA_PARAMS(Z_Construct_UClass_ATreeRoot_Statics::NewProp_AngleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeRoot_Statics::NewProp_AngleValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeRoot_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeRoot_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeRoot, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreeRoot_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeRoot_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeRoot_Statics::NewProp_TreeTrunk_MetaData[] = {
		{ "Category", "TreeRoot" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeRoot_Statics::NewProp_TreeTrunk = { "TreeTrunk", nullptr, (EPropertyFlags)0x0020080000030001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeRoot, TreeTrunk), Z_Construct_UClass_ATreeBranch_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreeRoot_Statics::NewProp_TreeTrunk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeRoot_Statics::NewProp_TreeTrunk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeRoot_Statics::NewProp_Genesis_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeRoot_Statics::NewProp_Genesis = { "Genesis", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeRoot, Genesis), Z_Construct_UClass_UTreeGenesis_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreeRoot_Statics::NewProp_Genesis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeRoot_Statics::NewProp_Genesis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeRoot_Statics::NewProp_bModifiersInit_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	void Z_Construct_UClass_ATreeRoot_Statics::NewProp_bModifiersInit_SetBit(void* Obj)
	{
		((ATreeRoot*)Obj)->bModifiersInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATreeRoot_Statics::NewProp_bModifiersInit = { "bModifiersInit", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATreeRoot), &Z_Construct_UClass_ATreeRoot_Statics::NewProp_bModifiersInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATreeRoot_Statics::NewProp_bModifiersInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeRoot_Statics::NewProp_bModifiersInit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATreeRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeRoot_Statics::NewProp_ForwardValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeRoot_Statics::NewProp_AngleValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeRoot_Statics::NewProp_SceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeRoot_Statics::NewProp_TreeTrunk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeRoot_Statics::NewProp_Genesis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeRoot_Statics::NewProp_bModifiersInit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATreeRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATreeRoot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATreeRoot_Statics::ClassParams = {
		&ATreeRoot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATreeRoot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATreeRoot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATreeRoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeRoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATreeRoot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATreeRoot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATreeRoot, 306469034);
	template<> PROCEDURALTREE_API UClass* StaticClass<ATreeRoot>()
	{
		return ATreeRoot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATreeRoot(Z_Construct_UClass_ATreeRoot, &ATreeRoot::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("ATreeRoot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATreeRoot);
	DEFINE_FUNCTION(AStandartTreeRoot::execValidateEditorRules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ValidateEditorRules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStandartTreeRoot::execValidateStandartRules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ValidateStandartRules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStandartTreeRoot::execValidateRules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ValidateRules();
		P_NATIVE_END;
	}
	void AStandartTreeRoot::StaticRegisterNativesAStandartTreeRoot()
	{
		UClass* Class = AStandartTreeRoot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ValidateEditorRules", &AStandartTreeRoot::execValidateEditorRules },
			{ "ValidateRules", &AStandartTreeRoot::execValidateRules },
			{ "ValidateStandartRules", &AStandartTreeRoot::execValidateStandartRules },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStandartTreeRoot_ValidateEditorRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStandartTreeRoot_ValidateEditorRules_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStandartTreeRoot_ValidateEditorRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStandartTreeRoot, nullptr, "ValidateEditorRules", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStandartTreeRoot_ValidateEditorRules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStandartTreeRoot_ValidateEditorRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStandartTreeRoot_ValidateEditorRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStandartTreeRoot_ValidateEditorRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStandartTreeRoot_ValidateRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStandartTreeRoot_ValidateRules_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStandartTreeRoot_ValidateRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStandartTreeRoot, nullptr, "ValidateRules", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStandartTreeRoot_ValidateRules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStandartTreeRoot_ValidateRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStandartTreeRoot_ValidateRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStandartTreeRoot_ValidateRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStandartTreeRoot_ValidateStandartRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStandartTreeRoot_ValidateStandartRules_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStandartTreeRoot_ValidateStandartRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStandartTreeRoot, nullptr, "ValidateStandartRules", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStandartTreeRoot_ValidateStandartRules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStandartTreeRoot_ValidateStandartRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStandartTreeRoot_ValidateStandartRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStandartTreeRoot_ValidateStandartRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStandartTreeRoot_NoRegister()
	{
		return AStandartTreeRoot::StaticClass();
	}
	struct Z_Construct_UClass_AStandartTreeRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axiom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Axiom;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStandartRulesInit_MetaData[];
#endif
		static void NewProp_bStandartRulesInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStandartRulesInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditorRulesInit_MetaData[];
#endif
		static void NewProp_bEditorRulesInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditorRulesInit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStandartTreeRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATreeRoot,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStandartTreeRoot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStandartTreeRoot_ValidateEditorRules, "ValidateEditorRules" }, // 3926167509
		{ &Z_Construct_UFunction_AStandartTreeRoot_ValidateRules, "ValidateRules" }, // 2346165378
		{ &Z_Construct_UFunction_AStandartTreeRoot_ValidateStandartRules, "ValidateStandartRules" }, // 2270017261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStandartTreeRoot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeRoot.h" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Axiom_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Axiom = { "Axiom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStandartTreeRoot, Axiom), METADATA_PARAMS(Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Axiom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Axiom_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuleWidgetElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStandartTreeRoot, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Rules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bStandartRulesInit_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bStandartRulesInit_SetBit(void* Obj)
	{
		((AStandartTreeRoot*)Obj)->bStandartRulesInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bStandartRulesInit = { "bStandartRulesInit", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStandartTreeRoot), &Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bStandartRulesInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bStandartRulesInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bStandartRulesInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bEditorRulesInit_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "TreeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bEditorRulesInit_SetBit(void* Obj)
	{
		((AStandartTreeRoot*)Obj)->bEditorRulesInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bEditorRulesInit = { "bEditorRulesInit", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStandartTreeRoot), &Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bEditorRulesInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bEditorRulesInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bEditorRulesInit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStandartTreeRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Axiom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Rules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_Rules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bStandartRulesInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStandartTreeRoot_Statics::NewProp_bEditorRulesInit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStandartTreeRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStandartTreeRoot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStandartTreeRoot_Statics::ClassParams = {
		&AStandartTreeRoot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStandartTreeRoot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStandartTreeRoot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStandartTreeRoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStandartTreeRoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStandartTreeRoot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStandartTreeRoot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStandartTreeRoot, 740686639);
	template<> PROCEDURALTREE_API UClass* StaticClass<AStandartTreeRoot>()
	{
		return AStandartTreeRoot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStandartTreeRoot(Z_Construct_UClass_AStandartTreeRoot, &AStandartTreeRoot::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("AStandartTreeRoot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStandartTreeRoot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
