// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
class ATreeElement;
struct FRotator;
struct FVector2D;
#ifdef PROCEDURALTREE_TreeBranch_generated_h
#error "TreeBranch.generated.h already included, missing '#pragma once' in TreeBranch.h"
#endif
#define PROCEDURALTREE_TreeBranch_generated_h

#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_SPARSE_DATA
#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopySpline); \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execUpdateChildren); \
	DECLARE_FUNCTION(execRemoveTreeChildren); \
	DECLARE_FUNCTION(execUpdateSpline); \
	DECLARE_FUNCTION(execInterpolateSpline); \
	DECLARE_FUNCTION(execRoll); \
	DECLARE_FUNCTION(execParentBranch); \
	DECLARE_FUNCTION(execNewBranch); \
	DECLARE_FUNCTION(execPitch); \
	DECLARE_FUNCTION(execAddRotation); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execDrawForward); \
	DECLARE_FUNCTION(execRedraw);


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopySpline); \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execUpdateChildren); \
	DECLARE_FUNCTION(execRemoveTreeChildren); \
	DECLARE_FUNCTION(execUpdateSpline); \
	DECLARE_FUNCTION(execInterpolateSpline); \
	DECLARE_FUNCTION(execRoll); \
	DECLARE_FUNCTION(execParentBranch); \
	DECLARE_FUNCTION(execNewBranch); \
	DECLARE_FUNCTION(execPitch); \
	DECLARE_FUNCTION(execAddRotation); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execDrawForward); \
	DECLARE_FUNCTION(execRedraw);


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATreeElement(); \
	friend struct Z_Construct_UClass_ATreeElement_Statics; \
public: \
	DECLARE_CLASS(ATreeElement, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(ATreeElement)


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATreeElement(); \
	friend struct Z_Construct_UClass_ATreeElement_Statics; \
public: \
	DECLARE_CLASS(ATreeElement, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(ATreeElement)


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATreeElement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATreeElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATreeElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATreeElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATreeElement(ATreeElement&&); \
	NO_API ATreeElement(const ATreeElement&); \
public:


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATreeElement(ATreeElement&&); \
	NO_API ATreeElement(const ATreeElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATreeElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATreeElement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATreeElement)


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ElementProperties() { return STRUCT_OFFSET(ATreeElement, ElementProperties); } \
	FORCEINLINE static uint32 __PPO__SceneRoot() { return STRUCT_OFFSET(ATreeElement, SceneRoot); } \
	FORCEINLINE static uint32 __PPO__ProceduralMesh() { return STRUCT_OFFSET(ATreeElement, ProceduralMesh); }


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_15_PROLOG
#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_RPC_WRAPPERS \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_INCLASS \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_INCLASS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALTREE_API UClass* StaticClass<class ATreeElement>();

#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_SPARSE_DATA
#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupBaseRadius); \
	DECLARE_FUNCTION(execPolarToCartesian2D);


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupBaseRadius); \
	DECLARE_FUNCTION(execPolarToCartesian2D);


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATreeBranch(); \
	friend struct Z_Construct_UClass_ATreeBranch_Statics; \
public: \
	DECLARE_CLASS(ATreeBranch, ATreeElement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(ATreeBranch)


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_INCLASS \
private: \
	static void StaticRegisterNativesATreeBranch(); \
	friend struct Z_Construct_UClass_ATreeBranch_Statics; \
public: \
	DECLARE_CLASS(ATreeBranch, ATreeElement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(ATreeBranch)


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATreeBranch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATreeBranch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATreeBranch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATreeBranch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATreeBranch(ATreeBranch&&); \
	NO_API ATreeBranch(const ATreeBranch&); \
public:


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATreeBranch(ATreeBranch&&); \
	NO_API ATreeBranch(const ATreeBranch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATreeBranch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATreeBranch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATreeBranch)


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_PRIVATE_PROPERTY_OFFSET
#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_119_PROLOG
#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_RPC_WRAPPERS \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_INCLASS \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_INCLASS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_TreeBranch_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALTREE_API UClass* StaticClass<class ATreeBranch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralTree_Source_ProceduralTree_TreeBranch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
