// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstadoIntermedioLento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoIntermedioLento() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoIntermedioLento_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoIntermedioLento();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadoEscenario_NoRegister();
// End Cross Module References
	void AEstadoIntermedioLento::StaticRegisterNativesAEstadoIntermedioLento()
	{
	}
	UClass* Z_Construct_UClass_AEstadoIntermedioLento_NoRegister()
	{
		return AEstadoIntermedioLento::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoIntermedioLento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoIntermedioLento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoIntermedioLento_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoIntermedioLento.h" },
		{ "ModuleRelativePath", "EstadoIntermedioLento.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoIntermedioLento_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoEscenario_NoRegister, (int32)VTABLE_OFFSET(AEstadoIntermedioLento, IEstadoEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoIntermedioLento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoIntermedioLento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoIntermedioLento_Statics::ClassParams = {
		&AEstadoIntermedioLento::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoIntermedioLento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoIntermedioLento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoIntermedioLento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoIntermedioLento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoIntermedioLento, 3347574979);
	template<> TETRISUSFX01_API UClass* StaticClass<AEstadoIntermedioLento>()
	{
		return AEstadoIntermedioLento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoIntermedioLento(Z_Construct_UClass_AEstadoIntermedioLento, &AEstadoIntermedioLento::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEstadoIntermedioLento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoIntermedioLento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
