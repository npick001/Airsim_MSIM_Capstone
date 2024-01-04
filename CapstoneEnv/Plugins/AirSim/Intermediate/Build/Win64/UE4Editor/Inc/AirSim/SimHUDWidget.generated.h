// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
#ifdef AIRSIM_SimHUDWidget_generated_h
#error "SimHUDWidget.generated.h already included, missing '#pragma once' in SimHUDWidget.h"
#endif
#define AIRSIM_SimHUDWidget_generated_h

#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_SPARSE_DATA
#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonToggleRecordingButtonClick);


#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonToggleRecordingButtonClick);


#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_EVENT_PARMS \
	struct SimHUDWidget_eventgetHelpContainerVisibility_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventgetHelpContainerVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventgetRecordButtonVisibility_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventgetRecordButtonVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventgetReportContainerVisibility_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventgetReportContainerVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventgetSubwindowVisibility_Parms \
	{ \
		int32 window_index; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventgetSubwindowVisibility_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventinitializeForPlay_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventinitializeForPlay_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventsetHelpContainerVisibility_Parms \
	{ \
		bool is_visible; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventsetHelpContainerVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventsetRecordButtonVisibility_Parms \
	{ \
		bool is_visible; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventsetRecordButtonVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventsetReportContainerVisibility_Parms \
	{ \
		bool is_visible; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventsetReportContainerVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventsetReportText_Parms \
	{ \
		FString text; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventsetReportText_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SimHUDWidget_eventsetSubwindowVisibility_Parms \
	{ \
		int32 window_index; \
		bool is_visible; \
		UTextureRenderTarget2D* render_target; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimHUDWidget_eventsetSubwindowVisibility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_CALLBACK_WRAPPERS
#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimHUDWidget(); \
	friend struct Z_Construct_UClass_USimHUDWidget_Statics; \
public: \
	DECLARE_CLASS(USimHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(USimHUDWidget)


#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSimHUDWidget(); \
	friend struct Z_Construct_UClass_USimHUDWidget_Statics; \
public: \
	DECLARE_CLASS(USimHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(USimHUDWidget)


#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimHUDWidget(USimHUDWidget&&); \
	NO_API USimHUDWidget(const USimHUDWidget&); \
public:


#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimHUDWidget(USimHUDWidget&&); \
	NO_API USimHUDWidget(const USimHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimHUDWidget)


#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_PRIVATE_PROPERTY_OFFSET
#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_9_PROLOG \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_EVENT_PARMS


#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_SPARSE_DATA \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_RPC_WRAPPERS \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_CALLBACK_WRAPPERS \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_INCLASS \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_SPARSE_DATA \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_CALLBACK_WRAPPERS \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_INCLASS_NO_PURE_DECLS \
	CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class USimHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CapstoneEnv_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
