// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASimModeBase;
#ifdef AIRSIM_SimModeBase_generated_h
#error "SimModeBase.generated.h already included, missing '#pragma once' in SimModeBase.h"
#endif
#define AIRSIM_SimModeBase_generated_h

#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_21_DELEGATE \
static inline void FLevelLoaded_DelegateWrapper(const FMulticastScriptDelegate& LevelLoaded) \
{ \
	LevelLoaded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_SPARSE_DATA
#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execreset); \
	DECLARE_FUNCTION(exectoggleLoadingScreen); \
	DECLARE_FUNCTION(execgetSimMode); \
	DECLARE_FUNCTION(exectoggleRecording);


#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execreset); \
	DECLARE_FUNCTION(exectoggleLoadingScreen); \
	DECLARE_FUNCTION(execgetSimMode); \
	DECLARE_FUNCTION(exectoggleRecording);


#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimModeBase(); \
	friend struct Z_Construct_UClass_ASimModeBase_Statics; \
public: \
	DECLARE_CLASS(ASimModeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ASimModeBase)


#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesASimModeBase(); \
	friend struct Z_Construct_UClass_ASimModeBase_Statics; \
public: \
	DECLARE_CLASS(ASimModeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ASimModeBase)


#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimModeBase(ASimModeBase&&); \
	NO_API ASimModeBase(const ASimModeBase&); \
public:


#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimModeBase(ASimModeBase&&); \
	NO_API ASimModeBase(const ASimModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimModeBase)


#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pip_camera_class() { return STRUCT_OFFSET(ASimModeBase, pip_camera_class); } \
	FORCEINLINE static uint32 __PPO__collision_display_template() { return STRUCT_OFFSET(ASimModeBase, collision_display_template); } \
	FORCEINLINE static uint32 __PPO__external_camera_class_() { return STRUCT_OFFSET(ASimModeBase, external_camera_class_); } \
	FORCEINLINE static uint32 __PPO__camera_director_class_() { return STRUCT_OFFSET(ASimModeBase, camera_director_class_); } \
	FORCEINLINE static uint32 __PPO__sky_sphere_class_() { return STRUCT_OFFSET(ASimModeBase, sky_sphere_class_); } \
	FORCEINLINE static uint32 __PPO__loading_screen_widget_() { return STRUCT_OFFSET(ASimModeBase, loading_screen_widget_); } \
	FORCEINLINE static uint32 __PPO__sky_sphere_() { return STRUCT_OFFSET(ASimModeBase, sky_sphere_); } \
	FORCEINLINE static uint32 __PPO__sun_() { return STRUCT_OFFSET(ASimModeBase, sun_); } \
	FORCEINLINE static uint32 __PPO__spawned_actors_() { return STRUCT_OFFSET(ASimModeBase, spawned_actors_); }


#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_23_PROLOG
#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_PRIVATE_PROPERTY_OFFSET \
	CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_SPARSE_DATA \
	CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_RPC_WRAPPERS \
	CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_INCLASS \
	CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_PRIVATE_PROPERTY_OFFSET \
	CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_SPARSE_DATA \
	CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_INCLASS_NO_PURE_DECLS \
	CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class ASimModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CapstoneEnv_Plugins_AirSim_Source_SimMode_SimModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
