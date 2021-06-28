// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
#ifdef PROCEDURALTREE_SplineInterpLibrary_generated_h
#error "SplineInterpLibrary.generated.h already included, missing '#pragma once' in SplineInterpLibrary.h"
#endif
#define PROCEDURALTREE_SplineInterpLibrary_generated_h

#define ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_SPARSE_DATA
#define ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMonotonic); \
	DECLARE_FUNCTION(execHermite); \
	DECLARE_FUNCTION(execCubic); \
	DECLARE_FUNCTION(execProccess);


#define ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMonotonic); \
	DECLARE_FUNCTION(execHermite); \
	DECLARE_FUNCTION(execCubic); \
	DECLARE_FUNCTION(execProccess);


#define ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineInterpLibrary(); \
	friend struct Z_Construct_UClass_USplineInterpLibrary_Statics; \
public: \
	DECLARE_CLASS(USplineInterpLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(USplineInterpLibrary)


#define ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSplineInterpLibrary(); \
	friend struct Z_Construct_UClass_USplineInterpLibrary_Statics; \
public: \
	DECLARE_CLASS(USplineInterpLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(USplineInterpLibrary)


#define ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineInterpLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineInterpLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineInterpLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineInterpLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineInterpLibrary(USplineInterpLibrary&&); \
	NO_API USplineInterpLibrary(const USplineInterpLibrary&); \
public:


#define ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineInterpLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineInterpLibrary(USplineInterpLibrary&&); \
	NO_API USplineInterpLibrary(const USplineInterpLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineInterpLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineInterpLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineInterpLibrary)


#define ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_26_PROLOG
#define ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_RPC_WRAPPERS \
	ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_INCLASS \
	ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_INCLASS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALTREE_API UClass* StaticClass<class USplineInterpLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralTree_Source_ProceduralTree_SplineInterpLibrary_h


#define FOREACH_ENUM_EINTERPOLATION(op) \
	op(EInterpolation::CUBIC) \
	op(EInterpolation::HERMITE) \
	op(EInterpolation::MONOTONIC) \
	op(EInterpolation::NONE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
