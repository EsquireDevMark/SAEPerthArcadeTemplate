// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSimpleControllerAxisStatus;
enum class ESimpleControllerAllButtonReleasedStatus : uint8;
enum class ESimpleControllerAllButtonPressedStatus : uint8;
enum class ESimpleControllerButtonStatus : uint8;
#ifdef SIMPLECONTROLLER_SimpleControllerCustomEvents_generated_h
#error "SimpleControllerCustomEvents.generated.h already included, missing '#pragma once' in SimpleControllerCustomEvents.h"
#endif
#define SIMPLECONTROLLER_SimpleControllerCustomEvents_generated_h

#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_172_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerAxis_ALL_Parms \
{ \
	FSimpleControllerAxisStatus axisValues; \
}; \
static inline void FControllerAxis_ALL_DelegateWrapper(const FMulticastScriptDelegate& ControllerAxis_ALL, FSimpleControllerAxisStatus axisValues) \
{ \
	SimpleControllerCustomEvents_eventControllerAxis_ALL_Parms Parms; \
	Parms.axisValues=axisValues; \
	ControllerAxis_ALL.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_166_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerAxis_TRIGGER_RIGHT_Parms \
{ \
	float axisValue; \
}; \
static inline void FControllerAxis_TRIGGER_RIGHT_DelegateWrapper(const FMulticastScriptDelegate& ControllerAxis_TRIGGER_RIGHT, float axisValue) \
{ \
	SimpleControllerCustomEvents_eventControllerAxis_TRIGGER_RIGHT_Parms Parms; \
	Parms.axisValue=axisValue; \
	ControllerAxis_TRIGGER_RIGHT.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_160_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerAxis_TRIGGER_LEFT_Parms \
{ \
	float axisValue; \
}; \
static inline void FControllerAxis_TRIGGER_LEFT_DelegateWrapper(const FMulticastScriptDelegate& ControllerAxis_TRIGGER_LEFT, float axisValue) \
{ \
	SimpleControllerCustomEvents_eventControllerAxis_TRIGGER_LEFT_Parms Parms; \
	Parms.axisValue=axisValue; \
	ControllerAxis_TRIGGER_LEFT.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_154_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerAxis_RIGHT_Y_Parms \
{ \
	float axisValue; \
}; \
static inline void FControllerAxis_RIGHT_Y_DelegateWrapper(const FMulticastScriptDelegate& ControllerAxis_RIGHT_Y, float axisValue) \
{ \
	SimpleControllerCustomEvents_eventControllerAxis_RIGHT_Y_Parms Parms; \
	Parms.axisValue=axisValue; \
	ControllerAxis_RIGHT_Y.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_148_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerAxis_RIGHT_X_Parms \
{ \
	float axisValue; \
}; \
static inline void FControllerAxis_RIGHT_X_DelegateWrapper(const FMulticastScriptDelegate& ControllerAxis_RIGHT_X, float axisValue) \
{ \
	SimpleControllerCustomEvents_eventControllerAxis_RIGHT_X_Parms Parms; \
	Parms.axisValue=axisValue; \
	ControllerAxis_RIGHT_X.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_142_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerAxis_LEFT_Y_Parms \
{ \
	float axisValue; \
}; \
static inline void FControllerAxis_LEFT_Y_DelegateWrapper(const FMulticastScriptDelegate& ControllerAxis_LEFT_Y, float axisValue) \
{ \
	SimpleControllerCustomEvents_eventControllerAxis_LEFT_Y_Parms Parms; \
	Parms.axisValue=axisValue; \
	ControllerAxis_LEFT_Y.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_136_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerAxis_LEFT_X_Parms \
{ \
	float axisValue; \
}; \
static inline void FControllerAxis_LEFT_X_DelegateWrapper(const FMulticastScriptDelegate& ControllerAxis_LEFT_X, float axisValue) \
{ \
	SimpleControllerCustomEvents_eventControllerAxis_LEFT_X_Parms Parms; \
	Parms.axisValue=axisValue; \
	ControllerAxis_LEFT_X.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_127_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_ALL_RELEASED_Parms \
{ \
	ESimpleControllerAllButtonReleasedStatus status; \
}; \
static inline void FControllerButton_ALL_RELEASED_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_ALL_RELEASED, ESimpleControllerAllButtonReleasedStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_ALL_RELEASED_Parms Parms; \
	Parms.status=status; \
	ControllerButton_ALL_RELEASED.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_121_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_ALL_PRESSED_Parms \
{ \
	ESimpleControllerAllButtonPressedStatus status; \
}; \
static inline void FControllerButton_ALL_PRESSED_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_ALL_PRESSED, ESimpleControllerAllButtonPressedStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_ALL_PRESSED_Parms Parms; \
	Parms.status=status; \
	ControllerButton_ALL_PRESSED.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_115_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_DPAD_RIGHT_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_DPAD_RIGHT_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_DPAD_RIGHT, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_DPAD_RIGHT_Parms Parms; \
	Parms.status=status; \
	ControllerButton_DPAD_RIGHT.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_109_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_DPAD_LEFT_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_DPAD_LEFT_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_DPAD_LEFT, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_DPAD_LEFT_Parms Parms; \
	Parms.status=status; \
	ControllerButton_DPAD_LEFT.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_103_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_DPAD_DOWN_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_DPAD_DOWN_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_DPAD_DOWN, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_DPAD_DOWN_Parms Parms; \
	Parms.status=status; \
	ControllerButton_DPAD_DOWN.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_97_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_DPAD_UP_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_DPAD_UP_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_DPAD_UP, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_DPAD_UP_Parms Parms; \
	Parms.status=status; \
	ControllerButton_DPAD_UP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_90_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_RIGHTSHOULDER_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_RIGHTSHOULDER_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_RIGHTSHOULDER, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_RIGHTSHOULDER_Parms Parms; \
	Parms.status=status; \
	ControllerButton_RIGHTSHOULDER.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_84_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_LEFTSHOULDER_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_LEFTSHOULDER_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_LEFTSHOULDER, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_LEFTSHOULDER_Parms Parms; \
	Parms.status=status; \
	ControllerButton_LEFTSHOULDER.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_78_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_RIGHTSTICK_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_RIGHTSTICK_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_RIGHTSTICK, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_RIGHTSTICK_Parms Parms; \
	Parms.status=status; \
	ControllerButton_RIGHTSTICK.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_72_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_LEFTSTICK_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_LEFTSTICK_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_LEFTSTICK, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_LEFTSTICK_Parms Parms; \
	Parms.status=status; \
	ControllerButton_LEFTSTICK.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_66_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_START_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_START_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_START, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_START_Parms Parms; \
	Parms.status=status; \
	ControllerButton_START.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_60_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_GUIDE_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_GUIDE_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_GUIDE, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_GUIDE_Parms Parms; \
	Parms.status=status; \
	ControllerButton_GUIDE.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_54_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_BACK_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_BACK_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_BACK, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_BACK_Parms Parms; \
	Parms.status=status; \
	ControllerButton_BACK.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_48_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_ButtonFaceTop_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_ButtonFaceTop_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_ButtonFaceTop, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_ButtonFaceTop_Parms Parms; \
	Parms.status=status; \
	ControllerButton_ButtonFaceTop.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_42_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_ButtonFaceLeft_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_ButtonFaceLeft_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_ButtonFaceLeft, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_ButtonFaceLeft_Parms Parms; \
	Parms.status=status; \
	ControllerButton_ButtonFaceLeft.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_36_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_ButtonFaceRight_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_ButtonFaceRight_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_ButtonFaceRight, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_ButtonFaceRight_Parms Parms; \
	Parms.status=status; \
	ControllerButton_ButtonFaceRight.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_30_DELEGATE \
struct SimpleControllerCustomEvents_eventControllerButton_ButtonFaceBottom_Parms \
{ \
	ESimpleControllerButtonStatus status; \
}; \
static inline void FControllerButton_ButtonFaceBottom_DelegateWrapper(const FMulticastScriptDelegate& ControllerButton_ButtonFaceBottom, ESimpleControllerButtonStatus status) \
{ \
	SimpleControllerCustomEvents_eventControllerButton_ButtonFaceBottom_Parms Parms; \
	Parms.status=status; \
	ControllerButton_ButtonFaceBottom.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_SPARSE_DATA
#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execcontrollerAxis_ALL); \
	DECLARE_FUNCTION(execcontrollerAxis_TRIGGER_RIGHT); \
	DECLARE_FUNCTION(execcontrollerAxis_TRIGGER_LEFT); \
	DECLARE_FUNCTION(execcontrollerAxis_RIGHT_Y); \
	DECLARE_FUNCTION(execcontrollerAxis_RIGHT_X); \
	DECLARE_FUNCTION(execcontrollerAxis_LEFT_Y); \
	DECLARE_FUNCTION(execcontrollerAxis_LEFT_X); \
	DECLARE_FUNCTION(execcontrollerButton_ALL_RELEASED); \
	DECLARE_FUNCTION(execcontrollerButton_ALL_PRESSED); \
	DECLARE_FUNCTION(execcontrollerButton_DPAD_RIGHT); \
	DECLARE_FUNCTION(execcontrollerButton_DPAD_LEFT); \
	DECLARE_FUNCTION(execcontrollerButton_DPAD_DOWN); \
	DECLARE_FUNCTION(execcontrollerButton_DPAD_UP); \
	DECLARE_FUNCTION(execcontrollerButton_RIGHTSHOULDER); \
	DECLARE_FUNCTION(execcontrollerButton_LEFTSHOULDER); \
	DECLARE_FUNCTION(execcontrollerButton_RIGHTSTICK); \
	DECLARE_FUNCTION(execcontrollerButton_LEFTSTICK); \
	DECLARE_FUNCTION(execcontrollerButton_START); \
	DECLARE_FUNCTION(execcontrollerButton_GUIDE); \
	DECLARE_FUNCTION(execcontrollerButton_BACK); \
	DECLARE_FUNCTION(execcontrollerButton_Y); \
	DECLARE_FUNCTION(execcontrollerButton_X); \
	DECLARE_FUNCTION(execcontrollerButton_B); \
	DECLARE_FUNCTION(execcontrollerButton_A);


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcontrollerAxis_ALL); \
	DECLARE_FUNCTION(execcontrollerAxis_TRIGGER_RIGHT); \
	DECLARE_FUNCTION(execcontrollerAxis_TRIGGER_LEFT); \
	DECLARE_FUNCTION(execcontrollerAxis_RIGHT_Y); \
	DECLARE_FUNCTION(execcontrollerAxis_RIGHT_X); \
	DECLARE_FUNCTION(execcontrollerAxis_LEFT_Y); \
	DECLARE_FUNCTION(execcontrollerAxis_LEFT_X); \
	DECLARE_FUNCTION(execcontrollerButton_ALL_RELEASED); \
	DECLARE_FUNCTION(execcontrollerButton_ALL_PRESSED); \
	DECLARE_FUNCTION(execcontrollerButton_DPAD_RIGHT); \
	DECLARE_FUNCTION(execcontrollerButton_DPAD_LEFT); \
	DECLARE_FUNCTION(execcontrollerButton_DPAD_DOWN); \
	DECLARE_FUNCTION(execcontrollerButton_DPAD_UP); \
	DECLARE_FUNCTION(execcontrollerButton_RIGHTSHOULDER); \
	DECLARE_FUNCTION(execcontrollerButton_LEFTSHOULDER); \
	DECLARE_FUNCTION(execcontrollerButton_RIGHTSTICK); \
	DECLARE_FUNCTION(execcontrollerButton_LEFTSTICK); \
	DECLARE_FUNCTION(execcontrollerButton_START); \
	DECLARE_FUNCTION(execcontrollerButton_GUIDE); \
	DECLARE_FUNCTION(execcontrollerButton_BACK); \
	DECLARE_FUNCTION(execcontrollerButton_Y); \
	DECLARE_FUNCTION(execcontrollerButton_X); \
	DECLARE_FUNCTION(execcontrollerButton_B); \
	DECLARE_FUNCTION(execcontrollerButton_A);


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleControllerCustomEvents(); \
	friend struct Z_Construct_UClass_USimpleControllerCustomEvents_Statics; \
public: \
	DECLARE_CLASS(USimpleControllerCustomEvents, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleController"), NO_API) \
	DECLARE_SERIALIZER(USimpleControllerCustomEvents)


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleControllerCustomEvents(); \
	friend struct Z_Construct_UClass_USimpleControllerCustomEvents_Statics; \
public: \
	DECLARE_CLASS(USimpleControllerCustomEvents, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleController"), NO_API) \
	DECLARE_SERIALIZER(USimpleControllerCustomEvents)


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleControllerCustomEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleControllerCustomEvents) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleControllerCustomEvents); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleControllerCustomEvents); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleControllerCustomEvents(USimpleControllerCustomEvents&&); \
	NO_API USimpleControllerCustomEvents(const USimpleControllerCustomEvents&); \
public:


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleControllerCustomEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleControllerCustomEvents(USimpleControllerCustomEvents&&); \
	NO_API USimpleControllerCustomEvents(const USimpleControllerCustomEvents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleControllerCustomEvents); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleControllerCustomEvents); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleControllerCustomEvents)


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_21_PROLOG
#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_SPARSE_DATA \
	HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_RPC_WRAPPERS \
	HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_INCLASS \
	HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_SPARSE_DATA \
	HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SimpleControllerCustomEvents."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECONTROLLER_API UClass* StaticClass<class USimpleControllerCustomEvents>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerCustomEvents_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
