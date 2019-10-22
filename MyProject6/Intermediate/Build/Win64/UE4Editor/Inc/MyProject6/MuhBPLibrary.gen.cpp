// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject6/MuhBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuhBPLibrary() {}
// Cross Module References
	MYPROJECT6_API UClass* Z_Construct_UClass_UMuhBPLibrary_NoRegister();
	MYPROJECT6_API UClass* Z_Construct_UClass_UMuhBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MyProject6();
	MYPROJECT6_API UFunction* Z_Construct_UFunction_UMuhBPLibrary_FlakShot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MYPROJECT6_API UFunction* Z_Construct_UFunction_UMuhBPLibrary_GetLoud();
	MYPROJECT6_API UFunction* Z_Construct_UFunction_UMuhBPLibrary_GetQuiet();
// End Cross Module References
	void UMuhBPLibrary::StaticRegisterNativesUMuhBPLibrary()
	{
		UClass* Class = UMuhBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlakShot", &UMuhBPLibrary::execFlakShot },
			{ "GetLoud", &UMuhBPLibrary::execGetLoud },
			{ "GetQuiet", &UMuhBPLibrary::execGetQuiet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics
	{
		struct MuhBPLibrary_eventFlakShot_Parms
		{
			UObject* RefObj;
			TSubclassOf<AActor>  Projectile;
			FVector Location;
			FRotator Rotation;
			int32 ShotsPerRow;
			int32 ShotsPerColumn;
			float ScatterH;
			float ScatterV;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScatterV;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScatterH;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShotsPerColumn;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShotsPerRow;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectile;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_ScatterV = { "ScatterV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventFlakShot_Parms, ScatterV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_ScatterH = { "ScatterH", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventFlakShot_Parms, ScatterH), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_ShotsPerColumn = { "ShotsPerColumn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventFlakShot_Parms, ShotsPerColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_ShotsPerRow = { "ShotsPerRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventFlakShot_Parms, ShotsPerRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventFlakShot_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventFlakShot_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventFlakShot_Parms, Projectile), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_RefObj = { "RefObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventFlakShot_Parms, RefObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_ScatterV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_ScatterH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_ShotsPerColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_ShotsPerRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::NewProp_RefObj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Muh BP Utilities" },
		{ "ModuleRelativePath", "MuhBPLibrary.h" },
		{ "WorldContext", "RefObj" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMuhBPLibrary, nullptr, "FlakShot", sizeof(MuhBPLibrary_eventFlakShot_Parms), Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMuhBPLibrary_FlakShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMuhBPLibrary_FlakShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics
	{
		struct MuhBPLibrary_eventGetLoud_Parms
		{
			FString MuhWords;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MuhWords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventGetLoud_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::NewProp_MuhWords = { "MuhWords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventGetLoud_Parms, MuhWords), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::NewProp_MuhWords,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MuhBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMuhBPLibrary, nullptr, "GetLoud", sizeof(MuhBPLibrary_eventGetLoud_Parms), Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMuhBPLibrary_GetLoud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMuhBPLibrary_GetLoud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics
	{
		struct MuhBPLibrary_eventGetQuiet_Parms
		{
			FString MuhWords;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MuhWords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventGetQuiet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::NewProp_MuhWords = { "MuhWords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuhBPLibrary_eventGetQuiet_Parms, MuhWords), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::NewProp_MuhWords,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MuhBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMuhBPLibrary, nullptr, "GetQuiet", sizeof(MuhBPLibrary_eventGetQuiet_Parms), Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMuhBPLibrary_GetQuiet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMuhBPLibrary_GetQuiet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMuhBPLibrary_NoRegister()
	{
		return UMuhBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMuhBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScatterV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScatterV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScatterH_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScatterH;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotsPerColumn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShotsPerColumn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotsPerRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShotsPerRow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMuhBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject6,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMuhBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMuhBPLibrary_FlakShot, "FlakShot" }, // 3607071466
		{ &Z_Construct_UFunction_UMuhBPLibrary_GetLoud, "GetLoud" }, // 3870180304
		{ &Z_Construct_UFunction_UMuhBPLibrary_GetQuiet, "GetQuiet" }, // 3998573126
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMuhBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuhBPLibrary.h" },
		{ "ModuleRelativePath", "MuhBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ScatterV_MetaData[] = {
		{ "Category", "MuhBPLibrary" },
		{ "ModuleRelativePath", "MuhBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ScatterV = { "ScatterV", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMuhBPLibrary, ScatterV), METADATA_PARAMS(Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ScatterV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ScatterV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ScatterH_MetaData[] = {
		{ "Category", "MuhBPLibrary" },
		{ "ModuleRelativePath", "MuhBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ScatterH = { "ScatterH", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMuhBPLibrary, ScatterH), METADATA_PARAMS(Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ScatterH_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ScatterH_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ShotsPerColumn_MetaData[] = {
		{ "Category", "MuhBPLibrary" },
		{ "ModuleRelativePath", "MuhBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ShotsPerColumn = { "ShotsPerColumn", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMuhBPLibrary, ShotsPerColumn), METADATA_PARAMS(Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ShotsPerColumn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ShotsPerColumn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ShotsPerRow_MetaData[] = {
		{ "Category", "MuhBPLibrary" },
		{ "ModuleRelativePath", "MuhBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ShotsPerRow = { "ShotsPerRow", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMuhBPLibrary, ShotsPerRow), METADATA_PARAMS(Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ShotsPerRow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ShotsPerRow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMuhBPLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ScatterV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ScatterH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ShotsPerColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMuhBPLibrary_Statics::NewProp_ShotsPerRow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMuhBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMuhBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMuhBPLibrary_Statics::ClassParams = {
		&UMuhBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMuhBPLibrary_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMuhBPLibrary_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMuhBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMuhBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMuhBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMuhBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMuhBPLibrary, 3225759616);
	template<> MYPROJECT6_API UClass* StaticClass<UMuhBPLibrary>()
	{
		return UMuhBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMuhBPLibrary(Z_Construct_UClass_UMuhBPLibrary, &UMuhBPLibrary::StaticClass, TEXT("/Script/MyProject6"), TEXT("UMuhBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMuhBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
