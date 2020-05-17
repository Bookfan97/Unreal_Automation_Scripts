// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationScripts/AutomationScriptsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationScriptsGameModeBase() {}
// Cross Module References
	AUTOMATIONSCRIPTS_API UClass* Z_Construct_UClass_AAutomationScriptsGameModeBase_NoRegister();
	AUTOMATIONSCRIPTS_API UClass* Z_Construct_UClass_AAutomationScriptsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AutomationScripts();
// End Cross Module References
	void AAutomationScriptsGameModeBase::StaticRegisterNativesAAutomationScriptsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAutomationScriptsGameModeBase_NoRegister()
	{
		return AAutomationScriptsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAutomationScriptsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAutomationScriptsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationScripts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomationScriptsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AutomationScriptsGameModeBase.h" },
		{ "ModuleRelativePath", "AutomationScriptsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAutomationScriptsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutomationScriptsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAutomationScriptsGameModeBase_Statics::ClassParams = {
		&AAutomationScriptsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAutomationScriptsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomationScriptsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAutomationScriptsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAutomationScriptsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAutomationScriptsGameModeBase, 3057297513);
	template<> AUTOMATIONSCRIPTS_API UClass* StaticClass<AAutomationScriptsGameModeBase>()
	{
		return AAutomationScriptsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAutomationScriptsGameModeBase(Z_Construct_UClass_AAutomationScriptsGameModeBase, &AAutomationScriptsGameModeBase::StaticClass, TEXT("/Script/AutomationScripts"), TEXT("AAutomationScriptsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutomationScriptsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
