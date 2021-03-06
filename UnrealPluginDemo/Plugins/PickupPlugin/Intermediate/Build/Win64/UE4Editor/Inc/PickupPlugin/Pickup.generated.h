// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PICKUPPLUGIN_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define PICKUPPLUGIN_Pickup_generated_h

#define UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PickupPlugin"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PickupPlugin"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_STANDARD_CONSTRUCTORS \
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


#define UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_PRIVATE_PROPERTY_OFFSET
#define UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_11_PROLOG
#define UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_RPC_WRAPPERS \
	UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_INCLASS \
	UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_INCLASS_NO_PURE_DECLS \
	UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICKUPPLUGIN_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPluginDemo_Plugins_PickupPlugin_Source_PickupPlugin_Public_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
