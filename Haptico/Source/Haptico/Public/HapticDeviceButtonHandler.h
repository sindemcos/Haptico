/* Copyright (C) 2018 Sinan Demirtas
*
* This software may be distributed under the terms
* of the MIT license. See the LICENSE file for details.
*/
#pragma once

#include "CoreMinimal.h"
#include "IHaptico.h"

class HAPTICO_API HapticDeviceButtonHandler
{
public:
	HapticDeviceButtonHandler(IHaptico* haptico);
	bool button1Clicked();
	bool button2Clicked();

private:
	bool button1AlreadyPressed = false;
	bool button2AlreadyPressed = false;
	IHaptico* haptico;

};
