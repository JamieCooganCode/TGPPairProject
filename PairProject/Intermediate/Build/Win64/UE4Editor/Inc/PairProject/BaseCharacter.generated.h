// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAIRPROJECT_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define PAIRPROJECT_BaseCharacter_generated_h

#define PairProject_Source_PairProject_Public_BaseCharacter_h_15_RPC_WRAPPERS
#define PairProject_Source_PairProject_Public_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PairProject_Source_PairProject_Public_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define PairProject_Source_PairProject_Public_BaseCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define PairProject_Source_PairProject_Public_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define PairProject_Source_PairProject_Public_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define PairProject_Source_PairProject_Public_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentVelocity() { return STRUCT_OFFSET(ABaseCharacter, CurrentVelocity); } \
	FORCEINLINE static uint32 __PPO__PlayerBodyMeshComponent() { return STRUCT_OFFSET(ABaseCharacter, PlayerBodyMeshComponent); }


#define PairProject_Source_PairProject_Public_BaseCharacter_h_12_PROLOG
#define PairProject_Source_PairProject_Public_BaseCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_BaseCharacter_h_15_RPC_WRAPPERS \
	PairProject_Source_PairProject_Public_BaseCharacter_h_15_INCLASS \
	PairProject_Source_PairProject_Public_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PairProject_Source_PairProject_Public_BaseCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PairProject_Source_PairProject_Public_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
