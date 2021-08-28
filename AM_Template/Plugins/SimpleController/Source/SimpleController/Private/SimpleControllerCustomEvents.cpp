// Copyright 2018-2020 David Romanski (Socke). All Rights Reserved.

#include "SimpleControllerCustomEvents.h"


USimpleControllerCustomEvents::USimpleControllerCustomEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

	//onControllerButton_A.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_A);
	//onControllerButton_B.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_B);
	//onControllerButton_X.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_X);
	//onControllerButton_Y.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_Y);
	/*
	onControllerButton_BACK.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_BACK);
	onControllerButton_GUIDE.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_GUIDE);
	onControllerButton_START.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_START);
	onControllerButton_LEFTSTICK.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_LEFTSTICK);
	onControllerButton_RIGHTSTICK.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_RIGHTSTICK);
	*/
	//onControllerButton_LEFTSHOULDER.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_LEFTSHOULDER);
	//onControllerButton_RIGHTSHOULDER.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_RIGHTSHOULDER);
	//onControllerButton_DPAD_UP.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_DPAD_UP);
	//onControllerButton_DPAD_DOWN.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_DPAD_DOWN);
	//onControllerButton_DPAD_LEFT.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_DPAD_LEFT);
	//onControllerButton_DPAD_RIGHT.AddDynamic(this, &USimpleControllerCustomEvents::controllerButton_DPAD_RIGHT);
}

void USimpleControllerCustomEvents::controllerButton_A(const enum ESimpleControllerButtonStatus status) {
	buttonA = status;
}
void USimpleControllerCustomEvents::controllerButton_B(const enum ESimpleControllerButtonStatus status) {
	buttonB = status;
}
void USimpleControllerCustomEvents::controllerButton_X(const enum ESimpleControllerButtonStatus status) {
	buttonX = status;
}
void USimpleControllerCustomEvents::controllerButton_Y(const enum ESimpleControllerButtonStatus status) {
	buttonY = status;
}
void USimpleControllerCustomEvents::controllerButton_BACK(const enum ESimpleControllerButtonStatus status) {}
void USimpleControllerCustomEvents::controllerButton_GUIDE(const enum ESimpleControllerButtonStatus status) {}
void USimpleControllerCustomEvents::controllerButton_START(const enum ESimpleControllerButtonStatus status) {}
void USimpleControllerCustomEvents::controllerButton_LEFTSTICK(const enum ESimpleControllerButtonStatus status) {}
void USimpleControllerCustomEvents::controllerButton_RIGHTSTICK(const enum ESimpleControllerButtonStatus status) {}
void USimpleControllerCustomEvents::controllerButton_LEFTSHOULDER(const enum ESimpleControllerButtonStatus status) {}
void USimpleControllerCustomEvents::controllerButton_RIGHTSHOULDER(const enum ESimpleControllerButtonStatus status) {}
void USimpleControllerCustomEvents::controllerButton_DPAD_UP(const enum ESimpleControllerButtonStatus status) {
	buttonDPAD_UP = status;
}
void USimpleControllerCustomEvents::controllerButton_DPAD_DOWN(const enum ESimpleControllerButtonStatus status) {
	buttonDPAD_DOWN = status;
}
void USimpleControllerCustomEvents::controllerButton_DPAD_LEFT(const enum ESimpleControllerButtonStatus status) {
	buttonDPAD_LEFT = status;
}
void USimpleControllerCustomEvents::controllerButton_DPAD_RIGHT(const enum ESimpleControllerButtonStatus status) {
	buttonDPAD_RIGHT = status;
}
void USimpleControllerCustomEvents::controllerButton_ALL_PRESSED(const enum ESimpleControllerAllButtonPressedStatus status) {}
void USimpleControllerCustomEvents::controllerButton_ALL_RELEASED(const enum ESimpleControllerAllButtonReleasedStatus status) {}

void USimpleControllerCustomEvents::controllerAxis_LEFT_X(float axisValue){}
void USimpleControllerCustomEvents::controllerAxis_LEFT_Y(float axisValue) {}
void USimpleControllerCustomEvents::controllerAxis_RIGHT_X(float axisValue) {}
void USimpleControllerCustomEvents::controllerAxis_RIGHT_Y(float axisValue) {}
void USimpleControllerCustomEvents::controllerAxis_TRIGGER_LEFT(float axisValue) {}
void USimpleControllerCustomEvents::controllerAxis_TRIGGER_RIGHT(float axisValue) {}
void USimpleControllerCustomEvents::controllerAxis_ALL(struct FSimpleControllerAxisStatus axisValues) {}