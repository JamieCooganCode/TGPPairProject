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
// End Cross Module References
	void ABasePickup::StaticRegisterNativesABasePickup()
	{
	}
	UClass* Z_Construct_UClass_ABasePickup_NoRegister()
	{
		return ABasePickup::StaticClass();
	}
	struct Z_Construct_UClass_ABasePickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasePickup.h" },
		{ "ModuleRelativePath", "Public/BasePickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasePickup_Statics::ClassParams = {
		&ABasePickup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
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
	IMPLEMENT_CLASS(ABasePickup, 1482022821);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePickup(Z_Construct_UClass_ABasePickup, &ABasePickup::StaticClass, TEXT("/Script/PairProject"), TEXT("ABasePickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
