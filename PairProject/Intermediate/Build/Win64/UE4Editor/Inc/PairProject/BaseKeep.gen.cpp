// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/BaseKeep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseKeep() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABaseKeep_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABaseKeep();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABaseKeep::StaticRegisterNativesABaseKeep()
	{
	}
	UClass* Z_Construct_UClass_ABaseKeep_NoRegister()
	{
		return ABaseKeep::StaticClass();
	}
	struct Z_Construct_UClass_ABaseKeep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepBoxCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeepBoxCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepWall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeepWall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseKeep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseKeep_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseKeep.h" },
		{ "ModuleRelativePath", "Public/BaseKeep.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseKeep_Statics::NewProp_KeepBoxCollider_MetaData[] = {
		{ "Category", "BaseKeep" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseKeep.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseKeep_Statics::NewProp_KeepBoxCollider = { UE4CodeGen_Private::EPropertyClass::Object, "KeepBoxCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a000d, 1, nullptr, STRUCT_OFFSET(ABaseKeep, KeepBoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseKeep_Statics::NewProp_KeepBoxCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseKeep_Statics::NewProp_KeepBoxCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseKeep_Statics::NewProp_KeepWall_MetaData[] = {
		{ "Category", "BaseKeep" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseKeep.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseKeep_Statics::NewProp_KeepWall = { UE4CodeGen_Private::EPropertyClass::Object, "KeepWall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a000d, 1, nullptr, STRUCT_OFFSET(ABaseKeep, KeepWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseKeep_Statics::NewProp_KeepWall_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseKeep_Statics::NewProp_KeepWall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseKeep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseKeep_Statics::NewProp_KeepBoxCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseKeep_Statics::NewProp_KeepWall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseKeep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseKeep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseKeep_Statics::ClassParams = {
		&ABaseKeep::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABaseKeep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABaseKeep_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABaseKeep_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseKeep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseKeep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseKeep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseKeep, 553352359);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseKeep(Z_Construct_UClass_ABaseKeep, &ABaseKeep::StaticClass, TEXT("/Script/PairProject"), TEXT("ABaseKeep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseKeep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
