// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/IAttackable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAttackable() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_UIAttackable_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_UIAttackable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PairProject();
// End Cross Module References
	void UIAttackable::StaticRegisterNativesUIAttackable()
	{
	}
	UClass* Z_Construct_UClass_UIAttackable_NoRegister()
	{
		return UIAttackable::StaticClass();
	}
	struct Z_Construct_UClass_UIAttackable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAttackable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAttackable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAttackable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAttackable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIAttackable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIAttackable_Statics::ClassParams = {
		&UIAttackable::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000840A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UIAttackable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIAttackable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAttackable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIAttackable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIAttackable, 2595496977);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIAttackable(Z_Construct_UClass_UIAttackable, &UIAttackable::StaticClass, TEXT("/Script/PairProject"), TEXT("UIAttackable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAttackable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
