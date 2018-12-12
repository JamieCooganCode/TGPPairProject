// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PairProject/Public/BaseAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAttack() {}
// Cross Module References
	PAIRPROJECT_API UClass* Z_Construct_UClass_UBaseAttack_NoRegister();
	PAIRPROJECT_API UClass* Z_Construct_UClass_UBaseAttack();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_PairProject();
	PAIRPROJECT_API UFunction* Z_Construct_UFunction_UBaseAttack_OverlapTriggered();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UBaseAttack::StaticRegisterNativesUBaseAttack()
	{
		UClass* Class = UBaseAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverlapTriggered", &UBaseAttack::execOverlapTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics
	{
		struct BaseAttack_eventOverlapTriggered_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(BaseAttack_eventOverlapTriggered_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseAttack_eventOverlapTriggered_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BaseAttack_eventOverlapTriggered_Parms), &Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseAttack_eventOverlapTriggered_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BaseAttack_eventOverlapTriggered_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseAttack_eventOverlapTriggered_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BaseAttack_eventOverlapTriggered_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttack, "OverlapTriggered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420400, sizeof(BaseAttack_eventOverlapTriggered_Parms), Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseAttack_OverlapTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseAttack_OverlapTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseAttack_NoRegister()
	{
		return UBaseAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBaseAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeExisted_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeExisted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__attackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__attackDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PairProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAttack_OverlapTriggered, "OverlapTriggered" }, // 712137396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "BaseAttack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttack_Statics::NewProp_timeExisted_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/BaseAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAttack_Statics::NewProp_timeExisted = { UE4CodeGen_Private::EPropertyClass::Float, "timeExisted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBaseAttack, timeExisted), METADATA_PARAMS(Z_Construct_UClass_UBaseAttack_Statics::NewProp_timeExisted_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseAttack_Statics::NewProp_timeExisted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttack_Statics::NewProp__attackDamage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/BaseAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAttack_Statics::NewProp__attackDamage = { UE4CodeGen_Private::EPropertyClass::Float, "_attackDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBaseAttack, _attackDamage), METADATA_PARAMS(Z_Construct_UClass_UBaseAttack_Statics::NewProp__attackDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseAttack_Statics::NewProp__attackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttack_Statics::NewProp__attackDuration_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/BaseAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAttack_Statics::NewProp__attackDuration = { UE4CodeGen_Private::EPropertyClass::Float, "_attackDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBaseAttack, _attackDuration), METADATA_PARAMS(Z_Construct_UClass_UBaseAttack_Statics::NewProp__attackDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseAttack_Statics::NewProp__attackDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttack_Statics::NewProp_timeExisted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttack_Statics::NewProp__attackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttack_Statics::NewProp__attackDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttack_Statics::ClassParams = {
		&UBaseAttack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBaseAttack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBaseAttack_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBaseAttack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBaseAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseAttack, 2268448431);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseAttack(Z_Construct_UClass_UBaseAttack, &UBaseAttack::StaticClass, TEXT("/Script/PairProject"), TEXT("UBaseAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
