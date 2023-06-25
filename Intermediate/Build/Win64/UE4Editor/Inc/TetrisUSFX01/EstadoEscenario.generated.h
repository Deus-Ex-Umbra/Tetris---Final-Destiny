// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETRISUSFX01_EstadoEscenario_generated_h
#error "EstadoEscenario.generated.h already included, missing '#pragma once' in EstadoEscenario.h"
#endif
#define TETRISUSFX01_EstadoEscenario_generated_h

#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_SPARSE_DATA
#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_RPC_WRAPPERS
#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TETRISUSFX01_API UEstadoEscenario(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEstadoEscenario) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TETRISUSFX01_API, UEstadoEscenario); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEstadoEscenario); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TETRISUSFX01_API UEstadoEscenario(UEstadoEscenario&&); \
	TETRISUSFX01_API UEstadoEscenario(const UEstadoEscenario&); \
public:


#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TETRISUSFX01_API UEstadoEscenario(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TETRISUSFX01_API UEstadoEscenario(UEstadoEscenario&&); \
	TETRISUSFX01_API UEstadoEscenario(const UEstadoEscenario&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TETRISUSFX01_API, UEstadoEscenario); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEstadoEscenario); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEstadoEscenario)


#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEstadoEscenario(); \
	friend struct Z_Construct_UClass_UEstadoEscenario_Statics; \
public: \
	DECLARE_CLASS(UEstadoEscenario, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), TETRISUSFX01_API) \
	DECLARE_SERIALIZER(UEstadoEscenario)


#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_GENERATED_UINTERFACE_BODY() \
	Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_GENERATED_UINTERFACE_BODY() \
	Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEstadoEscenario() {} \
public: \
	typedef UEstadoEscenario UClassType; \
	typedef IEstadoEscenario ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IEstadoEscenario() {} \
public: \
	typedef UEstadoEscenario UClassType; \
	typedef IEstadoEscenario ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_6_PROLOG
#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_SPARSE_DATA \
	Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_RPC_WRAPPERS \
	Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_SPARSE_DATA \
	Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETRISUSFX01_API UClass* StaticClass<class UEstadoEscenario>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tetris___Final_Source_TetrisUSFX01_EstadoEscenario_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
