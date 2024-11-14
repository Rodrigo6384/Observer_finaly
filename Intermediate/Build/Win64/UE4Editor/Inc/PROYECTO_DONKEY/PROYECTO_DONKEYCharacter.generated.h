// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_generated_h
#error "PROYECTO_DONKEYCharacter.generated.h already included, missing '#pragma once' in PROYECTO_DONKEYCharacter.h"
#endif
#define PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_generated_h

#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_SPARSE_DATA
#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_RPC_WRAPPERS
#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPROYECTO_DONKEYCharacter(); \
	friend struct Z_Construct_UClass_APROYECTO_DONKEYCharacter_Statics; \
public: \
	DECLARE_CLASS(APROYECTO_DONKEYCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PROYECTO_DONKEY"), NO_API) \
	DECLARE_SERIALIZER(APROYECTO_DONKEYCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<APROYECTO_DONKEYCharacter*>(this); }


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPROYECTO_DONKEYCharacter(); \
	friend struct Z_Construct_UClass_APROYECTO_DONKEYCharacter_Statics; \
public: \
	DECLARE_CLASS(APROYECTO_DONKEYCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PROYECTO_DONKEY"), NO_API) \
	DECLARE_SERIALIZER(APROYECTO_DONKEYCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<APROYECTO_DONKEYCharacter*>(this); }


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APROYECTO_DONKEYCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APROYECTO_DONKEYCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APROYECTO_DONKEYCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APROYECTO_DONKEYCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APROYECTO_DONKEYCharacter(APROYECTO_DONKEYCharacter&&); \
	NO_API APROYECTO_DONKEYCharacter(const APROYECTO_DONKEYCharacter&); \
public:


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APROYECTO_DONKEYCharacter(APROYECTO_DONKEYCharacter&&); \
	NO_API APROYECTO_DONKEYCharacter(const APROYECTO_DONKEYCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APROYECTO_DONKEYCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APROYECTO_DONKEYCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APROYECTO_DONKEYCharacter)


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(APROYECTO_DONKEYCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APROYECTO_DONKEYCharacter, CameraBoom); }


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_10_PROLOG
#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_SPARSE_DATA \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_RPC_WRAPPERS \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_INCLASS \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_SPARSE_DATA \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_INCLASS_NO_PURE_DECLS \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROYECTO_DONKEY_API UClass* StaticClass<class APROYECTO_DONKEYCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PROYECTO_DONKEY_Source_PROYECTO_DONKEY_PROYECTO_DONKEYCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
