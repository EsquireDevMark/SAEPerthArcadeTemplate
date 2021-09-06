// Copyright 2018-2021 David Romanski(Socke). All Rights Reserved.

#include "SimpleControllerBPLibrary.h"
#include "SimpleController.h"


USimpleControllerBPLibrary* USimpleControllerBPLibrary::controllerTarget;
//static TMap<FString, FString> controllerNames;
//static TMap<int32, TMap<int32, int32>> buttonMapping;

USimpleControllerBPLibrary::USimpleControllerBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {

	SimpleControllerList* list = new SimpleControllerList();
	controllerNames = list->getConhtrollerNames();

	initControllerEvents(16);

	controllerTarget = this;
	//onButtonDownEventDelegate.AddDynamic(this, &USimpleControllerBPLibrary::buttonDownEventDelegate);
	AddToRoot();

	//initController(0.01f);

	for (int32 i = 0; i < 128; i++){
		connectionIndexArray.Add(false);
	}
}

USimpleControllerBPLibrary* USimpleControllerBPLibrary::getSimpleControllerTarget() {
	return controllerTarget;
}

void USimpleControllerBPLibrary::buttonDownEventDelegate(const FString deviceID, const int32 buttonID, const int32 deviceIndex, const struct FSimpleControllerDevice device) {}
void USimpleControllerBPLibrary::buttonUpEventDelegate(const FString deviceID, const int32 buttonID, const int32 deviceIndex, const struct FSimpleControllerDevice device) {}
void USimpleControllerBPLibrary::directionalPadEventDelegate(const FString deviceID, const int32 directionalPadValue, int32 directionalPadIndex, const int32 deviceIndex, const FSimpleControllerDevice device) {}
void USimpleControllerBPLibrary::ballMovedEventDelegate(const FString deviceID, const int32 ballID, const int32 xRel, const int32 yRel, const FSimpleControllerDevice device) {}
void USimpleControllerBPLibrary::axisMovedEventDelegate(const FString deviceID, const int32 axisID, const float axisValue, const int32 deviceIndex, const struct FSimpleControllerDevice device) {}
void USimpleControllerBPLibrary::deviceAttachedEventDelegate(const FSimpleControllerDevice device) {}
void USimpleControllerBPLibrary::deviceDetachedEventDelegate(const FSimpleControllerDevice device) {}
//void USimpleControllerBPLibrary::comboEventDelegate(const FSimpleControllerDevice device, const FString comboName, const float comboTimeInSeconds){}


void USimpleControllerBPLibrary::initController(ESimpleControllerRefreshRate refreshRate, bool xinputAsDirectinput, bool useGamepadAPIP) {
	if (isRun || refreshThread != nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin was initialized more than one time. This can lead to problems. Please make sure to initialize the plugin only once."));
		return;
	}
	useGamepadAPI = useGamepadAPIP;
	isRun = true;
	if (xinputAsDirectinput) {
		SDL_SetHint(SDL_HINT_XINPUT_ENABLED, "0");
	}
	if (useGamepadAPI) {
		SDL_Init(SDL_INIT_JOYSTICK | SDL_INIT_GAMECONTROLLER | SDL_INIT_HAPTIC);
		SDL_JoystickEventState(SDL_ENABLE);
		SDL_GameControllerEventState(SDL_ENABLE);
	}
	else {
		SDL_Init(SDL_INIT_JOYSTICK | SDL_INIT_HAPTIC);
		SDL_JoystickEventState(SDL_ENABLE);
	}
	

	initControllerEvents(16);

	//lastPressedGamepadButton.AddUninitialized(50);

	float sleepTime = 1 / 60;
	switch (refreshRate)
	{
	case ESimpleControllerRefreshRate::Index_30:
		sleepTime = 1 / 30;
		break;
	case ESimpleControllerRefreshRate::Index_60:
		sleepTime = 1 / 60;
		break;
	case ESimpleControllerRefreshRate::Index_120:
		sleepTime = 1 / 120;
		break;
	case ESimpleControllerRefreshRate::Index_240:
		sleepTime = 1 / 240;
		break;

	}

	refreshThread = new FRefreshGamepadEventsThread(sleepTime);
}

void USimpleControllerBPLibrary::stopController() {


	if (refreshThread != nullptr) {
		refreshThread->stopThread();
		refreshThread = nullptr;
	}

}


void USimpleControllerBPLibrary::stopControllerInternal() {

	//gamepadCombos.Empty();

	for (auto& element : persistentEffects) {
		if (element.Value != nullptr) {
			element.Value->stopThread();
		}
	}


	TArray<int32> deviceIndexes;
	for (auto& element : controllerDeviceStructMap) {
		deviceIndexes.Add(element.Key);
	}
	for (int32 i = 0; i < deviceIndexes.Num(); i++) {
		deviceDetachedEvent(deviceIndexes[i]);
	}


	deviceIndexes.Empty();
	controllerDeviceStructMap.Empty();
	persistentEffects.Empty();
	controllerEvents.Empty();

	SDL_Quit();
	isRun = false;
}


void USimpleControllerBPLibrary::buttonDownEvent(int32 deviceIndex, int32 buttonID) {

	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		//mapping
		if (d.mappedButtons.Find(buttonID) != nullptr) {
			buttonID = *d.mappedButtons.Find(buttonID);
		}
	}
	AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, buttonID]() {
		controllerTarget->onButtonDownEventDelegate.Broadcast(d.deviceID, buttonID, deviceIndex, d);
	});

}


void USimpleControllerBPLibrary::controllerButtonDownEvent(int32 deviceIndex, int32 buttonID) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, buttonID]() {
		if (d.sdlGameController != nullptr) {

			switch (buttonID)
			{
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_A:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_A.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::ButtonFaceBottom);
				//controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::ButtonFaceBottom, d);
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_B:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_B.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::ButtonFaceRight);
				//controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::ButtonFaceRight, d);
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_X:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_X.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::ButtonFaceLeft);
				//controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::ButtonFaceLeft, d);
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_Y:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_Y.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::ButtonFaceTop);
				//controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::ButtonFaceTop, d);
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_BACK:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_BACK.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::BACK);
				//controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::BACK, d);
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_GUIDE:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_GUIDE.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::GUIDE);
				//controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::GUIDE, d);
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_START:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_START.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::START);
				//controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::START, d);
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_LEFTSTICK:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_LEFTSTICK.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::LEFTSTICK);
				//controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::LEFTSTICK, d);
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_RIGHTSTICK:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_RIGHTSTICK.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::RIGHTSTICK);
				//controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::RIGHTSTICK, d);
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_LEFTSHOULDER.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::LEFTSHOULDER);
				//controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::LEFTSHOULDER, d);
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_RIGHTSHOULDER.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::RIGHTSHOULDER);
				//controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::RIGHTSHOULDER, d);
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_DPAD_UP:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_DPAD_UP.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::DPAD_UP);
				//if (controllerTarget->getControllerEvents()[d.connectionIndex]->buttonDPAD_LEFT == ESimpleControllerButtonStatus::Pressed) {
				//	controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTUP, d);
				//}
				//else {
				//	if (controllerTarget->getControllerEvents()[d.connectionIndex]->buttonDPAD_RIGHT == ESimpleControllerButtonStatus::Pressed) {
				//		controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTUP, d);
				//	}
				//	else {
				//		controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_UP, d);
				//	}
				//}
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_DPAD_DOWN:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_DPAD_DOWN.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::DPAD_DOWN);
				//if (controllerTarget->getControllerEvents()[d.connectionIndex]->buttonDPAD_RIGHT == ESimpleControllerButtonStatus::Pressed) {
				//	controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTDOWN, d);
				//	UE_LOG(LogTemp, Warning, TEXT("down right"));
				//}
				//else {
				//	if (controllerTarget->getControllerEvents()[d.connectionIndex]->buttonDPAD_LEFT == ESimpleControllerButtonStatus::Pressed) {
				//		controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTDOWN, d);
				//	}
				//	else {
				//		controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_DOWN, d);
				//		UE_LOG(LogTemp, Warning, TEXT("down"));
				//	}
				//}
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_DPAD_LEFT:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_DPAD_LEFT.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::DPAD_LEFT);
				//if (controllerTarget->getControllerEvents()[d.connectionIndex]->buttonDPAD_DOWN == ESimpleControllerButtonStatus::Pressed) {
				//	controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTDOWN, d);
				//}
				//else {
				//	if (controllerTarget->getControllerEvents()[d.connectionIndex]->buttonDPAD_UP == ESimpleControllerButtonStatus::Pressed) {
				//		controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTUP, d);
				//	}
				//	else {
				//		controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_LEFT, d);
				//	}
				//}
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_DPAD_RIGHT.Broadcast(ESimpleControllerButtonStatus::Pressed);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_PRESSED.Broadcast(ESimpleControllerAllButtonPressedStatus::DPAD_RIGHT);
				//if (controllerTarget->getControllerEvents()[d.connectionIndex]->buttonDPAD_DOWN == ESimpleControllerButtonStatus::Pressed) {
				//	controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTDOWN, d);
				//	UE_LOG(LogTemp, Warning, TEXT("right down"));
				//}
				//else {
				//	if (controllerTarget->getControllerEvents()[d.connectionIndex]->buttonDPAD_UP == ESimpleControllerButtonStatus::Pressed) {
				//		controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTUP, d);
				//	}
				//	else {
				//		controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHT, d);
				//		UE_LOG(LogTemp, Warning, TEXT("right"));
				//	}
				//}
				break;
			}
		}
		});

}

void USimpleControllerBPLibrary::buttonUpEvent(int32 deviceIndex, int32 buttonID) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		//mapping
		if (d.mappedButtons.Find(buttonID) != nullptr) {
			buttonID = *d.mappedButtons.Find(buttonID);
		}
	}
	AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, buttonID]() {
		controllerTarget->onButtonUpEventDelegate.Broadcast(d.deviceID, buttonID, deviceIndex, d);
	});

}


void USimpleControllerBPLibrary::controllerButtonUpEvent(int32 deviceIndex, int32 buttonID) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, buttonID]() {
		if (d.sdlGameController != nullptr) {
			switch (buttonID)
			{
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_A:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_A.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::ButtonFaceBottom);
				
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_B:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_B.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::ButtonFaceRight);
				
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_X:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_X.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::ButtonFaceLeft);
				
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_Y:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_Y.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::ButtonFaceTop);
				
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_BACK:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_BACK.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::BACK);
				
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_GUIDE:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_GUIDE.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::GUIDE);
				
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_START:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_START.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::START);
				
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_LEFTSTICK:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_LEFTSTICK.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::LEFTSTICK);
				
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_RIGHTSTICK:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_RIGHTSTICK.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::RIGHTSTICK);
				
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_LEFTSHOULDER.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::LEFTSHOULDER);
				
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_RIGHTSHOULDER.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::RIGHTSHOULDER);
				
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_DPAD_UP:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_DPAD_UP.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::DPAD_UP);
				/*controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_UP, d);
				UE_LOG(LogTemp, Warning, TEXT("up r"));*/
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_DPAD_DOWN:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_DPAD_DOWN.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::DPAD_DOWN);
				/*controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_DOWN, d);
				UE_LOG(LogTemp, Warning, TEXT("down r"));*/
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_DPAD_LEFT:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_DPAD_LEFT.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::DPAD_LEFT);
				/*controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_LEFT, d);
				UE_LOG(LogTemp, Warning, TEXT("left r"));*/
				break;
			case SDL_GameControllerButton::SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_DPAD_RIGHT.Broadcast(ESimpleControllerButtonStatus::Released);
				controllerTarget->getControllerEvents()[d.connectionIndex]->onControllerButton_ALL_RELEASED.Broadcast(ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHT);
				/*controllerTarget->checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHT, d);
				UE_LOG(LogTemp, Warning, TEXT("right r"));*/
				break;
			}
		}
		});

}

//void USimpleControllerBPLibrary::registerGamepadCombo(FString name, float maxTimeInSeconds, TArray<ESimpleControllerComboGamepadAction> combosArray) {
//	if (combosArray.Num() > 50) {
//		UE_LOG(LogTemp, Error, TEXT("SimpleController Array is too big. Maximum 50 combos allowed."));
//		return;
//	}
//
//	if (combosArray.Num() < 2) {
//		UE_LOG(LogTemp, Error, TEXT("SimpleController At least two buttons must be placed in the combo Array."));
//		return;
//	}
//
//	struct FSimpleControllerComboStruct cs;
//	for (int32 i = 0; i < combosArray.Num(); i++){
//		cs.buttons.Add((ESimpleControllerAllButtonReleasedStatus)combosArray[i]);
//	}
//	gamepadCombos.Add(name, cs);
//}
//
//void USimpleControllerBPLibrary::removeGamepadCombo(FString name){
//	gamepadCombos.Remove(name);
//}

//void USimpleControllerBPLibrary::checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus button, struct FSimpleControllerDevice device) {
//	if (gamepadCombos.Num() == 0)
//		return;
//	//10000000 = 1 second /(10000)
//	//FDateTime::Now().GetTicks();
//	lastPressedGamepadButton.RemoveAt(0);
//	lastPressedGamepadButton.Add(button);
//	for (auto& comboMap : gamepadCombos) {
//		bool comboFound = true;
//		//int64 startTime = FDateTime::Now().GetTicks()/ 10000000;
//		if (comboMap.Value.buttons[0] == button) {
//			comboMap.Value.startButtonTime = FDateTime::Now().GetTicks();
//		}
//		for (int32 i = comboMap.Value.buttons.Num()-1; i >= 0; i--){
//			if (comboMap.Value.buttons[i] != lastPressedGamepadButton.Last(comboMap.Value.buttons.Num() - i-1)) {
//				comboFound = false;
//				//UE_LOG(LogTemp, Warning, TEXT("Combo check FALSE: %i %i"), comboMap.Value.buttons[i], lastPressedGamepadButton.Last(comboMap.Value.buttons.Num() - i - 1));
//				break;
//			}
//			//UE_LOG(LogTemp, Warning, TEXT("Combo check TRUE: %i %i"), comboMap.Value.buttons[i], lastPressedGamepadButton.Last(comboMap.Value.buttons.Num() - i - 1));
//		}
//		if (comboFound) {
//			//UE_LOG(LogTemp, Error, TEXT("Combo found: %s %f"), *comboMap.Key, blah);
//			controllerTarget->oncomboEventDelegate.Broadcast(device, comboMap.Key, (((float)(FDateTime::Now().GetTicks() - comboMap.Value.startButtonTime)) / 10000000));
//		}
//	}
//}

void USimpleControllerBPLibrary::directionalPadEvent(int32 deviceIndex, int32 directionalPadValue, int32 directionalPadIndex) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, directionalPadValue, directionalPadIndex]() {
		controllerTarget->onDirectionalPadEventDelegate.Broadcast(d.deviceID, directionalPadValue, directionalPadIndex, deviceIndex, d);
		});
}

void USimpleControllerBPLibrary::ballEvent(int32 deviceIndex, int32 ballIndex, int32 xRel, int32 yRel) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	AsyncTask(ENamedThreads::GameThread, [d, ballIndex, xRel, yRel]() {
		controllerTarget->onBallMovedEventDelegate.Broadcast(d.deviceID, ballIndex, xRel, yRel, d);
	});
}

void USimpleControllerBPLibrary::axisMovedEvent(int32 deviceIndex, int32 axisID, int32 axisValueSDL) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		//mapping
		if (d.mappedAxis.Find(axisID) != nullptr) {
			axisID = *d.mappedAxis.Find(axisID);
		}
		//inverting
		if (d.invertedAxis.Find(axisID) != nullptr) {
			axisValueSDL = axisValueSDL * (-1);
		}
	}

	float axisValue = 0;
	if (axisValueSDL < 0) {
		axisValue = ((float)axisValueSDL / maxAxisValueNegative) * -1;
	}
	else if (axisValueSDL > 0) {
		axisValue = (float)axisValueSDL / maxAxisValuePositive;
	}

	//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYAXISMOTION percent: %s"), *FString::SanitizeFloat(percent));
	AsyncTask(ENamedThreads::GameThread, [d, axisID, axisValue]() {
		controllerTarget->onaxisMovedEventDelegate.Broadcast(d.deviceID, axisID, axisValue, d.deviceIndex, d);
	});


}

void USimpleControllerBPLibrary::controllerAxisMovedEvent(int32 deviceIndex, int32 axisID, int32 axisValueSDL) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		//inverting
		if (d.invertedAxis.Find(axisID) != nullptr) {
			axisValueSDL = axisValueSDL * (-1);
		}
	}


	if (d.sdlGameController != nullptr) {
		gamepadAxisRightXValues[d.connectionIndex] = sdlAxisValueToUE4AxisValueX(SDL_GameControllerGetAxis(d.sdlGameController, SDL_CONTROLLER_AXIS_RIGHTX));
		gamepadAxisRightYValues[d.connectionIndex] = sdlAxisValueToUE4AxisValueY(SDL_GameControllerGetAxis(d.sdlGameController, SDL_CONTROLLER_AXIS_RIGHTY));
		gamepadAxisLeftXValues[d.connectionIndex] = sdlAxisValueToUE4AxisValueX(SDL_GameControllerGetAxis(d.sdlGameController, SDL_CONTROLLER_AXIS_LEFTX));
		gamepadAxisLeftYValues[d.connectionIndex] = sdlAxisValueToUE4AxisValueY(SDL_GameControllerGetAxis(d.sdlGameController, SDL_CONTROLLER_AXIS_LEFTY));
		gamepadAxisLeftTriggerValues[d.connectionIndex] = sdlAxisValueToUE4AxisValueTrigger(SDL_GameControllerGetAxis(d.sdlGameController, SDL_CONTROLLER_AXIS_TRIGGERLEFT));
		gamepadAxisRightTriggerValues[d.connectionIndex] = sdlAxisValueToUE4AxisValueTrigger(SDL_GameControllerGetAxis(d.sdlGameController, SDL_CONTROLLER_AXIS_TRIGGERRIGHT));
	}

}

void USimpleControllerBPLibrary::removeDeviceFromConnectionIndex(int32 deviceIndex){
	if (connectionIndexMap.Find(deviceIndex) != nullptr) {
		int32 index = *connectionIndexMap.Find(deviceIndex);
		if (index >= 0 && index < connectionIndexArray.Num()) {
			connectionIndexMap.Remove(deviceIndex);
			connectionIndexMapReverse.Remove(index);
			connectionIndexArray[index] = false;
		}
	}
}

TArray<USimpleControllerCustomEvents*>& USimpleControllerBPLibrary::getControllerEvents(){
	return controllerEvents;
}

TArray<float>& USimpleControllerBPLibrary::getGamepadAxisLeftXValues(){
	return gamepadAxisLeftXValues;
}
TArray<float>& USimpleControllerBPLibrary::getGamepadAxisLeftYValues() {
	return gamepadAxisLeftYValues;
}
TArray<float>& USimpleControllerBPLibrary::getGamepadAxisRightXValues() {
	return gamepadAxisRightXValues;
}
TArray<float>& USimpleControllerBPLibrary::getGamepadAxisRightYValues() {
	return gamepadAxisRightYValues;
}
TArray<float>& USimpleControllerBPLibrary::getGamepadAxisLeftTriggerValues() {
	return gamepadAxisLeftTriggerValues;
}
TArray<float>& USimpleControllerBPLibrary::getGamepadAxisRightTriggerValues() {
	return gamepadAxisRightTriggerValues;
}
TArray<float>& USimpleControllerBPLibrary::getGamepadAxisMaxValues() {
	return gamepadAxisMaxValues;
}



//FPersistentEventsThread* USimpleControllerBPLibrary::getPersistentEffectThread(ESimpleControllerPersistentEventRefreshRate refreshRate){
//	return *persistentEffects.Find(refreshRate);
//}

void USimpleControllerBPLibrary::deviceAttachedEvent(int32 deviceIndex) {
	SDL_Joystick* joystick = nullptr;
	SDL_GameController* sdlGameController = nullptr;
	if (useGamepadAPI && SDL_IsGameController(deviceIndex) == SDL_TRUE) {
		sdlGameController = SDL_GameControllerOpen(deviceIndex);
		joystick = SDL_GameControllerGetJoystick(sdlGameController);
	}
	else {
		joystick = SDL_JoystickOpen(deviceIndex);
	}
	 

	if (joystick == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Can't connect to controller: %i"), deviceIndex);
		return;
	}

	//it changes allways ..... set the correct value
	SDL_JoystickInstanceID(joystick);

	struct FSimpleControllerDevice d = generateControllerStruct(deviceIndex, SDL_JoystickInstanceID(joystick), joystick, sdlGameController);
	controllerDeviceStructMap.Add(SDL_JoystickInstanceID(joystick), d);

	AsyncTask(ENamedThreads::GameThread, [d]() {
		controllerTarget->ondeviceAttachedEventDelegate.Broadcast(d);
	});

}

void USimpleControllerBPLibrary::deviceDetachedEvent(int32 deviceIndex) {
	if (controllerDeviceStructMap.Find(deviceIndex) == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Can't disconnect controller: %i"), deviceIndex);
		return;
	}
	struct FSimpleControllerDevice d = *controllerDeviceStructMap.Find(deviceIndex);
	controllerDeviceStructMap.Remove(deviceIndex);
	//if (close) {
		if (d.sdlGameController != nullptr && d.sdlGameController != NULL) {
			if (d.hasHaptic && d.sdlHaptic != nullptr && d.sdlHaptic != NULL) {
				SDL_HapticClose(d.sdlHaptic);
				d.hasHaptic = false;
			}
			SDL_GameControllerClose(d.sdlGameController);
			d.sdlJoystick = nullptr;
		}
		if (d.sdlJoystick != nullptr && d.sdlJoystick != NULL) {
			if (d.hasHaptic && d.sdlHaptic != nullptr && d.sdlHaptic != NULL) {
				SDL_HapticClose(d.sdlHaptic);
			}
			SDL_JoystickClose(d.sdlJoystick);
		}
	//}
	
	controllerDeviceStructMap.Remove(deviceIndex);
	AsyncTask(ENamedThreads::GameThread, [d]() {
		controllerTarget->ondeviceDetachedEventDelegate.Broadcast(d);
		controllerTarget->removeDeviceFromConnectionIndex(d.deviceIndex);		
	});
}




void USimpleControllerBPLibrary::breakDeviceInfo(FSimpleControllerDevice device, int32& deviceIndex, int32& connectionIndex, FString& deviceID, FString& deviceName, FString& controllerName, int32& vendorID, int32& productID, int32& numAxes, int32& numButtons, int32& numDirectionalPadAxes, int32& numBalls, bool& hasHaptic, bool& gamepadAPI_Support, bool& isXinput, ESimpleControllerType& type) {
	deviceIndex = device.deviceIndex;
	connectionIndex = device.connectionIndex;
	deviceID = device.deviceID;
	deviceName = device.deviceName;
	controllerName = device.controllerName;
	vendorID = device.vendorID;
	productID = device.productID;
	numAxes = device.numAxes;
	numButtons = device.numButtons;
	numDirectionalPadAxes = device.numDirectionalPadAxes;
	numBalls = device.numBalls;
	hasHaptic = device.hasHaptic;
	if (device.sdlGameController != nullptr) {
		gamepadAPI_Support = true;
	}
	isXinput = device.isXinput;
	type = device.controllerType;
}

void USimpleControllerBPLibrary::breakDeviceForceFeedbackInfo(FSimpleControllerDevice device, bool& hasHaptic, bool& forceFeedback_CONSTANT, bool& forceFeedback_SINE, bool& forceFeedback_LEFTRIGHT, bool& forceFeedback_TRIANGLE, bool& forceFeedback_SAWTOOTHUP, bool& forceFeedback_SAWTOOTHDOWN, bool& forceFeedback_RAMP, bool& forceFeedback_SPRING, bool& forceFeedback_DAMPER, bool& forceFeedback_INERTIA, bool& forceFeedback_FRICTION, bool& forceFeedback_CUSTOM, bool& forceFeedback_GAIN, bool& forceFeedback_AUTOCENTER, bool& forceFeedback_STATUS, bool& forceFeedback_PAUSE, bool& forceFeedback_POLAR, bool& forceFeedback_CARTESIAN, bool& forceFeedback_SPHERICAL, bool& forceFeedback_INFINITY, int32& maxSimultaneouslyEffects){
	forceFeedback_CONSTANT = device.forceFeedback_CONSTANT;
	forceFeedback_SINE = device.forceFeedback_SINE;
	forceFeedback_LEFTRIGHT = device.forceFeedback_LEFTRIGHT;
	forceFeedback_TRIANGLE = device.forceFeedback_TRIANGLE;
	forceFeedback_SAWTOOTHUP = device.forceFeedback_SAWTOOTHUP;
	forceFeedback_SAWTOOTHDOWN = device.forceFeedback_SAWTOOTHDOWN;
	forceFeedback_RAMP = device.forceFeedback_RAMP;
	forceFeedback_SPRING = device.forceFeedback_SPRING;
	forceFeedback_DAMPER = device.forceFeedback_DAMPER;
	forceFeedback_INERTIA = device.forceFeedback_INERTIA;
	forceFeedback_FRICTION = device.forceFeedback_FRICTION;
	forceFeedback_CUSTOM = device.forceFeedback_CUSTOM;
	forceFeedback_GAIN = device.forceFeedback_GAIN;
	forceFeedback_AUTOCENTER = device.forceFeedback_AUTOCENTER;
	forceFeedback_STATUS = device.forceFeedback_STATUS;
	forceFeedback_PAUSE = device.forceFeedback_PAUSE;
	forceFeedback_POLAR = device.forceFeedback_POLAR;
	forceFeedback_CARTESIAN = device.forceFeedback_CARTESIAN;
	forceFeedback_SPHERICAL = device.forceFeedback_SPHERICAL;
	forceFeedback_INFINITY = device.forceFeedback_INFINITY;
	maxSimultaneouslyEffects = device.maxSimultaneouslyEffects;
}


void USimpleControllerBPLibrary::breakAxisStatus(FSimpleControllerAxisStatus axisStatus, float& leftStickX, float& leftStickY, float& rightStickX, float& rightStickY, float& leftTrigger, float& rightTrigger) {
	leftStickX = axisStatus.leftStickX;
	leftStickY = axisStatus.leftStickY;
	rightStickX = axisStatus.rightStickX;
	rightStickY = axisStatus.rightStickY;
	leftTrigger = axisStatus.leftTrigger;
	rightTrigger = axisStatus.rightTrigger;
}

void USimpleControllerBPLibrary::getCurrentPowerLevel(FSimpleControllerDevice device, ESimpleControllerPowerLevel& powerLevel){
	if (device.sdlJoystick != nullptr)
		powerLevel = (ESimpleControllerPowerLevel)((uint8)SDL_JoystickCurrentPowerLevel(device.sdlJoystick) + 1);
}

void USimpleControllerBPLibrary::breakForceFeedbackEffect(FSimpleControllerForceFeedbackEffect forceFeedbackEffect, int32& effectID, bool& successful){
	effectID = forceFeedbackEffect.effectID;
	successful = forceFeedbackEffect.successful;
}

USimpleControllerCustomEvents* USimpleControllerBPLibrary::getGamepadEvent(ESimpleControllerConnectionIndex connectionIndex){
	if ((uint8)connectionIndex >= controllerEvents.Num()) {
		if (controllerEvents.Num() == 0) {
			initControllerEvents(16);
		}
		else {
			return nullptr;
		}
	}
	return controllerEvents[(uint8)connectionIndex];
}

USimpleControllerCustomEvents* USimpleControllerBPLibrary::getPersistentGamepadEvent(ESimpleControllerConnectionIndex connectionIndex, ESimpleControllerPersistentEventRefreshRate refreshRate){

	FString key = FString::FromInt((Uint8)refreshRate) + "_" + FString::FromInt((Uint8)connectionIndex);
	if (persistentEffects.Find(key) == nullptr) {
		float fps = (((float)refreshRate) + 1) * 10.0f;
		float sleepTime = 1.0f / fps;
		UE_LOG(LogTemp, Warning, TEXT("SimpleControllerBPLibrary::getPersistentEvent: sleep %f, fps %f"),sleepTime,fps);
		FPersistentEventsThread* pt = new FPersistentEventsThread(sleepTime, (Uint8)connectionIndex, this);
		persistentEffects.Add(key, pt);
	}

	return controllerEvents[(uint8)connectionIndex];
}


//void USimpleControllerBPLibrary::invertAxis(int32 deviceID, int32 axisID) {
//}

TArray<struct FSimpleControllerDevice> USimpleControllerBPLibrary::getConnectedControllers() {
	TArray<struct FSimpleControllerDevice> ta;
	for (auto& element : controllerDeviceStructMap) {
		ta.Add(element.Value);
	}
	return ta;
}

FSimpleControllerDevice USimpleControllerBPLibrary::findControllerByDeviceIndex(int32 deviceIndex, bool& found) {
	FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) == nullptr) {
		found = false;
		return d;
	}

	found = true;
	d = *controllerDeviceStructMap.Find(deviceIndex);
	return d;
}

FSimpleControllerDevice USimpleControllerBPLibrary::findControllerByDeviceID(FString deviceID, bool& found) {
	found = false;
	for (auto& element : controllerDeviceStructMap) {
		if (element.Value.deviceID.Equals(deviceID)) {
			found = true;
			return element.Value;
		}
	}
	return FSimpleControllerDevice();
}

void USimpleControllerBPLibrary::findDeviceIndexByConnectionIndex(int32 connectionIndex, bool& found, int32& deviceIndex){
	if (connectionIndexMapReverse.Find(connectionIndex) == nullptr) {
		found = false;
		deviceIndex = -1;
		return;
	}

	found = true;
	deviceIndex = *connectionIndexMapReverse.Find(connectionIndex);
}


void USimpleControllerBPLibrary::rumble(bool& successful, FString& errorMessage, struct FSimpleControllerDevice device, float strengthSmallMotor, float strengthLargeMotor, int32 lengthInMilliseconds) {
	if (!device.hasHaptic || device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device not found or device don't support haptic."));
		errorMessage = "Device not found or device don't support haptic.";
		successful = false;
		return;
	}
	if (strengthSmallMotor > 1)
		strengthSmallMotor = 1;
	if (strengthLargeMotor > 1)
		strengthLargeMotor = 1;

	SDL_Haptic* haptic = device.sdlHaptic;

	//Only one Rumble each device. remove/stop old effect
	if (device.effectID >= 0) {
		SDL_HapticDestroyEffect(haptic, device.effectID);
	}

	//just stop the effect
	if (lengthInMilliseconds <= 0) {
		controllerDeviceStructMap.Add(device.deviceIndex, device);
		return;
	}
	
	SDL_HapticEffect* effect = new SDL_HapticEffect();


	if (device.forceFeedback_LEFTRIGHT) {
		effect->type = SDL_HAPTIC_LEFTRIGHT;
	}
	else {
		effect->type = SDL_HAPTIC_SINE;
	}

	if (strengthSmallMotor > 0)
		effect->leftright.small_magnitude = (Sint16)(32767.0f * strengthSmallMotor);
	if (strengthLargeMotor > 0)
		effect->leftright.large_magnitude = (Sint16)(32767.0f * strengthLargeMotor);
	effect->leftright.length = lengthInMilliseconds;


	// Upload the effect
	device.effectID = SDL_HapticNewEffect(haptic, effect);
	if (device.effectID < 0) {
		UE_LOG(LogTemp, Error, TEXT("Effect could not be uploaded. This usually happens when the driver rejects the effect settings."));
		errorMessage = "Effect could not be uploaded. This usually happens when the driver rejects the effect settings.";
		successful = false;
	}
	else {
		//run
		SDL_HapticRunEffect(haptic, device.effectID, 1);
	}
	//save
	controllerDeviceStructMap.Add(device.deviceIndex, device);
}

void USimpleControllerBPLibrary::createForceFeedbackEffectConstant(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
	bool& successful,
	FString& errorMessage,
	struct FSimpleControllerDevice device,
	ESimpleControllerForceFeedbackDirectionType directionType,
	int32 directionX,
	int32 directionY,
	int32 directionZ,
	int32 length,
	int32 delay,
	float level,
	int32 attackLength,
	float attackLevel,
	int32 fadeLength,
	float fadeLevel) {

	if (!device.hasHaptic || device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device not found or device don't support haptic."));
		errorMessage = "Device not found or device don't support haptic.";
		successful = false;
		return;
	}


	SDL_HapticEffect* effect = new SDL_HapticEffect();
	SDL_Haptic* haptic = device.sdlHaptic;

	effect->type = SDL_HAPTIC_CONSTANT;
	effect->constant.length = length;
	effect->constant.delay = delay;
	effect->constant.level = (Sint16)(32767.0f * level);
	effect->constant.attack_length = attackLength;
	effect->constant.attack_level = (Sint16)(32767.0f * attackLevel);
	effect->constant.fade_length = fadeLength;
	effect->constant.fade_level = (Sint16)(32767.0f * fadeLevel);

	if (directionType == ESimpleControllerForceFeedbackDirectionType::CARTESIAN) {
		if (device.forceFeedback_CARTESIAN == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support CATESIAN direction."));
			errorMessage = "Device don't support CATESIAN direction.";
			successful = false;
			return;
		}
		effect->constant.direction.type = SDL_HAPTIC_CARTESIAN;
		effect->constant.direction.dir[0] = directionX;
		effect->constant.direction.dir[1] = directionY;
		effect->constant.direction.dir[2] = directionZ;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::POLAR) {
		if (device.forceFeedback_POLAR == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support POLAR direction."));
			errorMessage = "Device don't support POLAR direction.";
			successful = false;
			return;
		}
		effect->constant.direction.type = SDL_HAPTIC_POLAR;
		effect->constant.direction.dir[0] = directionX;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::SPHERICAL) {
		if (device.forceFeedback_SPHERICAL == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SPHERICAL direction."));
			errorMessage = "Device don't support SPHERICAL direction.";
			successful = false;
			return;
		}
		effect->constant.direction.type = SDL_HAPTIC_SPHERICAL;
		effect->constant.direction.dir[0] = directionX;
		effect->constant.direction.dir[1] = directionY;
	}

	forceFeedbackEffect.sdlHaptic = haptic;
	forceFeedbackEffect.successful = true;
	forceFeedbackEffect.effect = effect;
	successful = true;

}

void USimpleControllerBPLibrary::createForceFeedbackEffectPeriodic(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
	bool& successful,
	FString& errorMessage,
	struct FSimpleControllerDevice device,
	ESimpleControllerForceFeedbackEffectPeriodicType type,
	ESimpleControllerForceFeedbackDirectionType directionType,
	int32 directionX,
	int32 directionY,
	int32 directionZ,
	int32 length,
	int32 delay,
	int32 period,
	float magnitude,
	int32 offset,
	int32 phase,
	int32 attackLength,
	float attackLevel,
	int32 fadeLength,
	float fadeLevel){

	if (!device.hasHaptic || device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device not found or device don't support haptic."));
		errorMessage = "Device not found or device don't support haptic.";
		successful = false;
		return;
	}


	SDL_HapticEffect* effect = new SDL_HapticEffect();
	SDL_Haptic* haptic = device.sdlHaptic;


	switch (type)
	{
	case ESimpleControllerForceFeedbackEffectPeriodicType::SINE:
		if (device.forceFeedback_SINE == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SINE effect."));
			successful = false;
			errorMessage = "Device don't support SINE effect.";
			return;
		}
		effect->type = SDL_HAPTIC_SINE;
		break;
	case ESimpleControllerForceFeedbackEffectPeriodicType::TRIANGLE:
		if (device.forceFeedback_TRIANGLE == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support TRIANGLE effect."));
			successful = false;
			errorMessage = "Device don't support TRIANGLE effect.";
			return;
		}
		effect->type = SDL_HAPTIC_TRIANGLE;
		break;
	case ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHUP:
		if (device.forceFeedback_SAWTOOTHUP == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SAWTOOTHUP effect."));
			successful = false;
			errorMessage = "Device don't support SAWTOOTHUP effect.";
			return;
		}
		effect->type = SDL_HAPTIC_SAWTOOTHUP;
		break;
	case ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHDOWN:
		if (device.forceFeedback_SAWTOOTHDOWN == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SAWTOOTHDOWN effect."));
			successful = false;
			errorMessage = "Device don't support SAWTOOTHDOWN effect.";
			return;
		}
		effect->type = SDL_HAPTIC_SAWTOOTHDOWN;
		break;
	}

	effect->periodic.length = length;
	effect->periodic.delay = delay;
	effect->periodic.period = period;
	effect->periodic.magnitude = (Sint16)(32767.0f * magnitude);
	effect->periodic.offset = offset;
	effect->periodic.phase = delay;
	effect->periodic.attack_length = attackLength;
	effect->periodic.attack_level = (Sint16)(32767.0f * attackLevel);
	effect->periodic.fade_length = fadeLength;
	effect->periodic.fade_level = (Sint16)(32767.0f * fadeLevel);


	if (directionType == ESimpleControllerForceFeedbackDirectionType::CARTESIAN) {
		if (device.forceFeedback_CARTESIAN == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support CATESIAN direction."));
			successful = false;
			errorMessage = "Device don't support CATESIAN direction.";
			return;
		}
		effect->periodic.direction.type = SDL_HAPTIC_CARTESIAN;
		effect->periodic.direction.dir[0] = directionX;
		effect->periodic.direction.dir[1] = directionY;
		effect->periodic.direction.dir[2] = directionZ;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::POLAR) {
		if (device.forceFeedback_POLAR == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support POLAR direction."));
			successful = false;
			errorMessage = "Device don't support POLAR direction.";
			return;
		}
		effect->periodic.direction.type = SDL_HAPTIC_POLAR;
		effect->periodic.direction.dir[0] = directionX;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::SPHERICAL) {
		if (device.forceFeedback_SPHERICAL == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SPHERICAL direction."));
			successful = false;
			errorMessage = "Device don't support SPHERICAL direction.";
			return;
		}
		effect->periodic.direction.type = SDL_HAPTIC_SPHERICAL;
		effect->periodic.direction.dir[0] = directionX;
		effect->periodic.direction.dir[1] = directionY;
	}

	forceFeedbackEffect.sdlHaptic = haptic;
	forceFeedbackEffect.successful = true;
	forceFeedbackEffect.effect = effect;
	successful = true;
}

void USimpleControllerBPLibrary::createForceFeedbackEffectCondition(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
	bool& successful,
	FString& errorMessage,
	struct FSimpleControllerDevice device,
	ESimpleControllerForceFeedbackEffectConditionType type,
	bool useDirectionX,
	bool useDirectionY,
	bool useDirectionZ,
	int32 length,
	int32 delay,
	float rightLevel,
	float leftLevel,
	int32 rightLevelIncreaseSpeed,
	int32 leftLevelIncreaseSpeed,
	float deadband,
	int32 center){

	if (!device.hasHaptic || device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device not found or device don't support haptic."));
		errorMessage = "Device not found or device don't support haptic.";
		successful = false;
		return;
	}


	SDL_HapticEffect* effect = new SDL_HapticEffect();
	SDL_Haptic* haptic = device.sdlHaptic;


	switch (type)
	{
	case ESimpleControllerForceFeedbackEffectConditionType::SPRING:
		if (device.forceFeedback_SPRING == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SPRING effect."));
			successful = false;
			errorMessage = "Device don't support SPRING effect.";
			return;
		}
		effect->type = SDL_HAPTIC_SPRING;
		break;
	case ESimpleControllerForceFeedbackEffectConditionType::DAMPER:
		if (device.forceFeedback_DAMPER == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support DAMPER effect."));
			successful = false;
			errorMessage = "Device don't support DAMPER effect.";
			return;
		}
		effect->type = SDL_HAPTIC_DAMPER;
		break;
	case ESimpleControllerForceFeedbackEffectConditionType::INERTIA:
		if (device.forceFeedback_INERTIA == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support INERTIA effect."));
			successful = false;
			errorMessage = "Device don't support INERTIA effect.";
			return;
		}
		effect->type = SDL_HAPTIC_INERTIA;
		break;
	case ESimpleControllerForceFeedbackEffectConditionType::FRICTION:
		if (device.forceFeedback_FRICTION == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support FRICTION effect."));
			successful = false;
			errorMessage = "Device don't support FRICTION effect.";
			return;
		}
		effect->type = SDL_HAPTIC_FRICTION;
		break;
	}

	effect->condition.length = length;
	effect->condition.delay = delay;

	if (useDirectionX) {
		effect->condition.right_sat[0] = (int32)(65535.0f * rightLevel);
		effect->condition.left_sat[0] = (int32)(65535.0f * leftLevel);
		effect->condition.right_coeff[0] = rightLevelIncreaseSpeed;
		effect->condition.left_coeff[0] = leftLevelIncreaseSpeed;
		effect->condition.deadband[0] = (int32)(65535.0f * deadband);
		effect->condition.center[0] = center;
	}
	if (useDirectionY) {
		effect->condition.right_sat[1] = (int32)(65535.0f * rightLevel);
		effect->condition.left_sat[1] = (int32)(65535.0f * leftLevel);
		effect->condition.right_coeff[1] = rightLevelIncreaseSpeed;
		effect->condition.left_coeff[1] = leftLevelIncreaseSpeed;
		effect->condition.deadband[1] = (int32)(65535.0f * deadband);
		effect->condition.center[1] = center;
	}
	if (useDirectionZ) {
		effect->condition.right_sat[2] = (int32)(65535.0f * rightLevel);
		effect->condition.left_sat[2] = (int32)(65535.0f * leftLevel);
		effect->condition.right_coeff[2] = rightLevelIncreaseSpeed;
		effect->condition.left_coeff[2] = leftLevelIncreaseSpeed;
		effect->condition.deadband[2] = (int32)(65535.0f * deadband);
		effect->condition.center[2] = center;
	}
	

	forceFeedbackEffect.sdlHaptic = haptic;
	forceFeedbackEffect.successful = true;
	forceFeedbackEffect.effect = effect;
	successful = true;

}


void USimpleControllerBPLibrary::createForceFeedbackEffectRamp(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
	bool& successful,
	FString& errorMessage,
	struct FSimpleControllerDevice device,
	ESimpleControllerForceFeedbackDirectionType directionType,
	int32 directionX,
	int32 directionY,
	int32 directionZ,
	int32 length,
	int32 delay,
	float startLevel,
	float endLevel,
	int32 attackLength,
	float attackLevel,
	int32 fadeLength,
	float fadeLevel) {

	if (!device.hasHaptic || device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device not found or device don't support haptic."));
		errorMessage = "Device not found or device don't support haptic.";
		successful = false;
		return;
	}


	SDL_HapticEffect* effect = new SDL_HapticEffect();
	SDL_Haptic* haptic = device.sdlHaptic;

	effect->type = SDL_HAPTIC_RAMP;
	effect->ramp.length = length;
	effect->ramp.delay = delay;
	effect->ramp.start = (Sint16)(32767.0f * startLevel);
	effect->ramp.end = (Sint16)(32767.0f * endLevel);
	effect->ramp.attack_length = attackLength;
	effect->ramp.attack_level = (Sint16)(32767.0f * attackLevel);
	effect->ramp.fade_length = fadeLength;
	effect->ramp.fade_level = (Sint16)(32767.0f * fadeLevel);


	if (directionType == ESimpleControllerForceFeedbackDirectionType::CARTESIAN) {
		if (device.forceFeedback_CARTESIAN == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support CATESIAN direction."));
			successful = false;
			errorMessage = "Device don't support SPHERICAL direction.";
			return;
		}
		effect->ramp.direction.type = SDL_HAPTIC_CARTESIAN;
		effect->ramp.direction.dir[0] = directionX;
		effect->ramp.direction.dir[1] = directionY;
		effect->ramp.direction.dir[2] = directionZ;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::POLAR) {
		if (device.forceFeedback_POLAR == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support POLAR direction."));
			successful = false;
			errorMessage = "Device don't support SPHERICAL direction.";
			return;
		}
		effect->ramp.direction.type = SDL_HAPTIC_POLAR;
		effect->ramp.direction.dir[0] = directionX;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::SPHERICAL) {
		if (device.forceFeedback_SPHERICAL == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SPHERICAL direction."));
			successful = false;
			errorMessage = "Device don't support SPHERICAL direction.";
			return;
		}
		effect->ramp.direction.type = SDL_HAPTIC_SPHERICAL;
		effect->ramp.direction.dir[0] = directionX;
		effect->ramp.direction.dir[1] = directionY;
	}

	forceFeedbackEffect.sdlHaptic = haptic;
	forceFeedbackEffect.successful = true;
	forceFeedbackEffect.effect = effect;
	successful = true;

}



struct FSimpleControllerForceFeedbackEffect USimpleControllerBPLibrary::uploadAndRunForceFeedbackEffect(bool& successful, FString& errorMessage, FSimpleControllerForceFeedbackEffect forceFeedbackEffect, int32 iterations){
	if (forceFeedbackEffect.sdlHaptic == nullptr || forceFeedbackEffect.successful == false) {
		UE_LOG(LogTemp, Error, TEXT("The device does not support force feedback or the effect was not created correctly."));
		successful = false;
		errorMessage = "The device does not support force feedback or the effect was not created correctly.";
		return forceFeedbackEffect;
	}

	if (iterations < 1)
		iterations = 1;


	// Upload the effect
	forceFeedbackEffect.effectID = SDL_HapticNewEffect(forceFeedbackEffect.sdlHaptic, forceFeedbackEffect.effect);
	if (forceFeedbackEffect.effectID < 0) {
		UE_LOG(LogTemp, Error, TEXT("Effect could not be uploaded. This usually happens when the driver rejects the effect settings."));
		errorMessage = "Effect could not be uploaded. This usually happens when the driver rejects the effect settings.";
		successful = false;
		return forceFeedbackEffect;
	}


	if (SDL_HapticRunEffect(forceFeedbackEffect.sdlHaptic, forceFeedbackEffect.effectID, iterations) == 0) {
		successful = true;
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("Effect could not be executed."));
		errorMessage = "Effect could not be executed.";
		successful = false;
	}

	return forceFeedbackEffect;
	
}

void USimpleControllerBPLibrary::destroyForceFeedbackEffect(FSimpleControllerForceFeedbackEffect forceFeedbackEffect){
	if (forceFeedbackEffect.sdlHaptic == nullptr || forceFeedbackEffect.successful == false || forceFeedbackEffect.effectID < 0) {
		UE_LOG(LogTemp, Error, TEXT("Unable to destroy force feedback effect."));
		return;
	}
	SDL_HapticDestroyEffect(forceFeedbackEffect.sdlHaptic, forceFeedbackEffect.effectID);
}

void USimpleControllerBPLibrary::setAutocenterForceFeedback(FSimpleControllerDevice device, int32 autocenter){
	if (device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("This device has no force feedback: %s %s"),*device.deviceName, *device.controllerName);
		return;
	}
	if (SDL_HapticSetAutocenter(device.sdlHaptic, autocenter) != 0) {
		UE_LOG(LogTemp, Error, TEXT("Can't set autocenter: %s %s"), *device.deviceName, *device.controllerName);
	}
}

void USimpleControllerBPLibrary::setGainForceFeedback(FSimpleControllerDevice device, int32 gain){
	if (device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("This device has no force feedback: %s %s"), *device.deviceName, *device.controllerName);
		return;
	}
	if (SDL_HapticSetGain(device.sdlHaptic, gain) != 0) {
		UE_LOG(LogTemp, Error, TEXT("Can't set gain: %s %s"), *device.deviceName, *device.controllerName);
	}
}



//int32 USimpleControllerBPLibrary::getFreeForceFeedbackEffectSlots(FSimpleControllerDevice device){
//	if (device.sdlHaptic != nullptr)
//		device.maxStoreEffects = SDL_HapticNumEffects(device.sdlHaptic);
//	return device.maxStoreEffects;
//}




//void USimpleControllerBPLibrary::pollEvents(){
//	SDL_Event sdlEvent;
//	if (SDL_PollEvent(&sdlEvent) != 0) {
//		switch (sdlEvent.type)
//		{
//		case SDL_JOYDEVICEADDED:
//			//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYDEVICEADDED %i"), sdlEvent.jdevice.which);
//			controllerTarget->deviceAttachedEvent(sdlEvent.jdevice.which);
//			break;
//		case SDL_JOYDEVICEREMOVED:
//			//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYDEVICEREMOVED %i"), sdlEvent.jdevice.which);
//			controllerTarget->deviceDetachedEvent(sdlEvent.jdevice.which);
//			break;
//		case SDL_JOYBUTTONDOWN:
//			//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYBUTTONDOWN %i:%i"), sdlEvent.jdevice.which, sdlEvent.jbutton.button);
//			controllerTarget->buttonDownEvent(sdlEvent.jdevice.which, sdlEvent.jbutton.button);
//			break;
//		case SDL_JOYBUTTONUP:
//			//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYBUTTONUP %i:%i"), sdlEvent.jdevice.which, sdlEvent.jbutton.button);
//			controllerTarget->buttonUpEvent(sdlEvent.jdevice.which, sdlEvent.jbutton.button);
//			break;
//		case SDL_JOYAXISMOTION:
//			//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYAXISMOTION %i:%i:%i"), sdlEvent.jdevice.which, sdlEvent.jaxis.axis, sdlEvent.jaxis.value);
//			controllerTarget->axisMovedEvent(sdlEvent.jdevice.which, sdlEvent.jaxis.axis, sdlEvent.jaxis.value);
//			break;
//		case SDL_JOYBALLMOTION:
//			//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYBALLMOTION"));
//			controllerTarget->ballEvent(sdlEvent.jdevice.which, sdlEvent.jball.ball, sdlEvent.jball.xrel, sdlEvent.jball.yrel);
//			break;
//		case SDL_JOYHATMOTION:
//			//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYHATMOTION %i:%i"), sdlEvent.jdevice.which, sdlEvent.jhat.value);
//			controllerTarget->directionalPadEvent(sdlEvent.jdevice.which, sdlEvent.jhat.value);
//			break;
//		default:
//			//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: Unknown"));
//			break;
//		}
//	}
//}

FSimpleControllerDevice USimpleControllerBPLibrary::generateControllerStruct(int32 atachDeviceIndex, int32 deviceIndex, SDL_Joystick* joystick, SDL_GameController* sdlGameController) {
	FSimpleControllerDevice scd;
	if (joystick == nullptr)
		return scd;
	scd.sdlJoystick = joystick;
	scd.sdlGameController = sdlGameController;
	scd.deviceIndex = deviceIndex;
	scd.deviceName = SDL_JoystickName(joystick) == NULL ? "" : SDL_JoystickName(joystick);

	if (scd.deviceName.Contains("xinput")) {
		scd.isXinput = true;
	}

	scd.vendorID = SDL_JoystickGetVendor(joystick);
	scd.productID = SDL_JoystickGetProduct(joystick);
	scd.numAxes = SDL_JoystickNumAxes(joystick);
	scd.numButtons = SDL_JoystickNumButtons(joystick);
	scd.numDirectionalPadAxes = SDL_JoystickNumHats(joystick);
	scd.numBalls = SDL_JoystickNumBalls(joystick);

	scd.controllerType = (ESimpleControllerType)SDL_JoystickGetType(joystick);


	if (SDL_JoystickIsHaptic(joystick) == SDL_TRUE) {
		SDL_Haptic* haptic = SDL_HapticOpenFromJoystick(joystick);
		if (haptic != NULL) {
			scd.sdlHaptic = haptic;
			scd.hasHaptic = true;
			scd.maxSimultaneouslyEffects = SDL_HapticNumEffectsPlaying(haptic);
			scd.maxStoreEffects = SDL_HapticNumEffects(haptic);

			bool isEditor = false;
			#if WITH_EDITOR
				isEditor = true;
			#endif

			if (isEditor) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Max effects at same time %i: "), scd.maxSimultaneouslyEffects);
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Max effects store %i: "), scd.maxStoreEffects);

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CONSTANT) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_CONSTANT Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_CONSTANT Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SINE) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_SINE Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_SINE Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_LEFTRIGHT) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_LEFTRIGHT Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_LEFTRIGHT Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_TRIANGLE) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_TRIANGLE Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_TRIANGLE Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SAWTOOTHUP) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_SAWTOOTHUP Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_SAWTOOTHUP Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SAWTOOTHDOWN) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_SAWTOOTHDOWN Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_SAWTOOTHDOWN Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_RAMP) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_RAMP Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_RAMP Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SPRING) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_SPRING Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_SPRING Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_DAMPER) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_DAMPER Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_DAMPER Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_INERTIA) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_INERTIA Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_INERTIA Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_FRICTION) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_FRICTION Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_FRICTION Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CUSTOM) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_CUSTOM Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_CUSTOM Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_GAIN) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_GAIN Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_GAIN Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_AUTOCENTER) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_AUTOCENTER Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_AUTOCENTER Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_STATUS) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_STATUS Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_STATUS Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_PAUSE) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_PAUSE Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_PAUSE Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_POLAR) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_POLAR Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_POLAR Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CARTESIAN) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_CARTESIAN Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_CARTESIAN Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SPHERICAL) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_SPHERICAL Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_SPHERICAL Support"));
					}

					if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_INFINITY) != 0) {
						UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_INFINITY Support"));
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_INFINITY Support"));
					}
				}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CONSTANT) != 0) {
				scd.forceFeedback_CONSTANT = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SINE) != 0) {
				scd.forceFeedback_SINE = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_LEFTRIGHT) != 0) {
				scd.forceFeedback_LEFTRIGHT = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_TRIANGLE) != 0) {
				scd.forceFeedback_TRIANGLE = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SAWTOOTHUP) != 0) {
				scd.forceFeedback_SAWTOOTHUP = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SAWTOOTHDOWN) != 0) {
				scd.forceFeedback_SAWTOOTHDOWN = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_RAMP) != 0) {
				scd.forceFeedback_RAMP = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SPRING) != 0) {
				scd.forceFeedback_SPRING = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_DAMPER) != 0) {
				scd.forceFeedback_DAMPER = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_INERTIA) != 0) {
				scd.forceFeedback_INERTIA = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_FRICTION) != 0) {
				scd.forceFeedback_FRICTION = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CUSTOM) != 0) {
				scd.forceFeedback_CUSTOM = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_GAIN) != 0) {
				scd.forceFeedback_GAIN = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_AUTOCENTER) != 0) {
				scd.forceFeedback_AUTOCENTER = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_STATUS) != 0) {
				scd.forceFeedback_STATUS = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_PAUSE) != 0) {
				scd.forceFeedback_PAUSE = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_POLAR) != 0) {
				scd.forceFeedback_POLAR = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CARTESIAN) != 0) {
				scd.forceFeedback_CARTESIAN = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SPHERICAL) != 0) {
				scd.forceFeedback_SPHERICAL = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_INFINITY) != 0) {
				scd.forceFeedback_INFINITY = true;
			}


		}
	}
	scd.controllerName = getControllerName(scd.vendorID, scd.productID);

	char guid_str[64];
	SDL_JoystickGetGUIDString(SDL_JoystickGetGUID(joystick), guid_str, sizeof(guid_str));
	scd.deviceID = guid_str;

	//UE_LOG(LogTemp, Warning, TEXT("GUID %s"), *guid);

	for (int32 i = 0; i < connectionIndexArray.Num(); i++) {
		if (connectionIndexArray[i] == false) {
			connectionIndexArray[i] = true;
			connectionIndexMap.Add(deviceIndex, i);
			connectionIndexMapReverse.Add(i, deviceIndex);
			scd.connectionIndex = i;
			break;
		}
	}


	controllerDeviceStructMap.Add(scd.deviceIndex, scd);

	return scd;
}

//void USimpleControllerBPLibrary::fillButtonMap(Gamepad_device *device) {
//
//	for (unsigned int i = 0; i < device->numButtons; i++) {
//		TMap<int32, int32> map;
//		map.Add(i, i);
//		buttonMapping.Add(device->deviceID, map);
//	}
//}

float USimpleControllerBPLibrary::sdlAxisValueToUE4AxisValueX(Sint16 sdlVal){
	if (sdlVal < 0) {
		return ((float)sdlVal / maxAxisValueNegative) * -1;
	}
	else if (sdlVal > 0) {
		return (float)sdlVal / maxAxisValuePositive;
	}
	return 0.0f;
}

float USimpleControllerBPLibrary::sdlAxisValueToUE4AxisValueY(Sint16 sdlVal){
	if (sdlVal < 0) {
		return ((float)sdlVal / maxAxisValueNegative);
	}
	else if (sdlVal > 0) {
		return (float)sdlVal / maxAxisValuePositive * -1;
	}
	return 0.0f;
}

float USimpleControllerBPLibrary::sdlAxisValueToUE4AxisValueTrigger(Sint16 sdlVal){
	return (float)sdlVal / maxAxisValuePositive;
}

FString USimpleControllerBPLibrary::getControllerName(int32 vendorID, int32 productID) {
	FString key = FString::FromInt(vendorID) + ":" + FString::FromInt(productID);
	if (controllerNames.Find(key) == nullptr) {
		return "Unknown";
	}
	return *controllerNames.Find(key);
}

void USimpleControllerBPLibrary::directinalPadValueToDirection(int32 directionalPadValue, ESimpleControllerDirectionalPad& direction) {

	switch (directionalPadValue)
	{
	case SDL_HAT_CENTERED:
		direction = ESimpleControllerDirectionalPad::CENTERED;
		break;
	case SDL_HAT_UP:
		direction = ESimpleControllerDirectionalPad::UP;
		break;
	case SDL_HAT_RIGHT:
		direction = ESimpleControllerDirectionalPad::RIGHT;
		break;
	case SDL_HAT_DOWN:
		direction = ESimpleControllerDirectionalPad::DOWN;
		break;
	case SDL_HAT_LEFT:
		direction = ESimpleControllerDirectionalPad::LEFT;
		break;
	case SDL_HAT_RIGHTUP:
		direction = ESimpleControllerDirectionalPad::RIGHTUP;
		break;
	case SDL_HAT_RIGHTDOWN:
		direction = ESimpleControllerDirectionalPad::RIGHTDOWN;
		break;
	case SDL_HAT_LEFTUP:
		direction = ESimpleControllerDirectionalPad::LEFTUP;
		break;
	case SDL_HAT_LEFTDOWN:
		direction = ESimpleControllerDirectionalPad::LEFTDOWN;
		break;
	}
}


void USimpleControllerBPLibrary::buttonIDToButton(int32 buttionID, ESimpleControllerButtons& buttons) {

	switch (buttionID)
	{
	case 0:
		buttons = ESimpleControllerButtons::Button_0;
		break;
	case 1:
		buttons = ESimpleControllerButtons::Button_1;
		break;
	case 2:
		buttons = ESimpleControllerButtons::Button_2;
		break;
	case 3:
		buttons = ESimpleControllerButtons::Button_3;
		break;
	case 4:
		buttons = ESimpleControllerButtons::Button_4;
		break;
	case 5:
		buttons = ESimpleControllerButtons::Button_5;
		break;
	case 6:
		buttons = ESimpleControllerButtons::Button_6;
		break;
	case 7:
		buttons = ESimpleControllerButtons::Button_7;
		break;
	case 8:
		buttons = ESimpleControllerButtons::Button_8;
		break;
	case 9:
		buttons = ESimpleControllerButtons::Button_9;
		break;
	case 10:
		buttons = ESimpleControllerButtons::Button_10;
		break;
	case 11:
		buttons = ESimpleControllerButtons::Button_11;
		break;
	case 12:
		buttons = ESimpleControllerButtons::Button_12;
		break;
	case 13:
		buttons = ESimpleControllerButtons::Button_13;
		break;
	case 14:
		buttons = ESimpleControllerButtons::Button_14;
		break;
	case 15:
		buttons = ESimpleControllerButtons::Button_15;
		break;
	case 16:
		buttons = ESimpleControllerButtons::Button_16;
		break;
	case 17:
		buttons = ESimpleControllerButtons::Button_17;
		break;
	case 18:
		buttons = ESimpleControllerButtons::Button_18;
		break;
	case 19:
		buttons = ESimpleControllerButtons::Button_19;
		break;
	case 20:
		buttons = ESimpleControllerButtons::Button_20;
		break;
	}
}

void USimpleControllerBPLibrary::changeButtonMapping(int32 deviceIndex, int32 oldButtonID, int32 newButtonID) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		d.mappedButtons.Add(oldButtonID, newButtonID);
		controllerDeviceStructMap.Add(deviceIndex, d);
	}
}

void USimpleControllerBPLibrary::resetButtonToDefaultMapping(int32 deviceIndex, int32 oldButtonID) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		d.mappedButtons.Remove(oldButtonID);
		controllerDeviceStructMap.Add(deviceIndex, d);
	}
}

void USimpleControllerBPLibrary::resetAllButtonsToDefaultMapping(int32 deviceIndex) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		d.mappedButtons.Empty();
		controllerDeviceStructMap.Add(deviceIndex, d);
	}
}

void USimpleControllerBPLibrary::changeAxisMapping(int32 deviceIndex, int32 oldAxisID, int32 newAxisID) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		d.mappedAxis.Add(oldAxisID, newAxisID);
		controllerDeviceStructMap.Add(deviceIndex, d);
	}
}


void USimpleControllerBPLibrary::resetAxisToDefaultMapping(int32 deviceIndex, int32 oldAxisID) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		d.mappedAxis.Remove(oldAxisID);
		controllerDeviceStructMap.Add(deviceIndex, d);
	}
}

void USimpleControllerBPLibrary::resetAllAxisToDefaultMapping(int32 deviceIndex) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		d.mappedAxis.Empty();
		controllerDeviceStructMap.Add(deviceIndex, d);
	}
}


void USimpleControllerBPLibrary::invertAxis(int32 deviceIndex, int32 axisID) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		d.invertedAxis.Add(axisID, true);
		controllerDeviceStructMap.Add(deviceIndex, d);
	}
}

void USimpleControllerBPLibrary::resetAxisInverting(int32 deviceIndex, int32 axisID) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		d.invertedAxis.Remove(axisID);
		controllerDeviceStructMap.Add(deviceIndex, d);
	}
}

void USimpleControllerBPLibrary::resetAllAxisInverting(int32 deviceIndex) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
		d.invertedAxis.Empty();
		controllerDeviceStructMap.Add(deviceIndex, d);
	}
}


bool USimpleControllerBPLibrary::saveMapping(ESimpleControllerDirectoryType directoryType, int32 deviceIndex, FString fileNameWithPath, bool createDirectory) {
	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("SimpleControllerPlugin: Device not Found"));
		return false;
	}

	d = *controllerDeviceStructMap.Find(deviceIndex);


	FString data = "Buttons:";
	for (auto& element : d.mappedButtons) {
		data += FString::FromInt(element.Key) + "->" + FString::FromInt(element.Value) + "|";
	}
	data += "\r\nAxis:";
	for (auto& element : d.mappedAxis) {
		data += FString::FromInt(element.Key) + "->" + FString::FromInt(element.Value) + "|";
	}
	data += "\r\nInvert:";
	for (auto& element : d.invertedAxis) {
		data += FString::FromInt(element.Key) + "|";
	}

	if (fileNameWithPath.IsEmpty()) {
		UE_LOG(LogTemp, Error, TEXT("SimpleControllerPlugin: fileNameWithPath not set."));
		return false;
	}

	if (fileNameWithPath.IsEmpty()) {
		UE_LOG(LogTemp, Error, TEXT("SimpleControllerPlugin: fileNameWithPath not set."));
		return false;
	}

	FString dir;


	switch (directoryType)
	{
	case ESimpleControllerDirectoryType::GameDir:
		dir = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() + fileNameWithPath);
		break;
	case ESimpleControllerDirectoryType::AbsoluteDir:
		dir = FPaths::ConvertRelativePathToFull(fileNameWithPath);
		break;
		//case ESimpleControllerDirectoryType::UserDir:
		//	if (fileNameWithPath.StartsWith("/") == false && fileNameWithPath.StartsWith("\\") == false)
		//		fileNameWithPath = "/" + fileNameWithPath;
		//	dir = FPaths::ConvertRelativePathToFull(FPlatformMisc::GetEnvironmentVariable(TEXT("USERPROFILE")) + fileNameWithPath);
		//	break;
		//case ESimpleControllerDirectoryType::AppdataDir:
		//	if (fileNameWithPath.StartsWith("/") == false && fileNameWithPath.StartsWith("\\") == false)
		//		fileNameWithPath = "/" + fileNameWithPath;
		//	dir = FPaths::ConvertRelativePathToFull(FPlatformMisc::GetEnvironmentVariable(TEXT("APPDATA")) + fileNameWithPath);
		//	break;
	}

	FString fileName = FPaths::GetCleanFilename(dir);
	FString tmpDir = dir;
	tmpDir.RemoveFromEnd(fileName);
	if (!FPaths::DirectoryExists(tmpDir)) {
		if (!createDirectory) {
			UE_LOG(LogTemp, Error, TEXT("SimpleControllerPlugin: Directory not exists: %s"), *tmpDir);
			return false;
		}
		IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();
		if (!platformFile.CreateDirectoryTree(*tmpDir)) {
			UE_LOG(LogTemp, Error, TEXT("SimpleControllerPlugin: Can't create Directory: %s"), *tmpDir);
			return false;
		}
	}



	if (!FFileHelper::SaveStringToFile(data, *dir)) {
		UE_LOG(LogTemp, Error, TEXT("SimpleControllerPlugin: Can't save File: %s"), *dir);
		return false;
	}

	return FPaths::FileExists(dir);
}

bool USimpleControllerBPLibrary::loadMapping(ESimpleControllerDirectoryType directoryType, int32 deviceIndex, FString fileNameWithPath) {

	struct FSimpleControllerDevice d;
	if (controllerDeviceStructMap.Find(deviceIndex) == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("SimpleControllerPlugin: Device not Found"));
		return false;
	}
	d = *controllerDeviceStructMap.Find(deviceIndex);

	if (fileNameWithPath.IsEmpty()) {
		UE_LOG(LogTemp, Error, TEXT("SimpleControllerPlugin: FilePath not set."));
		return false;
	}


	FString dir;
	switch (directoryType)
	{
	case ESimpleControllerDirectoryType::GameDir:
		dir = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() + fileNameWithPath);
		break;
	case ESimpleControllerDirectoryType::AbsoluteDir:
		dir = FPaths::ConvertRelativePathToFull(fileNameWithPath);
		break;
		//case ESimpleControllerDirectoryType::UserDir:
		//	if (fileNameWithPath.StartsWith("/") == false && fileNameWithPath.StartsWith("\\") == false)
		//		fileNameWithPath = "/" + fileNameWithPath;
		//	dir = FPaths::ConvertRelativePathToFull(FPlatformMisc::GetEnvironmentVariable(TEXT("USERPROFILE")) + fileNameWithPath);
		//	break;
		//case ESimpleControllerDirectoryType::AppdataDir:
		//	if (fileNameWithPath.StartsWith("/") == false && fileNameWithPath.StartsWith("\\") == false)
		//		fileNameWithPath = "/" + fileNameWithPath;
		//	dir = FPaths::ConvertRelativePathToFull(FPlatformMisc::GetEnvironmentVariable(TEXT("APPDATA")) + fileNameWithPath);
		//	break;
	}


	if (!FPaths::FileExists(dir)) {
		UE_LOG(LogTemp, Error, TEXT("SimpleControllerPlugin: File not found: %s"), *dir);
		return false;
	}

	FString data;
	if (!FFileHelper::LoadFileToString(data, *dir)) {
		UE_LOG(LogTemp, Error, TEXT("SimpleControllerPlugin: Can't read File: %s"), *dir);
		return false;
	}
	if (data.IsEmpty()) {
		UE_LOG(LogTemp, Error, TEXT("SimpleControllerPlugin: Empty file: %s"), *dir);
		return false;
	}

	TArray<FString> lines;
	data.ParseIntoArray(lines, TEXT("\r\n"), true);
	for (int i = 0; i < lines.Num(); i++) {
		FString left;
		FString right;
		lines[i].Split(":", &left, &right);

		if (left.Equals("Buttons")) {
			d.mappedButtons.Empty();
			TArray<FString> buttonList;
			right.ParseIntoArray(buttonList, TEXT("|"), true);
			for (int j = 0; j < buttonList.Num(); j++) {
				FString oldButton = "";
				FString newButton = "";
				buttonList[j].Split("->", &oldButton, &newButton);
				d.mappedButtons.Add(FCString::Atoi(*oldButton), FCString::Atoi(*newButton));
			}
		}

		if (left.Equals("Axis")) {
			d.mappedAxis.Empty();
			TArray<FString> axisList;
			right.ParseIntoArray(axisList, TEXT("|"), true);
			for (int j = 0; j < axisList.Num(); j++) {
				FString oldAxis = "";
				FString newAxis = "";
				axisList[j].Split("->", &oldAxis, &newAxis);
				d.mappedAxis.Add(FCString::Atoi(*oldAxis), FCString::Atoi(*newAxis));
			}
		}

		if (left.Equals("Invert")) {
			d.invertedAxis.Empty();
			TArray<FString> invertedList;
			right.ParseIntoArray(invertedList, TEXT("|"), true);
			for (int j = 0; j < invertedList.Num(); j++) {
				d.invertedAxis.Add(FCString::Atoi(*invertedList[j]), true);
			}
		}
	}
	controllerDeviceStructMap.Add(deviceIndex, d);

	return true;
}

void USimpleControllerBPLibrary::initControllerEvents(int32 count) {
	if (controllerEvents.Num() == 0) {
		controllerEvents.AddUninitialized(count);
		for (int32 i = 0; i < 16; i++) {
			UPROPERTY()
				USimpleControllerCustomEvents* simpleControllerCustomEvent = NewObject<USimpleControllerCustomEvents>(USimpleControllerCustomEvents::StaticClass());
			simpleControllerCustomEvent->AddToRoot();
			controllerEvents[i] = simpleControllerCustomEvent;
		}

		gamepadAxisLeftXValues.AddUninitialized(count);
		gamepadAxisLeftYValues.AddUninitialized(count);
		gamepadAxisRightXValues.AddUninitialized(count);
		gamepadAxisRightYValues.AddUninitialized(count);
		gamepadAxisLeftTriggerValues.AddUninitialized(count);
		gamepadAxisRightTriggerValues.AddUninitialized(count);
		gamepadAxisMaxValues.AddUninitialized(count);
	}
}
