// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_B/State_Principal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeState_Principal() {}
// Cross Module References
	PVZ_B_API UClass* Z_Construct_UClass_AState_Principal_NoRegister();
	PVZ_B_API UClass* Z_Construct_UClass_AState_Principal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PvZ_B();
// End Cross Module References
	void AState_Principal::StaticRegisterNativesAState_Principal()
	{
	}
	UClass* Z_Construct_UClass_AState_Principal_NoRegister()
	{
		return AState_Principal::StaticClass();
	}
	struct Z_Construct_UClass_AState_Principal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AState_Principal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_B,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AState_Principal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "State_Principal.h" },
		{ "ModuleRelativePath", "State_Principal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AState_Principal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AState_Principal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AState_Principal_Statics::ClassParams = {
		&AState_Principal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AState_Principal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AState_Principal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AState_Principal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AState_Principal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AState_Principal, 2025995873);
	template<> PVZ_B_API UClass* StaticClass<AState_Principal>()
	{
		return AState_Principal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AState_Principal(Z_Construct_UClass_AState_Principal, &AState_Principal::StaticClass, TEXT("/Script/PvZ_B"), TEXT("AState_Principal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AState_Principal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
