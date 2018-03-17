/* Copyright (C) 2018 Sinan Demirtas
*
* This software may be distributed under the terms
* of the MIT license. See the LICENSE file for details.
*/
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

/**
 * The public interface to the Haptico module.
 */
class IHaptico : public IModuleInterface
{
	
public:

	/**
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline IHaptico& Get()
	{
		return FModuleManager::LoadModuleChecked< IHaptico >("Haptico");
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "Haptico" );
	}

	virtual FVector getForce() = 0;
	virtual FVector getTorque() = 0;
	virtual bool isFirstButtonActivated() = 0;
	virtual bool isSecondButtonActivated() = 0;
	virtual FVector getLinearVelocity() = 0;
	virtual FVector getAngularVelocity() = 0;
	virtual FVector getPosition() = 0;
	virtual FMatrix getRotation() = 0;
	virtual void setForce(FVector force) = 0;
	virtual void setTorque(FVector torque) = 0;
	virtual void setForceAndTorque(FVector force, FVector torque) = 0;
	virtual bool connect() = 0;
	virtual void disconnect() = 0;
};

