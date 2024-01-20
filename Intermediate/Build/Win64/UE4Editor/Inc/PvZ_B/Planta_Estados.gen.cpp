// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_B/Planta_Estados.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanta_Estados() {}
// Cross Module References
	PVZ_B_API UClass* Z_Construct_UClass_APlanta_Estados_NoRegister();
	PVZ_B_API UClass* Z_Construct_UClass_APlanta_Estados();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PvZ_B();
// End Cross Module References
	void APlanta_Estados::StaticRegisterNativesAPlanta_Estados()
	{
	}
	UClass* Z_Construct_UClass_APlanta_Estados_NoRegister()
	{
		return APlanta_Estados::StaticClass();
	}
	struct Z_Construct_UClass_APlanta_Estados_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanta_Estados_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_B,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanta_Estados_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Planta_Estados.h" },
		{ "ModuleRelativePath", "Planta_Estados.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanta_Estados_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanta_Estados>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanta_Estados_Statics::ClassParams = {
		&APlanta_Estados::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlanta_Estados_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_Estados_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanta_Estados()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanta_Estados_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanta_Estados, 165940557);
	template<> PVZ_B_API UClass* StaticClass<APlanta_Estados>()
	{
		return APlanta_Estados::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanta_Estados(Z_Construct_UClass_APlanta_Estados, &APlanta_Estados::StaticClass, TEXT("/Script/PvZ_B"), TEXT("APlanta_Estados"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanta_Estados);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
