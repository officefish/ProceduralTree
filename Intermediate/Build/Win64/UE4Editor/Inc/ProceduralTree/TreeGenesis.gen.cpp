// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTree/TreeGenesis.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeGenesis() {}
// Cross Module References
	PROCEDURALTREE_API UEnum* Z_Construct_UEnum_ProceduralTree_EGenesisAlphabet();
	UPackage* Z_Construct_UPackage__Script_ProceduralTree();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FRulePattern();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UGenesisMutation_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UGenesisMutation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UDynamicValueMutation_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UDynamicValueMutation();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UGrowMutation_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UGrowMutation();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTiltMutation_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTiltMutation();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UChildBranchMutation_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UChildBranchMutation();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UChildFirBranchMutation_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UChildFirBranchMutation();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FTreeElementPrototypeData();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UParentBranchMutation_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UParentBranchMutation();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ULeafMutation_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ULeafMutation();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UPitchMutation_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UPitchMutation();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_URollMutation_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_URollMutation();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UGenesisRule_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UGenesisRule();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UGenesisAlphabet_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UGenesisAlphabet();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeGenesis_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeGenesis();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeGenesisLibrary_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_UTreeGenesisLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EGenesisAlphabet_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTree_EGenesisAlphabet, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("EGenesisAlphabet"));
		}
		return Singleton;
	}
	template<> PROCEDURALTREE_API UEnum* StaticEnum<EGenesisAlphabet::Symbol>()
	{
		return EGenesisAlphabet_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGenesisAlphabet(EGenesisAlphabet_StaticEnum, TEXT("/Script/ProceduralTree"), TEXT("EGenesisAlphabet"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralTree_EGenesisAlphabet_Hash() { return 591445670U; }
	UEnum* Z_Construct_UEnum_ProceduralTree_EGenesisAlphabet()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGenesisAlphabet"), 0, Get_Z_Construct_UEnum_ProceduralTree_EGenesisAlphabet_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGenesisAlphabet::A", (int64)EGenesisAlphabet::A },
				{ "EGenesisAlphabet::B", (int64)EGenesisAlphabet::B },
				{ "EGenesisAlphabet::C", (int64)EGenesisAlphabet::C },
				{ "EGenesisAlphabet::D", (int64)EGenesisAlphabet::D },
				{ "EGenesisAlphabet::E", (int64)EGenesisAlphabet::E },
				{ "EGenesisAlphabet::F", (int64)EGenesisAlphabet::F },
				{ "EGenesisAlphabet::G", (int64)EGenesisAlphabet::G },
				{ "EGenesisAlphabet::H", (int64)EGenesisAlphabet::H },
				{ "EGenesisAlphabet::I", (int64)EGenesisAlphabet::I },
				{ "EGenesisAlphabet::J", (int64)EGenesisAlphabet::J },
				{ "EGenesisAlphabet::K", (int64)EGenesisAlphabet::K },
				{ "EGenesisAlphabet::L", (int64)EGenesisAlphabet::L },
				{ "EGenesisAlphabet::M", (int64)EGenesisAlphabet::M },
				{ "EGenesisAlphabet::N", (int64)EGenesisAlphabet::N },
				{ "EGenesisAlphabet::O", (int64)EGenesisAlphabet::O },
				{ "EGenesisAlphabet::P", (int64)EGenesisAlphabet::P },
				{ "EGenesisAlphabet::Q", (int64)EGenesisAlphabet::Q },
				{ "EGenesisAlphabet::R", (int64)EGenesisAlphabet::R },
				{ "EGenesisAlphabet::S", (int64)EGenesisAlphabet::S },
				{ "EGenesisAlphabet::T", (int64)EGenesisAlphabet::T },
				{ "EGenesisAlphabet::U", (int64)EGenesisAlphabet::U },
				{ "EGenesisAlphabet::V", (int64)EGenesisAlphabet::V },
				{ "EGenesisAlphabet::W", (int64)EGenesisAlphabet::W },
				{ "EGenesisAlphabet::X", (int64)EGenesisAlphabet::X },
				{ "EGenesisAlphabet::Y", (int64)EGenesisAlphabet::Y },
				{ "EGenesisAlphabet::Z", (int64)EGenesisAlphabet::Z },
				{ "EGenesisAlphabet::PUSH", (int64)EGenesisAlphabet::PUSH },
				{ "EGenesisAlphabet::POP", (int64)EGenesisAlphabet::POP },
				{ "EGenesisAlphabet::PLUS", (int64)EGenesisAlphabet::PLUS },
				{ "EGenesisAlphabet::MINUS", (int64)EGenesisAlphabet::MINUS },
				{ "EGenesisAlphabet::SLASH", (int64)EGenesisAlphabet::SLASH },
				{ "EGenesisAlphabet::BACKSLASH", (int64)EGenesisAlphabet::BACKSLASH },
				{ "EGenesisAlphabet::CARET", (int64)EGenesisAlphabet::CARET },
				{ "EGenesisAlphabet::AMPERSAND", (int64)EGenesisAlphabet::AMPERSAND },
				{ "EGenesisAlphabet::OPEN_FIGURE_BRACKET", (int64)EGenesisAlphabet::OPEN_FIGURE_BRACKET },
				{ "EGenesisAlphabet::CLOSE_FIGURE_BRACKET", (int64)EGenesisAlphabet::CLOSE_FIGURE_BRACKET },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "EGenesisAlphabet::A" },
				{ "AMPERSAND.Name", "EGenesisAlphabet::AMPERSAND" },
				{ "B.Name", "EGenesisAlphabet::B" },
				{ "BACKSLASH.Name", "EGenesisAlphabet::BACKSLASH" },
				{ "BlueprintType", "true" },
				{ "C.Name", "EGenesisAlphabet::C" },
				{ "CARET.Name", "EGenesisAlphabet::CARET" },
				{ "CLOSE_FIGURE_BRACKET.Name", "EGenesisAlphabet::CLOSE_FIGURE_BRACKET" },
				{ "D.Name", "EGenesisAlphabet::D" },
				{ "E.Name", "EGenesisAlphabet::E" },
				{ "F.Name", "EGenesisAlphabet::F" },
				{ "G.Name", "EGenesisAlphabet::G" },
				{ "H.Name", "EGenesisAlphabet::H" },
				{ "I.Name", "EGenesisAlphabet::I" },
				{ "J.Name", "EGenesisAlphabet::J" },
				{ "K.Name", "EGenesisAlphabet::K" },
				{ "L.Name", "EGenesisAlphabet::L" },
				{ "M.Name", "EGenesisAlphabet::M" },
				{ "MINUS.Name", "EGenesisAlphabet::MINUS" },
				{ "ModuleRelativePath", "TreeGenesis.h" },
				{ "N.Name", "EGenesisAlphabet::N" },
				{ "O.Name", "EGenesisAlphabet::O" },
				{ "OPEN_FIGURE_BRACKET.Name", "EGenesisAlphabet::OPEN_FIGURE_BRACKET" },
				{ "P.Name", "EGenesisAlphabet::P" },
				{ "PLUS.Name", "EGenesisAlphabet::PLUS" },
				{ "POP.Name", "EGenesisAlphabet::POP" },
				{ "PUSH.Name", "EGenesisAlphabet::PUSH" },
				{ "Q.Name", "EGenesisAlphabet::Q" },
				{ "R.Name", "EGenesisAlphabet::R" },
				{ "S.Name", "EGenesisAlphabet::S" },
				{ "SLASH.Name", "EGenesisAlphabet::SLASH" },
				{ "T.Name", "EGenesisAlphabet::T" },
				{ "U.Name", "EGenesisAlphabet::U" },
				{ "V.Name", "EGenesisAlphabet::V" },
				{ "W.Name", "EGenesisAlphabet::W" },
				{ "X.Name", "EGenesisAlphabet::X" },
				{ "Y.Name", "EGenesisAlphabet::Y" },
				{ "Z.Name", "EGenesisAlphabet::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTree,
				nullptr,
				"EGenesisAlphabet",
				"EGenesisAlphabet::Symbol",
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
class UScriptStruct* FRulePattern::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALTREE_API uint32 Get_Z_Construct_UScriptStruct_FRulePattern_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRulePattern, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("RulePattern"), sizeof(FRulePattern), Get_Z_Construct_UScriptStruct_FRulePattern_Hash());
	}
	return Singleton;
}
template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<FRulePattern>()
{
	return FRulePattern::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRulePattern(FRulePattern::StaticStruct, TEXT("/Script/ProceduralTree"), TEXT("RulePattern"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralTree_StaticRegisterNativesFRulePattern
{
	FScriptStruct_ProceduralTree_StaticRegisterNativesFRulePattern()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RulePattern")),new UScriptStruct::TCppStructOps<FRulePattern>);
	}
} ScriptStruct_ProceduralTree_StaticRegisterNativesFRulePattern;
	struct Z_Construct_UScriptStruct_FRulePattern_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axiom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Axiom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRulePattern_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRulePattern_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRulePattern>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRulePattern_Statics::NewProp_Chance_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRulePattern_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRulePattern, Chance), METADATA_PARAMS(Z_Construct_UScriptStruct_FRulePattern_Statics::NewProp_Chance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRulePattern_Statics::NewProp_Chance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRulePattern_Statics::NewProp_Axiom_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRulePattern_Statics::NewProp_Axiom = { "Axiom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRulePattern, Axiom), METADATA_PARAMS(Z_Construct_UScriptStruct_FRulePattern_Statics::NewProp_Axiom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRulePattern_Statics::NewProp_Axiom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRulePattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRulePattern_Statics::NewProp_Chance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRulePattern_Statics::NewProp_Axiom,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRulePattern_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
		nullptr,
		&NewStructOps,
		"RulePattern",
		sizeof(FRulePattern),
		alignof(FRulePattern),
		Z_Construct_UScriptStruct_FRulePattern_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRulePattern_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRulePattern_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRulePattern_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRulePattern()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRulePattern_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RulePattern"), sizeof(FRulePattern), Get_Z_Construct_UScriptStruct_FRulePattern_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRulePattern_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRulePattern_Hash() { return 810652355U; }
	void UGenesisMutation::StaticRegisterNativesUGenesisMutation()
	{
	}
	UClass* Z_Construct_UClass_UGenesisMutation_NoRegister()
	{
		return UGenesisMutation::StaticClass();
	}
	struct Z_Construct_UClass_UGenesisMutation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenesisMutation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenesisMutation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenesisMutation_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenesisMutation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenesisMutation, Value), METADATA_PARAMS(Z_Construct_UClass_UGenesisMutation_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenesisMutation_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenesisMutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenesisMutation_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenesisMutation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenesisMutation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenesisMutation_Statics::ClassParams = {
		&UGenesisMutation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenesisMutation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenesisMutation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenesisMutation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenesisMutation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenesisMutation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenesisMutation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenesisMutation, 1955101378);
	template<> PROCEDURALTREE_API UClass* StaticClass<UGenesisMutation>()
	{
		return UGenesisMutation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenesisMutation(Z_Construct_UClass_UGenesisMutation, &UGenesisMutation::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UGenesisMutation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenesisMutation);
	void UDynamicValueMutation::StaticRegisterNativesUDynamicValueMutation()
	{
	}
	UClass* Z_Construct_UClass_UDynamicValueMutation_NoRegister()
	{
		return UDynamicValueMutation::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicValueMutation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicValueMutation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenesisMutation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicValueMutation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicValueMutation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicValueMutation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamicValueMutation_Statics::ClassParams = {
		&UDynamicValueMutation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDynamicValueMutation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicValueMutation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicValueMutation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicValueMutation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicValueMutation, 2171011412);
	template<> PROCEDURALTREE_API UClass* StaticClass<UDynamicValueMutation>()
	{
		return UDynamicValueMutation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicValueMutation(Z_Construct_UClass_UDynamicValueMutation, &UDynamicValueMutation::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UDynamicValueMutation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicValueMutation);
	void UGrowMutation::StaticRegisterNativesUGrowMutation()
	{
	}
	UClass* Z_Construct_UClass_UGrowMutation_NoRegister()
	{
		return UGrowMutation::StaticClass();
	}
	struct Z_Construct_UClass_UGrowMutation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrowMutation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicValueMutation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrowMutation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrowMutation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrowMutation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrowMutation_Statics::ClassParams = {
		&UGrowMutation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGrowMutation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrowMutation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrowMutation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrowMutation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrowMutation, 713716411);
	template<> PROCEDURALTREE_API UClass* StaticClass<UGrowMutation>()
	{
		return UGrowMutation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrowMutation(Z_Construct_UClass_UGrowMutation, &UGrowMutation::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UGrowMutation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrowMutation);
	void UTiltMutation::StaticRegisterNativesUTiltMutation()
	{
	}
	UClass* Z_Construct_UClass_UTiltMutation_NoRegister()
	{
		return UTiltMutation::StaticClass();
	}
	struct Z_Construct_UClass_UTiltMutation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTiltMutation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicValueMutation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTiltMutation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTiltMutation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTiltMutation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTiltMutation_Statics::ClassParams = {
		&UTiltMutation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTiltMutation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTiltMutation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTiltMutation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTiltMutation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTiltMutation, 1104979511);
	template<> PROCEDURALTREE_API UClass* StaticClass<UTiltMutation>()
	{
		return UTiltMutation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTiltMutation(Z_Construct_UClass_UTiltMutation, &UTiltMutation::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UTiltMutation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTiltMutation);
	void UChildBranchMutation::StaticRegisterNativesUChildBranchMutation()
	{
	}
	UClass* Z_Construct_UClass_UChildBranchMutation_NoRegister()
	{
		return UChildBranchMutation::StaticClass();
	}
	struct Z_Construct_UClass_UChildBranchMutation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChildBranchMutation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenesisMutation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildBranchMutation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChildBranchMutation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChildBranchMutation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChildBranchMutation_Statics::ClassParams = {
		&UChildBranchMutation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChildBranchMutation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChildBranchMutation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChildBranchMutation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChildBranchMutation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChildBranchMutation, 400169483);
	template<> PROCEDURALTREE_API UClass* StaticClass<UChildBranchMutation>()
	{
		return UChildBranchMutation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChildBranchMutation(Z_Construct_UClass_UChildBranchMutation, &UChildBranchMutation::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UChildBranchMutation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChildBranchMutation);
	DEFINE_FUNCTION(UChildFirBranchMutation::execRemoveAllPrototypes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllPrototypes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChildFirBranchMutation::execAddPrototype)
	{
		P_GET_STRUCT_REF(FTreeElementPrototypeData,Z_Param_Out_Prototype);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPrototype(Z_Param_Out_Prototype);
		P_NATIVE_END;
	}
	void UChildFirBranchMutation::StaticRegisterNativesUChildFirBranchMutation()
	{
		UClass* Class = UChildFirBranchMutation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPrototype", &UChildFirBranchMutation::execAddPrototype },
			{ "RemoveAllPrototypes", &UChildFirBranchMutation::execRemoveAllPrototypes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics
	{
		struct ChildFirBranchMutation_eventAddPrototype_Parms
		{
			FTreeElementPrototypeData Prototype;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prototype_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Prototype;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::NewProp_Prototype_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::NewProp_Prototype = { "Prototype", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChildFirBranchMutation_eventAddPrototype_Parms, Prototype), Z_Construct_UScriptStruct_FTreeElementPrototypeData, METADATA_PARAMS(Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::NewProp_Prototype_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::NewProp_Prototype_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::NewProp_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChildFirBranchMutation, nullptr, "AddPrototype", nullptr, nullptr, sizeof(ChildFirBranchMutation_eventAddPrototype_Parms), Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChildFirBranchMutation_RemoveAllPrototypes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChildFirBranchMutation_RemoveAllPrototypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChildFirBranchMutation_RemoveAllPrototypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChildFirBranchMutation, nullptr, "RemoveAllPrototypes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChildFirBranchMutation_RemoveAllPrototypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChildFirBranchMutation_RemoveAllPrototypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChildFirBranchMutation_RemoveAllPrototypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChildFirBranchMutation_RemoveAllPrototypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChildFirBranchMutation_NoRegister()
	{
		return UChildFirBranchMutation::StaticClass();
	}
	struct Z_Construct_UClass_UChildFirBranchMutation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Prototypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prototypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Prototypes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChildFirBranchMutation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenesisMutation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChildFirBranchMutation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChildFirBranchMutation_AddPrototype, "AddPrototype" }, // 3399447161
		{ &Z_Construct_UFunction_UChildFirBranchMutation_RemoveAllPrototypes, "RemoveAllPrototypes" }, // 991643598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildFirBranchMutation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TreeGenesis.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChildFirBranchMutation_Statics::NewProp_Prototypes_Inner = { "Prototypes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTreeElementPrototypeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildFirBranchMutation_Statics::NewProp_Prototypes_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChildFirBranchMutation_Statics::NewProp_Prototypes = { "Prototypes", nullptr, (EPropertyFlags)0x0020080000030005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChildFirBranchMutation, Prototypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChildFirBranchMutation_Statics::NewProp_Prototypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChildFirBranchMutation_Statics::NewProp_Prototypes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChildFirBranchMutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildFirBranchMutation_Statics::NewProp_Prototypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildFirBranchMutation_Statics::NewProp_Prototypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChildFirBranchMutation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChildFirBranchMutation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChildFirBranchMutation_Statics::ClassParams = {
		&UChildFirBranchMutation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChildFirBranchMutation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChildFirBranchMutation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChildFirBranchMutation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChildFirBranchMutation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChildFirBranchMutation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChildFirBranchMutation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChildFirBranchMutation, 2541573059);
	template<> PROCEDURALTREE_API UClass* StaticClass<UChildFirBranchMutation>()
	{
		return UChildFirBranchMutation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChildFirBranchMutation(Z_Construct_UClass_UChildFirBranchMutation, &UChildFirBranchMutation::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UChildFirBranchMutation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChildFirBranchMutation);
	void UParentBranchMutation::StaticRegisterNativesUParentBranchMutation()
	{
	}
	UClass* Z_Construct_UClass_UParentBranchMutation_NoRegister()
	{
		return UParentBranchMutation::StaticClass();
	}
	struct Z_Construct_UClass_UParentBranchMutation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParentBranchMutation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenesisMutation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentBranchMutation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParentBranchMutation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParentBranchMutation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParentBranchMutation_Statics::ClassParams = {
		&UParentBranchMutation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParentBranchMutation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParentBranchMutation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParentBranchMutation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParentBranchMutation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParentBranchMutation, 2846836732);
	template<> PROCEDURALTREE_API UClass* StaticClass<UParentBranchMutation>()
	{
		return UParentBranchMutation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParentBranchMutation(Z_Construct_UClass_UParentBranchMutation, &UParentBranchMutation::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UParentBranchMutation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParentBranchMutation);
	void ULeafMutation::StaticRegisterNativesULeafMutation()
	{
	}
	UClass* Z_Construct_UClass_ULeafMutation_NoRegister()
	{
		return ULeafMutation::StaticClass();
	}
	struct Z_Construct_UClass_ULeafMutation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeafMutation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenesisMutation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeafMutation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeafMutation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeafMutation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeafMutation_Statics::ClassParams = {
		&ULeafMutation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULeafMutation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeafMutation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeafMutation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeafMutation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeafMutation, 819596239);
	template<> PROCEDURALTREE_API UClass* StaticClass<ULeafMutation>()
	{
		return ULeafMutation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeafMutation(Z_Construct_UClass_ULeafMutation, &ULeafMutation::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("ULeafMutation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeafMutation);
	void UPitchMutation::StaticRegisterNativesUPitchMutation()
	{
	}
	UClass* Z_Construct_UClass_UPitchMutation_NoRegister()
	{
		return UPitchMutation::StaticClass();
	}
	struct Z_Construct_UClass_UPitchMutation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPitchMutation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicValueMutation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPitchMutation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPitchMutation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPitchMutation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPitchMutation_Statics::ClassParams = {
		&UPitchMutation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPitchMutation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPitchMutation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPitchMutation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPitchMutation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPitchMutation, 1887625543);
	template<> PROCEDURALTREE_API UClass* StaticClass<UPitchMutation>()
	{
		return UPitchMutation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPitchMutation(Z_Construct_UClass_UPitchMutation, &UPitchMutation::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UPitchMutation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPitchMutation);
	void URollMutation::StaticRegisterNativesURollMutation()
	{
	}
	UClass* Z_Construct_UClass_URollMutation_NoRegister()
	{
		return URollMutation::StaticClass();
	}
	struct Z_Construct_UClass_URollMutation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URollMutation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicValueMutation,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URollMutation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URollMutation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URollMutation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URollMutation_Statics::ClassParams = {
		&URollMutation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URollMutation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URollMutation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URollMutation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URollMutation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URollMutation, 1278343948);
	template<> PROCEDURALTREE_API UClass* StaticClass<URollMutation>()
	{
		return URollMutation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URollMutation(Z_Construct_UClass_URollMutation, &URollMutation::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("URollMutation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URollMutation);
	void UGenesisRule::StaticRegisterNativesUGenesisRule()
	{
	}
	UClass* Z_Construct_UClass_UGenesisRule_NoRegister()
	{
		return UGenesisRule::StaticClass();
	}
	struct Z_Construct_UClass_UGenesisRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Symbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Symbol;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Patterns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Patterns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Patterns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mutations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mutations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mutations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenesisRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenesisRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TreeGenesis.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenesisRule_Statics::NewProp_Symbol_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGenesisRule_Statics::NewProp_Symbol = { "Symbol", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenesisRule, Symbol), Z_Construct_UEnum_ProceduralTree_EGenesisAlphabet, METADATA_PARAMS(Z_Construct_UClass_UGenesisRule_Statics::NewProp_Symbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenesisRule_Statics::NewProp_Symbol_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenesisRule_Statics::NewProp_Patterns_Inner = { "Patterns", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRulePattern, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenesisRule_Statics::NewProp_Patterns_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenesisRule_Statics::NewProp_Patterns = { "Patterns", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenesisRule, Patterns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenesisRule_Statics::NewProp_Patterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenesisRule_Statics::NewProp_Patterns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenesisRule_Statics::NewProp_Mutations_Inner = { "Mutations", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGenesisMutation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenesisRule_Statics::NewProp_Mutations_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenesisRule_Statics::NewProp_Mutations = { "Mutations", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenesisRule, Mutations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenesisRule_Statics::NewProp_Mutations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenesisRule_Statics::NewProp_Mutations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenesisRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenesisRule_Statics::NewProp_Symbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenesisRule_Statics::NewProp_Patterns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenesisRule_Statics::NewProp_Patterns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenesisRule_Statics::NewProp_Mutations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenesisRule_Statics::NewProp_Mutations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenesisRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenesisRule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenesisRule_Statics::ClassParams = {
		&UGenesisRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenesisRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenesisRule_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenesisRule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenesisRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenesisRule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenesisRule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenesisRule, 2734457092);
	template<> PROCEDURALTREE_API UClass* StaticClass<UGenesisRule>()
	{
		return UGenesisRule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenesisRule(Z_Construct_UClass_UGenesisRule, &UGenesisRule::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UGenesisRule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenesisRule);
	DEFINE_FUNCTION(UGenesisAlphabet::execAdd)
	{
		P_GET_OBJECT(UGenesisRule,Z_Param_Rule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Add(Z_Param_Rule);
		P_NATIVE_END;
	}
	void UGenesisAlphabet::StaticRegisterNativesUGenesisAlphabet()
	{
		UClass* Class = UGenesisAlphabet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &UGenesisAlphabet::execAdd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenesisAlphabet_Add_Statics
	{
		struct GenesisAlphabet_eventAdd_Parms
		{
			UGenesisRule* Rule;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenesisAlphabet_Add_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenesisAlphabet_eventAdd_Parms, Rule), Z_Construct_UClass_UGenesisRule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenesisAlphabet_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenesisAlphabet_Add_Statics::NewProp_Rule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenesisAlphabet_Add_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenesisAlphabet_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenesisAlphabet, nullptr, "Add", nullptr, nullptr, sizeof(GenesisAlphabet_eventAdd_Parms), Z_Construct_UFunction_UGenesisAlphabet_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenesisAlphabet_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenesisAlphabet_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenesisAlphabet_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenesisAlphabet_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenesisAlphabet_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGenesisAlphabet_NoRegister()
	{
		return UGenesisAlphabet::StaticClass();
	}
	struct Z_Construct_UClass_UGenesisAlphabet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GenesisMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GenesisMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenesisMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GenesisMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenesisAlphabet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenesisAlphabet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenesisAlphabet_Add, "Add" }, // 1699766509
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenesisAlphabet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenesisAlphabet_Statics::NewProp_GenesisMap_ValueProp = { "GenesisMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UGenesisRule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenesisAlphabet_Statics::NewProp_GenesisMap_Key_KeyProp = { "GenesisMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenesisAlphabet_Statics::NewProp_GenesisMap_MetaData[] = {
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGenesisAlphabet_Statics::NewProp_GenesisMap = { "GenesisMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenesisAlphabet, GenesisMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenesisAlphabet_Statics::NewProp_GenesisMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenesisAlphabet_Statics::NewProp_GenesisMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenesisAlphabet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenesisAlphabet_Statics::NewProp_GenesisMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenesisAlphabet_Statics::NewProp_GenesisMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenesisAlphabet_Statics::NewProp_GenesisMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenesisAlphabet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenesisAlphabet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenesisAlphabet_Statics::ClassParams = {
		&UGenesisAlphabet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGenesisAlphabet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenesisAlphabet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenesisAlphabet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenesisAlphabet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenesisAlphabet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenesisAlphabet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenesisAlphabet, 3936724119);
	template<> PROCEDURALTREE_API UClass* StaticClass<UGenesisAlphabet>()
	{
		return UGenesisAlphabet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenesisAlphabet(Z_Construct_UClass_UGenesisAlphabet, &UGenesisAlphabet::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UGenesisAlphabet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenesisAlphabet);
	DEFINE_FUNCTION(UTreeGenesis::execGetStepPattern)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStepPattern(Z_Param_Step);
		P_NATIVE_END;
	}
	void UTreeGenesis::StaticRegisterNativesUTreeGenesis()
	{
		UClass* Class = UTreeGenesis::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStepPattern", &UTreeGenesis::execGetStepPattern },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics
	{
		struct TreeGenesis_eventGetStepPattern_Parms
		{
			int32 Step;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesis_eventGetStepPattern_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesis_eventGetStepPattern_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesis, nullptr, "GetStepPattern", nullptr, nullptr, sizeof(TreeGenesis_eventGetStepPattern_Parms), Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesis_GetStepPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesis_GetStepPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTreeGenesis_NoRegister()
	{
		return UTreeGenesis::StaticClass();
	}
	struct Z_Construct_UClass_UTreeGenesis_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alphabet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Alphabet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axiom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Axiom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentPattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreeGenesis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTreeGenesis_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTreeGenesis_GetStepPattern, "GetStepPattern" }, // 2135263262
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeGenesis_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeGenesis_Statics::NewProp_Alphabet_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTreeGenesis_Statics::NewProp_Alphabet = { "Alphabet", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTreeGenesis, Alphabet), Z_Construct_UClass_UGenesisAlphabet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTreeGenesis_Statics::NewProp_Alphabet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeGenesis_Statics::NewProp_Alphabet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeGenesis_Statics::NewProp_Axiom_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTreeGenesis_Statics::NewProp_Axiom = { "Axiom", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTreeGenesis, Axiom), METADATA_PARAMS(Z_Construct_UClass_UTreeGenesis_Statics::NewProp_Axiom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeGenesis_Statics::NewProp_Axiom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeGenesis_Statics::NewProp_CurrentPattern_MetaData[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTreeGenesis_Statics::NewProp_CurrentPattern = { "CurrentPattern", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTreeGenesis, CurrentPattern), METADATA_PARAMS(Z_Construct_UClass_UTreeGenesis_Statics::NewProp_CurrentPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeGenesis_Statics::NewProp_CurrentPattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTreeGenesis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeGenesis_Statics::NewProp_Alphabet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeGenesis_Statics::NewProp_Axiom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeGenesis_Statics::NewProp_CurrentPattern,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreeGenesis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeGenesis>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTreeGenesis_Statics::ClassParams = {
		&UTreeGenesis::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTreeGenesis_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTreeGenesis_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTreeGenesis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeGenesis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreeGenesis()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTreeGenesis_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTreeGenesis, 1695860456);
	template<> PROCEDURALTREE_API UClass* StaticClass<UTreeGenesis>()
	{
		return UTreeGenesis::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTreeGenesis(Z_Construct_UClass_UTreeGenesis, &UTreeGenesis::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UTreeGenesis"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeGenesis);
	DEFINE_FUNCTION(UTreeGenesisLibrary::execAlphabetSymbolToString)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Symbol);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UTreeGenesisLibrary::AlphabetSymbolToString(EGenesisAlphabet::Symbol(Z_Param_Symbol));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execGetRule)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGenesisRule**)Z_Param__Result=UTreeGenesisLibrary::GetRule(Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execGetRollMutation)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGenesisMutation**)Z_Param__Result=UTreeGenesisLibrary::GetRollMutation(Z_Param_Owner,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execGetPitchMutation)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGenesisMutation**)Z_Param__Result=UTreeGenesisLibrary::GetPitchMutation(Z_Param_Owner,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execGetLeafMutation)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGenesisMutation**)Z_Param__Result=UTreeGenesisLibrary::GetLeafMutation(Z_Param_Owner,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execGetParentBranchMutation)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGenesisMutation**)Z_Param__Result=UTreeGenesisLibrary::GetParentBranchMutation(Z_Param_Owner,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execGetChildFirBranchMutation)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGenesisMutation**)Z_Param__Result=UTreeGenesisLibrary::GetChildFirBranchMutation(Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execGetChildBranchMutation)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGenesisMutation**)Z_Param__Result=UTreeGenesisLibrary::GetChildBranchMutation(Z_Param_Owner,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execGetTiltMutation)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGenesisMutation**)Z_Param__Result=UTreeGenesisLibrary::GetTiltMutation(Z_Param_Owner,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execGetGrowMutation)
	{
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGenesisMutation**)Z_Param__Result=UTreeGenesisLibrary::GetGrowMutation(Z_Param_Owner,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execAddMutation)
	{
		P_GET_OBJECT(UGenesisRule,Z_Param_Alphabet);
		P_GET_OBJECT(UGenesisMutation,Z_Param_Mutation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTreeGenesisLibrary::AddMutation(Z_Param_Alphabet,Z_Param_Mutation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execAddPattern)
	{
		P_GET_OBJECT(UGenesisRule,Z_Param_Rule);
		P_GET_STRUCT(FRulePattern,Z_Param_Pattern);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTreeGenesisLibrary::AddPattern(Z_Param_Rule,Z_Param_Pattern);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeGenesisLibrary::execAddRule)
	{
		P_GET_OBJECT(UGenesisAlphabet,Z_Param_Alphabet);
		P_GET_OBJECT(UGenesisRule,Z_Param_Rule);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTreeGenesisLibrary::AddRule(Z_Param_Alphabet,Z_Param_Rule);
		P_NATIVE_END;
	}
	void UTreeGenesisLibrary::StaticRegisterNativesUTreeGenesisLibrary()
	{
		UClass* Class = UTreeGenesisLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMutation", &UTreeGenesisLibrary::execAddMutation },
			{ "AddPattern", &UTreeGenesisLibrary::execAddPattern },
			{ "AddRule", &UTreeGenesisLibrary::execAddRule },
			{ "AlphabetSymbolToString", &UTreeGenesisLibrary::execAlphabetSymbolToString },
			{ "GetChildBranchMutation", &UTreeGenesisLibrary::execGetChildBranchMutation },
			{ "GetChildFirBranchMutation", &UTreeGenesisLibrary::execGetChildFirBranchMutation },
			{ "GetGrowMutation", &UTreeGenesisLibrary::execGetGrowMutation },
			{ "GetLeafMutation", &UTreeGenesisLibrary::execGetLeafMutation },
			{ "GetParentBranchMutation", &UTreeGenesisLibrary::execGetParentBranchMutation },
			{ "GetPitchMutation", &UTreeGenesisLibrary::execGetPitchMutation },
			{ "GetRollMutation", &UTreeGenesisLibrary::execGetRollMutation },
			{ "GetRule", &UTreeGenesisLibrary::execGetRule },
			{ "GetTiltMutation", &UTreeGenesisLibrary::execGetTiltMutation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics
	{
		struct TreeGenesisLibrary_eventAddMutation_Parms
		{
			UGenesisRule* Alphabet;
			UGenesisMutation* Mutation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Alphabet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mutation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::NewProp_Alphabet = { "Alphabet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventAddMutation_Parms, Alphabet), Z_Construct_UClass_UGenesisRule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::NewProp_Mutation = { "Mutation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventAddMutation_Parms, Mutation), Z_Construct_UClass_UGenesisMutation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::NewProp_Alphabet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::NewProp_Mutation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "Comment", "/**\n\x09*Add Rule to Genesis alphabet\n\x09*\n\x09*@param\x09\x09Rule\x09\x09\x09Genesis Rule Object Reference\n\x09*@param\x09\x09Mutation\x09\x09Genesis Mutation Object Reference\n\x09*@return\x09void\n\x09*/" },
		{ "CompactNodeTitle", "ADD" },
		{ "DisplayName", "Add Mutation" },
		{ "Keywords", "genesis add" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
		{ "ToolTip", "Add Rule to Genesis alphabet\n\n@param         Rule                    Genesis Rule Object Reference\n@param         Mutation                Genesis Mutation Object Reference\n@return        void" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "AddMutation", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventAddMutation_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics
	{
		struct TreeGenesisLibrary_eventAddPattern_Parms
		{
			UGenesisRule* Rule;
			FRulePattern Pattern;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rule;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventAddPattern_Parms, Rule), Z_Construct_UClass_UGenesisRule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventAddPattern_Parms, Pattern), Z_Construct_UScriptStruct_FRulePattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::NewProp_Rule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::NewProp_Pattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "Comment", "/**\n\x09*Add Pattern to Genesis Rule\n\x09*\n\x09*@param\x09\x09Rule\x09\x09\x09Genesis Rule Object Reference\n\x09*@param\x09\x09Pattern\x09\x09\x09Rule Pattern Instance\n\x09*@return\x09void\n\x09*/" },
		{ "CompactNodeTitle", "ADD" },
		{ "DisplayName", "Add Pattern" },
		{ "Keywords", "genesis add" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
		{ "ToolTip", "Add Pattern to Genesis Rule\n\n@param         Rule                    Genesis Rule Object Reference\n@param         Pattern                 Rule Pattern Instance\n@return        void" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "AddPattern", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventAddPattern_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics
	{
		struct TreeGenesisLibrary_eventAddRule_Parms
		{
			UGenesisAlphabet* Alphabet;
			UGenesisRule* Rule;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Alphabet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::NewProp_Alphabet = { "Alphabet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventAddRule_Parms, Alphabet), Z_Construct_UClass_UGenesisAlphabet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventAddRule_Parms, Rule), Z_Construct_UClass_UGenesisRule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::NewProp_Alphabet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::NewProp_Rule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "Comment", "/**\n\x09*Add Rule to Genesis alphabet\n\x09*\n\x09*@param\x09\x09""Alphabet\x09\x09Genesis Alphabet Object Reference\n\x09*@param\x09\x09Rule\x09\x09\x09Genesis Rule Object Reference\n\x09*@return\x09void\n\x09*/" },
		{ "CompactNodeTitle", "ADD" },
		{ "DisplayName", "Add Rule" },
		{ "Keywords", "genesis add" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
		{ "ToolTip", "Add Rule to Genesis alphabet\n\n@param         Alphabet                Genesis Alphabet Object Reference\n@param         Rule                    Genesis Rule Object Reference\n@return        void" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "AddRule", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventAddRule_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_AddRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_AddRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics
	{
		struct TreeGenesisLibrary_eventAlphabetSymbolToString_Parms
		{
			TEnumAsByte<EGenesisAlphabet::Symbol> Symbol;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Symbol;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::NewProp_Symbol = { "Symbol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventAlphabetSymbolToString_Parms, Symbol), Z_Construct_UEnum_ProceduralTree_EGenesisAlphabet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventAlphabetSymbolToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::NewProp_Symbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "AlphabetSymbolToString", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventAlphabetSymbolToString_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics
	{
		struct TreeGenesisLibrary_eventGetChildBranchMutation_Parms
		{
			AActor* Owner;
			float InValue;
			UGenesisMutation* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetChildBranchMutation_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetChildBranchMutation_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetChildBranchMutation_Parms, ReturnValue), Z_Construct_UClass_UGenesisMutation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "DisplayName", "Get Child Branch Mutation" },
		{ "Keywords", "child branch mutation" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "GetChildBranchMutation", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventGetChildBranchMutation_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics
	{
		struct TreeGenesisLibrary_eventGetChildFirBranchMutation_Parms
		{
			AActor* Owner;
			UGenesisMutation* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetChildFirBranchMutation_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetChildFirBranchMutation_Parms, ReturnValue), Z_Construct_UClass_UGenesisMutation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "DisplayName", "Get Fir Child Branch Mutation" },
		{ "Keywords", "child fir branch mutation" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "GetChildFirBranchMutation", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventGetChildFirBranchMutation_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics
	{
		struct TreeGenesisLibrary_eventGetGrowMutation_Parms
		{
			AActor* Owner;
			float InValue;
			UGenesisMutation* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetGrowMutation_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetGrowMutation_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetGrowMutation_Parms, ReturnValue), Z_Construct_UClass_UGenesisMutation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "DisplayName", "Get Grow Mutation" },
		{ "Keywords", "grow mutation" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "GetGrowMutation", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventGetGrowMutation_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics
	{
		struct TreeGenesisLibrary_eventGetLeafMutation_Parms
		{
			AActor* Owner;
			float InValue;
			UGenesisMutation* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetLeafMutation_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetLeafMutation_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetLeafMutation_Parms, ReturnValue), Z_Construct_UClass_UGenesisMutation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "DisplayName", "Get Leaf Mutation" },
		{ "Keywords", "leaf mutation" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "GetLeafMutation", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventGetLeafMutation_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics
	{
		struct TreeGenesisLibrary_eventGetParentBranchMutation_Parms
		{
			AActor* Owner;
			float InValue;
			UGenesisMutation* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetParentBranchMutation_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetParentBranchMutation_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetParentBranchMutation_Parms, ReturnValue), Z_Construct_UClass_UGenesisMutation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "DisplayName", "Get Parent Branch Mutation" },
		{ "Keywords", "parent branch mutation" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "GetParentBranchMutation", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventGetParentBranchMutation_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics
	{
		struct TreeGenesisLibrary_eventGetPitchMutation_Parms
		{
			AActor* Owner;
			float InValue;
			UGenesisMutation* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetPitchMutation_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetPitchMutation_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetPitchMutation_Parms, ReturnValue), Z_Construct_UClass_UGenesisMutation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "DisplayName", "Get Pitch Mutation" },
		{ "Keywords", "pitch mutation" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "GetPitchMutation", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventGetPitchMutation_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics
	{
		struct TreeGenesisLibrary_eventGetRollMutation_Parms
		{
			AActor* Owner;
			float InValue;
			UGenesisMutation* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetRollMutation_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetRollMutation_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetRollMutation_Parms, ReturnValue), Z_Construct_UClass_UGenesisMutation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "DisplayName", "Get Roll Mutation" },
		{ "Keywords", "roll mutation" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "GetRollMutation", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventGetRollMutation_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics
	{
		struct TreeGenesisLibrary_eventGetRule_Parms
		{
			AActor* Owner;
			UGenesisRule* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetRule_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetRule_Parms, ReturnValue), Z_Construct_UClass_UGenesisRule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "DisplayName", "Get Rule" },
		{ "Keywords", "new rule" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "GetRule", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventGetRule_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_GetRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_GetRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics
	{
		struct TreeGenesisLibrary_eventGetTiltMutation_Parms
		{
			AActor* Owner;
			float InValue;
			UGenesisMutation* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetTiltMutation_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetTiltMutation_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeGenesisLibrary_eventGetTiltMutation_Parms, ReturnValue), Z_Construct_UClass_UGenesisMutation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Genesis" },
		{ "DisplayName", "Get Tilt Mutation" },
		{ "Keywords", "tilt mutation" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeGenesisLibrary, nullptr, "GetTiltMutation", nullptr, nullptr, sizeof(TreeGenesisLibrary_eventGetTiltMutation_Parms), Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTreeGenesisLibrary_NoRegister()
	{
		return UTreeGenesisLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTreeGenesisLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreeGenesisLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTreeGenesisLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_AddMutation, "AddMutation" }, // 120258774
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_AddPattern, "AddPattern" }, // 1249033733
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_AddRule, "AddRule" }, // 613290358
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_AlphabetSymbolToString, "AlphabetSymbolToString" }, // 1336593204
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_GetChildBranchMutation, "GetChildBranchMutation" }, // 3622473149
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_GetChildFirBranchMutation, "GetChildFirBranchMutation" }, // 3783000968
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_GetGrowMutation, "GetGrowMutation" }, // 3538917752
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_GetLeafMutation, "GetLeafMutation" }, // 194261651
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_GetParentBranchMutation, "GetParentBranchMutation" }, // 809992798
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_GetPitchMutation, "GetPitchMutation" }, // 2243539732
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_GetRollMutation, "GetRollMutation" }, // 3068363257
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_GetRule, "GetRule" }, // 1901755224
		{ &Z_Construct_UFunction_UTreeGenesisLibrary_GetTiltMutation, "GetTiltMutation" }, // 382130695
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeGenesisLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeGenesis.h" },
		{ "ModuleRelativePath", "TreeGenesis.h" },
		{ "ScriptName", "GenesisLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreeGenesisLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeGenesisLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTreeGenesisLibrary_Statics::ClassParams = {
		&UTreeGenesisLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTreeGenesisLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeGenesisLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreeGenesisLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTreeGenesisLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTreeGenesisLibrary, 4101923931);
	template<> PROCEDURALTREE_API UClass* StaticClass<UTreeGenesisLibrary>()
	{
		return UTreeGenesisLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTreeGenesisLibrary(Z_Construct_UClass_UTreeGenesisLibrary, &UTreeGenesisLibrary::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("UTreeGenesisLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeGenesisLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
