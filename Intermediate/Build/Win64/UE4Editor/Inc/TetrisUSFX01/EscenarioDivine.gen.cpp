// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EscenarioDivine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenarioDivine() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioDivine_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioDivine();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AEscenarioDivine::StaticRegisterNativesAEscenarioDivine()
	{
	}
	UClass* Z_Construct_UClass_AEscenarioDivine_NoRegister()
	{
		return AEscenarioDivine::StaticClass();
	}
	struct Z_Construct_UClass_AEscenarioDivine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscenarioDivine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioDivine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscenarioDivine.h" },
		{ "ModuleRelativePath", "EscenarioDivine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenarioDivine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenarioDivine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenarioDivine_Statics::ClassParams = {
		&AEscenarioDivine::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscenarioDivine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioDivine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscenarioDivine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscenarioDivine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscenarioDivine, 2025347240);
	template<> TETRISUSFX01_API UClass* StaticClass<AEscenarioDivine>()
	{
		return AEscenarioDivine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscenarioDivine(Z_Construct_UClass_AEscenarioDivine, &AEscenarioDivine::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEscenarioDivine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscenarioDivine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
