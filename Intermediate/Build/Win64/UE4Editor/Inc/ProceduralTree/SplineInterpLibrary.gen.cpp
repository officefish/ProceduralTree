// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTree/SplineInterpLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineInterpLibrary() {}
// Cross Module References
	PROCEDURALTREE_API UEnum* Z_Construct_UEnum_ProceduralTree_EInterpolation();
	UPackage* Z_Construct_UPackage__Script_ProceduralTree();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_USplineInterpLibrary_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_USplineInterpLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	static UEnum* EInterpolation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTree_EInterpolation, Z_Construct_UPackage__Script_ProceduralTree(), TEXT("EInterpolation"));
		}
		return Singleton;
	}
	template<> PROCEDURALTREE_API UEnum* StaticEnum<EInterpolation::MODE>()
	{
		return EInterpolation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInterpolation(EInterpolation_StaticEnum, TEXT("/Script/ProceduralTree"), TEXT("EInterpolation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralTree_EInterpolation_Hash() { return 1866022616U; }
	UEnum* Z_Construct_UEnum_ProceduralTree_EInterpolation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralTree();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInterpolation"), 0, Get_Z_Construct_UEnum_ProceduralTree_EInterpolation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInterpolation::CUBIC", (int64)EInterpolation::CUBIC },
				{ "EInterpolation::HERMITE", (int64)EInterpolation::HERMITE },
				{ "EInterpolation::MONOTONIC", (int64)EInterpolation::MONOTONIC },
				{ "EInterpolation::NONE", (int64)EInterpolation::NONE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n *\n */" },
				{ "CUBIC.Comment", "/**\n *\n */" },
				{ "CUBIC.Name", "EInterpolation::CUBIC" },
				{ "HERMITE.Comment", "/**\n *\n */" },
				{ "HERMITE.Name", "EInterpolation::HERMITE" },
				{ "ModuleRelativePath", "SplineInterpLibrary.h" },
				{ "MONOTONIC.Comment", "/**\n *\n */" },
				{ "MONOTONIC.Name", "EInterpolation::MONOTONIC" },
				{ "NONE.Comment", "/**\n *\n */" },
				{ "NONE.Name", "EInterpolation::NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTree,
				nullptr,
				"EInterpolation",
				"EInterpolation::MODE",
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
	DEFINE_FUNCTION(USplineInterpLibrary::execMonotonic)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		USplineInterpLibrary::Monotonic(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineInterpLibrary::execHermite)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		USplineInterpLibrary::Hermite(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineInterpLibrary::execCubic)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		USplineInterpLibrary::Cubic(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineInterpLibrary::execProccess)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Algorithm);
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		USplineInterpLibrary::Proccess(EInterpolation::MODE(Z_Param_Algorithm),Z_Param_Spline);
		P_NATIVE_END;
	}
	void USplineInterpLibrary::StaticRegisterNativesUSplineInterpLibrary()
	{
		UClass* Class = USplineInterpLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cubic", &USplineInterpLibrary::execCubic },
			{ "Hermite", &USplineInterpLibrary::execHermite },
			{ "Monotonic", &USplineInterpLibrary::execMonotonic },
			{ "Proccess", &USplineInterpLibrary::execProccess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics
	{
		struct SplineInterpLibrary_eventCubic_Parms
		{
			USplineComponent* Spline;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineInterpLibrary_eventCubic_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interp" },
		{ "ModuleRelativePath", "SplineInterpLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineInterpLibrary, nullptr, "Cubic", nullptr, nullptr, sizeof(SplineInterpLibrary_eventCubic_Parms), Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineInterpLibrary_Cubic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineInterpLibrary_Cubic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics
	{
		struct SplineInterpLibrary_eventHermite_Parms
		{
			USplineComponent* Spline;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineInterpLibrary_eventHermite_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interp" },
		{ "ModuleRelativePath", "SplineInterpLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineInterpLibrary, nullptr, "Hermite", nullptr, nullptr, sizeof(SplineInterpLibrary_eventHermite_Parms), Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineInterpLibrary_Hermite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineInterpLibrary_Hermite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics
	{
		struct SplineInterpLibrary_eventMonotonic_Parms
		{
			USplineComponent* Spline;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineInterpLibrary_eventMonotonic_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interp" },
		{ "ModuleRelativePath", "SplineInterpLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineInterpLibrary, nullptr, "Monotonic", nullptr, nullptr, sizeof(SplineInterpLibrary_eventMonotonic_Parms), Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineInterpLibrary_Monotonic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineInterpLibrary_Monotonic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics
	{
		struct SplineInterpLibrary_eventProccess_Parms
		{
			TEnumAsByte<EInterpolation::MODE> Algorithm;
			USplineComponent* Spline;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Algorithm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::NewProp_Algorithm = { "Algorithm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineInterpLibrary_eventProccess_Parms, Algorithm), Z_Construct_UEnum_ProceduralTree_EInterpolation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineInterpLibrary_eventProccess_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::NewProp_Algorithm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interp" },
		{ "ModuleRelativePath", "SplineInterpLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineInterpLibrary, nullptr, "Proccess", nullptr, nullptr, sizeof(SplineInterpLibrary_eventProccess_Parms), Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineInterpLibrary_Proccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineInterpLibrary_Proccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USplineInterpLibrary_NoRegister()
	{
		return USplineInterpLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USplineInterpLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplineInterpLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USplineInterpLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineInterpLibrary_Cubic, "Cubic" }, // 3320862584
		{ &Z_Construct_UFunction_USplineInterpLibrary_Hermite, "Hermite" }, // 1426299205
		{ &Z_Construct_UFunction_USplineInterpLibrary_Monotonic, "Monotonic" }, // 2829766276
		{ &Z_Construct_UFunction_USplineInterpLibrary_Proccess, "Proccess" }, // 1555216108
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineInterpLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SplineInterpLibrary.h" },
		{ "ModuleRelativePath", "SplineInterpLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplineInterpLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineInterpLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USplineInterpLibrary_Statics::ClassParams = {
		&USplineInterpLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USplineInterpLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplineInterpLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplineInterpLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USplineInterpLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USplineInterpLibrary, 1613696279);
	template<> PROCEDURALTREE_API UClass* StaticClass<USplineInterpLibrary>()
	{
		return USplineInterpLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USplineInterpLibrary(Z_Construct_UClass_USplineInterpLibrary, &USplineInterpLibrary::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("USplineInterpLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineInterpLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
