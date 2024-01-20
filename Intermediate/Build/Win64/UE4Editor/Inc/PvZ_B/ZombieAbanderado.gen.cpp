// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_B/ZombieAbanderado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAbanderado() {}
// Cross Module References
	PVZ_B_API UClass* Z_Construct_UClass_AZombieAbanderado_NoRegister();
	PVZ_B_API UClass* Z_Construct_UClass_AZombieAbanderado();
	PVZ_B_API UClass* Z_Construct_UClass_APublicador();
	UPackage* Z_Construct_UPackage__Script_PvZ_B();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AZombieAbanderado::StaticRegisterNativesAZombieAbanderado()
	{
	}
	UClass* Z_Construct_UClass_AZombieAbanderado_NoRegister()
	{
		return AZombieAbanderado::StaticClass();
	}
	struct Z_Construct_UClass_AZombieAbanderado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieAbanderado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APublicador,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_B,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAbanderado_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ZombieAbanderado.h" },
		{ "ModuleRelativePath", "ZombieAbanderado.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAbanderado_Statics::NewProp_ZombieMesh_MetaData[] = {
		{ "Category", "ZombieAbanderado" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ZombieAbanderado.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAbanderado_Statics::NewProp_ZombieMesh = { "ZombieMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAbanderado, ZombieMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieAbanderado_Statics::NewProp_ZombieMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAbanderado_Statics::NewProp_ZombieMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieAbanderado_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAbanderado_Statics::NewProp_ZombieMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieAbanderado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieAbanderado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieAbanderado_Statics::ClassParams = {
		&AZombieAbanderado::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombieAbanderado_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAbanderado_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieAbanderado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAbanderado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieAbanderado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieAbanderado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieAbanderado, 3355419510);
	template<> PVZ_B_API UClass* StaticClass<AZombieAbanderado>()
	{
		return AZombieAbanderado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieAbanderado(Z_Construct_UClass_AZombieAbanderado, &AZombieAbanderado::StaticClass, TEXT("/Script/PvZ_B"), TEXT("AZombieAbanderado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieAbanderado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
