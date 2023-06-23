// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/TetrisUSFX01GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetrisUSFX01GameModeBase() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ATetrisUSFX01GameModeBase_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ATetrisUSFX01GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ATetrisUSFX01GameModeBase::StaticRegisterNativesATetrisUSFX01GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATetrisUSFX01GameModeBase_NoRegister()
	{
		return ATetrisUSFX01GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TetrisUSFX01GameModeBase.h" },
		{ "ModuleRelativePath", "TetrisUSFX01GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetrisUSFX01GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::ClassParams = {
		&ATetrisUSFX01GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATetrisUSFX01GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATetrisUSFX01GameModeBase, 3142421234);
	template<> TETRISUSFX01_API UClass* StaticClass<ATetrisUSFX01GameModeBase>()
	{
		return ATetrisUSFX01GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATetrisUSFX01GameModeBase(Z_Construct_UClass_ATetrisUSFX01GameModeBase, &ATetrisUSFX01GameModeBase::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ATetrisUSFX01GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetrisUSFX01GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
