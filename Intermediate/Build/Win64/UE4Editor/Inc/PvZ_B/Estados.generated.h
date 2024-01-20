// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PVZ_B_Estados_generated_h
#error "Estados.generated.h already included, missing '#pragma once' in Estados.h"
#endif
#define PVZ_B_Estados_generated_h

#define PvZ_Verano_Source_PvZ_B_Estados_h_13_SPARSE_DATA
#define PvZ_Verano_Source_PvZ_B_Estados_h_13_RPC_WRAPPERS
#define PvZ_Verano_Source_PvZ_B_Estados_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PvZ_Verano_Source_PvZ_B_Estados_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PVZ_B_API UEstados(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEstados) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PVZ_B_API, UEstados); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEstados); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PVZ_B_API UEstados(UEstados&&); \
	PVZ_B_API UEstados(const UEstados&); \
public:


#define PvZ_Verano_Source_PvZ_B_Estados_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PVZ_B_API UEstados(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PVZ_B_API UEstados(UEstados&&); \
	PVZ_B_API UEstados(const UEstados&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PVZ_B_API, UEstados); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEstados); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEstados)


#define PvZ_Verano_Source_PvZ_B_Estados_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEstados(); \
	friend struct Z_Construct_UClass_UEstados_Statics; \
public: \
	DECLARE_CLASS(UEstados, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PvZ_B"), PVZ_B_API) \
	DECLARE_SERIALIZER(UEstados)


#define PvZ_Verano_Source_PvZ_B_Estados_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PvZ_Verano_Source_PvZ_B_Estados_h_13_GENERATED_UINTERFACE_BODY() \
	PvZ_Verano_Source_PvZ_B_Estados_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PvZ_Verano_Source_PvZ_B_Estados_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PvZ_Verano_Source_PvZ_B_Estados_h_13_GENERATED_UINTERFACE_BODY() \
	PvZ_Verano_Source_PvZ_B_Estados_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PvZ_Verano_Source_PvZ_B_Estados_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEstados() {} \
public: \
	typedef UEstados UClassType; \
	typedef IEstados ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PvZ_Verano_Source_PvZ_B_Estados_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IEstados() {} \
public: \
	typedef UEstados UClassType; \
	typedef IEstados ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PvZ_Verano_Source_PvZ_B_Estados_h_10_PROLOG
#define PvZ_Verano_Source_PvZ_B_Estados_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_Verano_Source_PvZ_B_Estados_h_13_SPARSE_DATA \
	PvZ_Verano_Source_PvZ_B_Estados_h_13_RPC_WRAPPERS \
	PvZ_Verano_Source_PvZ_B_Estados_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PvZ_Verano_Source_PvZ_B_Estados_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_Verano_Source_PvZ_B_Estados_h_13_SPARSE_DATA \
	PvZ_Verano_Source_PvZ_B_Estados_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PvZ_Verano_Source_PvZ_B_Estados_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_B_API UClass* StaticClass<class UEstados>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PvZ_Verano_Source_PvZ_B_Estados_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
