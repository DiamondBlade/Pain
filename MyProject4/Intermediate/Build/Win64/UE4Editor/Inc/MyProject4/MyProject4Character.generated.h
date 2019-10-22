// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT4_MyProject4Character_generated_h
#error "MyProject4Character.generated.h already included, missing '#pragma once' in MyProject4Character.h"
#endif
#define MYPROJECT4_MyProject4Character_generated_h

#define MyProject4_Source_MyProject4_MyProject4Character_h_14_RPC_WRAPPERS
#define MyProject4_Source_MyProject4_MyProject4Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject4_Source_MyProject4_MyProject4Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject4Character(); \
	friend struct Z_Construct_UClass_AMyProject4Character_Statics; \
public: \
	DECLARE_CLASS(AMyProject4Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject4"), NO_API) \
	DECLARE_SERIALIZER(AMyProject4Character)


#define MyProject4_Source_MyProject4_MyProject4Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject4Character(); \
	friend struct Z_Construct_UClass_AMyProject4Character_Statics; \
public: \
	DECLARE_CLASS(AMyProject4Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject4"), NO_API) \
	DECLARE_SERIALIZER(AMyProject4Character)


#define MyProject4_Source_MyProject4_MyProject4Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject4Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject4Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject4Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject4Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject4Character(AMyProject4Character&&); \
	NO_API AMyProject4Character(const AMyProject4Character&); \
public:


#define MyProject4_Source_MyProject4_MyProject4Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject4Character(AMyProject4Character&&); \
	NO_API AMyProject4Character(const AMyProject4Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject4Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject4Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject4Character)


#define MyProject4_Source_MyProject4_MyProject4Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMyProject4Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMyProject4Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMyProject4Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMyProject4Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMyProject4Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMyProject4Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMyProject4Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMyProject4Character, L_MotionController); }


#define MyProject4_Source_MyProject4_MyProject4Character_h_11_PROLOG
#define MyProject4_Source_MyProject4_MyProject4Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Source_MyProject4_MyProject4Character_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Source_MyProject4_MyProject4Character_h_14_RPC_WRAPPERS \
	MyProject4_Source_MyProject4_MyProject4Character_h_14_INCLASS \
	MyProject4_Source_MyProject4_MyProject4Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject4_Source_MyProject4_MyProject4Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Source_MyProject4_MyProject4Character_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Source_MyProject4_MyProject4Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject4_Source_MyProject4_MyProject4Character_h_14_INCLASS_NO_PURE_DECLS \
	MyProject4_Source_MyProject4_MyProject4Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT4_API UClass* StaticClass<class AMyProject4Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject4_Source_MyProject4_MyProject4Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
