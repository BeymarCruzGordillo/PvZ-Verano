// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_B/Estados.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstados() {}
// Cross Module References
	PVZ_B_API UClass* Z_Construct_UClass_UEstados_NoRegister();
	PVZ_B_API UClass* Z_Construct_UClass_UEstados();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PvZ_B();
// End Cross Module References
	void UEstados::StaticRegisterNativesUEstados()
	{
	}
	UClass* Z_Construct_UClass_UEstados_NoRegister()
	{
		return UEstados::StaticClass();
	}
	struct Z_Construct_UClass_UEstados_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstados_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_B,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstados_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Estados.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstados_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstados>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstados_Statics::ClassParams = {
		&UEstados::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEstados_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstados_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstados()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstados_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstados, 1288485101);
	template<> PVZ_B_API UClass* StaticClass<UEstados>()
	{
		return UEstados::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstados(Z_Construct_UClass_UEstados, &UEstados::StaticClass, TEXT("/Script/PvZ_B"), TEXT("UEstados"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstados);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
