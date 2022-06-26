// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef NATIVIZEDASSETS_ClimbActorInterface__pf222216556_generated_h
#error "ClimbActorInterface__pf222216556.generated.h already included, missing '#pragma once' in ClimbActorInterface__pf222216556.h"
#endif
#define NATIVIZEDASSETS_ClimbActorInterface__pf222216556_generated_h

#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_SPARSE_DATA
#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_RPC_WRAPPERS
#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_EVENT_PARMS \
	struct ClimbActorInterface_C_eventbpf__Climb__pf_Parms \
	{ \
		USceneComponent* bpp__MotionController__pf; \
	}; \
	struct ClimbActorInterface_C_eventbpf__LetGo__pf_Parms \
	{ \
		USceneComponent* bpp__MotionController__pf; \
	};


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_CALLBACK_WRAPPERS
#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClimbActorInterface_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClimbActorInterface_C) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClimbActorInterface_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClimbActorInterface_C); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClimbActorInterface_C(UClimbActorInterface_C&&); \
	NO_API UClimbActorInterface_C(const UClimbActorInterface_C&); \
public:


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClimbActorInterface_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClimbActorInterface_C(UClimbActorInterface_C&&); \
	NO_API UClimbActorInterface_C(const UClimbActorInterface_C&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClimbActorInterface_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClimbActorInterface_C); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClimbActorInterface_C)


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUClimbActorInterface_C(); \
	friend struct Z_Construct_UClass_UClimbActorInterface_C_Statics; \
public: \
	DECLARE_CLASS(UClimbActorInterface_C, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/Interfaces/ClimbActorInterface"), NO_API) \
	DECLARE_SERIALIZER(UClimbActorInterface_C)


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_GENERATED_UINTERFACE_BODY() \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_GENERATED_UINTERFACE_BODY() \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IClimbActorInterface_C() {} \
public: \
	typedef UClimbActorInterface_C UClassType; \
	typedef IClimbActorInterface_C ThisClass; \
	static void Execute_bpf__Climb__pf(UObject* O, USceneComponent* bpp__MotionController__pf); \
	static void Execute_bpf__LetGo__pf(UObject* O, USceneComponent* bpp__MotionController__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IClimbActorInterface_C() {} \
public: \
	typedef UClimbActorInterface_C UClassType; \
	typedef IClimbActorInterface_C ThisClass; \
	static void Execute_bpf__Climb__pf(UObject* O, USceneComponent* bpp__MotionController__pf); \
	static void Execute_bpf__LetGo__pf(UObject* O, USceneComponent* bpp__MotionController__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_5_PROLOG \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_EVENT_PARMS


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_SPARSE_DATA \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_RPC_WRAPPERS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_CALLBACK_WRAPPERS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_SPARSE_DATA \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_CALLBACK_WRAPPERS \
	MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UClimbActorInterface_C>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ClimbActorInterface__pf222216556_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
