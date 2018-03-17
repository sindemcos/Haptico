/* Copyright (C) 2018 Sinan Demirtas
*
* This software may be distributed under the terms
* of the MIT license. See the LICENSE file for details.
*/
#pragma once
#include "CoreMinimal.h"

class HAPTICO_API UHapticThreadInput
{

private:
	bool runThread = true;
	FVector forceToApply;
	FVector torqueToApply;

public:
	static UHapticThreadInput& getInst() {
		static UHapticThreadInput instance;
		return instance;
	}
	bool shouldThreadRun();
	void setRunThread(bool);
	void setForceToApply(FVector force);
	void setTorqueToApply(FVector torque);
	FVector getForceToApply();
	FVector getTorqueToApply();
};