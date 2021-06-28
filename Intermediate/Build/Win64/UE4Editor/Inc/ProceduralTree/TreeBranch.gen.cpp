// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTree/TreeBranch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeBranch() {}
// Cross Module References
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ATreeElement_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ATreeElement();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralTree();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FTreeElementProperties();
	PROCEDURALTREE_API UEnum* Z_Construct_UEnum_ProceduralTree_EInterpolation();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ATreeBranch_NoRegister();
	PROCEDURALTREE_API UClass* Z_Construct_UClass_ATreeBranch();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PROCEDURALTREE_API UScriptStruct* Z_Construct_UScriptStruct_FTreeBranchProperties();
// End Cross Module References
	DEFINE_FUNCTION(ATreeElement::execCopySpline)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_InSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopySpline(Z_Param_InSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execClone)
	{
		P_GET_OBJECT(ATreeElement,Z_Param_InOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATreeElement**)Z_Param__Result=P_THIS->Clone(Z_Param_InOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execUpdateChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execRemoveTreeChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTreeChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execUpdateSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSpline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execInterpolateSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InterpolateSpline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execRoll)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Roll(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execParentBranch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATreeElement**)Z_Param__Result=P_THIS->ParentBranch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execNewBranch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATreeElement**)Z_Param__Result=P_THIS->NewBranch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pitch(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execAddRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRotation(Z_Param_DeltaRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execDrawForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawForward(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeElement::execRedraw)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Redraw();
		P_NATIVE_END;
	}
	void ATreeElement::StaticRegisterNativesATreeElement()
	{
		UClass* Class = ATreeElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRotation", &ATreeElement::execAddRotation },
			{ "Clone", &ATreeElement::execClone },
			{ "CopySpline", &ATreeElement::execCopySpline },
			{ "DrawForward", &ATreeElement::execDrawForward },
			{ "InterpolateSpline", &ATreeElement::execInterpolateSpline },
			{ "MoveForward", &ATreeElement::execMoveForward },
			{ "NewBranch", &ATreeElement::execNewBranch },
			{ "ParentBranch", &ATreeElement::execParentBranch },
			{ "Pitch", &ATreeElement::execPitch },
			{ "Redraw", &ATreeElement::execRedraw },
			{ "RemoveTreeChildren", &ATreeElement::execRemoveTreeChildren },
			{ "Roll", &ATreeElement::execRoll },
			{ "UpdateChildren", &ATreeElement::execUpdateChildren },
			{ "UpdateSpline", &ATreeElement::execUpdateSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATreeElement_AddRotation_Statics
	{
		struct TreeElement_eventAddRotation_Parms
		{
			FRotator DeltaRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATreeElement_AddRotation_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElement_eventAddRotation_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeElement_AddRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeElement_AddRotation_Statics::NewProp_DeltaRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_AddRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_AddRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "AddRotation", nullptr, nullptr, sizeof(TreeElement_eventAddRotation_Parms), Z_Construct_UFunction_ATreeElement_AddRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_AddRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_AddRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_AddRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_AddRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_AddRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_Clone_Statics
	{
		struct TreeElement_eventClone_Parms
		{
			ATreeElement* InOwner;
			ATreeElement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATreeElement_Clone_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElement_eventClone_Parms, InOwner), Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATreeElement_Clone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElement_eventClone_Parms, ReturnValue), Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeElement_Clone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeElement_Clone_Statics::NewProp_InOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeElement_Clone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_Clone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_Clone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "Clone", nullptr, nullptr, sizeof(TreeElement_eventClone_Parms), Z_Construct_UFunction_ATreeElement_Clone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_Clone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_Clone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_Clone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_Clone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_Clone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_CopySpline_Statics
	{
		struct TreeElement_eventCopySpline_Parms
		{
			USplineComponent* InSpline;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSpline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_CopySpline_Statics::NewProp_InSpline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATreeElement_CopySpline_Statics::NewProp_InSpline = { "InSpline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElement_eventCopySpline_Parms, InSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_CopySpline_Statics::NewProp_InSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_CopySpline_Statics::NewProp_InSpline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeElement_CopySpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeElement_CopySpline_Statics::NewProp_InSpline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_CopySpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_CopySpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "CopySpline", nullptr, nullptr, sizeof(TreeElement_eventCopySpline_Parms), Z_Construct_UFunction_ATreeElement_CopySpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_CopySpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_CopySpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_CopySpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_CopySpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_CopySpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_DrawForward_Statics
	{
		struct TreeElement_eventDrawForward_Parms
		{
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATreeElement_DrawForward_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElement_eventDrawForward_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeElement_DrawForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeElement_DrawForward_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_DrawForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_DrawForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "DrawForward", nullptr, nullptr, sizeof(TreeElement_eventDrawForward_Parms), Z_Construct_UFunction_ATreeElement_DrawForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_DrawForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_DrawForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_DrawForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_DrawForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_DrawForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_InterpolateSpline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_InterpolateSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_InterpolateSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "InterpolateSpline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_InterpolateSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_InterpolateSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_InterpolateSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_InterpolateSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_MoveForward_Statics
	{
		struct TreeElement_eventMoveForward_Parms
		{
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATreeElement_MoveForward_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElement_eventMoveForward_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeElement_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeElement_MoveForward_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "MoveForward", nullptr, nullptr, sizeof(TreeElement_eventMoveForward_Parms), Z_Construct_UFunction_ATreeElement_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_NewBranch_Statics
	{
		struct TreeElement_eventNewBranch_Parms
		{
			ATreeElement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATreeElement_NewBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElement_eventNewBranch_Parms, ReturnValue), Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeElement_NewBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeElement_NewBranch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_NewBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_NewBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "NewBranch", nullptr, nullptr, sizeof(TreeElement_eventNewBranch_Parms), Z_Construct_UFunction_ATreeElement_NewBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_NewBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_NewBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_NewBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_NewBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_NewBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_ParentBranch_Statics
	{
		struct TreeElement_eventParentBranch_Parms
		{
			ATreeElement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATreeElement_ParentBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElement_eventParentBranch_Parms, ReturnValue), Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeElement_ParentBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeElement_ParentBranch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_ParentBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_ParentBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "ParentBranch", nullptr, nullptr, sizeof(TreeElement_eventParentBranch_Parms), Z_Construct_UFunction_ATreeElement_ParentBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_ParentBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_ParentBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_ParentBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_ParentBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_ParentBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_Pitch_Statics
	{
		struct TreeElement_eventPitch_Parms
		{
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATreeElement_Pitch_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElement_eventPitch_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeElement_Pitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeElement_Pitch_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_Pitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_Pitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "Pitch", nullptr, nullptr, sizeof(TreeElement_eventPitch_Parms), Z_Construct_UFunction_ATreeElement_Pitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_Pitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_Pitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_Pitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_Pitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_Pitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_Redraw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_Redraw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_Redraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "Redraw", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_Redraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_Redraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_Redraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_Redraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_RemoveTreeChildren_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_RemoveTreeChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_RemoveTreeChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "RemoveTreeChildren", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_RemoveTreeChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_RemoveTreeChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_RemoveTreeChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_RemoveTreeChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_Roll_Statics
	{
		struct TreeElement_eventRoll_Parms
		{
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATreeElement_Roll_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeElement_eventRoll_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeElement_Roll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeElement_Roll_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_Roll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_Roll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "Roll", nullptr, nullptr, sizeof(TreeElement_eventRoll_Parms), Z_Construct_UFunction_ATreeElement_Roll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_Roll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_Roll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_Roll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_Roll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_Roll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_UpdateChildren_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_UpdateChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_UpdateChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "UpdateChildren", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_UpdateChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_UpdateChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_UpdateChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_UpdateChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeElement_UpdateSpline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeElement_UpdateSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeElement_UpdateSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeElement, nullptr, "UpdateSpline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeElement_UpdateSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeElement_UpdateSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeElement_UpdateSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeElement_UpdateSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATreeElement_NoRegister()
	{
		return ATreeElement::StaticClass();
	}
	struct Z_Construct_UClass_ATreeElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreeParent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreeChildren_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeChildren_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreeChildren;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNumPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentNumPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD_0_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LOD_0_Properties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineInterp_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SplineInterp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneTreeRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneTreeRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElementProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATreeElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATreeElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATreeElement_AddRotation, "AddRotation" }, // 1820155889
		{ &Z_Construct_UFunction_ATreeElement_Clone, "Clone" }, // 1128387897
		{ &Z_Construct_UFunction_ATreeElement_CopySpline, "CopySpline" }, // 1294546037
		{ &Z_Construct_UFunction_ATreeElement_DrawForward, "DrawForward" }, // 2433616680
		{ &Z_Construct_UFunction_ATreeElement_InterpolateSpline, "InterpolateSpline" }, // 1922588132
		{ &Z_Construct_UFunction_ATreeElement_MoveForward, "MoveForward" }, // 1276572166
		{ &Z_Construct_UFunction_ATreeElement_NewBranch, "NewBranch" }, // 4134602450
		{ &Z_Construct_UFunction_ATreeElement_ParentBranch, "ParentBranch" }, // 4172451745
		{ &Z_Construct_UFunction_ATreeElement_Pitch, "Pitch" }, // 2815377223
		{ &Z_Construct_UFunction_ATreeElement_Redraw, "Redraw" }, // 1042536314
		{ &Z_Construct_UFunction_ATreeElement_RemoveTreeChildren, "RemoveTreeChildren" }, // 3971583155
		{ &Z_Construct_UFunction_ATreeElement_Roll, "Roll" }, // 2196263779
		{ &Z_Construct_UFunction_ATreeElement_UpdateChildren, "UpdateChildren" }, // 3869992361
		{ &Z_Construct_UFunction_ATreeElement_UpdateSpline, "UpdateSpline" }, // 1723360915
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeElement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeBranch.h" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeParent_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeParent = { "TreeParent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeElement, TreeParent), Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeParent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeChildren_Inner = { "TreeChildren", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeChildren_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeChildren = { "TreeChildren", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeElement, TreeChildren), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeChildren_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeElement_Statics::NewProp_ParentNumPoints_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATreeElement_Statics::NewProp_ParentNumPoints = { "ParentNumPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeElement, ParentNumPoints), METADATA_PARAMS(Z_Construct_UClass_ATreeElement_Statics::NewProp_ParentNumPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::NewProp_ParentNumPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeElement_Statics::NewProp_LOD_0_Properties_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATreeElement_Statics::NewProp_LOD_0_Properties = { "LOD_0_Properties", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeElement, LOD_0_Properties), Z_Construct_UScriptStruct_FTreeElementProperties, METADATA_PARAMS(Z_Construct_UClass_ATreeElement_Statics::NewProp_LOD_0_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::NewProp_LOD_0_Properties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeElement_Statics::NewProp_SplineInterp_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATreeElement_Statics::NewProp_SplineInterp = { "SplineInterp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeElement, SplineInterp), Z_Construct_UEnum_ProceduralTree_EInterpolation, METADATA_PARAMS(Z_Construct_UClass_ATreeElement_Statics::NewProp_SplineInterp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::NewProp_SplineInterp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeElement_Statics::NewProp_SceneTreeRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeElement_Statics::NewProp_SceneTreeRoot = { "SceneTreeRoot", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeElement, SceneTreeRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreeElement_Statics::NewProp_SceneTreeRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::NewProp_SceneTreeRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeElement_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeElement_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeElement, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreeElement_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::NewProp_Spline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeElement_Statics::NewProp_ElementProperties_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATreeElement_Statics::NewProp_ElementProperties = { "ElementProperties", nullptr, (EPropertyFlags)0x0020080000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeElement, ElementProperties), Z_Construct_UScriptStruct_FTreeElementProperties, METADATA_PARAMS(Z_Construct_UClass_ATreeElement_Statics::NewProp_ElementProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::NewProp_ElementProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeElement_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeElement_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeElement, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreeElement_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeElement_Statics::NewProp_ProceduralMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeElement_Statics::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeElement, ProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreeElement_Statics::NewProp_ProceduralMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::NewProp_ProceduralMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATreeElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeChildren_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeElement_Statics::NewProp_TreeChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeElement_Statics::NewProp_ParentNumPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeElement_Statics::NewProp_LOD_0_Properties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeElement_Statics::NewProp_SplineInterp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeElement_Statics::NewProp_SceneTreeRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeElement_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeElement_Statics::NewProp_ElementProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeElement_Statics::NewProp_SceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeElement_Statics::NewProp_ProceduralMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATreeElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATreeElement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATreeElement_Statics::ClassParams = {
		&ATreeElement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATreeElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATreeElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATreeElement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATreeElement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATreeElement, 1053220770);
	template<> PROCEDURALTREE_API UClass* StaticClass<ATreeElement>()
	{
		return ATreeElement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATreeElement(Z_Construct_UClass_ATreeElement, &ATreeElement::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("ATreeElement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATreeElement);
	DEFINE_FUNCTION(ATreeBranch::execSetupBaseRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupBaseRadius(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATreeBranch::execPolarToCartesian2D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->PolarToCartesian2D(Z_Param_Radius,Z_Param_Angle);
		P_NATIVE_END;
	}
	void ATreeBranch::StaticRegisterNativesATreeBranch()
	{
		UClass* Class = ATreeBranch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PolarToCartesian2D", &ATreeBranch::execPolarToCartesian2D },
			{ "SetupBaseRadius", &ATreeBranch::execSetupBaseRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics
	{
		struct TreeBranch_eventPolarToCartesian2D_Parms
		{
			float Radius;
			float Angle;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeBranch_eventPolarToCartesian2D_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeBranch_eventPolarToCartesian2D_Parms, Angle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeBranch_eventPolarToCartesian2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeBranch, nullptr, "PolarToCartesian2D", nullptr, nullptr, sizeof(TreeBranch_eventPolarToCartesian2D_Parms), Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATreeBranch_SetupBaseRadius_Statics
	{
		struct TreeBranch_eventSetupBaseRadius_Parms
		{
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATreeBranch_SetupBaseRadius_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeBranch_eventSetupBaseRadius_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreeBranch_SetupBaseRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreeBranch_SetupBaseRadius_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreeBranch_SetupBaseRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreeBranch_SetupBaseRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreeBranch, nullptr, "SetupBaseRadius", nullptr, nullptr, sizeof(TreeBranch_eventSetupBaseRadius_Parms), Z_Construct_UFunction_ATreeBranch_SetupBaseRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeBranch_SetupBaseRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreeBranch_SetupBaseRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreeBranch_SetupBaseRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreeBranch_SetupBaseRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATreeBranch_SetupBaseRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATreeBranch_NoRegister()
	{
		return ATreeBranch::StaticClass();
	}
	struct Z_Construct_UClass_ATreeBranch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATreeBranch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATreeElement,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATreeBranch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATreeBranch_PolarToCartesian2D, "PolarToCartesian2D" }, // 2037868699
		{ &Z_Construct_UFunction_ATreeBranch_SetupBaseRadius, "SetupBaseRadius" }, // 749438731
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeBranch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreeBranch.h" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeBranch_Statics::NewProp_BranchProperties_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "TreeBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATreeBranch_Statics::NewProp_BranchProperties = { "BranchProperties", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreeBranch, BranchProperties), Z_Construct_UScriptStruct_FTreeBranchProperties, METADATA_PARAMS(Z_Construct_UClass_ATreeBranch_Statics::NewProp_BranchProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeBranch_Statics::NewProp_BranchProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATreeBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeBranch_Statics::NewProp_BranchProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATreeBranch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATreeBranch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATreeBranch_Statics::ClassParams = {
		&ATreeBranch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATreeBranch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATreeBranch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATreeBranch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeBranch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATreeBranch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATreeBranch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATreeBranch, 2805243582);
	template<> PROCEDURALTREE_API UClass* StaticClass<ATreeBranch>()
	{
		return ATreeBranch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATreeBranch(Z_Construct_UClass_ATreeBranch, &ATreeBranch::StaticClass, TEXT("/Script/ProceduralTree"), TEXT("ATreeBranch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATreeBranch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
