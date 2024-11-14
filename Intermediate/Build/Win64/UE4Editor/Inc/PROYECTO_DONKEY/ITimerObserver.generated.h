// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROYECTO_DONKEY_ITimerObserver_generated_h
#error "ITimerObserver.generated.h already included, missing '#pragma once' in ITimerObserver.h"
#endif
#define PROYECTO_DONKEY_ITimerObserver_generated_h

#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_SPARSE_DATA
#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_RPC_WRAPPERS
#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROYECTO_DONKEY_API UITimerObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UITimerObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROYECTO_DONKEY_API, UITimerObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UITimerObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROYECTO_DONKEY_API UITimerObserver(UITimerObserver&&); \
	PROYECTO_DONKEY_API UITimerObserver(const UITimerObserver&); \
public:


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROYECTO_DONKEY_API UITimerObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROYECTO_DONKEY_API UITimerObserver(UITimerObserver&&); \
	PROYECTO_DONKEY_API UITimerObserver(const UITimerObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROYECTO_DONKEY_API, UITimerObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UITimerObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UITimerObserver)


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUITimerObserver(); \
	friend struct Z_Construct_UClass_UITimerObserver_Statics; \
public: \
	DECLARE_CLASS(UITimerObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PROYECTO_DONKEY"), PROYECTO_DONKEY_API) \
	DECLARE_SERIALIZER(UITimerObserver)


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_GENERATED_UINTERFACE_BODY() \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_GENERATED_UINTERFACE_BODY() \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IITimerObserver() {} \
public: \
	typedef UITimerObserver UClassType; \
	typedef IITimerObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IITimerObserver() {} \
public: \
	typedef UITimerObserver UClassType; \
	typedef IITimerObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_10_PROLOG
#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_SPARSE_DATA \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_RPC_WRAPPERS \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_SPARSE_DATA \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROYECTO_DONKEY_API UClass* StaticClass<class UITimerObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PROYECTO_DONKEY_Source_PROYECTO_DONKEY_ITimerObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
