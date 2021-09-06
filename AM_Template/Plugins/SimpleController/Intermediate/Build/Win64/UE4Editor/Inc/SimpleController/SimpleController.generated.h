// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLECONTROLLER_SimpleController_generated_h
#error "SimpleController.generated.h already included, missing '#pragma once' in SimpleController.h"
#endif
#define SIMPLECONTROLLER_SimpleController_generated_h

#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_395_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics; \
	SIMPLECONTROLLER_API static class UScriptStruct* StaticStruct();


template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<struct FSimpleControllerForceFeedbackEffect>();

#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_285_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics; \
	SIMPLECONTROLLER_API static class UScriptStruct* StaticStruct();


template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<struct FSimpleControllerDevice>();

#define AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_268_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Statics; \
	SIMPLECONTROLLER_API static class UScriptStruct* StaticStruct();


template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<struct FSimpleControllerAxisStatus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AM_Template_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h


#define FOREACH_ENUM_ESIMPLECONTROLLERBUTTONS(op) \
	op(ESimpleControllerButtons::Button_0) \
	op(ESimpleControllerButtons::Button_1) \
	op(ESimpleControllerButtons::Button_2) \
	op(ESimpleControllerButtons::Button_3) \
	op(ESimpleControllerButtons::Button_4) \
	op(ESimpleControllerButtons::Button_5) \
	op(ESimpleControllerButtons::Button_6) \
	op(ESimpleControllerButtons::Button_7) \
	op(ESimpleControllerButtons::Button_8) \
	op(ESimpleControllerButtons::Button_9) \
	op(ESimpleControllerButtons::Button_10) \
	op(ESimpleControllerButtons::Button_11) \
	op(ESimpleControllerButtons::Button_12) \
	op(ESimpleControllerButtons::Button_13) \
	op(ESimpleControllerButtons::Button_14) \
	op(ESimpleControllerButtons::Button_15) \
	op(ESimpleControllerButtons::Button_16) \
	op(ESimpleControllerButtons::Button_17) \
	op(ESimpleControllerButtons::Button_18) \
	op(ESimpleControllerButtons::Button_19) \
	op(ESimpleControllerButtons::Button_20) 

enum class ESimpleControllerButtons : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerButtons>();

#define FOREACH_ENUM_ESIMPLECONTROLLERDIRECTIONALPAD(op) \
	op(ESimpleControllerDirectionalPad::CENTERED) \
	op(ESimpleControllerDirectionalPad::UP) \
	op(ESimpleControllerDirectionalPad::RIGHT) \
	op(ESimpleControllerDirectionalPad::DOWN) \
	op(ESimpleControllerDirectionalPad::LEFT) \
	op(ESimpleControllerDirectionalPad::RIGHTUP) \
	op(ESimpleControllerDirectionalPad::RIGHTDOWN) \
	op(ESimpleControllerDirectionalPad::LEFTUP) \
	op(ESimpleControllerDirectionalPad::LEFTDOWN) 

enum class ESimpleControllerDirectionalPad : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerDirectionalPad>();

#define FOREACH_ENUM_ESIMPLECONTROLLERFORCEFEEDBACKDIRECTIONTYPE(op) \
	op(ESimpleControllerForceFeedbackDirectionType::CARTESIAN) \
	op(ESimpleControllerForceFeedbackDirectionType::POLAR) \
	op(ESimpleControllerForceFeedbackDirectionType::SPHERICAL) 

enum class ESimpleControllerForceFeedbackDirectionType : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackDirectionType>();

#define FOREACH_ENUM_ESIMPLECONTROLLERFORCEFEEDBACKEFFECTCONDITIONTYPE(op) \
	op(ESimpleControllerForceFeedbackEffectConditionType::SPRING) \
	op(ESimpleControllerForceFeedbackEffectConditionType::DAMPER) \
	op(ESimpleControllerForceFeedbackEffectConditionType::INERTIA) \
	op(ESimpleControllerForceFeedbackEffectConditionType::FRICTION) 

enum class ESimpleControllerForceFeedbackEffectConditionType : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectConditionType>();

#define FOREACH_ENUM_ESIMPLECONTROLLERFORCEFEEDBACKEFFECTPERIODICTYPE(op) \
	op(ESimpleControllerForceFeedbackEffectPeriodicType::SINE) \
	op(ESimpleControllerForceFeedbackEffectPeriodicType::TRIANGLE) \
	op(ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHUP) \
	op(ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHDOWN) 

enum class ESimpleControllerForceFeedbackEffectPeriodicType : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectPeriodicType>();

#define FOREACH_ENUM_ESIMPLECONTROLLERFORCEFEEDBACKEFFECTTYPE(op) \
	op(ESimpleControllerForceFeedbackEffectType::CONSTANT) \
	op(ESimpleControllerForceFeedbackEffectType::LEFTRIGHT) 

enum class ESimpleControllerForceFeedbackEffectType : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectType>();

#define FOREACH_ENUM_ESIMPLECONTROLLERALLBUTTONRELEASEDSTATUS(op) \
	op(ESimpleControllerAllButtonReleasedStatus::ButtonFaceBottom) \
	op(ESimpleControllerAllButtonReleasedStatus::ButtonFaceRight) \
	op(ESimpleControllerAllButtonReleasedStatus::ButtonFaceLeft) \
	op(ESimpleControllerAllButtonReleasedStatus::ButtonFaceTop) \
	op(ESimpleControllerAllButtonReleasedStatus::LEFTSHOULDER) \
	op(ESimpleControllerAllButtonReleasedStatus::RIGHTSHOULDER) \
	op(ESimpleControllerAllButtonReleasedStatus::DPAD_UP) \
	op(ESimpleControllerAllButtonReleasedStatus::DPAD_DOWN) \
	op(ESimpleControllerAllButtonReleasedStatus::DPAD_LEFT) \
	op(ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHT) \
	op(ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTUP) \
	op(ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTDOWN) \
	op(ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTUP) \
	op(ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTDOWN) \
	op(ESimpleControllerAllButtonReleasedStatus::BACK) \
	op(ESimpleControllerAllButtonReleasedStatus::GUIDE) \
	op(ESimpleControllerAllButtonReleasedStatus::START) \
	op(ESimpleControllerAllButtonReleasedStatus::LEFTSTICK) \
	op(ESimpleControllerAllButtonReleasedStatus::RIGHTSTICK) 

enum class ESimpleControllerAllButtonReleasedStatus : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerAllButtonReleasedStatus>();

#define FOREACH_ENUM_ESIMPLECONTROLLERALLBUTTONPRESSEDSTATUS(op) \
	op(ESimpleControllerAllButtonPressedStatus::ButtonFaceBottom) \
	op(ESimpleControllerAllButtonPressedStatus::ButtonFaceRight) \
	op(ESimpleControllerAllButtonPressedStatus::ButtonFaceLeft) \
	op(ESimpleControllerAllButtonPressedStatus::ButtonFaceTop) \
	op(ESimpleControllerAllButtonPressedStatus::LEFTSHOULDER) \
	op(ESimpleControllerAllButtonPressedStatus::RIGHTSHOULDER) \
	op(ESimpleControllerAllButtonPressedStatus::DPAD_UP) \
	op(ESimpleControllerAllButtonPressedStatus::DPAD_DOWN) \
	op(ESimpleControllerAllButtonPressedStatus::DPAD_LEFT) \
	op(ESimpleControllerAllButtonPressedStatus::DPAD_RIGHT) \
	op(ESimpleControllerAllButtonPressedStatus::DPAD_LEFTUP) \
	op(ESimpleControllerAllButtonPressedStatus::DPAD_LEFTDOWN) \
	op(ESimpleControllerAllButtonPressedStatus::DPAD_RIGHTUP) \
	op(ESimpleControllerAllButtonPressedStatus::DPAD_RIGHTDOWN) \
	op(ESimpleControllerAllButtonPressedStatus::BACK) \
	op(ESimpleControllerAllButtonPressedStatus::GUIDE) \
	op(ESimpleControllerAllButtonPressedStatus::START) \
	op(ESimpleControllerAllButtonPressedStatus::LEFTSTICK) \
	op(ESimpleControllerAllButtonPressedStatus::RIGHTSTICK) 

enum class ESimpleControllerAllButtonPressedStatus : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerAllButtonPressedStatus>();

#define FOREACH_ENUM_ESIMPLECONTROLLERCONNECTIONINDEX(op) \
	op(ESimpleControllerConnectionIndex::Index_0) \
	op(ESimpleControllerConnectionIndex::Index_1) \
	op(ESimpleControllerConnectionIndex::Index_2) \
	op(ESimpleControllerConnectionIndex::Index_3) \
	op(ESimpleControllerConnectionIndex::Index_4) \
	op(ESimpleControllerConnectionIndex::Index_5) \
	op(ESimpleControllerConnectionIndex::Index_6) \
	op(ESimpleControllerConnectionIndex::Index_7) \
	op(ESimpleControllerConnectionIndex::Index_8) \
	op(ESimpleControllerConnectionIndex::Index_9) \
	op(ESimpleControllerConnectionIndex::Index_10) \
	op(ESimpleControllerConnectionIndex::Index_11) \
	op(ESimpleControllerConnectionIndex::Index_12) \
	op(ESimpleControllerConnectionIndex::Index_13) \
	op(ESimpleControllerConnectionIndex::Index_14) \
	op(ESimpleControllerConnectionIndex::Index_15) 

enum class ESimpleControllerConnectionIndex : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerConnectionIndex>();

#define FOREACH_ENUM_ESIMPLECONTROLLERPERSISTENTEVENTREFRESHRATE(op) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_10) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_20) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_30) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_40) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_50) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_60) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_70) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_80) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_90) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_100) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_120) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_140) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_160) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_180) \
	op(ESimpleControllerPersistentEventRefreshRate::Index_200) 

enum class ESimpleControllerPersistentEventRefreshRate : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerPersistentEventRefreshRate>();

#define FOREACH_ENUM_ESIMPLECONTROLLERREFRESHRATE(op) \
	op(ESimpleControllerRefreshRate::Index_30) \
	op(ESimpleControllerRefreshRate::Index_60) \
	op(ESimpleControllerRefreshRate::Index_120) \
	op(ESimpleControllerRefreshRate::Index_240) 

enum class ESimpleControllerRefreshRate : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerRefreshRate>();

#define FOREACH_ENUM_ESIMPLECONTROLLERPOWERLEVEL(op) \
	op(ESimpleControllerPowerLevel::UNKNOWN) \
	op(ESimpleControllerPowerLevel::EMPTY) \
	op(ESimpleControllerPowerLevel::LOW) \
	op(ESimpleControllerPowerLevel::MEDIUM) \
	op(ESimpleControllerPowerLevel::FULL) \
	op(ESimpleControllerPowerLevel::WIRED) 

enum class ESimpleControllerPowerLevel : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerPowerLevel>();

#define FOREACH_ENUM_ESIMPLECONTROLLERTYPE(op) \
	op(ESimpleControllerType::UNKNOWN) \
	op(ESimpleControllerType::GAMECONTROLLER) \
	op(ESimpleControllerType::WHEEL) \
	op(ESimpleControllerType::ARCADE_STICK) \
	op(ESimpleControllerType::FLIGHT_STICK) \
	op(ESimpleControllerType::DANCE_PAD) \
	op(ESimpleControllerType::GUITAR) \
	op(ESimpleControllerType::DRUM_KIT) \
	op(ESimpleControllerType::ARCADE_PAD) \
	op(ESimpleControllerType::THROTTLE) 

enum class ESimpleControllerType : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerType>();

#define FOREACH_ENUM_ESIMPLECONTROLLERBUTTONSTATUS(op) \
	op(ESimpleControllerButtonStatus::Pressed) \
	op(ESimpleControllerButtonStatus::Released) 

enum class ESimpleControllerButtonStatus : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerButtonStatus>();

#define FOREACH_ENUM_ESIMPLECONTROLLERDIRECTORYTYPE(op) \
	op(ESimpleControllerDirectoryType::GameDir) \
	op(ESimpleControllerDirectoryType::AbsoluteDir) 

enum class ESimpleControllerDirectoryType : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerDirectoryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
