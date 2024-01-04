// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SimHUD/SimHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimHUD() {}
// Cross Module References
	AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_ESimulatorMode();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UClass* Z_Construct_UClass_ASimHUD_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ASimHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	AIRSIM_API UClass* Z_Construct_UClass_USimHUDWidget_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase_NoRegister();
// End Cross Module References
	static UEnum* ESimulatorMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AirSim_ESimulatorMode, Z_Construct_UPackage__Script_AirSim(), TEXT("ESimulatorMode"));
		}
		return Singleton;
	}
	template<> AIRSIM_API UEnum* StaticEnum<ESimulatorMode>()
	{
		return ESimulatorMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimulatorMode(ESimulatorMode_StaticEnum, TEXT("/Script/AirSim"), TEXT("ESimulatorMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AirSim_ESimulatorMode_Hash() { return 4014401094U; }
	UEnum* Z_Construct_UEnum_AirSim_ESimulatorMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimulatorMode"), 0, Get_Z_Construct_UEnum_AirSim_ESimulatorMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimulatorMode::SIM_MODE_HIL", (int64)ESimulatorMode::SIM_MODE_HIL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
				{ "SIM_MODE_HIL.DisplayName", "Hardware-in-loop" },
				{ "SIM_MODE_HIL.Name", "ESimulatorMode::SIM_MODE_HIL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
				nullptr,
				"ESimulatorMode",
				"ESimulatorMode",
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
	void ASimHUD::StaticRegisterNativesASimHUD()
	{
	}
	UClass* Z_Construct_UClass_ASimHUD_NoRegister()
	{
		return ASimHUD::StaticClass();
	}
	struct Z_Construct_UClass_ASimHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widget__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widget_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_simmode__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_simmode_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SimHUD/SimHUD.h" },
		{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimHUD_Statics::NewProp_widget__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimHUD_Statics::NewProp_widget_ = { "widget_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimHUD, widget_), Z_Construct_UClass_USimHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimHUD_Statics::NewProp_widget__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimHUD_Statics::NewProp_widget__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimHUD_Statics::NewProp_simmode__MetaData[] = {
		{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimHUD_Statics::NewProp_simmode_ = { "simmode_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimHUD, simmode_), Z_Construct_UClass_ASimModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimHUD_Statics::NewProp_simmode__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimHUD_Statics::NewProp_simmode__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimHUD_Statics::NewProp_widget_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimHUD_Statics::NewProp_simmode_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASimHUD_Statics::ClassParams = {
		&ASimHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASimHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASimHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASimHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASimHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimHUD, 1031376182);
	template<> AIRSIM_API UClass* StaticClass<ASimHUD>()
	{
		return ASimHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimHUD(Z_Construct_UClass_ASimHUD, &ASimHUD::StaticClass, TEXT("/Script/AirSim"), TEXT("ASimHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
