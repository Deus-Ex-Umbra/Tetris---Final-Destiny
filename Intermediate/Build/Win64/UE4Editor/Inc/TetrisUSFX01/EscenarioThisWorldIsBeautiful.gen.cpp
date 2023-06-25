// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EscenarioThisWorldIsBeautiful.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenarioThisWorldIsBeautiful() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioThisWorldIsBeautiful_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioThisWorldIsBeautiful();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AEscenarioThisWorldIsBeautiful::StaticRegisterNativesAEscenarioThisWorldIsBeautiful()
	{
	}
	UClass* Z_Construct_UClass_AEscenarioThisWorldIsBeautiful_NoRegister()
	{
		return AEscenarioThisWorldIsBeautiful::StaticClass();
	}
	struct Z_Construct_UClass_AEscenarioThisWorldIsBeautiful_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscenarioThisWorldIsBeautiful_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioThisWorldIsBeautiful_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscenarioThisWorldIsBeautiful.h" },
		{ "ModuleRelativePath", "EscenarioThisWorldIsBeautiful.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenarioThisWorldIsBeautiful_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenarioThisWorldIsBeautiful>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenarioThisWorldIsBeautiful_Statics::ClassParams = {
		&AEscenarioThisWorldIsBeautiful::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscenarioThisWorldIsBeautiful_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioThisWorldIsBeautiful_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscenarioThisWorldIsBeautiful()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscenarioThisWorldIsBeautiful_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscenarioThisWorldIsBeautiful, 1208628658);
	template<> TETRISUSFX01_API UClass* StaticClass<AEscenarioThisWorldIsBeautiful>()
	{
		return AEscenarioThisWorldIsBeautiful::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscenarioThisWorldIsBeautiful(Z_Construct_UClass_AEscenarioThisWorldIsBeautiful, &AEscenarioThisWorldIsBeautiful::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEscenarioThisWorldIsBeautiful"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscenarioThisWorldIsBeautiful);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
