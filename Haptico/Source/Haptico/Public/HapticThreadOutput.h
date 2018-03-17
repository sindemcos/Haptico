/* Copyright (C) 2018 Sinan Demirtas
*
* This software may be distributed under the terms
* of the MIT license. See the LICENSE file for details.
*/
#pragma once
#include "CoreMinimal.h"

class HAPTICO_API UHapticThreadOutput
{
private:
	FVector hapticCursorPosition;
	FMatrix hapticCursorRotation;
	FVector hapticCursorLinearVelocity;
	FVector hapticCursorAngularVelocity;

public:
	static UHapticThreadOutput& getInst() {
		static UHapticThreadOutput instance;
		return instance;
	}
	UHapticThreadOutput();

	FVector getHapticCursorLinearVelocity();
	FVector getHapticCursorAngularVelocity();
	void setHapticCursorPosition(FVector position);
	FVector getHapticCursorPosition();
	void setHapticCursorRotation(FMatrix rotation);
	FMatrix getHapticCursorRotation();
	void setHapticCursorAngularVelocity(FVector angularVelocity);
	void setHapticCursorLinearVelocity(FVector linearVelocity);
};



