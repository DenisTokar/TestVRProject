// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/MotionControllerPawn__pf563933975.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionControllerPawn__pf563933975() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__GroundCheck__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->bpf__GroundCheck__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__LadderMove__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__MoveScale__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__LadderMove__pf(Z_Param_bpp__MoveScale__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__GetRotationFromInput__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__UpAxis__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__RightAxis__pf);
		P_GET_OBJECT(ABP_MotionController_C__pf563933975,Z_Param_bpp__Controller__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->bpf__GetRotationFromInput__pf(Z_Param_bpp__UpAxis__pf,Z_Param_bpp__RightAxis__pf,Z_Param_bpp__Controller__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__ExecuteTeleportation__pf)
	{
		P_GET_OBJECT(ABP_MotionController_C__pf563933975,Z_Param_bpp__MotionController__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteTeleportation__pf(Z_Param_bpp__MotionController__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__CE_ChangePH__pf)
	{
		P_GET_UBOOL(Z_Param_bpp__bSimulate__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CE_ChangePH__pf(Z_Param_bpp__bSimulate__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf563933975::execbpf__ExecuteUbergraph_MotionControllerPawn__pf_8)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_MotionControllerPawn__pf_8(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AMotionControllerPawn_C__pf563933975::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AMotionControllerPawn_C__pf563933975::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		MotionControllerPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf),&Parms);
	}
	void AMotionControllerPawn_C__pf563933975::StaticRegisterNativesAMotionControllerPawn_C__pf563933975()
	{
		UClass* Class = AMotionControllerPawn_C__pf563933975::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CE_ChangePH", &AMotionControllerPawn_C__pf563933975::execbpf__CE_ChangePH__pf },
			{ "ExecuteTeleportation", &AMotionControllerPawn_C__pf563933975::execbpf__ExecuteTeleportation__pf },
			{ "ExecuteUbergraph_MotionControllerPawn_8", &AMotionControllerPawn_C__pf563933975::execbpf__ExecuteUbergraph_MotionControllerPawn__pf_8 },
			{ "GetRotationFromInput", &AMotionControllerPawn_C__pf563933975::execbpf__GetRotationFromInput__pf },
			{ "GroundCheck", &AMotionControllerPawn_C__pf563933975::execbpf__GroundCheck__pf },
			{ "InpActEvt_GrabLeft_K2Node_InputActionEvent_7", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf },
			{ "InpActEvt_GrabLeft_K2Node_InputActionEvent_8", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf },
			{ "InpActEvt_GrabRight_K2Node_InputActionEvent_5", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf },
			{ "InpActEvt_GrabRight_K2Node_InputActionEvent_6", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf },
			{ "InpActEvt_TeleportLeft_K2Node_InputActionEvent_3", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf },
			{ "InpActEvt_TeleportLeft_K2Node_InputActionEvent_4", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf },
			{ "InpActEvt_TeleportRight_K2Node_InputActionEvent_1", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf },
			{ "InpActEvt_TeleportRight_K2Node_InputActionEvent_2", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf },
			{ "InpActEvt_UseButton_K2Node_InputActionEvent_0", &AMotionControllerPawn_C__pf563933975::execbpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf },
			{ "InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0", &AMotionControllerPawn_C__pf563933975::execbpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf },
			{ "InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1", &AMotionControllerPawn_C__pf563933975::execbpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf },
			{ "LadderMove", &AMotionControllerPawn_C__pf563933975::execbpf__LadderMove__pf },
			{ "ReceiveBeginPlay", &AMotionControllerPawn_C__pf563933975::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AMotionControllerPawn_C__pf563933975::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__CE_ChangePH__pf_Parms
		{
			bool bpp__bSimulate__pf;
		};
		static void NewProp_bpp__bSimulate__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bSimulate__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::NewProp_bpp__bSimulate__pf_SetBit(void* Obj)
	{
		((MotionControllerPawn_C__pf563933975_eventbpf__CE_ChangePH__pf_Parms*)Obj)->bpp__bSimulate__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::NewProp_bpp__bSimulate__pf = { "bpp__bSimulate__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(MotionControllerPawn_C__pf563933975_eventbpf__CE_ChangePH__pf_Parms), &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::NewProp_bpp__bSimulate__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::NewProp_bpp__bSimulate__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CE_ChangePH" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "CE_ChangePH", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__CE_ChangePH__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CE_ChangePH" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__ExecuteTeleportation__pf_Parms
		{
			ABP_MotionController_C__pf563933975* bpp__MotionController__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__MotionController__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::NewProp_bpp__MotionController__pf = { "bpp__MotionController__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteTeleportation__pf_Parms, bpp__MotionController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::NewProp_bpp__MotionController__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ExecuteTeleportation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ExecuteTeleportation", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteTeleportation__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteTeleportation" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_MotionControllerPawn_8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ExecuteUbergraph_MotionControllerPawn_8", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_MotionControllerPawn_8" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms
		{
			float bpp__UpAxis__pf;
			float bpp__RightAxis__pf;
			ABP_MotionController_C__pf563933975* bpp__Controller__pf;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__UpAxis__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__RightAxis__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Controller__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__UpAxis__pf = { "bpp__UpAxis__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, bpp__UpAxis__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__RightAxis__pf = { "bpp__RightAxis__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, bpp__RightAxis__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__Controller__pf = { "bpp__Controller__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, bpp__Controller__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__UpAxis__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__RightAxis__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__Controller__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "GetRotationFromInput" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "GetRotationFromInput", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__GetRotationFromInput__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetRotationFromInput" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__GroundCheck__pf_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionControllerPawn_C__pf563933975_eventbpf__GroundCheck__pf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(MotionControllerPawn_C__pf563933975_eventbpf__GroundCheck__pf_Parms), &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "GroundCheck" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "GroundCheck", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__GroundCheck__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GroundCheck" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabLeft_K2Node_InputActionEvent_7" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabLeft_K2Node_InputActionEvent_7", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_GrabLeft_K2Node_InputActionEvent_7" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabLeft_K2Node_InputActionEvent_8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabLeft_K2Node_InputActionEvent_8", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_GrabLeft_K2Node_InputActionEvent_8" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabRight_K2Node_InputActionEvent_5" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabRight_K2Node_InputActionEvent_5", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_GrabRight_K2Node_InputActionEvent_5" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_GrabRight_K2Node_InputActionEvent_6" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_GrabRight_K2Node_InputActionEvent_6", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_GrabRight_K2Node_InputActionEvent_6" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_TeleportLeft_K2Node_InputActionEvent_3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_TeleportLeft_K2Node_InputActionEvent_3", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_TeleportLeft_K2Node_InputActionEvent_3" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_TeleportLeft_K2Node_InputActionEvent_4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_TeleportLeft_K2Node_InputActionEvent_4", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_TeleportLeft_K2Node_InputActionEvent_4" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_TeleportRight_K2Node_InputActionEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_TeleportRight_K2Node_InputActionEvent_1", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_TeleportRight_K2Node_InputActionEvent_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_TeleportRight_K2Node_InputActionEvent_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_TeleportRight_K2Node_InputActionEvent_2", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_TeleportRight_K2Node_InputActionEvent_2" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_UseButton_K2Node_InputActionEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpActEvt_UseButton_K2Node_InputActionEvent_0", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_UseButton_K2Node_InputActionEvent_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf_Statics
	{
		struct MotionControllerPawn_C__pf563933975_eventbpf__LadderMove__pf_Parms
		{
			float bpp__MoveScale__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__MoveScale__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf_Statics::NewProp_bpp__MoveScale__pf = { "bpp__MoveScale__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__LadderMove__pf_Parms, bpp__MoveScale__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf_Statics::NewProp_bpp__MoveScale__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "LadderMove" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "LadderMove", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__LadderMove__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "LadderMove" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_NoRegister()
	{
		return AMotionControllerPawn_C__pf563933975::StaticClass();
	}
	struct Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__VROrigin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__VROrigin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Box__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Box__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Camera__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Camera__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bShowChaperone__pf_MetaData[];
#endif
		static void NewProp_bpv__bShowChaperone__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bShowChaperone__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LeftController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RightController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FadeOutDuration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FadeOutDuration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FadeInDuration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FadeInDuration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsTeleporting__pf_MetaData[];
#endif
		static void NewProp_bpv__IsTeleporting__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsTeleporting__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TeleportFadeColor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__TeleportFadeColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ThumbDeadzone__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ThumbDeadzone__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightStickDown__pf_MetaData[];
#endif
		static void NewProp_bpv__RightStickDown__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__RightStickDown__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftStickDown__pf_MetaData[];
#endif
		static void NewProp_bpv__LeftStickDown__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__LeftStickDown__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultPlayerHeight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__DefaultPlayerHeight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UseControllerRollToRotate__pf_MetaData[];
#endif
		static void NewProp_bpv__UseControllerRollToRotate__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__UseControllerRollToRotate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UseLadder__pf_MetaData[];
#endif
		static void NewProp_bpv__UseLadder__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__UseLadder__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ClimbHands__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__ClimbHands__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__isClimb__pf_MetaData[];
#endif
		static void NewProp_bpv__isClimb__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__isClimb__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__isFalling__pf_MetaData[];
#endif
		static void NewProp_bpv__isFalling__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__isFalling__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_MotionController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_7__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_bSimulate__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_CustomEvent_bSimulate__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_CustomEvent_bSimulate__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__CE_ChangePH__pf, "CE_ChangePH" }, // 1968964679
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteTeleportation__pf, "ExecuteTeleportation" }, // 308559353
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ExecuteUbergraph_MotionControllerPawn__pf_8, "ExecuteUbergraph_MotionControllerPawn_8" }, // 3150259464
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GetRotationFromInput__pf, "GetRotationFromInput" }, // 1989691800
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__GroundCheck__pf, "GroundCheck" }, // 3302871337
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf, "InpActEvt_GrabLeft_K2Node_InputActionEvent_7" }, // 743167494
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf, "InpActEvt_GrabLeft_K2Node_InputActionEvent_8" }, // 623828331
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf, "InpActEvt_GrabRight_K2Node_InputActionEvent_5" }, // 3949670117
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf, "InpActEvt_GrabRight_K2Node_InputActionEvent_6" }, // 2770558826
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf, "InpActEvt_TeleportLeft_K2Node_InputActionEvent_3" }, // 4071697741
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf, "InpActEvt_TeleportLeft_K2Node_InputActionEvent_4" }, // 124333882
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf, "InpActEvt_TeleportRight_K2Node_InputActionEvent_1" }, // 2725842214
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf, "InpActEvt_TeleportRight_K2Node_InputActionEvent_2" }, // 2012141457
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf, "InpActEvt_UseButton_K2Node_InputActionEvent_0" }, // 1257992943
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf, "InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0" }, // 3918911478
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf, "InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1" }, // 1603660743
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__LadderMove__pf, "LadderMove" }, // 1748560151
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3877868848
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf563933975_bpf__ReceiveTick__pf, "ReceiveTick" }, // 790209492
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MotionControllerPawn__pf563933975.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "MotionControllerPawn_C" },
		{ "ReplaceConverted", "/Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "VROrigin" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf = { "VROrigin", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__VROrigin__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Box__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Box__pf = { "Box", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__Box__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Box__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Box__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf = { "Camera", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__Camera__pf), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_MetaData[] = {
		{ "Category", "Chaperone" },
		{ "DisplayName", "Show Chaperone" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "bShowChaperone" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__bShowChaperone__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf = { "bShowChaperone", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Controller" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "LeftController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf = { "LeftController", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__LeftController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Controller" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "RightController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf = { "RightController", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__RightController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fade Out Duration" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "FadeOutDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__FadeOutDuration__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fade in Duration" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "FadeInDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__FadeInDuration__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Teleporting" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "IsTeleporting" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__IsTeleporting__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf = { "IsTeleporting", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Teleport Fade Color" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "TeleportFadeColor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf = { "TeleportFadeColor", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__TeleportFadeColor__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Thumb Deadzone" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "ThumbDeadzone" },
		{ "tooltip", "Deadzone for adjusting rotation using the thumbs during teleportation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf = { "ThumbDeadzone", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__ThumbDeadzone__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Stick Down" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "RightStickDown" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__RightStickDown__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf = { "RightStickDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Stick Down" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "LeftStickDown" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__LeftStickDown__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf = { "LeftStickDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Default Player Height" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "DefaultPlayerHeight" },
		{ "tooltip", "Player height used on the PS4." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf = { "DefaultPlayerHeight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__DefaultPlayerHeight__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Use Controller Roll to Rotate" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "UseControllerRollToRotate" },
		{ "tooltip", "Forced to True for PSVR Platform. PS Move controller has no thumbstick axis input so we must force enable this option." },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__UseControllerRollToRotate__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf = { "UseControllerRollToRotate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseLadder__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Use Ladder" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "UseLadder" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseLadder__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__UseLadder__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseLadder__pf = { "UseLadder", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseLadder__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseLadder__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseLadder__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ClimbHands__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Climb Hands" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ClimbHands" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ClimbHands__pf = { "ClimbHands", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, bpv__ClimbHands__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ClimbHands__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ClimbHands__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isClimb__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Climb" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "isClimb" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isClimb__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__isClimb__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isClimb__pf = { "isClimb", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isClimb__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isClimb__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isClimb__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isFalling__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Falling" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "isFalling" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isFalling__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->bpv__isFalling__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isFalling__pf = { "isFalling", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isFalling__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isFalling__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isFalling__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf = { "K2Node_InputActionEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf = { "Temp_struct_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_struct_Variable__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf = { "K2Node_InputActionEvent_Key_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf = { "Temp_struct_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_struct_Variable_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_MotionController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf = { "K2Node_CustomEvent_MotionController", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_CustomEvent_MotionController__pf), Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetTeleportDestination_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf = { "CallFunc_GetTeleportDestination_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_GetTeleportDestination_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetTeleportDestination_Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf = { "CallFunc_GetTeleportDestination_Rotation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_GetTeleportDestination_Rotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_7__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_7" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_7__pf = { "K2Node_InputActionEvent_Key_7", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_7__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_7__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_8__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_8" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_8__pf = { "K2Node_InputActionEvent_Key_8", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_8__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_8__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf = { "K2Node_InputActionEvent_Key_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf = { "Temp_struct_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_struct_Variable_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf = { "K2Node_InputActionEvent_Key_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_3__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf = { "K2Node_InputActionEvent_Key_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_4__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_3__pf = { "Temp_struct_Variable_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__Temp_struct_Variable_3__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_5" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf = { "K2Node_InputActionEvent_Key_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_5__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_6" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf = { "K2Node_InputActionEvent_Key_6", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_6__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddLocalOffset_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf = { "CallFunc_K2_AddLocalOffset_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_SwitchName_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__K2Node_SwitchName_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf = { "K2Node_SwitchName_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf = { "K2Node_InputAxisEvent_AxisValue_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputAxisEvent_AxisValue_1__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf = { "K2Node_InputAxisEvent_AxisValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf563933975, b0l__K2Node_InputAxisEvent_AxisValue__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_bSimulate__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_bSimulate" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_bSimulate__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf563933975*)Obj)->b0l__K2Node_CustomEvent_bSimulate__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_bSimulate__pf = { "K2Node_CustomEvent_bSimulate", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf563933975), &Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_bSimulate__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_bSimulate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_bSimulate__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Box__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__bShowChaperone__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__IsTeleporting__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ThumbDeadzone__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__RightStickDown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__LeftStickDown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseControllerRollToRotate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__UseLadder__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__ClimbHands__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isClimb__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_bpv__isFalling__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_MotionController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Rotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_bSimulate__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotionControllerPawn_C__pf563933975>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::ClassParams = {
		&AMotionControllerPawn_C__pf563933975::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MotionControllerPawn_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotionControllerPawn_C__pf563933975_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMotionControllerPawn_C__pf563933975, TEXT("MotionControllerPawn_C"), 4203296915);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AMotionControllerPawn_C__pf563933975>()
	{
		return AMotionControllerPawn_C__pf563933975::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotionControllerPawn_C__pf563933975(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975, &AMotionControllerPawn_C__pf563933975::StaticClass, TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), TEXT("MotionControllerPawn_C"), true, TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotionControllerPawn_C__pf563933975);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
