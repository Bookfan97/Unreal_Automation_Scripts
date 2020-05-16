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
	AUTOMATIONSCRIPTS_API UFunction* Z_Construct_UFunction_UMyEditorUtilityWidget_Test();
// End Cross Module References
	void UMyEditorUtilityWidget::StaticRegisterNativesUMyEditorUtilityWidget()
	{
		UClass* Class = UMyEditorUtilityWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Test", &UMyEditorUtilityWidget::execTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyEditorUtilityWidget_Test_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyEditorUtilityWidget_Test_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "MyEditorUtilityWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyEditorUtilityWidget_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyEditorUtilityWidget, nullptr, "Test", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyEditorUtilityWidget_Test_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyEditorUtilityWidget_Test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyEditorUtilityWidget_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyEditorUtilityWidget_Test_Statics::FuncParams);
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyEditorUtilityWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationScripts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyEditorUtilityWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyEditorUtilityWidget_Test, "Test" }, // 1420202822
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyEditorUtilityWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyEditorUtilityWidget.h" },
		{ "ModuleRelativePath", "MyEditorUtilityWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyEditorUtilityWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyEditorUtilityWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyEditorUtilityWidget_Statics::ClassParams = {
		&UMyEditorUtilityWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
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
	IMPLEMENT_CLASS(UMyEditorUtilityWidget, 3035032973);
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
