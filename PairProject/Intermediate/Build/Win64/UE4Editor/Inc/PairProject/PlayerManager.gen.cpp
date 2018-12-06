// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/PlayerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerManager() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_APlayerManager_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_APlayerManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void APlayerManager::StaticRegisterNativesAPlayerManager()
	{
	}
	UClass* Z_Construct_UClass_APlayerManager_NoRegister()
	{
		return APlayerManager::StaticClass();
	}
	struct Z_Construct_UClass_APlayerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterOne;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerManager.h" },
		{ "ModuleRelativePath", "Public/PlayerManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerManager_Statics::NewProp_CharacterTwo_MetaData[] = {
		{ "Category", "PlayerManager" },
		{ "ModuleRelativePath", "Public/PlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerManager_Statics::NewProp_CharacterTwo = { UE4CodeGen_Private::EPropertyClass::Object, "CharacterTwo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APlayerManager, CharacterTwo), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerManager_Statics::NewProp_CharacterTwo_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerManager_Statics::NewProp_CharacterTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerManager_Statics::NewProp_CharacterOne_MetaData[] = {
		{ "Category", "PlayerManager" },
		{ "ModuleRelativePath", "Public/PlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerManager_Statics::NewProp_CharacterOne = { UE4CodeGen_Private::EPropertyClass::Object, "CharacterOne", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APlayerManager, CharacterOne), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerManager_Statics::NewProp_CharacterOne_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerManager_Statics::NewProp_CharacterOne_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerManager_Statics::NewProp_CharacterTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerManager_Statics::NewProp_CharacterOne,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerManager_Statics::ClassParams = {
		&APlayerManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APlayerManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlayerManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayerManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerManager, 4042745121);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerManager(Z_Construct_UClass_APlayerManager, &APlayerManager::StaticClass, TEXT("/Script/PairProject"), TEXT("APlayerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
