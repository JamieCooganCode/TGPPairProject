// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/MyPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerController() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_AMyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer();
	PAIRPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_AMyPlayerController_PossessPlayer();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep();
// End Cross Module References
	void AMyPlayerController::StaticRegisterNativesAMyPlayerController()
	{
		UClass* Class = AMyPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindNonPossessedPlayer", &AMyPlayerController::execFindNonPossessedPlayer },
			{ "FindPossesedPlayer", &AMyPlayerController::execFindPossesedPlayer },
			{ "PossessPlayer", &AMyPlayerController::execPossessPlayer },
			{ "SendPlayerToKeep", &AMyPlayerController::execSendPlayerToKeep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer_Statics
	{
		struct MyPlayerController_eventFindNonPossessedPlayer_Parms
		{
			ABaseCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyPlayerController_eventFindNonPossessedPlayer_Parms, ReturnValue), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, "FindNonPossessedPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyPlayerController_eventFindNonPossessedPlayer_Parms), Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer_Statics
	{
		struct MyPlayerController_eventFindPossesedPlayer_Parms
		{
			ABaseCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyPlayerController_eventFindPossesedPlayer_Parms, ReturnValue), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, "FindPossesedPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyPlayerController_eventFindPossesedPlayer_Parms), Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_PossessPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_PossessPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_PossessPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, "PossessPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_PossessPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_PossessPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_PossessPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayerController_PossessPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep_Statics
	{
		struct MyPlayerController_eventSendPlayerToKeep_Parms
		{
			int32 keepNumber;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_keepNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep_Statics::NewProp_keepNumber = { UE4CodeGen_Private::EPropertyClass::Int, "keepNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyPlayerController_eventSendPlayerToKeep_Parms, keepNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep_Statics::NewProp_keepNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, "SendPlayerToKeep", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyPlayerController_eventSendPlayerToKeep_Parms), Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPlayerController_NoRegister()
	{
		return AMyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_possessedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_possessedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayerController_FindNonPossessedPlayer, "FindNonPossessedPlayer" }, // 1408936520
		{ &Z_Construct_UFunction_AMyPlayerController_FindPossesedPlayer, "FindPossesedPlayer" }, // 257389607
		{ &Z_Construct_UFunction_AMyPlayerController_PossessPlayer, "PossessPlayer" }, // 3312117461
		{ &Z_Construct_UFunction_AMyPlayerController_SendPlayerToKeep, "SendPlayerToKeep" }, // 2241711260
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyPlayerController.h" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_possessedCharacter_MetaData[] = {
		{ "Category", "MyPlayerController" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_possessedCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "possessedCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AMyPlayerController, possessedCharacter), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_possessedCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_possessedCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_possessedCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerController_Statics::ClassParams = {
		&AMyPlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMyPlayerController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerController, 4054135793);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerController(Z_Construct_UClass_AMyPlayerController, &AMyPlayerController::StaticClass, TEXT("/Script/PairProject"), TEXT("AMyPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
