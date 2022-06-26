#include "NativizedAssets.h"
#include "BP_MotionController__pf563933975.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
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
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
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
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "RightHand_AnimBP__pf558596347.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "../Plugins/Runtime/Steam/SteamVR/Source/SteamVR/Classes/SteamVRChaperoneComponent.h"
#include "BP_Ladder__pf563933975.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
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
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Curve.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/HeadMountedDisplay/Public/XRGestureConfig.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Runtime/NavigationSystem/Public/NavMesh/NavMeshBoundsVolume.h"
#include "Runtime/NavigationSystem/Public/NavigationPath.h"
#include "Runtime/NavigationSystem/Public/CrowdManagerBase.h"
#include "MotionControllerPawn__pf563933975.h"
#include "ClimbActorInterface__pf222216556.h"
#include "PickupActorInterface__pf222216556.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_MotionController_C__pf563933975::ABP_MotionController_C__pf563933975(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__MotionController__pf = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	bpv__HandMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandMesh"));
	bpv__ArcDirection__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("ArcDirection"));
	bpv__ArcSpline__pf = CreateDefaultSubobject<USplineComponent>(TEXT("ArcSpline"));
	bpv__GrabSphere__pf = CreateDefaultSubobject<USphereComponent>(TEXT("GrabSphere"));
	bpv__ArcEndPoint__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArcEndPoint"));
	bpv__TeleportCylinder__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleportCylinder"));
	bpv__Ring__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring"));
	bpv__Arrow__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arrow"));
	bpv__RoomScaleMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoomScaleMesh"));
	RootComponent = bpv__Scene__pf;
	bpv__SteamVRChaperone__pf = CreateDefaultSubobject<USteamVRChaperoneComponent>(TEXT("SteamVRChaperone"));
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Scene__pf), false, 0));
	bpv__MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MotionController__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__MotionController__pf), false, 0));
	bpv__HandMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HandMesh__pf->AttachToComponent(bpv__MotionController__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__HandMesh__pf->AnimClass = URightHand_AnimBP_C__pf558596347::StaticClass();
	bpv__HandMesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__HandMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__HandMesh__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__HandMesh__pf->CastShadow = false;
	auto& __Local__2 = (*(AccessPrivateProperty<FVector >((bpv__HandMesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__2 = FVector(-12.785664, -0.028015, -1.789026);
	auto& __Local__3 = (*(AccessPrivateProperty<FRotator >((bpv__HandMesh__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__3 = FRotator(0.000000, 0.000000, 90.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__HandMesh__pf), false, 0));
	bpv__ArcDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ArcDirection__pf->AttachToComponent(bpv__HandMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ArcDirection__pf->ArrowSize = 0.200000f;
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__ArcDirection__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__4 = FVector(14.175764, 0.859525, -4.318897);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ArcDirection__pf), false, 0));
	bpv__ArcSpline__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ArcSpline__pf->AttachToComponent(bpv__HandMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ArcSpline__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__ArcSpline__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(12.532683, -1.756977, 2.553327);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ArcSpline__pf), false, 0));
	bpv__GrabSphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GrabSphere__pf->AttachToComponent(bpv__HandMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<float >((bpv__GrabSphere__pf), USphereComponent::__PPO__SphereRadius() )));
	__Local__6 = 10.000000f;
	bpv__GrabSphere__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__7 = (*(AccessPrivateProperty<FVector >((bpv__GrabSphere__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__7 = FVector(14.286342, 0.224237, 1.484932);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__GrabSphere__pf), true, 0));
	bpv__ArcEndPoint__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ArcEndPoint__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__8 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__ArcEndPoint__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__8 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__ArcEndPoint__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__ArcEndPoint__pf->OverrideMaterials.Reserve(1);
	bpv__ArcEndPoint__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	static TWeakFieldPtr<FProperty> __Local__10{};
	const FProperty* __Local__9 = __Local__10.Get();
	if (nullptr == __Local__9)
	{
		__Local__9 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__9);
		__Local__10 = __Local__9;
	}
	(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((bpv__ArcEndPoint__pf), false, 0));
	bpv__ArcEndPoint__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__ArcEndPoint__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__11 = FVector(0.150000, 0.150000, 0.150000);
	static TWeakFieldPtr<FProperty> __Local__13{};
	const FProperty* __Local__12 = __Local__13.Get();
	if (nullptr == __Local__12)
	{
		__Local__12 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bAbsoluteLocation")));
		check(__Local__12);
		__Local__13 = __Local__12;
	}
	(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((bpv__ArcEndPoint__pf), true, 0));
	static TWeakFieldPtr<FProperty> __Local__15{};
	const FProperty* __Local__14 = __Local__15.Get();
	if (nullptr == __Local__14)
	{
		__Local__14 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bAbsoluteRotation")));
		check(__Local__14);
		__Local__15 = __Local__14;
	}
	(((FBoolProperty*)__Local__14)->SetPropertyValue_InContainer((bpv__ArcEndPoint__pf), true, 0));
	static TWeakFieldPtr<FProperty> __Local__17{};
	const FProperty* __Local__16 = __Local__17.Get();
	if (nullptr == __Local__16)
	{
		__Local__16 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bAbsoluteScale")));
		check(__Local__16);
		__Local__17 = __Local__16;
	}
	(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__ArcEndPoint__pf), true, 0));
	static TWeakFieldPtr<FProperty> __Local__19{};
	const FProperty* __Local__18 = __Local__19.Get();
	if (nullptr == __Local__18)
	{
		__Local__18 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bVisible")));
		check(__Local__18);
		__Local__19 = __Local__18;
	}
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__ArcEndPoint__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ArcEndPoint__pf), true, 0));
	bpv__TeleportCylinder__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TeleportCylinder__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__20 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__TeleportCylinder__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__20 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__TeleportCylinder__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__TeleportCylinder__pf->OverrideMaterials.Reserve(1);
	bpv__TeleportCylinder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__TeleportCylinder__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__21 = (*(AccessPrivateProperty<FVector >((bpv__TeleportCylinder__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__21 = FVector(0.750000, 0.750000, 1.000000);
	(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((bpv__TeleportCylinder__pf), true, 0));
	(((FBoolProperty*)__Local__14)->SetPropertyValue_InContainer((bpv__TeleportCylinder__pf), true, 0));
	(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__TeleportCylinder__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__TeleportCylinder__pf), false, 0));
	bpv__Ring__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Ring__pf->AttachToComponent(bpv__TeleportCylinder__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__22 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Ring__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__22 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__Ring__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Ring__pf->OverrideMaterials.Reserve(1);
	bpv__Ring__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	auto& __Local__23 = (*(AccessPrivateProperty<FVector >((bpv__Ring__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__23 = FVector(0.500000, 0.500000, 0.150000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Ring__pf), true, 0));
	bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Arrow__pf->AttachToComponent(bpv__TeleportCylinder__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__24 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Arrow__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__24 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__Arrow__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Arrow__pf->OverrideMaterials.Reserve(1);
	bpv__Arrow__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__Arrow__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Arrow__pf), true, 0));
	bpv__RoomScaleMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RoomScaleMesh__pf->AttachToComponent(bpv__Arrow__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__25 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__RoomScaleMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__25 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__RoomScaleMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__RoomScaleMesh__pf->OverrideMaterials.Reserve(1);
	bpv__RoomScaleMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((bpv__RoomScaleMesh__pf), false, 0));
	bpv__RoomScaleMesh__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	(((FBoolProperty*)__Local__14)->SetPropertyValue_InContainer((bpv__RoomScaleMesh__pf), true, 0));
	(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__RoomScaleMesh__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__RoomScaleMesh__pf), true, 0));
	bpv__SteamVRChaperone__pf->CreationMethod = EComponentCreationMethod::Native;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SteamVRChaperone__pf), false, 0));
	bpv__Hand__pf = EControllerHand::Left;
	bpv__AttachedActor__pf = nullptr;
	bpv__IsTeleporterActive__pf = false;
	bpv__SplineMeshes__pf = TArray<USplineMeshComponent*> ();
	bpv__bLastFrameValidDestination__pf = false;
	bpv__IsRoomScale__pf = false;
	bpv__TeleportDestination__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__IsValidTeleportDestination__pf = false;
	bpv__GripState__pf = E__GripEnum__pf::NewEnumerator0;
	bpv__bWantsToGrip__pf = false;
	bpv__TeleportRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__TeleportLaunchVelocity__pf = 900.000000f;
	bpv__InitialControllerRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__UseTeleport__pf = true;
	bpv__BP_Ladder__pf = nullptr;
	bpv__BP_Pawn__pf = nullptr;
	bpv__ClimbActor__pf = nullptr;
	PrimaryActorTick.bCanEverTick = true;
	auto& __Local__26 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__26 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_MotionController_C__pf563933975::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Scene__pf)
	{
		bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MotionController__pf)
	{
		bpv__MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__HandMesh__pf)
	{
		bpv__HandMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ArcDirection__pf)
	{
		bpv__ArcDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ArcSpline__pf)
	{
		bpv__ArcSpline__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GrabSphere__pf)
	{
		bpv__GrabSphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ArcEndPoint__pf)
	{
		bpv__ArcEndPoint__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TeleportCylinder__pf)
	{
		bpv__TeleportCylinder__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Ring__pf)
	{
		bpv__Ring__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Arrow__pf)
	{
		bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RoomScaleMesh__pf)
	{
		bpv__RoomScaleMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SteamVRChaperone__pf)
	{
		bpv__SteamVRChaperone__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_MotionController_C__pf563933975::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/VirtualRealityBP/Blueprints/GripEnum.GripEnum")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(URightHand_AnimBP_C__pf558596347::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Ladder_C__pf563933975::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMotionControllerPawn_C__pf563933975::StaticClass());
	extern UClass* Z_Construct_UClass_UClimbActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UClimbActorInterface_C());
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__27 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__27);
	auto __Local__28 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_REMOVED_73604AB8494A4F511B55F0A4F1A85DC7"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__28);
	auto __Local__29 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__29);
	__Local__27->SplineParams.StartScale = FVector2D(4.000000, 4.000000);
	__Local__27->SplineParams.EndScale = FVector2D(4.000000, 4.000000);
	__Local__27->SplineBoundaryMax = 1.000000f;
	auto& __Local__30 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__27), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__30 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__27->OverrideMaterials = TArray<UMaterialInterface*> ();
	__Local__27->OverrideMaterials.Reserve(1);
	__Local__27->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed));
	__Local__27->Mobility = EComponentMobility::Type::Movable;
	static TWeakFieldPtr<FProperty> __Local__32{};
	const FProperty* __Local__31 = __Local__32.Get();
	if (nullptr == __Local__31)
	{
		__Local__31 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__31);
		__Local__32 = __Local__31;
	}
	(((FBoolProperty*)__Local__31)->SetPropertyValue_InContainer((__Local__27), true, 0));
	(((FBoolProperty*)__Local__31)->SetPropertyValue_InContainer((__Local__28), false, 0));
	__Local__29->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__29->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__29->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__33 = __Local__29->ComponentDelegateBindings[0];
	__Local__33.ComponentPropertyName = FName(TEXT("GrabSphere"));
	__Local__33.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__33.FunctionNameToBind = FName(TEXT("BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__BP_Ladder__pf = ((ABP_Ladder_C__pf563933975*)nullptr);
				__CurrentState = -1;
				break;
			}
		case 36:
			{
				__CurrentState = 37;
				break;
			}
		case 37:
			{
				b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf = Cast<UStaticMeshComponent>(b0l__K2Node_ComponentBoundEvent_OtherComp__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 40;
					break;
				}
			}
		case 38:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf))
				{
					bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf = b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf->IsSimulatingPhysics(FName(TEXT("None")));
				}
				if (!bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 39:
			{
				bpf__RumbleController__pf(0.800000);
				__CurrentState = 1;
				break;
			}
		case 40:
			{
				b0l__K2Node_DynamicCast_AsBP_Ladder__pf = Cast<ABP_Ladder_C__pf563933975>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsBP_Ladder__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 42;
					break;
				}
			}
		case 41:
			{
				bpv__BP_Ladder__pf = b0l__K2Node_DynamicCast_AsBP_Ladder__pf;
				__CurrentState = -1;
				break;
			}
		case 42:
			{
				bpv__BP_Ladder__pf = ((ABP_Ladder_C__pf563933975*)nullptr);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 31:
			{
				bpf__SetupRoomScaleOutline__pf();
			}
		case 32:
			{
				if(::IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->USceneComponent::SetVisibility(false, true);
				}
			}
		case 33:
			{
				if(::IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 34:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Hand__pf), static_cast<uint8>(EControllerHand::Left));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 35;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 35:
			{
				if(::IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->USceneComponent::SetWorldScale3D(FVector(1.000000,1.000000,-1.000000));
				}
				__CurrentState = -1;
				break;
			}
		case 48:
			{
				__CurrentState = 31;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 46);
	// optimized KCST_UnconditionalGoto
	bpv__UseTeleport__pf = b0l__K2Node_CustomEvent_On__pf;
	return; //KCST_EndOfThread
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf{};
	FVector bpfv__CallFunc_SelectVector_ReturnValue__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__StateStack.Push(10);
				__StateStack.Push(9);
				__StateStack.Push(8);
				__StateStack.Push(6);
			}
		case 3:
			{
				if(::IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->USceneComponent::SetVisibility(bpv__IsValidTeleportDestination__pf, true);
				}
			}
		case 4:
			{
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf, FVector(0.000000,0.000000,-200.000000));
				b0l__K2Node_MakeArray_Array__pf.SetNum(1, true);
				b0l__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery1;
				bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingleForObjects(this, b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, b0l__K2Node_MakeArray_Array__pf, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 5:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_SelectVector_ReturnValue__pf = UKismetMathLibrary::SelectVector(b0l__CallFunc_BreakHitResult_ImpactPoint__pf, b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf, b0l__CallFunc_BreakHitResult_bBlockingHit__pf);
				if(::IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_SelectVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__bLastFrameValidDestination__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpv__IsValidTeleportDestination__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__IsValidTeleportDestination__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpv__bLastFrameValidDestination__pf, bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanAND_ReturnValue__pf, bpfv__CallFunc_BooleanAND_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				bpf__RumbleController__pf(0.300000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpv__bLastFrameValidDestination__pf = b0l__CallFunc_TraceTeleportDestination_Success__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpf__UpdateArcSpline__pf(b0l__CallFunc_TraceTeleportDestination_Success__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_TracePoints__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpf__UpdateArcEndpoint__pf(b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf, b0l__CallFunc_TraceTeleportDestination_Success__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpf__TraceTeleportDestination__pf(/*out*/ b0l__CallFunc_TraceTeleportDestination_Success__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_TracePoints__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf);
			}
		case 12:
			{
				bpv__IsValidTeleportDestination__pf = b0l__CallFunc_TraceTeleportDestination_Success__pf;
				__CurrentState = 2;
				break;
			}
		case 13:
			{
				bpf__ClearArc__pf();
			}
		case 14:
			{
				if (!bpv__IsTeleporterActive__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 11;
				break;
			}
		case 15:
			{
				__StateStack.Push(27);
				__StateStack.Push(13);
			}
		case 16:
			{
				__StateStack.Push(25);
			}
		case 17:
			{
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(bpv__AttachedActor__pf, ((UObject*)nullptr));
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf, bpv__bWantsToGrip__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue_1__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 18:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator2;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpf__GetActorNearHand__pf(/*out*/ b0l__CallFunc_GetActorNearHand_NearestMesh__pf);
			}
		case 20:
			{
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_ObjectObject(b0l__CallFunc_GetActorNearHand_NearestMesh__pf, ((UObject*)nullptr));
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue_1__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 21:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator1;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				if (!bpv__bWantsToGrip__pf)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 23:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator2;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator0;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				if(::IsValid(bpv__HandMesh__pf))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = bpv__HandMesh__pf->USkeletalMeshComponent::GetAnimInstance();
				}
				b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf = Cast<URightHand_AnimBP_C__pf558596347>(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf))
				{
					b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf->bpv__GripState__pf = bpv__GripState__pf;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				bpf__UpdateRoomScaleOutline__pf();
			}
		case 28:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GripState__pf), static_cast<uint8>(E__GripEnum__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 30;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GripState__pf), static_cast<uint8>(E__GripEnum__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 30;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GripState__pf), static_cast<uint8>(E__GripEnum__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 29;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				if(::IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				if(::IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 45:
			{
				__CurrentState = 15;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_4(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 43);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::PlayHapticEffect(CastChecked<UHapticFeedbackEffect_Base>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed), bpv__Hand__pf, b0l__K2Node_CustomEvent_Intensity__pf, false);
	}
	return; //KCST_EndOfThread
}
void ABP_MotionController_C__pf563933975::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_MotionController__pf_1(48);
}
void ABP_MotionController_C__pf563933975::bpf__CE_TeleportUse__pf(bool bpp__On__pf)
{
	b0l__K2Node_CustomEvent_On__pf = bpp__On__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_2(46);
}
void ABP_MotionController_C__pf563933975::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_3(45);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__34;
	T__Local__34& bpp__SweepResult__pf = *const_cast<T__Local__34 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_0(36);
}
void ABP_MotionController_C__pf563933975::bpf__RumbleController__pf(float bpp__Intensity__pf)
{
	b0l__K2Node_CustomEvent_Intensity__pf = bpp__Intensity__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_4(43);
}
void ABP_MotionController_C__pf563933975::bpf__UserConstructionScript__pf()
{
	FName bpfv__CallFunc_GetEnumeratorName_ReturnValue__pf{};
	bpfv__CallFunc_GetEnumeratorName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorName(CastChecked<UEnum>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed), static_cast<uint8>(bpv__Hand__pf));
	if(::IsValid(bpv__MotionController__pf))
	{
		bpv__MotionController__pf->UMotionControllerComponent::SetTrackingMotionSource(bpfv__CallFunc_GetEnumeratorName_ReturnValue__pf);
	}
}
void ABP_MotionController_C__pf563933975::bpf__GetActorNearHand__pf(/*out*/ AActor*& bpp__NearestMesh__pf)
{
	float bpfv__NearestOverlap__pf{};
	AActor* bpfv__NearestOverlappingActor__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	TArray<AActor*> bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__NearestOverlap__pf = 10000.000000;
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				if(::IsValid(bpv__GrabSphere__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(12);
			}
		case 7:
			{
				if(::IsValid(bpv__GrabSphere__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(bpfv__CallFunc_Array_Get_Item__pf, UClimbActorInterface_C::StaticClass());
				bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf = UKismetSystemLibrary::DoesImplementInterface(bpfv__CallFunc_Array_Get_Item__pf, UPickupActorInterface_C::StaticClass());
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf, bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpv__GrabSphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__GrabSphere__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpfv__NearestOverlap__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpv__GrabSphere__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__NearestOverlappingActor__pf = bpfv__CallFunc_Array_Get_Item__pf;
			}
		case 10:
			{
				if(::IsValid(bpv__GrabSphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__GrabSphere__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__NearestOverlap__pf = bpfv__CallFunc_VSize_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpp__NearestMesh__pf = bpfv__NearestOverlappingActor__pf;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ReleaseActor__pf()
{
	TScriptInterface<IClimbActorInterface_C> bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf{};
	TScriptInterface<IPickupActorInterface_C> bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	USceneComponent* bpfv__CallFunc_GetAttachParent_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__bWantsToGrip__pf = false;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__AttachedActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__AttachedActor__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf = bpv__AttachedActor__pf->AActor::K2_GetRootComponent();
				}
				if(::IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_GetAttachParent_ReturnValue__pf = bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf->USceneComponent::GetAttachParent();
				}
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpfv__CallFunc_GetAttachParent_ReturnValue__pf, bpv__MotionController__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 4:
			{
				if ( bpv__AttachedActor__pf && bpv__AttachedActor__pf->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(bpv__AttachedActor__pf);
					void* IAddress = bpv__AttachedActor__pf->GetInterfaceAddress(UPickupActorInterface_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf))
				{
					IPickupActorInterface_C::Execute_bpf__Drop__pf(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.GetObject() );
				}
			}
		case 6:
			{
				bpf__RumbleController__pf(0.200000);
			}
		case 7:
			{
				bpv__AttachedActor__pf = ((AActor*)nullptr);
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__ClimbActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 9:
			{
				if ( bpv__ClimbActor__pf && bpv__ClimbActor__pf->GetClass()->ImplementsInterface(UClimbActorInterface_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf.SetObject(bpv__ClimbActor__pf);
					void* IAddress = bpv__ClimbActor__pf->GetInterfaceAddress(UClimbActorInterface_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf))
				{
					IClimbActorInterface_C::Execute_bpf__LetGo__pf(bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf.GetObject() , bpv__MotionController__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__GrabActor__pf()
{
	TScriptInterface<IClimbActorInterface_C> bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AActor* bpfv__CallFunc_GetActorNearHand_NearestMesh__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	TScriptInterface<IPickupActorInterface_C> bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__bWantsToGrip__pf = true;
			}
		case 2:
			{
				bpf__GetActorNearHand__pf(/*out*/ bpfv__CallFunc_GetActorNearHand_NearestMesh__pf);
			}
		case 3:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetActorNearHand_NearestMesh__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(bpfv__CallFunc_GetActorNearHand_NearestMesh__pf, UClimbActorInterface_C::StaticClass());
				if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 5:
			{
				bpv__ClimbActor__pf = bpfv__CallFunc_GetActorNearHand_NearestMesh__pf;
			}
		case 6:
			{
				if ( bpv__ClimbActor__pf && bpv__ClimbActor__pf->GetClass()->ImplementsInterface(UClimbActorInterface_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf.SetObject(bpv__ClimbActor__pf);
					void* IAddress = bpv__ClimbActor__pf->GetInterfaceAddress(UClimbActorInterface_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf))
				{
					IClimbActorInterface_C::Execute_bpf__Climb__pf(bpfv__K2Node_DynamicCast_AsClimb_Actor_Interface__pf.GetObject() , bpv__MotionController__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpv__AttachedActor__pf = bpfv__CallFunc_GetActorNearHand_NearestMesh__pf;
			}
		case 9:
			{
				if ( bpfv__CallFunc_GetActorNearHand_NearestMesh__pf && bpfv__CallFunc_GetActorNearHand_NearestMesh__pf->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(bpfv__CallFunc_GetActorNearHand_NearestMesh__pf);
					void* IAddress = bpfv__CallFunc_GetActorNearHand_NearestMesh__pf->GetInterfaceAddress(UPickupActorInterface_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf))
				{
					IPickupActorInterface_C::Execute_bpf__Pickup__pf(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.GetObject() , bpv__MotionController__pf);
				}
			}
		case 11:
			{
				bpf__RumbleController__pf(0.700000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ActivateTeleporter__pf()
{
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__UseTeleport__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if (!true)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__BP_Pawn__pf))
				{
					bpv__BP_Pawn__pf->bpf__CE_ChangePH__pf(false);
				}
			}
		case 4:
			{
				bpv__IsTeleporterActive__pf = true;
			}
		case 5:
			{
				if(::IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->USceneComponent::SetVisibility(true, true);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::SetVisibility(bpv__IsRoomScale__pf, false);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__MotionController__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__MotionController__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpv__InitialControllerRotation__pf = bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__DisableTeleporter__pf()
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsTeleporterActive__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpv__IsTeleporterActive__pf = false;
			}
		case 3:
			{
				if(::IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->USceneComponent::SetVisibility(false, true);
				}
			}
		case 4:
			{
				if(::IsValid(bpv__ArcEndPoint__pf))
				{
					bpv__ArcEndPoint__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::SetVisibility(false, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__TraceTeleportDestination__pf(/*out*/ bool& bpp__Success__pf, /*out*/ TArray<FVector>& bpp__TracePoints__pf, /*out*/ FVector& bpp__NavMeshLocation__pf, /*out*/ FVector& bpp__TraceLocation__pf)
{
	float bpfv__ProjectNavExtends__pf{};
	TArray<FVector> bpfv__UsedTracePoints__pf{};
	int32 bpfv__NrOfSegments__pf{};
	bool bpfv__HitSurface__pf{};
	FVector bpfv__CurrentTraceStart__pf(EForceInit::ForceInit);
	TArray<AActor*> bpfv__Temp_object_Variable__pf{};
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	UNavigationSystemV1* bpfv__CallFunc_GetNavigationSystem_ReturnValue__pf{};
	TArray<TEnumAsByte<EObjectTypeQuery> > bpfv__K2Node_MakeArray_Array__pf{};
	FHitResult bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutHit__pf{};
	TArray<FVector> bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutPathPositions__pf{};
	FVector bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutLastTraceDestination__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_ReturnValue__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_ProjectPointToNavigation_ProjectedLocation__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_ProjectPointToNavigation_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bpfv__NrOfSegments__pf = 15;
	bpfv__ProjectNavExtends__pf = 10.000000;
	if(::IsValid(bpv__ArcDirection__pf))
	{
		bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::GetForwardVector();
	}
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, bpv__TeleportLaunchVelocity__pf);
	if(::IsValid(bpv__ArcDirection__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpfv__K2Node_MakeArray_Array__pf.SetNum(1, true);
	bpfv__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery1;
	(bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutPathPositions__pf).Reset();
	bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_ReturnValue__pf = UGameplayStatics::Blueprint_PredictProjectilePath_ByObjectType(this, /*out*/ bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutHit__pf, /*out*/ bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutPathPositions__pf, /*out*/ bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutLastTraceDestination__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, true, 0.000000, bpfv__K2Node_MakeArray_Array__pf, false, bpfv__Temp_object_Variable__pf, EDrawDebugTrace::None, 0.000000, 30.000000, 2.000000, 0.000000);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__ProjectNavExtends__pf, bpfv__ProjectNavExtends__pf, bpfv__ProjectNavExtends__pf);
	bpfv__CallFunc_GetNavigationSystem_ReturnValue__pf = UNavigationSystemV1::GetNavigationSystem(this);
	UGameplayStatics::BreakHitResult(bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
	bpfv__CallFunc_K2_ProjectPointToNavigation_ReturnValue__pf = UNavigationSystemV1::K2_ProjectPointToNavigation(this, bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_K2_ProjectPointToNavigation_ProjectedLocation__pf, ((ANavigationData*)nullptr), ((UClass*)nullptr), bpfv__CallFunc_MakeVector_ReturnValue__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_ReturnValue__pf, bpfv__CallFunc_K2_ProjectPointToNavigation_ReturnValue__pf);
	bpp__Success__pf = bpfv__CallFunc_BooleanAND_ReturnValue__pf;
	bpp__TracePoints__pf = bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutPathPositions__pf;
	bpp__NavMeshLocation__pf = bpfv__CallFunc_K2_ProjectPointToNavigation_ProjectedLocation__pf;
	bpp__TraceLocation__pf = bpfv__CallFunc_BreakHitResult_Location__pf;
}
void ABP_MotionController_C__pf563933975::bpf__ClearArc__pf()
{
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	USplineMeshComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__SplineMeshes__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				FCustomThunkTemplates::Array_Get(bpv__SplineMeshes__pf, bpfv__Temp_int_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 4:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 2;
				break;
			}
		case 5:
			{
				FCustomThunkTemplates::Array_Clear(bpv__SplineMeshes__pf);
			}
		case 6:
			{
				if(::IsValid(bpv__ArcSpline__pf))
				{
					bpv__ArcSpline__pf->USplineComponent::ClearSplinePoints(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__UpdateArcSpline__pf(bool bpp__FoundValidLocation__pf, /*out*/ TArray<FVector>& bpp__SplinePoints__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FVector bpfv__CallFunc_Array_Get_Item__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	FVector bpfv__CallFunc_Array_Get_Item_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Array_Get_Item_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__FoundValidLocation__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpp__SplinePoints__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(19);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpp__SplinePoints__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpv__ArcSpline__pf))
				{
					bpv__ArcSpline__pf->USplineComponent::AddSplinePoint(bpfv__CallFunc_Array_Get_Item__pf, ESplineCoordinateSpace::Local, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Clear(bpp__SplinePoints__pf);
			}
		case 9:
			{
				if(::IsValid(bpv__ArcDirection__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpp__SplinePoints__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
			}
		case 10:
			{
				if(::IsValid(bpv__ArcDirection__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::GetForwardVector();
				}
				if(::IsValid(bpv__ArcDirection__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, 20.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_Array_Add_ReturnValue_1__pf = FCustomThunkTemplates::Array_Add(bpp__SplinePoints__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf);
				__CurrentState = 2;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpp__SplinePoints__pf);
				if(::IsValid(bpv__ArcSpline__pf))
				{
					bpv__ArcSpline__pf->USplineComponent::SetSplinePointType(bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, ESplinePointType::CurveClamped, true);
				}
			}
		case 12:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 13:
			{
				if(::IsValid(bpv__ArcSpline__pf))
				{
					bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf = bpv__ArcSpline__pf->USplineComponent::GetNumberOfSplinePoints();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf, 2);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				__StateStack.Push(18);
			}
		case 15:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-0")), true, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 16:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_2__pf = FCustomThunkTemplates::Array_Add(bpv__SplineMeshes__pf, bpfv__CallFunc_AddComponent_ReturnValue__pf);
			}
		case 17:
			{
				FCustomThunkTemplates::Array_Get(bpp__SplinePoints__pf, bpfv__Temp_int_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				if(::IsValid(bpv__ArcSpline__pf))
				{
					bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue__pf = bpv__ArcSpline__pf->USplineComponent::GetTangentAtSplinePoint(bpfv__Temp_int_Variable__pf, ESplineCoordinateSpace::Local);
				}
				FCustomThunkTemplates::Array_Get(bpp__SplinePoints__pf, bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_2__pf);
				if(::IsValid(bpv__ArcSpline__pf))
				{
					bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue_1__pf = bpv__ArcSpline__pf->USplineComponent::GetTangentAtSplinePoint(bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf, ESplineCoordinateSpace::Local);
				}
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->USplineMeshComponent::SetStartAndEnd(bpfv__CallFunc_Array_Get_Item_1__pf, bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue__pf, bpfv__CallFunc_Array_Get_Item_2__pf, bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue_1__pf, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 13;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__UpdateArcEndpoint__pf(FVector bpp__NewLocation__pf, bool bpp__ValidLocationFound__pf)
{
	FRotator bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf{};
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf{};
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpp__ValidLocationFound__pf, bpv__IsTeleporterActive__pf);
	if(::IsValid(bpv__ArcEndPoint__pf))
	{
		bpv__ArcEndPoint__pf->USceneComponent::SetVisibility(bpfv__CallFunc_BooleanAND_ReturnValue__pf, false);
	}
	if(::IsValid(bpv__ArcEndPoint__pf))
	{
		bpv__ArcEndPoint__pf->USceneComponent::K2_SetWorldLocation(bpp__NewLocation__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, true);
	}
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(bpv__TeleportRotation__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf);
	if(::IsValid(bpv__Arrow__pf))
	{
		bpv__Arrow__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_ComposeRotators_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult_1__pf, false);
	}
	if(::IsValid(bpv__RoomScaleMesh__pf))
	{
		bpv__RoomScaleMesh__pf->USceneComponent::K2_SetWorldRotation(bpv__TeleportRotation__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
	}
}
void ABP_MotionController_C__pf563933975::bpf__SetupRoomScaleOutline__pf()
{
	float bpfv__ChaperoneMeshHeight__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	TArray<FVector> bpfv__CallFunc_GetBounds_ReturnValue__pf{};
	FVector bpfv__CallFunc_MinimumAreaRectangle_OutRectCenter__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MinimumAreaRectangle_OutRectRotation__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf{};
	float bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanNAND_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__ChaperoneMeshHeight__pf = 70.000000;
			}
		case 2:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 1.000000);
				if(::IsValid(bpv__SteamVRChaperone__pf))
				{
					bpfv__CallFunc_GetBounds_ReturnValue__pf = bpv__SteamVRChaperone__pf->USteamVRChaperoneComponent::GetBounds();
				}
				UKismetMathLibrary::MinimumAreaRectangle(this, bpfv__CallFunc_GetBounds_ReturnValue__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_MinimumAreaRectangle_OutRectCenter__pf, /*out*/ bpfv__CallFunc_MinimumAreaRectangle_OutRectRotation__pf, /*out*/ bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf, /*out*/ bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf, false);
			}
		case 3:
			{
				bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NearlyEqual_FloatFloat(bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf, 100.000000, 0.010000);
				bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::NearlyEqual_FloatFloat(bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf, 100.000000, 0.010000);
				bpfv__CallFunc_BooleanNAND_ReturnValue__pf = UKismetMathLibrary::BooleanNAND(bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf);
				bpv__IsRoomScale__pf = bpfv__CallFunc_BooleanNAND_ReturnValue__pf;
			}
		case 4:
			{
				if (!bpv__IsRoomScale__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf, bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf, bpfv__ChaperoneMeshHeight__pf);
				if(::IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::SetWorldScale3D(bpfv__CallFunc_MakeVector_ReturnValue_1__pf);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MinimumAreaRectangle_OutRectRotation__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__UpdateRoomScaleOutline__pf()
{
	FRotator bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FVector bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__RoomScaleMesh__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue__pf = bpv__RoomScaleMesh__pf->IsVisible();
				}
				if (!bpfv__CallFunc_IsVisible_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Divide_VectorFloat(bpfv__CallFunc_MakeVector_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf = UKismetMathLibrary::LessLess_VectorRotator(bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf);
				if(::IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__GetTeleportDestination__pf(/*out*/ FVector& bpp__Location__pf, /*out*/ FRotator& bpp__Rotation__pf)
{
	FRotator bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	if(::IsValid(bpv__TeleportCylinder__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__TeleportCylinder__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
	bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpv__TeleportRotation__pf);
	bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf);
	bpp__Location__pf = bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf;
	bpp__Rotation__pf = bpv__TeleportRotation__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_MotionController_C__pf563933975::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right.MannequinHand_Right 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_ArcEndpoint.M_ArcEndpoint 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_TeleportCylinderPreview.MI_TeleportCylinderPreview 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/SM_FatCylinder.SM_FatCylinder 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeaconDirection.BeaconDirection 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_ChaperoneOutline.MI_ChaperoneOutline 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  HapticFeedbackEffect_Curve /Game/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{57, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.EControllerHand 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_MotionController_C__pf563933975::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{33, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{43, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineComponent 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{51, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/SteamVR.SteamVRChaperoneComponent 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{20, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{54, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{59, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Assets/Ladder.Ladder 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right_Skeleton.MannequinHand_Right_Skeleton 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/VirtualReality/Mannequin/Animations/RightGrip_BS.RightGrip_BS 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP.RightHand_AnimBP_C 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_Ladder.BP_Ladder_C 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/Interfaces/ClimbActorInterface.ClimbActorInterface_C 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/Interfaces/PickupActorInterface.PickupActorInterface_C 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/VirtualRealityBP/Blueprints/GripEnum.GripEnum 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_MotionController_C__pf563933975
{
	FRegisterHelper__ABP_MotionController_C__pf563933975()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/VirtualRealityBP/Blueprints/BP_MotionController"), &ABP_MotionController_C__pf563933975::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_MotionController_C__pf563933975 Instance;
};
FRegisterHelper__ABP_MotionController_C__pf563933975 FRegisterHelper__ABP_MotionController_C__pf563933975::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
