// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEDURALTREE_TreeRoot_generated_h
#error "TreeRoot.generated.h already included, missing '#pragma once' in TreeRoot.h"
#endif
#define PROCEDURALTREE_TreeRoot_generated_h

#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuleWidgetElement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<struct FRuleWidgetElement>();

#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_SPARSE_DATA
#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRedraw);


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRedraw);


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATreeRoot(); \
	friend struct Z_Construct_UClass_ATreeRoot_Statics; \
public: \
	DECLARE_CLASS(ATreeRoot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(ATreeRoot)


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_INCLASS \
private: \
	static void StaticRegisterNativesATreeRoot(); \
	friend struct Z_Construct_UClass_ATreeRoot_Statics; \
public: \
	DECLARE_CLASS(ATreeRoot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(ATreeRoot)


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATreeRoot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATreeRoot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATreeRoot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATreeRoot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATreeRoot(ATreeRoot&&); \
	NO_API ATreeRoot(const ATreeRoot&); \
public:


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATreeRoot(ATreeRoot&&); \
	NO_API ATreeRoot(const ATreeRoot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATreeRoot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATreeRoot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATreeRoot)


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneRoot() { return STRUCT_OFFSET(ATreeRoot, SceneRoot); } \
	FORCEINLINE static uint32 __PPO__TreeTrunk() { return STRUCT_OFFSET(ATreeRoot, TreeTrunk); } \
	FORCEINLINE static uint32 __PPO__Genesis() { return STRUCT_OFFSET(ATreeRoot, Genesis); } \
	FORCEINLINE static uint32 __PPO__bModifiersInit() { return STRUCT_OFFSET(ATreeRoot, bModifiersInit); }


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_29_PROLOG
#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_RPC_WRAPPERS \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_INCLASS \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_INCLASS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALTREE_API UClass* StaticClass<class ATreeRoot>();

#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_SPARSE_DATA
#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execValidateEditorRules); \
	DECLARE_FUNCTION(execValidateStandartRules); \
	DECLARE_FUNCTION(execValidateRules);


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execValidateEditorRules); \
	DECLARE_FUNCTION(execValidateStandartRules); \
	DECLARE_FUNCTION(execValidateRules);


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStandartTreeRoot(); \
	friend struct Z_Construct_UClass_AStandartTreeRoot_Statics; \
public: \
	DECLARE_CLASS(AStandartTreeRoot, ATreeRoot, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(AStandartTreeRoot)


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_INCLASS \
private: \
	static void StaticRegisterNativesAStandartTreeRoot(); \
	friend struct Z_Construct_UClass_AStandartTreeRoot_Statics; \
public: \
	DECLARE_CLASS(AStandartTreeRoot, ATreeRoot, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(AStandartTreeRoot)


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStandartTreeRoot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStandartTreeRoot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStandartTreeRoot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStandartTreeRoot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStandartTreeRoot(AStandartTreeRoot&&); \
	NO_API AStandartTreeRoot(const AStandartTreeRoot&); \
public:


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStandartTreeRoot() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStandartTreeRoot(AStandartTreeRoot&&); \
	NO_API AStandartTreeRoot(const AStandartTreeRoot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStandartTreeRoot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStandartTreeRoot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStandartTreeRoot)


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_PRIVATE_PROPERTY_OFFSET
#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_89_PROLOG
#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_RPC_WRAPPERS \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_INCLASS \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_INCLASS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_TreeRoot_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALTREE_API UClass* StaticClass<class AStandartTreeRoot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralTree_Source_ProceduralTree_TreeRoot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
