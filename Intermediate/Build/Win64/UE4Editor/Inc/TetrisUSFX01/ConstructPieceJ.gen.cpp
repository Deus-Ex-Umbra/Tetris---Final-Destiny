// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/ConstructPieceJ.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructPieceJ() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructPieceJ_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructPieceJ();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UConstructorPiece_NoRegister();
// End Cross Module References
	void AConstructPieceJ::StaticRegisterNativesAConstructPieceJ()
	{
	}
	UClass* Z_Construct_UClass_AConstructPieceJ_NoRegister()
	{
		return AConstructPieceJ::StaticClass();
	}
	struct Z_Construct_UClass_AConstructPieceJ_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstructPieceJ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructPieceJ_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstructPieceJ.h" },
		{ "ModuleRelativePath", "ConstructPieceJ.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConstructPieceJ_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConstructorPiece_NoRegister, (int32)VTABLE_OFFSET(AConstructPieceJ, IConstructorPiece), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructPieceJ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructPieceJ>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructPieceJ_Statics::ClassParams = {
		&AConstructPieceJ::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AConstructPieceJ_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructPieceJ_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstructPieceJ()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstructPieceJ_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstructPieceJ, 2294202811);
	template<> TETRISUSFX01_API UClass* StaticClass<AConstructPieceJ>()
	{
		return AConstructPieceJ::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstructPieceJ(Z_Construct_UClass_AConstructPieceJ, &AConstructPieceJ::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AConstructPieceJ"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructPieceJ);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
