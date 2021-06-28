// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATreeElement;
struct FTreeElementPrototypeData;
#ifdef PROCEDURALTREE_FirTreeBranch_generated_h
#error "FirTreeBranch.generated.h already included, missing '#pragma once' in FirTreeBranch.h"
#endif
#define PROCEDURALTREE_FirTreeBranch_generated_h

#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNeedleSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<struct FNeedleSettings>();

#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhiBallSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<struct FPhiBallSettings>();

#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTreeElementPrototypeData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PROCEDURALTREE_API UScriptStruct* StaticStruct<struct FTreeElementPrototypeData>();

#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_SPARSE_DATA
#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_RPC_WRAPPERS
#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhiBall(); \
	friend struct Z_Construct_UClass_APhiBall_Statics; \
public: \
	DECLARE_CLASS(APhiBall, ATreeElement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(APhiBall)


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_INCLASS \
private: \
	static void StaticRegisterNativesAPhiBall(); \
	friend struct Z_Construct_UClass_APhiBall_Statics; \
public: \
	DECLARE_CLASS(APhiBall, ATreeElement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(APhiBall)


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhiBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhiBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhiBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhiBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhiBall(APhiBall&&); \
	NO_API APhiBall(const APhiBall&); \
public:


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhiBall(APhiBall&&); \
	NO_API APhiBall(const APhiBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhiBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhiBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhiBall)


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_PRIVATE_PROPERTY_OFFSET
#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_70_PROLOG
#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_RPC_WRAPPERS \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_INCLASS \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_INCLASS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALTREE_API UClass* StaticClass<class APhiBall>();

#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_SPARSE_DATA
#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAllPrototypes); \
	DECLARE_FUNCTION(execRemoveAllFirComponents); \
	DECLARE_FUNCTION(execAddFirComponent); \
	DECLARE_FUNCTION(execRedrawFirComponents); \
	DECLARE_FUNCTION(execNewFirBranch);


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAllPrototypes); \
	DECLARE_FUNCTION(execRemoveAllFirComponents); \
	DECLARE_FUNCTION(execAddFirComponent); \
	DECLARE_FUNCTION(execRedrawFirComponents); \
	DECLARE_FUNCTION(execNewFirBranch);


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirTreeBranch(); \
	friend struct Z_Construct_UClass_AFirTreeBranch_Statics; \
public: \
	DECLARE_CLASS(AFirTreeBranch, ATreeBranch, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(AFirTreeBranch)


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_INCLASS \
private: \
	static void StaticRegisterNativesAFirTreeBranch(); \
	friend struct Z_Construct_UClass_AFirTreeBranch_Statics; \
public: \
	DECLARE_CLASS(AFirTreeBranch, ATreeBranch, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTree"), NO_API) \
	DECLARE_SERIALIZER(AFirTreeBranch)


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirTreeBranch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirTreeBranch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirTreeBranch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirTreeBranch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirTreeBranch(AFirTreeBranch&&); \
	NO_API AFirTreeBranch(const AFirTreeBranch&); \
public:


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirTreeBranch() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirTreeBranch(AFirTreeBranch&&); \
	NO_API AFirTreeBranch(const AFirTreeBranch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirTreeBranch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirTreeBranch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirTreeBranch)


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FirComponents() { return STRUCT_OFFSET(AFirTreeBranch, FirComponents); }


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_109_PROLOG
#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_RPC_WRAPPERS \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_INCLASS \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_PRIVATE_PROPERTY_OFFSET \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_SPARSE_DATA \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_INCLASS_NO_PURE_DECLS \
	ProceduralTree_Source_ProceduralTree_FirTreeBranch_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALTREE_API UClass* StaticClass<class AFirTreeBranch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralTree_Source_ProceduralTree_FirTreeBranch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
