/* Copyright (C) 2018 Sinan Demirtas
*
* This software may be distributed under the terms
* of the MIT license. See the LICENSE file for details.
*/
#include "IHaptico.h"
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "GenericPlatform.h"
#include "GenericPlatformProcess.h"
THIRD_PARTY_INCLUDES_START
#include <chai3d.h>
THIRD_PARTY_INCLUDES_END

using namespace chai3d;

/**
* this class provides the basic functionality to access the haptic device
*/
class FHaptico : public IHaptico
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	FVector getPosition();
	FMatrix getRotation();
	FVector getForce();
	FVector getTorque();
	FVector getLinearVelocity();
	FVector getAngularVelocity();
	bool isFirstButtonActivated();
	bool isSecondButtonActivated();
	bool connect();
	void disconnect();
	void setForce(FVector);
	void setTorque(FVector);
	void setForceAndTorque(FVector force, FVector torque);

private:
	cPrecisionClock clock;
	cGenericHapticDevicePtr hapticDevice;
	cHapticDeviceHandler handler;
	int tickCount = 0;
	bool alreadyConnectedWithPhantom = false;
};

IMPLEMENT_MODULE(FHaptico, Haptico)

void FHaptico::StartupModule(){
}

void FHaptico::ShutdownModule(){
}

/*
 * opens a connection to the haptic device to make it ready for communication
*/
bool FHaptico::connect() {
	if (handler.getDevice(hapticDevice, 0)) {
		hapticDevice->open();
		return true;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("could not connect to a haptic device "));
		return false;
	}
}

/*
* disconnects from the haptic device
*/
void FHaptico::disconnect() {
	hapticDevice->setForce(cVector3d(0, 0, 0));
}

/**
* gets the current force of the haptic device
*/
FVector FHaptico::getForce() {
	cVector3d force(0, 0, 0);
	hapticDevice->getForce(force);
	return FVector(force.x(), force.y(), force.z());
}

/**
* checks if the first button is activated
*/
bool FHaptico::isFirstButtonActivated() {
	bool result = false;
	hapticDevice->getUserSwitch(0, result);
	return result;
}

/**
* checks if the second button is activated
*/
bool FHaptico::isSecondButtonActivated() {
	bool result = false;
	hapticDevice->getUserSwitch(1, result);
	return result;
}

/*
* gets the current linear velocity
*/
FVector FHaptico::getLinearVelocity() {
	cVector3d chai_res(0, 0, 0);
	hapticDevice->getLinearVelocity(chai_res);
	return FVector(chai_res.x(), chai_res.y(), chai_res.z());
}

/*
* gets the current angular velocity
*/
FVector FHaptico::getAngularVelocity() {
	cVector3d chai_res(0, 0, 0);
	hapticDevice->getAngularVelocity(chai_res);
	return FVector(chai_res.x(), chai_res.y(), chai_res.z());
}

/**
* gets the current position of the haptic device
*/
FVector FHaptico::getPosition() {
	cVector3d position(0, 0, 0);
	hapticDevice->getPosition(position);
	return FVector(position.x(), position.y(), position.z());
}

/**
* gets the current rotation of the haptic device as a 3x3 Matrix
*/
FMatrix FHaptico::getRotation() {
	cMatrix3d rotation(0, 0, 0);
	hapticDevice->getRotation(rotation);
	return FMatrix(FVector(rotation.getCol0().x(), rotation.getCol0().y(), rotation.getCol0().z()),
				   FVector(rotation.getCol1().x(), rotation.getCol1().y(), rotation.getCol1().z()),
				   FVector(rotation.getCol2().x(), rotation.getCol2().y(), rotation.getCol2().z()),
				   FVector(0, 0, 0));
}

/**
* sends a force to the haptic device
*/
void FHaptico::setForce(FVector force) {
	cVector3d cForce(force.X, force.Y, force.Z);
	hapticDevice->setForce(cForce);
}

/**
* sends a torque to the haptic device
*/
void FHaptico::setTorque(FVector torque) {
	cVector3d cTorque(torque.X, torque.Y, torque.Z);
	cVector3d cForce(0,0,0);
	hapticDevice->getForce(cForce);
	hapticDevice->setForceAndTorque(cForce, cTorque);
}

/**
* sends force and torque to the haptic device
*/
void FHaptico::setForceAndTorque(FVector force, FVector torque) {
	cVector3d cForce(force.X, force.Y, force.Z);
	cVector3d cTorque(torque.X, torque.Y, torque.Z);
	hapticDevice->setForceAndTorque(cForce, cTorque);
}


/**
* gets the current torque of the haptic device
*/
FVector FHaptico::getTorque() {
	cVector3d torque(0, 0, 0);
	hapticDevice->getTorque(torque);
	return FVector(torque.x(), torque.y(), torque.z());
}
