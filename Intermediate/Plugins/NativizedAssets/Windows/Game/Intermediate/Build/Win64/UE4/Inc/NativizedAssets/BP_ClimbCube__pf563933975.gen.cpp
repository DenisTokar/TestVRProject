// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_ClimbCube__pf563933975.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_ClimbCube__pf563933975() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_ClimbCube_C__pf563933975();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UClimbActorInterface_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_ClimbCube_C__pf563933975::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_ClimbCube_C__pf563933975::execbpf__Climb__pf)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__MotionController__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Climb__pf(Z_Param_bpp__MotionController__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_ClimbCube_C__pf563933975::execbpf__LetGo__pf)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__MotionController__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__LetGo__pf(Z_Param_bpp__MotionController__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf = FName(TEXT("Climb"));
	void ABP_ClimbCube_C__pf563933975::eventbpf__Climb__pf(USceneComponent* bpp__MotionController__pf)
	{
		BP_ClimbCube_C__pf563933975_eventbpf__Climb__pf_Parms Parms;
		Parms.bpp__MotionController__pf=bpp__MotionController__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf),&Parms);
	}
	static FName NAME_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf = FName(TEXT("LetGo"));
	void ABP_ClimbCube_C__pf563933975::eventbpf__LetGo__pf(USceneComponent* bpp__MotionController__pf)
	{
		BP_ClimbCube_C__pf563933975_eventbpf__LetGo__pf_Parms Parms;
		Parms.bpp__MotionController__pf=bpp__MotionController__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf),&Parms);
	}
	static FName NAME_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_ClimbCube_C__pf563933975::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_ClimbCube_C__pf563933975_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf),&Parms);
	}
	void ABP_ClimbCube_C__pf563933975::StaticRegisterNativesABP_ClimbCube_C__pf563933975()
	{
		UClass* Class = ABP_ClimbCube_C__pf563933975::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Climb", &ABP_ClimbCube_C__pf563933975::execbpf__Climb__pf },
			{ "LetGo", &ABP_ClimbCube_C__pf563933975::execbpf__LetGo__pf },
			{ "ReceiveTick", &ABP_ClimbCube_C__pf563933975::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__MotionController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__MotionController__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::NewProp_bpp__MotionController__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::NewProp_bpp__MotionController__pf = { "bpp__MotionController__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_ClimbCube_C__pf563933975_eventbpf__Climb__pf_Parms, bpp__MotionController__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::NewProp_bpp__MotionController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::NewProp_bpp__MotionController__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::NewProp_bpp__MotionController__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "Climb" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_ClimbCube_C__pf563933975, nullptr, "Climb", nullptr, nullptr, sizeof(BP_ClimbCube_C__pf563933975_eventbpf__Climb__pf_Parms), Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_ClimbCube_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Climb" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__MotionController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__MotionController__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::NewProp_bpp__MotionController__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::NewProp_bpp__MotionController__pf = { "bpp__MotionController__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_ClimbCube_C__pf563933975_eventbpf__LetGo__pf_Parms, bpp__MotionController__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::NewProp_bpp__MotionController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::NewProp_bpp__MotionController__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::NewProp_bpp__MotionController__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "LetGo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_ClimbCube_C__pf563933975, nullptr, "LetGo", nullptr, nullptr, sizeof(BP_ClimbCube_C__pf563933975_eventbpf__LetGo__pf_Parms), Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_ClimbCube_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "LetGo" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_ClimbCube_C__pf563933975_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_ClimbCube_C__pf563933975, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BP_ClimbCube_C__pf563933975_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_ClimbCube_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_NoRegister()
	{
		return ABP_ClimbCube_C__pf563933975::StaticClass();
	}
	struct Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Box__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Box__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FistMC__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FistMC__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SecondMC__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SecondMC__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MotionControllerPawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MotionControllerPawn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PivotFMCPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PivotFMCPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PivotSMCPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PivotSMCPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_MotionController_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_MotionController_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_MotionController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_MotionController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable_1__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable_2__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Select_Default_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__Climb__pf, "Climb" }, // 389316178
		{ &Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__LetGo__pf, "LetGo" }, // 1105941159
		{ &Z_Construct_UFunction_ABP_ClimbCube_C__pf563933975_bpf__ReceiveTick__pf, "ReceiveTick" }, // 7180283
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_ClimbCube__pf563933975.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_ClimbCube_C" },
		{ "ReplaceConverted", "/Game/VirtualRealityBP/Blueprints/BP_ClimbCube.BP_ClimbCube_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__Box__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__Box__pf = { "Box", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, bpv__Box__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__Box__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__Box__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__FistMC__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fist MC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "FistMC" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__FistMC__pf = { "FistMC", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, bpv__FistMC__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__FistMC__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__FistMC__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__SecondMC__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Second MC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SecondMC" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__SecondMC__pf = { "SecondMC", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, bpv__SecondMC__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__SecondMC__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__SecondMC__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__MotionControllerPawn__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Motion Controller Pawn" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MotionControllerPawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__MotionControllerPawn__pf = { "MotionControllerPawn", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, bpv__MotionControllerPawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__MotionControllerPawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__MotionControllerPawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__PivotFMCPoint__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Pivot FMCPoint" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PivotFMCPoint" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__PivotFMCPoint__pf = { "PivotFMCPoint", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, bpv__PivotFMCPoint__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__PivotFMCPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__PivotFMCPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__PivotSMCPoint__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Pivot SMCPoint" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PivotSMCPoint" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__PivotSMCPoint__pf = { "PivotSMCPoint", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, bpv__PivotSMCPoint__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__PivotSMCPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__PivotSMCPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "Temp_bool_Variable" },
	};
#endif
	void Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj)
	{
		((ABP_ClimbCube_C__pf563933975*)Obj)->b0l__Temp_bool_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf = { "Temp_bool_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_ClimbCube_C__pf563933975), &Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "Temp_int_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable_1__pf = { "Temp_int_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__Temp_int_Variable_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_MotionController_1__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_MotionController_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_MotionController_1__pf = { "K2Node_Event_MotionController_1", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__K2Node_Event_MotionController_1__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_MotionController_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_MotionController_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_MotionController__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_MotionController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_MotionController__pf = { "K2Node_Event_MotionController", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__K2Node_Event_MotionController__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_MotionController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_MotionController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Select_Default" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default__pf = { "K2Node_Select_Default", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__K2Node_Select_Default__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "Temp_bool_Variable_1" },
	};
#endif
	void Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_SetBit(void* Obj)
	{
		((ABP_ClimbCube_C__pf563933975*)Obj)->b0l__Temp_bool_Variable_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_1__pf = { "Temp_bool_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_ClimbCube_C__pf563933975), &Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ABP_ClimbCube_C__pf563933975*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_ClimbCube_C__pf563933975), &Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf = { "CallFunc_K2_SetWorldLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldLocation_SweepHitResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf = { "CallFunc_K2_SetWorldLocation_SweepHitResult_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "Temp_bool_Variable_2" },
	};
#endif
	void Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_2__pf_SetBit(void* Obj)
	{
		((ABP_ClimbCube_C__pf563933975*)Obj)->b0l__Temp_bool_Variable_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_2__pf = { "Temp_bool_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_ClimbCube_C__pf563933975), &Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default_1__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default_1__pf = { "K2Node_Select_Default_1", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__K2Node_Select_Default_1__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default_2__pf = { "K2Node_Select_Default_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__K2Node_Select_Default_2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ClimbCube__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddActorWorldOffset_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf = { "CallFunc_K2_AddActorWorldOffset_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ClimbCube_C__pf563933975, b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__Box__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__FistMC__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__SecondMC__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__MotionControllerPawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__PivotFMCPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_bpv__PivotSMCPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_int_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_MotionController_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_MotionController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__Temp_bool_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Select_Default_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UClimbActorInterface_C_NoRegister, (int32)VTABLE_OFFSET(ABP_ClimbCube_C__pf563933975, IClimbActorInterface_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_ClimbCube_C__pf563933975>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::ClassParams = {
		&ABP_ClimbCube_C__pf563933975::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_ClimbCube_C__pf563933975()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/VirtualRealityBP/Blueprints/BP_ClimbCube"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_ClimbCube_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_ClimbCube_C__pf563933975_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_ClimbCube_C__pf563933975, TEXT("BP_ClimbCube_C"), 4045320750);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_ClimbCube_C__pf563933975>()
	{
		return ABP_ClimbCube_C__pf563933975::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_ClimbCube_C__pf563933975(Z_Construct_UClass_ABP_ClimbCube_C__pf563933975, &ABP_ClimbCube_C__pf563933975::StaticClass, TEXT("/Game/VirtualRealityBP/Blueprints/BP_ClimbCube"), TEXT("BP_ClimbCube_C"), true, TEXT("/Game/VirtualRealityBP/Blueprints/BP_ClimbCube"), TEXT("/Game/VirtualRealityBP/Blueprints/BP_ClimbCube.BP_ClimbCube_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_ClimbCube_C__pf563933975);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
