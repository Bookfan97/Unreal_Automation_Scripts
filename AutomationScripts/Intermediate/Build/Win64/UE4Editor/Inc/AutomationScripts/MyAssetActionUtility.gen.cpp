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
	AUTOMATIONSCRIPTS_API UFunction* Z_Construct_UFunction_UMyAssetActionUtility_AddPrefixes();
	AUTOMATIONSCRIPTS_API UFunction* Z_Construct_UFunction_UMyAssetActionUtility_CheckPowerOfTwo();
	AUTOMATIONSCRIPTS_API UFunction* Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder();
	AUTOMATIONSCRIPTS_API UFunction* Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets();
	AUTOMATIONSCRIPTS_API UFunction* Z_Construct_UFunction_UMyAssetActionUtility_RenameSelectedAssets();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ESearchCase();
// End Cross Module References
	void UMyAssetActionUtility::StaticRegisterNativesUMyAssetActionUtility()
	{
		UClass* Class = UMyAssetActionUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPrefixes", &UMyAssetActionUtility::execAddPrefixes },
			{ "CheckPowerOfTwo", &UMyAssetActionUtility::execCheckPowerOfTwo },
			{ "CleanupFolder", &UMyAssetActionUtility::execCleanupFolder },
			{ "DuplicateAssets", &UMyAssetActionUtility::execDuplicateAssets },
			{ "RenameSelectedAssets", &UMyAssetActionUtility::execRenameSelectedAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyAssetActionUtility_AddPrefixes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAssetActionUtility_AddPrefixes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "MyAssetActionUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAssetActionUtility_AddPrefixes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAssetActionUtility, nullptr, "AddPrefixes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyAssetActionUtility_AddPrefixes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetActionUtility_AddPrefixes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyAssetActionUtility_AddPrefixes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyAssetActionUtility_AddPrefixes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAssetActionUtility_CheckPowerOfTwo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAssetActionUtility_CheckPowerOfTwo_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "MyAssetActionUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAssetActionUtility_CheckPowerOfTwo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAssetActionUtility, nullptr, "CheckPowerOfTwo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyAssetActionUtility_CheckPowerOfTwo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetActionUtility_CheckPowerOfTwo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyAssetActionUtility_CheckPowerOfTwo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyAssetActionUtility_CheckPowerOfTwo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder_Statics
	{
		struct MyAssetActionUtility_eventCleanupFolder_Parms
		{
			FString ParentFolder;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParentFolder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder_Statics::NewProp_ParentFolder = { "ParentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAssetActionUtility_eventCleanupFolder_Parms, ParentFolder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder_Statics::NewProp_ParentFolder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "MyAssetActionUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAssetActionUtility, nullptr, "CleanupFolder", nullptr, nullptr, sizeof(MyAssetActionUtility_eventCleanupFolder_Parms), Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics
	{
		struct MyAssetActionUtility_eventDuplicateAssets_Parms
		{
			uint32 NumberOfDuplicates;
			bool bSave;
		};
		static void NewProp_bSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSave;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumberOfDuplicates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::NewProp_bSave_SetBit(void* Obj)
	{
		((MyAssetActionUtility_eventDuplicateAssets_Parms*)Obj)->bSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyAssetActionUtility_eventDuplicateAssets_Parms), &Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::NewProp_NumberOfDuplicates = { "NumberOfDuplicates", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAssetActionUtility_eventDuplicateAssets_Parms, NumberOfDuplicates), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::NewProp_bSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::NewProp_NumberOfDuplicates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "MyAssetActionUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAssetActionUtility, nullptr, "DuplicateAssets", nullptr, nullptr, sizeof(MyAssetActionUtility_eventDuplicateAssets_Parms), Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ &Z_Construct_UFunction_UMyAssetActionUtility_AddPrefixes, "AddPrefixes" }, // 114933757
		{ &Z_Construct_UFunction_UMyAssetActionUtility_CheckPowerOfTwo, "CheckPowerOfTwo" }, // 2725837170
		{ &Z_Construct_UFunction_UMyAssetActionUtility_CleanupFolder, "CleanupFolder" }, // 2543757703
		{ &Z_Construct_UFunction_UMyAssetActionUtility_DuplicateAssets, "DuplicateAssets" }, // 1807792265
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
	IMPLEMENT_CLASS(UMyAssetActionUtility, 2798535977);
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
