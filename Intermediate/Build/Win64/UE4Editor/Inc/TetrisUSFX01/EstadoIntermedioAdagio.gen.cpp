// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstadoIntermedioAdagio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoIntermedioAdagio() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoIntermedioAdagio_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoIntermedioAdagio();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadoEscenario_NoRegister();
// End Cross Module References
	void AEstadoIntermedioAdagio::StaticRegisterNativesAEstadoIntermedioAdagio()
	{
	}
	UClass* Z_Construct_UClass_AEstadoIntermedioAdagio_NoRegister()
	{
		return AEstadoIntermedioAdagio::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoIntermedioAdagio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoIntermedioAdagio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoIntermedioAdagio_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoIntermedioAdagio.h" },
		{ "ModuleRelativePath", "EstadoIntermedioAdagio.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoIntermedioAdagio_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoEscenario_NoRegister, (int32)VTABLE_OFFSET(AEstadoIntermedioAdagio, IEstadoEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoIntermedioAdagio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoIntermedioAdagio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoIntermedioAdagio_Statics::ClassParams = {
		&AEstadoIntermedioAdagio::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoIntermedioAdagio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoIntermedioAdagio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoIntermedioAdagio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoIntermedioAdagio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoIntermedioAdagio, 3261139018);
	template<> TETRISUSFX01_API UClass* StaticClass<AEstadoIntermedioAdagio>()
	{
		return AEstadoIntermedioAdagio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoIntermedioAdagio(Z_Construct_UClass_AEstadoIntermedioAdagio, &AEstadoIntermedioAdagio::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEstadoIntermedioAdagio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoIntermedioAdagio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
