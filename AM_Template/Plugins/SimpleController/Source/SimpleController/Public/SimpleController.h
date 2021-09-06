// Copyright 2018-2021 David Romanski(Socke). All Rights Reserved.

#pragma once

#define SDL_DEPRECATED

#include "Modules/ModuleManager.h"
#include "ThirdParty/include/SDL.h"
#include "CoreMinimal.h"
#include "Runtime/Core/Public/Async/Async.h"
#include "ControllerList.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformFile.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SimpleController.generated.h"



UENUM(BlueprintType)
enum class ESimpleControllerDirectoryType : uint8
{
	GameDir			UMETA(DisplayName = "Game directory"),
	AbsoluteDir 	UMETA(DisplayName = "Absolute directory")
	//UserDir 		UMETA(DisplayName = "User directory"),
	//AppdataDir 		UMETA(DisplayName = "App directory")
};


UENUM(BlueprintType)
enum class ESimpleControllerButtonStatus : uint8
{
	Pressed		UMETA(DisplayName = "Pressed"),
	Released 	UMETA(DisplayName = "Released")
};


UENUM(BlueprintType)
enum class ESimpleControllerType : uint8
{
	UNKNOWN			UMETA(DisplayName = "UNKNOWN"),
	GAMECONTROLLER 	UMETA(DisplayName = "GAMECONTROLLER"),
	WHEEL			UMETA(DisplayName = "WHEEL"),
	ARCADE_STICK 	UMETA(DisplayName = "ARCADE_STICK"),
	FLIGHT_STICK	UMETA(DisplayName = "FLIGHT_STICK"),
	DANCE_PAD 		UMETA(DisplayName = "DANCE_PAD"),
	GUITAR			UMETA(DisplayName = "GUITAR"),
	DRUM_KIT 		UMETA(DisplayName = "DRUM_KIT"),
	ARCADE_PAD		UMETA(DisplayName = "ARCADE_PAD"),
	THROTTLE 		UMETA(DisplayName = "THROTTLE")
};


UENUM(BlueprintType)
enum class ESimpleControllerPowerLevel : uint8
{
	UNKNOWN		UMETA(DisplayName = "UNKNOWN"),
	EMPTY		UMETA(DisplayName = "EMPTY"),
	LOW			UMETA(DisplayName = "LOW"),
	MEDIUM 		UMETA(DisplayName = "MEDIUM"),
	FULL		UMETA(DisplayName = "FULL"),
	WIRED 		UMETA(DisplayName = "WIRED"),
	MAX			UMETA(DisplayName = "MAX")
};




UENUM(BlueprintType)
enum class ESimpleControllerRefreshRate : uint8
{
	Index_30		UMETA(DisplayName = "30"),
	Index_60		UMETA(DisplayName = "60"),
	Index_120		UMETA(DisplayName = "120"),
	Index_240		UMETA(DisplayName = "240")
};

UENUM(BlueprintType)
enum class ESimpleControllerPersistentEventRefreshRate : uint8
{
	Index_10		UMETA(DisplayName = "10"),
	Index_20		UMETA(DisplayName = "20"),
	Index_30		UMETA(DisplayName = "30"),
	Index_40		UMETA(DisplayName = "40"),
	Index_50		UMETA(DisplayName = "50"),
	Index_60		UMETA(DisplayName = "60"),
	Index_70		UMETA(DisplayName = "70"),
	Index_80		UMETA(DisplayName = "80"),
	Index_90		UMETA(DisplayName = "90"),
	Index_100		UMETA(DisplayName = "100"),
	Index_120		UMETA(DisplayName = "120"),
	Index_140		UMETA(DisplayName = "140"),
	Index_160		UMETA(DisplayName = "160"),
	Index_180		UMETA(DisplayName = "180"),
	Index_200		UMETA(DisplayName = "200")
};


UENUM(BlueprintType)
enum class ESimpleControllerConnectionIndex : uint8
{
	Index_0		UMETA(DisplayName = "0"),
	Index_1		UMETA(DisplayName = "1"),
	Index_2		UMETA(DisplayName = "2"),
	Index_3		UMETA(DisplayName = "3"),
	Index_4		UMETA(DisplayName = "4"),
	Index_5		UMETA(DisplayName = "5"),
	Index_6		UMETA(DisplayName = "6"),
	Index_7		UMETA(DisplayName = "7"),
	Index_8		UMETA(DisplayName = "8"),
	Index_9		UMETA(DisplayName = "9"),
	Index_10		UMETA(DisplayName = "10"),
	Index_11		UMETA(DisplayName = "11"),
	Index_12		UMETA(DisplayName = "12"),
	Index_13		UMETA(DisplayName = "13"),
	Index_14		UMETA(DisplayName = "14"),
	Index_15		UMETA(DisplayName = "15")	
};

UENUM(BlueprintType)
enum class ESimpleControllerAllButtonPressedStatus : uint8
{
	ButtonFaceBottom		UMETA(DisplayName = "ButtonFaceBottom"),
	ButtonFaceRight			UMETA(DisplayName = "ButtonFaceRight"),
	ButtonFaceLeft			UMETA(DisplayName = "ButtonFaceLeft"),
	ButtonFaceTop			UMETA(DisplayName = "ButtonFaceTop"),
	LEFTSHOULDER			UMETA(DisplayName = "LEFTSHOULDER"),
	RIGHTSHOULDER			UMETA(DisplayName = "RIGHTSHOULDER"),
	DPAD_UP					UMETA(DisplayName = "DPAD_UP"),
	DPAD_DOWN				UMETA(DisplayName = "DPAD_DOWN"),
	DPAD_LEFT				UMETA(DisplayName = "DPAD_LEFT"),
	DPAD_RIGHT				UMETA(DisplayName = "DPAD_RIGHT"),
	DPAD_LEFTUP				UMETA(DisplayName = "DPAD_LEFTUP"),
	DPAD_LEFTDOWN			UMETA(DisplayName = "DPAD_LEFTDOWN"),
	DPAD_RIGHTUP			UMETA(DisplayName = "DPAD_RIGHTUP"),
	DPAD_RIGHTDOWN			UMETA(DisplayName = "DPAD_RIGHTDOWN"),
	BACK					UMETA(DisplayName = "BACK"),
	GUIDE					UMETA(DisplayName = "GUIDE"),
	START					UMETA(DisplayName = "START"),
	LEFTSTICK				UMETA(DisplayName = "LEFTSTICK"),
	RIGHTSTICK				UMETA(DisplayName = "RIGHTSTICK")
};


UENUM(BlueprintType)
enum class ESimpleControllerAllButtonReleasedStatus : uint8
{
	ButtonFaceBottom		UMETA(DisplayName = "ButtonFaceBottom"),
	ButtonFaceRight			UMETA(DisplayName = "ButtonFaceRight"),
	ButtonFaceLeft			UMETA(DisplayName = "ButtonFaceLeft"),
	ButtonFaceTop			UMETA(DisplayName = "ButtonFaceTop"),
	LEFTSHOULDER			UMETA(DisplayName = "LEFTSHOULDER"),
	RIGHTSHOULDER			UMETA(DisplayName = "RIGHTSHOULDER"),
	DPAD_UP					UMETA(DisplayName = "DPAD_UP"),
	DPAD_DOWN				UMETA(DisplayName = "DPAD_DOWN"),
	DPAD_LEFT				UMETA(DisplayName = "DPAD_LEFT"),
	DPAD_RIGHT				UMETA(DisplayName = "DPAD_RIGHT"),
	DPAD_LEFTUP				UMETA(DisplayName = "DPAD_LEFTUP"),
	DPAD_LEFTDOWN			UMETA(DisplayName = "DPAD_LEFTDOWN"),
	DPAD_RIGHTUP			UMETA(DisplayName = "DPAD_RIGHTUP"),
	DPAD_RIGHTDOWN			UMETA(DisplayName = "DPAD_RIGHTDOWN"),
	BACK					UMETA(DisplayName = "BACK"),
	GUIDE					UMETA(DisplayName = "GUIDE"),
	START					UMETA(DisplayName = "START"),
	LEFTSTICK				UMETA(DisplayName = "LEFTSTICK"),
	RIGHTSTICK				UMETA(DisplayName = "RIGHTSTICK")
};

//UENUM(BlueprintType)
//enum class ESimpleControllerComboGamepadAction : uint8
//{
//	ButtonFaceBottomClicked		UMETA(DisplayName ="CLICKED ButtonFaceBottom"),
//	ButtonFaceRightClicked		UMETA(DisplayName ="CLICKED ButtonFaceRight"),
//	ButtonFaceLeftClicked		UMETA(DisplayName ="CLICKED ButtonFaceLeft"),
//	ButtonFaceTopClicked		UMETA(DisplayName ="CLICKED ButtonFacClickedeTop"),
//	LEFTSHOULDERClicked			UMETA(DisplayName ="CLICKED LEFTSHOULDER"),
//	RIGHTSHOULDERClicked		UMETA(DisplayName ="CLICKED RIGHTSHOULDER"),
//	DPAD_UPClicked				UMETA(DisplayName ="CLICKED DPAD_UP"),
//	DPAD_DOWNClicked			UMETA(DisplayName ="CLICKED DPAD_DOWN"),
//	DPAD_LEFTClicked			UMETA(DisplayName ="CLICKED DPAD_LEFT"),
//	DPAD_RIGHTClicked			UMETA(DisplayName ="CLICKED DPAD_RIGHT"),
//	BACKClicked					UMETA(DisplayName ="CLICKED BACK"),
//	GUIDEClicked				UMETA(DisplayName ="CLICKED GUIDE"),
//	STARTClicked				UMETA(DisplayName ="CLICKED START"),
//	LEFTSTICKClicked			UMETA(DisplayName ="CLICKED LEFTSTICK"),
//	RIGHTSTICKClicked			UMETA(DisplayName ="CLICKED RIGHTSTICK"),
//	ButtonFaceBottomPressed		UMETA(DisplayName ="PRESSED ButtonFaceBottom"),
//	ButtonFaceRightPressed		UMETA(DisplayName ="PRESSED ButtonFaceRight"),
//	ButtonFaceLeftPressed		UMETA(DisplayName ="PRESSED ButtonFaceLeft"),
//	ButtonFaceTopPressed		UMETA(DisplayName ="PRESSED ButtonFacPressedeTop"),
//	LEFTSHOULDERPressed			UMETA(DisplayName ="PRESSED LEFTSHOULDER"),
//	RIGHTSHOULDERPressed		UMETA(DisplayName ="PRESSED RIGHTSHOULDER"),
//	DPAD_UPPressed				UMETA(DisplayName ="PRESSED DPAD_UP"),
//	DPAD_DOWNPressed			UMETA(DisplayName ="PRESSED DPAD_DOWN"),
//	DPAD_LEFTPressed			UMETA(DisplayName ="PRESSED DPAD_LEFT"),
//	DPAD_RIGHTPressed			UMETA(DisplayName ="PRESSED DPAD_RIGHT"),
//	BACKPressed					UMETA(DisplayName ="PRESSED BACK"),
//	GUIDEPressed				UMETA(DisplayName ="PRESSED GUIDE"),
//	STARTPressed				UMETA(DisplayName ="PRESSED START"),
//	LEFTSTICKPressed			UMETA(DisplayName ="PRESSED LEFTSTICK"),
//	RIGHTSTICKPressed			UMETA(DisplayName ="PRESSED RIGHTSTICK"),
//	ButtonFaceBottomReleased	UMETA(DisplayName ="RELEASED ButtonFaceBottom"),
//	ButtonFaceRightReleased		UMETA(DisplayName ="RELEASED ButtonFaceRight"),
//	ButtonFaceLeftReleased		UMETA(DisplayName ="RELEASED ButtonFaceLeft"),
//	ButtonFaceTopReleased		UMETA(DisplayName ="RELEASED ButtonFaceTop"),
//	LEFTSHOULDERReleased		UMETA(DisplayName ="RELEASED LEFTSHOULDER"),
//	RIGHTSHOULDERReleased		UMETA(DisplayName ="RELEASED RIGHTSHOULDER"),
//	DPAD_UPReleased				UMETA(DisplayName ="RELEASED DPAD_UP"),
//	DPAD_DOWNReleased			UMETA(DisplayName ="RELEASED DPAD_DOWN"),
//	DPAD_LEFTReleased			UMETA(DisplayName ="RELEASED DPAD_LEFT"),
//	DPAD_RIGHTReleased			UMETA(DisplayName ="RELEASED DPAD_RIGHT"),
//	BACKReleased				UMETA(DisplayName ="RELEASED BACK"),
//	GUIDEReleased				UMETA(DisplayName ="RELEASED GUIDE"),
//	STARTReleased				UMETA(DisplayName ="RELEASED START"),
//	LEFTSTICKReleased			UMETA(DisplayName ="RELEASED LEFTSTICK"),
//	RIGHTSTICKReleased			UMETA(DisplayName ="RELEASED RIGHTSTICK")
//	//CombinedWPB				UMETA(DisplayName = "CombinedWithPreviousButton")
//};
//
//USTRUCT(BlueprintType)
//struct FSimpleControllerComboStruct
//{
//	GENERATED_USTRUCT_BODY()
//
//	ESimpleControllerComboGamepadAction buttonAction;
//
//	int64 buttonActionTimestamp = 0;
//};
//
//UENUM(BlueprintType)
//enum class ESimpleControllerComboGamepadAction : uint8
//{
//	ButtonFaceBottom		UMETA(DisplayName = "ButtonFaceBottom"),
//	ButtonFaceRight			UMETA(DisplayName = "ButtonFaceRight"),
//	ButtonFaceLeft			UMETA(DisplayName = "ButtonFaceLeft"),
//	ButtonFaceTop			UMETA(DisplayName = "ButtonFaceTop"),
//	LEFTSHOULDER			UMETA(DisplayName = "LEFTSHOULDER"),
//	RIGHTSHOULDER			UMETA(DisplayName = "RIGHTSHOULDER"),
//	DPAD_UP					UMETA(DisplayName = "DPAD_UP"),
//	DPAD_DOWN				UMETA(DisplayName = "DPAD_DOWN"),
//	DPAD_LEFT				UMETA(DisplayName = "DPAD_LEFT"),
//	DPAD_RIGHT				UMETA(DisplayName = "DPAD_RIGHT"),
//	DPAD_LEFTUP				UMETA(DisplayName = "DPAD_LEFTUP"),
//	DPAD_LEFTDOWN			UMETA(DisplayName = "DPAD_LEFTDOWN"),
//	DPAD_RIGHTUP			UMETA(DisplayName = "DPAD_RIGHTUP"),
//	DPAD_RIGHTDOWN			UMETA(DisplayName = "DPAD_RIGHTDOWN"),
//	BACK					UMETA(DisplayName = "BACK"),
//	GUIDE					UMETA(DisplayName = "GUIDE"),
//	START					UMETA(DisplayName = "START"),
//	LEFTSTICK				UMETA(DisplayName = "LEFTSTICK"),
//	RIGHTSTICK				UMETA(DisplayName = "RIGHTSTICK")
//	//CombinedWPB				UMETA(DisplayName = "CombinedWithPreviousButton")
//};
//
//USTRUCT(BlueprintType)
//struct FSimpleControllerComboStruct
//{
//	GENERATED_USTRUCT_BODY()
//
//	TArray<ESimpleControllerAllButtonReleasedStatus> buttons;
//	int64 startButtonTime = 0;
//};

USTRUCT(BlueprintType)
struct FSimpleControllerAxisStatus
{
	GENERATED_USTRUCT_BODY()

	float rightStickX;
	float rightStickY;
	float leftStickX;
	float leftStickY;
	float rightTrigger;
	float leftTrigger;
	
};




USTRUCT(BlueprintType)
struct FSimpleControllerDevice
{
	GENERATED_USTRUCT_BODY()

	SDL_Joystick* sdlJoystick = nullptr;
	SDL_GameController* sdlGameController = nullptr;
	SDL_Haptic* sdlHaptic = nullptr;


	/*Unique device identifier for application session, starting at 0 for the first device attached and
	incrementing by 1 for each additional device. If a device is removed and subsequently reattached
	during the same application session, it will have a new deviceID.*/
	int32 deviceIndex;

	/**
	* Returns the connection order based on the deviceIndex.
	* The first controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example.
	*/
	int32 connectionIndex;

	FString deviceID;


	// Human-readable device name
	FString deviceName;
	FString controllerName;

	// USB vendor/product IDs as returned by the driver. Can be used to determine the particular model of device represented.
	int32 vendorID;
	int32 productID;

	// Number of axis elements belonging to the device
	int32 numAxes;

	// Number of button elements belonging to the device
	int32 numButtons;

	int32 numDirectionalPadAxes;
	int32 numBalls;

	TMap <int32, int32> mappedButtons;
	TMap <int32, int32> mappedAxis;
	TMap <int32, bool> invertedAxis;

	bool isXinput = false;

	ESimpleControllerType controllerType;

	bool hasHaptic = false;
	bool forceFeedback_CONSTANT = false;
	bool forceFeedback_SINE = false;
	bool forceFeedback_LEFTRIGHT = false;
	bool forceFeedback_TRIANGLE = false;
	bool forceFeedback_SAWTOOTHUP = false;
	bool forceFeedback_SAWTOOTHDOWN = false;
	bool forceFeedback_RAMP = false;
	bool forceFeedback_SPRING = false;
	bool forceFeedback_DAMPER = false;
	bool forceFeedback_INERTIA = false;
	bool forceFeedback_FRICTION = false;
	bool forceFeedback_CUSTOM = false;
	bool forceFeedback_GAIN = false;
	bool forceFeedback_AUTOCENTER = false;
	bool forceFeedback_STATUS = false;
	bool forceFeedback_PAUSE = false;
	bool forceFeedback_POLAR = false;
	bool forceFeedback_CARTESIAN = false;
	bool forceFeedback_SPHERICAL = false;
	bool forceFeedback_INFINITY = false;
	int32 maxSimultaneouslyEffects = 0;
	int32 maxStoreEffects = 0;
	int32 hapticAxes = 0;
	int32 effectID = -1;
};

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackEffectType : uint8
{
	CONSTANT,
	LEFTRIGHT
};

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackEffectPeriodicType : uint8
{
	SINE,
	TRIANGLE,
	SAWTOOTHUP,
	SAWTOOTHDOWN
};

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackEffectConditionType : uint8
{
	SPRING,
	DAMPER,
	INERTIA,
	FRICTION
};

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackDirectionType : uint8
{
	CARTESIAN,
	POLAR,
	SPHERICAL
};


USTRUCT(BlueprintType)
struct FSimpleControllerForceFeedbackEffect
{
	GENERATED_USTRUCT_BODY()

		SDL_Haptic* sdlHaptic = nullptr;
	SDL_HapticEffect* effect = nullptr;
	int32 effectID = -1;
	bool successful = false;
};





UENUM(BlueprintType)
enum class ESimpleControllerDirectionalPad : uint8
{
	CENTERED,
	UP,
	RIGHT,
	DOWN,
	LEFT,
	RIGHTUP,
	RIGHTDOWN,
	LEFTUP,
	LEFTDOWN,
};

UENUM(BlueprintType)
enum class ESimpleControllerButtons : uint8
{
	Button_0,
	Button_1,
	Button_2,
	Button_3,
	Button_4,
	Button_5,
	Button_6,
	Button_7,
	Button_8,
	Button_9,
	Button_10,
	Button_11,
	Button_12,
	Button_13,
	Button_14,
	Button_15,
	Button_16,
	Button_17,
	Button_18,
	Button_19,
	Button_20
};




#ifndef __SimpleControllerCustomEvents
#define __SimpleControllerCustomEvents
#include "SimpleControllerCustomEvents.h"
#endif

#ifndef __SimpleControllerBPLibrary
#define __SimpleControllerBPLibrary
#include "SimpleControllerBPLibrary.h"
#endif

class FSimpleControllerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
