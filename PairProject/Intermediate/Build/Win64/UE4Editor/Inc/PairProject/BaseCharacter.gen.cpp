// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/BaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}
// Cross Module References
	PAIRPROJECT_API UEnum* Z_Construct_UEnum_PairProject_AttackType();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_FreezePlayerInPlace();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_SetUpCamera();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_SetUpCameraArm();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_TakeDamage();
	PAIRPROJECT_API UEnum* Z_Construct_UEnum_PairProject_Team();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_UIAttackable_NoRegister();
// End Cross Module References
	static UEnum* AttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PairProject_AttackType, Z_Construct_UPackage__Script_PairProject(), TEXT("AttackType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AttackType(AttackType_StaticEnum, TEXT("/Script/PairProject"), TEXT("AttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PairProject_AttackType_CRC() { return 3690714773U; }
	UEnum* Z_Construct_UEnum_PairProject_AttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PairProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AttackType"), 0, Get_Z_Construct_UEnum_PairProject_AttackType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "none", (int64)none },
				{ "basic", (int64)basic },
				{ "comboOne", (int64)comboOne },
				{ "comboTwo", (int64)comboTwo },
				{ "SpecialB", (int64)SpecialB },
				{ "Block", (int64)Block },
				{ "YAttack", (int64)YAttack },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "basic.DisplayName", "basic" },
				{ "Block.DisplayName", "Block" },
				{ "BlueprintType", "true" },
				{ "comboOne.DisplayName", "comboOne" },
				{ "comboTwo.DisplayName", "comboTwo" },
				{ "ModuleRelativePath", "Public/BaseCharacter.h" },
				{ "none.DisplayName", "None" },
				{ "SpecialB.DisplayName", "SpecialB" },
				{ "YAttack.DisplayName", "Yattack" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PairProject,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AttackType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"AttackType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
		UClass* Class = ABaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseCurrentHealth", &ABaseCharacter::execDecreaseCurrentHealth },
			{ "DecreaseCurrentMana", &ABaseCharacter::execDecreaseCurrentMana },
			{ "DecreaseCurrentStamina", &ABaseCharacter::execDecreaseCurrentStamina },
			{ "FreezePlayerInPlace", &ABaseCharacter::execFreezePlayerInPlace },
			{ "IncreaseCurrentHealth", &ABaseCharacter::execIncreaseCurrentHealth },
			{ "IncreaseCurrentStamina", &ABaseCharacter::execIncreaseCurrentStamina },
			{ "IncreseCurrentMana", &ABaseCharacter::execIncreseCurrentMana },
			{ "SetUpCamera", &ABaseCharacter::execSetUpCamera },
			{ "SetUpCameraArm", &ABaseCharacter::execSetUpCameraArm },
			{ "TakeDamage", &ABaseCharacter::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth_Statics
	{
		struct BaseCharacter_eventDecreaseCurrentHealth_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventDecreaseCurrentHealth_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "DecreaseCurrentHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseCharacter_eventDecreaseCurrentHealth_Parms), Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana_Statics
	{
		struct BaseCharacter_eventDecreaseCurrentMana_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventDecreaseCurrentMana_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "DecreaseCurrentMana", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseCharacter_eventDecreaseCurrentMana_Parms), Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina_Statics
	{
		struct BaseCharacter_eventDecreaseCurrentStamina_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventDecreaseCurrentStamina_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "DecreaseCurrentStamina", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseCharacter_eventDecreaseCurrentStamina_Parms), Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_FreezePlayerInPlace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_FreezePlayerInPlace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_FreezePlayerInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "FreezePlayerInPlace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_FreezePlayerInPlace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_FreezePlayerInPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_FreezePlayerInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_FreezePlayerInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth_Statics
	{
		struct BaseCharacter_eventIncreaseCurrentHealth_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventIncreaseCurrentHealth_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "IncreaseCurrentHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseCharacter_eventIncreaseCurrentHealth_Parms), Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina_Statics
	{
		struct BaseCharacter_eventIncreaseCurrentStamina_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventIncreaseCurrentStamina_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "IncreaseCurrentStamina", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseCharacter_eventIncreaseCurrentStamina_Parms), Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana_Statics
	{
		struct BaseCharacter_eventIncreseCurrentMana_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventIncreseCurrentMana_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "IncreseCurrentMana", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseCharacter_eventIncreseCurrentMana_Parms), Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_SetUpCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_SetUpCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera_SetUp" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_SetUpCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "SetUpCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_SetUpCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_SetUpCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_SetUpCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_SetUpCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_SetUpCameraArm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_SetUpCameraArm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera_SetUp" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_SetUpCameraArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "SetUpCameraArm", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_SetUpCameraArm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_SetUpCameraArm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_SetUpCameraArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_SetUpCameraArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_TakeDamage_Statics
	{
		struct BaseCharacter_eventTakeDamage_Parms
		{
			float attackValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_TakeDamage_Statics::NewProp_attackValue = { UE4CodeGen_Private::EPropertyClass::Float, "attackValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventTakeDamage_Parms, attackValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_TakeDamage_Statics::NewProp_attackValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "TakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseCharacter_eventTakeDamage_Parms), Z_Construct_UFunction_ABaseCharacter_TakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_TakeDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_TakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__startTeam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__startTeam_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movingToPosition_MetaData[];
#endif
		static void NewProp_movingToPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_movingToPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionToGo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionToGo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attacking_MetaData[];
#endif
		static void NewProp_Attacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Attacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAttackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerBodyMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerBodyMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AButtonHit_MetaData[];
#endif
		static void NewProp_AButtonHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AButtonHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackButtonHit_MetaData[];
#endif
		static void NewProp_BackButtonHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BackButtonHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartButtonHit_MetaData[];
#endif
		static void NewProp_StartButtonHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StartButtonHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPossessed_MetaData[];
#endif
		static void NewProp_isPossessed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPossessed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentHealth, "DecreaseCurrentHealth" }, // 3546191391
		{ &Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentMana, "DecreaseCurrentMana" }, // 1075561474
		{ &Z_Construct_UFunction_ABaseCharacter_DecreaseCurrentStamina, "DecreaseCurrentStamina" }, // 1419206577
		{ &Z_Construct_UFunction_ABaseCharacter_FreezePlayerInPlace, "FreezePlayerInPlace" }, // 801721135
		{ &Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentHealth, "IncreaseCurrentHealth" }, // 1177304113
		{ &Z_Construct_UFunction_ABaseCharacter_IncreaseCurrentStamina, "IncreaseCurrentStamina" }, // 3399477435
		{ &Z_Construct_UFunction_ABaseCharacter_IncreseCurrentMana, "IncreseCurrentMana" }, // 666444885
		{ &Z_Construct_UFunction_ABaseCharacter_SetUpCamera, "SetUpCamera" }, // 4095290072
		{ &Z_Construct_UFunction_ABaseCharacter_SetUpCameraArm, "SetUpCameraArm" }, // 135692383
		{ &Z_Construct_UFunction_ABaseCharacter_TakeDamage, "TakeDamage" }, // 2179754920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__startTeam_MetaData[] = {
		{ "Category", "IAttackable" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
		{ "ToolTip", "IAttackable Interface Stuff" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__startTeam = { UE4CodeGen_Private::EPropertyClass::Enum, "_startTeam", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _startTeam), Z_Construct_UEnum_PairProject_Team, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__startTeam_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__startTeam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__startTeam_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_movingToPosition_MetaData[] = {
		{ "Category", "Player_Movement" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_movingToPosition_SetBit(void* Obj)
	{
		((ABaseCharacter*)Obj)->movingToPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_movingToPosition = { UE4CodeGen_Private::EPropertyClass::Bool, "movingToPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_movingToPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_movingToPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_movingToPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DirectionToGo_MetaData[] = {
		{ "Category", "Player_Movement" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DirectionToGo = { UE4CodeGen_Private::EPropertyClass::Struct, "DirectionToGo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, DirectionToGo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DirectionToGo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DirectionToGo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Attacking_MetaData[] = {
		{ "Category", "Player_Attacks" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Attacking_SetBit(void* Obj)
	{
		((ABaseCharacter*)Obj)->Attacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Attacking = { UE4CodeGen_Private::EPropertyClass::Bool, "Attacking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Attacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Attacking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Attacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentAttackDamage_MetaData[] = {
		{ "Category", "Player_Statistics" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentAttackDamage = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentAttackDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, CurrentAttackDamage), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentAttackDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentAttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Player_Statistics" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentStamina = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentStamina", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, CurrentStamina), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentStamina_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentMana_MetaData[] = {
		{ "Category", "Player_Statistics" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentMana = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentMana", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, CurrentMana), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentMana_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Player_Statistics" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentHealth = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentHealth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CameraSpringArm_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CameraSpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "CameraSpringArm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, CameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CameraSpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_ThirdPersonCameraComponent_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
		{ "ToolTip", "third person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_ThirdPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ThirdPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, ThirdPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_ThirdPersonCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_ThirdPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_PlayerBodyMeshComponent_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_PlayerBodyMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerBodyMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, PlayerBodyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_PlayerBodyMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_PlayerBodyMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentRotation_MetaData[] = {
		{ "Category", "Player_Movement" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentRotation = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, CurrentRotation), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentVelocity_MetaData[] = {
		{ "Category", "Player_Movement" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, CurrentVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AButtonHit_MetaData[] = {
		{ "Category", "Player_Input" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AButtonHit_SetBit(void* Obj)
	{
		((ABaseCharacter*)Obj)->AButtonHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AButtonHit = { UE4CodeGen_Private::EPropertyClass::Bool, "AButtonHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AButtonHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AButtonHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AButtonHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BackButtonHit_MetaData[] = {
		{ "Category", "Player_Input" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BackButtonHit_SetBit(void* Obj)
	{
		((ABaseCharacter*)Obj)->BackButtonHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BackButtonHit = { UE4CodeGen_Private::EPropertyClass::Bool, "BackButtonHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BackButtonHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BackButtonHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BackButtonHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartButtonHit_MetaData[] = {
		{ "Category", "Player_Input" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartButtonHit_SetBit(void* Obj)
	{
		((ABaseCharacter*)Obj)->StartButtonHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartButtonHit = { UE4CodeGen_Private::EPropertyClass::Bool, "StartButtonHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartButtonHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartButtonHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartButtonHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentAttack_MetaData[] = {
		{ "Category", "Player current Attack" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentAttack = { UE4CodeGen_Private::EPropertyClass::Byte, "CurrentAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, CurrentAttack), Z_Construct_UEnum_PairProject_AttackType, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isPossessed_MetaData[] = {
		{ "Category", "Player_Management" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isPossessed_SetBit(void* Obj)
	{
		((ABaseCharacter*)Obj)->isPossessed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isPossessed = { UE4CodeGen_Private::EPropertyClass::Bool, "isPossessed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isPossessed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isPossessed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isPossessed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__startTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__startTeam_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_movingToPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DirectionToGo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Attacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentAttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CameraSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_ThirdPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_PlayerBodyMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AButtonHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BackButtonHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartButtonHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isPossessed,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAttackable_NoRegister, (int32)VTABLE_OFFSET(ABaseCharacter, IIAttackable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
		&ABaseCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABaseCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseCharacter, 2039603877);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseCharacter(Z_Construct_UClass_ABaseCharacter, &ABaseCharacter::StaticClass, TEXT("/Script/PairProject"), TEXT("ABaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
