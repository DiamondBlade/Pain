// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject4/CPP_Osc_Plat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Osc_Plat() {}
// Cross Module References
	MYPROJECT4_API UClass* Z_Construct_UClass_ACPP_Osc_Plat_NoRegister();
	MYPROJECT4_API UClass* Z_Construct_UClass_ACPP_Osc_Plat();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject4();
// End Cross Module References
	void ACPP_Osc_Plat::StaticRegisterNativesACPP_Osc_Plat()
	{
	}
	UClass* Z_Construct_UClass_ACPP_Osc_Plat_NoRegister()
	{
		return ACPP_Osc_Plat::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Osc_Plat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Osc_Plat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Osc_Plat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Osc_Plat.h" },
		{ "ModuleRelativePath", "CPP_Osc_Plat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Osc_Plat_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "CPP_Osc_Plat" },
		{ "ModuleRelativePath", "CPP_Osc_Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Osc_Plat_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Osc_Plat, Amplitude), METADATA_PARAMS(Z_Construct_UClass_ACPP_Osc_Plat_Statics::NewProp_Amplitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACPP_Osc_Plat_Statics::NewProp_Amplitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Osc_Plat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Osc_Plat_Statics::NewProp_Amplitude,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Osc_Plat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Osc_Plat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Osc_Plat_Statics::ClassParams = {
		&ACPP_Osc_Plat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_Osc_Plat_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACPP_Osc_Plat_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Osc_Plat_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACPP_Osc_Plat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Osc_Plat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_Osc_Plat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_Osc_Plat, 1594660355);
	template<> MYPROJECT4_API UClass* StaticClass<ACPP_Osc_Plat>()
	{
		return ACPP_Osc_Plat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_Osc_Plat(Z_Construct_UClass_ACPP_Osc_Plat, &ACPP_Osc_Plat::StaticClass, TEXT("/Script/MyProject4"), TEXT("ACPP_Osc_Plat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Osc_Plat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
