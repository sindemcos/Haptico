/* Copyright (C) 2018 Sinan Demirtas
*
* This software may be distributed under the terms
* of the MIT license. See the LICENSE file for details.
*/
#include "IHaptico.h"
#include "HapticThreadOutput.h"

/**
* initializes the class members when the class is created
*/
UHapticThreadOutput::UHapticThreadOutput()
{
	hapticCursorPosition = FVector(0, 0, 0);
	hapticCursorLinearVelocity = FVector(0, 0, 0);
	hapticCursorAngularVelocity = FVector(0, 0, 0);
	hapticCursorRotation = FMatrix(FVector(0, 0, 0), FVector(0, 0, 0), FVector(0, 0, 0), FVector(0, 0, 0));
}

/**
* sets the current position of the haptic device end affector
*/
void UHapticThreadOutput::setHapticCursorPosition(FVector position) {
	hapticCursorPosition = position;
}

/**
* gets the current position of the haptic device end affector
*/
FVector UHapticThreadOutput::getHapticCursorPosition() {
	return hapticCursorPosition;
}

/**
* sets the current rotation of the haptic device end affector
*/
void UHapticThreadOutput::setHapticCursorRotation(FMatrix rotation) {
	hapticCursorRotation = rotation;
}

/**
* gets the current rotation of the haptic device end affector
*/
FMatrix UHapticThreadOutput::getHapticCursorRotation() {
	return hapticCursorRotation;
}

/**
* gets the current linear velocity of the haptic device end affector
*/
FVector UHapticThreadOutput::getHapticCursorLinearVelocity() {
	return hapticCursorLinearVelocity;
}

/**
* gets the current angular velocity of the haptic device end affector
*/
FVector UHapticThreadOutput::getHapticCursorAngularVelocity() {
	return hapticCursorAngularVelocity;
}

/**
* sets the current angular velocity of the haptic device end affector
*/
void UHapticThreadOutput::setHapticCursorAngularVelocity(FVector angularVelocity){
	hapticCursorAngularVelocity = angularVelocity;
}

/**
* sets the current linear velocity of the haptic device end affector
*/
void UHapticThreadOutput::setHapticCursorLinearVelocity(FVector linearVelocity) {
	hapticCursorLinearVelocity = linearVelocity;
}