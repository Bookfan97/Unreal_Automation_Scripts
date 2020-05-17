// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationScripts/MyActorActionUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorActionUtility() {}
// Cross Module References
	AUTOMATIONSCRIPTS_API UClass* Z_Construct_UClass_UMyActorActionUtility_NoRegister();
	AUTOMATIONSCRIPTS_API UClass* Z_Construct_UClass_UMyActorActionUtility();
	BLUTILITY_API UClass* Z_Construct_UClass_UActorActionUtility();
	UPackage* Z_Construct_UPackage__Script_AutomationScripts();
	AUTOMATIONSCRIPTS_API UFunction* Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UMyActorActionUtility::StaticRegisterNativesUMyActorActionUtility()
	{
		UClass* Class = UMyActorActionUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMaterial", &UMyActorActionUtility::execChangeMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial_Statics
	{
		struct MyActorActionUtility_eventChangeMaterial_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActorActionUtility_eventChangeMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "MyActorActionUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyActorActionUtility, nullptr, "ChangeMaterial", nullptr, nullptr, sizeof(MyActorActionUtility_eventChangeMaterial_Parms), Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyActorActionUtility_NoRegister()
	{
		return UMyActorActionUtility::StaticClass();
	}
	struct Z_Construct_UClass_UMyActorActionUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyActorActionUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorActionUtility,
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationScripts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyActorActionUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyActorActionUtility_ChangeMaterial, "ChangeMaterial" }, // 2403783154
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyActorActionUtility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MyActorActionUtility.h" },
		{ "ModuleRelativePath", "MyActorActionUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyActorActionUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyActorActionUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyActorActionUtility_Statics::ClassParams = {
		&UMyActorActionUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyActorActionUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorActionUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyActorActionUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyActorActionUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyActorActionUtility, 122107783);
	template<> AUTOMATIONSCRIPTS_API UClass* StaticClass<UMyActorActionUtility>()
	{
		return UMyActorActionUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyActorActionUtility(Z_Construct_UClass_UMyActorActionUtility, &UMyActorActionUtility::StaticClass, TEXT("/Script/AutomationScripts"), TEXT("UMyActorActionUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyActorActionUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
