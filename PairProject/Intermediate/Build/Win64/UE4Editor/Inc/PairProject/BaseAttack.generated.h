// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PAIRPROJECT_BaseAttack_generated_h
#error "BaseAttack.generated.h already included, missing '#pragma once' in BaseAttack.h"
#endif
#define PAIRPROJECT_BaseAttack_generated_h

#define PairProject_Source_PairProject_Public_BaseAttack_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapTriggered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverlapTriggered(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define PairProject_Source_PairProject_Public_BaseAttack_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapTriggered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverlapTriggered(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define PairProject_Source_PairProject_Public_BaseAttack_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAttack(); \
	friend struct Z_Construct_UClass_UBaseAttack_Statics; \
public: \
	DECLARE_CLASS(UBaseAttack, UStaticMeshComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(UBaseAttack)


#define PairProject_Source_PairProject_Public_BaseAttack_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBaseAttack(); \
	friend struct Z_Construct_UClass_UBaseAttack_Statics; \
public: \
	DECLARE_CLASS(UBaseAttack, UStaticMeshComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(UBaseAttack)


#define PairProject_Source_PairProject_Public_BaseAttack_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseAttack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseAttack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAttack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseAttack(UBaseAttack&&); \
	NO_API UBaseAttack(const UBaseAttack&); \
public:


#define PairProject_Source_PairProject_Public_BaseAttack_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseAttack(UBaseAttack&&); \
	NO_API UBaseAttack(const UBaseAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseAttack)


#define PairProject_Source_PairProject_Public_BaseAttack_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___attackDuration() { return STRUCT_OFFSET(UBaseAttack, _attackDuration); } \
	FORCEINLINE static uint32 __PPO___attackDamage() { return STRUCT_OFFSET(UBaseAttack, _attackDamage); }


#define PairProject_Source_PairProject_Public_BaseAttack_h_10_PROLOG
#define PairProject_Source_PairProject_Public_BaseAttack_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_BaseAttack_h_13_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_BaseAttack_h_13_RPC_WRAPPERS \
	PairProject_Source_PairProject_Public_BaseAttack_h_13_INCLASS \
	PairProject_Source_PairProject_Public_BaseAttack_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PairProject_Source_PairProject_Public_BaseAttack_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_BaseAttack_h_13_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_BaseAttack_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_BaseAttack_h_13_INCLASS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_BaseAttack_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PairProject_Source_PairProject_Public_BaseAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
