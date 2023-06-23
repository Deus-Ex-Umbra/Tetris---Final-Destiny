// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/ConstructPieceT.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructPieceT() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructPieceT_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructPieceT();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AConstructPieceT::StaticRegisterNativesAConstructPieceT()
	{
	}
	UClass* Z_Construct_UClass_AConstructPieceT_NoRegister()
	{
		return AConstructPieceT::StaticClass();
	}
	struct Z_Construct_UClass_AConstructPieceT_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstructPieceT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructPieceT_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstructPieceT.h" },
		{ "ModuleRelativePath", "ConstructPieceT.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructPieceT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructPieceT>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructPieceT_Statics::ClassParams = {
		&AConstructPieceT::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AConstructPieceT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructPieceT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstructPieceT()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstructPieceT_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstructPieceT, 681167811);
	template<> TETRISUSFX01_API UClass* StaticClass<AConstructPieceT>()
	{
		return AConstructPieceT::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstructPieceT(Z_Construct_UClass_AConstructPieceT, &AConstructPieceT::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AConstructPieceT"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructPieceT);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
