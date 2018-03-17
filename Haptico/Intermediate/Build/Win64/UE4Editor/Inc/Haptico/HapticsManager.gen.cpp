// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/IHaptico.h"
#include "Public/HapticsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticsManager() {}
// Cross Module References
	HAPTICO_API UFunction* Z_Construct_UDelegateFunction_Haptico_NewHapticData__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Haptico();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	HAPTICO_API UClass* Z_Construct_UClass_AHapticsManager_NoRegister();
	HAPTICO_API UClass* Z_Construct_UClass_AHapticsManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HAPTICO_API UFunction* Z_Construct_UFunction_AHapticsManager_button1Clicked();
	HAPTICO_API UFunction* Z_Construct_UFunction_AHapticsManager_button2Clicked();
	HAPTICO_API UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDeviceAngularVelocity();
	HAPTICO_API UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDeviceLinearVelocity();
	HAPTICO_API UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDevicePosition();
	HAPTICO_API UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDevicePositionInUnrealCoordinates();
	HAPTICO_API UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDeviceRotation();
	HAPTICO_API UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDeviceRotationAsUnrealRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	HAPTICO_API UFunction* Z_Construct_UFunction_AHapticsManager_setForceToApply();
	HAPTICO_API UFunction* Z_Construct_UFunction_AHapticsManager_setTorqueToApply();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Haptico_NewHapticData__DelegateSignature()
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct _Script_Haptico_eventNewHapticData_Parms
		{
			FVector Position;
			FMatrix Rotation;
			FVector LinearVelocity;
			FVector AngularVelocity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Haptico_eventNewHapticData_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Haptico_eventNewHapticData_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Haptico_eventNewHapticData_Parms, Rotation), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Haptico_eventNewHapticData_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Haptico, "NewHapticData__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Haptico_eventNewHapticData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AHapticsManager_button1Clicked = FName(TEXT("button1Clicked"));
	void AHapticsManager::button1Clicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHapticsManager_button1Clicked),NULL);
	}
	static FName NAME_AHapticsManager_button2Clicked = FName(TEXT("button2Clicked"));
	void AHapticsManager::button2Clicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHapticsManager_button2Clicked),NULL);
	}
	void AHapticsManager::StaticRegisterNativesAHapticsManager()
	{
		UClass* Class = AHapticsManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getHapticDeviceAngularVelocity", (Native)&AHapticsManager::execgetHapticDeviceAngularVelocity },
			{ "getHapticDeviceLinearVelocity", (Native)&AHapticsManager::execgetHapticDeviceLinearVelocity },
			{ "getHapticDevicePosition", (Native)&AHapticsManager::execgetHapticDevicePosition },
			{ "getHapticDevicePositionInUnrealCoordinates", (Native)&AHapticsManager::execgetHapticDevicePositionInUnrealCoordinates },
			{ "getHapticDeviceRotation", (Native)&AHapticsManager::execgetHapticDeviceRotation },
			{ "getHapticDeviceRotationAsUnrealRotator", (Native)&AHapticsManager::execgetHapticDeviceRotationAsUnrealRotator },
			{ "setForceToApply", (Native)&AHapticsManager::execsetForceToApply },
			{ "setTorqueToApply", (Native)&AHapticsManager::execsetTorqueToApply },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AHapticsManager_button1Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "Button1Clicked" },
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
				{ "ToolTip", "fires an event when the button 1 is clicked" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHapticsManager, "button1Clicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHapticsManager_button2Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "Button2Clicked" },
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
				{ "ToolTip", "fires an event when the button 2 is clicked" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHapticsManager, "button2Clicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDeviceAngularVelocity()
	{
		struct HapticsManager_eventgetHapticDeviceAngularVelocity_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HapticsManager_eventgetHapticDeviceAngularVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
				{ "ToolTip", "get the current angular velocity of the haptic device end affector" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHapticsManager, "getHapticDeviceAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HapticsManager_eventgetHapticDeviceAngularVelocity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDeviceLinearVelocity()
	{
		struct HapticsManager_eventgetHapticDeviceLinearVelocity_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HapticsManager_eventgetHapticDeviceLinearVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
				{ "ToolTip", "get the current linear velocity of the haptic device end affector" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHapticsManager, "getHapticDeviceLinearVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HapticsManager_eventgetHapticDeviceLinearVelocity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDevicePosition()
	{
		struct HapticsManager_eventgetHapticDevicePosition_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HapticsManager_eventgetHapticDevicePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
				{ "ToolTip", "gets the current position of the haptic device end affector" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHapticsManager, "getHapticDevicePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HapticsManager_eventgetHapticDevicePosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDevicePositionInUnrealCoordinates()
	{
		struct HapticsManager_eventgetHapticDevicePositionInUnrealCoordinates_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HapticsManager_eventgetHapticDevicePositionInUnrealCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
				{ "ToolTip", "get the current position of the haptic device end affector in unreal coordinates" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHapticsManager, "getHapticDevicePositionInUnrealCoordinates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HapticsManager_eventgetHapticDevicePositionInUnrealCoordinates_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDeviceRotation()
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct HapticsManager_eventgetHapticDeviceRotation_Parms
		{
			FMatrix ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HapticsManager_eventgetHapticDeviceRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
				{ "ToolTip", "get the current rotation of the haptic device end affector" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHapticsManager, "getHapticDeviceRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HapticsManager_eventgetHapticDeviceRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHapticsManager_getHapticDeviceRotationAsUnrealRotator()
	{
		struct HapticsManager_eventgetHapticDeviceRotationAsUnrealRotator_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HapticsManager_eventgetHapticDeviceRotationAsUnrealRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
				{ "ToolTip", "get the current rotation of the haptic device end affector as an unreal rotator" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHapticsManager, "getHapticDeviceRotationAsUnrealRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HapticsManager_eventgetHapticDeviceRotationAsUnrealRotator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHapticsManager_setForceToApply()
	{
		struct HapticsManager_eventsetForceToApply_Parms
		{
			FVector force;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_force = { UE4CodeGen_Private::EPropertyClass::Struct, "force", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HapticsManager_eventsetForceToApply_Parms, force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_force,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
				{ "ToolTip", "set the force that should be applied to the haptic device in the next tick of the haptic thread" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHapticsManager, "setForceToApply", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(HapticsManager_eventsetForceToApply_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHapticsManager_setTorqueToApply()
	{
		struct HapticsManager_eventsetTorqueToApply_Parms
		{
			FVector torque;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_torque = { UE4CodeGen_Private::EPropertyClass::Struct, "torque", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HapticsManager_eventsetTorqueToApply_Parms, torque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_torque,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
				{ "ToolTip", "set the torque that should be applied to the haptic device in the next tick of the haptic thread" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHapticsManager, "setTorqueToApply", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(HapticsManager_eventsetTorqueToApply_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHapticsManager_NoRegister()
	{
		return AHapticsManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AHapticsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Haptico,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AHapticsManager_button1Clicked, "button1Clicked" }, // 3012581989
				{ &Z_Construct_UFunction_AHapticsManager_button2Clicked, "button2Clicked" }, // 3396892450
				{ &Z_Construct_UFunction_AHapticsManager_getHapticDeviceAngularVelocity, "getHapticDeviceAngularVelocity" }, // 3954214553
				{ &Z_Construct_UFunction_AHapticsManager_getHapticDeviceLinearVelocity, "getHapticDeviceLinearVelocity" }, // 3057254919
				{ &Z_Construct_UFunction_AHapticsManager_getHapticDevicePosition, "getHapticDevicePosition" }, // 2788744457
				{ &Z_Construct_UFunction_AHapticsManager_getHapticDevicePositionInUnrealCoordinates, "getHapticDevicePositionInUnrealCoordinates" }, // 3245368380
				{ &Z_Construct_UFunction_AHapticsManager_getHapticDeviceRotation, "getHapticDeviceRotation" }, // 2215999698
				{ &Z_Construct_UFunction_AHapticsManager_getHapticDeviceRotationAsUnrealRotator, "getHapticDeviceRotationAsUnrealRotator" }, // 3948088354
				{ &Z_Construct_UFunction_AHapticsManager_setForceToApply, "setForceToApply" }, // 2772910504
				{ &Z_Construct_UFunction_AHapticsManager_setTorqueToApply, "setTorqueToApply" }, // 3302723919
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "HapticsManager.h" },
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHapticTick_MetaData[] = {
				{ "ModuleRelativePath", "Public/HapticsManager.h" },
				{ "ToolTip", "the multicast delegate that is fired every tick and provides the up to date haptic data" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHapticTick = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHapticTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AHapticsManager, OnHapticTick), Z_Construct_UDelegateFunction_Haptico_NewHapticData__DelegateSignature, METADATA_PARAMS(NewProp_OnHapticTick_MetaData, ARRAY_COUNT(NewProp_OnHapticTick_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnHapticTick,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHapticsManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHapticsManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHapticsManager, 2290474098);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHapticsManager(Z_Construct_UClass_AHapticsManager, &AHapticsManager::StaticClass, TEXT("/Script/Haptico"), TEXT("AHapticsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHapticsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
