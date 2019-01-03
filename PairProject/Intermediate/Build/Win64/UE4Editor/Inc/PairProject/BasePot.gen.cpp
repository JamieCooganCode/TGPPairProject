// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/BasePot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePot() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABasePot_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABasePot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABasePot_Remove();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_ABasePot_SpawnPickup();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ABasePot::StaticRegisterNativesABasePot()
	{
		UClass* Class = ABasePot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Remove", &ABasePot::execRemove },
			{ "SpawnPickup", &ABasePot::execSpawnPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasePot_Remove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePot_Remove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePot_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePot, "Remove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePot_Remove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasePot_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePot_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePot_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasePot_SpawnPickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePot_SpawnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePot_SpawnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePot, "SpawnPickup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePot_SpawnPickup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasePot_SpawnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePot_SpawnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePot_SpawnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasePot_NoRegister()
	{
		return ABasePot::StaticClass();
	}
	struct Z_Construct_UClass_ABasePot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PotCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PotCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasePot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePot_Remove, "Remove" }, // 2220708319
		{ &Z_Construct_UFunction_ABasePot_SpawnPickup, "SpawnPickup" }, // 1673696094
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasePot.h" },
		{ "ModuleRelativePath", "Public/BasePot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePot_Statics::NewProp_PotCollider_MetaData[] = {
		{ "Category", "BasePot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasePot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePot_Statics::NewProp_PotCollider = { UE4CodeGen_Private::EPropertyClass::Object, "PotCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(ABasePot, PotCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePot_Statics::NewProp_PotCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePot_Statics::NewProp_PotCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePot_Statics::NewProp_PotCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasePot_Statics::ClassParams = {
		&ABasePot::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABasePot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABasePot_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABasePot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABasePot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasePot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasePot, 3165085525);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePot(Z_Construct_UClass_ABasePot, &ABasePot::StaticClass, TEXT("/Script/PairProject"), TEXT("ABasePot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
