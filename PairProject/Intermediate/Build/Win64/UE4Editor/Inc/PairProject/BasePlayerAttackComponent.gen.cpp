// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/BasePlayerAttackComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayerAttackComponent() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_UBasePlayerAttackComponent_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_UBasePlayerAttackComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void UBasePlayerAttackComponent::StaticRegisterNativesUBasePlayerAttackComponent()
	{
	}
	UClass* Z_Construct_UClass_UBasePlayerAttackComponent_NoRegister()
	{
		return UBasePlayerAttackComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBasePlayerAttackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwordMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwordMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePlayerAttackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BasePlayerAttackComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackComponent_Statics::NewProp_SwordMesh_MetaData[] = {
		{ "Category", "Sword" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasePlayerAttackComponent_Statics::NewProp_SwordMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SwordMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UBasePlayerAttackComponent, SwordMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackComponent_Statics::NewProp_SwordMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackComponent_Statics::NewProp_SwordMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlayerAttackComponent_Statics::NewProp_AttackCollider_MetaData[] = {
		{ "Category", "Attack_Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasePlayerAttackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasePlayerAttackComponent_Statics::NewProp_AttackCollider = { UE4CodeGen_Private::EPropertyClass::Object, "AttackCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UBasePlayerAttackComponent, AttackCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackComponent_Statics::NewProp_AttackCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackComponent_Statics::NewProp_AttackCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasePlayerAttackComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackComponent_Statics::NewProp_SwordMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePlayerAttackComponent_Statics::NewProp_AttackCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePlayerAttackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePlayerAttackComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBasePlayerAttackComponent_Statics::ClassParams = {
		&UBasePlayerAttackComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBasePlayerAttackComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBasePlayerAttackComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBasePlayerAttackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePlayerAttackComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBasePlayerAttackComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBasePlayerAttackComponent, 3535809779);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasePlayerAttackComponent(Z_Construct_UClass_UBasePlayerAttackComponent, &UBasePlayerAttackComponent::StaticClass, TEXT("/Script/PairProject"), TEXT("UBasePlayerAttackComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePlayerAttackComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
