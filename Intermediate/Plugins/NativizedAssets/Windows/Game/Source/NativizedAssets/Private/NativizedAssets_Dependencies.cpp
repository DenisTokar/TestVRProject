#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Engine/BasicShapes"), TEXT("Cylinder"), TEXT("Cylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/ArtTools/RenderToTexture/Materials/Debug"), TEXT("M_Emissive_Color"), TEXT("M_Emissive_Color"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("MagicLeapARPin"), TEXT("EMagicLeapARPinType"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SceneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("TextRenderComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineMaterials"), TEXT("DefaultTextMaterialOpaque"), TEXT("DefaultTextMaterialOpaque"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineFonts"), TEXT("RobotoDistanceField"), TEXT("RobotoDistanceField"), TEXT("/Script/Engine"), TEXT("Font"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("StaticMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SphereComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("NavigationSystem"), TEXT("NavArea_Obstacle"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerCameraManager"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("HitResult"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("MagicLeapARPin"), TEXT("MagicLeapARPinState"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("MagicLeapARPin"), TEXT("EMagicLeapPassableWorldError"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameplayStatics"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMathLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("MagicLeapARPin"), TEXT("MagicLeapARPinInfoActorBase"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("MagicLeapARPin"), TEXT("MagicLeapARPinFunctionLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetTextLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetNodeHelperLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Actor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInstanceDynamic"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointerToUberGraphFrame"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineFonts"), TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("UserWidget"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints/Interfaces"), TEXT("ClimbActorInterface"), TEXT("ClimbActorInterface_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("BoxComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Pawn"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetSystemLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CameraComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("InputCore"), TEXT("Key"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("HeadMountedDisplay"), TEXT("HeadMountedDisplayFunctionLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LatentActionInfo"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("HeadMountedDisplay"), TEXT("MotionControllerComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIController"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Assets"), TEXT("Ladder"), TEXT("Ladder"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ChildActorComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Meshes"), TEXT("BeamMesh"), TEXT("BeamMesh"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Materials"), TEXT("M_SplineArcMat"), TEXT("M_SplineArcMat"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SkeletalMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("ClothingSystemRuntimeNv"), TEXT("ClothingSimulationFactoryNv"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Mannequin/Character/Mesh"), TEXT("MannequinHand_Right"), TEXT("MannequinHand_Right"), TEXT("/Script/Engine"), TEXT("SkeletalMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ArrowComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SplineComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/BasicShapes"), TEXT("Sphere"), TEXT("Sphere"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Materials"), TEXT("M_ArcEndpoint"), TEXT("M_ArcEndpoint"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Materials"), TEXT("MI_TeleportCylinderPreview"), TEXT("MI_TeleportCylinderPreview"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Meshes"), TEXT("SM_FatCylinder"), TEXT("SM_FatCylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Meshes"), TEXT("BeaconDirection"), TEXT("BeaconDirection"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Meshes"), TEXT("1x1_cube"), TEXT("1x1_cube"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Materials"), TEXT("MI_ChaperoneOutline"), TEXT("MI_ChaperoneOutline"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("SteamVR"), TEXT("SteamVRChaperoneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerController"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PrimitiveComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("EObjectTypeQuery"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AnimInstance"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("PhysicsCore"), TEXT("PhysicalMaterial"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("InputCore"), TEXT("EControllerHand"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints"), TEXT("MotionControllerHaptics"), TEXT("MotionControllerHaptics"), TEXT("/Script/Engine"), TEXT("HapticFeedbackEffect_Curve"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SplineMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetArrayLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ActorComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("NavigationSystem"), TEXT("NavigationSystemV1"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Mannequin/Character/Mesh"), TEXT("MannequinHand_Right_Skeleton"), TEXT("MannequinHand_Right_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AnimGraphRuntime"), TEXT("AnimNode_BlendSpacePlayer"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PoseLink"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AnimNode_Root"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Mannequin/Animations"), TEXT("RightGrip_BS"), TEXT("RightGrip_BS"), TEXT("/Script/Engine"), TEXT("BlendSpace1D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints"), TEXT("MotionControllerPawn"), TEXT("MotionControllerPawn_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints"), TEXT("BP_ClimbCube"), TEXT("BP_ClimbCube_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/UMG"), TEXT("UMG_Ladder"), TEXT("UMG_Ladder_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints"), TEXT("BP_MotionController"), TEXT("BP_MotionController_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints"), TEXT("GripEnum"), TEXT("GripEnum"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Mannequin/Animations"), TEXT("RightHand_AnimBP"), TEXT("RightHand_AnimBP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints"), TEXT("BP_Ladder"), TEXT("BP_Ladder_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints/Interfaces"), TEXT("PickupActorInterface"), TEXT("PickupActorInterface_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("SM_SkySphere"), TEXT("SM_SkySphere"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("M_Sky_Panning_Clouds2"), TEXT("M_Sky_Panning_Clouds2"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Horizon_Color"), TEXT("C_Sky_Horizon_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Zenith_Color"), TEXT("C_Sky_Zenith_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Cloud_Color"), TEXT("C_Sky_Cloud_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("DirectionalLight"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Light"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LightComponentBase"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CurveLinearColor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Geometry/Meshes"), TEXT("1M_Cube"), TEXT("1M_Cube"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualReality/Materials"), TEXT("MI_SmallCubes"), TEXT("MI_SmallCubes"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("StaticMeshActor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 89));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
