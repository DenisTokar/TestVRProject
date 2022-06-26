// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FKey;
#ifdef NATIVIZEDASSETS_HMDLocomotionPawn__pf563933975_generated_h
#error "HMDLocomotionPawn__pf563933975.generated.h already included, missing '#pragma once' in HMDLocomotionPawn__pf563933975.h"
#endif
#define NATIVIZEDASSETS_HMDLocomotionPawn__pf563933975_generated_h

#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_SPARSE_DATA
#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UpdateTeleportDirection__pf); \
	DECLARE_FUNCTION(execbpf__GetThumbstickFacingDirection__pf); \
	DECLARE_FUNCTION(execbpf__ShouldUpdateFacingDirection__pf); \
	DECLARE_FUNCTION(execbpf__GetTeleportDestination__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4);


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UpdateTeleportDirection__pf); \
	DECLARE_FUNCTION(execbpf__GetThumbstickFacingDirection__pf); \
	DECLARE_FUNCTION(execbpf__ShouldUpdateFacingDirection__pf); \
	DECLARE_FUNCTION(execbpf__GetTeleportDestination__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4);


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_EVENT_PARMS \
	struct HMDLocomotionPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \



#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHMDLocomotionPawn_C__pf563933975(); \
	friend struct Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(AHMDLocomotionPawn_C__pf563933975, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/HMDLocomotionPawn"), NO_API) \
	DECLARE_SERIALIZER(AHMDLocomotionPawn_C__pf563933975)


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAHMDLocomotionPawn_C__pf563933975(); \
	friend struct Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(AHMDLocomotionPawn_C__pf563933975, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/HMDLocomotionPawn"), NO_API) \
	DECLARE_SERIALIZER(AHMDLocomotionPawn_C__pf563933975)


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHMDLocomotionPawn_C__pf563933975(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHMDLocomotionPawn_C__pf563933975) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHMDLocomotionPawn_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHMDLocomotionPawn_C__pf563933975); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHMDLocomotionPawn_C__pf563933975(AHMDLocomotionPawn_C__pf563933975&&); \
	NO_API AHMDLocomotionPawn_C__pf563933975(const AHMDLocomotionPawn_C__pf563933975&); \
public:


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHMDLocomotionPawn_C__pf563933975(AHMDLocomotionPawn_C__pf563933975&&); \
	NO_API AHMDLocomotionPawn_C__pf563933975(const AHMDLocomotionPawn_C__pf563933975&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHMDLocomotionPawn_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHMDLocomotionPawn_C__pf563933975); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHMDLocomotionPawn_C__pf563933975)


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_PRIVATE_PROPERTY_OFFSET
#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_13_PROLOG \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_EVENT_PARMS


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_SPARSE_DATA \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_RPC_WRAPPERS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_CALLBACK_WRAPPERS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_INCLASS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_SPARSE_DATA \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_CALLBACK_WRAPPERS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_INCLASS_NO_PURE_DECLS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class AHMDLocomotionPawn_C__pf563933975>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_HMDLocomotionPawn__pf563933975_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
