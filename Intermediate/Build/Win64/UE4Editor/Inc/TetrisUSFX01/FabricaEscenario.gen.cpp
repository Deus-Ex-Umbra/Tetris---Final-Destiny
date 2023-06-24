// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/FabricaEscenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaEscenario() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFabricaEscenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFabricaEscenario();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AFabricaEscenario::StaticRegisterNativesAFabricaEscenario()
	{
	}
	UClass* Z_Construct_UClass_AFabricaEscenario_NoRegister()
	{
		return AFabricaEscenario::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaEscenario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaEscenario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaEscenario_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaEscenario.h" },
		{ "ModuleRelativePath", "FabricaEscenario.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaEscenario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaEscenario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaEscenario_Statics::ClassParams = {
		&AFabricaEscenario::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaEscenario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaEscenario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaEscenario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaEscenario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaEscenario, 2200352529);
	template<> TETRISUSFX01_API UClass* StaticClass<AFabricaEscenario>()
	{
		return AFabricaEscenario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaEscenario(Z_Construct_UClass_AFabricaEscenario, &AFabricaEscenario::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AFabricaEscenario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaEscenario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
