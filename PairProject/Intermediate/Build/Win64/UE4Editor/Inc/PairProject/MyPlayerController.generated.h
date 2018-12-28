// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseCharacter;
#ifdef PAIRPROJECT_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define PAIRPROJECT_MyPlayerController_generated_h

#define PairProject_Source_PairProject_Public_MyPlayerController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPossessPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PossessPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPossesedPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABaseCharacter**)Z_Param__Result=P_THIS->FindPossesedPlayer(); \
		P_NATIVE_END; \
	}


#define PairProject_Source_PairProject_Public_MyPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPossessPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PossessPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPossesedPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABaseCharacter**)Z_Param__Result=P_THIS->FindPossesedPlayer(); \
		P_NATIVE_END; \
	}


#define PairProject_Source_PairProject_Public_MyPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define PairProject_Source_PairProject_Public_MyPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PairProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define PairProject_Source_PairProject_Public_MyPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public:


#define PairProject_Source_PairProject_Public_MyPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController)


#define PairProject_Source_PairProject_Public_MyPlayerController_h_16_PRIVATE_PROPERTY_OFFSET
#define PairProject_Source_PairProject_Public_MyPlayerController_h_13_PROLOG
#define PairProject_Source_PairProject_Public_MyPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_MyPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_MyPlayerController_h_16_RPC_WRAPPERS \
	PairProject_Source_PairProject_Public_MyPlayerController_h_16_INCLASS \
	PairProject_Source_PairProject_Public_MyPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PairProject_Source_PairProject_Public_MyPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PairProject_Source_PairProject_Public_MyPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	PairProject_Source_PairProject_Public_MyPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_MyPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	PairProject_Source_PairProject_Public_MyPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PairProject_Source_PairProject_Public_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
