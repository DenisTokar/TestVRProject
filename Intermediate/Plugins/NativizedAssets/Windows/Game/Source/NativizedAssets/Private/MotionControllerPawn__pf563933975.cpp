#include "NativizedAssets.h"
#include "MotionControllerPawn__pf563933975.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "BP_MotionController__pf563933975.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "BP_Ladder__pf563933975.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/HeadMountedDisplay/Public/XRGestureConfig.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AMotionControllerPawn_C__pf563933975::AMotionControllerPawn_C__pf563933975(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Box__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	bpv__VROrigin__pf = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	RootComponent = bpv__Box__pf;
	bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	auto& __Local__0 = (*(AccessPrivateProperty<FVector >((bpv__Box__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__0 = FVector(10.000000, 10.000000, 90.000000);
	bpv__Box__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Box__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	bpv__Box__pf->BodyInstance.bLockXRotation = true;
	bpv__Box__pf->BodyInstance.bLockYRotation = true;
	bpv__Box__pf->BodyInstance.bLockZRotation = true;
	bpv__Box__pf->BodyInstance.bSimulatePhysics = true;
	bpv__Box__pf->BodyInstance.bEnableGravity = false;
	bpv__Box__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	static TWeakFieldPtr<FProperty> __Local__2{};
	const FProperty* __Local__1 = __Local__2.Get();
	if (nullptr == __Local__1)
	{
		__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__1);
		__Local__2 = __Local__1;
	}
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Box__pf), true, 0));
	bpv__VROrigin__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VROrigin__pf->AttachToComponent(bpv__Box__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__VROrigin__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__3 = FVector(0.000000, 0.000000, -90.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__VROrigin__pf), false, 0));
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__VROrigin__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Camera__pf), false, 0));
	bpv__bShowChaperone__pf = false;
	bpv__LeftController__pf = nullptr;
	bpv__RightController__pf = nullptr;
	bpv__FadeOutDuration__pf = 0.100000f;
	bpv__FadeInDuration__pf = 0.200000f;
	bpv__IsTeleporting__pf = false;
	bpv__TeleportFadeColor__pf = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__ThumbDeadzone__pf = 0.700000f;
	bpv__RightStickDown__pf = false;
	bpv__LeftStickDown__pf = false;
	bpv__DefaultPlayerHeight__pf = 180.000000f;
	bpv__UseControllerRollToRotate__pf = false;
	bpv__UseLadder__pf = false;
	bpv__ClimbHands__pf = 0;
	bpv__isClimb__pf = false;
	bpv__isFalling__pf = false;
	auto& __Local__4 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__4 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AMotionControllerPawn_C__pf563933975::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Box__pf)
	{
		bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__VROrigin__pf)
	{
		bpv__VROrigin__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AMotionControllerPawn_C__pf563933975::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_MotionController_C__pf563933975::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Ladder_C__pf563933975::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__5 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__5);
	auto __Local__6 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__6);
	auto __Local__7 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__7);
	static TWeakFieldPtr<FProperty> __Local__9{};
	const FProperty* __Local__8 = __Local__9.Get();
	if (nullptr == __Local__8)
	{
		__Local__8 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__8);
		__Local__9 = __Local__8;
	}
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((__Local__5), false, 0));
	__Local__6->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__6->InputAxisDelegateBindings.AddUninitialized(6);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__6->InputAxisDelegateBindings.GetData(), 6);
	auto& __Local__10 = __Local__6->InputAxisDelegateBindings[0];
	__Local__10.InputAxisName = FName(TEXT("MotionControllerThumbRight_Y"));
	__Local__10.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1"));
	auto& __Local__11 = __Local__6->InputAxisDelegateBindings[1];
	__Local__11.InputAxisName = FName(TEXT("MotionControllerThumbLeft_Y"));
	__Local__11.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0"));
	auto& __Local__12 = __Local__6->InputAxisDelegateBindings[2];
	__Local__12.InputAxisName = FName(TEXT("MotionControllerThumbRight_X"));
	__Local__12.bOverrideParentBinding = false;
	auto& __Local__13 = __Local__6->InputAxisDelegateBindings[3];
	__Local__13.InputAxisName = FName(TEXT("MotionControllerThumbRight_Y"));
	__Local__13.bOverrideParentBinding = false;
	auto& __Local__14 = __Local__6->InputAxisDelegateBindings[4];
	__Local__14.InputAxisName = FName(TEXT("MotionControllerThumbLeft_Y"));
	__Local__14.bOverrideParentBinding = false;
	auto& __Local__15 = __Local__6->InputAxisDelegateBindings[5];
	__Local__15.InputAxisName = FName(TEXT("MotionControllerThumbLeft_X"));
	__Local__15.bOverrideParentBinding = false;
	__Local__7->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__7->InputActionDelegateBindings.AddUninitialized(9);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__7->InputActionDelegateBindings.GetData(), 9);
	auto& __Local__16 = __Local__7->InputActionDelegateBindings[0];
	__Local__16.InputActionName = FName(TEXT("GrabRight"));
	__Local__16.InputKeyEvent = EInputEvent::IE_Released;
	__Local__16.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_6"));
	auto& __Local__17 = __Local__7->InputActionDelegateBindings[1];
	__Local__17.InputActionName = FName(TEXT("GrabRight"));
	__Local__17.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_5"));
	auto& __Local__18 = __Local__7->InputActionDelegateBindings[2];
	__Local__18.InputActionName = FName(TEXT("TeleportLeft"));
	__Local__18.InputKeyEvent = EInputEvent::IE_Released;
	__Local__18.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportLeft_K2Node_InputActionEvent_4"));
	auto& __Local__19 = __Local__7->InputActionDelegateBindings[3];
	__Local__19.InputActionName = FName(TEXT("TeleportLeft"));
	__Local__19.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportLeft_K2Node_InputActionEvent_3"));
	auto& __Local__20 = __Local__7->InputActionDelegateBindings[4];
	__Local__20.InputActionName = FName(TEXT("TeleportRight"));
	__Local__20.InputKeyEvent = EInputEvent::IE_Released;
	__Local__20.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportRight_K2Node_InputActionEvent_2"));
	auto& __Local__21 = __Local__7->InputActionDelegateBindings[5];
	__Local__21.InputActionName = FName(TEXT("GrabLeft"));
	__Local__21.InputKeyEvent = EInputEvent::IE_Released;
	__Local__21.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_8"));
	auto& __Local__22 = __Local__7->InputActionDelegateBindings[6];
	__Local__22.InputActionName = FName(TEXT("GrabLeft"));
	__Local__22.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_7"));
	auto& __Local__23 = __Local__7->InputActionDelegateBindings[7];
	__Local__23.InputActionName = FName(TEXT("TeleportRight"));
	__Local__23.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportRight_K2Node_InputActionEvent_1"));
	auto& __Local__24 = __Local__7->InputActionDelegateBindings[8];
	__Local__24.InputActionName = FName(TEXT("UseButton"));
	__Local__24.FunctionNameToBind = FName(TEXT("InpActEvt_UseButton_K2Node_InputActionEvent_0"));
}
PRAGMA_ENABLE_OPTIMIZATION
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_GetRotationFromInput_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_2__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_3__pf{};
	FRotator bpfv__CallFunc_GetRotationFromInput_ReturnValue_1__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 6:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpv__ClimbHands__pf, 0);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpv__Box__pf))
				{
					bpv__Box__pf->SetEnableGravity(true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				if(::IsValid(bpv__Box__pf))
				{
					bpv__Box__pf->SetEnableGravity(false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 70:
			{
				__CurrentState = 71;
				break;
			}
		case 71:
			{
				__StateStack.Push(6);
				__StateStack.Push(74);
			}
		case 72:
			{
				bool  __Local__25 = false;
				if (!((::IsValid(bpv__LeftController__pf)) ? (bpv__LeftController__pf->bpv__IsTeleporterActive__pf) : (__Local__25)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 73:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbLeft_X")));
				bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbLeft_Y")));
				bpfv__CallFunc_GetRotationFromInput_ReturnValue__pf = bpf__GetRotationFromInput__pf(bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf, bpv__LeftController__pf);
				if(::IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpv__TeleportRotation__pf = bpfv__CallFunc_GetRotationFromInput_ReturnValue__pf;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 74:
			{
				bool  __Local__26 = false;
				if (!((::IsValid(bpv__RightController__pf)) ? (bpv__RightController__pf->bpv__IsTeleporterActive__pf) : (__Local__26)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 75:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue_2__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbRight_Y")));
				bpfv__CallFunc_GetInputAxisValue_ReturnValue_3__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbRight_X")));
				bpfv__CallFunc_GetRotationFromInput_ReturnValue_1__pf = bpf__GetRotationFromInput__pf(bpfv__CallFunc_GetInputAxisValue_ReturnValue_2__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue_3__pf, bpv__RightController__pf);
				if(::IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpv__TeleportRotation__pf = bpfv__CallFunc_GetRotationFromInput_ReturnValue_1__pf;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 82);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Box__pf))
	{
		bpv__Box__pf->SetEnableGravity(b0l__K2Node_CustomEvent_bSimulate__pf);
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	ABP_MotionController_C__pf563933975* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	ABP_MotionController_C__pf563933975* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FName bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf{};
	uint8 bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 24:
			{
				__CurrentState = 25;
				break;
			}
		case 25:
			{
				__StateStack.Push(27);
			}
		case 26:
			{
				bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf = UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("OculusHMD")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					__CurrentState = 39;
					break;
				}
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("SteamVR")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					__CurrentState = 39;
					break;
				}
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("PSVR")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					__CurrentState = 40;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				__StateStack.Push(33);
			}
		case 28:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf563933975::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 29:
			{
				UKismetSystemLibrary::SetObjectPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("BP_Pawn")), this);
			}
		case 30:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<ABP_MotionController_C__pf563933975>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 31:
			{
				bpv__LeftController__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
			}
		case 32:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->AActor::K2_AttachToComponent(bpv__VROrigin__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf563933975::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 34:
			{
				bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralByte(1);
				UKismetSystemLibrary::SetBytePropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, FName(TEXT("Hand")), bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf);
			}
		case 35:
			{
				UKismetSystemLibrary::SetObjectPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, FName(TEXT("BP_Pawn")), this);
			}
		case 36:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_MotionController_C__pf563933975>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 37:
			{
				bpv__RightController__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 38:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->AActor::K2_AttachToComponent(bpv__VROrigin__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);
			}
		case 41:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__DefaultPlayerHeight__pf);
				if(::IsValid(bpv__VROrigin__pf))
				{
					bpv__VROrigin__pf->USceneComponent::K2_AddLocalOffset(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf, false);
				}
			}
		case 42:
			{
				bpv__UseControllerRollToRotate__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 81);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 80);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
				if(::IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpf__CE_TeleportUse__pf(true);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpf__CE_TeleportUse__pf(true);
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpf__CE_ChangePH__pf(true);
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				__CurrentState = 13;
				break;
			}
		case 13:
			{
				if (!bpv__UseLadder__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 14:
			{
				bpv__UseLadder__pf = false;
				__CurrentState = 9;
				break;
			}
		case 15:
			{
				ABP_Ladder_C__pf563933975*  __Local__27 = ((ABP_Ladder_C__pf563933975*)nullptr);
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(((::IsValid(bpv__LeftController__pf)) ? (bpv__LeftController__pf->bpv__BP_Ladder__pf) : (__Local__27)));
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 16:
			{
				bpv__UseLadder__pf = true;
			}
		case 17:
			{
				if(::IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpf__CE_TeleportUse__pf(false);
				}
			}
		case 18:
			{
				if(::IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpf__CE_TeleportUse__pf(false);
				}
				__CurrentState = 11;
				break;
			}
		case 19:
			{
				ABP_Ladder_C__pf563933975*  __Local__28 = ((ABP_Ladder_C__pf563933975*)nullptr);
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(((::IsValid(bpv__RightController__pf)) ? (bpv__RightController__pf->bpv__BP_Ladder__pf) : (__Local__28)));
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 16;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 78);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_3__pf = b0l__K2Node_InputActionEvent_Key_6__pf;
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__ReleaseActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 76);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_3__pf = b0l__K2Node_InputActionEvent_Key_5__pf;
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__GrabActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_8(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_K2_TeleportTo_ReturnValue__pf{};
	APlayerCameraManager* bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf{};
	APlayerCameraManager* bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				if(::IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__DisableTeleporter__pf();
				}
			}
		case 3:
			{
				if(::IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__GetTeleportDestination__pf(/*out*/ b0l__CallFunc_GetTeleportDestination_Location__pf, /*out*/ b0l__CallFunc_GetTeleportDestination_Rotation__pf);
				}
				bpfv__CallFunc_K2_TeleportTo_ReturnValue__pf = AActor::K2_TeleportTo(b0l__CallFunc_GetTeleportDestination_Location__pf, b0l__CallFunc_GetTeleportDestination_Rotation__pf);
			}
		case 4:
			{
				bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf->StartCameraFade(1.000000, 0.000000, bpv__FadeInDuration__pf, bpv__TeleportFadeColor__pf, false, false);
				}
			}
		case 5:
			{
				bpv__IsTeleporting__pf = false;
				__CurrentState = -1;
				break;
			}
		case 43:
			{
				__CurrentState = 44;
				break;
			}
		case 44:
			{
				if (!bpv__IsTeleporting__pf)
				{
					__CurrentState = 45;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 45:
			{
				bool  __Local__29 = false;
				if (!((::IsValid(b0l__K2Node_CustomEvent_MotionController__pf)) ? (b0l__K2Node_CustomEvent_MotionController__pf->bpv__IsValidTeleportDestination__pf) : (__Local__29)))
				{
					__CurrentState = 49;
					break;
				}
			}
		case 46:
			{
				bpv__IsTeleporting__pf = true;
			}
		case 47:
			{
				bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->StartCameraFade(0.000000, 1.000000, bpv__FadeOutDuration__pf, bpv__TeleportFadeColor__pf, false, true);
				}
			}
		case 48:
			{
				UKismetSystemLibrary::Delay(this, bpv__FadeOutDuration__pf, FLatentActionInfo(1, 916982736, TEXT("ExecuteUbergraph_MotionControllerPawn_8"), this));
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				if(::IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__DisableTeleporter__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 68);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_2__pf = b0l__K2Node_InputActionEvent_Key_4__pf;
	// optimized KCST_UnconditionalGoto
	bool  __Local__31 = false;
	if (!((::IsValid(bpv__LeftController__pf)) ? (bpv__LeftController__pf->bpv__IsTeleporterActive__pf) : (__Local__31)))
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__ExecuteTeleportation__pf(bpv__LeftController__pf);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 66);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_2__pf = b0l__K2Node_InputActionEvent_Key_3__pf;
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__ActivateTeleporter__pf();
	}
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__DisableTeleporter__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 64);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_2__pf;
	// optimized KCST_UnconditionalGoto
	bool  __Local__32 = false;
	if (!((::IsValid(bpv__RightController__pf)) ? (bpv__RightController__pf->bpv__IsTeleporterActive__pf) : (__Local__32)))
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__ExecuteTeleportation__pf(bpv__RightController__pf);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_1__pf;
	if(::IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__ActivateTeleporter__pf();
	}
	if(::IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__DisableTeleporter__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 50);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputActionEvent_Key_7__pf;
	if(::IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__GrabActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 53);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputActionEvent_Key_8__pf;
	if(::IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__ReleaseActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__CE_ChangePH__pf(bool bpp__bSimulate__pf)
{
	b0l__K2Node_CustomEvent_bSimulate__pf = bpp__bSimulate__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(82);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_3(81);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_4(80);
}
void AMotionControllerPawn_C__pf563933975::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_0(70);
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteTeleportation__pf(ABP_MotionController_C__pf563933975* bpp__MotionController__pf)
{
	b0l__K2Node_CustomEvent_MotionController__pf = bpp__MotionController__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_8(43);
}
void AMotionControllerPawn_C__pf563933975::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(24);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_UseButton_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_5(12);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_12(20);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_11(64);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_10(66);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_9(68);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_7(76);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_6(78);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_13(50);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_8__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_14(53);
}
FRotator  AMotionControllerPawn_C__pf563933975::bpf__GetRotationFromInput__pf(float bpp__UpAxis__pf, float bpp__RightAxis__pf, ABP_MotionController_C__pf563933975* bpp__Controller__pf)
{
	FRotator bpp__ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_ConvertTransformToRelative_ReturnValue__pf{};
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Abs_ReturnValue_1__pf{};
	float bpfv__CallFunc_BreakRotator_Roll_1__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch_1__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_BreakRotator_Roll_2__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch_2__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw_2__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue_2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_SelectRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_SelectRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	FRotator  __Local__33 = FRotator(0.000000,0.000000,0.000000);
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), ((::IsValid(bpp__Controller__pf)) ? (bpp__Controller__pf->bpv__InitialControllerRotation__pf) : (__Local__33)), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpp__RightAxis__pf);
	if(::IsValid(bpp__Controller__pf) && ::IsValid(bpp__Controller__pf->bpv__MotionController__pf))
	{
		bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpp__Controller__pf->bpv__MotionController__pf->USceneComponent::K2_GetComponentToWorld();
	}
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpp__UpAxis__pf, bpp__RightAxis__pf, 0.000000);
	bpfv__CallFunc_ConvertTransformToRelative_ReturnValue__pf = UKismetMathLibrary::ConvertTransformToRelative(bpfv__CallFunc_MakeTransform_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf);
	bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_MakeVector_ReturnValue__pf, 0.000100);
	UKismetMathLibrary::BreakTransform(bpfv__CallFunc_ConvertTransformToRelative_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
	bpfv__CallFunc_Abs_ReturnValue_1__pf = UKismetMathLibrary::Abs(bpp__UpAxis__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw_1__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Abs_ReturnValue_1__pf, bpfv__CallFunc_Abs_ReturnValue__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_BreakRotator_Roll_1__pf, 3.000000);
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf = AActor::K2_GetActorRotation();
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_BreakRotator_Yaw__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll_2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch_2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw_2__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue_1__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw_2__pf);
	bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_Normal_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue_1__pf);
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue_2__pf = AActor::K2_GetActorRotation();
	bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf);
	bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpv__ThumbDeadzone__pf);
	bpfv__CallFunc_SelectRotator_ReturnValue__pf = UKismetMathLibrary::SelectRotator(bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, bpfv__CallFunc_K2_GetActorRotation_ReturnValue_2__pf, bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_SelectRotator_ReturnValue_1__pf = UKismetMathLibrary::SelectRotator(bpfv__CallFunc_MakeRotator_ReturnValue__pf, bpfv__CallFunc_SelectRotator_ReturnValue__pf, bpv__UseControllerRollToRotate__pf);
	bpp__ReturnValue__pf = bpfv__CallFunc_SelectRotator_ReturnValue_1__pf;
	return bpp__ReturnValue__pf;
}
void AMotionControllerPawn_C__pf563933975::bpf__LadderMove__pf(float bpp__MoveScale__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z__pf, bpp__MoveScale__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = AActor::K2_SetActorLocation(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf, false);
}
bool  AMotionControllerPawn_C__pf563933975::bpf__GroundCheck__pf()
{
	bool bpp__ReturnValue__pf{};
	TArray<AActor*> bpfv__Temp_object_Variable__pf{};
	FVector bpfv__CallFunc_GetActorUpVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_LineTraceSingle_OutHit__pf{};
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue__pf{};
	bpfv__CallFunc_GetActorUpVector_ReturnValue__pf = AActor::GetActorUpVector();
	if(::IsValid(bpv__Camera__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
	}
	FVector  __Local__34 = FVector(0.000000,0.000000,0.000000);
	UKismetMathLibrary::BreakVector(((::IsValid(bpv__Camera__pf)) ? ((*(AccessPrivateProperty<FVector >((bpv__Camera__pf), USceneComponent::__PPO__RelativeLocation() )))) : (__Local__34)), /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorUpVector_ReturnValue__pf, bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	bpfv__CallFunc_LineTraceSingle_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery1, false, bpfv__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ bpfv__CallFunc_LineTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
	bpp__ReturnValue__pf = bpfv__CallFunc_LineTraceSingle_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void AMotionControllerPawn_C__pf563933975::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AMotionControllerPawn_C__pf563933975::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{30, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{27, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Assets/Ladder.Ladder 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right.MannequinHand_Right 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineComponent 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_ArcEndpoint.M_ArcEndpoint 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_TeleportCylinderPreview.MI_TeleportCylinderPreview 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/SM_FatCylinder.SM_FatCylinder 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeaconDirection.BeaconDirection 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_ChaperoneOutline.MI_ChaperoneOutline 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/SteamVR.SteamVRChaperoneComponent 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.EControllerHand 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  HapticFeedbackEffect_Curve /Game/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right_Skeleton.MannequinHand_Right_Skeleton 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/VirtualReality/Mannequin/Animations/RightGrip_BS.RightGrip_BS 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_Ladder.BP_Ladder_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AMotionControllerPawn_C__pf563933975
{
	FRegisterHelper__AMotionControllerPawn_C__pf563933975()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), &AMotionControllerPawn_C__pf563933975::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AMotionControllerPawn_C__pf563933975 Instance;
};
FRegisterHelper__AMotionControllerPawn_C__pf563933975 FRegisterHelper__AMotionControllerPawn_C__pf563933975::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
