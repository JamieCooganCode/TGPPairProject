// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/BomberEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberEnemy() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABomberEnemy_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABomberEnemy();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABaseEnemy();
	UPackage* Z_Construct_UPackage__Script_PairProject();
// End Cross Module References
	void ABomberEnemy::StaticRegisterNativesABomberEnemy()
	{
	}
	UClass* Z_Construct_UClass_ABomberEnemy_NoRegister()
	{
		return ABomberEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABomberEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomberEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BomberEnemy.h" },
		{ "ModuleRelativePath", "Public/BomberEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomberEnemy_Statics::ClassParams = {
		&ABomberEnemy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABomberEnemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABomberEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomberEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomberEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberEnemy, 1315575187);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberEnemy(Z_Construct_UClass_ABomberEnemy, &ABomberEnemy::StaticClass, TEXT("/Script/PairProject"), TEXT("ABomberEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
