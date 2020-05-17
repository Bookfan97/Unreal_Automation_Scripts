// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
#ifdef AUTOMATIONSCRIPTS_MyActorActionUtility_generated_h
#error "MyActorActionUtility.generated.h already included, missing '#pragma once' in MyActorActionUtility.h"
#endif
#define AUTOMATIONSCRIPTS_MyActorActionUtility_generated_h

#define AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_SPARSE_DATA
#define AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMaterial(Z_Param_NewMaterial); \
		P_NATIVE_END; \
	}


#define AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMaterial(Z_Param_NewMaterial); \
		P_NATIVE_END; \
	}


#define AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyActorActionUtility(); \
	friend struct Z_Construct_UClass_UMyActorActionUtility_Statics; \
public: \
	DECLARE_CLASS(UMyActorActionUtility, UActorActionUtility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomationScripts"), NO_API) \
	DECLARE_SERIALIZER(UMyActorActionUtility)


#define AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMyActorActionUtility(); \
	friend struct Z_Construct_UClass_UMyActorActionUtility_Statics; \
public: \
	DECLARE_CLASS(UMyActorActionUtility, UActorActionUtility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomationScripts"), NO_API) \
	DECLARE_SERIALIZER(UMyActorActionUtility)


#define AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyActorActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyActorActionUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyActorActionUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyActorActionUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyActorActionUtility(UMyActorActionUtility&&); \
	NO_API UMyActorActionUtility(const UMyActorActionUtility&); \
public:


#define AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyActorActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyActorActionUtility(UMyActorActionUtility&&); \
	NO_API UMyActorActionUtility(const UMyActorActionUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyActorActionUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyActorActionUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyActorActionUtility)


#define AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_PRIVATE_PROPERTY_OFFSET
#define AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_13_PROLOG
#define AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_PRIVATE_PROPERTY_OFFSET \
	AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_SPARSE_DATA \
	AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_RPC_WRAPPERS \
	AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_INCLASS \
	AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_PRIVATE_PROPERTY_OFFSET \
	AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_SPARSE_DATA \
	AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_INCLASS_NO_PURE_DECLS \
	AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMATIONSCRIPTS_API UClass* StaticClass<class UMyActorActionUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutomationScripts_Source_AutomationScripts_MyActorActionUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
