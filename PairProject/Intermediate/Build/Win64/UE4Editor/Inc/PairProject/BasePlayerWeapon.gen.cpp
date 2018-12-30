// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/BasePlayerWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayerWeapon() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABasePlayerWeapon_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABasePlayerWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ABasePlayerWeapon::StaticRegisterNativesABasePlayerWeapon()
	{
		UClass* Class = ABasePlayerWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginSwordOverlap", &ABasePlayerWeapon::execOnBeginSwordOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics
	{
		struct BasePlayerWeapon_eventOnBeginSwordOverlap_Parms
		{
			TArray<AActor*> otheractors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_otheractors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otheractors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::NewProp_otheractors = { UE4CodeGen_Private::EPropertyClass::Array, "otheractors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BasePlayerWeapon_eventOnBeginSwordOverlap_Parms, otheractors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::NewProp_otheractors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "otheractors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::NewProp_otheractors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::NewProp_otheractors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePlayerWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerWeapon, "OnBeginSwordOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BasePlayerWeapon_eventOnBeginSwordOverlap_Parms), Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasePlayerWeapon_NoRegister()
	{
		return ABasePlayerWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ABasePlayerWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_ABasePlayerWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasePlayerWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlayerWeapon_OnBeginSwordOverlap, "OnBeginSwordOverlap" }, // 1086663018
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayerWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasePlayerWeapon.h" },
		{ "ModuleRelativePath", "Public/BasePlayerWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayerWeapon_Statics::NewProp_SwordMesh_MetaData[] = {
		{ "Category", "Sword" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasePlayerWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerWeapon_Statics::NewProp_SwordMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SwordMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ABasePlayerWeapon, SwordMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePlayerWeapon_Statics::NewProp_SwordMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayerWeapon_Statics::NewProp_SwordMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayerWeapon_Statics::NewProp_AttackCollider_MetaData[] = {
		{ "Category", "Attack_Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasePlayerWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerWeapon_Statics::NewProp_AttackCollider = { UE4CodeGen_Private::EPropertyClass::Object, "AttackCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ABasePlayerWeapon, AttackCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePlayerWeapon_Statics::NewProp_AttackCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayerWeapon_Statics::NewProp_AttackCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlayerWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerWeapon_Statics::NewProp_SwordMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerWeapon_Statics::NewProp_AttackCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePlayerWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayerWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayerWeapon_Statics::ClassParams = {
		&ABasePlayerWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABasePlayerWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABasePlayerWeapon_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABasePlayerWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABasePlayerWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePlayerWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasePlayerWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasePlayerWeapon, 1180168389);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePlayerWeapon(Z_Construct_UClass_ABasePlayerWeapon, &ABasePlayerWeapon::StaticClass, TEXT("/Script/PairProject"), TEXT("ABasePlayerWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayerWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
