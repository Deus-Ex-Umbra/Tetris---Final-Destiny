// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BlockMorado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockMorado() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockMorado_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockMorado();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlock();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ABlockMorado::StaticRegisterNativesABlockMorado()
	{
	}
	UClass* Z_Construct_UClass_ABlockMorado_NoRegister()
	{
		return ABlockMorado::StaticClass();
	}
	struct Z_Construct_UClass_ABlockMorado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockMorado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlock,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockMorado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlockMorado.h" },
		{ "ModuleRelativePath", "BlockMorado.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockMorado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockMorado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockMorado_Statics::ClassParams = {
		&ABlockMorado::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABlockMorado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockMorado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockMorado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockMorado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockMorado, 469702302);
	template<> TETRISUSFX01_API UClass* StaticClass<ABlockMorado>()
	{
		return ABlockMorado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockMorado(Z_Construct_UClass_ABlockMorado, &ABlockMorado::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABlockMorado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockMorado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
