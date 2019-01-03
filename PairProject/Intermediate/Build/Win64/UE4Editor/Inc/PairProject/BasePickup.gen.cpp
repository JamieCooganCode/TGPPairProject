// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/BasePickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePickup() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABasePickup_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABasePickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABasePickup_AfterPickedUp();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ABasePickup::StaticRegisterNativesABasePickup()
	{
		UClass* Class = ABasePickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AfterPickedUp", &ABasePickup::execAfterPickedUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasePickup_AfterPickedUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePickup_AfterPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePickup_AfterPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePickup, "AfterPickedUp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePickup_AfterPickedUp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasePickup_AfterPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePickup_AfterPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePickup_AfterPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasePickup_NoRegister()
	{
		return ABasePickup::StaticClass();
	}
	struct Z_Construct_UClass_ABasePickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickupModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickupCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasePickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePickup_AfterPickedUp, "AfterPickedUp" }, // 827594892
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasePickup.h" },
		{ "ModuleRelativePath", "Public/BasePickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePickup_Statics::NewProp_pickupModel_MetaData[] = {
		{ "Category", "BasePickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasePickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePickup_Statics::NewProp_pickupModel = { UE4CodeGen_Private::EPropertyClass::Object, "pickupModel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ABasePickup, pickupModel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePickup_Statics::NewProp_pickupModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePickup_Statics::NewProp_pickupModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePickup_Statics::NewProp_pickupCollider_MetaData[] = {
		{ "Category", "pickup_collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasePickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePickup_Statics::NewProp_pickupCollider = { UE4CodeGen_Private::EPropertyClass::Object, "pickupCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ABasePickup, pickupCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePickup_Statics::NewProp_pickupCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePickup_Statics::NewProp_pickupCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePickup_Statics::NewProp_pickupModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePickup_Statics::NewProp_pickupCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasePickup_Statics::ClassParams = {
		&ABasePickup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABasePickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABasePickup_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABasePickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABasePickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasePickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasePickup, 3329092472);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePickup(Z_Construct_UClass_ABasePickup, &ABasePickup::StaticClass, TEXT("/Script/PairProject"), TEXT("ABasePickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
