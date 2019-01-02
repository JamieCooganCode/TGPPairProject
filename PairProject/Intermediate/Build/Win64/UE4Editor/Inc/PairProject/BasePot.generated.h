// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAIRPROJECT_BasePot_generated_h
#error "BasePot.generated.h already included, missing '#pragma once' in BasePot.h"
#endif
#define PAIRPROJECT_BasePot_generated_h

#define PairProject_Source_PairProject_Public_BasePot_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Remove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnPickup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnPickup(); \
		P_NATIVE_END; \
	}


#define PairProject_Source_PairProject_Public_BasePot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Remove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnPickup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnPickup(); \
		P_NATIVE_END; \
	}


#define PairProject_Source_PairProject_Public_BasePot_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePot(); \
	friend struct Z_Construct_UClass_ABasePot_Statics; \
public: \
	DECLARE_CLASS(ABasePot, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(ABasePot)


#define PairProject_Source_PairProject_Public_BasePot_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABasePot(); \
	friend struct Z_Construct_UClass_ABasePot_Statics; \
public: \
	DECLARE_CLASS(ABasePot, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(ABasePot)


#define PairProject_Source_PairProject_Public_BasePot_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePot(ABasePot&&); \
	NO_API ABasePot(const ABasePot&); \
public:


#define PairProject_Source_PairProject_Public_BasePot_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePot(ABasePot&&); \
	NO_API ABasePot(const ABasePot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePot)


#define PairProject_Source_PairProject_Public_BasePot_h_16_PRIVATE_PROPERTY_OFFSET
#define PairProject_Source_PairProject_Public_BasePot_h_13_PROLOG
#define PairProject_Source_PairProject_Public_BasePot_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_BasePot_h_16_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_BasePot_h_16_RPC_WRAPPERS \
	PairProject_Source_PairProject_Public_BasePot_h_16_INCLASS \
	PairProject_Source_PairProject_Public_BasePot_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PairProject_Source_PairProject_Public_BasePot_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_BasePot_h_16_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_BasePot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_BasePot_h_16_INCLASS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_BasePot_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PairProject_Source_PairProject_Public_BasePot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
