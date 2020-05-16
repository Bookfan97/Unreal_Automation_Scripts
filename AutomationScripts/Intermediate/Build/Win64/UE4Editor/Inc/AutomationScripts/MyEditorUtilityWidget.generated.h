// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMATIONSCRIPTS_MyEditorUtilityWidget_generated_h
#error "MyEditorUtilityWidget.generated.h already included, missing '#pragma once' in MyEditorUtilityWidget.h"
#endif
#define AUTOMATIONSCRIPTS_MyEditorUtilityWidget_generated_h

#define AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_SPARSE_DATA
#define AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOrganizeWorldOutliner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OrganizeWorldOutliner(); \
		P_NATIVE_END; \
	}


#define AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOrganizeWorldOutliner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OrganizeWorldOutliner(); \
		P_NATIVE_END; \
	}


#define AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyEditorUtilityWidget(); \
	friend struct Z_Construct_UClass_UMyEditorUtilityWidget_Statics; \
public: \
	DECLARE_CLASS(UMyEditorUtilityWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomationScripts"), NO_API) \
	DECLARE_SERIALIZER(UMyEditorUtilityWidget)


#define AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMyEditorUtilityWidget(); \
	friend struct Z_Construct_UClass_UMyEditorUtilityWidget_Statics; \
public: \
	DECLARE_CLASS(UMyEditorUtilityWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomationScripts"), NO_API) \
	DECLARE_SERIALIZER(UMyEditorUtilityWidget)


#define AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyEditorUtilityWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyEditorUtilityWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyEditorUtilityWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyEditorUtilityWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyEditorUtilityWidget(UMyEditorUtilityWidget&&); \
	NO_API UMyEditorUtilityWidget(const UMyEditorUtilityWidget&); \
public:


#define AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyEditorUtilityWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyEditorUtilityWidget(UMyEditorUtilityWidget&&); \
	NO_API UMyEditorUtilityWidget(const UMyEditorUtilityWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyEditorUtilityWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyEditorUtilityWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyEditorUtilityWidget)


#define AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_PRIVATE_PROPERTY_OFFSET
#define AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_15_PROLOG
#define AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_SPARSE_DATA \
	AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_RPC_WRAPPERS \
	AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_INCLASS \
	AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_SPARSE_DATA \
	AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_INCLASS_NO_PURE_DECLS \
	AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMATIONSCRIPTS_API UClass* StaticClass<class UMyEditorUtilityWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutomationScripts_Source_AutomationScripts_MyEditorUtilityWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
