// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject5/MyProject5HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject5HUD() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_AMyProject5HUD_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_AMyProject5HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void AMyProject5HUD::StaticRegisterNativesAMyProject5HUD()
	{
	}
	UClass* Z_Construct_UClass_AMyProject5HUD_NoRegister()
	{
		return AMyProject5HUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyProject5HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProject5HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject5HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyProject5HUD.h" },
		{ "ModuleRelativePath", "MyProject5HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProject5HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProject5HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProject5HUD_Statics::ClassParams = {
		&AMyProject5HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyProject5HUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyProject5HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProject5HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProject5HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject5HUD, 3788663141);
	template<> MYPROJECT5_API UClass* StaticClass<AMyProject5HUD>()
	{
		return AMyProject5HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject5HUD(Z_Construct_UClass_AMyProject5HUD, &AMyProject5HUD::StaticClass, TEXT("/Script/MyProject5"), TEXT("AMyProject5HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject5HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
