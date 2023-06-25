// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstadoIntermedioAllegro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoIntermedioAllegro() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoIntermedioAllegro_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoIntermedioAllegro();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadoEscenario_NoRegister();
// End Cross Module References
	void AEstadoIntermedioAllegro::StaticRegisterNativesAEstadoIntermedioAllegro()
	{
	}
	UClass* Z_Construct_UClass_AEstadoIntermedioAllegro_NoRegister()
	{
		return AEstadoIntermedioAllegro::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoIntermedioAllegro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoIntermedioAllegro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoIntermedioAllegro_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoIntermedioAllegro.h" },
		{ "ModuleRelativePath", "EstadoIntermedioAllegro.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoIntermedioAllegro_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoEscenario_NoRegister, (int32)VTABLE_OFFSET(AEstadoIntermedioAllegro, IEstadoEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoIntermedioAllegro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoIntermedioAllegro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoIntermedioAllegro_Statics::ClassParams = {
		&AEstadoIntermedioAllegro::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoIntermedioAllegro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoIntermedioAllegro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoIntermedioAllegro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoIntermedioAllegro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoIntermedioAllegro, 2474069843);
	template<> TETRISUSFX01_API UClass* StaticClass<AEstadoIntermedioAllegro>()
	{
		return AEstadoIntermedioAllegro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoIntermedioAllegro(Z_Construct_UClass_AEstadoIntermedioAllegro, &AEstadoIntermedioAllegro::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEstadoIntermedioAllegro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoIntermedioAllegro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
