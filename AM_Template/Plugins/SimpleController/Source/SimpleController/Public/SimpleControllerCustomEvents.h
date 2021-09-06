// Copyright 2018-2020 David Romanski (Socke). All Rights Reserved.
#pragma once

#include "SimpleController.h"
#include "SimpleControllerCustomEvents.generated.h"


class USimpleControllerBPLibrary;
//
//USTRUCT(BlueprintType)
//struct FStringTMap
//{
//	GENERATED_USTRUCT_BODY()
//
//		TMap<FString, FString> stringMap;
//};
//
/**
*
*/
UCLASS(Blueprintable, BlueprintType)
class USimpleControllerCustomEvents : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/** Gampad Buttons */
	/**  */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_ButtonFaceBottom, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_A(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonFaceBottom")
		FControllerButton_ButtonFaceBottom onControllerButton_A;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_ButtonFaceRight, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_B(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonFaceRight")
		FControllerButton_ButtonFaceRight onControllerButton_B;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_ButtonFaceLeft, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_X(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonFaceLeft")
		FControllerButton_ButtonFaceLeft onControllerButton_X;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_ButtonFaceTop, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_Y(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonFaceTop")
		FControllerButton_ButtonFaceTop onControllerButton_Y;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_BACK, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_BACK(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonBACK")
		FControllerButton_BACK onControllerButton_BACK;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_GUIDE, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_GUIDE(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonGUIDE")
		FControllerButton_GUIDE onControllerButton_GUIDE;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_START, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_START(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonSTART")
		FControllerButton_START onControllerButton_START;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_LEFTSTICK, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_LEFTSTICK(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonLEFTSTICK")
		FControllerButton_LEFTSTICK onControllerButton_LEFTSTICK;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_RIGHTSTICK, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_RIGHTSTICK(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonRIGHTSTICK")
		FControllerButton_RIGHTSTICK onControllerButton_RIGHTSTICK;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_LEFTSHOULDER, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_LEFTSHOULDER(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonLEFTSHOULDER")
		FControllerButton_LEFTSHOULDER onControllerButton_LEFTSHOULDER;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_RIGHTSHOULDER, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_RIGHTSHOULDER(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonRIGHTSHOULDER")
		FControllerButton_RIGHTSHOULDER onControllerButton_RIGHTSHOULDER;


	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_DPAD_UP, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_DPAD_UP(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonDPAD_UP")
		FControllerButton_DPAD_UP onControllerButton_DPAD_UP;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_DPAD_DOWN, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_DPAD_DOWN(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonDPAD_DOWN")
		FControllerButton_DPAD_DOWN onControllerButton_DPAD_DOWN;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_DPAD_LEFT, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_DPAD_LEFT(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonDPAD_LEFT")
		FControllerButton_DPAD_LEFT onControllerButton_DPAD_LEFT;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_DPAD_RIGHT, enum ESimpleControllerButtonStatus, status);
	UFUNCTION()
		void controllerButton_DPAD_RIGHT(const enum ESimpleControllerButtonStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonDPAD_RIGHT")
		FControllerButton_DPAD_RIGHT onControllerButton_DPAD_RIGHT;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_ALL_PRESSED, enum ESimpleControllerAllButtonPressedStatus, status);
	UFUNCTION()
		void controllerButton_ALL_PRESSED(const enum ESimpleControllerAllButtonPressedStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonAllPressed")
		FControllerButton_ALL_PRESSED onControllerButton_ALL_PRESSED;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerButton_ALL_RELEASED, enum ESimpleControllerAllButtonReleasedStatus, status);
	UFUNCTION()
		void controllerButton_ALL_RELEASED(const enum ESimpleControllerAllButtonReleasedStatus status);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|ButtonAllReleased")
		FControllerButton_ALL_RELEASED onControllerButton_ALL_RELEASED;


	
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerAxis_LEFT_X, float, axisValue);
	UFUNCTION()
		void controllerAxis_LEFT_X(const float axisValue);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|AxisLEFT_X")
		FControllerAxis_LEFT_X onControllerAxis_LEFT_X;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerAxis_LEFT_Y, float, axisValue);
	UFUNCTION()
		void controllerAxis_LEFT_Y(const float axisValue);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|AxisLEFT_Y")
		FControllerAxis_LEFT_Y onControllerAxis_LEFT_Y;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerAxis_RIGHT_X, float, axisValue);
	UFUNCTION()
		void controllerAxis_RIGHT_X(const float axisValue);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|AxisRIGHT_X")
		FControllerAxis_RIGHT_X onControllerAxis_RIGHT_X;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerAxis_RIGHT_Y, float, axisValue);
	UFUNCTION()
		void controllerAxis_RIGHT_Y(const float axisValue);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|AxisRIGHT_Y")
		FControllerAxis_RIGHT_Y onControllerAxis_RIGHT_Y;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerAxis_TRIGGER_LEFT, float, axisValue);
	UFUNCTION()
		void controllerAxis_TRIGGER_LEFT(const float axisValue);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|AxisTRIGGER_LEFT")
		FControllerAxis_TRIGGER_LEFT onControllerAxis_TRIGGER_LEFT;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerAxis_TRIGGER_RIGHT, float, axisValue);
	UFUNCTION()
		void controllerAxis_TRIGGER_RIGHT(const float axisValue);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|AxisTRIGGER_RIGHT")
		FControllerAxis_TRIGGER_RIGHT onControllerAxis_TRIGGER_RIGHT;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerAxis_ALL, struct FSimpleControllerAxisStatus, axisValues);
	UFUNCTION()
		void controllerAxis_ALL(const struct FSimpleControllerAxisStatus axisValues);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|Gamepad|AxisAll")
		FControllerAxis_ALL onControllerAxis_ALL;

	enum ESimpleControllerButtonStatus buttonA = ESimpleControllerButtonStatus::Released;
	enum ESimpleControllerButtonStatus buttonB = ESimpleControllerButtonStatus::Released;
	enum ESimpleControllerButtonStatus buttonX = ESimpleControllerButtonStatus::Released;
	enum ESimpleControllerButtonStatus buttonY = ESimpleControllerButtonStatus::Released;

	enum ESimpleControllerButtonStatus buttonDPAD_UP = ESimpleControllerButtonStatus::Released;
	enum ESimpleControllerButtonStatus buttonDPAD_DOWN = ESimpleControllerButtonStatus::Released;
	enum ESimpleControllerButtonStatus buttonDPAD_LEFT = ESimpleControllerButtonStatus::Released;
	enum ESimpleControllerButtonStatus buttonDPAD_RIGHT = ESimpleControllerButtonStatus::Released;

};
