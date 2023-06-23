// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/ConstructorPiece.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorPiece() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UConstructorPiece_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UConstructorPiece();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UConstructorPiece::StaticRegisterNativesUConstructorPiece()
	{
	}
	UClass* Z_Construct_UClass_UConstructorPiece_NoRegister()
	{
		return UConstructorPiece::StaticClass();
	}
	struct Z_Construct_UClass_UConstructorPiece_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructorPiece_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructorPiece_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ConstructorPiece.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructorPiece_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IConstructorPiece>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConstructorPiece_Statics::ClassParams = {
		&UConstructorPiece::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UConstructorPiece_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructorPiece_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstructorPiece()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConstructorPiece_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConstructorPiece, 3711649458);
	template<> TETRISUSFX01_API UClass* StaticClass<UConstructorPiece>()
	{
		return UConstructorPiece::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConstructorPiece(Z_Construct_UClass_UConstructorPiece, &UConstructorPiece::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UConstructorPiece"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructorPiece);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
