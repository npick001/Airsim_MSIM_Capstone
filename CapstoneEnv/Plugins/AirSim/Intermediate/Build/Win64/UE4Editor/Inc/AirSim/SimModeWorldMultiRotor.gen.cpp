// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Vehicles/Multirotor/SimModeWorldMultiRotor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeWorldMultiRotor() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldMultiRotor_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldMultiRotor();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldBase();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void ASimModeWorldMultiRotor::StaticRegisterNativesASimModeWorldMultiRotor()
	{
	}
	UClass* Z_Construct_UClass_ASimModeWorldMultiRotor_NoRegister()
	{
		return ASimModeWorldMultiRotor::StaticClass();
	}
	struct Z_Construct_UClass_ASimModeWorldMultiRotor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASimModeWorldBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicles/Multirotor/SimModeWorldMultiRotor.h" },
		{ "ModuleRelativePath", "Vehicles/Multirotor/SimModeWorldMultiRotor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimModeWorldMultiRotor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::ClassParams = {
		&ASimModeWorldMultiRotor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimModeWorldMultiRotor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimModeWorldMultiRotor, 141445989);
	template<> AIRSIM_API UClass* StaticClass<ASimModeWorldMultiRotor>()
	{
		return ASimModeWorldMultiRotor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimModeWorldMultiRotor(Z_Construct_UClass_ASimModeWorldMultiRotor, &ASimModeWorldMultiRotor::StaticClass, TEXT("/Script/AirSim"), TEXT("ASimModeWorldMultiRotor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeWorldMultiRotor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
