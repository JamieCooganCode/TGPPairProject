// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef PAIRPROJECT_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define PAIRPROJECT_BaseCharacter_generated_h

#define PairProject_Source_PairProject_Public_BaseCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecreaseCurrentStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseCurrentStamina(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecreaseCurrentMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseCurrentMana(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecreaseCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseCurrentHealth(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseCurrentStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseCurrentStamina(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreseCurrentMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreseCurrentMana(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseCurrentHealth(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_attackValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_attackValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAttackCollider) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_playerposition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateAttackCollider(Z_Param_playerposition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatePlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotatePlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpCameraArm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpCameraArm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpCamera(); \
		P_NATIVE_END; \
	}


#define PairProject_Source_PairProject_Public_BaseCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecreaseCurrentStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseCurrentStamina(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecreaseCurrentMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseCurrentMana(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecreaseCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseCurrentHealth(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseCurrentStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseCurrentStamina(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreseCurrentMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreseCurrentMana(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseCurrentHealth(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_attackValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_attackValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAttackCollider) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_playerposition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateAttackCollider(Z_Param_playerposition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatePlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotatePlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpCameraArm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpCameraArm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpCamera(); \
		P_NATIVE_END; \
	}


#define PairProject_Source_PairProject_Public_BaseCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define PairProject_Source_PairProject_Public_BaseCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define PairProject_Source_PairProject_Public_BaseCharacter_h_16_STANDARD_CONSTRUCTORS \
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


#define PairProject_Source_PairProject_Public_BaseCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define PairProject_Source_PairProject_Public_BaseCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartButtonHit() { return STRUCT_OFFSET(ABaseCharacter, StartButtonHit); } \
	FORCEINLINE static uint32 __PPO__AButtonHit() { return STRUCT_OFFSET(ABaseCharacter, AButtonHit); } \
	FORCEINLINE static uint32 __PPO__CurrentVelocity() { return STRUCT_OFFSET(ABaseCharacter, CurrentVelocity); } \
	FORCEINLINE static uint32 __PPO__CurrentRotation() { return STRUCT_OFFSET(ABaseCharacter, CurrentRotation); } \
	FORCEINLINE static uint32 __PPO__PlayerBodyMeshComponent() { return STRUCT_OFFSET(ABaseCharacter, PlayerBodyMeshComponent); } \
	FORCEINLINE static uint32 __PPO__ThirdPersonCameraComponent() { return STRUCT_OFFSET(ABaseCharacter, ThirdPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraSpringArm() { return STRUCT_OFFSET(ABaseCharacter, CameraSpringArm); }


#define PairProject_Source_PairProject_Public_BaseCharacter_h_13_PROLOG
#define PairProject_Source_PairProject_Public_BaseCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_BaseCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_BaseCharacter_h_16_RPC_WRAPPERS \
	PairProject_Source_PairProject_Public_BaseCharacter_h_16_INCLASS \
	PairProject_Source_PairProject_Public_BaseCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PairProject_Source_PairProject_Public_BaseCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_BaseCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_BaseCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_BaseCharacter_h_16_INCLASS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_BaseCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PairProject_Source_PairProject_Public_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
