// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/ControladorTetris.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControladorTetris() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AControladorTetris_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AControladorTetris();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AControladorTetris::StaticRegisterNativesAControladorTetris()
	{
	}
	UClass* Z_Construct_UClass_AControladorTetris_NoRegister()
	{
		return AControladorTetris::StaticClass();
	}
	struct Z_Construct_UClass_AControladorTetris_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControladorTetris_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControladorTetris_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ControladorTetris.h" },
		{ "ModuleRelativePath", "ControladorTetris.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControladorTetris_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControladorTetris>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControladorTetris_Statics::ClassParams = {
		&AControladorTetris::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AControladorTetris_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AControladorTetris_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControladorTetris()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControladorTetris_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControladorTetris, 2172194737);
	template<> TETRISUSFX01_API UClass* StaticClass<AControladorTetris>()
	{
		return AControladorTetris::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControladorTetris(Z_Construct_UClass_AControladorTetris, &AControladorTetris::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AControladorTetris"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControladorTetris);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
