// Copyright 2018-2021 David Romanski(Socke). All Rights Reserved.

#pragma once

#include "SimpleController.h"
#include "SimpleControllerBPLibrary.generated.h"

class FRefreshGamepadEventsThread;
class USimpleControllerCustomEvents;
class FPersistentEventsThread;


UCLASS()
class SIMPLECONTROLLER_API USimpleControllerBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	static USimpleControllerBPLibrary* controllerTarget;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin")
		static USimpleControllerBPLibrary* getSimpleControllerTarget();

	//Delegates
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FbuttonDownEventDelegate, FString, deviceID, int32, buttonID, int32, deviceIndex, struct FSimpleControllerDevice, device);
	UFUNCTION()
		void buttonDownEventDelegate(const FString deviceID, const int32 buttonID, const int32 deviceIndex, const struct FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|ButtonDown")
		FbuttonDownEventDelegate onButtonDownEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FbuttonUpEventDelegate, FString, deviceID, int32, buttonID, int32, deviceIndex, struct FSimpleControllerDevice, device);
	UFUNCTION()
		void buttonUpEventDelegate(const FString deviceID, const int32 buttonID, const int32 deviceIndex, const struct FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|ButtonUp")
		FbuttonUpEventDelegate onButtonUpEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FdirectionalPadEventDelegate, FString, deviceID, int32, directionalPadValue, int32, directionalPadIndex, int32, deviceIndex,  struct FSimpleControllerDevice, device);
	UFUNCTION()
		void directionalPadEventDelegate(const FString deviceID, const int32 directionalPadValue, int32 directionalPadIndex, const int32 deviceIndex, const struct FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|DirectionalPad")
		FdirectionalPadEventDelegate onDirectionalPadEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FballMovedEventDelegate, FString, deviceID, int32, ballID, float, xRel, int32, yRel, struct FSimpleControllerDevice, device);
	UFUNCTION()
		void ballMovedEventDelegate(const FString deviceID, const int32 ballID, const int32 xRel, const int32 yRel, const struct FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|ballMoved")
		FballMovedEventDelegate onBallMovedEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FaxisMovedEventDelegate, FString, deviceID, int32, axisID, float, axisValue, int32, deviceIndex, struct FSimpleControllerDevice, device);
	UFUNCTION()
		void axisMovedEventDelegate(const FString deviceID, const int32 axisID, const float axisValue, const int32 deviceIndex, const struct FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|AxisMoved")
		FaxisMovedEventDelegate onaxisMovedEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FdeviceAttachedEventDelegate, struct FSimpleControllerDevice, device);
	UFUNCTION()
		void deviceAttachedEventDelegate(const struct FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|DeviceAttached")
		FdeviceAttachedEventDelegate ondeviceAttachedEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FdeviceDetachedEventDelegate, struct FSimpleControllerDevice, device);
	UFUNCTION()
		void deviceDetachedEventDelegate(const struct FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|DeviceDetached")
		FdeviceDetachedEventDelegate ondeviceDetachedEventDelegate;

	//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FcomboEventDelegate, struct FSimpleControllerDevice, device, FString, comboName, float, comboTimeInSeconds);
	//UFUNCTION()
	//	void comboEventDelegate(const struct FSimpleControllerDevice device, const FString comboName, const float comboTimeInSeconds);
	//UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Combos|Events")
	//	FcomboEventDelegate oncomboEventDelegate;


	/**
	* Starts the recognition of the controllers and the actions of the controllers.
	* @param refreshRateButtonsAndAxis Specifies how long the pause should be between inputs to save the CPU. The value normally does not need to be changed.
	* @param xinputAsDirectinput Xinput is limited to 4 gamepads, if you want more than four you need to set it to true
	* @param useGamepadAPI true means that the SDL Gamepad API is used. This will activate the gamepad events. Gamepad events make it easier to assign axes and buttons from a gamepad.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		void initController(ESimpleControllerRefreshRate refreshRate = ESimpleControllerRefreshRate::Index_60, bool xinputAsDirectinput = false, bool useGamepadAPI = true);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		void stopController();
	void stopControllerInternal();

	/**
	* Uses the SDL Gamepad API for new events. This makes it easier to associate  buttons and axes. You no longer get button 0 but button A and not axis 0 but left analog stick.
	* @param connectionIndex First controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Gamepad")
		USimpleControllerCustomEvents* getGamepadEvent(ESimpleControllerConnectionIndex connectionIndex);

	
	/**
	* To be closer to the UE4 logic a persistent event is created with this node. This event is fired x times per second.
	* @param connectionIndex First controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example.
	* @param refreshRate This is the number of times the event is fired per second.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Gamepad")
		USimpleControllerCustomEvents* getPersistentGamepadEvent(ESimpleControllerConnectionIndex connectionIndex, ESimpleControllerPersistentEventRefreshRate refreshRate = ESimpleControllerPersistentEventRefreshRate::Index_60);


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin", Meta = (ExpandEnumAsExecs = "direction"))
		static void directinalPadValueToDirection(int32 directionalPadValue, ESimpleControllerDirectionalPad& direction);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin", Meta = (ExpandEnumAsExecs = "buttons"))
		static void buttonIDToButton(int32 buttonID, ESimpleControllerButtons& buttons);


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping|Buttons")
		void changeButtonMapping(int32 deviceIndex, int32 oldButtonID, int32 newButtonID);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping|Buttons")
		void resetButtonToDefaultMapping(int32 deviceIndex, int32 oldButtonID);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping|Buttons")
		void resetAllButtonsToDefaultMapping(int32 deviceIndex);


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping|Axis")
		void changeAxisMapping(int32 deviceIndex, int32 oldAxisID, int32 newAxisID);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping|Axis")
		void resetAxisToDefaultMapping(int32 deviceIndex, int32 oldAxisID);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping|Axis")
		void resetAllAxisToDefaultMapping(int32 deviceIndex);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping|Axis")
		void invertAxis(int32 deviceIndex, int32 axisID);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping|Axis")
		void resetAxisInverting(int32 deviceIndex, int32 axisID);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping|Axis")
		void resetAllAxisInverting(int32 deviceIndex);

	
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping|File")
		bool saveMapping(ESimpleControllerDirectoryType directoryType, int32 deviceIndex, FString fileNameWithPath, bool createDirectory);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping|File")
		bool loadMapping(ESimpleControllerDirectoryType directoryType, int32 deviceIndex, FString fileNameWithPath);




	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		TArray<struct FSimpleControllerDevice> getConnectedControllers();

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		FSimpleControllerDevice findControllerByDeviceIndex(int32 deviceIndex, bool& found);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		FSimpleControllerDevice findControllerByDeviceID(FString deviceID, bool& found);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin")
		void findDeviceIndexByConnectionIndex(int32 connectionIndex, bool& found, int32& deviceIndex);

	//UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Combos")
	//	void registerGamepadCombo(FString name, float maxTimeInSeconds, TArray<ESimpleControllerComboGamepadAction> combosArray);

	//UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Combos")
	//	void removeGamepadCombo(FString name);


	/**
	* This effect is mainly intended for gamepads. It can be used to control the two motors that are found in all modern gamepads. With length 0 a running effect can be aborted.
	* @param strengthSmallMotor Values in percent between 0 and 1
	* @param strengthLargeMotor Values in percent between 0 and 1
	* @param lengthInMilliseconds duration of the effect in milliseconds
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		void rumble(bool& successful, FString& errorMessage, struct FSimpleControllerDevice device, float strengthSmallMotor = 0.5f, float strengthLargeMotor = 0.5f, int32 lengthInMilliseconds = 2000);

	/**
	* This creates the SDL Force Feedback SDL_HapticConstant. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticConstant
	* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.
	* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionZ For CARTESIAN values -1,0,1.
	* @param length duration of the effect in milliseconds
	* @param delay delay before starting the effect in milliseconds
	* @param level strength of the constant effect in percent between 0 and 1
	* @param attackLength duration of the attack in milliseconds
	* @param attackLevel level at the start of the attack in percent between 0 and 1
	* @param fadeLength duration of the fade in milliseconds
	* @param fadeLevel level at the end of the fade in percent between 0 and 1
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		void createForceFeedbackEffectConstant(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
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
			float fadeLevel);

	/**
	* This creates the SDL Force Feedback SDL_HapticPeriodic. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticPeriodic
	* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.
	* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionZ For CARTESIAN values -1,0,1.
	* @param length duration of the effect in milliseconds
	* @param delay delay before starting the effect in milliseconds
	* @param period period of the wave in milliseconds
	* @param magnitude peak value in percent between 0 and 1
	* @param offset mean value of the wave in milliseconds
	* @param phase positive phase shift given by hundredth of a degree. 0 = No phase displacement. 9000 = Displaced 25% of its period. 18000 = Displaced 50% of its period. 27000 = Displaced 75% of its period. 36000 = Displaced 100% of its period, same as 0, but 0 is preferred
	* @param level strength of the constant effect in percent between 0 and 1
	* @param attackLength duration of the attack in milliseconds
	* @param attackLevel level at the start of the attack in percent between 0 and 1
	* @param fadeLength duration of the fade in milliseconds
	* @param fadeLevel level at the end of the fade in percent between 0 and 1
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		void createForceFeedbackEffectPeriodic(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
			bool& successful,
			FString& errorMessage,
			struct FSimpleControllerDevice device,
			ESimpleControllerForceFeedbackEffectPeriodicType PeriodicType,
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
			float fadeLevel);

	/**
	* This creates the SDL Force Feedback SDL_HapticCondition. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticCondition
	* @param length duration of the effect in milliseconds
	* @param delay delay before starting the effect in milliseconds

	* @param rightLevel level when joystick is to the positive side in percent between 0 and 1
	* @param leftLevel level when joystick is to the negative side in percent between 0 and 1
	* @param rightLevelIncreaseSpeed how fast to increase the force towards the positive side in milliseconds
	* @param leftLevelIncreaseSpeed how fast to increase the force towards the negative side
	* @param deadband size of the dead zone in percent between 0 and 1
	* @param center position of the dead zone
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		void createForceFeedbackEffectCondition(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
			bool& successful,
			FString& errorMessage,
			struct FSimpleControllerDevice device,
			ESimpleControllerForceFeedbackEffectConditionType ConditionType,
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
			int32 center);

	/**
	* This creates the SDL Force Feedback SDL_HapticRamp. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticRamp
	* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.
	* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionZ For CARTESIAN values -1,0,1.
	* @param length duration of the effect in milliseconds
	* @param delay delay before starting the effect in milliseconds
	* @param startLevel beginning strength level in percent between 0 and 1
	* @param endLevel ending strength level in percent between 0 and 1
	* @param attackLength duration of the attack in milliseconds
	* @param attackLevel level at the start of the attack in percent between 0 and 1
	* @param fadeLength duration of the fade in milliseconds
	* @param fadeLevel level at the end of the fade in percent between 0 and 1
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		void createForceFeedbackEffectRamp(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
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
			float fadeLevel);

	/**
	* Uploads the effect to the driver and executes it. IMPORTANT! Each device can store a different number of effects at the same time. Some can only store one. Remember to destroy the effect.
	* @param iterations This allows the effect to be repeated x times
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static struct FSimpleControllerForceFeedbackEffect uploadAndRunForceFeedbackEffect(bool& successful, FString& errorMessage, struct FSimpleControllerForceFeedbackEffect forceFeedbackEffect, int32 iterations = 1);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void destroyForceFeedbackEffect(struct FSimpleControllerForceFeedbackEffect forceFeedbackEffect);

	/**
	* Use this function to set the global autocenter of the device. Device must support the SDL_HAPTIC_AUTOCENTER feature.
	* @param device device to set autocentering on
	* @param autocenter value to set autocenter to (0-100), 0 disables autocentering
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void setAutocenterForceFeedback(struct FSimpleControllerDevice device, int32 autocenter);

	/**
	* Use this function to set the global gain of the specified haptic device. 
	* @param device device to set autocentering on
	* @param gain value to set the gain to, should be between 0 and 100
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void setGainForceFeedback(struct FSimpleControllerDevice device, int32 gain);

	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin|ForceFeedback")
	//	static int32 getFreeForceFeedbackEffectSlots(struct FSimpleControllerDevice device);


	/**
	* @param deviceIndex Unique device identifier for application session, starting at 0 for the first device attached and incrementing by 1 for each additional device. If a device is removed and subsequently reattached during the same application session, it will have a new deviceID.
	* @param connectionIndex Returns the connection order based on the deviceIndex. First controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example.
	* @param deviceName Human-readable device name
	* @param vendorID USB vendor/product IDs as returned by the driver. Can be used to determine the particular model of device represented.
	* @param numAxes Number of axis elements belonging to the device
	* @param numButtons Number of button elements belonging to the device
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void breakDeviceInfo(struct FSimpleControllerDevice device, int32& deviceIndex, int32& connectionIndex, FString& deviceID, FString& deviceName, FString& controllerName, int32& vendorID, int32& productID, int32& numAxes, int32& numButtons, int32& numDirectionalPadAxes, int32& numBalls, bool& hasHaptic, bool& gamepadAPI_Support, bool& isXinput, ESimpleControllerType& type);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void breakDeviceForceFeedbackInfo(struct FSimpleControllerDevice device, bool& hasHaptic, bool& forceFeedback_CONSTANT, bool& forceFeedback_SINE, bool& forceFeedback_LEFTRIGHT, bool& forceFeedback_TRIANGLE, bool& forceFeedback_SAWTOOTHUP, bool& forceFeedback_SAWTOOTHDOWN, bool& forceFeedback_RAMP, bool& forceFeedback_SPRING, bool& forceFeedback_DAMPER, bool& forceFeedback_INERTIA, bool& forceFeedback_FRICTION, bool& forceFeedback_CUSTOM, bool& forceFeedback_GAIN, bool& forceFeedback_AUTOCENTER, bool& forceFeedback_STATUS, bool& forceFeedback_PAUSE, bool& forceFeedback_POLAR, bool& forceFeedback_CARTESIAN, bool& forceFeedback_SPHERICAL, bool& forceFeedback_INFINITY, int32& maxSimultaneouslyEffects);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void breakAxisStatus(struct FSimpleControllerAxisStatus axisStatus, float& leftStickX, float& leftStickY, float& rightStickX, float& rightStickY, float& leftTrigger, float& rightTrigger);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void getCurrentPowerLevel(struct FSimpleControllerDevice device, ESimpleControllerPowerLevel& powerLevel);
	


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void breakForceFeedbackEffect(struct FSimpleControllerForceFeedbackEffect forceFeedbackEffect, int32& effectID,bool& successful);

	/**
	* Instead of using initController and stopController you can create your own timer in blueprints and use this function to check if an event has happened and trigger it.
	*/
	/*UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		void pollEvents();*/


	struct FSimpleControllerDevice generateControllerStruct(int32 atachDeviceIndex, int32 deviceIndex, SDL_Joystick* joystick, SDL_GameController* sdlGameController);

	void deviceAttachedEvent(int32 deviceIndex);
	void deviceDetachedEvent(int32 deviceIndex);
	void buttonDownEvent(int32 deviceIndex, int32 buttonID);
	void controllerButtonUpEvent(int32 deviceIndex, int32 buttonID);
	void controllerButtonDownEvent(int32 deviceIndex, int32 buttonID);
	void buttonUpEvent(int32 deviceIndex, int32 buttonID);
	void directionalPadEvent(int32 deviceIndex, int32 directinalPadValue, int32 directionalPadIndex);
	void ballEvent(int32 deviceIndex, int32 ballIndex, int32 xRel, int32 yRel);
	void axisMovedEvent(int32 deviceIndex, int32 axisID, int32 axisValue);
	void controllerAxisMovedEvent(int32 deviceIndex, int32 axisID, int32 axisValue);
	

	void removeDeviceFromConnectionIndex(int32 deviceIndex);

	TArray<USimpleControllerCustomEvents*>& getControllerEvents();


	TArray<float>& getGamepadAxisLeftXValues();
	TArray<float>& getGamepadAxisLeftYValues();
	TArray<float>& getGamepadAxisRightXValues();
	TArray<float>& getGamepadAxisRightYValues();
	TArray<float>& getGamepadAxisLeftTriggerValues();
	TArray<float>& getGamepadAxisRightTriggerValues();
	TArray<float>& getGamepadAxisMaxValues();

	//void checkGamepadCombo(ESimpleControllerAllButtonReleasedStatus button, struct FSimpleControllerDevice device);

private:
	bool useGamepadAPI = true;

	float sdlAxisValueToUE4AxisValueX(Sint16 sdlVal);
	float sdlAxisValueToUE4AxisValueY(Sint16 sdlVal);
	float sdlAxisValueToUE4AxisValueTrigger(Sint16 sdlVal);

	FString getControllerName(int32 vendorID, int32 productID);
	class FRefreshGamepadEventsThread* refreshThread = nullptr;

	//TMap<int32, SDL_Joystick*> controllerMap;
	TMap<int32, struct FSimpleControllerDevice> controllerDeviceStructMap;
	TMap<FString, FString> controllerNames;

	float maxAxisValuePositive = 32767.f;
	float maxAxisValueNegative = -32768.f;

	TArray<bool> connectionIndexArray;
	TMap<int32, int32> connectionIndexMap;
	TMap<int32, int32> connectionIndexMapReverse;
	TMap<FString, FPersistentEventsThread*> persistentEffects;

	TArray<USimpleControllerCustomEvents*> controllerEvents;

	bool isRun = false;


	TArray<float> gamepadAxisLeftXValues;
	TArray<float> gamepadAxisLeftYValues;
	TArray<float> gamepadAxisRightXValues;
	TArray<float> gamepadAxisRightYValues;
	TArray<float> gamepadAxisLeftTriggerValues;
	TArray<float> gamepadAxisRightTriggerValues;
	TArray<float> gamepadAxisMaxValues;


	void initControllerEvents(int32 count);

	//TMap<FString, struct FSimpleControllerComboStruct> gamepadCombos;
	//TArray<ESimpleControllerAllButtonReleasedStatus> lastPressedGamepadButton;
};


/* asynchronous Thread*/
class FRefreshGamepadEventsThread : public FRunnable {

public:

	FRefreshGamepadEventsThread(float refreshRateP) :
		refreshRate(refreshRateP) {
		FString threadName = "FRefreshGamepadThread" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	virtual uint32 Run() override {
		SDL_Event sdlEvent;
		while (run) {
			while (SDL_PollEvent(&sdlEvent) != 0 && run) {
				switch (sdlEvent.type)
				{
				case SDL_JOYDEVICEADDED:
					//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYDEVICEADDED %i"), sdlEvent.jdevice.which);
					USimpleControllerBPLibrary::controllerTarget->deviceAttachedEvent(sdlEvent.jdevice.which);
					break;
				case SDL_JOYDEVICEREMOVED:
					//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYDEVICEREMOVED %i"), sdlEvent.jdevice.which);
					USimpleControllerBPLibrary::controllerTarget->deviceDetachedEvent(sdlEvent.jdevice.which);
					break;
				case SDL_JOYBUTTONDOWN:
					//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYBUTTONDOWN %i:%i:%i"), sdlEvent.jdevice.which, sdlEvent.jbutton.button, sdlEvent.cbutton.button);
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(sdlEvent.jdevice.which, sdlEvent.jbutton.button);
					break;
				case SDL_JOYBUTTONUP:
					//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYBUTTONUP %i:%i"), sdlEvent.jdevice.which, sdlEvent.jbutton.button);
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(sdlEvent.jdevice.which, sdlEvent.jbutton.button);
					break;
				case SDL_JOYAXISMOTION:
					//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYAXISMOTION %i:%i:%i"), sdlEvent.jdevice.which, sdlEvent.jaxis.axis, sdlEvent.jaxis.value);
					USimpleControllerBPLibrary::controllerTarget->axisMovedEvent(sdlEvent.jdevice.which, sdlEvent.jaxis.axis, sdlEvent.jaxis.value);
					break;
				case SDL_JOYBALLMOTION:
					//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYBALLMOTION"));
					USimpleControllerBPLibrary::controllerTarget->ballEvent(sdlEvent.jdevice.which, sdlEvent.jball.ball, sdlEvent.jball.xrel, sdlEvent.jball.yrel);
					break;
				case SDL_JOYHATMOTION:
					//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYHATMOTION %i:%i"), sdlEvent.jdevice.which, sdlEvent.jhat.value);
					USimpleControllerBPLibrary::controllerTarget->directionalPadEvent(sdlEvent.jdevice.which, sdlEvent.jhat.value, sdlEvent.jhat.hat);
					break;
				case SDL_CONTROLLERAXISMOTION:
					//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_CONTROLLERAXISMOTION %i:%i:%i"), sdlEvent.cdevice.which, sdlEvent.caxis.axis, sdlEvent.caxis.value);
					USimpleControllerBPLibrary::controllerTarget->controllerAxisMovedEvent(sdlEvent.jdevice.which, sdlEvent.caxis.axis, sdlEvent.caxis.value);
					break;
				case SDL_CONTROLLERBUTTONDOWN:
					//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_CONTROLLERBUTTONDOWN %i:%i:%i"), sdlEvent.jdevice.which, sdlEvent.jbutton.button, sdlEvent.cbutton.button);
					USimpleControllerBPLibrary::controllerTarget->controllerButtonDownEvent(sdlEvent.jdevice.which, sdlEvent.cbutton.button);
					break;
				case SDL_CONTROLLERBUTTONUP:
					//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_CONTROLLERBUTTONUP %i:%i"), sdlEvent.jdevice.which, sdlEvent.jbutton.button);
					USimpleControllerBPLibrary::controllerTarget->controllerButtonUpEvent(sdlEvent.jdevice.which, sdlEvent.cbutton.button);
					break;
				default:
					//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: Unknown: %i"), sdlEvent.type);
					break;
				}
			}
			//Gamepad_processEvents();
			FPlatformProcess::Sleep(refreshRate);
		}

		FPlatformProcess::Sleep(1.0f);
		USimpleControllerBPLibrary::controllerTarget->stopControllerInternal();

		thread = nullptr;
		UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin stopped."));
		return 0;
	}
	void stopThread() {
		run = false;
	}
private:
	float refreshRate = 1 / 60;
	bool run = true;
	FRunnableThread* thread = nullptr;
};


/* asynchronous Thread*/
class FPersistentEventsThread : public FRunnable {

public:

	FPersistentEventsThread(float refreshRateP, int32 controllerIndexP, USimpleControllerBPLibrary* mainP) :
		refreshRate(refreshRateP),
		controllerIndex(controllerIndexP),
		main(mainP) {
		FString threadName = "FRefreshGamepadThread" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	virtual uint32 Run() override {
		int32 controllerIndexGlobal = controllerIndex;
		FSimpleControllerAxisStatus axsisStruct;
		while (run) {
			axsisStruct.leftStickX = main->getGamepadAxisLeftXValues()[controllerIndex];
			axsisStruct.leftStickY = main->getGamepadAxisLeftYValues()[controllerIndex];
			axsisStruct.rightStickX = main->getGamepadAxisRightXValues()[controllerIndex];
			axsisStruct.rightStickY = main->getGamepadAxisRightYValues()[controllerIndex];
			axsisStruct.leftTrigger = main->getGamepadAxisLeftTriggerValues()[controllerIndex];
			axsisStruct.rightTrigger = main->getGamepadAxisRightTriggerValues()[controllerIndex];


			AsyncTask(ENamedThreads::GameThread, [axsisStruct, controllerIndexGlobal]() {
				if (USimpleControllerBPLibrary::controllerTarget->getControllerEvents().Num() > controllerIndexGlobal) {
					USimpleControllerBPLibrary::controllerTarget->getControllerEvents()[controllerIndexGlobal]->onControllerAxis_LEFT_X.Broadcast(axsisStruct.leftStickX);
					USimpleControllerBPLibrary::controllerTarget->getControllerEvents()[controllerIndexGlobal]->onControllerAxis_LEFT_Y.Broadcast(axsisStruct.leftStickY);
					USimpleControllerBPLibrary::controllerTarget->getControllerEvents()[controllerIndexGlobal]->onControllerAxis_RIGHT_X.Broadcast(axsisStruct.rightStickX);
					USimpleControllerBPLibrary::controllerTarget->getControllerEvents()[controllerIndexGlobal]->onControllerAxis_RIGHT_Y.Broadcast(axsisStruct.rightStickY);
					USimpleControllerBPLibrary::controllerTarget->getControllerEvents()[controllerIndexGlobal]->onControllerAxis_TRIGGER_LEFT.Broadcast(axsisStruct.leftTrigger);
					USimpleControllerBPLibrary::controllerTarget->getControllerEvents()[controllerIndexGlobal]->onControllerAxis_TRIGGER_RIGHT.Broadcast(axsisStruct.rightTrigger);
					USimpleControllerBPLibrary::controllerTarget->getControllerEvents()[controllerIndexGlobal]->onControllerAxis_ALL.Broadcast(axsisStruct);
				}
			});
			FPlatformProcess::Sleep(refreshRate);
		}

		thread = nullptr;
		return 0;
	}
	void stopThread() {
		run = false;
	}
private:
	float refreshRate = 1 / 60;
	int32 controllerIndex = 0;
	USimpleControllerBPLibrary* main = nullptr;

	bool run = true;
	FRunnableThread* thread = nullptr;
	
	

};