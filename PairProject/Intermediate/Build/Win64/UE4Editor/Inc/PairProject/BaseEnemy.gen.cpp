// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/BaseEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABaseEnemy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PAIRPROJECT_API UClass* Z_Construct_UClass_UBaseAttack_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_UIAttackable_NoRegister();
// End Cross Module References
	void ABaseEnemy::StaticRegisterNativesABaseEnemy()
	{
	}
	UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
	{
		return ABaseEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__attackComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sightSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sightSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementComponentMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__movementComponentMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__currentMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attacking_MetaData[];
#endif
		static void NewProp__attacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__attacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeSinceLastAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeSinceLastAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__attackCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__attackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attackTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sightRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sightRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__movementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseEnemy.h" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackComponent_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackComponent = { UE4CodeGen_Private::EPropertyClass::Class, "_attackComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _attackComponent), Z_Construct_UClass_UBaseAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__sightSphere_MetaData[] = {
		{ "Category", "Stats" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__sightSphere = { UE4CodeGen_Private::EPropertyClass::Object, "_sightSphere", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _sightSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__sightSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__sightSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__movementComponentMesh_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__movementComponentMesh = { UE4CodeGen_Private::EPropertyClass::Object, "_movementComponentMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _movementComponentMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__movementComponentMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__movementComponentMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__currentMovementSpeed_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__currentMovementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "_currentMovementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _currentMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__currentMovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__currentMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attacking_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
		{ "ToolTip", "Animation Variables" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attacking_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->_attacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attacking = { UE4CodeGen_Private::EPropertyClass::Bool, "_attacking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attacking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__timeSinceLastAttack_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__timeSinceLastAttack = { UE4CodeGen_Private::EPropertyClass::Float, "_timeSinceLastAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _timeSinceLastAttack), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__timeSinceLastAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__timeSinceLastAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackCooldown_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackCooldown = { UE4CodeGen_Private::EPropertyClass::Float, "_attackCooldown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _attackCooldown), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackRange_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackRange = { UE4CodeGen_Private::EPropertyClass::Float, "_attackRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _attackRange), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackTarget_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackTarget = { UE4CodeGen_Private::EPropertyClass::Object, "_attackTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _attackTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__sightRange_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__sightRange = { UE4CodeGen_Private::EPropertyClass::Float, "_sightRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _sightRange), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__sightRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__sightRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__rotationSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__rotationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "_rotationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _rotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__rotationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__rotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__movementSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__movementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "_movementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _movementSpeed), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__movementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__movementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__damage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__damage = { UE4CodeGen_Private::EPropertyClass::Float, "_damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _damage), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__health_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__health = { UE4CodeGen_Private::EPropertyClass::Float, "_health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, _health), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__health_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__sightSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__movementComponentMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__currentMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__timeSinceLastAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__attackTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__sightRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__rotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__movementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__health,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseEnemy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAttackable_NoRegister, (int32)VTABLE_OFFSET(ABaseEnemy, IIAttackable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
		&ABaseEnemy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABaseEnemy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseEnemy, 1189703703);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseEnemy(Z_Construct_UClass_ABaseEnemy, &ABaseEnemy::StaticClass, TEXT("/Script/PairProject"), TEXT("ABaseEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
