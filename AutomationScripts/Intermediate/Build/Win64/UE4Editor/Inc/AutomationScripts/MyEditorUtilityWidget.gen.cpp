// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationScripts/MyEditorUtilityWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEditorUtilityWidget() {}
// Cross Module References
	AUTOMATIONSCRIPTS_API UClass* Z_Construct_UClass_UMyEditorUtilityWidget_NoRegister();
	AUTOMATIONSCRIPTS_API UClass* Z_Construct_UClass_UMyEditorUtilityWidget();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_AutomationScripts();
	AUTOMATIONSCRIPTS_API UFunction* Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UMyEditorUtilityWidget::StaticRegisterNativesUMyEditorUtilityWidget()
	{
		UClass* Class = UMyEditorUtilityWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OrganizeWorldOutliner", &UMyEditorUtilityWidget::execOrganizeWorldOutliner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "MyEditorUtilityWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyEditorUtilityWidget, nullptr, "OrganizeWorldOutliner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyEditorUtilityWidget_NoRegister()
	{
		return UMyEditorUtilityWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyEditorUtilityWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FolderMap;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FolderMap_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyEditorUtilityWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationScripts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyEditorUtilityWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner, "OrganizeWorldOutliner" }, // 437744539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyEditorUtilityWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyEditorUtilityWidget.h" },
		{ "ModuleRelativePath", "MyEditorUtilityWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap_MetaData[] = {
		{ "Category", "OrganizeWorldOutline" },
		{ "ModuleRelativePath", "MyEditorUtilityWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap = { "FolderMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyEditorUtilityWidget, FolderMap), METADATA_PARAMS(Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap_Key_KeyProp = { "FolderMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap_ValueProp = { "FolderMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyEditorUtilityWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyEditorUtilityWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyEditorUtilityWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyEditorUtilityWidget_Statics::ClassParams = {
		&UMyEditorUtilityWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyEditorUtilityWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyEditorUtilityWidget_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyEditorUtilityWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyEditorUtilityWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyEditorUtilityWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyEditorUtilityWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyEditorUtilityWidget, 2697300298);
	template<> AUTOMATIONSCRIPTS_API UClass* StaticClass<UMyEditorUtilityWidget>()
	{
		return UMyEditorUtilityWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyEditorUtilityWidget(Z_Construct_UClass_UMyEditorUtilityWidget, &UMyEditorUtilityWidget::StaticClass, TEXT("/Script/AutomationScripts"), TEXT("UMyEditorUtilityWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyEditorUtilityWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
