// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PROYECTO_DONKEY/TimerManagerR.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerManagerR() {}
// Cross Module References
	PROYECTO_DONKEY_API UClass* Z_Construct_UClass_ATimerManagerR_NoRegister();
	PROYECTO_DONKEY_API UClass* Z_Construct_UClass_ATimerManagerR();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PROYECTO_DONKEY();
// End Cross Module References
	void ATimerManagerR::StaticRegisterNativesATimerManagerR()
	{
	}
	UClass* Z_Construct_UClass_ATimerManagerR_NoRegister()
	{
		return ATimerManagerR::StaticClass();
	}
	struct Z_Construct_UClass_ATimerManagerR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimerManagerR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PROYECTO_DONKEY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerManagerR_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimerManagerR.h" },
		{ "ModuleRelativePath", "TimerManagerR.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimerManagerR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerManagerR>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimerManagerR_Statics::ClassParams = {
		&ATimerManagerR::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATimerManagerR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerManagerR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimerManagerR()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimerManagerR_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimerManagerR, 2366306393);
	template<> PROYECTO_DONKEY_API UClass* StaticClass<ATimerManagerR>()
	{
		return ATimerManagerR::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimerManagerR(Z_Construct_UClass_ATimerManagerR, &ATimerManagerR::StaticClass, TEXT("/Script/PROYECTO_DONKEY"), TEXT("ATimerManagerR"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerManagerR);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
