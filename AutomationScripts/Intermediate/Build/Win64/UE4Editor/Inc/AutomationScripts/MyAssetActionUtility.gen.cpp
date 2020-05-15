// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationScripts/MyAssetActionUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAssetActionUtility() {}
// Cross Module References
	AUTOMATIONSCRIPTS_API UClass* Z_Construct_UClass_UMyAssetActionUtility_NoRegister();
	AUTOMATIONSCRIPTS_API UClass* Z_Construct_UClass_UMyAssetActionUtility();
	BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility();
	UPackage* Z_Construct_UPackage__Script_AutomationScripts();
	AUTOMATIONSCRIPTS_API UFunction* Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ESearchCase();
// End Cross Module References
	void UMyAssetActionUtility::StaticRegisterNativesUMyAssetActionUtility()
	{
		UClass* Class = UMyAssetActionUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RenameSelectedAssets", &UMyAssetActionUtility::execRenameSelectedAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics
	{
		struct MyAssetActionUtility_eventRenameSelectedAssets_Parms
		{
			FString SearchPattern;
			FString ReplacePattern;
			TEnumAsByte<ESearchCase::Type> SearchCase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchCase;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplacePattern;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchPattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::NewProp_SearchCase = { "SearchCase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAssetActionUtility_eventRenameSelectedAssets_Parms, SearchCase), Z_Construct_UEnum_CoreUObject_ESearchCase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::NewProp_ReplacePattern = { "ReplacePattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAssetActionUtility_eventRenameSelectedAssets_Parms, ReplacePattern), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::NewProp_SearchPattern = { "SearchPattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAssetActionUtility_eventRenameSelectedAssets_Parms, SearchPattern), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::NewProp_SearchCase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::NewProp_ReplacePattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::NewProp_SearchPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "MyAssetActionUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAssetActionUtility, nullptr, "RenameSelectedAssets", nullptr, nullptr, sizeof(MyAssetActionUtility_eventRenameSelectedAssets_Parms), Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyAssetActionUtility_NoRegister()
	{
		return UMyAssetActionUtility::StaticClass();
	}
	struct Z_Construct_UClass_UMyAssetActionUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAssetActionUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetActionUtility,
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationScripts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyAssetActionUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets, "RenameSelectedAssets" }, // 2903259622
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAssetActionUtility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MyAssetActionUtility.h" },
		{ "ModuleRelativePath", "MyAssetActionUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAssetActionUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAssetActionUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyAssetActionUtility_Statics::ClassParams = {
		&UMyAssetActionUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyAssetActionUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAssetActionUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyAssetActionUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyAssetActionUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyAssetActionUtility, 1499733958);
	template<> AUTOMATIONSCRIPTS_API UClass* StaticClass<UMyAssetActionUtility>()
	{
		return UMyAssetActionUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyAssetActionUtility(Z_Construct_UClass_UMyAssetActionUtility, &UMyAssetActionUtility::StaticClass, TEXT("/Script/AutomationScripts"), TEXT("UMyAssetActionUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAssetActionUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
