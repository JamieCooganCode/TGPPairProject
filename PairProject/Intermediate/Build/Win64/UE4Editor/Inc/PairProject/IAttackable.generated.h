// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAIRPROJECT_IAttackable_generated_h
#error "IAttackable.generated.h already included, missing '#pragma once' in IAttackable.h"
#endif
#define PAIRPROJECT_IAttackable_generated_h

#define PairProject_Source_PairProject_Public_IAttackable_h_13_RPC_WRAPPERS
#define PairProject_Source_PairProject_Public_IAttackable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PairProject_Source_PairProject_Public_IAttackable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PAIRPROJECT_API UIAttackable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAttackable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PAIRPROJECT_API, UIAttackable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAttackable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PAIRPROJECT_API UIAttackable(UIAttackable&&); \
	PAIRPROJECT_API UIAttackable(const UIAttackable&); \
public:


#define PairProject_Source_PairProject_Public_IAttackable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PAIRPROJECT_API UIAttackable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PAIRPROJECT_API UIAttackable(UIAttackable&&); \
	PAIRPROJECT_API UIAttackable(const UIAttackable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PAIRPROJECT_API, UIAttackable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAttackable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAttackable)


#define PairProject_Source_PairProject_Public_IAttackable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIAttackable(); \
	friend struct Z_Construct_UClass_UIAttackable_Statics; \
public: \
	DECLARE_CLASS(UIAttackable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PairProject"), PAIRPROJECT_API) \
	DECLARE_SERIALIZER(UIAttackable)


#define PairProject_Source_PairProject_Public_IAttackable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PairProject_Source_PairProject_Public_IAttackable_h_13_GENERATED_UINTERFACE_BODY() \
	PairProject_Source_PairProject_Public_IAttackable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PairProject_Source_PairProject_Public_IAttackable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PairProject_Source_PairProject_Public_IAttackable_h_13_GENERATED_UINTERFACE_BODY() \
	PairProject_Source_PairProject_Public_IAttackable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PairProject_Source_PairProject_Public_IAttackable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIAttackable() {} \
public: \
	typedef UIAttackable UClassType; \
	typedef IIAttackable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PairProject_Source_PairProject_Public_IAttackable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIAttackable() {} \
public: \
	typedef UIAttackable UClassType; \
	typedef IIAttackable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PairProject_Source_PairProject_Public_IAttackable_h_10_PROLOG
#define PairProject_Source_PairProject_Public_IAttackable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_IAttackable_h_13_RPC_WRAPPERS \
	PairProject_Source_PairProject_Public_IAttackable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PairProject_Source_PairProject_Public_IAttackable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_IAttackable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_IAttackable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PairProject_Source_PairProject_Public_IAttackable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
