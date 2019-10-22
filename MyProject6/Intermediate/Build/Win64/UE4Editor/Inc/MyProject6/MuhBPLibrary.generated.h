// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
struct FVector;
struct FRotator;
#ifdef MYPROJECT6_MuhBPLibrary_generated_h
#error "MuhBPLibrary.generated.h already included, missing '#pragma once' in MuhBPLibrary.h"
#endif
#define MYPROJECT6_MuhBPLibrary_generated_h

#define MyProject6_Source_MyProject6_MuhBPLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlakShot) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_RefObj); \
		P_GET_OBJECT(UClass,Z_Param_Projectile); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ShotsPerRow); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ShotsPerColumn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScatterH); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScatterV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMuhBPLibrary::FlakShot(Z_Param_RefObj,Z_Param_Projectile,Z_Param_Location,Z_Param_Rotation,Z_Param_ShotsPerRow,Z_Param_ShotsPerColumn,Z_Param_ScatterH,Z_Param_ScatterV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQuiet) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MuhWords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMuhBPLibrary::GetQuiet(Z_Param_MuhWords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoud) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MuhWords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMuhBPLibrary::GetLoud(Z_Param_MuhWords); \
		P_NATIVE_END; \
	}


#define MyProject6_Source_MyProject6_MuhBPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlakShot) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_RefObj); \
		P_GET_OBJECT(UClass,Z_Param_Projectile); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ShotsPerRow); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ShotsPerColumn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScatterH); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScatterV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMuhBPLibrary::FlakShot(Z_Param_RefObj,Z_Param_Projectile,Z_Param_Location,Z_Param_Rotation,Z_Param_ShotsPerRow,Z_Param_ShotsPerColumn,Z_Param_ScatterH,Z_Param_ScatterV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQuiet) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MuhWords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMuhBPLibrary::GetQuiet(Z_Param_MuhWords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoud) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MuhWords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMuhBPLibrary::GetLoud(Z_Param_MuhWords); \
		P_NATIVE_END; \
	}


#define MyProject6_Source_MyProject6_MuhBPLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMuhBPLibrary(); \
	friend struct Z_Construct_UClass_UMuhBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMuhBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject6"), NO_API) \
	DECLARE_SERIALIZER(UMuhBPLibrary)


#define MyProject6_Source_MyProject6_MuhBPLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMuhBPLibrary(); \
	friend struct Z_Construct_UClass_UMuhBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMuhBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject6"), NO_API) \
	DECLARE_SERIALIZER(UMuhBPLibrary)


#define MyProject6_Source_MyProject6_MuhBPLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMuhBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMuhBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMuhBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMuhBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMuhBPLibrary(UMuhBPLibrary&&); \
	NO_API UMuhBPLibrary(const UMuhBPLibrary&); \
public:


#define MyProject6_Source_MyProject6_MuhBPLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMuhBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMuhBPLibrary(UMuhBPLibrary&&); \
	NO_API UMuhBPLibrary(const UMuhBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMuhBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMuhBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMuhBPLibrary)


#define MyProject6_Source_MyProject6_MuhBPLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShotsPerRow() { return STRUCT_OFFSET(UMuhBPLibrary, ShotsPerRow); } \
	FORCEINLINE static uint32 __PPO__ShotsPerColumn() { return STRUCT_OFFSET(UMuhBPLibrary, ShotsPerColumn); } \
	FORCEINLINE static uint32 __PPO__ScatterH() { return STRUCT_OFFSET(UMuhBPLibrary, ScatterH); } \
	FORCEINLINE static uint32 __PPO__ScatterV() { return STRUCT_OFFSET(UMuhBPLibrary, ScatterV); }


#define MyProject6_Source_MyProject6_MuhBPLibrary_h_12_PROLOG
#define MyProject6_Source_MyProject6_MuhBPLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject6_Source_MyProject6_MuhBPLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject6_Source_MyProject6_MuhBPLibrary_h_15_RPC_WRAPPERS \
	MyProject6_Source_MyProject6_MuhBPLibrary_h_15_INCLASS \
	MyProject6_Source_MyProject6_MuhBPLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject6_Source_MyProject6_MuhBPLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject6_Source_MyProject6_MuhBPLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject6_Source_MyProject6_MuhBPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject6_Source_MyProject6_MuhBPLibrary_h_15_INCLASS_NO_PURE_DECLS \
	MyProject6_Source_MyProject6_MuhBPLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT6_API UClass* StaticClass<class UMuhBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject6_Source_MyProject6_MuhBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
