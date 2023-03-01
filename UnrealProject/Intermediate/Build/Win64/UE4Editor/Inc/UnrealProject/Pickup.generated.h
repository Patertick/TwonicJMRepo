// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPROJECT_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define UNREALPROJECT_Pickup_generated_h

#define UnrealProject_Source_UnrealProject_Pickup_h_13_SPARSE_DATA
#define UnrealProject_Source_UnrealProject_Pickup_h_13_RPC_WRAPPERS
#define UnrealProject_Source_UnrealProject_Pickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProject_Source_UnrealProject_Pickup_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealProject"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define UnrealProject_Source_UnrealProject_Pickup_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealProject"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define UnrealProject_Source_UnrealProject_Pickup_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define UnrealProject_Source_UnrealProject_Pickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define UnrealProject_Source_UnrealProject_Pickup_h_13_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Source_UnrealProject_Pickup_h_10_PROLOG
#define UnrealProject_Source_UnrealProject_Pickup_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_Pickup_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_UnrealProject_Pickup_h_13_SPARSE_DATA \
	UnrealProject_Source_UnrealProject_Pickup_h_13_RPC_WRAPPERS \
	UnrealProject_Source_UnrealProject_Pickup_h_13_INCLASS \
	UnrealProject_Source_UnrealProject_Pickup_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_UnrealProject_Pickup_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_Pickup_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_UnrealProject_Pickup_h_13_SPARSE_DATA \
	UnrealProject_Source_UnrealProject_Pickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_Pickup_h_13_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_Pickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPROJECT_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_UnrealProject_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
