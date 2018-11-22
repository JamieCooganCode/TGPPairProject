// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/CameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraManager() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_ACameraManager_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ACameraManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ACameraManager::StaticRegisterNativesACameraManager()
	{
	}
	UClass* Z_Construct_UClass_ACameraManager_NoRegister()
	{
		return ACameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ACameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerOneCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerOneCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraManager.h" },
		{ "ModuleRelativePath", "Public/CameraManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraManager_Statics::NewProp_WorldCamera_MetaData[] = {
		{ "Category", "CameraManager" },
		{ "ModuleRelativePath", "Public/CameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraManager_Statics::NewProp_WorldCamera = { UE4CodeGen_Private::EPropertyClass::Object, "WorldCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACameraManager, WorldCamera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraManager_Statics::NewProp_WorldCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::NewProp_WorldCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraManager_Statics::NewProp_PlayerOneCamera_MetaData[] = {
		{ "Category", "CameraManager" },
		{ "ModuleRelativePath", "Public/CameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraManager_Statics::NewProp_PlayerOneCamera = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerOneCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACameraManager, PlayerOneCamera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraManager_Statics::NewProp_PlayerOneCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::NewProp_PlayerOneCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManager_Statics::NewProp_WorldCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManager_Statics::NewProp_PlayerOneCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraManager_Statics::ClassParams = {
		&ACameraManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACameraManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACameraManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraManager, 272517422);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraManager(Z_Construct_UClass_ACameraManager, &ACameraManager::StaticClass, TEXT("/Script/PairProject"), TEXT("ACameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
