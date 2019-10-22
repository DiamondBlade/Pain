// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject4/MyProject4GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject4GameMode() {}
// Cross Module References
	MYPROJECT4_API UClass* Z_Construct_UClass_AMyProject4GameMode_NoRegister();
	MYPROJECT4_API UClass* Z_Construct_UClass_AMyProject4GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProject4();
// End Cross Module References
	void AMyProject4GameMode::StaticRegisterNativesAMyProject4GameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyProject4GameMode_NoRegister()
	{
		return AMyProject4GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyProject4GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProject4GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject4GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyProject4GameMode.h" },
		{ "ModuleRelativePath", "MyProject4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProject4GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProject4GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProject4GameMode_Statics::ClassParams = {
		&AMyProject4GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AMyProject4GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyProject4GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProject4GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProject4GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject4GameMode, 3607130044);
	template<> MYPROJECT4_API UClass* StaticClass<AMyProject4GameMode>()
	{
		return AMyProject4GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject4GameMode(Z_Construct_UClass_AMyProject4GameMode, &AMyProject4GameMode::StaticClass, TEXT("/Script/MyProject4"), TEXT("AMyProject4GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject4GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
