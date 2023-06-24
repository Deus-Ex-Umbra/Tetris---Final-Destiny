// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/ConstructPieceUnique.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructPieceUnique() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructPieceUnique_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructPieceUnique();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UConstructorPiece_NoRegister();
// End Cross Module References
	void AConstructPieceUnique::StaticRegisterNativesAConstructPieceUnique()
	{
	}
	UClass* Z_Construct_UClass_AConstructPieceUnique_NoRegister()
	{
		return AConstructPieceUnique::StaticClass();
	}
	struct Z_Construct_UClass_AConstructPieceUnique_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstructPieceUnique_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructPieceUnique_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstructPieceUnique.h" },
		{ "ModuleRelativePath", "ConstructPieceUnique.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConstructPieceUnique_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConstructorPiece_NoRegister, (int32)VTABLE_OFFSET(AConstructPieceUnique, IConstructorPiece), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructPieceUnique_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructPieceUnique>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructPieceUnique_Statics::ClassParams = {
		&AConstructPieceUnique::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConstructPieceUnique_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructPieceUnique_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstructPieceUnique()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstructPieceUnique_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstructPieceUnique, 2307433945);
	template<> TETRISUSFX01_API UClass* StaticClass<AConstructPieceUnique>()
	{
		return AConstructPieceUnique::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstructPieceUnique(Z_Construct_UClass_AConstructPieceUnique, &AConstructPieceUnique::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AConstructPieceUnique"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructPieceUnique);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
