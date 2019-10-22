// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT5_MyProject5Character_generated_h
#error "MyProject5Character.generated.h already included, missing '#pragma once' in MyProject5Character.h"
#endif
#define MYPROJECT5_MyProject5Character_generated_h

#define MyProject5_Source_MyProject5_MyProject5Character_h_14_RPC_WRAPPERS
#define MyProject5_Source_MyProject5_MyProject5Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject5_Source_MyProject5_MyProject5Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject5Character(); \
	friend struct Z_Construct_UClass_AMyProject5Character_Statics; \
public: \
	DECLARE_CLASS(AMyProject5Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject5"), NO_API) \
	DECLARE_SERIALIZER(AMyProject5Character)


#define MyProject5_Source_MyProject5_MyProject5Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject5Character(); \
	friend struct Z_Construct_UClass_AMyProject5Character_Statics; \
public: \
	DECLARE_CLASS(AMyProject5Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject5"), NO_API) \
	DECLARE_SERIALIZER(AMyProject5Character)


#define MyProject5_Source_MyProject5_MyProject5Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject5Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject5Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject5Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject5Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject5Character(AMyProject5Character&&); \
	NO_API AMyProject5Character(const AMyProject5Character&); \
public:


#define MyProject5_Source_MyProject5_MyProject5Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject5Character(AMyProject5Character&&); \
	NO_API AMyProject5Character(const AMyProject5Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject5Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject5Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject5Character)


#define MyProject5_Source_MyProject5_MyProject5Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMyProject5Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMyProject5Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMyProject5Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMyProject5Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMyProject5Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMyProject5Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMyProject5Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMyProject5Character, L_MotionController); }


#define MyProject5_Source_MyProject5_MyProject5Character_h_11_PROLOG
#define MyProject5_Source_MyProject5_MyProject5Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject5_Source_MyProject5_MyProject5Character_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject5_Source_MyProject5_MyProject5Character_h_14_RPC_WRAPPERS \
	MyProject5_Source_MyProject5_MyProject5Character_h_14_INCLASS \
	MyProject5_Source_MyProject5_MyProject5Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject5_Source_MyProject5_MyProject5Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject5_Source_MyProject5_MyProject5Character_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject5_Source_MyProject5_MyProject5Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject5_Source_MyProject5_MyProject5Character_h_14_INCLASS_NO_PURE_DECLS \
	MyProject5_Source_MyProject5_MyProject5Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT5_API UClass* StaticClass<class AMyProject5Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject5_Source_MyProject5_MyProject5Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
