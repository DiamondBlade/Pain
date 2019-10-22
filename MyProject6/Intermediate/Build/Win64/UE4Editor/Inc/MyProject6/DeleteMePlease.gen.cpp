// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject6/DeleteMePlease.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeleteMePlease() {}
// Cross Module References
	MYPROJECT6_API UClass* Z_Construct_UClass_UDeleteMePlease_NoRegister();
	MYPROJECT6_API UClass* Z_Construct_UClass_UDeleteMePlease();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MyProject6();
// End Cross Module References
	void UDeleteMePlease::StaticRegisterNativesUDeleteMePlease()
	{
	}
	UClass* Z_Construct_UClass_UDeleteMePlease_NoRegister()
	{
		return UDeleteMePlease::StaticClass();
	}
	struct Z_Construct_UClass_UDeleteMePlease_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeleteMePlease_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject6,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeleteMePlease_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeleteMePlease.h" },
		{ "ModuleRelativePath", "DeleteMePlease.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeleteMePlease_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeleteMePlease>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeleteMePlease_Statics::ClassParams = {
		&UDeleteMePlease::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeleteMePlease_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDeleteMePlease_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeleteMePlease()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeleteMePlease_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeleteMePlease, 1192441804);
	template<> MYPROJECT6_API UClass* StaticClass<UDeleteMePlease>()
	{
		return UDeleteMePlease::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeleteMePlease(Z_Construct_UClass_UDeleteMePlease, &UDeleteMePlease::StaticClass, TEXT("/Script/MyProject6"), TEXT("UDeleteMePlease"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeleteMePlease);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
