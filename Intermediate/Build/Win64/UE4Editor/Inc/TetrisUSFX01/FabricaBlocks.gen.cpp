// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/FabricaBlocks.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBlocks() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFabricaBlocks_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFabricaBlocks();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AFabricaBlocks::StaticRegisterNativesAFabricaBlocks()
	{
	}
	UClass* Z_Construct_UClass_AFabricaBlocks_NoRegister()
	{
		return AFabricaBlocks::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaBlocks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaBlocks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaBlocks_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaBlocks.h" },
		{ "ModuleRelativePath", "FabricaBlocks.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaBlocks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBlocks>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBlocks_Statics::ClassParams = {
		&AFabricaBlocks::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaBlocks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBlocks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaBlocks()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaBlocks_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaBlocks, 3178969171);
	template<> TETRISUSFX01_API UClass* StaticClass<AFabricaBlocks>()
	{
		return AFabricaBlocks::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaBlocks(Z_Construct_UClass_AFabricaBlocks, &AFabricaBlocks::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AFabricaBlocks"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBlocks);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
