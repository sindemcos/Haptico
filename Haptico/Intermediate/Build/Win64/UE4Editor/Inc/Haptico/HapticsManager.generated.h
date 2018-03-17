// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FMatrix;
struct FRotator;
#ifdef HAPTICO_HapticsManager_generated_h
#error "HapticsManager.generated.h already included, missing '#pragma once' in HapticsManager.h"
#endif
#define HAPTICO_HapticsManager_generated_h

#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_8_DELEGATE \
struct _Script_Haptico_eventNewHapticData_Parms \
{ \
	FVector Position; \
	FMatrix Rotation; \
	FVector LinearVelocity; \
	FVector AngularVelocity; \
}; \
static inline void FNewHapticData_DelegateWrapper(const FMulticastScriptDelegate& NewHapticData, FVector Position, FMatrix Rotation, FVector LinearVelocity, FVector AngularVelocity) \
{ \
	_Script_Haptico_eventNewHapticData_Parms Parms; \
	Parms.Position=Position; \
	Parms.Rotation=Rotation; \
	Parms.LinearVelocity=LinearVelocity; \
	Parms.AngularVelocity=AngularVelocity; \
	NewHapticData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetHapticDeviceLinearVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->getHapticDeviceLinearVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHapticDeviceAngularVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->getHapticDeviceAngularVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHapticDeviceRotationAsUnrealRotator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->getHapticDeviceRotationAsUnrealRotator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHapticDeviceRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMatrix*)Z_Param__Result=this->getHapticDeviceRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHapticDevicePositionInUnrealCoordinates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->getHapticDevicePositionInUnrealCoordinates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHapticDevicePosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->getHapticDevicePosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetTorqueToApply) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_torque); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AHapticsManager::setTorqueToApply(Z_Param_torque); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetForceToApply) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AHapticsManager::setForceToApply(Z_Param_force); \
		P_NATIVE_END; \
	}


#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetHapticDeviceLinearVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->getHapticDeviceLinearVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHapticDeviceAngularVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->getHapticDeviceAngularVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHapticDeviceRotationAsUnrealRotator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->getHapticDeviceRotationAsUnrealRotator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHapticDeviceRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMatrix*)Z_Param__Result=this->getHapticDeviceRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHapticDevicePositionInUnrealCoordinates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->getHapticDevicePositionInUnrealCoordinates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHapticDevicePosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->getHapticDevicePosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetTorqueToApply) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_torque); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AHapticsManager::setTorqueToApply(Z_Param_torque); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetForceToApply) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AHapticsManager::setForceToApply(Z_Param_force); \
		P_NATIVE_END; \
	}


#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_EVENT_PARMS
#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_CALLBACK_WRAPPERS
#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHapticsManager(); \
	friend HAPTICO_API class UClass* Z_Construct_UClass_AHapticsManager(); \
public: \
	DECLARE_CLASS(AHapticsManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Haptico"), NO_API) \
	DECLARE_SERIALIZER(AHapticsManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAHapticsManager(); \
	friend HAPTICO_API class UClass* Z_Construct_UClass_AHapticsManager(); \
public: \
	DECLARE_CLASS(AHapticsManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Haptico"), NO_API) \
	DECLARE_SERIALIZER(AHapticsManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHapticsManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHapticsManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHapticsManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHapticsManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHapticsManager(AHapticsManager&&); \
	NO_API AHapticsManager(const AHapticsManager&); \
public:


#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHapticsManager(AHapticsManager&&); \
	NO_API AHapticsManager(const AHapticsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHapticsManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHapticsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHapticsManager)


#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_PRIVATE_PROPERTY_OFFSET
#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_10_PROLOG \
	DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_EVENT_PARMS


#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_PRIVATE_PROPERTY_OFFSET \
	DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_RPC_WRAPPERS \
	DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_CALLBACK_WRAPPERS \
	DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_INCLASS \
	DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_PRIVATE_PROPERTY_OFFSET \
	DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_CALLBACK_WRAPPERS \
	DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_INCLASS_NO_PURE_DECLS \
	DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DLLPlugger2_Plugins_Haptico_Source_Haptico_Public_HapticsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
