// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMATIONSCRIPTS_MyAssetActionUtility_generated_h
#error "MyAssetActionUtility.generated.h already included, missing '#pragma once' in MyAssetActionUtility.h"
#endif
#define AUTOMATIONSCRIPTS_MyAssetActionUtility_generated_h

#define AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_SPARSE_DATA
#define AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDuplicateAssets) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_NumberOfDuplicates); \
		P_GET_UBOOL(Z_Param_bSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DuplicateAssets(Z_Param_NumberOfDuplicates,Z_Param_bSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanupFolder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ParentFolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanupFolder(Z_Param_ParentFolder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPrefixes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPrefixes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckPowerOfTwo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckPowerOfTwo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameSelectedAssets) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SearchPattern); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplacePattern); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameSelectedAssets(Z_Param_SearchPattern,Z_Param_ReplacePattern,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	}


#define AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDuplicateAssets) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_NumberOfDuplicates); \
		P_GET_UBOOL(Z_Param_bSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DuplicateAssets(Z_Param_NumberOfDuplicates,Z_Param_bSave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanupFolder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ParentFolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanupFolder(Z_Param_ParentFolder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPrefixes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPrefixes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckPowerOfTwo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckPowerOfTwo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameSelectedAssets) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SearchPattern); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplacePattern); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameSelectedAssets(Z_Param_SearchPattern,Z_Param_ReplacePattern,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	}


#define AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAssetActionUtility(); \
	friend struct Z_Construct_UClass_UMyAssetActionUtility_Statics; \
public: \
	DECLARE_CLASS(UMyAssetActionUtility, UAssetActionUtility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomationScripts"), NO_API) \
	DECLARE_SERIALIZER(UMyAssetActionUtility)


#define AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMyAssetActionUtility(); \
	friend struct Z_Construct_UClass_UMyAssetActionUtility_Statics; \
public: \
	DECLARE_CLASS(UMyAssetActionUtility, UAssetActionUtility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomationScripts"), NO_API) \
	DECLARE_SERIALIZER(UMyAssetActionUtility)


#define AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAssetActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAssetActionUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAssetActionUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAssetActionUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAssetActionUtility(UMyAssetActionUtility&&); \
	NO_API UMyAssetActionUtility(const UMyAssetActionUtility&); \
public:


#define AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAssetActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAssetActionUtility(UMyAssetActionUtility&&); \
	NO_API UMyAssetActionUtility(const UMyAssetActionUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAssetActionUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAssetActionUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAssetActionUtility)


#define AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_PRIVATE_PROPERTY_OFFSET
#define AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_21_PROLOG
#define AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_PRIVATE_PROPERTY_OFFSET \
	AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_SPARSE_DATA \
	AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_RPC_WRAPPERS \
	AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_INCLASS \
	AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_PRIVATE_PROPERTY_OFFSET \
	AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_SPARSE_DATA \
	AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_INCLASS_NO_PURE_DECLS \
	AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMATIONSCRIPTS_API UClass* StaticClass<class UMyAssetActionUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutomationScripts_Source_AutomationScripts_MyAssetActionUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
