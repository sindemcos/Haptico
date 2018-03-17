/* Copyright (C) 2018 Sinan Demirtas
*
* This software may be distributed under the terms
* of the MIT license. See the LICENSE file for details.
*/
#include "IHaptico.h"
#include "HapticsManager.h"
#include "AsyncWork.h"
#include "HapticThread.h"
#include "HapticThreadInput.h"
#include "HapticThreadOutput.h"

/**
 * constructs an instance of the haptic manager
*/
AHapticsManager::AHapticsManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

/**
 * Called when the actor is spawned and starts the haptic thread
 */
void AHapticsManager::BeginPlay()
{
	Super::BeginPlay();
	UHapticThreadInput::getInst().setRunThread(true);
	(new FAutoDeleteAsyncTask<FHapticThread>(IHaptico::Get(), this))->StartBackgroundTask();
}

/**
* Called when the actor is destroyed and ends the haptic thread
*/
void  AHapticsManager::EndPlay(EEndPlayReason::Type type)
{
	Super::EndPlay(type);
	UHapticThreadInput::getInst().setRunThread(false);
}

/**
 * Called every frame
*/
void AHapticsManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

/**
 * set the force that should be applied to the haptic device in the next tick of the haptic thread
*/
void AHapticsManager::setForceToApply(FVector force) {
	UHapticThreadInput::getInst().setForceToApply(force);
}

/**
* set the torque that should be applied to the haptic device in the next tick of the haptic thread
*/
void AHapticsManager::setTorqueToApply(FVector torque) {
	UHapticThreadInput::getInst().setTorqueToApply(torque);
}

/**
* gets the current position of the haptic device end affector
*/
FVector AHapticsManager::getHapticDevicePosition() {
	return UHapticThreadOutput::getInst().getHapticCursorPosition();
}

/**
* get the current linear velocity of the haptic device end affector
*/
FVector AHapticsManager::getHapticDeviceLinearVelocity() {
	return UHapticThreadOutput::getInst().getHapticCursorLinearVelocity();
}

/**
* get the current angular velocity of the haptic device end affector
*/
FVector AHapticsManager::getHapticDeviceAngularVelocity() {
	return UHapticThreadOutput::getInst().getHapticCursorAngularVelocity();
}

/**
* get the current rotation of the haptic device end affector
*/
FMatrix AHapticsManager::getHapticDeviceRotation() {
	return UHapticThreadOutput::getInst().getHapticCursorRotation();
}

/**
* get the current rotation of the haptic device end affector as an unreal rotator
*/
FRotator AHapticsManager::getHapticDeviceRotationAsUnrealRotator() {
	FMatrix rotation = UHapticThreadOutput::getInst().getHapticCursorRotation();
	FVector euler = rotation.Rotator().Euler();
	return FRotator(-euler.Y, -euler.Z, euler.X);
}

/**
* get the current position of the haptic device end affector in unreal coordinates
*/
FVector AHapticsManager::getHapticDevicePositionInUnrealCoordinates() {
	FVector position = UHapticThreadOutput::getInst().getHapticCursorPosition();
	return FVector(-position.X * 1000, position.Y * 1000, position.Z * 1000);
}

/**
* broad casts the new haptic data as a multicast delegate 
*/
void AHapticsManager::broadCastNewHapticData(FVector position, FMatrix rotation, FVector linearVelocity, FVector angularVelocity) {
	OnHapticTick.Broadcast(position, rotation, linearVelocity, angularVelocity);
}
