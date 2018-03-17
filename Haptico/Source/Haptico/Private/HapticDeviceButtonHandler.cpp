/* Copyright (C) 2018 Sinan Demirtas
*
* This software may be distributed under the terms
* of the MIT license. See the LICENSE file for details.
*/
#include "IHaptico.h"
#include "HapticDeviceButtonHandler.h"

/**
 * creates an instance of the button handler
*/
HapticDeviceButtonHandler::HapticDeviceButtonHandler(IHaptico* hap)
{
	haptico = hap;
}

/** checks if the first button of the haptic device is clicked. This Method only returns true ones when the button is pressed until it is released again.
*/
bool HapticDeviceButtonHandler::button1Clicked() {
	bool button1Pressed = haptico->isFirstButtonActivated();
	if (button1Pressed && !button1AlreadyPressed) {
		button1AlreadyPressed = true;
		return true;
	}
	else if (button1Pressed && button1AlreadyPressed) {
		return false;
	}
	else if (!button1Pressed && button1AlreadyPressed) {
		button1AlreadyPressed = false;
	}
	return false;
}

/** checks if the second button of the haptic device is clicked. This Method only returns true ones when the button is pressed until it is released again.
*/
bool HapticDeviceButtonHandler::button2Clicked() {
	bool button2Pressed = haptico->isSecondButtonActivated();
	if (button2Pressed && !button2AlreadyPressed) {
		button2AlreadyPressed = true;
		return true;
	}
	else if (button2Pressed && button2AlreadyPressed) {
		return false;
	}
	else if (!button2Pressed && button2AlreadyPressed) {
		button2AlreadyPressed = false;
	}
	return false;
}