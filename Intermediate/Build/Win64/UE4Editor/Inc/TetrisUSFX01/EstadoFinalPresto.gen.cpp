// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstadoFinalPresto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoFinalPresto() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoFinalPresto_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoFinalPresto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadoEscenario_NoRegister();
// End Cross Module References
	void AEstadoFinalPresto::StaticRegisterNativesAEstadoFinalPresto()
	{
	}
	UClass* Z_Construct_UClass_AEstadoFinalPresto_NoRegister()
	{
		return AEstadoFinalPresto::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoFinalPresto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoFinalPresto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoFinalPresto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoFinalPresto.h" },
		{ "ModuleRelativePath", "EstadoFinalPresto.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoFinalPresto_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoEscenario_NoRegister, (int32)VTABLE_OFFSET(AEstadoFinalPresto, IEstadoEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoFinalPresto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoFinalPresto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoFinalPresto_Statics::ClassParams = {
		&AEstadoFinalPresto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoFinalPresto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoFinalPresto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoFinalPresto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoFinalPresto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoFinalPresto, 2067131192);
	template<> TETRISUSFX01_API UClass* StaticClass<AEstadoFinalPresto>()
	{
		return AEstadoFinalPresto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoFinalPresto(Z_Construct_UClass_AEstadoFinalPresto, &AEstadoFinalPresto::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEstadoFinalPresto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoFinalPresto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
