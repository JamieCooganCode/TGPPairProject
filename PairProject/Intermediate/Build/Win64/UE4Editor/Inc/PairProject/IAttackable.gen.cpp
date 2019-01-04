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
	PAIRPROJECT_API UEnum* Z_Construct_UEnum_PairProject_Team();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	PAIRPROJECT_API UClass* Z_Construct_UClass_UIAttackable_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_UIAttackable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	static UEnum* Team_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PairProject_Team, Z_Construct_UPackage__Script_PairProject(), TEXT("Team"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Team(Team_StaticEnum, TEXT("/Script/PairProject"), TEXT("Team"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PairProject_Team_CRC() { return 3678598655U; }
	UEnum* Z_Construct_UEnum_PairProject_Team()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PairProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Team"), 0, Get_Z_Construct_UEnum_PairProject_Team_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Team::blue", (int64)Team::blue },
				{ "Team::red", (int64)Team::red },
				{ "Team::yellow", (int64)Team::yellow },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "blue.DisplayName", "Blue" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/IAttackable.h" },
				{ "red.DisplayName", "Red" },
				{ "yellow.DisplayName", "Yellow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PairProject,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"Team",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"Team",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
