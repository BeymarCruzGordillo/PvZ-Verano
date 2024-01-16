// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_B/ZombieBailarin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieBailarin() {}
// Cross Module References
	PVZ_B_API UClass* Z_Construct_UClass_AZombieBailarin_NoRegister();
	PVZ_B_API UClass* Z_Construct_UClass_AZombieBailarin();
	PVZ_B_API UClass* Z_Construct_UClass_AZombie();
	UPackage* Z_Construct_UPackage__Script_PvZ_B();
// End Cross Module References
	void AZombieBailarin::StaticRegisterNativesAZombieBailarin()
	{
	}
	UClass* Z_Construct_UClass_AZombieBailarin_NoRegister()
	{
		return AZombieBailarin::StaticClass();
	}
	struct Z_Construct_UClass_AZombieBailarin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieBailarin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_B,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBailarin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ZombieBailarin.h" },
		{ "ModuleRelativePath", "ZombieBailarin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieBailarin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieBailarin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieBailarin_Statics::ClassParams = {
		&AZombieBailarin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieBailarin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieBailarin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieBailarin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieBailarin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieBailarin, 2562431388);
	template<> PVZ_B_API UClass* StaticClass<AZombieBailarin>()
	{
		return AZombieBailarin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieBailarin(Z_Construct_UClass_AZombieBailarin, &AZombieBailarin::StaticClass, TEXT("/Script/PvZ_B"), TEXT("AZombieBailarin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieBailarin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
