// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYPROJECT4_MyProject4Projectile_generated_h
#error "MyProject4Projectile.generated.h already included, missing '#pragma once' in MyProject4Projectile.h"
#endif
#define MYPROJECT4_MyProject4Projectile_generated_h

#define MyProject4_Source_MyProject4_MyProject4Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MyProject4_Source_MyProject4_MyProject4Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MyProject4_Source_MyProject4_MyProject4Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject4Projectile(); \
	friend struct Z_Construct_UClass_AMyProject4Projectile_Statics; \
public: \
	DECLARE_CLASS(AMyProject4Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject4"), NO_API) \
	DECLARE_SERIALIZER(AMyProject4Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject4_Source_MyProject4_MyProject4Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject4Projectile(); \
	friend struct Z_Construct_UClass_AMyProject4Projectile_Statics; \
public: \
	DECLARE_CLASS(AMyProject4Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject4"), NO_API) \
	DECLARE_SERIALIZER(AMyProject4Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject4_Source_MyProject4_MyProject4Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject4Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject4Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject4Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject4Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject4Projectile(AMyProject4Projectile&&); \
	NO_API AMyProject4Projectile(const AMyProject4Projectile&); \
public:


#define MyProject4_Source_MyProject4_MyProject4Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject4Projectile(AMyProject4Projectile&&); \
	NO_API AMyProject4Projectile(const AMyProject4Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject4Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject4Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject4Projectile)


#define MyProject4_Source_MyProject4_MyProject4Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMyProject4Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMyProject4Projectile, ProjectileMovement); }


#define MyProject4_Source_MyProject4_MyProject4Projectile_h_9_PROLOG
#define MyProject4_Source_MyProject4_MyProject4Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Source_MyProject4_MyProject4Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Source_MyProject4_MyProject4Projectile_h_12_RPC_WRAPPERS \
	MyProject4_Source_MyProject4_MyProject4Projectile_h_12_INCLASS \
	MyProject4_Source_MyProject4_MyProject4Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject4_Source_MyProject4_MyProject4Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Source_MyProject4_MyProject4Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Source_MyProject4_MyProject4Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject4_Source_MyProject4_MyProject4Projectile_h_12_INCLASS_NO_PURE_DECLS \
	MyProject4_Source_MyProject4_MyProject4Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT4_API UClass* StaticClass<class AMyProject4Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject4_Source_MyProject4_MyProject4Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
