// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSimpleControllerDevice;
struct FSimpleControllerForceFeedbackEffect;
enum class ESimpleControllerPowerLevel : uint8;
struct FSimpleControllerAxisStatus;
enum class ESimpleControllerType : uint8;
enum class ESimpleControllerForceFeedbackDirectionType : uint8;
enum class ESimpleControllerForceFeedbackEffectConditionType : uint8;
enum class ESimpleControllerForceFeedbackEffectPeriodicType : uint8;
enum class ESimpleControllerDirectoryType : uint8;
enum class ESimpleControllerButtons : uint8;
enum class ESimpleControllerDirectionalPad : uint8;
enum class ESimpleControllerConnectionIndex : uint8;
enum class ESimpleControllerPersistentEventRefreshRate : uint8;
class USimpleControllerCustomEvents;
enum class ESimpleControllerRefreshRate : uint8;
class USimpleControllerBPLibrary;
#ifdef SIMPLECONTROLLER_SimpleControllerBPLibrary_generated_h
#error "SimpleControllerBPLibrary.generated.h already included, missing '#pragma once' in SimpleControllerBPLibrary.h"
#endif
#define SIMPLECONTROLLER_SimpleControllerBPLibrary_generated_h

#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_61_DELEGATE \
struct SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms \
{ \
	FSimpleControllerDevice device; \
}; \
static inline void FdeviceDetachedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& deviceDetachedEventDelegate, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms Parms; \
	Parms.device=device; \
	deviceDetachedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_55_DELEGATE \
struct SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms \
{ \
	FSimpleControllerDevice device; \
}; \
static inline void FdeviceAttachedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& deviceAttachedEventDelegate, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms Parms; \
	Parms.device=device; \
	deviceAttachedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_49_DELEGATE \
struct SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms \
{ \
	FString deviceID; \
	int32 axisID; \
	float axisValue; \
	int32 deviceIndex; \
	FSimpleControllerDevice device; \
}; \
static inline void FaxisMovedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& axisMovedEventDelegate, const FString& deviceID, int32 axisID, float axisValue, int32 deviceIndex, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms Parms; \
	Parms.deviceID=deviceID; \
	Parms.axisID=axisID; \
	Parms.axisValue=axisValue; \
	Parms.deviceIndex=deviceIndex; \
	Parms.device=device; \
	axisMovedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_43_DELEGATE \
struct SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms \
{ \
	FString deviceID; \
	int32 ballID; \
	float xRel; \
	int32 yRel; \
	FSimpleControllerDevice device; \
}; \
static inline void FballMovedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ballMovedEventDelegate, const FString& deviceID, int32 ballID, float xRel, int32 yRel, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms Parms; \
	Parms.deviceID=deviceID; \
	Parms.ballID=ballID; \
	Parms.xRel=xRel; \
	Parms.yRel=yRel; \
	Parms.device=device; \
	ballMovedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_37_DELEGATE \
struct SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms \
{ \
	FString deviceID; \
	int32 directionalPadValue; \
	int32 directionalPadIndex; \
	int32 deviceIndex; \
	FSimpleControllerDevice device; \
}; \
static inline void FdirectionalPadEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& directionalPadEventDelegate, const FString& deviceID, int32 directionalPadValue, int32 directionalPadIndex, int32 deviceIndex, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms Parms; \
	Parms.deviceID=deviceID; \
	Parms.directionalPadValue=directionalPadValue; \
	Parms.directionalPadIndex=directionalPadIndex; \
	Parms.deviceIndex=deviceIndex; \
	Parms.device=device; \
	directionalPadEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_31_DELEGATE \
struct SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms \
{ \
	FString deviceID; \
	int32 buttonID; \
	int32 deviceIndex; \
	FSimpleControllerDevice device; \
}; \
static inline void FbuttonUpEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& buttonUpEventDelegate, const FString& deviceID, int32 buttonID, int32 deviceIndex, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms Parms; \
	Parms.deviceID=deviceID; \
	Parms.buttonID=buttonID; \
	Parms.deviceIndex=deviceIndex; \
	Parms.device=device; \
	buttonUpEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_DELEGATE \
struct SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms \
{ \
	FString deviceID; \
	int32 buttonID; \
	int32 deviceIndex; \
	FSimpleControllerDevice device; \
}; \
static inline void FbuttonDownEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& buttonDownEventDelegate, const FString& deviceID, int32 buttonID, int32 deviceIndex, FSimpleControllerDevice device) \
{ \
	SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms Parms; \
	Parms.deviceID=deviceID; \
	Parms.buttonID=buttonID; \
	Parms.deviceIndex=deviceIndex; \
	Parms.device=device; \
	buttonDownEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_SPARSE_DATA
#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbreakForceFeedbackEffect); \
	DECLARE_FUNCTION(execgetCurrentPowerLevel); \
	DECLARE_FUNCTION(execbreakAxisStatus); \
	DECLARE_FUNCTION(execbreakDeviceForceFeedbackInfo); \
	DECLARE_FUNCTION(execbreakDeviceInfo); \
	DECLARE_FUNCTION(execsetGainForceFeedback); \
	DECLARE_FUNCTION(execsetAutocenterForceFeedback); \
	DECLARE_FUNCTION(execdestroyForceFeedbackEffect); \
	DECLARE_FUNCTION(execuploadAndRunForceFeedbackEffect); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectRamp); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectCondition); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectPeriodic); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectConstant); \
	DECLARE_FUNCTION(execrumble); \
	DECLARE_FUNCTION(execfindDeviceIndexByConnectionIndex); \
	DECLARE_FUNCTION(execfindControllerByDeviceID); \
	DECLARE_FUNCTION(execfindControllerByDeviceIndex); \
	DECLARE_FUNCTION(execgetConnectedControllers); \
	DECLARE_FUNCTION(execloadMapping); \
	DECLARE_FUNCTION(execsaveMapping); \
	DECLARE_FUNCTION(execresetAllAxisInverting); \
	DECLARE_FUNCTION(execresetAxisInverting); \
	DECLARE_FUNCTION(execinvertAxis); \
	DECLARE_FUNCTION(execresetAllAxisToDefaultMapping); \
	DECLARE_FUNCTION(execresetAxisToDefaultMapping); \
	DECLARE_FUNCTION(execchangeAxisMapping); \
	DECLARE_FUNCTION(execresetAllButtonsToDefaultMapping); \
	DECLARE_FUNCTION(execresetButtonToDefaultMapping); \
	DECLARE_FUNCTION(execchangeButtonMapping); \
	DECLARE_FUNCTION(execbuttonIDToButton); \
	DECLARE_FUNCTION(execdirectinalPadValueToDirection); \
	DECLARE_FUNCTION(execgetPersistentGamepadEvent); \
	DECLARE_FUNCTION(execgetGamepadEvent); \
	DECLARE_FUNCTION(execstopController); \
	DECLARE_FUNCTION(execinitController); \
	DECLARE_FUNCTION(execdeviceDetachedEventDelegate); \
	DECLARE_FUNCTION(execdeviceAttachedEventDelegate); \
	DECLARE_FUNCTION(execaxisMovedEventDelegate); \
	DECLARE_FUNCTION(execballMovedEventDelegate); \
	DECLARE_FUNCTION(execdirectionalPadEventDelegate); \
	DECLARE_FUNCTION(execbuttonUpEventDelegate); \
	DECLARE_FUNCTION(execbuttonDownEventDelegate); \
	DECLARE_FUNCTION(execgetSimpleControllerTarget);


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbreakForceFeedbackEffect); \
	DECLARE_FUNCTION(execgetCurrentPowerLevel); \
	DECLARE_FUNCTION(execbreakAxisStatus); \
	DECLARE_FUNCTION(execbreakDeviceForceFeedbackInfo); \
	DECLARE_FUNCTION(execbreakDeviceInfo); \
	DECLARE_FUNCTION(execsetGainForceFeedback); \
	DECLARE_FUNCTION(execsetAutocenterForceFeedback); \
	DECLARE_FUNCTION(execdestroyForceFeedbackEffect); \
	DECLARE_FUNCTION(execuploadAndRunForceFeedbackEffect); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectRamp); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectCondition); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectPeriodic); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectConstant); \
	DECLARE_FUNCTION(execrumble); \
	DECLARE_FUNCTION(execfindDeviceIndexByConnectionIndex); \
	DECLARE_FUNCTION(execfindControllerByDeviceID); \
	DECLARE_FUNCTION(execfindControllerByDeviceIndex); \
	DECLARE_FUNCTION(execgetConnectedControllers); \
	DECLARE_FUNCTION(execloadMapping); \
	DECLARE_FUNCTION(execsaveMapping); \
	DECLARE_FUNCTION(execresetAllAxisInverting); \
	DECLARE_FUNCTION(execresetAxisInverting); \
	DECLARE_FUNCTION(execinvertAxis); \
	DECLARE_FUNCTION(execresetAllAxisToDefaultMapping); \
	DECLARE_FUNCTION(execresetAxisToDefaultMapping); \
	DECLARE_FUNCTION(execchangeAxisMapping); \
	DECLARE_FUNCTION(execresetAllButtonsToDefaultMapping); \
	DECLARE_FUNCTION(execresetButtonToDefaultMapping); \
	DECLARE_FUNCTION(execchangeButtonMapping); \
	DECLARE_FUNCTION(execbuttonIDToButton); \
	DECLARE_FUNCTION(execdirectinalPadValueToDirection); \
	DECLARE_FUNCTION(execgetPersistentGamepadEvent); \
	DECLARE_FUNCTION(execgetGamepadEvent); \
	DECLARE_FUNCTION(execstopController); \
	DECLARE_FUNCTION(execinitController); \
	DECLARE_FUNCTION(execdeviceDetachedEventDelegate); \
	DECLARE_FUNCTION(execdeviceAttachedEventDelegate); \
	DECLARE_FUNCTION(execaxisMovedEventDelegate); \
	DECLARE_FUNCTION(execballMovedEventDelegate); \
	DECLARE_FUNCTION(execdirectionalPadEventDelegate); \
	DECLARE_FUNCTION(execbuttonUpEventDelegate); \
	DECLARE_FUNCTION(execbuttonDownEventDelegate); \
	DECLARE_FUNCTION(execgetSimpleControllerTarget);


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleControllerBPLibrary(); \
	friend struct Z_Construct_UClass_USimpleControllerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleControllerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleController"), NO_API) \
	DECLARE_SERIALIZER(USimpleControllerBPLibrary)


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleControllerBPLibrary(); \
	friend struct Z_Construct_UClass_USimpleControllerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleControllerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleController"), NO_API) \
	DECLARE_SERIALIZER(USimpleControllerBPLibrary)


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleControllerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleControllerBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleControllerBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleControllerBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleControllerBPLibrary(USimpleControllerBPLibrary&&); \
	NO_API USimpleControllerBPLibrary(const USimpleControllerBPLibrary&); \
public:


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleControllerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleControllerBPLibrary(USimpleControllerBPLibrary&&); \
	NO_API USimpleControllerBPLibrary(const USimpleControllerBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleControllerBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleControllerBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleControllerBPLibrary)


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_13_PROLOG
#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_SPARSE_DATA \
	AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_RPC_WRAPPERS \
	AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_INCLASS \
	AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_SPARSE_DATA \
	AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_INCLASS_NO_PURE_DECLS \
	AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SimpleControllerBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECONTROLLER_API UClass* StaticClass<class USimpleControllerBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
