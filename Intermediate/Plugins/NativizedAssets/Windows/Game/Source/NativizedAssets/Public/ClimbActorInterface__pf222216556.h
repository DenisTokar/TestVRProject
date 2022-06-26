#pragma once
#include "Blueprint/BlueprintSupport.h"
class USceneComponent;
#include "ClimbActorInterface__pf222216556.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/VirtualRealityBP/Blueprints/Interfaces/ClimbActorInterface.ClimbActorInterface_C", OverrideNativeName="ClimbActorInterface_C"))
class UClimbActorInterface_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IClimbActorInterface_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Climb"))
	void bpf__Climb__pf(USceneComponent* bpp__MotionController__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="LetGo"))
	void bpf__LetGo__pf(USceneComponent* bpp__MotionController__pf);
public:
};
