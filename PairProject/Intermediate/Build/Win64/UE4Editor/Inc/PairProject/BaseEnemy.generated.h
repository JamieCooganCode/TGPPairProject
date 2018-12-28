// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAIRPROJECT_BaseEnemy_generated_h
#error "BaseEnemy.generated.h already included, missing '#pragma once' in BaseEnemy.h"
#endif
#define PAIRPROJECT_BaseEnemy_generated_h

#define PairProject_Source_PairProject_Public_BaseEnemy_h_14_RPC_WRAPPERS
#define PairProject_Source_PairProject_Public_BaseEnemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define PairProject_Source_PairProject_Public_BaseEnemy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseEnemy*>(this); }


#define PairProject_Source_PairProject_Public_BaseEnemy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseEnemy*>(this); }


#define PairProject_Source_PairProject_Public_BaseEnemy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public:


#define PairProject_Source_PairProject_Public_BaseEnemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemy)


#define PairProject_Source_PairProject_Public_BaseEnemy_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___health() { return STRUCT_OFFSET(ABaseEnemy, _health); } \
	FORCEINLINE static uint32 __PPO___damage() { return STRUCT_OFFSET(ABaseEnemy, _damage); } \
	FORCEINLINE static uint32 __PPO___movementSpeed() { return STRUCT_OFFSET(ABaseEnemy, _movementSpeed); } \
	FORCEINLINE static uint32 __PPO___rotationSpeed() { return STRUCT_OFFSET(ABaseEnemy, _rotationSpeed); } \
	FORCEINLINE static uint32 __PPO___sightRange() { return STRUCT_OFFSET(ABaseEnemy, _sightRange); } \
	FORCEINLINE static uint32 __PPO___attackTarget() { return STRUCT_OFFSET(ABaseEnemy, _attackTarget); } \
	FORCEINLINE static uint32 __PPO___attackRange() { return STRUCT_OFFSET(ABaseEnemy, _attackRange); } \
	FORCEINLINE static uint32 __PPO___attackCooldown() { return STRUCT_OFFSET(ABaseEnemy, _attackCooldown); } \
	FORCEINLINE static uint32 __PPO___timeSinceLastAttack() { return STRUCT_OFFSET(ABaseEnemy, _timeSinceLastAttack); } \
	FORCEINLINE static uint32 __PPO___movementComponentMesh() { return STRUCT_OFFSET(ABaseEnemy, _movementComponentMesh); } \
	FORCEINLINE static uint32 __PPO___sightSphere() { return STRUCT_OFFSET(ABaseEnemy, _sightSphere); } \
	FORCEINLINE static uint32 __PPO___attackComponent() { return STRUCT_OFFSET(ABaseEnemy, _attackComponent); }


#define PairProject_Source_PairProject_Public_BaseEnemy_h_11_PROLOG
#define PairProject_Source_PairProject_Public_BaseEnemy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_BaseEnemy_h_14_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_BaseEnemy_h_14_RPC_WRAPPERS \
	PairProject_Source_PairProject_Public_BaseEnemy_h_14_INCLASS \
	PairProject_Source_PairProject_Public_BaseEnemy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PairProject_Source_PairProject_Public_BaseEnemy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_BaseEnemy_h_14_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_BaseEnemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_BaseEnemy_h_14_INCLASS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_BaseEnemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PairProject_Source_PairProject_Public_BaseEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
