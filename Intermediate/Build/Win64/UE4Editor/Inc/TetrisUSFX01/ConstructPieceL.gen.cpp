// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/ConstructPieceL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructPieceL() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructPieceL_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructPieceL();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AConstructPieceL::StaticRegisterNativesAConstructPieceL()
	{
	}
	UClass* Z_Construct_UClass_AConstructPieceL_NoRegister()
	{
		return AConstructPieceL::StaticClass();
	}
	struct Z_Construct_UClass_AConstructPieceL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstructPieceL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructPieceL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstructPieceL.h" },
		{ "ModuleRelativePath", "ConstructPieceL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructPieceL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructPieceL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructPieceL_Statics::ClassParams = {
		&AConstructPieceL::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AConstructPieceL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructPieceL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstructPieceL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstructPieceL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstructPieceL, 1532641179);
	template<> TETRISUSFX01_API UClass* StaticClass<AConstructPieceL>()
	{
		return AConstructPieceL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstructPieceL(Z_Construct_UClass_AConstructPieceL, &AConstructPieceL::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AConstructPieceL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructPieceL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
