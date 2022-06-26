// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/UMG_Ladder__pf596000372.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_Ladder__pf596000372() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUMG_Ladder_C__pf596000372_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUMG_Ladder_C__pf596000372();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	void UUMG_Ladder_C__pf596000372::StaticRegisterNativesUUMG_Ladder_C__pf596000372()
	{
	}
	UClass* Z_Construct_UClass_UUMG_Ladder_C__pf596000372_NoRegister()
	{
		return UUMG_Ladder_C__pf596000372::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_Ladder_C__pf596000372_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_Ladder_C__pf596000372_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Ladder_C__pf596000372_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UMG_Ladder__pf596000372.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UMG_Ladder__pf596000372.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "UMG_Ladder_C" },
		{ "ReplaceConverted", "/Game/VirtualRealityBP/UMG/UMG_Ladder.UMG_Ladder_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_Ladder_C__pf596000372_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_Ladder_C__pf596000372>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_Ladder_C__pf596000372_Statics::ClassParams = {
		&UUMG_Ladder_C__pf596000372::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_Ladder_C__pf596000372_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Ladder_C__pf596000372_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_Ladder_C__pf596000372()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/VirtualRealityBP/UMG/UMG_Ladder"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("UMG_Ladder_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_Ladder_C__pf596000372_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UUMG_Ladder_C__pf596000372, TEXT("UMG_Ladder_C"), 2800886435);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UUMG_Ladder_C__pf596000372>()
	{
		return UUMG_Ladder_C__pf596000372::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_Ladder_C__pf596000372(Z_Construct_UClass_UUMG_Ladder_C__pf596000372, &UUMG_Ladder_C__pf596000372::StaticClass, TEXT("/Game/VirtualRealityBP/UMG/UMG_Ladder"), TEXT("UMG_Ladder_C"), true, TEXT("/Game/VirtualRealityBP/UMG/UMG_Ladder"), TEXT("/Game/VirtualRealityBP/UMG/UMG_Ladder.UMG_Ladder_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_Ladder_C__pf596000372);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
