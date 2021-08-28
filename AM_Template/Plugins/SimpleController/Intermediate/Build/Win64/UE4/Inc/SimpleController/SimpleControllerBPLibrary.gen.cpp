// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/SimpleControllerBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleControllerBPLibrary() {}
// Cross Module References
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerBPLibrary();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerAxisStatus();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerType();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtons();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerConnectionIndex();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerCustomEvents_NoRegister();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerPersistentEventRefreshRate();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerRefreshRate();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectoryType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceDetachedEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceAttachedEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms
		{
			FString deviceID;
			int32 axisID;
			float axisValue;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_axisID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, deviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, axisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, axisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_axisID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_axisValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "axisMovedEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms
		{
			FString deviceID;
			int32 ballID;
			float xRel;
			int32 yRel;
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ballID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_xRel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_yRel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, deviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_ballID = { "ballID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, ballID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_xRel = { "xRel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, xRel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_yRel = { "yRel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, yRel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_ballID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_xRel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_yRel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "ballMovedEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms
		{
			FString deviceID;
			int32 directionalPadValue;
			int32 directionalPadIndex;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionalPadValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionalPadIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, deviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_directionalPadValue = { "directionalPadValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, directionalPadValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_directionalPadIndex = { "directionalPadIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, directionalPadIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_directionalPadValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_directionalPadIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "directionalPadEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms
		{
			FString deviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, deviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, buttonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_buttonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonUpEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms
		{
			FString deviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, deviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, buttonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_buttonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Delegates\n" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonDownEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakForceFeedbackEffect)
	{
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_forceFeedbackEffect);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_effectID);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakForceFeedbackEffect(Z_Param_forceFeedbackEffect,Z_Param_Out_effectID,Z_Param_Out_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetCurrentPowerLevel)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM_REF(ESimpleControllerPowerLevel,Z_Param_Out_powerLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::getCurrentPowerLevel(Z_Param_device,(ESimpleControllerPowerLevel&)(Z_Param_Out_powerLevel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakAxisStatus)
	{
		P_GET_STRUCT(FSimpleControllerAxisStatus,Z_Param_axisStatus);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_leftStickX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_leftStickY);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_rightStickX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_rightStickY);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_leftTrigger);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_rightTrigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakAxisStatus(Z_Param_axisStatus,Z_Param_Out_leftStickX,Z_Param_Out_leftStickY,Z_Param_Out_rightStickX,Z_Param_Out_rightStickY,Z_Param_Out_leftTrigger,Z_Param_Out_rightTrigger);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakDeviceForceFeedbackInfo)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_UBOOL_REF(Z_Param_Out_hasHaptic);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_CONSTANT);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SINE);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_LEFTRIGHT);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_TRIANGLE);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SAWTOOTHUP);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SAWTOOTHDOWN);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_RAMP);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SPRING);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_DAMPER);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_INERTIA);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_FRICTION);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_CUSTOM);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_GAIN);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_AUTOCENTER);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_STATUS);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_PAUSE);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_POLAR);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_CARTESIAN);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SPHERICAL);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_INFINITY);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_maxSimultaneouslyEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakDeviceForceFeedbackInfo(Z_Param_device,Z_Param_Out_hasHaptic,Z_Param_Out_forceFeedback_CONSTANT,Z_Param_Out_forceFeedback_SINE,Z_Param_Out_forceFeedback_LEFTRIGHT,Z_Param_Out_forceFeedback_TRIANGLE,Z_Param_Out_forceFeedback_SAWTOOTHUP,Z_Param_Out_forceFeedback_SAWTOOTHDOWN,Z_Param_Out_forceFeedback_RAMP,Z_Param_Out_forceFeedback_SPRING,Z_Param_Out_forceFeedback_DAMPER,Z_Param_Out_forceFeedback_INERTIA,Z_Param_Out_forceFeedback_FRICTION,Z_Param_Out_forceFeedback_CUSTOM,Z_Param_Out_forceFeedback_GAIN,Z_Param_Out_forceFeedback_AUTOCENTER,Z_Param_Out_forceFeedback_STATUS,Z_Param_Out_forceFeedback_PAUSE,Z_Param_Out_forceFeedback_POLAR,Z_Param_Out_forceFeedback_CARTESIAN,Z_Param_Out_forceFeedback_SPHERICAL,Z_Param_Out_forceFeedback_INFINITY,Z_Param_Out_maxSimultaneouslyEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakDeviceInfo)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_deviceIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_connectionIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_controllerName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_vendorID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_productID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numAxes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numButtons);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numDirectionalPadAxes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numBalls);
		P_GET_UBOOL_REF(Z_Param_Out_hasHaptic);
		P_GET_UBOOL_REF(Z_Param_Out_gamepadAPI_Support);
		P_GET_UBOOL_REF(Z_Param_Out_isXinput);
		P_GET_ENUM_REF(ESimpleControllerType,Z_Param_Out_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakDeviceInfo(Z_Param_device,Z_Param_Out_deviceIndex,Z_Param_Out_connectionIndex,Z_Param_Out_deviceID,Z_Param_Out_deviceName,Z_Param_Out_controllerName,Z_Param_Out_vendorID,Z_Param_Out_productID,Z_Param_Out_numAxes,Z_Param_Out_numButtons,Z_Param_Out_numDirectionalPadAxes,Z_Param_Out_numBalls,Z_Param_Out_hasHaptic,Z_Param_Out_gamepadAPI_Support,Z_Param_Out_isXinput,(ESimpleControllerType&)(Z_Param_Out_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsetGainForceFeedback)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::setGainForceFeedback(Z_Param_device,Z_Param_gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsetAutocenterForceFeedback)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_autocenter);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::setAutocenterForceFeedback(Z_Param_device,Z_Param_autocenter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdestroyForceFeedbackEffect)
	{
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_forceFeedbackEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::destroyForceFeedbackEffect(Z_Param_forceFeedbackEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execuploadAndRunForceFeedbackEffect)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_forceFeedbackEffect);
		P_GET_PROPERTY(FIntProperty,Z_Param_iterations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerForceFeedbackEffect*)Z_Param__Result=USimpleControllerBPLibrary::uploadAndRunForceFeedbackEffect(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_forceFeedbackEffect,Z_Param_iterations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectRamp)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_forceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackDirectionType,Z_Param_directionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionX);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_GET_PROPERTY(FIntProperty,Z_Param_delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_startLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_endLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_attackLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attackLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_fadeLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->createForceFeedbackEffectRamp(Z_Param_Out_forceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackDirectionType(Z_Param_directionType),Z_Param_directionX,Z_Param_directionY,Z_Param_directionZ,Z_Param_length,Z_Param_delay,Z_Param_startLevel,Z_Param_endLevel,Z_Param_attackLength,Z_Param_attackLevel,Z_Param_fadeLength,Z_Param_fadeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectCondition)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_forceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackEffectConditionType,Z_Param_ConditionType);
		P_GET_UBOOL(Z_Param_useDirectionX);
		P_GET_UBOOL(Z_Param_useDirectionY);
		P_GET_UBOOL(Z_Param_useDirectionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_GET_PROPERTY(FIntProperty,Z_Param_delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rightLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_leftLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_rightLevelIncreaseSpeed);
		P_GET_PROPERTY(FIntProperty,Z_Param_leftLevelIncreaseSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deadband);
		P_GET_PROPERTY(FIntProperty,Z_Param_center);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->createForceFeedbackEffectCondition(Z_Param_Out_forceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackEffectConditionType(Z_Param_ConditionType),Z_Param_useDirectionX,Z_Param_useDirectionY,Z_Param_useDirectionZ,Z_Param_length,Z_Param_delay,Z_Param_rightLevel,Z_Param_leftLevel,Z_Param_rightLevelIncreaseSpeed,Z_Param_leftLevelIncreaseSpeed,Z_Param_deadband,Z_Param_center);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectPeriodic)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_forceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackEffectPeriodicType,Z_Param_PeriodicType);
		P_GET_ENUM(ESimpleControllerForceFeedbackDirectionType,Z_Param_directionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionX);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_GET_PROPERTY(FIntProperty,Z_Param_delay);
		P_GET_PROPERTY(FIntProperty,Z_Param_period);
		P_GET_PROPERTY(FFloatProperty,Z_Param_magnitude);
		P_GET_PROPERTY(FIntProperty,Z_Param_offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_phase);
		P_GET_PROPERTY(FIntProperty,Z_Param_attackLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attackLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_fadeLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->createForceFeedbackEffectPeriodic(Z_Param_Out_forceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackEffectPeriodicType(Z_Param_PeriodicType),ESimpleControllerForceFeedbackDirectionType(Z_Param_directionType),Z_Param_directionX,Z_Param_directionY,Z_Param_directionZ,Z_Param_length,Z_Param_delay,Z_Param_period,Z_Param_magnitude,Z_Param_offset,Z_Param_phase,Z_Param_attackLength,Z_Param_attackLevel,Z_Param_fadeLength,Z_Param_fadeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectConstant)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_forceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackDirectionType,Z_Param_directionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionX);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_GET_PROPERTY(FIntProperty,Z_Param_delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_level);
		P_GET_PROPERTY(FIntProperty,Z_Param_attackLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attackLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_fadeLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->createForceFeedbackEffectConstant(Z_Param_Out_forceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackDirectionType(Z_Param_directionType),Z_Param_directionX,Z_Param_directionY,Z_Param_directionZ,Z_Param_length,Z_Param_delay,Z_Param_level,Z_Param_attackLength,Z_Param_attackLevel,Z_Param_fadeLength,Z_Param_fadeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execrumble)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthSmallMotor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthLargeMotor);
		P_GET_PROPERTY(FIntProperty,Z_Param_lengthInMilliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->rumble(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,Z_Param_strengthSmallMotor,Z_Param_strengthLargeMotor,Z_Param_lengthInMilliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execfindDeviceIndexByConnectionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_deviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->findDeviceIndexByConnectionIndex(Z_Param_connectionIndex,Z_Param_Out_found,Z_Param_Out_deviceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execfindControllerByDeviceID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerDevice*)Z_Param__Result=P_THIS->findControllerByDeviceID(Z_Param_deviceID,Z_Param_Out_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execfindControllerByDeviceIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerDevice*)Z_Param__Result=P_THIS->findControllerByDeviceIndex(Z_Param_deviceIndex,Z_Param_Out_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetConnectedControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSimpleControllerDevice>*)Z_Param__Result=P_THIS->getConnectedControllers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execloadMapping)
	{
		P_GET_ENUM(ESimpleControllerDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileNameWithPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->loadMapping(ESimpleControllerDirectoryType(Z_Param_directoryType),Z_Param_deviceIndex,Z_Param_fileNameWithPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsaveMapping)
	{
		P_GET_ENUM(ESimpleControllerDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileNameWithPath);
		P_GET_UBOOL(Z_Param_createDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->saveMapping(ESimpleControllerDirectoryType(Z_Param_directoryType),Z_Param_deviceIndex,Z_Param_fileNameWithPath,Z_Param_createDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetAllAxisInverting)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetAllAxisInverting(Z_Param_deviceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetAxisInverting)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetAxisInverting(Z_Param_deviceIndex,Z_Param_axisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execinvertAxis)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->invertAxis(Z_Param_deviceIndex,Z_Param_axisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetAllAxisToDefaultMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetAllAxisToDefaultMapping(Z_Param_deviceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetAxisToDefaultMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_oldAxisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetAxisToDefaultMapping(Z_Param_deviceIndex,Z_Param_oldAxisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execchangeAxisMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_oldAxisID);
		P_GET_PROPERTY(FIntProperty,Z_Param_newAxisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->changeAxisMapping(Z_Param_deviceIndex,Z_Param_oldAxisID,Z_Param_newAxisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetAllButtonsToDefaultMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetAllButtonsToDefaultMapping(Z_Param_deviceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetButtonToDefaultMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_oldButtonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetButtonToDefaultMapping(Z_Param_deviceIndex,Z_Param_oldButtonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execchangeButtonMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_oldButtonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_newButtonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->changeButtonMapping(Z_Param_deviceIndex,Z_Param_oldButtonID,Z_Param_newButtonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbuttonIDToButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_ENUM_REF(ESimpleControllerButtons,Z_Param_Out_buttons);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::buttonIDToButton(Z_Param_buttonID,(ESimpleControllerButtons&)(Z_Param_Out_buttons));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdirectinalPadValueToDirection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_directionalPadValue);
		P_GET_ENUM_REF(ESimpleControllerDirectionalPad,Z_Param_Out_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::directinalPadValueToDirection(Z_Param_directionalPadValue,(ESimpleControllerDirectionalPad&)(Z_Param_Out_direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetPersistentGamepadEvent)
	{
		P_GET_ENUM(ESimpleControllerConnectionIndex,Z_Param_connectionIndex);
		P_GET_ENUM(ESimpleControllerPersistentEventRefreshRate,Z_Param_refreshRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerCustomEvents**)Z_Param__Result=P_THIS->getPersistentGamepadEvent(ESimpleControllerConnectionIndex(Z_Param_connectionIndex),ESimpleControllerPersistentEventRefreshRate(Z_Param_refreshRate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetGamepadEvent)
	{
		P_GET_ENUM(ESimpleControllerConnectionIndex,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerCustomEvents**)Z_Param__Result=P_THIS->getGamepadEvent(ESimpleControllerConnectionIndex(Z_Param_connectionIndex));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execstopController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->stopController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execinitController)
	{
		P_GET_ENUM(ESimpleControllerRefreshRate,Z_Param_refreshRate);
		P_GET_UBOOL(Z_Param_xinputAsDirectinput);
		P_GET_UBOOL(Z_Param_useGamepadAPI);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->initController(ESimpleControllerRefreshRate(Z_Param_refreshRate),Z_Param_xinputAsDirectinput,Z_Param_useGamepadAPI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdeviceDetachedEventDelegate)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->deviceDetachedEventDelegate(Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdeviceAttachedEventDelegate)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->deviceAttachedEventDelegate(Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execaxisMovedEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->axisMovedEventDelegate(Z_Param_deviceID,Z_Param_axisID,Z_Param_axisValue,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execballMovedEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ballID);
		P_GET_PROPERTY(FIntProperty,Z_Param_xRel);
		P_GET_PROPERTY(FIntProperty,Z_Param_yRel);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ballMovedEventDelegate(Z_Param_deviceID,Z_Param_ballID,Z_Param_xRel,Z_Param_yRel,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdirectionalPadEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionalPadValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionalPadIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->directionalPadEventDelegate(Z_Param_deviceID,Z_Param_directionalPadValue,Z_Param_directionalPadIndex,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbuttonUpEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->buttonUpEventDelegate(Z_Param_deviceID,Z_Param_buttonID,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbuttonDownEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->buttonDownEventDelegate(Z_Param_deviceID,Z_Param_buttonID,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetSimpleControllerTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerBPLibrary**)Z_Param__Result=USimpleControllerBPLibrary::getSimpleControllerTarget();
		P_NATIVE_END;
	}
	void USimpleControllerBPLibrary::StaticRegisterNativesUSimpleControllerBPLibrary()
	{
		UClass* Class = USimpleControllerBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "axisMovedEventDelegate", &USimpleControllerBPLibrary::execaxisMovedEventDelegate },
			{ "ballMovedEventDelegate", &USimpleControllerBPLibrary::execballMovedEventDelegate },
			{ "breakAxisStatus", &USimpleControllerBPLibrary::execbreakAxisStatus },
			{ "breakDeviceForceFeedbackInfo", &USimpleControllerBPLibrary::execbreakDeviceForceFeedbackInfo },
			{ "breakDeviceInfo", &USimpleControllerBPLibrary::execbreakDeviceInfo },
			{ "breakForceFeedbackEffect", &USimpleControllerBPLibrary::execbreakForceFeedbackEffect },
			{ "buttonDownEventDelegate", &USimpleControllerBPLibrary::execbuttonDownEventDelegate },
			{ "buttonIDToButton", &USimpleControllerBPLibrary::execbuttonIDToButton },
			{ "buttonUpEventDelegate", &USimpleControllerBPLibrary::execbuttonUpEventDelegate },
			{ "changeAxisMapping", &USimpleControllerBPLibrary::execchangeAxisMapping },
			{ "changeButtonMapping", &USimpleControllerBPLibrary::execchangeButtonMapping },
			{ "createForceFeedbackEffectCondition", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectCondition },
			{ "createForceFeedbackEffectConstant", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectConstant },
			{ "createForceFeedbackEffectPeriodic", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectPeriodic },
			{ "createForceFeedbackEffectRamp", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectRamp },
			{ "destroyForceFeedbackEffect", &USimpleControllerBPLibrary::execdestroyForceFeedbackEffect },
			{ "deviceAttachedEventDelegate", &USimpleControllerBPLibrary::execdeviceAttachedEventDelegate },
			{ "deviceDetachedEventDelegate", &USimpleControllerBPLibrary::execdeviceDetachedEventDelegate },
			{ "directinalPadValueToDirection", &USimpleControllerBPLibrary::execdirectinalPadValueToDirection },
			{ "directionalPadEventDelegate", &USimpleControllerBPLibrary::execdirectionalPadEventDelegate },
			{ "findControllerByDeviceID", &USimpleControllerBPLibrary::execfindControllerByDeviceID },
			{ "findControllerByDeviceIndex", &USimpleControllerBPLibrary::execfindControllerByDeviceIndex },
			{ "findDeviceIndexByConnectionIndex", &USimpleControllerBPLibrary::execfindDeviceIndexByConnectionIndex },
			{ "getConnectedControllers", &USimpleControllerBPLibrary::execgetConnectedControllers },
			{ "getCurrentPowerLevel", &USimpleControllerBPLibrary::execgetCurrentPowerLevel },
			{ "getGamepadEvent", &USimpleControllerBPLibrary::execgetGamepadEvent },
			{ "getPersistentGamepadEvent", &USimpleControllerBPLibrary::execgetPersistentGamepadEvent },
			{ "getSimpleControllerTarget", &USimpleControllerBPLibrary::execgetSimpleControllerTarget },
			{ "initController", &USimpleControllerBPLibrary::execinitController },
			{ "invertAxis", &USimpleControllerBPLibrary::execinvertAxis },
			{ "loadMapping", &USimpleControllerBPLibrary::execloadMapping },
			{ "resetAllAxisInverting", &USimpleControllerBPLibrary::execresetAllAxisInverting },
			{ "resetAllAxisToDefaultMapping", &USimpleControllerBPLibrary::execresetAllAxisToDefaultMapping },
			{ "resetAllButtonsToDefaultMapping", &USimpleControllerBPLibrary::execresetAllButtonsToDefaultMapping },
			{ "resetAxisInverting", &USimpleControllerBPLibrary::execresetAxisInverting },
			{ "resetAxisToDefaultMapping", &USimpleControllerBPLibrary::execresetAxisToDefaultMapping },
			{ "resetButtonToDefaultMapping", &USimpleControllerBPLibrary::execresetButtonToDefaultMapping },
			{ "rumble", &USimpleControllerBPLibrary::execrumble },
			{ "saveMapping", &USimpleControllerBPLibrary::execsaveMapping },
			{ "setAutocenterForceFeedback", &USimpleControllerBPLibrary::execsetAutocenterForceFeedback },
			{ "setGainForceFeedback", &USimpleControllerBPLibrary::execsetGainForceFeedback },
			{ "stopController", &USimpleControllerBPLibrary::execstopController },
			{ "uploadAndRunForceFeedbackEffect", &USimpleControllerBPLibrary::execuploadAndRunForceFeedbackEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms
		{
			FString deviceID;
			int32 axisID;
			float axisValue;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_axisID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_axisID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_axisValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_axisValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, deviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, axisID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, axisValue), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, deviceIndex), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "axisMovedEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms
		{
			FString deviceID;
			int32 ballID;
			int32 xRel;
			int32 yRel;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ballID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ballID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xRel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_xRel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yRel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_yRel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, deviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_deviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_deviceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID = { "ballID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, ballID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel = { "xRel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, xRel), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel = { "yRel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, yRel), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "ballMovedEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakAxisStatus_Parms
		{
			FSimpleControllerAxisStatus axisStatus;
			float leftStickX;
			float leftStickY;
			float rightStickX;
			float rightStickY;
			float leftTrigger;
			float rightTrigger;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_axisStatus;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_leftStickX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_leftStickY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rightStickX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rightStickY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_leftTrigger;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rightTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_axisStatus = { "axisStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisStatus_Parms, axisStatus), Z_Construct_UScriptStruct_FSimpleControllerAxisStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_leftStickX = { "leftStickX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisStatus_Parms, leftStickX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_leftStickY = { "leftStickY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisStatus_Parms, leftStickY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_rightStickX = { "rightStickX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisStatus_Parms, rightStickX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_rightStickY = { "rightStickY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisStatus_Parms, rightStickY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_leftTrigger = { "leftTrigger", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisStatus_Parms, leftTrigger), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_rightTrigger = { "rightTrigger", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisStatus_Parms, rightTrigger), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_axisStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_leftStickX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_leftStickY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_rightStickX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_rightStickY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_leftTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::NewProp_rightTrigger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakAxisStatus", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbreakAxisStatus_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms
		{
			FSimpleControllerDevice device;
			bool hasHaptic;
			bool forceFeedback_CONSTANT;
			bool forceFeedback_SINE;
			bool forceFeedback_LEFTRIGHT;
			bool forceFeedback_TRIANGLE;
			bool forceFeedback_SAWTOOTHUP;
			bool forceFeedback_SAWTOOTHDOWN;
			bool forceFeedback_RAMP;
			bool forceFeedback_SPRING;
			bool forceFeedback_DAMPER;
			bool forceFeedback_INERTIA;
			bool forceFeedback_FRICTION;
			bool forceFeedback_CUSTOM;
			bool forceFeedback_GAIN;
			bool forceFeedback_AUTOCENTER;
			bool forceFeedback_STATUS;
			bool forceFeedback_PAUSE;
			bool forceFeedback_POLAR;
			bool forceFeedback_CARTESIAN;
			bool forceFeedback_SPHERICAL;
			bool forceFeedback_INFINITY;
			int32 maxSimultaneouslyEffects;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static void NewProp_hasHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasHaptic;
		static void NewProp_forceFeedback_CONSTANT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_CONSTANT;
		static void NewProp_forceFeedback_SINE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SINE;
		static void NewProp_forceFeedback_LEFTRIGHT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_LEFTRIGHT;
		static void NewProp_forceFeedback_TRIANGLE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_TRIANGLE;
		static void NewProp_forceFeedback_SAWTOOTHUP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SAWTOOTHUP;
		static void NewProp_forceFeedback_SAWTOOTHDOWN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SAWTOOTHDOWN;
		static void NewProp_forceFeedback_RAMP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_RAMP;
		static void NewProp_forceFeedback_SPRING_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SPRING;
		static void NewProp_forceFeedback_DAMPER_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_DAMPER;
		static void NewProp_forceFeedback_INERTIA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_INERTIA;
		static void NewProp_forceFeedback_FRICTION_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_FRICTION;
		static void NewProp_forceFeedback_CUSTOM_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_CUSTOM;
		static void NewProp_forceFeedback_GAIN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_GAIN;
		static void NewProp_forceFeedback_AUTOCENTER_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_AUTOCENTER;
		static void NewProp_forceFeedback_STATUS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_STATUS;
		static void NewProp_forceFeedback_PAUSE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_PAUSE;
		static void NewProp_forceFeedback_POLAR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_POLAR;
		static void NewProp_forceFeedback_CARTESIAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_CARTESIAN;
		static void NewProp_forceFeedback_SPHERICAL_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SPHERICAL;
		static void NewProp_forceFeedback_INFINITY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_INFINITY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxSimultaneouslyEffects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_hasHaptic_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->hasHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_hasHaptic = { "hasHaptic", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_hasHaptic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_CONSTANT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT = { "forceFeedback_CONSTANT", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SINE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE = { "forceFeedback_SINE", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_LEFTRIGHT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT = { "forceFeedback_LEFTRIGHT", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_TRIANGLE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE = { "forceFeedback_TRIANGLE", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SAWTOOTHUP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP = { "forceFeedback_SAWTOOTHUP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SAWTOOTHDOWN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN = { "forceFeedback_SAWTOOTHDOWN", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_RAMP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP = { "forceFeedback_RAMP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SPRING = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING = { "forceFeedback_SPRING", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_DAMPER = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER = { "forceFeedback_DAMPER", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_INERTIA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA = { "forceFeedback_INERTIA", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_FRICTION = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION = { "forceFeedback_FRICTION", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_CUSTOM = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM = { "forceFeedback_CUSTOM", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_GAIN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN = { "forceFeedback_GAIN", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_AUTOCENTER = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER = { "forceFeedback_AUTOCENTER", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_STATUS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS = { "forceFeedback_STATUS", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_PAUSE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE = { "forceFeedback_PAUSE", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_POLAR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR = { "forceFeedback_POLAR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_CARTESIAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN = { "forceFeedback_CARTESIAN", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SPHERICAL = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL = { "forceFeedback_SPHERICAL", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_INFINITY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY = { "forceFeedback_INFINITY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_maxSimultaneouslyEffects = { "maxSimultaneouslyEffects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms, maxSimultaneouslyEffects), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_hasHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_maxSimultaneouslyEffects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakDeviceForceFeedbackInfo", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms
		{
			FSimpleControllerDevice device;
			int32 deviceIndex;
			int32 connectionIndex;
			FString deviceID;
			FString deviceName;
			FString controllerName;
			int32 vendorID;
			int32 productID;
			int32 numAxes;
			int32 numButtons;
			int32 numDirectionalPadAxes;
			int32 numBalls;
			bool hasHaptic;
			bool gamepadAPI_Support;
			bool isXinput;
			ESimpleControllerType type;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_controllerName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_vendorID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_productID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numAxes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numButtons;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numDirectionalPadAxes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numBalls;
		static void NewProp_hasHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasHaptic;
		static void NewProp_gamepadAPI_Support_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_gamepadAPI_Support;
		static void NewProp_isXinput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isXinput;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, connectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, deviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, deviceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_controllerName = { "controllerName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, controllerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_vendorID = { "vendorID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, vendorID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_productID = { "productID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, productID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numAxes = { "numAxes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numAxes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numButtons = { "numButtons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numButtons), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numDirectionalPadAxes = { "numDirectionalPadAxes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numDirectionalPadAxes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numBalls = { "numBalls", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numBalls), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->hasHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic = { "hasHaptic", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_gamepadAPI_Support_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->gamepadAPI_Support = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_gamepadAPI_Support = { "gamepadAPI_Support", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_gamepadAPI_Support_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_isXinput_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->isXinput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_isXinput = { "isXinput", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_isXinput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, type), Z_Construct_UEnum_SimpleController_ESimpleControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_connectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_controllerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_vendorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_productID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numDirectionalPadAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numBalls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_gamepadAPI_Support,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_isXinput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/**\n\x09* @param deviceIndex Unique device identifier for application session, starting at 0 for the first device attached and incrementing by 1 for each additional device. If a device is removed and subsequently reattached during the same application session, it will have a new deviceID.\n\x09* @param connectionIndex Returns the connection order based on the deviceIndex. First controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example.\n\x09* @param deviceName Human-readable device name\n\x09* @param vendorID USB vendor/product IDs as returned by the driver. Can be used to determine the particular model of device represented.\n\x09* @param numAxes Number of axis elements belonging to the device\n\x09* @param numButtons Number of button elements belonging to the device\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "@param deviceIndex Unique device identifier for application session, starting at 0 for the first device attached and incrementing by 1 for each additional device. If a device is removed and subsequently reattached during the same application session, it will have a new deviceID.\n@param connectionIndex Returns the connection order based on the deviceIndex. First controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example.\n@param deviceName Human-readable device name\n@param vendorID USB vendor/product IDs as returned by the driver. Can be used to determine the particular model of device represented.\n@param numAxes Number of axis elements belonging to the device\n@param numButtons Number of button elements belonging to the device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakDeviceInfo", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			int32 effectID;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_effectID;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_effectID = { "effectID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms, effectID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_effectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakForceFeedbackEffect", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms
		{
			FString deviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, deviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, buttonID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, deviceIndex), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonDownEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonIDToButton_Parms
		{
			int32 buttonID;
			ESimpleControllerButtons buttons;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buttons_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_buttons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonIDToButton_Parms, buttonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons = { "buttons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonIDToButton_Parms, buttons), Z_Construct_UEnum_SimpleController_ESimpleControllerButtons, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ExpandEnumAsExecs", "buttons" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonIDToButton", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbuttonIDToButton_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms
		{
			FString deviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, deviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, buttonID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, deviceIndex), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonUpEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventchangeAxisMapping_Parms
		{
			int32 deviceIndex;
			int32 oldAxisID;
			int32 newAxisID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldAxisID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newAxisID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeAxisMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_oldAxisID = { "oldAxisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeAxisMapping_Parms, oldAxisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_newAxisID = { "newAxisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeAxisMapping_Parms, newAxisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_oldAxisID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_newAxisID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping|Axis" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "changeAxisMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventchangeAxisMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventchangeButtonMapping_Parms
		{
			int32 deviceIndex;
			int32 oldButtonID;
			int32 newButtonID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldButtonID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newButtonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeButtonMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_oldButtonID = { "oldButtonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeButtonMapping_Parms, oldButtonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_newButtonID = { "newButtonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeButtonMapping_Parms, newButtonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_oldButtonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_newButtonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping|Buttons" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "changeButtonMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventchangeButtonMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackEffectConditionType ConditionType;
			bool useDirectionX;
			bool useDirectionY;
			bool useDirectionZ;
			int32 length;
			int32 delay;
			float rightLevel;
			float leftLevel;
			int32 rightLevelIncreaseSpeed;
			int32 leftLevelIncreaseSpeed;
			float deadband;
			int32 center;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
		static void NewProp_useDirectionX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useDirectionX;
		static void NewProp_useDirectionY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useDirectionY;
		static void NewProp_useDirectionZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useDirectionZ;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_length;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rightLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_leftLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rightLevelIncreaseSpeed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leftLevelIncreaseSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deadband;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, ConditionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->useDirectionX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX = { "useDirectionX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->useDirectionY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY = { "useDirectionY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->useDirectionZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ = { "useDirectionZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevel = { "rightLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, rightLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevel = { "leftLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, leftLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevelIncreaseSpeed = { "rightLevelIncreaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, rightLevelIncreaseSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevelIncreaseSpeed = { "leftLevelIncreaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, leftLevelIncreaseSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_deadband = { "deadband", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, deadband), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_center = { "center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, center), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_forceFeedbackEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevelIncreaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevelIncreaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_deadband,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_center,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* This creates the SDL Force Feedback SDL_HapticCondition. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticCondition\n\x09* @param length duration of the effect in milliseconds\n\x09* @param delay delay before starting the effect in milliseconds\n\n\x09* @param rightLevel level when joystick is to the positive side in percent between 0 and 1\n\x09* @param leftLevel level when joystick is to the negative side in percent between 0 and 1\n\x09* @param rightLevelIncreaseSpeed how fast to increase the force towards the positive side in milliseconds\n\x09* @param leftLevelIncreaseSpeed how fast to increase the force towards the negative side\n\x09* @param deadband size of the dead zone in percent between 0 and 1\n\x09* @param center position of the dead zone\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This creates the SDL Force Feedback SDL_HapticCondition. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticCondition\n@param length duration of the effect in milliseconds\n@param delay delay before starting the effect in milliseconds\n\n@param rightLevel level when joystick is to the positive side in percent between 0 and 1\n@param leftLevel level when joystick is to the negative side in percent between 0 and 1\n@param rightLevelIncreaseSpeed how fast to increase the force towards the positive side in milliseconds\n@param leftLevelIncreaseSpeed how fast to increase the force towards the negative side\n@param deadband size of the dead zone in percent between 0 and 1\n@param center position of the dead zone" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectCondition", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackDirectionType directionType;
			int32 directionX;
			int32 directionY;
			int32 directionZ;
			int32 length;
			int32 delay;
			float level;
			int32 attackLength;
			float attackLevel;
			int32 fadeLength;
			float fadeLevel;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directionType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionZ;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_length;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attackLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fadeLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType = { "directionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionY = { "directionY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLength = { "attackLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, attackLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLevel = { "attackLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, attackLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLength = { "fadeLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, fadeLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLevel = { "fadeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, fadeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_forceFeedbackEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* This creates the SDL Force Feedback SDL_HapticConstant. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticConstant\n\x09* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n\x09* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionZ For CARTESIAN values -1,0,1.\n\x09* @param length duration of the effect in milliseconds\n\x09* @param delay delay before starting the effect in milliseconds\n\x09* @param level strength of the constant effect in percent between 0 and 1\n\x09* @param attackLength duration of the attack in milliseconds\n\x09* @param attackLevel level at the start of the attack in percent between 0 and 1\n\x09* @param fadeLength duration of the fade in milliseconds\n\x09* @param fadeLevel level at the end of the fade in percent between 0 and 1\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This creates the SDL Force Feedback SDL_HapticConstant. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticConstant\n@param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n@param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n@param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n@param directionZ For CARTESIAN values -1,0,1.\n@param length duration of the effect in milliseconds\n@param delay delay before starting the effect in milliseconds\n@param level strength of the constant effect in percent between 0 and 1\n@param attackLength duration of the attack in milliseconds\n@param attackLevel level at the start of the attack in percent between 0 and 1\n@param fadeLength duration of the fade in milliseconds\n@param fadeLevel level at the end of the fade in percent between 0 and 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectConstant", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackEffectPeriodicType PeriodicType;
			ESimpleControllerForceFeedbackDirectionType directionType;
			int32 directionX;
			int32 directionY;
			int32 directionZ;
			int32 length;
			int32 delay;
			int32 period;
			float magnitude;
			int32 offset;
			int32 phase;
			int32 attackLength;
			float attackLevel;
			int32 fadeLength;
			float fadeLevel;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PeriodicType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PeriodicType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directionType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionZ;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_length;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_period;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_magnitude;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_phase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attackLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fadeLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType = { "PeriodicType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, PeriodicType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType = { "directionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionY = { "directionY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_period = { "period", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, period), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_magnitude = { "magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_phase = { "phase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, phase), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLength = { "attackLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, attackLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLevel = { "attackLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, attackLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLength = { "fadeLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, fadeLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLevel = { "fadeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, fadeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_forceFeedbackEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_phase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* This creates the SDL Force Feedback SDL_HapticPeriodic. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticPeriodic\n\x09* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n\x09* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionZ For CARTESIAN values -1,0,1.\n\x09* @param length duration of the effect in milliseconds\n\x09* @param delay delay before starting the effect in milliseconds\n\x09* @param period period of the wave in milliseconds\n\x09* @param magnitude peak value in percent between 0 and 1\n\x09* @param offset mean value of the wave in milliseconds\n\x09* @param phase positive phase shift given by hundredth of a degree. 0 = No phase displacement. 9000 = Displaced 25% of its period. 18000 = Displaced 50% of its period. 27000 = Displaced 75% of its period. 36000 = Displaced 100% of its period, same as 0, but 0 is preferred\n\x09* @param level strength of the constant effect in percent between 0 and 1\n\x09* @param attackLength duration of the attack in milliseconds\n\x09* @param attackLevel level at the start of the attack in percent between 0 and 1\n\x09* @param fadeLength duration of the fade in milliseconds\n\x09* @param fadeLevel level at the end of the fade in percent between 0 and 1\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This creates the SDL Force Feedback SDL_HapticPeriodic. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticPeriodic\n@param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n@param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n@param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n@param directionZ For CARTESIAN values -1,0,1.\n@param length duration of the effect in milliseconds\n@param delay delay before starting the effect in milliseconds\n@param period period of the wave in milliseconds\n@param magnitude peak value in percent between 0 and 1\n@param offset mean value of the wave in milliseconds\n@param phase positive phase shift given by hundredth of a degree. 0 = No phase displacement. 9000 = Displaced 25% of its period. 18000 = Displaced 50% of its period. 27000 = Displaced 75% of its period. 36000 = Displaced 100% of its period, same as 0, but 0 is preferred\n@param level strength of the constant effect in percent between 0 and 1\n@param attackLength duration of the attack in milliseconds\n@param attackLevel level at the start of the attack in percent between 0 and 1\n@param fadeLength duration of the fade in milliseconds\n@param fadeLevel level at the end of the fade in percent between 0 and 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectPeriodic", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackDirectionType directionType;
			int32 directionX;
			int32 directionY;
			int32 directionZ;
			int32 length;
			int32 delay;
			float startLevel;
			float endLevel;
			int32 attackLength;
			float attackLevel;
			int32 fadeLength;
			float fadeLevel;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directionType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionZ;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_length;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_startLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_endLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attackLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fadeLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType = { "directionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionY = { "directionY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_startLevel = { "startLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, startLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_endLevel = { "endLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, endLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLength = { "attackLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, attackLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLevel = { "attackLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, attackLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLength = { "fadeLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, fadeLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLevel = { "fadeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, fadeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_forceFeedbackEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_startLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_endLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* This creates the SDL Force Feedback SDL_HapticRamp. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticRamp\n\x09* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n\x09* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionZ For CARTESIAN values -1,0,1.\n\x09* @param length duration of the effect in milliseconds\n\x09* @param delay delay before starting the effect in milliseconds\n\x09* @param startLevel beginning strength level in percent between 0 and 1\n\x09* @param endLevel ending strength level in percent between 0 and 1\n\x09* @param attackLength duration of the attack in milliseconds\n\x09* @param attackLevel level at the start of the attack in percent between 0 and 1\n\x09* @param fadeLength duration of the fade in milliseconds\n\x09* @param fadeLevel level at the end of the fade in percent between 0 and 1\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This creates the SDL Force Feedback SDL_HapticRamp. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticRamp\n@param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n@param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n@param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n@param directionZ For CARTESIAN values -1,0,1.\n@param length duration of the effect in milliseconds\n@param delay delay before starting the effect in milliseconds\n@param startLevel beginning strength level in percent between 0 and 1\n@param endLevel ending strength level in percent between 0 and 1\n@param attackLength duration of the attack in milliseconds\n@param attackLevel level at the start of the attack in percent between 0 and 1\n@param fadeLength duration of the fade in milliseconds\n@param fadeLevel level at the end of the fade in percent between 0 and 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectRamp", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventdestroyForceFeedbackEffect_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdestroyForceFeedbackEffect_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "destroyForceFeedbackEffect", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdestroyForceFeedbackEffect_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceAttachedEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceDetachedEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics
	{
		struct SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms
		{
			int32 directionalPadValue;
			ESimpleControllerDirectionalPad direction;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionalPadValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_direction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_directionalPadValue = { "directionalPadValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms, directionalPadValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms, direction), Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_directionalPadValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ExpandEnumAsExecs", "direction" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "directinalPadValueToDirection", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms
		{
			FString deviceID;
			int32 directionalPadValue;
			int32 directionalPadIndex;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_directionalPadValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionalPadValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionalPadIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, deviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue = { "directionalPadValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, directionalPadValue), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadIndex = { "directionalPadIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, directionalPadIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, deviceIndex), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "directionalPadEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics
	{
		struct SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms
		{
			FString deviceID;
			bool found;
			FSimpleControllerDevice ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static void NewProp_found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms, deviceID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms*)Obj)->found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "findControllerByDeviceID", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics
	{
		struct SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms
		{
			int32 deviceIndex;
			bool found;
			FSimpleControllerDevice ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static void NewProp_found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms*)Obj)->found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "findControllerByDeviceIndex", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics
	{
		struct SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms
		{
			int32 connectionIndex;
			bool found;
			int32 deviceIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static void NewProp_found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms, connectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms*)Obj)->found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_connectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "findDeviceIndexByConnectionIndex", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics
	{
		struct SimpleControllerBPLibrary_eventgetConnectedControllers_Parms
		{
			TArray<FSimpleControllerDevice> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetConnectedControllers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getConnectedControllers", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventgetConnectedControllers_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics
	{
		struct SimpleControllerBPLibrary_eventgetCurrentPowerLevel_Parms
		{
			FSimpleControllerDevice device;
			ESimpleControllerPowerLevel powerLevel;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_powerLevel_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_powerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetCurrentPowerLevel_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_powerLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_powerLevel = { "powerLevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetCurrentPowerLevel_Parms, powerLevel), Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_powerLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_powerLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getCurrentPowerLevel", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventgetCurrentPowerLevel_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics
	{
		struct SimpleControllerBPLibrary_eventgetGamepadEvent_Parms
		{
			ESimpleControllerConnectionIndex connectionIndex;
			USimpleControllerCustomEvents* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_connectionIndex_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_connectionIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::NewProp_connectionIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetGamepadEvent_Parms, connectionIndex), Z_Construct_UEnum_SimpleController_ESimpleControllerConnectionIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetGamepadEvent_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerCustomEvents_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::NewProp_connectionIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::NewProp_connectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Events|Gamepad" },
		{ "Comment", "/**\n\x09* Uses the SDL Gamepad API for new events. This makes it easier to associate  buttons and axes. You no longer get button 0 but button A and not axis 0 but left analog stick.\n\x09* @param connectionIndex First controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Uses the SDL Gamepad API for new events. This makes it easier to associate  buttons and axes. You no longer get button 0 but button A and not axis 0 but left analog stick.\n@param connectionIndex First controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getGamepadEvent", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventgetGamepadEvent_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics
	{
		struct SimpleControllerBPLibrary_eventgetPersistentGamepadEvent_Parms
		{
			ESimpleControllerConnectionIndex connectionIndex;
			ESimpleControllerPersistentEventRefreshRate refreshRate;
			USimpleControllerCustomEvents* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_connectionIndex_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_connectionIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_refreshRate_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_refreshRate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::NewProp_connectionIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetPersistentGamepadEvent_Parms, connectionIndex), Z_Construct_UEnum_SimpleController_ESimpleControllerConnectionIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::NewProp_refreshRate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::NewProp_refreshRate = { "refreshRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetPersistentGamepadEvent_Parms, refreshRate), Z_Construct_UEnum_SimpleController_ESimpleControllerPersistentEventRefreshRate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetPersistentGamepadEvent_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerCustomEvents_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::NewProp_connectionIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::NewProp_connectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::NewProp_refreshRate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::NewProp_refreshRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Events|Gamepad" },
		{ "Comment", "/**\n\x09* To be closer to the UE4 logic a persistent event is created with this node. This event is fired x times per second.\n\x09* @param connectionIndex First controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example.\n\x09* @param refreshRate This is the number of times the event is fired per second.\n\x09*/" },
		{ "CPP_Default_refreshRate", "Index_60" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "To be closer to the UE4 logic a persistent event is created with this node. This event is fired x times per second.\n@param connectionIndex First controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example.\n@param refreshRate This is the number of times the event is fired per second." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getPersistentGamepadEvent", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventgetPersistentGamepadEvent_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics
	{
		struct SimpleControllerBPLibrary_eventgetSimpleControllerTarget_Parms
		{
			USimpleControllerBPLibrary* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetSimpleControllerTarget_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getSimpleControllerTarget", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventgetSimpleControllerTarget_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics
	{
		struct SimpleControllerBPLibrary_eventinitController_Parms
		{
			ESimpleControllerRefreshRate refreshRate;
			bool xinputAsDirectinput;
			bool useGamepadAPI;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_refreshRate_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_refreshRate;
		static void NewProp_xinputAsDirectinput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_xinputAsDirectinput;
		static void NewProp_useGamepadAPI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useGamepadAPI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_refreshRate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_refreshRate = { "refreshRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventinitController_Parms, refreshRate), Z_Construct_UEnum_SimpleController_ESimpleControllerRefreshRate, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_xinputAsDirectinput_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventinitController_Parms*)Obj)->xinputAsDirectinput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_xinputAsDirectinput = { "xinputAsDirectinput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventinitController_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_xinputAsDirectinput_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_useGamepadAPI_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventinitController_Parms*)Obj)->useGamepadAPI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_useGamepadAPI = { "useGamepadAPI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventinitController_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_useGamepadAPI_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_refreshRate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_refreshRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_xinputAsDirectinput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_useGamepadAPI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/**\n\x09* Starts the recognition of the controllers and the actions of the controllers.\n\x09* @param refreshRateButtonsAndAxis Specifies how long the pause should be between inputs to save the CPU. The value normally does not need to be changed.\n\x09* @param xinputAsDirectinput Xinput is limited to 4 gamepads, if you want more than four you need to set it to true\n\x09* @param useGamepadAPI true means that the SDL Gamepad API is used. This will activate the gamepad events. Gamepad events make it easier to assign axes and buttons from a gamepad.\n\x09*/" },
		{ "CPP_Default_refreshRate", "Index_60" },
		{ "CPP_Default_useGamepadAPI", "true" },
		{ "CPP_Default_xinputAsDirectinput", "false" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Starts the recognition of the controllers and the actions of the controllers.\n@param refreshRateButtonsAndAxis Specifies how long the pause should be between inputs to save the CPU. The value normally does not need to be changed.\n@param xinputAsDirectinput Xinput is limited to 4 gamepads, if you want more than four you need to set it to true\n@param useGamepadAPI true means that the SDL Gamepad API is used. This will activate the gamepad events. Gamepad events make it easier to assign axes and buttons from a gamepad." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "initController", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventinitController_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_initController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics
	{
		struct SimpleControllerBPLibrary_eventinvertAxis_Parms
		{
			int32 deviceIndex;
			int32 axisID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_axisID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventinvertAxis_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventinvertAxis_Parms, axisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::NewProp_axisID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping|Axis" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "invertAxis", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventinvertAxis_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventloadMapping_Parms
		{
			ESimpleControllerDirectoryType directoryType;
			int32 deviceIndex;
			FString fileNameWithPath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileNameWithPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventloadMapping_Parms, directoryType), Z_Construct_UEnum_SimpleController_ESimpleControllerDirectoryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventloadMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_fileNameWithPath = { "fileNameWithPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventloadMapping_Parms, fileNameWithPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventloadMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventloadMapping_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_directoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_directoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_fileNameWithPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping|File" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "loadMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventloadMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics
	{
		struct SimpleControllerBPLibrary_eventresetAllAxisInverting_Parms
		{
			int32 deviceIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAllAxisInverting_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping|Axis" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetAllAxisInverting", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetAllAxisInverting_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventresetAllAxisToDefaultMapping_Parms
		{
			int32 deviceIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAllAxisToDefaultMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping|Axis" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetAllAxisToDefaultMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetAllAxisToDefaultMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventresetAllButtonsToDefaultMapping_Parms
		{
			int32 deviceIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAllButtonsToDefaultMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping|Buttons" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetAllButtonsToDefaultMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetAllButtonsToDefaultMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics
	{
		struct SimpleControllerBPLibrary_eventresetAxisInverting_Parms
		{
			int32 deviceIndex;
			int32 axisID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_axisID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAxisInverting_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAxisInverting_Parms, axisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::NewProp_axisID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping|Axis" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetAxisInverting", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetAxisInverting_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventresetAxisToDefaultMapping_Parms
		{
			int32 deviceIndex;
			int32 oldAxisID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldAxisID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAxisToDefaultMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::NewProp_oldAxisID = { "oldAxisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAxisToDefaultMapping_Parms, oldAxisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::NewProp_oldAxisID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping|Axis" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetAxisToDefaultMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetAxisToDefaultMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventresetButtonToDefaultMapping_Parms
		{
			int32 deviceIndex;
			int32 oldButtonID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldButtonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetButtonToDefaultMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::NewProp_oldButtonID = { "oldButtonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetButtonToDefaultMapping_Parms, oldButtonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::NewProp_oldButtonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping|Buttons" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetButtonToDefaultMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetButtonToDefaultMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics
	{
		struct SimpleControllerBPLibrary_eventrumble_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			float strengthSmallMotor;
			float strengthLargeMotor;
			int32 lengthInMilliseconds;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_strengthSmallMotor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_strengthLargeMotor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lengthInMilliseconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventrumble_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventrumble_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthSmallMotor = { "strengthSmallMotor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, strengthSmallMotor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthLargeMotor = { "strengthLargeMotor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, strengthLargeMotor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_lengthInMilliseconds = { "lengthInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, lengthInMilliseconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthSmallMotor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthLargeMotor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_lengthInMilliseconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* This effect is mainly intended for gamepads. It can be used to control the two motors that are found in all modern gamepads. With length 0 a running effect can be aborted.\n\x09* @param strengthSmallMotor Values in percent between 0 and 1\n\x09* @param strengthLargeMotor Values in percent between 0 and 1\n\x09* @param lengthInMilliseconds duration of the effect in milliseconds\n\x09*/" },
		{ "CPP_Default_lengthInMilliseconds", "2000" },
		{ "CPP_Default_strengthLargeMotor", "0.500000" },
		{ "CPP_Default_strengthSmallMotor", "0.500000" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This effect is mainly intended for gamepads. It can be used to control the two motors that are found in all modern gamepads. With length 0 a running effect can be aborted.\n@param strengthSmallMotor Values in percent between 0 and 1\n@param strengthLargeMotor Values in percent between 0 and 1\n@param lengthInMilliseconds duration of the effect in milliseconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "rumble", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventrumble_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_rumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventsaveMapping_Parms
		{
			ESimpleControllerDirectoryType directoryType;
			int32 deviceIndex;
			FString fileNameWithPath;
			bool createDirectory;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileNameWithPath;
		static void NewProp_createDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_createDirectory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsaveMapping_Parms, directoryType), Z_Construct_UEnum_SimpleController_ESimpleControllerDirectoryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsaveMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_fileNameWithPath = { "fileNameWithPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsaveMapping_Parms, fileNameWithPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_createDirectory_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventsaveMapping_Parms*)Obj)->createDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_createDirectory = { "createDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventsaveMapping_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_createDirectory_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventsaveMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventsaveMapping_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_directoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_directoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_fileNameWithPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_createDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping|File" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "saveMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventsaveMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics
	{
		struct SimpleControllerBPLibrary_eventsetAutocenterForceFeedback_Parms
		{
			FSimpleControllerDevice device;
			int32 autocenter;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_autocenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetAutocenterForceFeedback_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::NewProp_autocenter = { "autocenter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetAutocenterForceFeedback_Parms, autocenter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::NewProp_autocenter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* Use this function to set the global autocenter of the device. Device must support the SDL_HAPTIC_AUTOCENTER feature.\n\x09* @param device device to set autocentering on\n\x09* @param autocenter value to set autocenter to (0-100), 0 disables autocentering\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Use this function to set the global autocenter of the device. Device must support the SDL_HAPTIC_AUTOCENTER feature.\n@param device device to set autocentering on\n@param autocenter value to set autocenter to (0-100), 0 disables autocentering" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "setAutocenterForceFeedback", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventsetAutocenterForceFeedback_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics
	{
		struct SimpleControllerBPLibrary_eventsetGainForceFeedback_Parms
		{
			FSimpleControllerDevice device;
			int32 gain;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetGainForceFeedback_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetGainForceFeedback_Parms, gain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::NewProp_gain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* Use this function to set the global gain of the specified haptic device. \n\x09* @param device device to set autocentering on\n\x09* @param gain value to set the gain to, should be between 0 and 100\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Use this function to set the global gain of the specified haptic device.\n@param device device to set autocentering on\n@param gain value to set the gain to, should be between 0 and 100" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "setGainForceFeedback", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventsetGainForceFeedback_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "stopController", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_stopController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			int32 iterations;
			FSimpleControllerForceFeedbackEffect ReturnValue;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iterations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_iterations = { "iterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, iterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_iterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* Uploads the effect to the driver and executes it. IMPORTANT! Each device can store a different number of effects at the same time. Some can only store one. Remember to destroy the effect.\n\x09* @param iterations This allows the effect to be repeated x times\n\x09*/" },
		{ "CPP_Default_iterations", "1" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Uploads the effect to the driver and executes it. IMPORTANT! Each device can store a different number of effects at the same time. Some can only store one. Remember to destroy the effect.\n@param iterations This allows the effect to be repeated x times" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "uploadAndRunForceFeedbackEffect", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimpleControllerBPLibrary_NoRegister()
	{
		return USimpleControllerBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onButtonDownEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onButtonDownEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onButtonUpEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onButtonUpEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onDirectionalPadEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onDirectionalPadEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onBallMovedEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onBallMovedEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onaxisMovedEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onaxisMovedEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ondeviceAttachedEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ondeviceAttachedEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ondeviceDetachedEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ondeviceDetachedEventDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate, "axisMovedEventDelegate" }, // 3880290111
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature, "axisMovedEventDelegate__DelegateSignature" }, // 2817164545
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate, "ballMovedEventDelegate" }, // 2992188342
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature, "ballMovedEventDelegate__DelegateSignature" }, // 24118724
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisStatus, "breakAxisStatus" }, // 3864582471
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo, "breakDeviceForceFeedbackInfo" }, // 3432390759
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo, "breakDeviceInfo" }, // 1663359425
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect, "breakForceFeedbackEffect" }, // 2219111224
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate, "buttonDownEventDelegate" }, // 236277812
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature, "buttonDownEventDelegate__DelegateSignature" }, // 1710844236
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton, "buttonIDToButton" }, // 2663653814
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate, "buttonUpEventDelegate" }, // 1681147915
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature, "buttonUpEventDelegate__DelegateSignature" }, // 2895402847
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping, "changeAxisMapping" }, // 2382699137
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping, "changeButtonMapping" }, // 3592765674
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition, "createForceFeedbackEffectCondition" }, // 463346906
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant, "createForceFeedbackEffectConstant" }, // 3520778768
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic, "createForceFeedbackEffectPeriodic" }, // 2203300540
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp, "createForceFeedbackEffectRamp" }, // 673285910
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect, "destroyForceFeedbackEffect" }, // 692976145
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate, "deviceAttachedEventDelegate" }, // 215893238
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature, "deviceAttachedEventDelegate__DelegateSignature" }, // 555736324
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate, "deviceDetachedEventDelegate" }, // 3438128558
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature, "deviceDetachedEventDelegate__DelegateSignature" }, // 2029011155
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection, "directinalPadValueToDirection" }, // 2817875667
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate, "directionalPadEventDelegate" }, // 1013892440
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature, "directionalPadEventDelegate__DelegateSignature" }, // 3833377451
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID, "findControllerByDeviceID" }, // 594102112
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex, "findControllerByDeviceIndex" }, // 4100320356
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex, "findDeviceIndexByConnectionIndex" }, // 3948393219
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers, "getConnectedControllers" }, // 797748624
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel, "getCurrentPowerLevel" }, // 2758870585
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getGamepadEvent, "getGamepadEvent" }, // 1151518415
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getPersistentGamepadEvent, "getPersistentGamepadEvent" }, // 1601199482
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget, "getSimpleControllerTarget" }, // 1075895659
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_initController, "initController" }, // 254733899
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis, "invertAxis" }, // 645913123
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping, "loadMapping" }, // 2511474800
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting, "resetAllAxisInverting" }, // 2667982971
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping, "resetAllAxisToDefaultMapping" }, // 1158048142
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping, "resetAllButtonsToDefaultMapping" }, // 596464229
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting, "resetAxisInverting" }, // 2579510860
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping, "resetAxisToDefaultMapping" }, // 686195038
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping, "resetButtonToDefaultMapping" }, // 3382628318
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_rumble, "rumble" }, // 126286791
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping, "saveMapping" }, // 2664977928
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedback, "setAutocenterForceFeedback" }, // 2677016517
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback, "setGainForceFeedback" }, // 2083547497
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_stopController, "stopController" }, // 1249694457
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect, "uploadAndRunForceFeedbackEffect" }, // 499835293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleControllerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|ButtonDown" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate = { "onButtonDownEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onButtonDownEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|ButtonUp" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate = { "onButtonUpEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onButtonUpEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|DirectionalPad" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate = { "onDirectionalPadEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onDirectionalPadEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|ballMoved" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate = { "onBallMovedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onBallMovedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|AxisMoved" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate = { "onaxisMovedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onaxisMovedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|DeviceAttached" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate = { "ondeviceAttachedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, ondeviceAttachedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|DeviceDetached" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate = { "ondeviceDetachedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, ondeviceDetachedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerBPLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::ClassParams = {
		&USimpleControllerBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerBPLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleControllerBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleControllerBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleControllerBPLibrary, 1198348809);
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerBPLibrary>()
	{
		return USimpleControllerBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleControllerBPLibrary(Z_Construct_UClass_USimpleControllerBPLibrary, &USimpleControllerBPLibrary::StaticClass, TEXT("/Script/SimpleController"), TEXT("USimpleControllerBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
