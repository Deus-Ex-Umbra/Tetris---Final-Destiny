// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Escenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenario() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void AEscenario::StaticRegisterNativesAEscenario()
	{
	}
	UClass* Z_Construct_UClass_AEscenario_NoRegister()
	{
		return AEscenario::StaticClass();
	}
	struct Z_Construct_UClass_AEscenario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscenarioMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscenarioMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitePiezasMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LimitePiezasMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscenarioMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscenarioMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitePiezasMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LimitePiezasMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicaEscenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MusicaEscenario;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicaComponente_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MusicaComponente;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscenario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenario_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Escenario.h" },
		{ "ModuleRelativePath", "Escenario.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenario_Statics::NewProp_EscenarioMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Escenario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscenario_Statics::NewProp_EscenarioMesh = { "EscenarioMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscenario, EscenarioMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscenario_Statics::NewProp_EscenarioMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenario_Statics::NewProp_EscenarioMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenario_Statics::NewProp_LimitePiezasMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Escenario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscenario_Statics::NewProp_LimitePiezasMesh = { "LimitePiezasMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscenario, LimitePiezasMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscenario_Statics::NewProp_LimitePiezasMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenario_Statics::NewProp_LimitePiezasMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenario_Statics::NewProp_EscenarioMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Escenario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscenario_Statics::NewProp_EscenarioMaterial = { "EscenarioMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscenario, EscenarioMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscenario_Statics::NewProp_EscenarioMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenario_Statics::NewProp_EscenarioMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenario_Statics::NewProp_LimitePiezasMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Escenario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscenario_Statics::NewProp_LimitePiezasMaterial = { "LimitePiezasMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscenario, LimitePiezasMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscenario_Statics::NewProp_LimitePiezasMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenario_Statics::NewProp_LimitePiezasMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenario_Statics::NewProp_MusicaEscenario_MetaData[] = {
		{ "ModuleRelativePath", "Escenario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscenario_Statics::NewProp_MusicaEscenario = { "MusicaEscenario", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscenario, MusicaEscenario), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscenario_Statics::NewProp_MusicaEscenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenario_Statics::NewProp_MusicaEscenario_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenario_Statics::NewProp_MusicaComponente_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Escenario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscenario_Statics::NewProp_MusicaComponente = { "MusicaComponente", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscenario, MusicaComponente), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscenario_Statics::NewProp_MusicaComponente_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenario_Statics::NewProp_MusicaComponente_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscenario_Statics::NewProp_EscenarioMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscenario_Statics::NewProp_LimitePiezasMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscenario_Statics::NewProp_EscenarioMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscenario_Statics::NewProp_LimitePiezasMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscenario_Statics::NewProp_MusicaEscenario,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscenario_Statics::NewProp_MusicaComponente,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenario_Statics::ClassParams = {
		&AEscenario::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscenario_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscenario_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscenario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscenario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscenario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscenario, 1768871961);
	template<> TETRISUSFX01_API UClass* StaticClass<AEscenario>()
	{
		return AEscenario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscenario(Z_Construct_UClass_AEscenario, &AEscenario::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEscenario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscenario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
