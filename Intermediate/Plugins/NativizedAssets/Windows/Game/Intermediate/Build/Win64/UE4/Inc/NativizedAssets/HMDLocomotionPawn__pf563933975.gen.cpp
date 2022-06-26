// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/HMDLocomotionPawn__pf563933975.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHMDLocomotionPawn__pf563933975() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(AHMDLocomotionPawn_C__pf563933975::execbpf__UpdateTeleportDirection__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UpdateTeleportDirection__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHMDLocomotionPawn_C__pf563933975::execbpf__GetThumbstickFacingDirection__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->bpf__GetThumbstickFacingDirection__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHMDLocomotionPawn_C__pf563933975::execbpf__ShouldUpdateFacingDirection__pf)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bpp__ShouldAdjust__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ShouldUpdateFacingDirection__pf(Z_Param_Out_bpp__ShouldAdjust__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHMDLocomotionPawn_C__pf563933975::execbpf__GetTeleportDestination__pf)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bpp__FoundValidLocation__pf);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__Location__pf);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__HitNormal__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetTeleportDestination__pf(Z_Param_Out_bpp__FoundValidLocation__pf,Z_Param_Out_bpp__Location__pf,Z_Param_Out_bpp__HitNormal__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHMDLocomotionPawn_C__pf563933975::execbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHMDLocomotionPawn_C__pf563933975::execbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHMDLocomotionPawn_C__pf563933975::execbpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHMDLocomotionPawn_C__pf563933975::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHMDLocomotionPawn_C__pf563933975::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHMDLocomotionPawn_C__pf563933975::execbpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AHMDLocomotionPawn_C__pf563933975::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AHMDLocomotionPawn_C__pf563933975::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		HMDLocomotionPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf),&Parms);
	}
	void AHMDLocomotionPawn_C__pf563933975::StaticRegisterNativesAHMDLocomotionPawn_C__pf563933975()
	{
		UClass* Class = AHMDLocomotionPawn_C__pf563933975::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_HMDLocomotionPawn_4", &AHMDLocomotionPawn_C__pf563933975::execbpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4 },
			{ "GetTeleportDestination", &AHMDLocomotionPawn_C__pf563933975::execbpf__GetTeleportDestination__pf },
			{ "GetThumbstickFacingDirection", &AHMDLocomotionPawn_C__pf563933975::execbpf__GetThumbstickFacingDirection__pf },
			{ "InpActEvt_HMDTeleport_K2Node_InputActionEvent_0", &AHMDLocomotionPawn_C__pf563933975::execbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf },
			{ "InpActEvt_HMDTeleport_K2Node_InputActionEvent_1", &AHMDLocomotionPawn_C__pf563933975::execbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf },
			{ "InpActEvt_R_K2Node_InputKeyEvent_0", &AHMDLocomotionPawn_C__pf563933975::execbpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf },
			{ "ReceiveBeginPlay", &AHMDLocomotionPawn_C__pf563933975::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AHMDLocomotionPawn_C__pf563933975::execbpf__ReceiveTick__pf },
			{ "ShouldUpdateFacingDirection", &AHMDLocomotionPawn_C__pf563933975::execbpf__ShouldUpdateFacingDirection__pf },
			{ "UpdateTeleportDirection", &AHMDLocomotionPawn_C__pf563933975::execbpf__UpdateTeleportDirection__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Statics
	{
		struct HMDLocomotionPawn_C__pf563933975_eventbpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HMDLocomotionPawn_C__pf563933975_eventbpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_HMDLocomotionPawn_4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975, nullptr, "ExecuteUbergraph_HMDLocomotionPawn_4", nullptr, nullptr, sizeof(HMDLocomotionPawn_C__pf563933975_eventbpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Parms), Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4()
	{
		UObject* Outer = Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_HMDLocomotionPawn_4" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics
	{
		struct HMDLocomotionPawn_C__pf563933975_eventbpf__GetTeleportDestination__pf_Parms
		{
			bool bpp__FoundValidLocation__pf;
			FVector bpp__Location__pf;
			FVector bpp__HitNormal__pf;
		};
		static void NewProp_bpp__FoundValidLocation__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__FoundValidLocation__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Location__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__HitNormal__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__FoundValidLocation__pf_SetBit(void* Obj)
	{
		((HMDLocomotionPawn_C__pf563933975_eventbpf__GetTeleportDestination__pf_Parms*)Obj)->bpp__FoundValidLocation__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__FoundValidLocation__pf = { "bpp__FoundValidLocation__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(HMDLocomotionPawn_C__pf563933975_eventbpf__GetTeleportDestination__pf_Parms), &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__FoundValidLocation__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__Location__pf = { "bpp__Location__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HMDLocomotionPawn_C__pf563933975_eventbpf__GetTeleportDestination__pf_Parms, bpp__Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__HitNormal__pf = { "bpp__HitNormal__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HMDLocomotionPawn_C__pf563933975_eventbpf__GetTeleportDestination__pf_Parms, bpp__HitNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__FoundValidLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__HitNormal__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "GetTeleportDestination" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975, nullptr, "GetTeleportDestination", nullptr, nullptr, sizeof(HMDLocomotionPawn_C__pf563933975_eventbpf__GetTeleportDestination__pf_Parms), Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf()
	{
		UObject* Outer = Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetTeleportDestination" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf_Statics
	{
		struct HMDLocomotionPawn_C__pf563933975_eventbpf__GetThumbstickFacingDirection__pf_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HMDLocomotionPawn_C__pf563933975_eventbpf__GetThumbstickFacingDirection__pf_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "GetThumbstickFacingDirection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975, nullptr, "GetThumbstickFacingDirection", nullptr, nullptr, sizeof(HMDLocomotionPawn_C__pf563933975_eventbpf__GetThumbstickFacingDirection__pf_Parms), Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf()
	{
		UObject* Outer = Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetThumbstickFacingDirection" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Statics
	{
		struct HMDLocomotionPawn_C__pf563933975_eventbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HMDLocomotionPawn_C__pf563933975_eventbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_HMDTeleport_K2Node_InputActionEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975, nullptr, "InpActEvt_HMDTeleport_K2Node_InputActionEvent_0", nullptr, nullptr, sizeof(HMDLocomotionPawn_C__pf563933975_eventbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Parms), Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_HMDTeleport_K2Node_InputActionEvent_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Statics
	{
		struct HMDLocomotionPawn_C__pf563933975_eventbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HMDLocomotionPawn_C__pf563933975_eventbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_HMDTeleport_K2Node_InputActionEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975, nullptr, "InpActEvt_HMDTeleport_K2Node_InputActionEvent_1", nullptr, nullptr, sizeof(HMDLocomotionPawn_C__pf563933975_eventbpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Parms), Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_HMDTeleport_K2Node_InputActionEvent_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Statics
	{
		struct HMDLocomotionPawn_C__pf563933975_eventbpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HMDLocomotionPawn_C__pf563933975_eventbpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "InpActEvt_R_K2Node_InputKeyEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975, nullptr, "InpActEvt_R_K2Node_InputKeyEvent_0", nullptr, nullptr, sizeof(HMDLocomotionPawn_C__pf563933975_eventbpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Parms), Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_R_K2Node_InputKeyEvent_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HMDLocomotionPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(HMDLocomotionPawn_C__pf563933975_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics
	{
		struct HMDLocomotionPawn_C__pf563933975_eventbpf__ShouldUpdateFacingDirection__pf_Parms
		{
			bool bpp__ShouldAdjust__pf;
		};
		static void NewProp_bpp__ShouldAdjust__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__ShouldAdjust__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::NewProp_bpp__ShouldAdjust__pf_SetBit(void* Obj)
	{
		((HMDLocomotionPawn_C__pf563933975_eventbpf__ShouldUpdateFacingDirection__pf_Parms*)Obj)->bpp__ShouldAdjust__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::NewProp_bpp__ShouldAdjust__pf = { "bpp__ShouldAdjust__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(HMDLocomotionPawn_C__pf563933975_eventbpf__ShouldUpdateFacingDirection__pf_Parms), &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::NewProp_bpp__ShouldAdjust__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::NewProp_bpp__ShouldAdjust__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "ShouldUpdateFacingDirection" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975, nullptr, "ShouldUpdateFacingDirection", nullptr, nullptr, sizeof(HMDLocomotionPawn_C__pf563933975_eventbpf__ShouldUpdateFacingDirection__pf_Parms), Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf()
	{
		UObject* Outer = Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ShouldUpdateFacingDirection" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__UpdateTeleportDirection__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__UpdateTeleportDirection__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "UpdateTeleportDirection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__UpdateTeleportDirection__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975, nullptr, "UpdateTeleportDirection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__UpdateTeleportDirection__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__UpdateTeleportDirection__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__UpdateTeleportDirection__pf()
	{
		UObject* Outer = Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateTeleportDirection" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__UpdateTeleportDirection__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_NoRegister()
	{
		return AHMDLocomotionPawn_C__pf563933975::StaticClass();
	}
	struct Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TraceDirection__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TraceDirection__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Ring__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Ring__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TeleportPin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TeleportPin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Camera__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Camera__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__VROrigin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__VROrigin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PinnedLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PinnedLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bLocationFound__pf_MetaData[];
#endif
		static void NewProp_bpv__bLocationFound__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bLocationFound__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bLocationPinned__pf_MetaData[];
#endif
		static void NewProp_bpv__bLocationPinned__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bLocationPinned__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PinnedRotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PinnedRotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RotationLengthThreshold__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RotationLengthThreshold__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentLookAtLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__CurrentLookAtLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bCurrentLocationValid__pf_MetaData[];
#endif
		static void NewProp_bpv__bCurrentLocationValid__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bCurrentLocationValid__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FadeOutDuration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FadeOutDuration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FadeInDuration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FadeInDuration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TeleportFadeColor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__TeleportFadeColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultPlayerHeight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__DefaultPlayerHeight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RingGlowMatInst__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RingGlowMatInst__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UseGamepad__pf_MetaData[];
#endif
		static void NewProp_bpv__UseGamepad__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__UseGamepad__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTeleportDestination_HitNormal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetTeleportDestination_HitNormal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4, "ExecuteUbergraph_HMDLocomotionPawn_4" }, // 989656349
		{ &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetTeleportDestination__pf, "GetTeleportDestination" }, // 881024379
		{ &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__GetThumbstickFacingDirection__pf, "GetThumbstickFacingDirection" }, // 719261470
		{ &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_0__pf, "InpActEvt_HMDTeleport_K2Node_InputActionEvent_0" }, // 2608874917
		{ &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_1__pf, "InpActEvt_HMDTeleport_K2Node_InputActionEvent_1" }, // 3194572748
		{ &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__InpActEvt_R_K2Node_InputKeyEvent_0__pf, "InpActEvt_R_K2Node_InputKeyEvent_0" }, // 784534238
		{ &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2480963850
		{ &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ReceiveTick__pf, "ReceiveTick" }, // 1705454675
		{ &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__ShouldUpdateFacingDirection__pf, "ShouldUpdateFacingDirection" }, // 2315952452
		{ &Z_Construct_UFunction_AHMDLocomotionPawn_C__pf563933975_bpf__UpdateTeleportDirection__pf, "UpdateTeleportDirection" }, // 2720873118
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HMDLocomotionPawn__pf563933975.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "HMDLocomotionPawn_C" },
		{ "ReplaceConverted", "/Game/VirtualRealityBP/Blueprints/HMDLocomotionPawn.HMDLocomotionPawn_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TraceDirection__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "TraceDirection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TraceDirection__pf = { "TraceDirection", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__TraceDirection__pf), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TraceDirection__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TraceDirection__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Arrow__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "Arrow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Arrow__pf = { "Arrow", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__Arrow__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Arrow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Arrow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Ring__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "Ring" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Ring__pf = { "Ring", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__Ring__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Ring__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Ring__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TeleportPin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "TeleportPin" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TeleportPin__pf = { "TeleportPin", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__TeleportPin__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TeleportPin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TeleportPin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "Camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf = { "Camera", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__Camera__pf), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "VROrigin" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf = { "VROrigin", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__VROrigin__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__PinnedLocation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Pinned Location" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "PinnedLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__PinnedLocation__pf = { "PinnedLocation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__PinnedLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__PinnedLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__PinnedLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationFound__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "B Location Found" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "bLocationFound" },
	};
#endif
	void Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationFound__pf_SetBit(void* Obj)
	{
		((AHMDLocomotionPawn_C__pf563933975*)Obj)->bpv__bLocationFound__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationFound__pf = { "bLocationFound", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHMDLocomotionPawn_C__pf563933975), &Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationFound__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationFound__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationFound__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationPinned__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Location Pinned" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "bLocationPinned" },
	};
#endif
	void Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationPinned__pf_SetBit(void* Obj)
	{
		((AHMDLocomotionPawn_C__pf563933975*)Obj)->bpv__bLocationPinned__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationPinned__pf = { "bLocationPinned", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHMDLocomotionPawn_C__pf563933975), &Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationPinned__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationPinned__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationPinned__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__PinnedRotation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Pinned Rotation" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "PinnedRotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__PinnedRotation__pf = { "PinnedRotation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__PinnedRotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__PinnedRotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__PinnedRotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__RotationLengthThreshold__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Rotation Length Threshold" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "RotationLengthThreshold" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__RotationLengthThreshold__pf = { "RotationLengthThreshold", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__RotationLengthThreshold__pf), METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__RotationLengthThreshold__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__RotationLengthThreshold__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__CurrentLookAtLocation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Current Look at Location" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CurrentLookAtLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__CurrentLookAtLocation__pf = { "CurrentLookAtLocation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__CurrentLookAtLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__CurrentLookAtLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__CurrentLookAtLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bCurrentLocationValid__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Current Location Valid" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "bCurrentLocationValid" },
	};
#endif
	void Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bCurrentLocationValid__pf_SetBit(void* Obj)
	{
		((AHMDLocomotionPawn_C__pf563933975*)Obj)->bpv__bCurrentLocationValid__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bCurrentLocationValid__pf = { "bCurrentLocationValid", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHMDLocomotionPawn_C__pf563933975), &Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bCurrentLocationValid__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bCurrentLocationValid__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bCurrentLocationValid__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fade Out Duration" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "FadeOutDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__FadeOutDuration__pf), METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fade in Duration" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "FadeInDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__FadeInDuration__pf), METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Teleport Fade Color" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "TeleportFadeColor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf = { "TeleportFadeColor", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__TeleportFadeColor__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Default Player Height" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "DefaultPlayerHeight" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf = { "DefaultPlayerHeight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__DefaultPlayerHeight__pf), METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__RingGlowMatInst__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Ring Glow Mat Inst" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "RingGlowMatInst" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__RingGlowMatInst__pf = { "RingGlowMatInst", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, bpv__RingGlowMatInst__pf), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__RingGlowMatInst__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__RingGlowMatInst__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__UseGamepad__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Use Gamepad" },
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "UseGamepad" },
		{ "tooltip", "Use Gamepad for rotation or use HMD look-at direction to adjust pawn orientation during teleportation." },
	};
#endif
	void Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__UseGamepad__pf_SetBit(void* Obj)
	{
		((AHMDLocomotionPawn_C__pf563933975*)Obj)->bpv__UseGamepad__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__UseGamepad__pf = { "UseGamepad", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHMDLocomotionPawn_C__pf563933975), &Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__UseGamepad__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__UseGamepad__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__UseGamepad__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_SwitchName_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit(void* Obj)
	{
		((AHMDLocomotionPawn_C__pf563933975*)Obj)->b0l__K2Node_SwitchName_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf = { "K2Node_SwitchName_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHMDLocomotionPawn_C__pf563933975), &Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetTeleportDestination_FoundValidLocation" },
	};
#endif
	void Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf_SetBit(void* Obj)
	{
		((AHMDLocomotionPawn_C__pf563933975*)Obj)->b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf = { "CallFunc_GetTeleportDestination_FoundValidLocation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHMDLocomotionPawn_C__pf563933975), &Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetTeleportDestination_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf = { "CallFunc_GetTeleportDestination_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_GetTeleportDestination_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_HitNormal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetTeleportDestination_HitNormal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_HitNormal__pf = { "CallFunc_GetTeleportDestination_HitNormal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_GetTeleportDestination_HitNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_HitNormal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_HitNormal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_ShouldUpdateFacingDirection_ShouldAdjust" },
	};
#endif
	void Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf_SetBit(void* Obj)
	{
		((AHMDLocomotionPawn_C__pf563933975*)Obj)->b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf = { "CallFunc_ShouldUpdateFacingDirection_ShouldAdjust", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHMDLocomotionPawn_C__pf563933975), &Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1" },
	};
#endif
	void Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1__pf_SetBit(void* Obj)
	{
		((AHMDLocomotionPawn_C__pf563933975*)Obj)->b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1__pf = { "CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHMDLocomotionPawn_C__pf563933975), &Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf = { "K2Node_InputActionEvent_Key_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf = { "CallFunc_K2_SetWorldLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddLocalOffset_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf = { "CallFunc_K2_AddLocalOffset_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf = { "K2Node_InputKeyEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__K2Node_InputKeyEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetOrientationAndPosition_DeviceRotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation__pf = { "CallFunc_GetOrientationAndPosition_DeviceRotation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_GetOrientationAndPosition_DeviceRotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetOrientationAndPosition_DevicePosition" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition__pf = { "CallFunc_GetOrientationAndPosition_DevicePosition", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_GetOrientationAndPosition_DevicePosition__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "Temp_struct_Variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf = { "Temp_struct_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__Temp_struct_Variable__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf = { "K2Node_InputActionEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__K2Node_InputActionEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetOrientationAndPosition_DeviceRotation_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation_1__pf = { "CallFunc_GetOrientationAndPosition_DeviceRotation_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_GetOrientationAndPosition_DeviceRotation_1__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetOrientationAndPosition_DevicePosition_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition_1__pf = { "CallFunc_GetOrientationAndPosition_DevicePosition_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_GetOrientationAndPosition_DevicePosition_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Roll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf = { "CallFunc_BreakRotator_Roll", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_BreakRotator_Roll__pf), METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = { "CallFunc_BreakRotator_Pitch", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_BreakRotator_Pitch__pf), METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = { "CallFunc_BreakRotator_Yaw", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_BreakRotator_Yaw__pf), METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMDLocomotionPawn__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf = { "CallFunc_K2_SetWorldRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHMDLocomotionPawn_C__pf563933975, b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TraceDirection__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Arrow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Ring__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TeleportPin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__Camera__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__VROrigin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__PinnedLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationFound__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bLocationPinned__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__PinnedRotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__RotationLengthThreshold__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__CurrentLookAtLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__bCurrentLocationValid__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__FadeOutDuration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__FadeInDuration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__TeleportFadeColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__DefaultPlayerHeight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__RingGlowMatInst__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_bpv__UseGamepad__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetTeleportDestination_HitNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__Temp_struct_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DeviceRotation_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetOrientationAndPosition_DevicePosition_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHMDLocomotionPawn_C__pf563933975>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::ClassParams = {
		&AHMDLocomotionPawn_C__pf563933975::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/VirtualRealityBP/Blueprints/HMDLocomotionPawn"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("HMDLocomotionPawn_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AHMDLocomotionPawn_C__pf563933975, TEXT("HMDLocomotionPawn_C"), 4214034815);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AHMDLocomotionPawn_C__pf563933975>()
	{
		return AHMDLocomotionPawn_C__pf563933975::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHMDLocomotionPawn_C__pf563933975(Z_Construct_UClass_AHMDLocomotionPawn_C__pf563933975, &AHMDLocomotionPawn_C__pf563933975::StaticClass, TEXT("/Game/VirtualRealityBP/Blueprints/HMDLocomotionPawn"), TEXT("HMDLocomotionPawn_C"), true, TEXT("/Game/VirtualRealityBP/Blueprints/HMDLocomotionPawn"), TEXT("/Game/VirtualRealityBP/Blueprints/HMDLocomotionPawn.HMDLocomotionPawn_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHMDLocomotionPawn_C__pf563933975);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
