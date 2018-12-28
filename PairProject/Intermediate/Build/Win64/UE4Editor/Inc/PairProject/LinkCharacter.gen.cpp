// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/LinkCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinkCharacter() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_ALinkCharacter_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ALinkCharacter();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
	UPackage* Z_Construct_UPackage__Script_PairProject();
// End Cross Module References
	void ALinkCharacter::StaticRegisterNativesALinkCharacter()
	{
	}
	UClass* Z_Construct_UClass_ALinkCharacter_NoRegister()
	{
		return ALinkCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ALinkCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALinkCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALinkCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LinkCharacter.h" },
		{ "ModuleRelativePath", "Public/LinkCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALinkCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALinkCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALinkCharacter_Statics::ClassParams = {
		&ALinkCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALinkCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALinkCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALinkCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALinkCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALinkCharacter, 872226031);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALinkCharacter(Z_Construct_UClass_ALinkCharacter, &ALinkCharacter::StaticClass, TEXT("/Script/PairProject"), TEXT("ALinkCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALinkCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
