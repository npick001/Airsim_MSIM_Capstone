// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Vehicles/ComputerVision/SimModeComputerVision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeComputerVision() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeComputerVision_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeComputerVision();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void ASimModeComputerVision::StaticRegisterNativesASimModeComputerVision()
	{
	}
	UClass* Z_Construct_UClass_ASimModeComputerVision_NoRegister()
	{
		return ASimModeComputerVision::StaticClass();
	}
	struct Z_Construct_UClass_ASimModeComputerVision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimModeComputerVision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASimModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeComputerVision_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicles/ComputerVision/SimModeComputerVision.h" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/SimModeComputerVision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimModeComputerVision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimModeComputerVision>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASimModeComputerVision_Statics::ClassParams = {
		&ASimModeComputerVision::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASimModeComputerVision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeComputerVision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimModeComputerVision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASimModeComputerVision_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimModeComputerVision, 3759594627);
	template<> AIRSIM_API UClass* StaticClass<ASimModeComputerVision>()
	{
		return ASimModeComputerVision::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimModeComputerVision(Z_Construct_UClass_ASimModeComputerVision, &ASimModeComputerVision::StaticClass, TEXT("/Script/AirSim"), TEXT("ASimModeComputerVision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeComputerVision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
