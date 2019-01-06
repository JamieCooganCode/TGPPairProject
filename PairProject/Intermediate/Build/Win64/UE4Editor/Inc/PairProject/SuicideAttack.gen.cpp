// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/SuicideAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuicideAttack() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_USuicideAttack_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_USuicideAttack();
	PAIRPROJECT_API UClass* Z_Construct_UClass_UBaseAttack();
	UPackage* Z_Construct_UPackage__Script_PairProject();
// End Cross Module References
	void USuicideAttack::StaticRegisterNativesUSuicideAttack()
	{
	}
	UClass* Z_Construct_UClass_USuicideAttack_NoRegister()
	{
		return USuicideAttack::StaticClass();
	}
	struct Z_Construct_UClass_USuicideAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USuicideAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuicideAttack_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "SuicideAttack.h" },
		{ "ModuleRelativePath", "Public/SuicideAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuicideAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USuicideAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USuicideAttack_Statics::ClassParams = {
		&USuicideAttack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USuicideAttack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USuicideAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USuicideAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USuicideAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USuicideAttack, 1747988291);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USuicideAttack(Z_Construct_UClass_USuicideAttack, &USuicideAttack::StaticClass, TEXT("/Script/PairProject"), TEXT("USuicideAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuicideAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
