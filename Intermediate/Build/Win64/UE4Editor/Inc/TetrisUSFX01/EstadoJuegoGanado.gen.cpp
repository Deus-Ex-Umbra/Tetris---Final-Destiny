// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstadoJuegoGanado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoJuegoGanado() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoJuegoGanado_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoJuegoGanado();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadoEscenario_NoRegister();
// End Cross Module References
	void AEstadoJuegoGanado::StaticRegisterNativesAEstadoJuegoGanado()
	{
	}
	UClass* Z_Construct_UClass_AEstadoJuegoGanado_NoRegister()
	{
		return AEstadoJuegoGanado::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoJuegoGanado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoJuegoGanado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoJuegoGanado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoJuegoGanado.h" },
		{ "ModuleRelativePath", "EstadoJuegoGanado.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoJuegoGanado_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoEscenario_NoRegister, (int32)VTABLE_OFFSET(AEstadoJuegoGanado, IEstadoEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoJuegoGanado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoJuegoGanado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoJuegoGanado_Statics::ClassParams = {
		&AEstadoJuegoGanado::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoJuegoGanado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoJuegoGanado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoJuegoGanado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoJuegoGanado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoJuegoGanado, 323875921);
	template<> TETRISUSFX01_API UClass* StaticClass<AEstadoJuegoGanado>()
	{
		return AEstadoJuegoGanado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoJuegoGanado(Z_Construct_UClass_AEstadoJuegoGanado, &AEstadoJuegoGanado::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEstadoJuegoGanado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoJuegoGanado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
