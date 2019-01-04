// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/FreezeEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFreezeEnemy() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_AFreezeEnemy_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_AFreezeEnemy();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABaseEnemy();
	UPackage* Z_Construct_UPackage__Script_PairProject();
// End Cross Module References
	void AFreezeEnemy::StaticRegisterNativesAFreezeEnemy()
	{
	}
	UClass* Z_Construct_UClass_AFreezeEnemy_NoRegister()
	{
		return AFreezeEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AFreezeEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFreezeEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreezeEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FreezeEnemy.h" },
		{ "ModuleRelativePath", "Public/FreezeEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFreezeEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFreezeEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFreezeEnemy_Statics::ClassParams = {
		&AFreezeEnemy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFreezeEnemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFreezeEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFreezeEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFreezeEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFreezeEnemy, 1654648620);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFreezeEnemy(Z_Construct_UClass_AFreezeEnemy, &AFreezeEnemy::StaticClass, TEXT("/Script/PairProject"), TEXT("AFreezeEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFreezeEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
