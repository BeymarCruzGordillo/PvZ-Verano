// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_B/Estado1Vida.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstado1Vida() {}
// Cross Module References
	PVZ_B_API UClass* Z_Construct_UClass_AEstado1Vida_NoRegister();
	PVZ_B_API UClass* Z_Construct_UClass_AEstado1Vida();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PvZ_B();
	PVZ_B_API UClass* Z_Construct_UClass_APlanta_Estados_NoRegister();
	PVZ_B_API UClass* Z_Construct_UClass_UEstados_NoRegister();
// End Cross Module References
	void AEstado1Vida::StaticRegisterNativesAEstado1Vida()
	{
	}
	UClass* Z_Construct_UClass_AEstado1Vida_NoRegister()
	{
		return AEstado1Vida::StaticClass();
	}
	struct Z_Construct_UClass_AEstado1Vida_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlantaEstados_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlantaEstados;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstado1Vida_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_B,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstado1Vida_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Estado1Vida.h" },
		{ "ModuleRelativePath", "Estado1Vida.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstado1Vida_Statics::NewProp_PlantaEstados_MetaData[] = {
		{ "Comment", "//The Slot Machine of this State\n" },
		{ "ModuleRelativePath", "Estado1Vida.h" },
		{ "ToolTip", "The Slot Machine of this State" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstado1Vida_Statics::NewProp_PlantaEstados = { "PlantaEstados", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstado1Vida, PlantaEstados), Z_Construct_UClass_APlanta_Estados_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstado1Vida_Statics::NewProp_PlantaEstados_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstado1Vida_Statics::NewProp_PlantaEstados_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstado1Vida_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstado1Vida_Statics::NewProp_PlantaEstados,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstado1Vida_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstados_NoRegister, (int32)VTABLE_OFFSET(AEstado1Vida, IEstados), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstado1Vida_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstado1Vida>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstado1Vida_Statics::ClassParams = {
		&AEstado1Vida::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstado1Vida_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstado1Vida_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstado1Vida_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstado1Vida_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstado1Vida()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstado1Vida_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstado1Vida, 4181916872);
	template<> PVZ_B_API UClass* StaticClass<AEstado1Vida>()
	{
		return AEstado1Vida::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstado1Vida(Z_Construct_UClass_AEstado1Vida, &AEstado1Vida::StaticClass, TEXT("/Script/PvZ_B"), TEXT("AEstado1Vida"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstado1Vida);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
