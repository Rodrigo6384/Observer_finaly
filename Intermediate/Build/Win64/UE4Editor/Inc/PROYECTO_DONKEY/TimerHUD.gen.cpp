// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PROYECTO_DONKEY/TimerHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerHUD() {}
// Cross Module References
	PROYECTO_DONKEY_API UClass* Z_Construct_UClass_ATimerHUD_NoRegister();
	PROYECTO_DONKEY_API UClass* Z_Construct_UClass_ATimerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PROYECTO_DONKEY();
// End Cross Module References
	void ATimerHUD::StaticRegisterNativesATimerHUD()
	{
	}
	UClass* Z_Construct_UClass_ATimerHUD_NoRegister()
	{
		return ATimerHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATimerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PROYECTO_DONKEY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TimerHUD.h" },
		{ "ModuleRelativePath", "TimerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimerHUD_Statics::ClassParams = {
		&ATimerHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATimerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimerHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimerHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimerHUD, 2048676133);
	template<> PROYECTO_DONKEY_API UClass* StaticClass<ATimerHUD>()
	{
		return ATimerHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimerHUD(Z_Construct_UClass_ATimerHUD, &ATimerHUD::StaticClass, TEXT("/Script/PROYECTO_DONKEY"), TEXT("ATimerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
