/* Copyright (C) 2018 Sinan Demirtas
*
* This software may be distributed under the terms
* of the MIT license. See the LICENSE file for details.
*/
#include "IHaptico.h"
#include "HapticThreadInput.h"

/**
* returns true if the haptic thread is supposed to be running
*/
bool UHapticThreadInput::shouldThreadRun() {
	return runThread; 
}

/**
* determines if the haptic thread should run. If this is to false while the haptic thread runs, it will stop the thread. 
*/
void UHapticThreadInput::setRunThread(bool r) { 
	runThread = r;
}

/**
* sets the force that will be given to the haptic thread so that the force is applied in the next tick
*/
void UHapticThreadInput::setForceToApply(FVector force) {
	forceToApply = force;
}

/**
* gets the force that should be applied in the next haptic tick
*/
FVector UHapticThreadInput::getForceToApply() {
	return forceToApply;
}

/**
* sets the torque that will be given to the haptic thread so that the torque is applied in the next tick
*/
void UHapticThreadInput::setTorqueToApply(FVector torque) {
	torqueToApply = torque;
}

/**
* gets the torque that should be applied in the next haptic tick
*/
FVector UHapticThreadInput::getTorqueToApply() {
	return torqueToApply;
}
