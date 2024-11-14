// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PROYECTO_DONKEY/ITimerObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITimerObserver() {}
// Cross Module References
	PROYECTO_DONKEY_API UClass* Z_Construct_UClass_UITimerObserver_NoRegister();
	PROYECTO_DONKEY_API UClass* Z_Construct_UClass_UITimerObserver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PROYECTO_DONKEY();
// End Cross Module References
	void UITimerObserver::StaticRegisterNativesUITimerObserver()
	{
	}
	UClass* Z_Construct_UClass_UITimerObserver_NoRegister()
	{
		return UITimerObserver::StaticClass();
	}
	struct Z_Construct_UClass_UITimerObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UITimerObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PROYECTO_DONKEY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UITimerObserver_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ITimerObserver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UITimerObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IITimerObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UITimerObserver_Statics::ClassParams = {
		&UITimerObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UITimerObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UITimerObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UITimerObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UITimerObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UITimerObserver, 3438157245);
	template<> PROYECTO_DONKEY_API UClass* StaticClass<UITimerObserver>()
	{
		return UITimerObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UITimerObserver(Z_Construct_UClass_UITimerObserver, &UITimerObserver::StaticClass, TEXT("/Script/PROYECTO_DONKEY"), TEXT("UITimerObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UITimerObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
