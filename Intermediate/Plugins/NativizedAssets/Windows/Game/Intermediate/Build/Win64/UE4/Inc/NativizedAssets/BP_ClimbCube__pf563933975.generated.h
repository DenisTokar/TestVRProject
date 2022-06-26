// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef NATIVIZEDASSETS_BP_ClimbCube__pf563933975_generated_h
#error "BP_ClimbCube__pf563933975.generated.h already included, missing '#pragma once' in BP_ClimbCube__pf563933975.h"
#endif
#define NATIVIZEDASSETS_BP_ClimbCube__pf563933975_generated_h

#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_SPARSE_DATA
#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__Climb__pf); \
	DECLARE_FUNCTION(execbpf__LetGo__pf);


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__Climb__pf); \
	DECLARE_FUNCTION(execbpf__LetGo__pf);


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_EVENT_PARMS \
	struct BP_ClimbCube_C__pf563933975_eventbpf__Climb__pf_Parms \
	{ \
		USceneComponent* bpp__MotionController__pf; \
	}; \
	struct BP_ClimbCube_C__pf563933975_eventbpf__LetGo__pf_Parms \
	{ \
		USceneComponent* bpp__MotionController__pf; \
	}; \
	struct BP_ClimbCube_C__pf563933975_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_CALLBACK_WRAPPERS \
	void eventbpf__Climb__pf(USceneComponent* bpp__MotionController__pf); \
 \
	void eventbpf__LetGo__pf(USceneComponent* bpp__MotionController__pf); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \



#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_ClimbCube_C__pf563933975(); \
	friend struct Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(ABP_ClimbCube_C__pf563933975, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/BP_ClimbCube"), NO_API) \
	DECLARE_SERIALIZER(ABP_ClimbCube_C__pf563933975) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_ClimbCube_C__pf563933975*>(this); }


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABP_ClimbCube_C__pf563933975(); \
	friend struct Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(ABP_ClimbCube_C__pf563933975, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/BP_ClimbCube"), NO_API) \
	DECLARE_SERIALIZER(ABP_ClimbCube_C__pf563933975) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_ClimbCube_C__pf563933975*>(this); }


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_ClimbCube_C__pf563933975(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_ClimbCube_C__pf563933975) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_ClimbCube_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_ClimbCube_C__pf563933975); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_ClimbCube_C__pf563933975(ABP_ClimbCube_C__pf563933975&&); \
	NO_API ABP_ClimbCube_C__pf563933975(const ABP_ClimbCube_C__pf563933975&); \
public:


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_ClimbCube_C__pf563933975(ABP_ClimbCube_C__pf563933975&&); \
	NO_API ABP_ClimbCube_C__pf563933975(const ABP_ClimbCube_C__pf563933975&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_ClimbCube_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_ClimbCube_C__pf563933975); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_ClimbCube_C__pf563933975)


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_PRIVATE_PROPERTY_OFFSET
#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_11_PROLOG \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_EVENT_PARMS


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_SPARSE_DATA \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_RPC_WRAPPERS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_CALLBACK_WRAPPERS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_INCLASS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_SPARSE_DATA \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_CALLBACK_WRAPPERS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_ClimbCube_C__pf563933975>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ClimbCube__pf563933975_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
