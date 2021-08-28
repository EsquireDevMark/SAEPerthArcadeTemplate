// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/SimpleController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleController() {}
// Cross Module References
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtons();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerAllButtonReleasedStatus();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerAllButtonPressedStatus();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerConnectionIndex();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerPersistentEventRefreshRate();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerRefreshRate();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectoryType();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerAxisStatus();
// End Cross Module References
	static UEnum* ESimpleControllerButtons_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerButtons, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerButtons"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerButtons>()
	{
		return ESimpleControllerButtons_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerButtons(ESimpleControllerButtons_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerButtons"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Hash() { return 1927513250U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtons()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerButtons"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerButtons::Button_0", (int64)ESimpleControllerButtons::Button_0 },
				{ "ESimpleControllerButtons::Button_1", (int64)ESimpleControllerButtons::Button_1 },
				{ "ESimpleControllerButtons::Button_2", (int64)ESimpleControllerButtons::Button_2 },
				{ "ESimpleControllerButtons::Button_3", (int64)ESimpleControllerButtons::Button_3 },
				{ "ESimpleControllerButtons::Button_4", (int64)ESimpleControllerButtons::Button_4 },
				{ "ESimpleControllerButtons::Button_5", (int64)ESimpleControllerButtons::Button_5 },
				{ "ESimpleControllerButtons::Button_6", (int64)ESimpleControllerButtons::Button_6 },
				{ "ESimpleControllerButtons::Button_7", (int64)ESimpleControllerButtons::Button_7 },
				{ "ESimpleControllerButtons::Button_8", (int64)ESimpleControllerButtons::Button_8 },
				{ "ESimpleControllerButtons::Button_9", (int64)ESimpleControllerButtons::Button_9 },
				{ "ESimpleControllerButtons::Button_10", (int64)ESimpleControllerButtons::Button_10 },
				{ "ESimpleControllerButtons::Button_11", (int64)ESimpleControllerButtons::Button_11 },
				{ "ESimpleControllerButtons::Button_12", (int64)ESimpleControllerButtons::Button_12 },
				{ "ESimpleControllerButtons::Button_13", (int64)ESimpleControllerButtons::Button_13 },
				{ "ESimpleControllerButtons::Button_14", (int64)ESimpleControllerButtons::Button_14 },
				{ "ESimpleControllerButtons::Button_15", (int64)ESimpleControllerButtons::Button_15 },
				{ "ESimpleControllerButtons::Button_16", (int64)ESimpleControllerButtons::Button_16 },
				{ "ESimpleControllerButtons::Button_17", (int64)ESimpleControllerButtons::Button_17 },
				{ "ESimpleControllerButtons::Button_18", (int64)ESimpleControllerButtons::Button_18 },
				{ "ESimpleControllerButtons::Button_19", (int64)ESimpleControllerButtons::Button_19 },
				{ "ESimpleControllerButtons::Button_20", (int64)ESimpleControllerButtons::Button_20 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Button_0.Name", "ESimpleControllerButtons::Button_0" },
				{ "Button_1.Name", "ESimpleControllerButtons::Button_1" },
				{ "Button_10.Name", "ESimpleControllerButtons::Button_10" },
				{ "Button_11.Name", "ESimpleControllerButtons::Button_11" },
				{ "Button_12.Name", "ESimpleControllerButtons::Button_12" },
				{ "Button_13.Name", "ESimpleControllerButtons::Button_13" },
				{ "Button_14.Name", "ESimpleControllerButtons::Button_14" },
				{ "Button_15.Name", "ESimpleControllerButtons::Button_15" },
				{ "Button_16.Name", "ESimpleControllerButtons::Button_16" },
				{ "Button_17.Name", "ESimpleControllerButtons::Button_17" },
				{ "Button_18.Name", "ESimpleControllerButtons::Button_18" },
				{ "Button_19.Name", "ESimpleControllerButtons::Button_19" },
				{ "Button_2.Name", "ESimpleControllerButtons::Button_2" },
				{ "Button_20.Name", "ESimpleControllerButtons::Button_20" },
				{ "Button_3.Name", "ESimpleControllerButtons::Button_3" },
				{ "Button_4.Name", "ESimpleControllerButtons::Button_4" },
				{ "Button_5.Name", "ESimpleControllerButtons::Button_5" },
				{ "Button_6.Name", "ESimpleControllerButtons::Button_6" },
				{ "Button_7.Name", "ESimpleControllerButtons::Button_7" },
				{ "Button_8.Name", "ESimpleControllerButtons::Button_8" },
				{ "Button_9.Name", "ESimpleControllerButtons::Button_9" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerButtons",
				"ESimpleControllerButtons",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerDirectionalPad_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerDirectionalPad"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerDirectionalPad>()
	{
		return ESimpleControllerDirectionalPad_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerDirectionalPad(ESimpleControllerDirectionalPad_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerDirectionalPad"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Hash() { return 2197244049U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerDirectionalPad"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerDirectionalPad::CENTERED", (int64)ESimpleControllerDirectionalPad::CENTERED },
				{ "ESimpleControllerDirectionalPad::UP", (int64)ESimpleControllerDirectionalPad::UP },
				{ "ESimpleControllerDirectionalPad::RIGHT", (int64)ESimpleControllerDirectionalPad::RIGHT },
				{ "ESimpleControllerDirectionalPad::DOWN", (int64)ESimpleControllerDirectionalPad::DOWN },
				{ "ESimpleControllerDirectionalPad::LEFT", (int64)ESimpleControllerDirectionalPad::LEFT },
				{ "ESimpleControllerDirectionalPad::RIGHTUP", (int64)ESimpleControllerDirectionalPad::RIGHTUP },
				{ "ESimpleControllerDirectionalPad::RIGHTDOWN", (int64)ESimpleControllerDirectionalPad::RIGHTDOWN },
				{ "ESimpleControllerDirectionalPad::LEFTUP", (int64)ESimpleControllerDirectionalPad::LEFTUP },
				{ "ESimpleControllerDirectionalPad::LEFTDOWN", (int64)ESimpleControllerDirectionalPad::LEFTDOWN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CENTERED.Name", "ESimpleControllerDirectionalPad::CENTERED" },
				{ "DOWN.Name", "ESimpleControllerDirectionalPad::DOWN" },
				{ "LEFT.Name", "ESimpleControllerDirectionalPad::LEFT" },
				{ "LEFTDOWN.Name", "ESimpleControllerDirectionalPad::LEFTDOWN" },
				{ "LEFTUP.Name", "ESimpleControllerDirectionalPad::LEFTUP" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
				{ "RIGHT.Name", "ESimpleControllerDirectionalPad::RIGHT" },
				{ "RIGHTDOWN.Name", "ESimpleControllerDirectionalPad::RIGHTDOWN" },
				{ "RIGHTUP.Name", "ESimpleControllerDirectionalPad::RIGHTUP" },
				{ "UP.Name", "ESimpleControllerDirectionalPad::UP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerDirectionalPad",
				"ESimpleControllerDirectionalPad",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerForceFeedbackDirectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerForceFeedbackDirectionType"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackDirectionType>()
	{
		return ESimpleControllerForceFeedbackDirectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerForceFeedbackDirectionType(ESimpleControllerForceFeedbackDirectionType_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerForceFeedbackDirectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Hash() { return 1428437781U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerForceFeedbackDirectionType"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerForceFeedbackDirectionType::CARTESIAN", (int64)ESimpleControllerForceFeedbackDirectionType::CARTESIAN },
				{ "ESimpleControllerForceFeedbackDirectionType::POLAR", (int64)ESimpleControllerForceFeedbackDirectionType::POLAR },
				{ "ESimpleControllerForceFeedbackDirectionType::SPHERICAL", (int64)ESimpleControllerForceFeedbackDirectionType::SPHERICAL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CARTESIAN.Name", "ESimpleControllerForceFeedbackDirectionType::CARTESIAN" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
				{ "POLAR.Name", "ESimpleControllerForceFeedbackDirectionType::POLAR" },
				{ "SPHERICAL.Name", "ESimpleControllerForceFeedbackDirectionType::SPHERICAL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerForceFeedbackDirectionType",
				"ESimpleControllerForceFeedbackDirectionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerForceFeedbackEffectConditionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerForceFeedbackEffectConditionType"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectConditionType>()
	{
		return ESimpleControllerForceFeedbackEffectConditionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerForceFeedbackEffectConditionType(ESimpleControllerForceFeedbackEffectConditionType_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerForceFeedbackEffectConditionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Hash() { return 3133411897U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerForceFeedbackEffectConditionType"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerForceFeedbackEffectConditionType::SPRING", (int64)ESimpleControllerForceFeedbackEffectConditionType::SPRING },
				{ "ESimpleControllerForceFeedbackEffectConditionType::DAMPER", (int64)ESimpleControllerForceFeedbackEffectConditionType::DAMPER },
				{ "ESimpleControllerForceFeedbackEffectConditionType::INERTIA", (int64)ESimpleControllerForceFeedbackEffectConditionType::INERTIA },
				{ "ESimpleControllerForceFeedbackEffectConditionType::FRICTION", (int64)ESimpleControllerForceFeedbackEffectConditionType::FRICTION },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DAMPER.Name", "ESimpleControllerForceFeedbackEffectConditionType::DAMPER" },
				{ "FRICTION.Name", "ESimpleControllerForceFeedbackEffectConditionType::FRICTION" },
				{ "INERTIA.Name", "ESimpleControllerForceFeedbackEffectConditionType::INERTIA" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
				{ "SPRING.Name", "ESimpleControllerForceFeedbackEffectConditionType::SPRING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerForceFeedbackEffectConditionType",
				"ESimpleControllerForceFeedbackEffectConditionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerForceFeedbackEffectPeriodicType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerForceFeedbackEffectPeriodicType"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectPeriodicType>()
	{
		return ESimpleControllerForceFeedbackEffectPeriodicType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerForceFeedbackEffectPeriodicType(ESimpleControllerForceFeedbackEffectPeriodicType_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerForceFeedbackEffectPeriodicType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType_Hash() { return 2280506873U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerForceFeedbackEffectPeriodicType"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerForceFeedbackEffectPeriodicType::SINE", (int64)ESimpleControllerForceFeedbackEffectPeriodicType::SINE },
				{ "ESimpleControllerForceFeedbackEffectPeriodicType::TRIANGLE", (int64)ESimpleControllerForceFeedbackEffectPeriodicType::TRIANGLE },
				{ "ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHUP", (int64)ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHUP },
				{ "ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHDOWN", (int64)ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHDOWN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
				{ "SAWTOOTHDOWN.Name", "ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHDOWN" },
				{ "SAWTOOTHUP.Name", "ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHUP" },
				{ "SINE.Name", "ESimpleControllerForceFeedbackEffectPeriodicType::SINE" },
				{ "TRIANGLE.Name", "ESimpleControllerForceFeedbackEffectPeriodicType::TRIANGLE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerForceFeedbackEffectPeriodicType",
				"ESimpleControllerForceFeedbackEffectPeriodicType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerForceFeedbackEffectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerForceFeedbackEffectType"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectType>()
	{
		return ESimpleControllerForceFeedbackEffectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerForceFeedbackEffectType(ESimpleControllerForceFeedbackEffectType_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerForceFeedbackEffectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Hash() { return 3140012513U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerForceFeedbackEffectType"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerForceFeedbackEffectType::CONSTANT", (int64)ESimpleControllerForceFeedbackEffectType::CONSTANT },
				{ "ESimpleControllerForceFeedbackEffectType::LEFTRIGHT", (int64)ESimpleControllerForceFeedbackEffectType::LEFTRIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CONSTANT.Name", "ESimpleControllerForceFeedbackEffectType::CONSTANT" },
				{ "LEFTRIGHT.Name", "ESimpleControllerForceFeedbackEffectType::LEFTRIGHT" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerForceFeedbackEffectType",
				"ESimpleControllerForceFeedbackEffectType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerAllButtonReleasedStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerAllButtonReleasedStatus, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerAllButtonReleasedStatus"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerAllButtonReleasedStatus>()
	{
		return ESimpleControllerAllButtonReleasedStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerAllButtonReleasedStatus(ESimpleControllerAllButtonReleasedStatus_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerAllButtonReleasedStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerAllButtonReleasedStatus_Hash() { return 2881198759U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerAllButtonReleasedStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerAllButtonReleasedStatus"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerAllButtonReleasedStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerAllButtonReleasedStatus::ButtonFaceBottom", (int64)ESimpleControllerAllButtonReleasedStatus::ButtonFaceBottom },
				{ "ESimpleControllerAllButtonReleasedStatus::ButtonFaceRight", (int64)ESimpleControllerAllButtonReleasedStatus::ButtonFaceRight },
				{ "ESimpleControllerAllButtonReleasedStatus::ButtonFaceLeft", (int64)ESimpleControllerAllButtonReleasedStatus::ButtonFaceLeft },
				{ "ESimpleControllerAllButtonReleasedStatus::ButtonFaceTop", (int64)ESimpleControllerAllButtonReleasedStatus::ButtonFaceTop },
				{ "ESimpleControllerAllButtonReleasedStatus::LEFTSHOULDER", (int64)ESimpleControllerAllButtonReleasedStatus::LEFTSHOULDER },
				{ "ESimpleControllerAllButtonReleasedStatus::RIGHTSHOULDER", (int64)ESimpleControllerAllButtonReleasedStatus::RIGHTSHOULDER },
				{ "ESimpleControllerAllButtonReleasedStatus::DPAD_UP", (int64)ESimpleControllerAllButtonReleasedStatus::DPAD_UP },
				{ "ESimpleControllerAllButtonReleasedStatus::DPAD_DOWN", (int64)ESimpleControllerAllButtonReleasedStatus::DPAD_DOWN },
				{ "ESimpleControllerAllButtonReleasedStatus::DPAD_LEFT", (int64)ESimpleControllerAllButtonReleasedStatus::DPAD_LEFT },
				{ "ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHT", (int64)ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHT },
				{ "ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTUP", (int64)ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTUP },
				{ "ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTDOWN", (int64)ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTDOWN },
				{ "ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTUP", (int64)ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTUP },
				{ "ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTDOWN", (int64)ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTDOWN },
				{ "ESimpleControllerAllButtonReleasedStatus::BACK", (int64)ESimpleControllerAllButtonReleasedStatus::BACK },
				{ "ESimpleControllerAllButtonReleasedStatus::GUIDE", (int64)ESimpleControllerAllButtonReleasedStatus::GUIDE },
				{ "ESimpleControllerAllButtonReleasedStatus::START", (int64)ESimpleControllerAllButtonReleasedStatus::START },
				{ "ESimpleControllerAllButtonReleasedStatus::LEFTSTICK", (int64)ESimpleControllerAllButtonReleasedStatus::LEFTSTICK },
				{ "ESimpleControllerAllButtonReleasedStatus::RIGHTSTICK", (int64)ESimpleControllerAllButtonReleasedStatus::RIGHTSTICK },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BACK.DisplayName", "BACK" },
				{ "BACK.Name", "ESimpleControllerAllButtonReleasedStatus::BACK" },
				{ "BlueprintType", "true" },
				{ "ButtonFaceBottom.DisplayName", "ButtonFaceBottom" },
				{ "ButtonFaceBottom.Name", "ESimpleControllerAllButtonReleasedStatus::ButtonFaceBottom" },
				{ "ButtonFaceLeft.DisplayName", "ButtonFaceLeft" },
				{ "ButtonFaceLeft.Name", "ESimpleControllerAllButtonReleasedStatus::ButtonFaceLeft" },
				{ "ButtonFaceRight.DisplayName", "ButtonFaceRight" },
				{ "ButtonFaceRight.Name", "ESimpleControllerAllButtonReleasedStatus::ButtonFaceRight" },
				{ "ButtonFaceTop.DisplayName", "ButtonFaceTop" },
				{ "ButtonFaceTop.Name", "ESimpleControllerAllButtonReleasedStatus::ButtonFaceTop" },
				{ "DPAD_DOWN.DisplayName", "DPAD_DOWN" },
				{ "DPAD_DOWN.Name", "ESimpleControllerAllButtonReleasedStatus::DPAD_DOWN" },
				{ "DPAD_LEFT.DisplayName", "DPAD_LEFT" },
				{ "DPAD_LEFT.Name", "ESimpleControllerAllButtonReleasedStatus::DPAD_LEFT" },
				{ "DPAD_LEFTDOWN.DisplayName", "DPAD_LEFTDOWN" },
				{ "DPAD_LEFTDOWN.Name", "ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTDOWN" },
				{ "DPAD_LEFTUP.DisplayName", "DPAD_LEFTUP" },
				{ "DPAD_LEFTUP.Name", "ESimpleControllerAllButtonReleasedStatus::DPAD_LEFTUP" },
				{ "DPAD_RIGHT.DisplayName", "DPAD_RIGHT" },
				{ "DPAD_RIGHT.Name", "ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHT" },
				{ "DPAD_RIGHTDOWN.DisplayName", "DPAD_RIGHTDOWN" },
				{ "DPAD_RIGHTDOWN.Name", "ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTDOWN" },
				{ "DPAD_RIGHTUP.DisplayName", "DPAD_RIGHTUP" },
				{ "DPAD_RIGHTUP.Name", "ESimpleControllerAllButtonReleasedStatus::DPAD_RIGHTUP" },
				{ "DPAD_UP.DisplayName", "DPAD_UP" },
				{ "DPAD_UP.Name", "ESimpleControllerAllButtonReleasedStatus::DPAD_UP" },
				{ "GUIDE.DisplayName", "GUIDE" },
				{ "GUIDE.Name", "ESimpleControllerAllButtonReleasedStatus::GUIDE" },
				{ "LEFTSHOULDER.DisplayName", "LEFTSHOULDER" },
				{ "LEFTSHOULDER.Name", "ESimpleControllerAllButtonReleasedStatus::LEFTSHOULDER" },
				{ "LEFTSTICK.DisplayName", "LEFTSTICK" },
				{ "LEFTSTICK.Name", "ESimpleControllerAllButtonReleasedStatus::LEFTSTICK" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
				{ "RIGHTSHOULDER.DisplayName", "RIGHTSHOULDER" },
				{ "RIGHTSHOULDER.Name", "ESimpleControllerAllButtonReleasedStatus::RIGHTSHOULDER" },
				{ "RIGHTSTICK.DisplayName", "RIGHTSTICK" },
				{ "RIGHTSTICK.Name", "ESimpleControllerAllButtonReleasedStatus::RIGHTSTICK" },
				{ "START.DisplayName", "START" },
				{ "START.Name", "ESimpleControllerAllButtonReleasedStatus::START" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerAllButtonReleasedStatus",
				"ESimpleControllerAllButtonReleasedStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerAllButtonPressedStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerAllButtonPressedStatus, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerAllButtonPressedStatus"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerAllButtonPressedStatus>()
	{
		return ESimpleControllerAllButtonPressedStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerAllButtonPressedStatus(ESimpleControllerAllButtonPressedStatus_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerAllButtonPressedStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerAllButtonPressedStatus_Hash() { return 703000154U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerAllButtonPressedStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerAllButtonPressedStatus"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerAllButtonPressedStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerAllButtonPressedStatus::ButtonFaceBottom", (int64)ESimpleControllerAllButtonPressedStatus::ButtonFaceBottom },
				{ "ESimpleControllerAllButtonPressedStatus::ButtonFaceRight", (int64)ESimpleControllerAllButtonPressedStatus::ButtonFaceRight },
				{ "ESimpleControllerAllButtonPressedStatus::ButtonFaceLeft", (int64)ESimpleControllerAllButtonPressedStatus::ButtonFaceLeft },
				{ "ESimpleControllerAllButtonPressedStatus::ButtonFaceTop", (int64)ESimpleControllerAllButtonPressedStatus::ButtonFaceTop },
				{ "ESimpleControllerAllButtonPressedStatus::LEFTSHOULDER", (int64)ESimpleControllerAllButtonPressedStatus::LEFTSHOULDER },
				{ "ESimpleControllerAllButtonPressedStatus::RIGHTSHOULDER", (int64)ESimpleControllerAllButtonPressedStatus::RIGHTSHOULDER },
				{ "ESimpleControllerAllButtonPressedStatus::DPAD_UP", (int64)ESimpleControllerAllButtonPressedStatus::DPAD_UP },
				{ "ESimpleControllerAllButtonPressedStatus::DPAD_DOWN", (int64)ESimpleControllerAllButtonPressedStatus::DPAD_DOWN },
				{ "ESimpleControllerAllButtonPressedStatus::DPAD_LEFT", (int64)ESimpleControllerAllButtonPressedStatus::DPAD_LEFT },
				{ "ESimpleControllerAllButtonPressedStatus::DPAD_RIGHT", (int64)ESimpleControllerAllButtonPressedStatus::DPAD_RIGHT },
				{ "ESimpleControllerAllButtonPressedStatus::DPAD_LEFTUP", (int64)ESimpleControllerAllButtonPressedStatus::DPAD_LEFTUP },
				{ "ESimpleControllerAllButtonPressedStatus::DPAD_LEFTDOWN", (int64)ESimpleControllerAllButtonPressedStatus::DPAD_LEFTDOWN },
				{ "ESimpleControllerAllButtonPressedStatus::DPAD_RIGHTUP", (int64)ESimpleControllerAllButtonPressedStatus::DPAD_RIGHTUP },
				{ "ESimpleControllerAllButtonPressedStatus::DPAD_RIGHTDOWN", (int64)ESimpleControllerAllButtonPressedStatus::DPAD_RIGHTDOWN },
				{ "ESimpleControllerAllButtonPressedStatus::BACK", (int64)ESimpleControllerAllButtonPressedStatus::BACK },
				{ "ESimpleControllerAllButtonPressedStatus::GUIDE", (int64)ESimpleControllerAllButtonPressedStatus::GUIDE },
				{ "ESimpleControllerAllButtonPressedStatus::START", (int64)ESimpleControllerAllButtonPressedStatus::START },
				{ "ESimpleControllerAllButtonPressedStatus::LEFTSTICK", (int64)ESimpleControllerAllButtonPressedStatus::LEFTSTICK },
				{ "ESimpleControllerAllButtonPressedStatus::RIGHTSTICK", (int64)ESimpleControllerAllButtonPressedStatus::RIGHTSTICK },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BACK.DisplayName", "BACK" },
				{ "BACK.Name", "ESimpleControllerAllButtonPressedStatus::BACK" },
				{ "BlueprintType", "true" },
				{ "ButtonFaceBottom.DisplayName", "ButtonFaceBottom" },
				{ "ButtonFaceBottom.Name", "ESimpleControllerAllButtonPressedStatus::ButtonFaceBottom" },
				{ "ButtonFaceLeft.DisplayName", "ButtonFaceLeft" },
				{ "ButtonFaceLeft.Name", "ESimpleControllerAllButtonPressedStatus::ButtonFaceLeft" },
				{ "ButtonFaceRight.DisplayName", "ButtonFaceRight" },
				{ "ButtonFaceRight.Name", "ESimpleControllerAllButtonPressedStatus::ButtonFaceRight" },
				{ "ButtonFaceTop.DisplayName", "ButtonFaceTop" },
				{ "ButtonFaceTop.Name", "ESimpleControllerAllButtonPressedStatus::ButtonFaceTop" },
				{ "DPAD_DOWN.DisplayName", "DPAD_DOWN" },
				{ "DPAD_DOWN.Name", "ESimpleControllerAllButtonPressedStatus::DPAD_DOWN" },
				{ "DPAD_LEFT.DisplayName", "DPAD_LEFT" },
				{ "DPAD_LEFT.Name", "ESimpleControllerAllButtonPressedStatus::DPAD_LEFT" },
				{ "DPAD_LEFTDOWN.DisplayName", "DPAD_LEFTDOWN" },
				{ "DPAD_LEFTDOWN.Name", "ESimpleControllerAllButtonPressedStatus::DPAD_LEFTDOWN" },
				{ "DPAD_LEFTUP.DisplayName", "DPAD_LEFTUP" },
				{ "DPAD_LEFTUP.Name", "ESimpleControllerAllButtonPressedStatus::DPAD_LEFTUP" },
				{ "DPAD_RIGHT.DisplayName", "DPAD_RIGHT" },
				{ "DPAD_RIGHT.Name", "ESimpleControllerAllButtonPressedStatus::DPAD_RIGHT" },
				{ "DPAD_RIGHTDOWN.DisplayName", "DPAD_RIGHTDOWN" },
				{ "DPAD_RIGHTDOWN.Name", "ESimpleControllerAllButtonPressedStatus::DPAD_RIGHTDOWN" },
				{ "DPAD_RIGHTUP.DisplayName", "DPAD_RIGHTUP" },
				{ "DPAD_RIGHTUP.Name", "ESimpleControllerAllButtonPressedStatus::DPAD_RIGHTUP" },
				{ "DPAD_UP.DisplayName", "DPAD_UP" },
				{ "DPAD_UP.Name", "ESimpleControllerAllButtonPressedStatus::DPAD_UP" },
				{ "GUIDE.DisplayName", "GUIDE" },
				{ "GUIDE.Name", "ESimpleControllerAllButtonPressedStatus::GUIDE" },
				{ "LEFTSHOULDER.DisplayName", "LEFTSHOULDER" },
				{ "LEFTSHOULDER.Name", "ESimpleControllerAllButtonPressedStatus::LEFTSHOULDER" },
				{ "LEFTSTICK.DisplayName", "LEFTSTICK" },
				{ "LEFTSTICK.Name", "ESimpleControllerAllButtonPressedStatus::LEFTSTICK" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
				{ "RIGHTSHOULDER.DisplayName", "RIGHTSHOULDER" },
				{ "RIGHTSHOULDER.Name", "ESimpleControllerAllButtonPressedStatus::RIGHTSHOULDER" },
				{ "RIGHTSTICK.DisplayName", "RIGHTSTICK" },
				{ "RIGHTSTICK.Name", "ESimpleControllerAllButtonPressedStatus::RIGHTSTICK" },
				{ "START.DisplayName", "START" },
				{ "START.Name", "ESimpleControllerAllButtonPressedStatus::START" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerAllButtonPressedStatus",
				"ESimpleControllerAllButtonPressedStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerConnectionIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerConnectionIndex, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerConnectionIndex"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerConnectionIndex>()
	{
		return ESimpleControllerConnectionIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerConnectionIndex(ESimpleControllerConnectionIndex_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerConnectionIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerConnectionIndex_Hash() { return 132204402U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerConnectionIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerConnectionIndex"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerConnectionIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerConnectionIndex::Index_0", (int64)ESimpleControllerConnectionIndex::Index_0 },
				{ "ESimpleControllerConnectionIndex::Index_1", (int64)ESimpleControllerConnectionIndex::Index_1 },
				{ "ESimpleControllerConnectionIndex::Index_2", (int64)ESimpleControllerConnectionIndex::Index_2 },
				{ "ESimpleControllerConnectionIndex::Index_3", (int64)ESimpleControllerConnectionIndex::Index_3 },
				{ "ESimpleControllerConnectionIndex::Index_4", (int64)ESimpleControllerConnectionIndex::Index_4 },
				{ "ESimpleControllerConnectionIndex::Index_5", (int64)ESimpleControllerConnectionIndex::Index_5 },
				{ "ESimpleControllerConnectionIndex::Index_6", (int64)ESimpleControllerConnectionIndex::Index_6 },
				{ "ESimpleControllerConnectionIndex::Index_7", (int64)ESimpleControllerConnectionIndex::Index_7 },
				{ "ESimpleControllerConnectionIndex::Index_8", (int64)ESimpleControllerConnectionIndex::Index_8 },
				{ "ESimpleControllerConnectionIndex::Index_9", (int64)ESimpleControllerConnectionIndex::Index_9 },
				{ "ESimpleControllerConnectionIndex::Index_10", (int64)ESimpleControllerConnectionIndex::Index_10 },
				{ "ESimpleControllerConnectionIndex::Index_11", (int64)ESimpleControllerConnectionIndex::Index_11 },
				{ "ESimpleControllerConnectionIndex::Index_12", (int64)ESimpleControllerConnectionIndex::Index_12 },
				{ "ESimpleControllerConnectionIndex::Index_13", (int64)ESimpleControllerConnectionIndex::Index_13 },
				{ "ESimpleControllerConnectionIndex::Index_14", (int64)ESimpleControllerConnectionIndex::Index_14 },
				{ "ESimpleControllerConnectionIndex::Index_15", (int64)ESimpleControllerConnectionIndex::Index_15 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Index_0.DisplayName", "0" },
				{ "Index_0.Name", "ESimpleControllerConnectionIndex::Index_0" },
				{ "Index_1.DisplayName", "1" },
				{ "Index_1.Name", "ESimpleControllerConnectionIndex::Index_1" },
				{ "Index_10.DisplayName", "10" },
				{ "Index_10.Name", "ESimpleControllerConnectionIndex::Index_10" },
				{ "Index_11.DisplayName", "11" },
				{ "Index_11.Name", "ESimpleControllerConnectionIndex::Index_11" },
				{ "Index_12.DisplayName", "12" },
				{ "Index_12.Name", "ESimpleControllerConnectionIndex::Index_12" },
				{ "Index_13.DisplayName", "13" },
				{ "Index_13.Name", "ESimpleControllerConnectionIndex::Index_13" },
				{ "Index_14.DisplayName", "14" },
				{ "Index_14.Name", "ESimpleControllerConnectionIndex::Index_14" },
				{ "Index_15.DisplayName", "15" },
				{ "Index_15.Name", "ESimpleControllerConnectionIndex::Index_15" },
				{ "Index_2.DisplayName", "2" },
				{ "Index_2.Name", "ESimpleControllerConnectionIndex::Index_2" },
				{ "Index_3.DisplayName", "3" },
				{ "Index_3.Name", "ESimpleControllerConnectionIndex::Index_3" },
				{ "Index_4.DisplayName", "4" },
				{ "Index_4.Name", "ESimpleControllerConnectionIndex::Index_4" },
				{ "Index_5.DisplayName", "5" },
				{ "Index_5.Name", "ESimpleControllerConnectionIndex::Index_5" },
				{ "Index_6.DisplayName", "6" },
				{ "Index_6.Name", "ESimpleControllerConnectionIndex::Index_6" },
				{ "Index_7.DisplayName", "7" },
				{ "Index_7.Name", "ESimpleControllerConnectionIndex::Index_7" },
				{ "Index_8.DisplayName", "8" },
				{ "Index_8.Name", "ESimpleControllerConnectionIndex::Index_8" },
				{ "Index_9.DisplayName", "9" },
				{ "Index_9.Name", "ESimpleControllerConnectionIndex::Index_9" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerConnectionIndex",
				"ESimpleControllerConnectionIndex",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerPersistentEventRefreshRate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerPersistentEventRefreshRate, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerPersistentEventRefreshRate"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerPersistentEventRefreshRate>()
	{
		return ESimpleControllerPersistentEventRefreshRate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerPersistentEventRefreshRate(ESimpleControllerPersistentEventRefreshRate_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerPersistentEventRefreshRate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerPersistentEventRefreshRate_Hash() { return 1809170455U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerPersistentEventRefreshRate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerPersistentEventRefreshRate"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerPersistentEventRefreshRate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerPersistentEventRefreshRate::Index_10", (int64)ESimpleControllerPersistentEventRefreshRate::Index_10 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_20", (int64)ESimpleControllerPersistentEventRefreshRate::Index_20 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_30", (int64)ESimpleControllerPersistentEventRefreshRate::Index_30 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_40", (int64)ESimpleControllerPersistentEventRefreshRate::Index_40 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_50", (int64)ESimpleControllerPersistentEventRefreshRate::Index_50 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_60", (int64)ESimpleControllerPersistentEventRefreshRate::Index_60 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_70", (int64)ESimpleControllerPersistentEventRefreshRate::Index_70 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_80", (int64)ESimpleControllerPersistentEventRefreshRate::Index_80 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_90", (int64)ESimpleControllerPersistentEventRefreshRate::Index_90 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_100", (int64)ESimpleControllerPersistentEventRefreshRate::Index_100 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_120", (int64)ESimpleControllerPersistentEventRefreshRate::Index_120 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_140", (int64)ESimpleControllerPersistentEventRefreshRate::Index_140 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_160", (int64)ESimpleControllerPersistentEventRefreshRate::Index_160 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_180", (int64)ESimpleControllerPersistentEventRefreshRate::Index_180 },
				{ "ESimpleControllerPersistentEventRefreshRate::Index_200", (int64)ESimpleControllerPersistentEventRefreshRate::Index_200 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Index_10.DisplayName", "10" },
				{ "Index_10.Name", "ESimpleControllerPersistentEventRefreshRate::Index_10" },
				{ "Index_100.DisplayName", "100" },
				{ "Index_100.Name", "ESimpleControllerPersistentEventRefreshRate::Index_100" },
				{ "Index_120.DisplayName", "120" },
				{ "Index_120.Name", "ESimpleControllerPersistentEventRefreshRate::Index_120" },
				{ "Index_140.DisplayName", "140" },
				{ "Index_140.Name", "ESimpleControllerPersistentEventRefreshRate::Index_140" },
				{ "Index_160.DisplayName", "160" },
				{ "Index_160.Name", "ESimpleControllerPersistentEventRefreshRate::Index_160" },
				{ "Index_180.DisplayName", "180" },
				{ "Index_180.Name", "ESimpleControllerPersistentEventRefreshRate::Index_180" },
				{ "Index_20.DisplayName", "20" },
				{ "Index_20.Name", "ESimpleControllerPersistentEventRefreshRate::Index_20" },
				{ "Index_200.DisplayName", "200" },
				{ "Index_200.Name", "ESimpleControllerPersistentEventRefreshRate::Index_200" },
				{ "Index_30.DisplayName", "30" },
				{ "Index_30.Name", "ESimpleControllerPersistentEventRefreshRate::Index_30" },
				{ "Index_40.DisplayName", "40" },
				{ "Index_40.Name", "ESimpleControllerPersistentEventRefreshRate::Index_40" },
				{ "Index_50.DisplayName", "50" },
				{ "Index_50.Name", "ESimpleControllerPersistentEventRefreshRate::Index_50" },
				{ "Index_60.DisplayName", "60" },
				{ "Index_60.Name", "ESimpleControllerPersistentEventRefreshRate::Index_60" },
				{ "Index_70.DisplayName", "70" },
				{ "Index_70.Name", "ESimpleControllerPersistentEventRefreshRate::Index_70" },
				{ "Index_80.DisplayName", "80" },
				{ "Index_80.Name", "ESimpleControllerPersistentEventRefreshRate::Index_80" },
				{ "Index_90.DisplayName", "90" },
				{ "Index_90.Name", "ESimpleControllerPersistentEventRefreshRate::Index_90" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerPersistentEventRefreshRate",
				"ESimpleControllerPersistentEventRefreshRate",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerRefreshRate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerRefreshRate, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerRefreshRate"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerRefreshRate>()
	{
		return ESimpleControllerRefreshRate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerRefreshRate(ESimpleControllerRefreshRate_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerRefreshRate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerRefreshRate_Hash() { return 4214656701U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerRefreshRate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerRefreshRate"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerRefreshRate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerRefreshRate::Index_30", (int64)ESimpleControllerRefreshRate::Index_30 },
				{ "ESimpleControllerRefreshRate::Index_60", (int64)ESimpleControllerRefreshRate::Index_60 },
				{ "ESimpleControllerRefreshRate::Index_120", (int64)ESimpleControllerRefreshRate::Index_120 },
				{ "ESimpleControllerRefreshRate::Index_240", (int64)ESimpleControllerRefreshRate::Index_240 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Index_120.DisplayName", "120" },
				{ "Index_120.Name", "ESimpleControllerRefreshRate::Index_120" },
				{ "Index_240.DisplayName", "240" },
				{ "Index_240.Name", "ESimpleControllerRefreshRate::Index_240" },
				{ "Index_30.DisplayName", "30" },
				{ "Index_30.Name", "ESimpleControllerRefreshRate::Index_30" },
				{ "Index_60.DisplayName", "60" },
				{ "Index_60.Name", "ESimpleControllerRefreshRate::Index_60" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerRefreshRate",
				"ESimpleControllerRefreshRate",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerPowerLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerPowerLevel"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerPowerLevel>()
	{
		return ESimpleControllerPowerLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerPowerLevel(ESimpleControllerPowerLevel_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerPowerLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel_Hash() { return 2917353021U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerPowerLevel"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerPowerLevel::UNKNOWN", (int64)ESimpleControllerPowerLevel::UNKNOWN },
				{ "ESimpleControllerPowerLevel::EMPTY", (int64)ESimpleControllerPowerLevel::EMPTY },
				{ "ESimpleControllerPowerLevel::LOW", (int64)ESimpleControllerPowerLevel::LOW },
				{ "ESimpleControllerPowerLevel::MEDIUM", (int64)ESimpleControllerPowerLevel::MEDIUM },
				{ "ESimpleControllerPowerLevel::FULL", (int64)ESimpleControllerPowerLevel::FULL },
				{ "ESimpleControllerPowerLevel::WIRED", (int64)ESimpleControllerPowerLevel::WIRED },
				{ "ESimpleControllerPowerLevel::MAX", (int64)ESimpleControllerPowerLevel::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMPTY.DisplayName", "EMPTY" },
				{ "EMPTY.Name", "ESimpleControllerPowerLevel::EMPTY" },
				{ "FULL.DisplayName", "FULL" },
				{ "FULL.Name", "ESimpleControllerPowerLevel::FULL" },
				{ "LOW.DisplayName", "LOW" },
				{ "LOW.Name", "ESimpleControllerPowerLevel::LOW" },
				{ "MAX.DisplayName", "MAX" },
				{ "MAX.Name", "ESimpleControllerPowerLevel::MAX" },
				{ "MEDIUM.DisplayName", "MEDIUM" },
				{ "MEDIUM.Name", "ESimpleControllerPowerLevel::MEDIUM" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
				{ "UNKNOWN.DisplayName", "UNKNOWN" },
				{ "UNKNOWN.Name", "ESimpleControllerPowerLevel::UNKNOWN" },
				{ "WIRED.DisplayName", "WIRED" },
				{ "WIRED.Name", "ESimpleControllerPowerLevel::WIRED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerPowerLevel",
				"ESimpleControllerPowerLevel",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerType, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerType"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerType>()
	{
		return ESimpleControllerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerType(ESimpleControllerType_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerType_Hash() { return 3315438509U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerType"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerType::UNKNOWN", (int64)ESimpleControllerType::UNKNOWN },
				{ "ESimpleControllerType::GAMECONTROLLER", (int64)ESimpleControllerType::GAMECONTROLLER },
				{ "ESimpleControllerType::WHEEL", (int64)ESimpleControllerType::WHEEL },
				{ "ESimpleControllerType::ARCADE_STICK", (int64)ESimpleControllerType::ARCADE_STICK },
				{ "ESimpleControllerType::FLIGHT_STICK", (int64)ESimpleControllerType::FLIGHT_STICK },
				{ "ESimpleControllerType::DANCE_PAD", (int64)ESimpleControllerType::DANCE_PAD },
				{ "ESimpleControllerType::GUITAR", (int64)ESimpleControllerType::GUITAR },
				{ "ESimpleControllerType::DRUM_KIT", (int64)ESimpleControllerType::DRUM_KIT },
				{ "ESimpleControllerType::ARCADE_PAD", (int64)ESimpleControllerType::ARCADE_PAD },
				{ "ESimpleControllerType::THROTTLE", (int64)ESimpleControllerType::THROTTLE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ARCADE_PAD.DisplayName", "ARCADE_PAD" },
				{ "ARCADE_PAD.Name", "ESimpleControllerType::ARCADE_PAD" },
				{ "ARCADE_STICK.DisplayName", "ARCADE_STICK" },
				{ "ARCADE_STICK.Name", "ESimpleControllerType::ARCADE_STICK" },
				{ "BlueprintType", "true" },
				{ "DANCE_PAD.DisplayName", "DANCE_PAD" },
				{ "DANCE_PAD.Name", "ESimpleControllerType::DANCE_PAD" },
				{ "DRUM_KIT.DisplayName", "DRUM_KIT" },
				{ "DRUM_KIT.Name", "ESimpleControllerType::DRUM_KIT" },
				{ "FLIGHT_STICK.DisplayName", "FLIGHT_STICK" },
				{ "FLIGHT_STICK.Name", "ESimpleControllerType::FLIGHT_STICK" },
				{ "GAMECONTROLLER.DisplayName", "GAMECONTROLLER" },
				{ "GAMECONTROLLER.Name", "ESimpleControllerType::GAMECONTROLLER" },
				{ "GUITAR.DisplayName", "GUITAR" },
				{ "GUITAR.Name", "ESimpleControllerType::GUITAR" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
				{ "THROTTLE.DisplayName", "THROTTLE" },
				{ "THROTTLE.Name", "ESimpleControllerType::THROTTLE" },
				{ "UNKNOWN.DisplayName", "UNKNOWN" },
				{ "UNKNOWN.Name", "ESimpleControllerType::UNKNOWN" },
				{ "WHEEL.DisplayName", "WHEEL" },
				{ "WHEEL.Name", "ESimpleControllerType::WHEEL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerType",
				"ESimpleControllerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerButtonStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerButtonStatus"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerButtonStatus>()
	{
		return ESimpleControllerButtonStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerButtonStatus(ESimpleControllerButtonStatus_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerButtonStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus_Hash() { return 3713419237U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerButtonStatus"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerButtonStatus::Pressed", (int64)ESimpleControllerButtonStatus::Pressed },
				{ "ESimpleControllerButtonStatus::Released", (int64)ESimpleControllerButtonStatus::Released },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
				{ "Pressed.DisplayName", "Pressed" },
				{ "Pressed.Name", "ESimpleControllerButtonStatus::Pressed" },
				{ "Released.DisplayName", "Released" },
				{ "Released.Name", "ESimpleControllerButtonStatus::Released" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerButtonStatus",
				"ESimpleControllerButtonStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimpleControllerDirectoryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerDirectoryType, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerDirectoryType"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerDirectoryType>()
	{
		return ESimpleControllerDirectoryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerDirectoryType(ESimpleControllerDirectoryType_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerDirectoryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerDirectoryType_Hash() { return 289361843U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectoryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerDirectoryType"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerDirectoryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerDirectoryType::GameDir", (int64)ESimpleControllerDirectoryType::GameDir },
				{ "ESimpleControllerDirectoryType::AbsoluteDir", (int64)ESimpleControllerDirectoryType::AbsoluteDir },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbsoluteDir.DisplayName", "Absolute directory" },
				{ "AbsoluteDir.Name", "ESimpleControllerDirectoryType::AbsoluteDir" },
				{ "BlueprintType", "true" },
				{ "GameDir.DisplayName", "Game directory" },
				{ "GameDir.Name", "ESimpleControllerDirectoryType::GameDir" },
				{ "ModuleRelativePath", "Public/SimpleController.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerDirectoryType",
				"ESimpleControllerDirectoryType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSimpleControllerForceFeedbackEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLECONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, Z_Construct_UPackage__Script_SimpleController(), TEXT("SimpleControllerForceFeedbackEffect"), sizeof(FSimpleControllerForceFeedbackEffect), Get_Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Hash());
	}
	return Singleton;
}
template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<FSimpleControllerForceFeedbackEffect>()
{
	return FSimpleControllerForceFeedbackEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleControllerForceFeedbackEffect(FSimpleControllerForceFeedbackEffect::StaticStruct, TEXT("/Script/SimpleController"), TEXT("SimpleControllerForceFeedbackEffect"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerForceFeedbackEffect
{
	FScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerForceFeedbackEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleControllerForceFeedbackEffect")),new UScriptStruct::TCppStructOps<FSimpleControllerForceFeedbackEffect>);
	}
} ScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerForceFeedbackEffect;
	struct Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleControllerForceFeedbackEffect>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		&NewStructOps,
		"SimpleControllerForceFeedbackEffect",
		sizeof(FSimpleControllerForceFeedbackEffect),
		alignof(FSimpleControllerForceFeedbackEffect),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleControllerForceFeedbackEffect"), sizeof(FSimpleControllerForceFeedbackEffect), Get_Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Hash() { return 337738449U; }
class UScriptStruct* FSimpleControllerDevice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLECONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerDevice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleControllerDevice, Z_Construct_UPackage__Script_SimpleController(), TEXT("SimpleControllerDevice"), sizeof(FSimpleControllerDevice), Get_Z_Construct_UScriptStruct_FSimpleControllerDevice_Hash());
	}
	return Singleton;
}
template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<FSimpleControllerDevice>()
{
	return FSimpleControllerDevice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleControllerDevice(FSimpleControllerDevice::StaticStruct, TEXT("/Script/SimpleController"), TEXT("SimpleControllerDevice"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerDevice
{
	FScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerDevice()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleControllerDevice")),new UScriptStruct::TCppStructOps<FSimpleControllerDevice>);
	}
} ScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerDevice;
	struct Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleControllerDevice>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		&NewStructOps,
		"SimpleControllerDevice",
		sizeof(FSimpleControllerDevice),
		alignof(FSimpleControllerDevice),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerDevice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleControllerDevice"), sizeof(FSimpleControllerDevice), Get_Z_Construct_UScriptStruct_FSimpleControllerDevice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerDevice_Hash() { return 948122771U; }
class UScriptStruct* FSimpleControllerAxisStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLECONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleControllerAxisStatus, Z_Construct_UPackage__Script_SimpleController(), TEXT("SimpleControllerAxisStatus"), sizeof(FSimpleControllerAxisStatus), Get_Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Hash());
	}
	return Singleton;
}
template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<FSimpleControllerAxisStatus>()
{
	return FSimpleControllerAxisStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleControllerAxisStatus(FSimpleControllerAxisStatus::StaticStruct, TEXT("/Script/SimpleController"), TEXT("SimpleControllerAxisStatus"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerAxisStatus
{
	FScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerAxisStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleControllerAxisStatus")),new UScriptStruct::TCppStructOps<FSimpleControllerAxisStatus>);
	}
} ScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerAxisStatus;
	struct Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//UENUM(BlueprintType)\n//enum class ESimpleControllerComboGamepadAction : uint8\n//{\n//\x09""ButtonFaceBottomClicked\x09\x09UMETA(DisplayName =\"CLICKED ButtonFaceBottom\"),\n//\x09""ButtonFaceRightClicked\x09\x09UMETA(DisplayName =\"CLICKED ButtonFaceRight\"),\n//\x09""ButtonFaceLeftClicked\x09\x09UMETA(DisplayName =\"CLICKED ButtonFaceLeft\"),\n//\x09""ButtonFaceTopClicked\x09\x09UMETA(DisplayName =\"CLICKED ButtonFacClickedeTop\"),\n//\x09LEFTSHOULDERClicked\x09\x09\x09UMETA(DisplayName =\"CLICKED LEFTSHOULDER\"),\n//\x09RIGHTSHOULDERClicked\x09\x09UMETA(DisplayName =\"CLICKED RIGHTSHOULDER\"),\n//\x09""DPAD_UPClicked\x09\x09\x09\x09UMETA(DisplayName =\"CLICKED DPAD_UP\"),\n//\x09""DPAD_DOWNClicked\x09\x09\x09UMETA(DisplayName =\"CLICKED DPAD_DOWN\"),\n//\x09""DPAD_LEFTClicked\x09\x09\x09UMETA(DisplayName =\"CLICKED DPAD_LEFT\"),\n//\x09""DPAD_RIGHTClicked\x09\x09\x09UMETA(DisplayName =\"CLICKED DPAD_RIGHT\"),\n//\x09""BACKClicked\x09\x09\x09\x09\x09UMETA(DisplayName =\"CLICKED BACK\"),\n//\x09GUIDEClicked\x09\x09\x09\x09UMETA(DisplayName =\"CLICKED GUIDE\"),\n//\x09STARTClicked\x09\x09\x09\x09UMETA(DisplayName =\"CLICKED START\"),\n//\x09LEFTSTICKClicked\x09\x09\x09UMETA(DisplayName =\"CLICKED LEFTSTICK\"),\n//\x09RIGHTSTICKClicked\x09\x09\x09UMETA(DisplayName =\"CLICKED RIGHTSTICK\"),\n//\x09""ButtonFaceBottomPressed\x09\x09UMETA(DisplayName =\"PRESSED ButtonFaceBottom\"),\n//\x09""ButtonFaceRightPressed\x09\x09UMETA(DisplayName =\"PRESSED ButtonFaceRight\"),\n//\x09""ButtonFaceLeftPressed\x09\x09UMETA(DisplayName =\"PRESSED ButtonFaceLeft\"),\n//\x09""ButtonFaceTopPressed\x09\x09UMETA(DisplayName =\"PRESSED ButtonFacPressedeTop\"),\n//\x09LEFTSHOULDERPressed\x09\x09\x09UMETA(DisplayName =\"PRESSED LEFTSHOULDER\"),\n//\x09RIGHTSHOULDERPressed\x09\x09UMETA(DisplayName =\"PRESSED RIGHTSHOULDER\"),\n//\x09""DPAD_UPPressed\x09\x09\x09\x09UMETA(DisplayName =\"PRESSED DPAD_UP\"),\n//\x09""DPAD_DOWNPressed\x09\x09\x09UMETA(DisplayName =\"PRESSED DPAD_DOWN\"),\n//\x09""DPAD_LEFTPressed\x09\x09\x09UMETA(DisplayName =\"PRESSED DPAD_LEFT\"),\n//\x09""DPAD_RIGHTPressed\x09\x09\x09UMETA(DisplayName =\"PRESSED DPAD_RIGHT\"),\n//\x09""BACKPressed\x09\x09\x09\x09\x09UMETA(DisplayName =\"PRESSED BACK\"),\n//\x09GUIDEPressed\x09\x09\x09\x09UMETA(DisplayName =\"PRESSED GUIDE\"),\n//\x09STARTPressed\x09\x09\x09\x09UMETA(DisplayName =\"PRESSED START\"),\n//\x09LEFTSTICKPressed\x09\x09\x09UMETA(DisplayName =\"PRESSED LEFTSTICK\"),\n//\x09RIGHTSTICKPressed\x09\x09\x09UMETA(DisplayName =\"PRESSED RIGHTSTICK\"),\n//\x09""ButtonFaceBottomReleased\x09UMETA(DisplayName =\"RELEASED ButtonFaceBottom\"),\n//\x09""ButtonFaceRightReleased\x09\x09UMETA(DisplayName =\"RELEASED ButtonFaceRight\"),\n//\x09""ButtonFaceLeftReleased\x09\x09UMETA(DisplayName =\"RELEASED ButtonFaceLeft\"),\n//\x09""ButtonFaceTopReleased\x09\x09UMETA(DisplayName =\"RELEASED ButtonFaceTop\"),\n//\x09LEFTSHOULDERReleased\x09\x09UMETA(DisplayName =\"RELEASED LEFTSHOULDER\"),\n//\x09RIGHTSHOULDERReleased\x09\x09UMETA(DisplayName =\"RELEASED RIGHTSHOULDER\"),\n//\x09""DPAD_UPReleased\x09\x09\x09\x09UMETA(DisplayName =\"RELEASED DPAD_UP\"),\n//\x09""DPAD_DOWNReleased\x09\x09\x09UMETA(DisplayName =\"RELEASED DPAD_DOWN\"),\n//\x09""DPAD_LEFTReleased\x09\x09\x09UMETA(DisplayName =\"RELEASED DPAD_LEFT\"),\n//\x09""DPAD_RIGHTReleased\x09\x09\x09UMETA(DisplayName =\"RELEASED DPAD_RIGHT\"),\n//\x09""BACKReleased\x09\x09\x09\x09UMETA(DisplayName =\"RELEASED BACK\"),\n//\x09GUIDEReleased\x09\x09\x09\x09UMETA(DisplayName =\"RELEASED GUIDE\"),\n//\x09STARTReleased\x09\x09\x09\x09UMETA(DisplayName =\"RELEASED START\"),\n//\x09LEFTSTICKReleased\x09\x09\x09UMETA(DisplayName =\"RELEASED LEFTSTICK\"),\n//\x09RIGHTSTICKReleased\x09\x09\x09UMETA(DisplayName =\"RELEASED RIGHTSTICK\")\n//\x09//CombinedWPB\x09\x09\x09\x09UMETA(DisplayName = \"CombinedWithPreviousButton\")\n//};\n//\n//USTRUCT(BlueprintType)\n//struct FSimpleControllerComboStruct\n//{\n//\x09GENERATED_USTRUCT_BODY()\n//\n//\x09""ESimpleControllerComboGamepadAction buttonAction;\n//\n//\x09int64 buttonActionTimestamp = 0;\n//};\n//\n//UENUM(BlueprintType)\n//enum class ESimpleControllerComboGamepadAction : uint8\n//{\n//\x09""ButtonFaceBottom\x09\x09UMETA(DisplayName = \"ButtonFaceBottom\"),\n//\x09""ButtonFaceRight\x09\x09\x09UMETA(DisplayName = \"ButtonFaceRight\"),\n//\x09""ButtonFaceLeft\x09\x09\x09UMETA(DisplayName = \"ButtonFaceLeft\"),\n//\x09""ButtonFaceTop\x09\x09\x09UMETA(DisplayName = \"ButtonFaceTop\"),\n//\x09LEFTSHOULDER\x09\x09\x09UMETA(DisplayName = \"LEFTSHOULDER\"),\n//\x09RIGHTSHOULDER\x09\x09\x09UMETA(DisplayName = \"RIGHTSHOULDER\"),\n//\x09""DPAD_UP\x09\x09\x09\x09\x09UMETA(DisplayName = \"DPAD_UP\"),\n//\x09""DPAD_DOWN\x09\x09\x09\x09UMETA(DisplayName = \"DPAD_DOWN\"),\n//\x09""DPAD_LEFT\x09\x09\x09\x09UMETA(DisplayName = \"DPAD_LEFT\"),\n//\x09""DPAD_RIGHT\x09\x09\x09\x09UMETA(DisplayName = \"DPAD_RIGHT\"),\n//\x09""DPAD_LEFTUP\x09\x09\x09\x09UMETA(DisplayName = \"DPAD_LEFTUP\"),\n//\x09""DPAD_LEFTDOWN\x09\x09\x09UMETA(DisplayName = \"DPAD_LEFTDOWN\"),\n//\x09""DPAD_RIGHTUP\x09\x09\x09UMETA(DisplayName = \"DPAD_RIGHTUP\"),\n//\x09""DPAD_RIGHTDOWN\x09\x09\x09UMETA(DisplayName = \"DPAD_RIGHTDOWN\"),\n//\x09""BACK\x09\x09\x09\x09\x09UMETA(DisplayName = \"BACK\"),\n//\x09GUIDE\x09\x09\x09\x09\x09UMETA(DisplayName = \"GUIDE\"),\n//\x09START\x09\x09\x09\x09\x09UMETA(DisplayName = \"START\"),\n//\x09LEFTSTICK\x09\x09\x09\x09UMETA(DisplayName = \"LEFTSTICK\"),\n//\x09RIGHTSTICK\x09\x09\x09\x09UMETA(DisplayName = \"RIGHTSTICK\")\n//\x09//CombinedWPB\x09\x09\x09\x09UMETA(DisplayName = \"CombinedWithPreviousButton\")\n//};\n//\n//USTRUCT(BlueprintType)\n//struct FSimpleControllerComboStruct\n//{\n//\x09GENERATED_USTRUCT_BODY()\n//\n//\x09TArray<ESimpleControllerAllButtonReleasedStatus> buttons;\n//\x09int64 startButtonTime = 0;\n//};\n" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "UENUM(BlueprintType)\nenum class ESimpleControllerComboGamepadAction : uint8\n{\n       ButtonFaceBottomClicked         UMETA(DisplayName =\"CLICKED ButtonFaceBottom\"),\n       ButtonFaceRightClicked          UMETA(DisplayName =\"CLICKED ButtonFaceRight\"),\n       ButtonFaceLeftClicked           UMETA(DisplayName =\"CLICKED ButtonFaceLeft\"),\n       ButtonFaceTopClicked            UMETA(DisplayName =\"CLICKED ButtonFacClickedeTop\"),\n       LEFTSHOULDERClicked                     UMETA(DisplayName =\"CLICKED LEFTSHOULDER\"),\n       RIGHTSHOULDERClicked            UMETA(DisplayName =\"CLICKED RIGHTSHOULDER\"),\n       DPAD_UPClicked                          UMETA(DisplayName =\"CLICKED DPAD_UP\"),\n       DPAD_DOWNClicked                        UMETA(DisplayName =\"CLICKED DPAD_DOWN\"),\n       DPAD_LEFTClicked                        UMETA(DisplayName =\"CLICKED DPAD_LEFT\"),\n       DPAD_RIGHTClicked                       UMETA(DisplayName =\"CLICKED DPAD_RIGHT\"),\n       BACKClicked                                     UMETA(DisplayName =\"CLICKED BACK\"),\n       GUIDEClicked                            UMETA(DisplayName =\"CLICKED GUIDE\"),\n       STARTClicked                            UMETA(DisplayName =\"CLICKED START\"),\n       LEFTSTICKClicked                        UMETA(DisplayName =\"CLICKED LEFTSTICK\"),\n       RIGHTSTICKClicked                       UMETA(DisplayName =\"CLICKED RIGHTSTICK\"),\n       ButtonFaceBottomPressed         UMETA(DisplayName =\"PRESSED ButtonFaceBottom\"),\n       ButtonFaceRightPressed          UMETA(DisplayName =\"PRESSED ButtonFaceRight\"),\n       ButtonFaceLeftPressed           UMETA(DisplayName =\"PRESSED ButtonFaceLeft\"),\n       ButtonFaceTopPressed            UMETA(DisplayName =\"PRESSED ButtonFacPressedeTop\"),\n       LEFTSHOULDERPressed                     UMETA(DisplayName =\"PRESSED LEFTSHOULDER\"),\n       RIGHTSHOULDERPressed            UMETA(DisplayName =\"PRESSED RIGHTSHOULDER\"),\n       DPAD_UPPressed                          UMETA(DisplayName =\"PRESSED DPAD_UP\"),\n       DPAD_DOWNPressed                        UMETA(DisplayName =\"PRESSED DPAD_DOWN\"),\n       DPAD_LEFTPressed                        UMETA(DisplayName =\"PRESSED DPAD_LEFT\"),\n       DPAD_RIGHTPressed                       UMETA(DisplayName =\"PRESSED DPAD_RIGHT\"),\n       BACKPressed                                     UMETA(DisplayName =\"PRESSED BACK\"),\n       GUIDEPressed                            UMETA(DisplayName =\"PRESSED GUIDE\"),\n       STARTPressed                            UMETA(DisplayName =\"PRESSED START\"),\n       LEFTSTICKPressed                        UMETA(DisplayName =\"PRESSED LEFTSTICK\"),\n       RIGHTSTICKPressed                       UMETA(DisplayName =\"PRESSED RIGHTSTICK\"),\n       ButtonFaceBottomReleased        UMETA(DisplayName =\"RELEASED ButtonFaceBottom\"),\n       ButtonFaceRightReleased         UMETA(DisplayName =\"RELEASED ButtonFaceRight\"),\n       ButtonFaceLeftReleased          UMETA(DisplayName =\"RELEASED ButtonFaceLeft\"),\n       ButtonFaceTopReleased           UMETA(DisplayName =\"RELEASED ButtonFaceTop\"),\n       LEFTSHOULDERReleased            UMETA(DisplayName =\"RELEASED LEFTSHOULDER\"),\n       RIGHTSHOULDERReleased           UMETA(DisplayName =\"RELEASED RIGHTSHOULDER\"),\n       DPAD_UPReleased                         UMETA(DisplayName =\"RELEASED DPAD_UP\"),\n       DPAD_DOWNReleased                       UMETA(DisplayName =\"RELEASED DPAD_DOWN\"),\n       DPAD_LEFTReleased                       UMETA(DisplayName =\"RELEASED DPAD_LEFT\"),\n       DPAD_RIGHTReleased                      UMETA(DisplayName =\"RELEASED DPAD_RIGHT\"),\n       BACKReleased                            UMETA(DisplayName =\"RELEASED BACK\"),\n       GUIDEReleased                           UMETA(DisplayName =\"RELEASED GUIDE\"),\n       STARTReleased                           UMETA(DisplayName =\"RELEASED START\"),\n       LEFTSTICKReleased                       UMETA(DisplayName =\"RELEASED LEFTSTICK\"),\n       RIGHTSTICKReleased                      UMETA(DisplayName =\"RELEASED RIGHTSTICK\")\n       CombinedWPB                             UMETA(DisplayName = \"CombinedWithPreviousButton\")\n};\n\nUSTRUCT(BlueprintType)\nstruct FSimpleControllerComboStruct\n{\n       GENERATED_USTRUCT_BODY()\n\n       ESimpleControllerComboGamepadAction buttonAction;\n\n       int64 buttonActionTimestamp = 0;\n};\n\nUENUM(BlueprintType)\nenum class ESimpleControllerComboGamepadAction : uint8\n{\n       ButtonFaceBottom                UMETA(DisplayName = \"ButtonFaceBottom\"),\n       ButtonFaceRight                 UMETA(DisplayName = \"ButtonFaceRight\"),\n       ButtonFaceLeft                  UMETA(DisplayName = \"ButtonFaceLeft\"),\n       ButtonFaceTop                   UMETA(DisplayName = \"ButtonFaceTop\"),\n       LEFTSHOULDER                    UMETA(DisplayName = \"LEFTSHOULDER\"),\n       RIGHTSHOULDER                   UMETA(DisplayName = \"RIGHTSHOULDER\"),\n       DPAD_UP                                 UMETA(DisplayName = \"DPAD_UP\"),\n       DPAD_DOWN                               UMETA(DisplayName = \"DPAD_DOWN\"),\n       DPAD_LEFT                               UMETA(DisplayName = \"DPAD_LEFT\"),\n       DPAD_RIGHT                              UMETA(DisplayName = \"DPAD_RIGHT\"),\n       DPAD_LEFTUP                             UMETA(DisplayName = \"DPAD_LEFTUP\"),\n       DPAD_LEFTDOWN                   UMETA(DisplayName = \"DPAD_LEFTDOWN\"),\n       DPAD_RIGHTUP                    UMETA(DisplayName = \"DPAD_RIGHTUP\"),\n       DPAD_RIGHTDOWN                  UMETA(DisplayName = \"DPAD_RIGHTDOWN\"),\n       BACK                                    UMETA(DisplayName = \"BACK\"),\n       GUIDE                                   UMETA(DisplayName = \"GUIDE\"),\n       START                                   UMETA(DisplayName = \"START\"),\n       LEFTSTICK                               UMETA(DisplayName = \"LEFTSTICK\"),\n       RIGHTSTICK                              UMETA(DisplayName = \"RIGHTSTICK\")\n       CombinedWPB                             UMETA(DisplayName = \"CombinedWithPreviousButton\")\n};\n\nUSTRUCT(BlueprintType)\nstruct FSimpleControllerComboStruct\n{\n       GENERATED_USTRUCT_BODY()\n\n       TArray<ESimpleControllerAllButtonReleasedStatus> buttons;\n       int64 startButtonTime = 0;\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleControllerAxisStatus>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		&NewStructOps,
		"SimpleControllerAxisStatus",
		sizeof(FSimpleControllerAxisStatus),
		alignof(FSimpleControllerAxisStatus),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerAxisStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleControllerAxisStatus"), sizeof(FSimpleControllerAxisStatus), Get_Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerAxisStatus_Hash() { return 3057383857U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
