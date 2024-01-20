// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PVZ_B_Plant_generated_h
#error "Plant.generated.h already included, missing '#pragma once' in Plant.h"
#endif
#define PVZ_B_Plant_generated_h

#define PvZ_Verano_Source_PvZ_B_Plant_h_12_SPARSE_DATA
#define PvZ_Verano_Source_PvZ_B_Plant_h_12_RPC_WRAPPERS
#define PvZ_Verano_Source_PvZ_B_Plant_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PvZ_Verano_Source_PvZ_B_Plant_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlant(); \
	friend struct Z_Construct_UClass_APlant_Statics; \
public: \
	DECLARE_CLASS(APlant, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_B"), NO_API) \
	DECLARE_SERIALIZER(APlant)


#define PvZ_Verano_Source_PvZ_B_Plant_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlant(); \
	friend struct Z_Construct_UClass_APlant_Statics; \
public: \
	DECLARE_CLASS(APlant, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_B"), NO_API) \
	DECLARE_SERIALIZER(APlant)


#define PvZ_Verano_Source_PvZ_B_Plant_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlant(APlant&&); \
	NO_API APlant(const APlant&); \
public:


#define PvZ_Verano_Source_PvZ_B_Plant_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlant(APlant&&); \
	NO_API APlant(const APlant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlant)


#define PvZ_Verano_Source_PvZ_B_Plant_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlantMesh() { return STRUCT_OFFSET(APlant, PlantMesh); }


#define PvZ_Verano_Source_PvZ_B_Plant_h_9_PROLOG
#define PvZ_Verano_Source_PvZ_B_Plant_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_Verano_Source_PvZ_B_Plant_h_12_PRIVATE_PROPERTY_OFFSET \
	PvZ_Verano_Source_PvZ_B_Plant_h_12_SPARSE_DATA \
	PvZ_Verano_Source_PvZ_B_Plant_h_12_RPC_WRAPPERS \
	PvZ_Verano_Source_PvZ_B_Plant_h_12_INCLASS \
	PvZ_Verano_Source_PvZ_B_Plant_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PvZ_Verano_Source_PvZ_B_Plant_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_Verano_Source_PvZ_B_Plant_h_12_PRIVATE_PROPERTY_OFFSET \
	PvZ_Verano_Source_PvZ_B_Plant_h_12_SPARSE_DATA \
	PvZ_Verano_Source_PvZ_B_Plant_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PvZ_Verano_Source_PvZ_B_Plant_h_12_INCLASS_NO_PURE_DECLS \
	PvZ_Verano_Source_PvZ_B_Plant_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_B_API UClass* StaticClass<class APlant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PvZ_Verano_Source_PvZ_B_Plant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
