/* Copyright (C) 2018 Sinan Demirtas
*
* This software may be distributed under the terms
* of the MIT license. See the LICENSE file for details.
*/
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "HapticsManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FNewHapticData, FVector, Position, FMatrix, Rotation, FVector, LinearVelocity, FVector, AngularVelocity);

UCLASS(BlueprintType)
class HAPTICO_API AHapticsManager : public AActor
{
	GENERATED_BODY()
	
public:	

	AHapticsManager();

	/**
	* the multicast delegate that is fired every tick and provides the up to date haptic data
	*/
	UPROPERTY(BlueprintAssignable)
		FNewHapticData OnHapticTick;
private:

protected:

	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type type) override;

public:	

	virtual void Tick(float DeltaTime) override;

	/**
	* broad casts the new haptic data as a multicast delegate
	*/
	void broadCastNewHapticData(FVector position, FMatrix rotation, FVector linearVelocity, FVector angularVelocity);

	/**
	* set the force that should be applied to the haptic device in the next tick of the haptic thread
	*/
	UFUNCTION(BlueprintCallable)
	static void setForceToApply(FVector force);

	/**
	* set the torque that should be applied to the haptic device in the next tick of the haptic thread
	*/
	UFUNCTION(BlueprintCallable)
	static void setTorqueToApply(FVector torque);

	/**
	* gets the current position of the haptic device end affector
	*/
	UFUNCTION(BlueprintCallable)
	FVector getHapticDevicePosition();

	/**
	* get the current position of the haptic device end affector in unreal coordinates
	*/
	UFUNCTION(BlueprintCallable)
	FVector getHapticDevicePositionInUnrealCoordinates();

	/**
	* get the current rotation of the haptic device end affector
	*/
	UFUNCTION(BlueprintCallable)
	FMatrix getHapticDeviceRotation();

	/**
	* get the current rotation of the haptic device end affector as an unreal rotator
	*/
	UFUNCTION(BlueprintCallable)
	FRotator getHapticDeviceRotationAsUnrealRotator();

	/**
	* get the current angular velocity of the haptic device end affector
	*/
	UFUNCTION(BlueprintCallable)
	FVector getHapticDeviceAngularVelocity();

	/**
	* get the current linear velocity of the haptic device end affector
	*/
	UFUNCTION(BlueprintCallable)
	FVector getHapticDeviceLinearVelocity();

	/**
	* fires an event when the button 1 is clicked
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Button1Clicked"))
	void button1Clicked();

	/**
	* fires an event when the button 2 is clicked
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Button2Clicked"))
	void button2Clicked();
};
