// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETRISUSFX01_Block_generated_h
#error "Block.generated.h already included, missing '#pragma once' in Block.h"
#endif
#define TETRISUSFX01_Block_generated_h

#define Tetris___Final_Source_TetrisUSFX01_Block_h_12_SPARSE_DATA
#define Tetris___Final_Source_TetrisUSFX01_Block_h_12_RPC_WRAPPERS
#define Tetris___Final_Source_TetrisUSFX01_Block_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Tetris___Final_Source_TetrisUSFX01_Block_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define Tetris___Final_Source_TetrisUSFX01_Block_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define Tetris___Final_Source_TetrisUSFX01_Block_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public:


#define Tetris___Final_Source_TetrisUSFX01_Block_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABlock)


#define Tetris___Final_Source_TetrisUSFX01_Block_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(ABlock, BlockMesh); } \
	FORCEINLINE static uint32 __PPO__BlockMaterial() { return STRUCT_OFFSET(ABlock, BlockMaterial); }


#define Tetris___Final_Source_TetrisUSFX01_Block_h_9_PROLOG
#define Tetris___Final_Source_TetrisUSFX01_Block_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tetris___Final_Source_TetrisUSFX01_Block_h_12_PRIVATE_PROPERTY_OFFSET \
	Tetris___Final_Source_TetrisUSFX01_Block_h_12_SPARSE_DATA \
	Tetris___Final_Source_TetrisUSFX01_Block_h_12_RPC_WRAPPERS \
	Tetris___Final_Source_TetrisUSFX01_Block_h_12_INCLASS \
	Tetris___Final_Source_TetrisUSFX01_Block_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tetris___Final_Source_TetrisUSFX01_Block_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tetris___Final_Source_TetrisUSFX01_Block_h_12_PRIVATE_PROPERTY_OFFSET \
	Tetris___Final_Source_TetrisUSFX01_Block_h_12_SPARSE_DATA \
	Tetris___Final_Source_TetrisUSFX01_Block_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tetris___Final_Source_TetrisUSFX01_Block_h_12_INCLASS_NO_PURE_DECLS \
	Tetris___Final_Source_TetrisUSFX01_Block_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETRISUSFX01_API UClass* StaticClass<class ABlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tetris___Final_Source_TetrisUSFX01_Block_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
