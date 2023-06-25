// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstadoFegefeuerSospenso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoFegefeuerSospenso() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoFegefeuerSospenso_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoFegefeuerSospenso();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadoEscenario_NoRegister();
// End Cross Module References
	void AEstadoFegefeuerSospenso::StaticRegisterNativesAEstadoFegefeuerSospenso()
	{
	}
	UClass* Z_Construct_UClass_AEstadoFegefeuerSospenso_NoRegister()
	{
		return AEstadoFegefeuerSospenso::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoFegefeuerSospenso_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoFegefeuerSospenso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoFegefeuerSospenso_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoFegefeuerSospenso.h" },
		{ "ModuleRelativePath", "EstadoFegefeuerSospenso.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoFegefeuerSospenso_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoEscenario_NoRegister, (int32)VTABLE_OFFSET(AEstadoFegefeuerSospenso, IEstadoEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoFegefeuerSospenso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoFegefeuerSospenso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoFegefeuerSospenso_Statics::ClassParams = {
		&AEstadoFegefeuerSospenso::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoFegefeuerSospenso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoFegefeuerSospenso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoFegefeuerSospenso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoFegefeuerSospenso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoFegefeuerSospenso, 3386671741);
	template<> TETRISUSFX01_API UClass* StaticClass<AEstadoFegefeuerSospenso>()
	{
		return AEstadoFegefeuerSospenso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoFegefeuerSospenso(Z_Construct_UClass_AEstadoFegefeuerSospenso, &AEstadoFegefeuerSospenso::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEstadoFegefeuerSospenso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoFegefeuerSospenso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
