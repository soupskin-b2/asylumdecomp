// LaunchEngineLoop.cpp: 190 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE for UEngine: the class's table of script natives (name, member pointer). */
typedef void (UEngine::*UEngineNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UEngineNativeInfo
{
	const TCHAR* Name;
	UEngineNative Pointer;
};

#pragma pack(pop)
extern UEngineNativeInfo g_025e35c0[];
// @baa 0x00ca7ea0
/* IMPLEMENT_NATIVE_HANDLER for UEngine: the native registered under this name, or NULL. */
UEngineNative* sub_00ca7ea0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e35c0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e35c0[NativeIndex].Name) == 0)
		{
			return &g_025e35c0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UGameEngine: the class's table of script natives (name, member pointer). */
typedef void (UGameEngine::*UGameEngineNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGameEngineNativeInfo
{
	const TCHAR* Name;
	UGameEngineNative Pointer;
};

#pragma pack(pop)
extern UGameEngineNativeInfo g_025e3898[];
// @baa 0x00ca7f10
/* IMPLEMENT_NATIVE_HANDLER for UGameEngine: the native registered under this name, or NULL. */
UGameEngineNative* sub_00ca7f10(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e3898[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e3898[NativeIndex].Name) == 0)
		{
			return &g_025e3898[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AActor: the class's table of script natives (name, member pointer). */
typedef void (AActor::*AActorNative)(FFrame& TheStack, RESULT_DECL);

struct AActorNativeInfo
{
	const TCHAR* Name;
	AActorNative Pointer;
};

extern AActorNativeInfo g_025e0510[];
// @baa 0x00ca7f80
/* IMPLEMENT_NATIVE_HANDLER for AActor: the native registered under this name, or NULL. */
AActorNative* sub_00ca7f80(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0510[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0510[NativeIndex].Name) == 0)
		{
			return &g_025e0510[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

typedef Native (*NativeLookup)(const TCHAR*);

extern NativeLookup GNativeLookupFuncs[];
Native FindEngineUEngineNative(const TCHAR* NativeName);
Native FindEngineUGameEngineNative(const TCHAR* NativeName);
Native FindEngineAActorNative(const TCHAR* NativeName);
Native FindEngineUActorComponentNative(const TCHAR* NativeName);
Native FindEngineAAnimatedCameraNative(const TCHAR* NativeName);
Native FindEngineUAudioComponentNative(const TCHAR* NativeName);
Native FindEngineACameraNative(const TCHAR* NativeName);
Native FindEngineUCameraAnimInstNative(const TCHAR* NativeName);
Native FindEngineUCameraModifierNative(const TCHAR* NativeName);
Native FindEngineUCanvasNative(const TCHAR* NativeName);
Native FindEngineAControllerNative(const TCHAR* NativeName);
Native FindEngineACoverGroupNative(const TCHAR* NativeName);
Native FindEngineACoverLinkNative(const TCHAR* NativeName);
Native FindEngineACoverSlotMarkerNative(const TCHAR* NativeName);
Native FindEngineUCylinderComponentNative(const TCHAR* NativeName);
Native FindEngineADroppedPickupNative(const TCHAR* NativeName);
Native FindEngineUDynamicLightEnvironmentComponentNative(const TCHAR* NativeName);
Native FindEngineAEmitterNative(const TCHAR* NativeName);
Native FindEngineAEmitterPoolNative(const TCHAR* NativeName);
Native FindEngineUFaceFXAssetNative(const TCHAR* NativeName);
Native FindEngineAFileWriterNative(const TCHAR* NativeName);
Native FindEngineUFontNative(const TCHAR* NativeName);
Native FindEngineAGameInfoNative(const TCHAR* NativeName);
Native FindEngineAGameReplicationInfoNative(const TCHAR* NativeName);
Native FindEngineUGameViewportClientNative(const TCHAR* NativeName);
Native FindEngineUHeightFogComponentNative(const TCHAR* NativeName);
Native FindEngineAHUDNative(const TCHAR* NativeName);
Native FindEngineUIniLocPatcherNative(const TCHAR* NativeName);
Native FindEngineAInterpActorNative(const TCHAR* NativeName);
Native FindEngineAInventoryManagerNative(const TCHAR* NativeName);
Native FindEngineULightComponentNative(const TCHAR* NativeName);
Native FindEngineULightEnvironmentComponentNative(const TCHAR* NativeName);
Native FindEngineULocalPlayerNative(const TCHAR* NativeName);
Native FindEngineUMaterialInterfaceNative(const TCHAR* NativeName);
Native FindEngineUMeshComponentNative(const TCHAR* NativeName);
Native FindEngineUMultiFontNative(const TCHAR* NativeName);
Native FindEngineANavigationPointNative(const TCHAR* NativeName);
Native FindEngineUOnlineProfileSettingsNative(const TCHAR* NativeName);
Native FindEngineUOnlineStatsNative(const TCHAR* NativeName);
Native FindEngineUOnlineStatsReadNative(const TCHAR* NativeName);
Native FindEngineUOnlineStatsWriteNative(const TCHAR* NativeName);
Native FindEngineUOnlineSubsystemNative(const TCHAR* NativeName);
Native FindEngineAPawnNative(const TCHAR* NativeName);
Native FindEngineAPhysicsVolumeNative(const TCHAR* NativeName);
Native FindEngineUPlayerNative(const TCHAR* NativeName);
Native FindEngineAPlayerControllerNative(const TCHAR* NativeName);
Native FindEngineAPlayerReplicationInfoNative(const TCHAR* NativeName);
Native FindEngineUPointLightComponentNative(const TCHAR* NativeName);
Native FindEngineAPortalMarkerNative(const TCHAR* NativeName);
Native FindEngineAPortalTeleporterNative(const TCHAR* NativeName);
Native FindEngineUPostProcessChainNative(const TCHAR* NativeName);
Native FindEngineUPrimitiveComponentNative(const TCHAR* NativeName);
Native FindEngineAProjectileNative(const TCHAR* NativeName);
Native FindEngineUReachSpecNative(const TCHAR* NativeName);
Native FindEngineARouteNative(const TCHAR* NativeName);
Native FindEngineUSceneCapture2DComponentNative(const TCHAR* NativeName);
Native FindEngineUSceneCaptureComponentNative(const TCHAR* NativeName);
Native FindEngineUSceneCapturePortalComponentNative(const TCHAR* NativeName);
Native FindEngineUSettingsNative(const TCHAR* NativeName);
Native FindEngineUSkeletalMeshComponentNative(const TCHAR* NativeName);
Native FindEngineUSoundCueNative(const TCHAR* NativeName);
Native FindEngineUStaticMeshComponentNative(const TCHAR* NativeName);
Native FindEngineUSurfaceNative(const TCHAR* NativeName);
Native FindEngineATeamInfoNative(const TCHAR* NativeName);
Native FindEngineATeleporterNative(const TCHAR* NativeName);
Native FindEngineUTexture2DNative(const TCHAR* NativeName);
Native FindEngineUTexture2DCompositeNative(const TCHAR* NativeName);
Native FindEngineUTexture2DDynamicNative(const TCHAR* NativeName);
Native FindEngineUTextureFlipBookNative(const TCHAR* NativeName);
Native FindEngineUTextureMovieNative(const TCHAR* NativeName);
Native FindEngineUTextureRenderTarget2DNative(const TCHAR* NativeName);
Native FindEngineAVolumeNative(const TCHAR* NativeName);
Native FindEngineAVolumePathNodeNative(const TCHAR* NativeName);
Native FindEngineAWeaponNative(const TCHAR* NativeName);
Native FindEngineAWorldInfoNative(const TCHAR* NativeName);
Native FindEngineUPath_AvoidInEscapableNodesNative(const TCHAR* NativeName);
Native FindEngineUAnimNodeNative(const TCHAR* NativeName);
Native FindEngineUAnimNodeAimOffsetNative(const TCHAR* NativeName);
Native FindEngineUAnimNodeBlendNative(const TCHAR* NativeName);
Native FindEngineUAnimNodeBlendBaseNative(const TCHAR* NativeName);
Native FindEngineUAnimNodeBlendListNative(const TCHAR* NativeName);
Native FindEngineUAnimNodeBlendMultiBoneNative(const TCHAR* NativeName);
Native FindEngineUAnimNodeCrossfaderNative(const TCHAR* NativeName);
Native FindEngineUAnimNodePlayCustomAnimNative(const TCHAR* NativeName);
Native FindEngineUAnimNodeSequenceNative(const TCHAR* NativeName);
Native FindEngineUAnimNodeSequenceBlendByAimNative(const TCHAR* NativeName);
Native FindEngineUAnimNodeSlotNative(const TCHAR* NativeName);
Native FindEngineUAnimNodeSynchNative(const TCHAR* NativeName);
Native FindEngineUAnimSetNative(const TCHAR* NativeName);
Native FindEngineUAnimTreeNative(const TCHAR* NativeName);
Native FindEngineACrowdAgentNative(const TCHAR* NativeName);
Native FindEngineUMorphNodePoseNative(const TCHAR* NativeName);
Native FindEngineUMorphNodeWeightNative(const TCHAR* NativeName);
Native FindEngineUMorphTargetSetNative(const TCHAR* NativeName);
Native FindEngineUSkelControlBaseNative(const TCHAR* NativeName);
Native FindEngineUSkelControlLookAtNative(const TCHAR* NativeName);
Native FindEngineASkeletalMeshActorMATNative(const TCHAR* NativeName);
Native FindEngineUDecalComponentNative(const TCHAR* NativeName);
Native FindEngineADecalManagerNative(const TCHAR* NativeName);
Native FindEngineUFogVolumeDensityComponentNative(const TCHAR* NativeName);
Native FindEngineAApexDestructibleActorNative(const TCHAR* NativeName);
Native FindEngineUFracturedBaseComponentNative(const TCHAR* NativeName);
Native FindEngineAFracturedStaticMeshActorNative(const TCHAR* NativeName);
Native FindEngineUFracturedStaticMeshComponentNative(const TCHAR* NativeName);
Native FindEngineAFracturedStaticMeshPartNative(const TCHAR* NativeName);
Native FindEngineAFractureManagerNative(const TCHAR* NativeName);
Native FindEngineUMaterialInstanceNative(const TCHAR* NativeName);
Native FindEngineUMaterialInstanceConstantNative(const TCHAR* NativeName);
Native FindEngineUMaterialInstanceTimeVaryingNative(const TCHAR* NativeName);
Native FindEngineUParticleSystemNative(const TCHAR* NativeName);
Native FindEngineUParticleSystemComponentNative(const TCHAR* NativeName);
Native FindEngineAPhysXEmitterSpawnableNative(const TCHAR* NativeName);
Native FindEngineAKActorNative(const TCHAR* NativeName);
Native FindEngineAKActorSpawnableNative(const TCHAR* NativeName);
Native FindEngineUPhysicalMaterialNative(const TCHAR* NativeName);
Native FindEngineUPhysicsAssetNative(const TCHAR* NativeName);
Native FindEngineUPhysicsAssetInstanceNative(const TCHAR* NativeName);
Native FindEngineURB_BodyInstanceNative(const TCHAR* NativeName);
Native FindEngineARB_ConstraintActorNative(const TCHAR* NativeName);
Native FindEngineURB_ConstraintInstanceNative(const TCHAR* NativeName);
Native FindEngineURB_HandleNative(const TCHAR* NativeName);
Native FindEngineARB_LineImpulseActorNative(const TCHAR* NativeName);
Native FindEngineURB_RadialImpulseComponentNative(const TCHAR* NativeName);
Native FindEngineURB_SpringNative(const TCHAR* NativeName);
Native FindEngineURPhysOnContactHandlerNative(const TCHAR* NativeName);
Native FindEngineANxCylindricalForceFieldCapsuleNative(const TCHAR* NativeName);
Native FindEngineANxForceFieldNative(const TCHAR* NativeName);
Native FindEngineANxForceFieldGenericNative(const TCHAR* NativeName);
Native FindEngineANxForceFieldRadialNative(const TCHAR* NativeName);
Native FindEngineANxGenericForceFieldBoxNative(const TCHAR* NativeName);
Native FindEngineUPrefabSequenceNative(const TCHAR* NativeName);
Native FindEngineUSeqAct_CrowdSpawnerNative(const TCHAR* NativeName);
Native FindEngineUSeqAct_GetMatInstVectorParamNative(const TCHAR* NativeName);
Native FindEngineUSeqAct_InterpNative(const TCHAR* NativeName);
Native FindEngineUSeqAct_LatentNative(const TCHAR* NativeName);
Native FindEngineUSeqEvent_TouchNative(const TCHAR* NativeName);
Native FindEngineUSequenceNative(const TCHAR* NativeName);
Native FindEngineUSequenceEventNative(const TCHAR* NativeName);
Native FindEngineUSequenceObjectNative(const TCHAR* NativeName);
Native FindEngineUSequenceOpNative(const TCHAR* NativeName);
Native FindEngineUSoundNodeRandomNative(const TCHAR* NativeName);
Native FindEngineATerrainNative(const TCHAR* NativeName);
Native FindEngineUTerrainLayerSetupNative(const TCHAR* NativeName);
Native FindEngineUDataStoreClientNative(const TCHAR* NativeName);
Native FindEngineUInputNative(const TCHAR* NativeName);
Native FindEngineUInteractionNative(const TCHAR* NativeName);
Native FindEngineUUIInputConfigurationNative(const TCHAR* NativeName);
Native FindEngineUUIInteractionNative(const TCHAR* NativeName);
Native FindEngineUUIRootNative(const TCHAR* NativeName);
Native FindEngineUUISceneClientNative(const TCHAR* NativeName);
Native FindEngineUUIStyleNative(const TCHAR* NativeName);
Native FindEngineUGameUISceneClientNative(const TCHAR* NativeName);
Native FindEngineUSessionSettingsProviderNative(const TCHAR* NativeName);
Native FindEngineUUIDataProviderNative(const TCHAR* NativeName);
Native FindEngineUUIDataProvider_PlayerAchievementsNative(const TCHAR* NativeName);
Native FindEngineUUIDataStoreNative(const TCHAR* NativeName);
Native FindEngineUUIDataStore_InputAliasNative(const TCHAR* NativeName);
Native FindEngineUUIDataStore_OnlinePlayerDataNative(const TCHAR* NativeName);
Native FindEngineUUIDynamicDataProviderNative(const TCHAR* NativeName);
Native FindEngineUUIObjectNative(const TCHAR* NativeName);
Native FindEngineUUISceneNative(const TCHAR* NativeName);
Native FindEngineUUIScreenObjectNative(const TCHAR* NativeName);
Native FindEngineUUISkinNative(const TCHAR* NativeName);
Native FindEngineUUIStyle_ComboNative(const TCHAR* NativeName);
Native FindEngineUFluidSurfaceComponentNative(const TCHAR* NativeName);
Native FindEngineULensFlareComponentNative(const TCHAR* NativeName);
Native FindEngineALensFlareSourceNative(const TCHAR* NativeName);
Native FindEngineUAudioDeviceNative(const TCHAR* NativeName);
// @baa 0x00cdd370
void AutoInitializeRegistrantsEngine(INT& Lookup)
{
	UEngine::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUEngineNative;
	UGameEngine::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUGameEngineNative;
	AActor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAActorNative;
	UActorChannel::StaticClass();
	UActorComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUActorComponentNative;
	UActorFactory::StaticClass();
	UActorFactoryAI::StaticClass();
	UActorFactoryAmbientSound::StaticClass();
	UActorFactoryAmbientSoundMovable::StaticClass();
	UActorFactoryAmbientSoundSimple::StaticClass();
	UActorFactoryArchetype::StaticClass();
	UActorFactoryCoverLink::StaticClass();
	UActorFactoryDynamicSM::StaticClass();
	UActorFactoryEmitter::StaticClass();
	UActorFactoryFracturedStaticMesh::StaticClass();
	UActorFactoryLensFlare::StaticClass();
	UActorFactoryLight::StaticClass();
	UActorFactoryMover::StaticClass();
	UActorFactoryPathNode::StaticClass();
	UActorFactoryPhysicsAsset::StaticClass();
	UActorFactoryPlayerStart::StaticClass();
	UActorFactoryRigidBody::StaticClass();
	UActorFactorySkeletalMesh::StaticClass();
	UActorFactorySpotLight::StaticClass();
	UActorFactoryStaticMesh::StaticClass();
	UActorFactoryTrigger::StaticClass();
	UActorFactoryVehicle::StaticClass();
	UAdvancedReachSpec::StaticClass();
	AAirNode::StaticClass();
	UAmbientOcclusionEffect::StaticClass();
	AAnimatedCamera::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAAnimatedCameraNative;
	UArrowComponent::StaticClass();
	UAudioComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAudioComponentNative;
	AAutoLadder::StaticClass();
	ABlockingVolume::StaticClass();
	UBloomEffect::StaticClass();
	UBookMark::StaticClass();
	ABrush::StaticClass();
	UBrushComponent::StaticClass();
	ACamera::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineACameraNative;
	ACameraActor::StaticClass();
	UCameraAnim::StaticClass();
	UCameraAnimInst::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUCameraAnimInstNative;
	UCameraConeComponent::StaticClass();
	UCameraModifier::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUCameraModifierNative;
	UCanvas::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUCanvasNative;
	UCeilingReachSpec::StaticClass();
	UChannel::StaticClass();
	UChannelDownload::StaticClass();
	UCheatManager::StaticClass();
	UChildConnection::StaticClass();
	UClient::StaticClass();
	AClipMarker::StaticClass();
	UClipPadEntry::StaticClass();
	UCodecMovie::StaticClass();
	UCodecMovieBink::StaticClass();
	UCodecMovieFallback::StaticClass();
	UControlChannel::StaticClass();
	AController::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAControllerNative;
	ACoverGroup::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineACoverGroupNative;
	ACoverLink::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineACoverLinkNative;
	UCoverSlipReachSpec::StaticClass();
	ACoverSlotMarker::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineACoverSlotMarkerNative;
	ACrowdReplicationActor::StaticClass();
	ACullDistanceVolume::StaticClass();
	UCurveEdPresetCurve::StaticClass();
	UCustomPropertyItemHandler::StaticClass();
	UCylinderComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUCylinderComponentNative;
	UDamageType::StaticClass();
	ADebugCameraController::StaticClass();
	UDebugManager::StaticClass();
	ADefaultPhysicsVolume::StaticClass();
	UDemoPlayPendingLevel::StaticClass();
	UDemoRecConnection::StaticClass();
	UDemoRecDriver::StaticClass();
	UDestructibleDamageParameters::StaticClass();
	ADirectionalLight::StaticClass();
	UDirectionalLightComponent::StaticClass();
	ADirectionalLightToggleable::StaticClass();
	UDistributionFloatConstant::StaticClass();
	UDistributionFloatConstantCurve::StaticClass();
	UDistributionFloatParameterBase::StaticClass();
	UDistributionFloatUniform::StaticClass();
	UDistributionFloatUniformCurve::StaticClass();
	UDistributionVectorConstant::StaticClass();
	UDistributionVectorConstantCurve::StaticClass();
	UDistributionVectorParameterBase::StaticClass();
	UDistributionVectorUniform::StaticClass();
	UDistributionVectorUniformCurve::StaticClass();
	UDOFAndBloomEffect::StaticClass();
	UDOFBloomMotionBlurEffect::StaticClass();
	UDOFEffect::StaticClass();
	ADoorMarker::StaticClass();
	UDownload::StaticClass();
	UDrawBoxComponent::StaticClass();
	UDrawCapsuleComponent::StaticClass();
	UDrawConeComponent::StaticClass();
	UDrawCylinderComponent::StaticClass();
	UDrawFrustumComponent::StaticClass();
	UDrawLightConeComponent::StaticClass();
	UDrawLightRadiusComponent::StaticClass();
	UDrawQuadComponent::StaticClass();
	UDrawSoundRadiusComponent::StaticClass();
	UDrawSphereComponent::StaticClass();
	ADroppedPickup::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineADroppedPickupNative;
	ADynamicAnchor::StaticClass();
	ADynamicBlockingVolume::StaticClass();
	ADynamicCameraActor::StaticClass();
	UDynamicLightEnvironmentComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUDynamicLightEnvironmentComponentNative;
	ADynamicSMActor::StaticClass();
	UEdCoordSystem::StaticClass();
	AEmitter::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAEmitterNative;
	AEmitterPool::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAEmitterPoolNative;
	UFaceFXAnimSet::StaticClass();
	UFaceFXAsset::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUFaceFXAssetNative;
	UFileChannel::StaticClass();
	AFileLog::StaticClass();
	AFileWriter::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAFileWriterNative;
	UFloorToCeilingReachSpec::StaticClass();
	UFont::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUFontNative;
	UFontImportOptions::StaticClass();
	UForcedReachSpec::StaticClass();
	UForceFeedbackManager::StaticClass();
	UForceFeedbackWaveform::StaticClass();
	UFracturedStaticMesh::StaticClass();
	AGameInfo::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAGameInfoNative;
	AGameReplicationInfo::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAGameReplicationInfoNative;
	UGameViewportClient::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUGameViewportClientNative;
	AGravityVolume::StaticClass();
	UGuidCache::StaticClass();
	UHeightFogComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUHeightFogComponentNative;
	AHUD::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAHUDNative;
	AInfo::StaticClass();
	UIniLocPatcher::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUIniLocPatcherNative;
	AInternetInfo::StaticClass();
	AInterpActor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAInterpActorNative;
	UInterpCurveEdSetup::StaticClass();
	UInterpTrack::StaticClass();
	AInventory::StaticClass();
	AInventoryManager::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAInventoryManagerNative;
	AKeypoint::StaticClass();
	UKillZDamageType::StaticClass();
	UKMeshProps::StaticClass();
	ALadder::StaticClass();
	ULadderReachSpec::StaticClass();
	ALadderVolume::StaticClass();
	ULevel::StaticClass();
	ULevelBase::StaticClass();
	ULevelStreaming::StaticClass();
	ULevelStreamingDistance::StaticClass();
	ULevelStreamingKismet::StaticClass();
	ULevelStreamingPersistent::StaticClass();
	ALevelStreamingVolume::StaticClass();
	ALiftCenter::StaticClass();
	ALiftExit::StaticClass();
	ALight::StaticClass();
	ULightComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineULightComponentNative;
	ULightEnvironmentComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineULightEnvironmentComponentNative;
	ULightFunction::StaticClass();
	ULightMapTexture2D::StaticClass();
	ALightVolume::StaticClass();
	ULineBatchComponent::StaticClass();
	ULocalPlayer::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineULocalPlayerNative;
	UMacroReachSpec::StaticClass();
	AMacroReachSpecInfo::StaticClass();
	AMantleMarker::StaticClass();
	UMantleReachSpec::StaticClass();
	UMapInfo::StaticClass();
	UMaterial::StaticClass();
	UMaterialEffect::StaticClass();
	UMaterialExpression::StaticClass();
	AMaterialInstanceActor::StaticClass();
	UMaterialInterface::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUMaterialInterfaceNative;
	AMatineeActor::StaticClass();
	UMeshComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUMeshComponentNative;
	UMeshComponentFactory::StaticClass();
	UModel::StaticClass();
	UModelComponent::StaticClass();
	UMotionBlurEffect::StaticClass();
	UMultiFont::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUMultiFontNative;
	UMusicTrackDataStructures::StaticClass();
	AMutator::StaticClass();
	ANavigationPoint::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineANavigationPointNative;
	UNetConnection::StaticClass();
	UNetDriver::StaticClass();
	UNetPendingLevel::StaticClass();
	ANote::StaticClass();
	AObjective::StaticClass();
	UObjectReferencer::StaticClass();
	UOnlineGameplayEvents::StaticClass();
	UOnlineGameSearch::StaticClass();
	UOnlineGameSettings::StaticClass();
	UOnlinePlaylistManager::StaticClass();
	UOnlineProfileSettings::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUOnlineProfileSettingsNative;
	UOnlineStats::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUOnlineStatsNative;
	UOnlineStatsRead::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUOnlineStatsReadNative;
	UOnlineStatsWrite::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUOnlineStatsWriteNative;
	UOnlineSubsystem::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUOnlineSubsystemNative;
	UPackageMapLevel::StaticClass();
	UPackageMapSeekFree::StaticClass();
	APathBlockingVolume::StaticClass();
	APathNode::StaticClass();
	APawn::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAPawnNative;
	UPendingLevel::StaticClass();
	APhysicsVolume::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAPhysicsVolumeNative;
	APickupFactory::StaticClass();
	UPlayer::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUPlayerNative;
	APlayerController::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAPlayerControllerNative;
	APlayerReplicationInfo::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAPlayerReplicationInfoNative;
	APlayerStart::StaticClass();
	APointLight::StaticClass();
	UPointLightComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUPointLightComponentNative;
	APointLightMovable::StaticClass();
	APointLightToggleable::StaticClass();
	APolyMarker::StaticClass();
	UPolys::StaticClass();
	APortalMarker::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAPortalMarkerNative;
	APortalTeleporter::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAPortalTeleporterNative;
	APortalVolume::StaticClass();
	UPostProcessChain::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUPostProcessChainNative;
	UPostProcessEffect::StaticClass();
	APostProcessVolume::StaticClass();
	APotentialClimbWatcher::StaticClass();
	UPrimitiveComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUPrimitiveComponentNative;
	UPrimitiveComponentFactory::StaticClass();
	AProjectile::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAProjectileNative;
	UProscribedReachSpec::StaticClass();
	UReachSpec::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUReachSpecNative;
	AReplicationInfo::StaticClass();
	AReverbVolume::StaticClass();
	ARoute::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineARouteNative;
	USavedMove::StaticClass();
	USaveGameSummary::StaticClass();
	ASceneCapture2DActor::StaticClass();
	USceneCapture2DComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSceneCapture2DComponentNative;
	ASceneCaptureActor::StaticClass();
	USceneCaptureComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSceneCaptureComponentNative;
	ASceneCaptureCubeMapActor::StaticClass();
	USceneCaptureCubeMapComponent::StaticClass();
	ASceneCapturePortalActor::StaticClass();
	USceneCapturePortalComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSceneCapturePortalComponentNative;
	ASceneCaptureReflectActor::StaticClass();
	USceneCaptureReflectComponent::StaticClass();
	AScout::StaticClass();
	UScriptedTexture::StaticClass();
	UServerCommandlet::StaticClass();
	USettings::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSettingsNative;
	UShaderCache::StaticClass();
	UShadowMap1D::StaticClass();
	UShadowMap2D::StaticClass();
	UShadowMapTexture2D::StaticClass();
	USkeletalMesh::StaticClass();
	USkeletalMeshComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSkeletalMeshComponentNative;
	USkeletalMeshSocket::StaticClass();
	ASkyLight::StaticClass();
	USkyLightComponent::StaticClass();
	ASkyLightToggleable::StaticClass();
	USlotToSlotReachSpec::StaticClass();
	USmokeTestCommandlet::StaticClass();
	USoundCue::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSoundCueNative;
	USpeechRecognition::StaticClass();
	USphericalHarmonicLightComponent::StaticClass();
	ASpotLight::StaticClass();
	USpotLightComponent::StaticClass();
	ASpotLightMovable::StaticClass();
	ASpotLightToggleable::StaticClass();
	USpriteComponent::StaticClass();
	AStaticLightCollectionActor::StaticClass();
	UStaticMesh::StaticClass();
	AStaticMeshActor::StaticClass();
	AStaticMeshActorBase::StaticClass();
	AStaticMeshActorBasedOnExtremeContent::StaticClass();
	AStaticMeshCollectionActor::StaticClass();
	UStaticMeshComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUStaticMeshComponentNative;
	UStaticMeshComponentFactory::StaticClass();
	USurface::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSurfaceNative;
	USwatTurnReachSpec::StaticClass();
	ATeamInfo::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineATeamInfoNative;
	ATeleporter::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineATeleporterNative;
	UTeleportReachSpec::StaticClass();
	UTexture::StaticClass();
	UTexture2D::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUTexture2DNative;
	UTexture2DComposite::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUTexture2DCompositeNative;
	UTexture2DDynamic::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUTexture2DDynamicNative;
	UTextureCube::StaticClass();
	UTextureFlipBook::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUTextureFlipBookNative;
	UTextureMovie::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUTextureMovieNative;
	UTextureRenderTarget::StaticClass();
	UTextureRenderTarget2D::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUTextureRenderTarget2DNative;
	UTextureRenderTargetCube::StaticClass();
	ATrigger::StaticClass();
	ATriggerVolume::StaticClass();
	UUberPostProcessEffect::StaticClass();
	AVehicle::StaticClass();
	UVoiceChannel::StaticClass();
	AVolume::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAVolumeNative;
	AVolumePathNode::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAVolumePathNodeNative;
	UWallTransReachSpec::StaticClass();
	AWaterVolume::StaticClass();
	UWaveFormBase::StaticClass();
	AWeapon::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAWeaponNative;
	UWindDirectionalSourceComponent::StaticClass();
	UWorld::StaticClass();
	AWorldInfo::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAWorldInfoNative;
	AZoneInfo::StaticClass();
	AAIController::StaticClass();
	UCoverGroupRenderingComponent::StaticClass();
	UCoverMeshComponent::StaticClass();
	UGoal_AtActor::StaticClass();
	UGoal_Null::StaticClass();
	UPath_AlongLine::StaticClass();
	UPath_AvoidInEscapableNodes::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUPath_AvoidInEscapableNodesNative;
	UPath_MinDistBetweenSpecsOfType::StaticClass();
	UPath_TowardGoal::StaticClass();
	UPath_TowardPoint::StaticClass();
	UPath_WithinDistanceEnvelope::StaticClass();
	UPath_WithinTraversalDist::StaticClass();
	UPathConstraint::StaticClass();
	UPathGoalEvaluator::StaticClass();
	UPathRenderingComponent::StaticClass();
	URouteRenderingComponent::StaticClass();
	UAnimationCompressionAlgorithm::StaticClass();
	UAnimationCompressionAlgorithm_AutoRemoveLinearKeys::StaticClass();
	UAnimationCompressionAlgorithm_BitwiseCompressOnly::StaticClass();
	UAnimationCompressionAlgorithm_RemoveEverySecondKey::StaticClass();
	UAnimationCompressionAlgorithm_RemoveLinearKeys::StaticClass();
	UAnimationCompressionAlgorithm_RemoveTrivialKeys::StaticClass();
	UAnimationCompressionAlgorithm_RevertToRaw::StaticClass();
	UAnimNode::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodeNative;
	UAnimNodeAdditiveBlending::StaticClass();
	UAnimNodeAimOffset::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodeAimOffsetNative;
	UAnimNodeBlend::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodeBlendNative;
	UAnimNodeBlendBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodeBlendBaseNative;
	UAnimNodeBlendByBase::StaticClass();
	UAnimNodeBlendByPhysics::StaticClass();
	UAnimNodeBlendByPosture::StaticClass();
	UAnimNodeBlendBySpeed::StaticClass();
	UAnimNodeBlendDirectional::StaticClass();
	UAnimNodeBlendList::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodeBlendListNative;
	UAnimNodeBlendMultiBone::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodeBlendMultiBoneNative;
	UAnimNodeBlendPerBone::StaticClass();
	UAnimNodeCrossfader::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodeCrossfaderNative;
	UAnimNodeMirror::StaticClass();
	UAnimNodePlayCustomAnim::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodePlayCustomAnimNative;
	UAnimNodeRandom::StaticClass();
	UAnimNodeScalePlayRate::StaticClass();
	UAnimNodeScaleRateBySpeed::StaticClass();
	UAnimNodeSequence::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodeSequenceNative;
	UAnimNodeSequenceBlendBase::StaticClass();
	UAnimNodeSequenceBlendByAim::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodeSequenceBlendByAimNative;
	UAnimNodeSlot::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodeSlotNative;
	UAnimNodeSynch::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimNodeSynchNative;
	UAnimNotify::StaticClass();
	UAnimNotify_CameraEffect::StaticClass();
	UAnimNotify_Footstep::StaticClass();
	UAnimNotify_ForceField::StaticClass();
	UAnimNotify_PlayParticleEffect::StaticClass();
	UAnimNotify_Rumble::StaticClass();
	UAnimNotify_Script::StaticClass();
	UAnimNotify_Scripted::StaticClass();
	UAnimNotify_Sound::StaticClass();
	UAnimObject::StaticClass();
	UAnimSequence::StaticClass();
	UAnimSet::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimSetNative;
	UAnimTree::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAnimTreeNative;
	ACrowdAgent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineACrowdAgentNative;
	ACrowdAttractor::StaticClass();
	UMorphNodeBase::StaticClass();
	UMorphNodePose::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUMorphNodePoseNative;
	UMorphNodeWeight::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUMorphNodeWeightNative;
	UMorphNodeWeightBase::StaticClass();
	UMorphNodeWeightByBoneAngle::StaticClass();
	UMorphTarget::StaticClass();
	UMorphTargetSet::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUMorphTargetSetNative;
	UMorphWeightSequence::StaticClass();
	USkelControl_CCD_IK::StaticClass();
	USkelControlBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSkelControlBaseNative;
	USkelControlFootPlacement::StaticClass();
	USkelControlLimb::StaticClass();
	USkelControlLookAt::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSkelControlLookAtNative;
	USkelControlSingleBone::StaticClass();
	USkelControlSpline::StaticClass();
	USkelControlTrail::StaticClass();
	USkelControlWheel::StaticClass();
	ASkeletalMeshActor::StaticClass();
	ASkeletalMeshActorBasedOnExtremeContent::StaticClass();
	ASkeletalMeshActorMAT::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineASkeletalMeshActorMATNative;
	UActorFactoryDecal::StaticClass();
	ADecalActor::StaticClass();
	ADecalActorBase::StaticClass();
	ADecalActorMovable::StaticClass();
	UDecalComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUDecalComponentNative;
	ADecalManager::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineADecalManagerNative;
	UDecalMaterial::StaticClass();
	UActorFactoryFogVolumeConstantDensityInfo::StaticClass();
	UActorFactoryFogVolumeLinearHalfspaceDensityInfo::StaticClass();
	UActorFactoryFogVolumeSphericalDensityInfo::StaticClass();
	UFogVolumeConeDensityComponent::StaticClass();
	AFogVolumeConeDensityInfo::StaticClass();
	UFogVolumeConstantDensityComponent::StaticClass();
	AFogVolumeConstantDensityInfo::StaticClass();
	UFogVolumeDensityComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUFogVolumeDensityComponentNative;
	AFogVolumeDensityInfo::StaticClass();
	UFogVolumeLinearHalfspaceDensityComponent::StaticClass();
	AFogVolumeLinearHalfspaceDensityInfo::StaticClass();
	UFogVolumeSphericalDensityComponent::StaticClass();
	AFogVolumeSphericalDensityInfo::StaticClass();
	UActorFactoryApexDestructible::StaticClass();
	UApexAsset::StaticClass();
	UApexComponentBase::StaticClass();
	AApexDestructibleActor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAApexDestructibleActorNative;
	UApexDestructibleAsset::StaticClass();
	UApexDynamicComponent::StaticClass();
	UApexMeshParticleFactoryAsset::StaticClass();
	UApexParticleSystemAsset::StaticClass();
	UApexRenderMeshAsset::StaticClass();
	UApexStaticComponent::StaticClass();
	UApexStaticDestructibleComponent::StaticClass();
	UFracturedBaseComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUFracturedBaseComponentNative;
	UFracturedSkinnedMeshComponent::StaticClass();
	AFracturedStaticMeshActor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAFracturedStaticMeshActorNative;
	UFracturedStaticMeshComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUFracturedStaticMeshComponentNative;
	AFracturedStaticMeshPart::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAFracturedStaticMeshPartNative;
	AFractureManager::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAFractureManagerNative;
	URDepthBiasSkeletalMeshComponent::StaticClass();
	UInterpFilter::StaticClass();
	UInterpFilter_Classes::StaticClass();
	UInterpFilter_Custom::StaticClass();
	UInterpGroup::StaticClass();
	UInterpGroupDirector::StaticClass();
	UInterpGroupInst::StaticClass();
	UInterpGroupInstDirector::StaticClass();
	UInterpTrackAnimControl::StaticClass();
	UInterpTrackAudioMaster::StaticClass();
	UInterpTrackColorProp::StaticClass();
	UInterpTrackColorScale::StaticClass();
	UInterpTrackDirector::StaticClass();
	UInterpTrackEvent::StaticClass();
	UInterpTrackFaceFX::StaticClass();
	UInterpTrackFaceFXRegister::StaticClass();
	UInterpTrackFade::StaticClass();
	UInterpTrackFloatBase::StaticClass();
	UInterpTrackFloatMaterialParam::StaticClass();
	UInterpTrackFloatParticleParam::StaticClass();
	UInterpTrackFloatProp::StaticClass();
	UInterpTrackInst::StaticClass();
	UInterpTrackInstAnimControl::StaticClass();
	UInterpTrackInstAudioMaster::StaticClass();
	UInterpTrackInstColorProp::StaticClass();
	UInterpTrackInstColorScale::StaticClass();
	UInterpTrackInstDirector::StaticClass();
	UInterpTrackInstEvent::StaticClass();
	UInterpTrackInstFaceFX::StaticClass();
	UInterpTrackInstFaceFXRegister::StaticClass();
	UInterpTrackInstFade::StaticClass();
	UInterpTrackInstFloatMaterialParam::StaticClass();
	UInterpTrackInstFloatParticleParam::StaticClass();
	UInterpTrackInstFloatProp::StaticClass();
	UInterpTrackInstMorphWeight::StaticClass();
	UInterpTrackInstMove::StaticClass();
	UInterpTrackInstParticleReplay::StaticClass();
	UInterpTrackInstProperty::StaticClass();
	UInterpTrackInstSkelControlScale::StaticClass();
	UInterpTrackInstSlomo::StaticClass();
	UInterpTrackInstSound::StaticClass();
	UInterpTrackInstSoundFade::StaticClass();
	UInterpTrackInstToggle::StaticClass();
	UInterpTrackInstVectorMaterialParam::StaticClass();
	UInterpTrackInstVectorProp::StaticClass();
	UInterpTrackInstVisibility::StaticClass();
	UInterpTrackMorphWeight::StaticClass();
	UInterpTrackMove::StaticClass();
	UInterpTrackParticleReplay::StaticClass();
	UInterpTrackSkelControlScale::StaticClass();
	UInterpTrackSlomo::StaticClass();
	UInterpTrackSound::StaticClass();
	UInterpTrackSoundFade::StaticClass();
	UInterpTrackToggle::StaticClass();
	UInterpTrackVectorBase::StaticClass();
	UInterpTrackVectorMaterialParam::StaticClass();
	UInterpTrackVectorProp::StaticClass();
	UInterpTrackVisibility::StaticClass();
	UMaterialExpressionAbs::StaticClass();
	UMaterialExpressionAdd::StaticClass();
	UMaterialExpressionAddNormalMap::StaticClass();
	UMaterialExpressionAppendVector::StaticClass();
	UMaterialExpressionBumpOffset::StaticClass();
	UMaterialExpressionCameraVector::StaticClass();
	UMaterialExpressionCameraWorldPosition::StaticClass();
	UMaterialExpressionCeil::StaticClass();
	UMaterialExpressionClamp::StaticClass();
	UMaterialExpressionComment::StaticClass();
	UMaterialExpressionComponentMask::StaticClass();
	UMaterialExpressionCompound::StaticClass();
	UMaterialExpressionConstant::StaticClass();
	UMaterialExpressionConstant2Vector::StaticClass();
	UMaterialExpressionConstant3Vector::StaticClass();
	UMaterialExpressionConstant4Vector::StaticClass();
	UMaterialExpressionConstantBiasScale::StaticClass();
	UMaterialExpressionConstantClamp::StaticClass();
	UMaterialExpressionCosine::StaticClass();
	UMaterialExpressionCrossProduct::StaticClass();
	UMaterialExpressionDepthBiasBlend::StaticClass();
	UMaterialExpressionDepthBiasedAlpha::StaticClass();
	UMaterialExpressionDepthBiasedBlend::StaticClass();
	UMaterialExpressionDeriveNormalZ::StaticClass();
	UMaterialExpressionDesaturation::StaticClass();
	UMaterialExpressionDestColor::StaticClass();
	UMaterialExpressionDestDepth::StaticClass();
	UMaterialExpressionDivide::StaticClass();
	UMaterialExpressionDotProduct::StaticClass();
	UMaterialExpressionDynamicParameter::StaticClass();
	UMaterialExpressionFlipBookSample::StaticClass();
	UMaterialExpressionFloor::StaticClass();
	UMaterialExpressionFluidNormal::StaticClass();
	UMaterialExpressionFontSample::StaticClass();
	UMaterialExpressionFontSampleParameter::StaticClass();
	UMaterialExpressionFrac::StaticClass();
	UMaterialExpressionFresnel::StaticClass();
	UMaterialExpressionIf::StaticClass();
	UMaterialExpressionLensFlareIntensity::StaticClass();
	UMaterialExpressionLensFlareOcclusion::StaticClass();
	UMaterialExpressionLensFlareRadialDistance::StaticClass();
	UMaterialExpressionLensFlareRayDistance::StaticClass();
	UMaterialExpressionLensFlareSourceDistance::StaticClass();
	UMaterialExpressionLightingDiffuseLambert::StaticClass();
	UMaterialExpressionLightingSpecularBlinnPhong::StaticClass();
	UMaterialExpressionLightingSpecularHeidrichSeidel::StaticClass();
	UMaterialExpressionLightingSpecularPhong::StaticClass();
	UMaterialExpressionLightVector::StaticClass();
	UMaterialExpressionLinearInterpolate::StaticClass();
	UMaterialExpressionMax::StaticClass();
	UMaterialExpressionMeshEmitterVertexColor::StaticClass();
	UMaterialExpressionMeshSubUV::StaticClass();
	UMaterialExpressionMin::StaticClass();
	UMaterialExpressionMultiply::StaticClass();
	UMaterialExpressionNormal::StaticClass();
	UMaterialExpressionNormalize::StaticClass();
	UMaterialExpressionOneMinus::StaticClass();
	UMaterialExpressionPanner::StaticClass();
	UMaterialExpressionParameter::StaticClass();
	UMaterialExpressionParticleSubUV::StaticClass();
	UMaterialExpressionPixelDepth::StaticClass();
	UMaterialExpressionPower::StaticClass();
	UMaterialExpressionReflectionVector::StaticClass();
	UMaterialExpressionRotator::StaticClass();
	UMaterialExpressionScalarParameter::StaticClass();
	UMaterialExpressionSceneDepth::StaticClass();
	UMaterialExpressionSceneTexture::StaticClass();
	UMaterialExpressionScreenPosition::StaticClass();
	UMaterialExpressionSine::StaticClass();
	UMaterialExpressionSquareRoot::StaticClass();
	UMaterialExpressionStaticComponentMaskParameter::StaticClass();
	UMaterialExpressionStaticSwitchParameter::StaticClass();
	UMaterialExpressionSubtract::StaticClass();
	UMaterialExpressionTextureCoordinate::StaticClass();
	UMaterialExpressionTextureSample::StaticClass();
	UMaterialExpressionTextureSampleParameter::StaticClass();
	UMaterialExpressionTextureSampleParameter2D::StaticClass();
	UMaterialExpressionTextureSampleParameterCube::StaticClass();
	UMaterialExpressionTextureSampleParameterMovie::StaticClass();
	UMaterialExpressionTextureSampleParameterSubUV::StaticClass();
	UMaterialExpressionTime::StaticClass();
	UMaterialExpressionTransform::StaticClass();
	UMaterialExpressionTransformPosition::StaticClass();
	UMaterialExpressionVectorParameter::StaticClass();
	UMaterialExpressionVertexColor::StaticClass();
	UMaterialExpressionWorldPosition::StaticClass();
	UMaterialInstance::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUMaterialInstanceNative;
	UMaterialInstanceConstant::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUMaterialInstanceConstantNative;
	UMaterialInstanceTimeVarying::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUMaterialInstanceTimeVaryingNative;
	UDistributionFloatParticleParameter::StaticClass();
	UDistributionVectorParticleParameter::StaticClass();
	AEmitterCameraLensEffectBase::StaticClass();
	UParticleEmitter::StaticClass();
	UParticleLODLevel::StaticClass();
	UParticleModule::StaticClass();
	UParticleModuleAcceleration::StaticClass();
	UParticleModuleAccelerationBase::StaticClass();
	UParticleModuleAccelerationOverLifetime::StaticClass();
	UParticleModuleAttractorBase::StaticClass();
	UParticleModuleAttractorLine::StaticClass();
	UParticleModuleAttractorParticle::StaticClass();
	UParticleModuleAttractorPoint::StaticClass();
	UParticleModuleBeamBase::StaticClass();
	UParticleModuleBeamModifier::StaticClass();
	UParticleModuleBeamNoise::StaticClass();
	UParticleModuleBeamSource::StaticClass();
	UParticleModuleBeamTarget::StaticClass();
	UParticleModuleCollision::StaticClass();
	UParticleModuleCollisionBase::StaticClass();
	UParticleModuleColor::StaticClass();
	UParticleModuleColorBase::StaticClass();
	UParticleModuleColorByParameter::StaticClass();
	UParticleModuleColorOverLife::StaticClass();
	UParticleModuleColorScaleOverDensity::StaticClass();
	UParticleModuleColorScaleOverLife::StaticClass();
	UParticleModuleEventBase::StaticClass();
	UParticleModuleEventGenerator::StaticClass();
	UParticleModuleEventReceiverBase::StaticClass();
	UParticleModuleEventReceiverSpawn::StaticClass();
	UParticleModuleKillBase::StaticClass();
	UParticleModuleKillBox::StaticClass();
	UParticleModuleKillHeight::StaticClass();
	UParticleModuleLifetime::StaticClass();
	UParticleModuleLifetimeBase::StaticClass();
	UParticleModuleLocation::StaticClass();
	UParticleModuleLocationBase::StaticClass();
	UParticleModuleLocationDirect::StaticClass();
	UParticleModuleLocationEmitter::StaticClass();
	UParticleModuleLocationEmitterDirect::StaticClass();
	UParticleModuleLocationPrimitiveBase::StaticClass();
	UParticleModuleLocationPrimitiveCylinder::StaticClass();
	UParticleModuleLocationPrimitiveSphere::StaticClass();
	UParticleModuleLocationVertex::StaticClass();
	UParticleModuleMaterialBase::StaticClass();
	UParticleModuleMaterialByParameter::StaticClass();
	UParticleModuleMeshMaterial::StaticClass();
	UParticleModuleMeshRotation::StaticClass();
	UParticleModuleMeshRotationRate::StaticClass();
	UParticleModuleMeshRotationRateMultiplyLife::StaticClass();
	UParticleModuleOrbit::StaticClass();
	UParticleModuleOrbitBase::StaticClass();
	UParticleModuleOrientationAxisLock::StaticClass();
	UParticleModuleOrientationBase::StaticClass();
	UParticleModuleParameterBase::StaticClass();
	UParticleModuleParameterDynamic::StaticClass();
	UParticleModuleRequired::StaticClass();
	UParticleModuleRotation::StaticClass();
	UParticleModuleRotationBase::StaticClass();
	UParticleModuleRotationOverLifetime::StaticClass();
	UParticleModuleRotationRate::StaticClass();
	UParticleModuleRotationRateBase::StaticClass();
	UParticleModuleRotationRateMultiplyLife::StaticClass();
	UParticleModuleSize::StaticClass();
	UParticleModuleSizeBase::StaticClass();
	UParticleModuleSizeMultiplyLife::StaticClass();
	UParticleModuleSizeMultiplyVelocity::StaticClass();
	UParticleModuleSizeScale::StaticClass();
	UParticleModuleSpawn::StaticClass();
	UParticleModuleSpawnBase::StaticClass();
	UParticleModuleSpawnPerUnit::StaticClass();
	UParticleModuleSubUV::StaticClass();
	UParticleModuleSubUVBase::StaticClass();
	UParticleModuleSubUVDirect::StaticClass();
	UParticleModuleSubUVSelect::StaticClass();
	UParticleModuleTrailBase::StaticClass();
	UParticleModuleTrailSource::StaticClass();
	UParticleModuleTrailSpawn::StaticClass();
	UParticleModuleTrailTaper::StaticClass();
	UParticleModuleTypeDataBase::StaticClass();
	UParticleModuleTypeDataBeam::StaticClass();
	UParticleModuleTypeDataBeam2::StaticClass();
	UParticleModuleTypeDataMesh::StaticClass();
	UParticleModuleTypeDataMeshPhysX::StaticClass();
	UParticleModuleTypeDataPhysX::StaticClass();
	UParticleModuleTypeDataTrail::StaticClass();
	UParticleModuleTypeDataTrail2::StaticClass();
	UParticleModuleUberBase::StaticClass();
	UParticleModuleUberLTISIVCL::StaticClass();
	UParticleModuleUberLTISIVCLIL::StaticClass();
	UParticleModuleUberLTISIVCLILIRSSBLIRR::StaticClass();
	UParticleModuleUberRainDrops::StaticClass();
	UParticleModuleUberRainImpacts::StaticClass();
	UParticleModuleUberRainSplashA::StaticClass();
	UParticleModuleUberRainSplashB::StaticClass();
	UParticleModuleVelocity::StaticClass();
	UParticleModuleVelocityBase::StaticClass();
	UParticleModuleVelocityInheritParent::StaticClass();
	UParticleModuleVelocityOverLifetime::StaticClass();
	UParticleSpriteEmitter::StaticClass();
	UParticleSystem::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUParticleSystemNative;
	UParticleSystemComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUParticleSystemComponentNative;
	UParticleSystemReplay::StaticClass();
	APhysXEmitterSpawnable::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAPhysXEmitterSpawnableNative;
	UPhysXParticleSystem::StaticClass();
	UPhysXParticleSystemComponent::StaticClass();
	URParticleAttractorComponent::StaticClass();
	URParticleModuleAttractorComponent::StaticClass();
	URParticleModuleLocationSphereSection::StaticClass();
	UActorFactoryCloth::StaticClass();
	AKActor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAKActorNative;
	AKActorSpawnable::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineAKActorSpawnableNative;
	AKAsset::StaticClass();
	UPhysicalMaterial::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUPhysicalMaterialNative;
	UPhysicalMaterialPropertyBase::StaticClass();
	UPhysicsAsset::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUPhysicsAssetNative;
	UPhysicsAssetInstance::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUPhysicsAssetInstanceNative;
	UPhysicsLODVerticalEmitter::StaticClass();
	URB_BodyInstance::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineURB_BodyInstanceNative;
	URB_BodySetup::StaticClass();
	URB_BSJointSetup::StaticClass();
	ARB_ConstraintActor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineARB_ConstraintActorNative;
	URB_ConstraintDrawComponent::StaticClass();
	URB_ConstraintInstance::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineURB_ConstraintInstanceNative;
	URB_ConstraintSetup::StaticClass();
	URB_DistanceJointSetup::StaticClass();
	URB_Handle::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineURB_HandleNative;
	URB_HingeSetup::StaticClass();
	ARB_LineImpulseActor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineARB_LineImpulseActorNative;
	URB_PrismaticSetup::StaticClass();
	URB_PulleyJointSetup::StaticClass();
	ARB_RadialImpulseActor::StaticClass();
	URB_RadialImpulseComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineURB_RadialImpulseComponentNative;
	URB_SkelJointSetup::StaticClass();
	URB_Spring::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineURB_SpringNative;
	URB_StayUprightSetup::StaticClass();
	ARB_Thruster::StaticClass();
	URPhysOnContactHandler::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineURPhysOnContactHandlerNative;
	UForceFieldShape::StaticClass();
	UForceFieldShapeBox::StaticClass();
	UForceFieldShapeCapsule::StaticClass();
	UForceFieldShapeSphere::StaticClass();
	ANxCylindricalForceField::StaticClass();
	ANxCylindricalForceFieldCapsule::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineANxCylindricalForceFieldCapsuleNative;
	ANxForceField::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineANxForceFieldNative;
	ANxForceFieldGeneric::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineANxForceFieldGenericNative;
	ANxForceFieldRadial::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineANxForceFieldRadialNative;
	ANxForceFieldTornado::StaticClass();
	ANxGenericForceField::StaticClass();
	ANxGenericForceFieldBox::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineANxGenericForceFieldBoxNative;
	ANxGenericForceFieldBrush::StaticClass();
	ANxGenericForceFieldCapsule::StaticClass();
	ANxRadialCustomForceField::StaticClass();
	ANxRadialForceField::StaticClass();
	ANxTornadoAngularForceField::StaticClass();
	ANxTornadoAngularForceFieldCapsule::StaticClass();
	ANxTornadoForceField::StaticClass();
	ANxTornadoForceFieldCapsule::StaticClass();
	ARB_CylindricalForceActor::StaticClass();
	URB_ForceComponent::StaticClass();
	URB_ForceComponentCylindrical::StaticClass();
	URB_ForceComponentRadial::StaticClass();
	ARB_ForceFieldExcludeVolume::StaticClass();
	ARB_RadialForceActor::StaticClass();
	UPrefab::StaticClass();
	APrefabInstance::StaticClass();
	UInterpData::StaticClass();
	UPrefabSequence::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUPrefabSequenceNative;
	UPrefabSequenceContainer::StaticClass();
	URSeqAct_SetMaterialInstance::StaticClass();
	USeqAct_ActivateRemoteEvent::StaticClass();
	USeqAct_ActorFactory::StaticClass();
	USeqAct_ActorFactoryEx::StaticClass();
	USeqAct_AddFloat::StaticClass();
	USeqAct_AddInt::StaticClass();
	USeqAct_AIMoveToActor::StaticClass();
	USeqAct_ApplySoundNode::StaticClass();
	USeqAct_AttachToEvent::StaticClass();
	USeqAct_CameraFade::StaticClass();
	USeqAct_CameraLookAt::StaticClass();
	USeqAct_CastToFloat::StaticClass();
	USeqAct_CastToInt::StaticClass();
	USeqAct_CauseDamage::StaticClass();
	USeqAct_CauseDamageRadial::StaticClass();
	USeqAct_ChangeCollision::StaticClass();
	USeqAct_CommitMapChange::StaticClass();
	USeqAct_CrowdSpawner::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSeqAct_CrowdSpawnerNative;
	USeqAct_Delay::StaticClass();
	USeqAct_DelaySwitch::StaticClass();
	USeqAct_DivideFloat::StaticClass();
	USeqAct_DivideInt::StaticClass();
	USeqAct_FinishSequence::StaticClass();
	USeqAct_ForceGarbageCollection::StaticClass();
	USeqAct_ForceMaterialMipsResident::StaticClass();
	USeqAct_Gate::StaticClass();
	USeqAct_GetDistance::StaticClass();
	USeqAct_GetMatInstVectorParam::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSeqAct_GetMatInstVectorParamNative;
	USeqAct_GetProperty::StaticClass();
	USeqAct_GetVelocity::StaticClass();
	USeqAct_Interp::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSeqAct_InterpNative;
	USeqAct_InterpolateColour::StaticClass();
	USeqAct_InterpolateFloat::StaticClass();
	USeqAct_IsInObjectList::StaticClass();
	USeqAct_Latent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSeqAct_LatentNative;
	USeqAct_LevelStreaming::StaticClass();
	USeqAct_LevelStreamingBase::StaticClass();
	USeqAct_LevelVisibility::StaticClass();
	USeqAct_Log::StaticClass();
	USeqAct_ModifyObjectList::StaticClass();
	USeqAct_MultiLevelStreaming::StaticClass();
	USeqAct_MultiplyFloat::StaticClass();
	USeqAct_MultiplyInt::StaticClass();
	USeqAct_ParticleEventGenerator::StaticClass();
	USeqAct_PhysXSwitch::StaticClass();
	USeqAct_PlayCameraAnim::StaticClass();
	USeqAct_PlayFaceFXAnim::StaticClass();
	USeqAct_PlayMusicTrack::StaticClass();
	USeqAct_PlaySound::StaticClass();
	USeqAct_Possess::StaticClass();
	USeqAct_PrepareMapChange::StaticClass();
	USeqAct_RandomSwitch::StaticClass();
	USeqAct_RangeSwitch::StaticClass();
	USeqAct_SetBlockRigidBody::StaticClass();
	USeqAct_SetBool::StaticClass();
	USeqAct_SetCameraTarget::StaticClass();
	USeqAct_SetClothParam::StaticClass();
	USeqAct_SetDOFParams::StaticClass();
	USeqAct_SetFloat::StaticClass();
	USeqAct_SetInt::StaticClass();
	USeqAct_SetMaterial::StaticClass();
	USeqAct_SetMatInstScalarParam::StaticClass();
	USeqAct_SetMatInstTexParam::StaticClass();
	USeqAct_SetMatInstVectorParam::StaticClass();
	USeqAct_SetMotionBlurParams::StaticClass();
	USeqAct_SetObject::StaticClass();
	USeqAct_SetPhysics::StaticClass();
	USeqAct_SetRigidBodyIgnoreVehicles::StaticClass();
	USeqAct_SetSequenceVariable::StaticClass();
	USeqAct_SetString::StaticClass();
	USeqAct_StreamInTextures::StaticClass();
	USeqAct_SubtractFloat::StaticClass();
	USeqAct_SubtractInt::StaticClass();
	USeqAct_Switch::StaticClass();
	USeqAct_Timer::StaticClass();
	USeqAct_Toggle::StaticClass();
	USeqAct_ToggleDynamicChannel::StaticClass();
	USeqAct_Trace::StaticClass();
	USeqAct_WaitForLevelsVisible::StaticClass();
	USeqCond_CompareBool::StaticClass();
	USeqCond_CompareFloat::StaticClass();
	USeqCond_CompareInt::StaticClass();
	USeqCond_CompareObject::StaticClass();
	USeqCond_GetServerType::StaticClass();
	USeqCond_Increment::StaticClass();
	USeqCond_IncrementFloat::StaticClass();
	USeqCond_IsInCombat::StaticClass();
	USeqCond_IsLoggedIn::StaticClass();
	USeqCond_IsSameTeam::StaticClass();
	USeqCond_SwitchBase::StaticClass();
	USeqCond_SwitchClass::StaticClass();
	USeqCond_SwitchName::StaticClass();
	USeqCond_SwitchObject::StaticClass();
	USeqEvent_AISeeEnemy::StaticClass();
	USeqEvent_Console::StaticClass();
	USeqEvent_ConstraintBroken::StaticClass();
	USeqEvent_Destroyed::StaticClass();
	USeqEvent_GetInventory::StaticClass();
	USeqEvent_LevelBeginning::StaticClass();
	USeqEvent_LevelLoaded::StaticClass();
	USeqEvent_LevelStartup::StaticClass();
	USeqEvent_Mover::StaticClass();
	USeqEvent_ParticleEvent::StaticClass();
	USeqEvent_ProjectileLanded::StaticClass();
	USeqEvent_RemoteEvent::StaticClass();
	USeqEvent_RigidBodyCollision::StaticClass();
	USeqEvent_SeeDeath::StaticClass();
	USeqEvent_SequenceActivated::StaticClass();
	USeqEvent_TakeDamage::StaticClass();
	USeqEvent_Touch::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSeqEvent_TouchNative;
	USeqEvent_Used::StaticClass();
	USequence::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSequenceNative;
	USequenceAction::StaticClass();
	USequenceCondition::StaticClass();
	USequenceEvent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSequenceEventNative;
	USequenceFrame::StaticClass();
	USequenceFrameWrapped::StaticClass();
	USequenceObject::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSequenceObjectNative;
	USequenceOp::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSequenceOpNative;
	USequenceVariable::StaticClass();
	USeqVar_Bool::StaticClass();
	USeqVar_Byte::StaticClass();
	USeqVar_Colour::StaticClass();
	USeqVar_External::StaticClass();
	USeqVar_Float::StaticClass();
	USeqVar_Group::StaticClass();
	USeqVar_Int::StaticClass();
	USeqVar_Name::StaticClass();
	USeqVar_Named::StaticClass();
	USeqVar_Object::StaticClass();
	USeqVar_ObjectList::StaticClass();
	USeqVar_ObjectVolume::StaticClass();
	USeqVar_Player::StaticClass();
	USeqVar_RandomFloat::StaticClass();
	USeqVar_RandomInt::StaticClass();
	USeqVar_String::StaticClass();
	USeqVar_Union::StaticClass();
	USeqVar_Vector::StaticClass();
	AAmbientSound::StaticClass();
	AAmbientSoundMovable::StaticClass();
	AAmbientSoundNonLoop::StaticClass();
	AAmbientSoundSimple::StaticClass();
	UDistributionFloatSoundParameter::StaticClass();
	UFMODReverb::StaticClass();
	UMixBin::StaticClass();
	URFMODSound::StaticClass();
	USoundMode::StaticClass();
	USoundNode::StaticClass();
	USoundNodeAmbient::StaticClass();
	USoundNodeAmbientNonLoop::StaticClass();
	USoundNodeAttenuation::StaticClass();
	USoundNodeConcatenator::StaticClass();
	USoundNodeDelay::StaticClass();
	USoundNodeDistanceCrossFade::StaticClass();
	USoundNodeLooping::StaticClass();
	USoundNodeMature::StaticClass();
	USoundNodeMixer::StaticClass();
	USoundNodeModulator::StaticClass();
	USoundNodeModulatorContinuous::StaticClass();
	USoundNodeOscillator::StaticClass();
	USoundNodeRandom::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSoundNodeRandomNative;
	USoundNodeWave::StaticClass();
	USoundNodeWaveParam::StaticClass();
	ATerrain::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineATerrainNative;
	UTerrainComponent::StaticClass();
	UTerrainLayerSetup::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUTerrainLayerSetupNative;
	UTerrainMaterial::StaticClass();
	UTerrainWeightMapTexture::StaticClass();
	UConsole::StaticClass();
	UDataStoreClient::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUDataStoreClientNative;
	UInput::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUInputNative;
	UInteraction::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUInteractionNative;
	UPlayerInput::StaticClass();
	UPlayerManagerInteraction::StaticClass();
	UUIComp_Event::StaticClass();
	UUIComponent::StaticClass();
	UUIEventContainer::StaticClass();
	UUIInputConfiguration::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIInputConfigurationNative;
	UUIInteraction::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIInteractionNative;
	UUILayerBase::StaticClass();
	UUIRoot::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIRootNative;
	UUISceneClient::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUISceneClientNative;
	UUIState::StaticClass();
	UUIState_Disabled::StaticClass();
	UUIState_Enabled::StaticClass();
	UUIString::StaticClass();
	UUIStyle::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIStyleNative;
	UConsoleEntry::StaticClass();
	UCurrentGameDataStore::StaticClass();
	UGameInfoDataProvider::StaticClass();
	UGameUISceneClient::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUGameUISceneClientNative;
	UPlayerDataProvider::StaticClass();
	UPlayerOwnerDataProvider::StaticClass();
	UPlayerOwnerDataStore::StaticClass();
	USceneDataStore::StaticClass();
	USessionSettingsProvider::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUSessionSettingsProviderNative;
	UUIButton::StaticClass();
	UUICalloutButton::StaticClass();
	UUICalloutButtonPanel::StaticClass();
	UUIConfigFileProvider::StaticClass();
	UUIConfigProvider::StaticClass();
	UUIConfigSectionProvider::StaticClass();
	UUIContainer::StaticClass();
	UUIDataProvider::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIDataProviderNative;
	UUIDataProvider_OnlineClanMates::StaticClass();
	UUIDataProvider_OnlineFriendMessages::StaticClass();
	UUIDataProvider_OnlineFriends::StaticClass();
	UUIDataProvider_OnlinePlayerDataBase::StaticClass();
	UUIDataProvider_OnlinePlayers::StaticClass();
	UUIDataProvider_OnlineProfileSettings::StaticClass();
	UUIDataProvider_OnlineProfileSettingsArray::StaticClass();
	UUIDataProvider_PlayerAchievements::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIDataProvider_PlayerAchievementsNative;
	UUIDataStore::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIDataStoreNative;
	UUIDataStore_GameState::StaticClass();
	UUIDataStore_InputAlias::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIDataStore_InputAliasNative;
	UUIDataStore_OnlinePlayerData::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIDataStore_OnlinePlayerDataNative;
	UUIDataStore_Remote::StaticClass();
	UUIDataStore_SessionSettings::StaticClass();
	UUIDataStore_Settings::StaticClass();
	UUIDataStore_StringBase::StaticClass();
	UUIDataStore_Strings::StaticClass();
	UUIDataStorePublisher::StaticClass();
	UUIDataStoreSubscriber::StaticClass();
	UUIDynamicDataProvider::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIDynamicDataProviderNative;
	UUIDynamicFieldProvider::StaticClass();
	UUILabelButton::StaticClass();
	UUIList::StaticClass();
	UUIListElementCellProvider::StaticClass();
	UUIListElementProvider::StaticClass();
	UUIObject::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIObjectNative;
	UUIPrefab::StaticClass();
	UUIPrefabInstance::StaticClass();
	UUIPrefabScene::StaticClass();
	UUIPropertyDataProvider::StaticClass();
	UUIScene::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUISceneNative;
	UUIScreenObject::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIScreenObjectNative;
	UUISettingsProvider::StaticClass();
	UUISkin::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUISkinNative;
	UUIState_Active::StaticClass();
	UUIState_Focused::StaticClass();
	UUIState_Pressed::StaticClass();
	UUIStringRenderer::StaticClass();
	UUIStyle_Combo::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUUIStyle_ComboNative;
	UUIStyle_Data::StaticClass();
	UUIStyle_Image::StaticClass();
	UUIStyle_Text::StaticClass();
	UUIStyleResolver::StaticClass();
	UUITabControl::StaticClass();
	UUITabPage::StaticClass();
	UUITexture::StaticClass();
	UUITickableObject::StaticClass();
	UUITickableObjectProxy::StaticClass();
	UUIAction::StaticClass();
	UUIAction_OpenScene::StaticClass();
	UUIAction_Scene::StaticClass();
	UUIEvent::StaticClass();
	UUIEvent_CalloutButtonInputProxy::StaticClass();
	UUIEvent_MetaObject::StaticClass();
	UUIEvent_ProcessInput::StaticClass();
	UUISequence::StaticClass();
	UUIStateSequence::StaticClass();
	UScene::StaticClass();
	UFoliageComponent::StaticClass();
	AFoliageFactory::StaticClass();
	AFluidInfluenceActor::StaticClass();
	UFluidInfluenceComponent::StaticClass();
	AFluidSurfaceActor::StaticClass();
	AFluidSurfaceActorMovable::StaticClass();
	UFluidSurfaceComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUFluidSurfaceComponentNative;
	USpeedTree::StaticClass();
	ASpeedTreeActor::StaticClass();
	USpeedTreeActorFactory::StaticClass();
	USpeedTreeComponent::StaticClass();
	USpeedTreeComponentFactory::StaticClass();
	ULensFlare::StaticClass();
	ULensFlareComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineULensFlareComponentNative;
	ALensFlareSource::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineALensFlareSourceNative;
	UAudioDevice::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEngineUAudioDeviceNative;
	UDwTriovizEffect::StaticClass();
}

/* UnScript.h DECLARE_NATIVE_TYPE for UActorComponent: the class's table of script natives (name, member pointer). */
typedef void (UActorComponent::*UActorComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UActorComponentNativeInfo
{
	const TCHAR* Name;
	UActorComponentNative Pointer;
};

extern UActorComponentNativeInfo g_025e0878[];
// @baa 0x00ca7fe0
/* IMPLEMENT_NATIVE_HANDLER for UActorComponent: the native registered under this name, or NULL. */
UActorComponentNative* sub_00ca7fe0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0878[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0878[NativeIndex].Name) == 0)
		{
			return &g_025e0878[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AAnimatedCamera: the class's table of script natives (name, member pointer). */
typedef void (AAnimatedCamera::*AAnimatedCameraNative)(FFrame& TheStack, RESULT_DECL);

struct AAnimatedCameraNativeInfo
{
	const TCHAR* Name;
	AAnimatedCameraNative Pointer;
};

extern AAnimatedCameraNativeInfo g_025e08a8[];
// @baa 0x00ca8040
/* IMPLEMENT_NATIVE_HANDLER for AAnimatedCamera: the native registered under this name, or NULL. */
AAnimatedCameraNative* sub_00ca8040(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e08a8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e08a8[NativeIndex].Name) == 0)
		{
			return &g_025e08a8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAudioComponent: the class's table of script natives (name, member pointer). */
typedef void (UAudioComponent::*UAudioComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UAudioComponentNativeInfo
{
	const TCHAR* Name;
	UAudioComponentNative Pointer;
};

extern UAudioComponentNativeInfo g_025e08e0[];
// @baa 0x00ca80a0
/* IMPLEMENT_NATIVE_HANDLER for UAudioComponent: the native registered under this name, or NULL. */
UAudioComponentNative* sub_00ca80a0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e08e0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e08e0[NativeIndex].Name) == 0)
		{
			return &g_025e08e0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ACamera: the class's table of script natives (name, member pointer). */
typedef void (ACamera::*ACameraNative)(FFrame& TheStack, RESULT_DECL);

struct ACameraNativeInfo
{
	const TCHAR* Name;
	ACameraNative Pointer;
};

extern ACameraNativeInfo g_025e0968[];
// @baa 0x00ca8100
/* IMPLEMENT_NATIVE_HANDLER for ACamera: the native registered under this name, or NULL. */
ACameraNative* sub_00ca8100(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0968[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0968[NativeIndex].Name) == 0)
		{
			return &g_025e0968[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

Native FindBmGameARBMCameraEmitterNative(const TCHAR* NativeName);
Native FindBmGameURBMScreenShakeModifierNative(const TCHAR* NativeName);
Native FindBmGameARBMWeaponNative(const TCHAR* NativeName);
Native FindBmGameARBMWeaponRangedNative(const TCHAR* NativeName);
Native FindBmGameARChatterBoxBaseNative(const TCHAR* NativeName);
Native FindBmGameARCinematicActorNative(const TCHAR* NativeName);
Native FindBmGameARCinematicBatmanBaseNative(const TCHAR* NativeName);
Native FindBmGameARCreeperVineBaseNative(const TCHAR* NativeName);
Native FindBmGameARCrowdAgentNative(const TCHAR* NativeName);
Native FindBmGameARCrowdAttractorNative(const TCHAR* NativeName);
Native FindBmGameARCrowdAttractor_CylinderNative(const TCHAR* NativeName);
Native FindBmGameARCrowdManagerNative(const TCHAR* NativeName);
Native FindBmGameARElectrifiedFloorPanelNative(const TCHAR* NativeName);
Native FindBmGameARFadeManagerNative(const TCHAR* NativeName);
Native FindBmGameURForensicsInvestigatorNative(const TCHAR* NativeName);
Native FindBmGameARGameInfoNative(const TCHAR* NativeName);
Native FindBmGameARGameRINative(const TCHAR* NativeName);
Native FindBmGameARGIChallengeNative(const TCHAR* NativeName);
Native FindBmGameURHUDPromptNative(const TCHAR* NativeName);
Native FindBmGameARJokerTannoyNative(const TCHAR* NativeName);
Native FindBmGameARPawnSpawnObjectNative(const TCHAR* NativeName);
Native FindBmGameARPontoonBaseNative(const TCHAR* NativeName);
Native FindBmGameURSeqAct_ActivateElectrifiedFloorPanelsNative(const TCHAR* NativeName);
Native FindBmGameURSeqAct_FullScreenPlayerNative(const TCHAR* NativeName);
Native FindBmGameURAnimUtilNative(const TCHAR* NativeName);
Native FindBmGameURWeaponConfigNative(const TCHAR* NativeName);
Native FindBmGameURAnimNode_AnimCaptureNative(const TCHAR* NativeName);
Native FindBmGameURAnimNode_CapeNative(const TCHAR* NativeName);
Native FindBmGameURAnimNode_PoseNative(const TCHAR* NativeName);
Native FindBmGameARBMDebugCameraControllerNative(const TCHAR* NativeName);
Native FindBmGameARPlayerControllerNative(const TCHAR* NativeName);
Native FindBmGameARPlayerControllerCombatNative(const TCHAR* NativeName);
Native FindBmGameURPlayerInputNative(const TCHAR* NativeName);
Native FindBmGameURSpecialMoveControllerNative(const TCHAR* NativeName);
Native FindBmGameARSpecialMoveInstance_CatchLedgeNative(const TCHAR* NativeName);
Native FindBmGameARSpecialMoveInstance_HarpoonYankNative(const TCHAR* NativeName);
Native FindBmGameARSpecialMoveInstance_LineLauncherNative(const TCHAR* NativeName);
Native FindBmGameARSpecialMoveInstance_RelativeAnimMoveNative(const TCHAR* NativeName);
Native FindBmGameARSpecialMoveInstance_ResonateObjectNative(const TCHAR* NativeName);
Native FindBmGameARSpecialMoveInstance_SwingToVantagePointNative(const TCHAR* NativeName);
Native FindBmGameARLevelSelectMenuNative(const TCHAR* NativeName);
Native FindBmGameURPersistentOptionsNative(const TCHAR* NativeName);
Native FindBmGameURSaveGameManagerNative(const TCHAR* NativeName);
Native FindBmGameARAmbientSoundTrackingVolumeNative(const TCHAR* NativeName);
Native FindBmGameARAudioPointNative(const TCHAR* NativeName);
Native FindBmGameARAudioPointControllerNative(const TCHAR* NativeName);
Native FindBmGameURSeqAct_ConversationDialogueNative(const TCHAR* NativeName);
Native FindBmGameURSeqAct_PlaySpeechConversationNative(const TCHAR* NativeName);
Native FindBmGameURSeqAct_PlayTVSequenceBaseNative(const TCHAR* NativeName);
Native FindBmGameURSeqAct_PlayTVSequenceSingleLineNative(const TCHAR* NativeName);
Native FindBmGameURSeqAct_SpeechEventManagerBaseNative(const TCHAR* NativeName);
Native FindBmGameARBMPawnAINative(const TCHAR* NativeName);
Native FindBmGameARBMPawnAIAnimNative(const TCHAR* NativeName);
Native FindBmGameARPawnNative(const TCHAR* NativeName);
Native FindBmGameARPawnBossVenomBaseNative(const TCHAR* NativeName);
Native FindBmGameARPawnCharacterNative(const TCHAR* NativeName);
Native FindBmGameARPawnCombatNative(const TCHAR* NativeName);
Native FindBmGameARPawnPlayerNative(const TCHAR* NativeName);
Native FindBmGameARPawnPlayerBmNative(const TCHAR* NativeName);
Native FindBmGameARPawnPlayerChallengeJokerBaseNative(const TCHAR* NativeName);
Native FindBmGameARPawnPlayerCombatNative(const TCHAR* NativeName);
Native FindBmGameARPawnPlayerJokerBaseNative(const TCHAR* NativeName);
Native FindBmGameARPawnVillainNative(const TCHAR* NativeName);
Native FindBmGameARBMCombatCollisionProxyNative(const TCHAR* NativeName);
Native FindBmGameARCombatAreaNative(const TCHAR* NativeName);
Native FindBmGameARCombatMoveNative(const TCHAR* NativeName);
Native FindBmGameARCombatMove_BatmanCounterNative(const TCHAR* NativeName);
Native FindBmGameARCombatMove_BatmanStrikeNative(const TCHAR* NativeName);
Native FindBmGameARAlertEventCoordinator_BatmanNative(const TCHAR* NativeName);
Native FindBmGameARBMAIControllerNative(const TCHAR* NativeName);
Native FindBmGameARBMAIManagerNative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviourNative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviour_AttachToEventsNative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviour_CombatNative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviour_CombatAINative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviour_CombatHeavyObjectNative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviour_CombatRifleNative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviour_CombatStunStickNative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviour_MoveToBatmanInChairNative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviour_MoveToJokerInChairNative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviour_SniperNative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviour_VenomNative(const TCHAR* NativeName);
Native FindBmGameURBMBehaviourAutoStringUpNative(const TCHAR* NativeName);
Native FindBmGameARBMCombatManagerNative(const TCHAR* NativeName);
Native FindBmGameARBMDialogueCoordinatorNative(const TCHAR* NativeName);
Native FindBmGameURBMExitConditionNative(const TCHAR* NativeName);
Native FindBmGameURBmPawnSpawnerNative(const TCHAR* NativeName);
Native FindBmGameURBMPawnSpawnerControllerNative(const TCHAR* NativeName);
Native FindBmGameARBMWeaponStunStickBaseNative(const TCHAR* NativeName);
Native FindBmGameARChatteringTeethNative(const TCHAR* NativeName);
Native FindBmGameARDeadBodyBaseNative(const TCHAR* NativeName);
Native FindBmGameURIdleConfigNative(const TCHAR* NativeName);
Native FindBmGameURIdleTransitionConfigNative(const TCHAR* NativeName);
Native FindBmGameURIdleWithDeathConfigNative(const TCHAR* NativeName);
Native FindBmGameURPairedIdleConfigNative(const TCHAR* NativeName);
Native FindBmGameURSeqAct_CombatChallengeSpawnerNative(const TCHAR* NativeName);
Native FindBmGameURSeqAct_InfiniteCombatSpawnerNative(const TCHAR* NativeName);
Native FindBmGameURSimpleIdleConfigNative(const TCHAR* NativeName);
Native FindBmGameARBMPathNode_VariablePositionTraverseProxyNative(const TCHAR* NativeName);
Native FindBmGameARBMRouterNative(const TCHAR* NativeName);
Native FindBmGameARBMRouter_DynamicObjectNative(const TCHAR* NativeName);
Native FindBmGameARBMRouter_NoPawnNative(const TCHAR* NativeName);
Native FindBmGameARBMRouteRequestNative(const TCHAR* NativeName);
Native FindBmGameARBMRouteRequest_BuildComparisonListNative(const TCHAR* NativeName);
Native FindBmGameARBMRouteRequest_FindShortestPathNative(const TCHAR* NativeName);
Native FindBmGameARBMRouteRequest_FindSinglePathNative(const TCHAR* NativeName);
Native FindBmGameARBMRouteRequest_NervousSearchNative(const TCHAR* NativeName);
Native FindBmGameARBMRouteRequest_TerrifiedSearchNative(const TCHAR* NativeName);
Native FindBmGameURBMRouterPathNative(const TCHAR* NativeName);
Native FindBmGameARCornerPointNative(const TCHAR* NativeName);
Native FindBmGameARCornerWallMarkerBaseNative(const TCHAR* NativeName);
Native FindBmGameURPathGateComponentNative(const TCHAR* NativeName);
Native FindBmGameARPontoonBridgeManagerNative(const TCHAR* NativeName);
Native FindBmGameARBatarangNative(const TCHAR* NativeName);
Native FindBmGameARBatarangProjectileNative(const TCHAR* NativeName);
Native FindBmGameARBatarangProjectile_ControllableNative(const TCHAR* NativeName);
Native FindBmGameARBatDistractProjectileNative(const TCHAR* NativeName);
Native FindBmGameARExplosiveGooMineNative(const TCHAR* NativeName);
Native FindBmGameURGadgetSelectNative(const TCHAR* NativeName);
Native FindBmGameARGrappleGunNative(const TCHAR* NativeName);
Native FindBmGameARHarpoonGunNative(const TCHAR* NativeName);
Native FindBmGameARInventoryGadgetNative(const TCHAR* NativeName);
Native FindBmGameARJokerGunGadgetBaseNative(const TCHAR* NativeName);
Native FindBmGameARLineLauncherNative(const TCHAR* NativeName);
Native FindBmGameARPhotoScannerNative(const TCHAR* NativeName);
Native FindBmGameARPhysicsGrabberNative(const TCHAR* NativeName);
Native FindBmGameARTapePlayerNative(const TCHAR* NativeName);
Native FindBmGameARLevelTransitionNative(const TCHAR* NativeName);
Native FindBmGameARLevelTransitionDoorBunkerNativeBaseNative(const TCHAR* NativeName);
Native FindBmGameARLevelTransitionPNative(const TCHAR* NativeName);
Native FindBmGameARLevelTransitionPathNative(const TCHAR* NativeName);
Native FindBmGameARLevelVolumeNative(const TCHAR* NativeName);
Native FindBmGameARPlayerStartInLevelNative(const TCHAR* NativeName);
Native FindBmGameARExplodableWallBaseNative(const TCHAR* NativeName);
Native FindBmGameARGargoyleBombBaseNative(const TCHAR* NativeName);
Native FindBmGameARGrapplePointNative(const TCHAR* NativeName);
Native FindBmGameARHarpoonDragFloatingPlatformBaseNative(const TCHAR* NativeName);
Native FindBmGameARHarpoonDragPhysicsBaseNative(const TCHAR* NativeName);
Native FindBmGameARHarpoonDragTrackNative(const TCHAR* NativeName);
Native FindBmGameARHidePointNative(const TCHAR* NativeName);
Native FindBmGameARPatrolPointNative(const TCHAR* NativeName);
Native FindBmGameARRemoveableGrateNative(const TCHAR* NativeName);
Native FindBmGameARRopeBaseNative(const TCHAR* NativeName);
Native FindBmGameURRopeComponentNative(const TCHAR* NativeName);
Native FindBmGameURRopeComponentBaseNative(const TCHAR* NativeName);
Native FindBmGameARShimmyEdgeMarkerNative(const TCHAR* NativeName);
Native FindBmGameURSimpleRopeComponentNative(const TCHAR* NativeName);
Native FindBmGameARSmashablePropNative(const TCHAR* NativeName);
Native FindBmGameARTunnelGrateBaseNative(const TCHAR* NativeName);
Native FindBmGameURCapeComponentNative(const TCHAR* NativeName);
Native FindBmGameURCapeRenderingComponentNative(const TCHAR* NativeName);
Native FindBmGameURCapeStateControllerNative(const TCHAR* NativeName);
Native FindBmGameURConstrainingComponentNative(const TCHAR* NativeName);
Native FindBmGameURForceFieldNative(const TCHAR* NativeName);
Native FindBmGameARMedicalPlasticFlapsBaseNative(const TCHAR* NativeName);
Native FindBmGameARRagdollWakeupVolumeNative(const TCHAR* NativeName);
Native FindBmGameARWindVolumeNative(const TCHAR* NativeName);
Native FindBmGameARFractureWallBaseNative(const TCHAR* NativeName);
Native FindBmGameARForensicsDeviceNative(const TCHAR* NativeName);
Native FindBmGameARDisruptableObjectDoorNative(const TCHAR* NativeName);
Native FindBmGameAR3rdPersonCameraNative(const TCHAR* NativeName);
Native FindBmGameARBatarangCameraNative(const TCHAR* NativeName);
Native FindBmGameARCameraActorNative(const TCHAR* NativeName);
Native FindBmGameARCinematicCameraActorNative(const TCHAR* NativeName);
Native FindBmGameARControllableChatteringTeethCameraNative(const TCHAR* NativeName);
Native FindBmGameARGlideKickCameraNative(const TCHAR* NativeName);
Native FindBmGameARInGameCinematicCamNative(const TCHAR* NativeName);
Native FindBmGameARLineLauncherDirectorCameraNative(const TCHAR* NativeName);
Native FindBmGameARMultiTargetCameraNative(const TCHAR* NativeName);
Native FindBmGameARSilentPredatorCameraNative(const TCHAR* NativeName);
Native FindBmGameARBatarangTargetNative(const TCHAR* NativeName);
Native FindBmGameARFracturablePontoonPropBaseNative(const TCHAR* NativeName);
Native FindBmGameARPawnBossCrocBaseNative(const TCHAR* NativeName);
Native FindBmGameARPawnBossIvyBaseNative(const TCHAR* NativeName);
Native FindBmGameARPawnBossScarecrowBaseNative(const TCHAR* NativeName);
Native FindBmGameURSeqAct_CrocTeleportFinalAttackRefPointsNative(const TCHAR* NativeName);
Native FindBmGameURSeqAct_SetScarecrowCameraNative(const TCHAR* NativeName);
Native FindBmGameARSoftBodyProjectileNative(const TCHAR* NativeName);
Native FindBmGameARSpecialMoveInstance_HoleGrabNative(const TCHAR* NativeName);
Native FindBmGameARStealthTakeDownStageNative(const TCHAR* NativeName);
Native FindBmGameARStealthTakeDownStage_GrabOnFloorNative(const TCHAR* NativeName);
Native FindBmGameARStealthTakeDownStage_RailingAttackNative(const TCHAR* NativeName);
Native FindBmGameURGFxFSCmdHandler_PlayMovieNative(const TCHAR* NativeName);
Native FindBmGameURGFxGameViewportClientNative(const TCHAR* NativeName);
Native FindBmGameURGFxMovieNative(const TCHAR* NativeName);
Native FindBmGameURGFxMovieFrontendNative(const TCHAR* NativeName);
Native FindBmGameURGFxMovieInvestigateNative(const TCHAR* NativeName);
Native FindBmGameURGFxMovieMapNative(const TCHAR* NativeName);
// @baa 0x01735760
void AutoInitializeRegistrantsBmGame(INT& Lookup)
{
	URAimingConfigFactoryNew::StaticClass();
	URAlternateAnimationAndWeaponConfigFactoryNew::StaticClass();
	ARAltitudeVolume::StaticClass();
	URAnimNotify_AnimSpeech::StaticClass();
	URAnimNotify_Emote::StaticClass();
	URAnimNotify_IdleOverlay::StaticClass();
	URAnimNotify_PlayGadgetAnim::StaticClass();
	URAnimNotify_Rumble::StaticClass();
	URAnimNotify_Script::StaticClass();
	URAnimNotify_SpawnParticleFX::StaticClass();
	URAnimNotify_SpawnParticleFX_PCOnly::StaticClass();
	URAnimNotify_StrikeContact::StaticClass();
	URBatmanDamageStateFactoryNew::StaticClass();
	ARBMCameraEmitter::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMCameraEmitterNative;
	ARBMCombatPoint::StaticClass();
	URBMRagdollBoneFollower::StaticClass();
	URBMScreenShakeModifier::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMScreenShakeModifierNative;
	ARBMWeapon::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMWeaponNative;
	ARBMWeaponMelee::StaticClass();
	ARBMWeaponRanged::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMWeaponRangedNative;
	URBoneRescaleConfigFactoryNew::StaticClass();
	ARCameraBlockingVolume::StaticClass();
	URCapeCollisionConfigFactoryNew::StaticClass();
	URCapeCollisionShapeConfigFactoryNew::StaticClass();
	URCapeConfigFactoryNew::StaticClass();
	URCapeStateBoneConfigFactoryNew::StaticClass();
	URCapeStateConfigFactoryNew::StaticClass();
	URCharacter::StaticClass();
	URCharacter_ThugBase::StaticClass();
	URCharacterBioCue::StaticClass();
	URCharacterBioCueFactoryNew::StaticClass();
	URCharacterViewerConfigFactoryNew::StaticClass();
	ARChatterBoxBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARChatterBoxBaseNative;
	ARCinematicActor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCinematicActorNative;
	ARCinematicBatmanBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCinematicBatmanBaseNative;
	URConfig::StaticClass();
	ARCreeperVineBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCreeperVineBaseNative;
	URCrimeSceneAsset::StaticClass();
	URCrimeSceneAssetFactoryNew::StaticClass();
	ARCrowdAgent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCrowdAgentNative;
	ARCrowdAttractor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCrowdAttractorNative;
	ARCrowdAttractor_Cylinder::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCrowdAttractor_CylinderNative;
	ARCrowdManager::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCrowdManagerNative;
	ARCrowdSequence::StaticClass();
	URDamageType::StaticClass();
	URDmgType_CombatTakedown::StaticClass();
	URDmgType_Counter::StaticClass();
	URDmgType_IntoThrow::StaticClass();
	URDmgType_Redirect::StaticClass();
	URDmgType_Strike::StaticClass();
	URDmgType_Takedown::StaticClass();
	URDmgType_Takedown_Floor::StaticClass();
	URDmgType_Throw::StaticClass();
	URDummyEvidenceConfig::StaticClass();
	URDummyEvidenceConfigFactoryNew::StaticClass();
	ARElectrifiedFloorPanel::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARElectrifiedFloorPanelNative;
	AREndPointMarker::StaticClass();
	UREvidence::StaticClass();
	UREvidenceFactoryNew::StaticClass();
	UREvidenceInterface::StaticClass();
	UREvidenceLog::StaticClass();
	ARFadeManager::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARFadeManagerNative;
	URForceFieldConfigFactoryNew::StaticClass();
	URForensicsInvestigator::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURForensicsInvestigatorNative;
	ARGameInfo::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARGameInfoNative;
	ARGameRI::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARGameRINative;
	ARGatherRootPointBase::StaticClass();
	ARGatherRootPointSpawnerBase::StaticClass();
	ARGIChallenge::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARGIChallengeNative;
	ARGrappleSmoothingVolume::StaticClass();
	URHUDPrompt::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURHUDPromptNative;
	URIdleTransitionConfigFactoryNew::StaticClass();
	URIdleWithDeathConfigFactoryNew::StaticClass();
	ARInteractableItem::StaticClass();
	ARInvestigateStaticMeshActor::StaticClass();
	ARJokerTannoy::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARJokerTannoyNative;
	URMatineeSpecialMoveFactoryNew::StaticClass();
	URMirrorConfigFactoryNew::StaticClass();
	URPairedIdleConfigFactoryNew::StaticClass();
	ARPawnSpawnObject::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnSpawnObjectNative;
	ARPickupBase::StaticClass();
	ARPlantPodHomingSmallBase::StaticClass();
	ARPlayerBlockingVolume::StaticClass();
	ARPontoonBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPontoonBaseNative;
	ARPontoonEdgeBlockerBase::StaticClass();
	URPoseConfigFactoryNew::StaticClass();
	URSeqAct_ActivateElectrifiedFloorPanels::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSeqAct_ActivateElectrifiedFloorPanelsNative;
	URSeqAct_ActivateScarecrow::StaticClass();
	URSeqAct_BatmanState::StaticClass();
	URSeqAct_CameraShake::StaticClass();
	URSeqAct_ChangeMovieStatus::StaticClass();
	URSeqAct_Credits::StaticClass();
	URSeqAct_CrocPerformChargeAttack::StaticClass();
	URSeqAct_CrocPerformCloseAttack::StaticClass();
	URSeqAct_CrocPerformSmashAttack::StaticClass();
	URSeqAct_CrocPerformSneakPeek::StaticClass();
	URSeqAct_DisableCrocAttacks::StaticClass();
	URSeqAct_DropPlayerFromForensicsModes::StaticClass();
	URSeqAct_FadeScreen::StaticClass();
	URSeqAct_FadeSound::StaticClass();
	URSeqAct_ForceCrocToJumpOff::StaticClass();
	URSeqAct_FullScreenPlayer::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSeqAct_FullScreenPlayerNative;
	URSeqAct_GetThugStatus::StaticClass();
	URSeqAct_GrappleToVantagePoint::StaticClass();
	URSeqAct_HelpText::StaticClass();
	URSeqAct_HUDTimer::StaticClass();
	URSeqAct_InDialogue::StaticClass();
	URSeqAct_IsOnPontoon::StaticClass();
	URSeqAct_KillScarecrow::StaticClass();
	URSeqAct_MakeBatmanLookAtItems::StaticClass();
	URSeqAct_Mixbin::StaticClass();
	URSeqAct_ModifyPostProcess::StaticClass();
	URSeqAct_MovePlayer::StaticClass();
	URSeqAct_NewSilentPredWave::StaticClass();
	URSeqAct_PlayCameraEmitter::StaticClass();
	URSeqAct_RandomSwitchForGameOver::StaticClass();
	URSeqAct_ScarecrowEffect::StaticClass();
	URSeqAct_SetEvidenceScanned::StaticClass();
	URSeqAct_SetMeshInvestigationInfo::StaticClass();
	URSeqAct_SetNeedsRescue::StaticClass();
	URSeqAct_SetPawnsREvidence::StaticClass();
	URSeqAct_SetRoomUnlocked::StaticClass();
	URSeqAct_SetScarecrowFocus::StaticClass();
	URSeqAct_SetScarecrowInspect::StaticClass();
	URSeqAct_SetScarecrowParameters::StaticClass();
	URSeqAct_SetScarecrowSearch::StaticClass();
	URSeqAct_SetScarecrowSearchAnims::StaticClass();
	URSeqAct_SetStationary1stPersonCamera::StaticClass();
	URSeqAct_SetTrackingObjectVars::StaticClass();
	URSeqAct_SetTrackingSpotlightVars::StaticClass();
	URSeqAct_SetVenomParameters::StaticClass();
	URSeqAct_ShowLevelIntroText::StaticClass();
	URSeqAct_SmilexBombClock::StaticClass();
	URSeqAct_SmoothCameraTransition::StaticClass();
	URSeqAct_StreamInPackage::StaticClass();
	URSeqAct_TriggerRunTheGauntlet::StaticClass();
	URSeqAct_UnlockXrayMode::StaticClass();
	URSeqEvent_EvidenceFlagSet::StaticClass();
	URSeqEvent_EvidenceFound::StaticClass();
	URSeqEvent_HitByGadget::StaticClass();
	URSeqEvent_ItemInvestigated::StaticClass();
	URSeqVar_Croc::StaticClass();
	URSeqVar_Frank::StaticClass();
	URSeqVar_Joker::StaticClass();
	URSeqVar_JokerBedPuller::StaticClass();
	URSimpleIdleConfigFactoryNew::StaticClass();
	URSmashablePropConfigFactoryNew::StaticClass();
	URSpecialMoveFactoryNew::StaticClass();
	URSpotableInterface::StaticClass();
	ARVaporVolumeBase::StaticClass();
	URWeaponConfigFactoryNew::StaticClass();
	ARXrayInteractableItem::StaticClass();
	ARXrayInterpActor::StaticClass();
	URAimingConfig::StaticClass();
	URAnimConfig::StaticClass();
	URAnimUtil::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURAnimUtilNative;
	URBoneRescaleConfig::StaticClass();
	URCharacterViewerConfig::StaticClass();
	URDirectionalAnimConfig::StaticClass();
	URMirrorConfig::StaticClass();
	URPoseConfig::StaticClass();
	URWeaponConfig::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURWeaponConfigNative;
	URAnimNode_AnimCapture::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURAnimNode_AnimCaptureNative;
	URAnimNode_AnimTransform::StaticClass();
	URAnimNode_Bat::StaticClass();
	URAnimNode_Cape::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURAnimNode_CapeNative;
	URAnimNode_Pose::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURAnimNode_PoseNative;
	URAnimNode_ScalePlayRateToLength::StaticClass();
	URAnimNotify_AddForce::StaticClass();
	URAnimNotify_BeginBoneRescale::StaticClass();
	URAnimNotify_BeginEnd::StaticClass();
	URAnimNotify_BeginFixGroup::StaticClass();
	URAnimNotify_BeginFixIK::StaticClass();
	URAnimNotify_BeginRagdoll::StaticClass();
	URAnimNotify_CanCancelAfterHere::StaticClass();
	URAnimNotify_CanCancelBeforeHere::StaticClass();
	URAnimNotify_CanCorrectAfterHere::StaticClass();
	URAnimNotify_Clip::StaticClass();
	URAnimNotify_ClipRootMotion::StaticClass();
	URAnimNotify_CollisionOptions::StaticClass();
	URAnimNotify_EndFixGroup::StaticClass();
	URAnimNotify_EndFixIK::StaticClass();
	URAnimNotify_EndRagdoll::StaticClass();
	URAnimNotify_FloorHeight::StaticClass();
	URAnimNotify_FootPassing::StaticClass();
	URAnimNotify_FootSyncIn::StaticClass();
	URAnimNotify_FootSyncOut::StaticClass();
	URAnimNotify_ForwardYaw::StaticClass();
	URAnimNotify_MeetingPoint::StaticClass();
	URAnimNotify_SetFaceFXRegister::StaticClass();
	URAnimNotify_WeaponSwitch::StaticClass();
	URAnimUtil_AdditiveAnimOutput::StaticClass();
	URAnimUtil_AimingOutput::StaticClass();
	URAnimUtil_AnimAccumulator::StaticClass();
	URAnimUtil_AnimOutput::StaticClass();
	URAnimUtil_FaceFXOutput::StaticClass();
	URAnimUtil_IKOutput::StaticClass();
	URAnimUtil_Layers::StaticClass();
	URAnimUtil_MovementOutput::StaticClass();
	URAnimUtil_MovementPlayer::StaticClass();
	URAnimUtil_OverlayPlayer::StaticClass();
	URAnimUtil_PhysicsOutput::StaticClass();
	URAnimUtil_PosePlayer::StaticClass();
	URAnimUtil_RagdollPlayer::StaticClass();
	URSkelControlFootPlacement::StaticClass();
	ARBMDebugCameraController::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMDebugCameraControllerNative;
	UREnvironmentSpecialMoveWrapper::StaticClass();
	UREnvironmentSpecialMoveWrapperFalling::StaticClass();
	ARPlayerController::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPlayerControllerNative;
	ARPlayerControllerCombat::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPlayerControllerCombatNative;
	URPlayerInput::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURPlayerInputNative;
	URSimpleSpecialMoveConfig::StaticClass();
	URSpecialMoveConfig::StaticClass();
	URSpecialMoveConfig_RelativeAnimMove::StaticClass();
	URSpecialMoveController::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSpecialMoveControllerNative;
	ARSpecialMoveInstance::StaticClass();
	ARSpecialMoveInstance_CatchLedge::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARSpecialMoveInstance_CatchLedgeNative;
	ARSpecialMoveInstance_HarpoonBase::StaticClass();
	ARSpecialMoveInstance_HarpoonYank::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARSpecialMoveInstance_HarpoonYankNative;
	ARSpecialMoveInstance_LineLauncher::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARSpecialMoveInstance_LineLauncherNative;
	ARSpecialMoveInstance_RelativeAnimMove::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARSpecialMoveInstance_RelativeAnimMoveNative;
	ARSpecialMoveInstance_ResonateObject::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARSpecialMoveInstance_ResonateObjectNative;
	ARSpecialMoveInstance_SwingToVantagePoint::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARSpecialMoveInstance_SwingToVantagePointNative;
	ARLevelSelectMenu::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARLevelSelectMenuNative;
	URPersistentData::StaticClass();
	URPersistentOptions::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURPersistentOptionsNative;
	URSaveGameManager::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSaveGameManagerNative;
	URSeqVar_DDAIntValue::StaticClass();
	ARAmbientSoundTrackingVolume::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARAmbientSoundTrackingVolumeNative;
	ARAmbientSoundVolume::StaticClass();
	ARAudioPoint::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARAudioPointNative;
	ARAudioPointController::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARAudioPointControllerNative;
	URBMSeqAct_PlaySpeech::StaticClass();
	URSeqAct_ConversationDialogue::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSeqAct_ConversationDialogueNative;
	URSeqAct_DuckDialogue::StaticClass();
	URSeqAct_PlayerDialogueLine::StaticClass();
	URSeqAct_PlayerDialogueOptions::StaticClass();
	URSeqAct_PlaySpeechBase::StaticClass();
	URSeqAct_PlaySpeechConversation::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSeqAct_PlaySpeechConversationNative;
	URSeqAct_PlayTVSequenceBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSeqAct_PlayTVSequenceBaseNative;
	URSeqAct_PlayTVSequenceSingleLine::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSeqAct_PlayTVSequenceSingleLineNative;
	URSeqAct_RadioDialogueLine::StaticClass();
	URSeqAct_SpeechEventManager::StaticClass();
	URSeqAct_SpeechEventManagerBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSeqAct_SpeechEventManagerBaseNative;
	URSeqAct_UnduckDialogue::StaticClass();
	URSeqAct_VoiceOfArkham::StaticClass();
	URAlternateAnimationAndWeaponConfig::StaticClass();
	URAnimNotify_CounterHit::StaticClass();
	URAnimNotify_Takedown::StaticClass();
	URBatmanDamageState::StaticClass();
	ARBMPawnAI::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMPawnAINative;
	ARBMPawnAIAnim::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMPawnAIAnimNative;
	UREnvironmentCheckTicker::StaticClass();
	ARPawn::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnNative;
	ARPawnBossVenomBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnBossVenomBaseNative;
	ARPawnBossVenomJokerBase::StaticClass();
	ARPawnCharacter::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnCharacterNative;
	ARPawnCombat::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnCombatNative;
	ARPawnFriendly::StaticClass();
	ARPawnPlayer::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnPlayerNative;
	ARPawnPlayerAnim::StaticClass();
	ARPawnPlayerBm::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnPlayerBmNative;
	ARPawnPlayerChallengeJokerBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnPlayerChallengeJokerBaseNative;
	ARPawnPlayerCombat::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnPlayerCombatNative;
	ARPawnPlayerJokerBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnPlayerJokerBaseNative;
	ARPawnVillain::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnVillainNative;
	URSeqAct_UpdateBatmanDamageLevel::StaticClass();
	ARBMCombatCollisionProxy::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMCombatCollisionProxyNative;
	ARBMCombatDamageProxy::StaticClass();
	ARBMCombatDangerZone::StaticClass();
	ARCombatArea::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCombatAreaNative;
	ARCombatMove::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCombatMoveNative;
	ARCombatMove_BatmanAttack::StaticClass();
	ARCombatMove_BatmanCounter::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCombatMove_BatmanCounterNative;
	ARCombatMove_BatmanStrike::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCombatMove_BatmanStrikeNative;
	ARCombatMove_BatmanWeaponAttack::StaticClass();
	URSeqAct_CombatProgress::StaticClass();
	UAlertInstance::StaticClass();
	ARAlertEventCoordinator::StaticClass();
	ARAlertEventCoordinator_Batman::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARAlertEventCoordinator_BatmanNative;
	ARAlertEventCoordinator_General::StaticClass();
	ARBMAIController::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMAIControllerNative;
	ARBMAIManager::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMAIManagerNative;
	URBMBehaviour::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviourNative;
	URBMBehaviour_AttachToEvents::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviour_AttachToEventsNative;
	URBMBehaviour_Combat::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviour_CombatNative;
	URBMBehaviour_CombatAI::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviour_CombatAINative;
	URBMBehaviour_CombatHeavyObject::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviour_CombatHeavyObjectNative;
	URBMBehaviour_CombatRifle::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviour_CombatRifleNative;
	URBMBehaviour_CombatStunStick::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviour_CombatStunStickNative;
	URBMBehaviour_Controlled::StaticClass();
	URBMBehaviour_Conversation::StaticClass();
	URBMBehaviour_IdleWithPlannarProp::StaticClass();
	URBMBehaviour_MiniCutscene::StaticClass();
	URBMBehaviour_MoveTo::StaticClass();
	URBMBehaviour_MoveToBatmanInChair::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviour_MoveToBatmanInChairNative;
	URBMBehaviour_MoveToGroup::StaticClass();
	URBMBehaviour_MoveToJokerInChair::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviour_MoveToJokerInChairNative;
	URBMBehaviour_Sniper::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviour_SniperNative;
	URBMBehaviour_StartConversation::StaticClass();
	URBMBehaviour_Venom::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviour_VenomNative;
	URBMBehaviourAutoStringUp::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMBehaviourAutoStringUpNative;
	URBMBehaviourOverlay::StaticClass();
	ARBMCombatManager::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMCombatManagerNative;
	ARBMDialogueCoordinator::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMDialogueCoordinatorNative;
	URBMExitCondition::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMExitConditionNative;
	URBMExitConditionCombiner::StaticClass();
	URBmPawnSpawner::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBmPawnSpawnerNative;
	URBMPawnSpawnerController::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMPawnSpawnerControllerNative;
	URBMRadioManager::StaticClass();
	URBMRoomAIState::StaticClass();
	URBMSpeechManager::StaticClass();
	URBMWaveController::StaticClass();
	ARBMWeaponStunStickBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMWeaponStunStickBaseNative;
	URCharacterRandom::StaticClass();
	ARChatteringTeeth::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARChatteringTeethNative;
	ARDeadBodyBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARDeadBodyBaseNative;
	URIdleConfig::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURIdleConfigNative;
	URIdleTransitionConfig::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURIdleTransitionConfigNative;
	URIdleWithDeathConfig::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURIdleWithDeathConfigNative;
	URPairedIdleConfig::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURPairedIdleConfigNative;
	URSeqAct_ChallengeAction::StaticClass();
	URSeqAct_CombatChallengeSpawner::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSeqAct_CombatChallengeSpawnerNative;
	URSeqAct_InfiniteCombatSpawner::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSeqAct_InfiniteCombatSpawnerNative;
	ARShockNoise_AlertProxy::StaticClass();
	URSimpleIdleConfig::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSimpleIdleConfigNative;
	URBMIncapacitatedPawnCounter::StaticClass();
	URBMSeqEvent_BehaviourRoot::StaticClass();
	URBMSeqEvent_BMSpotted::StaticClass();
	URBMSeqEvent_ControllerActivated::StaticClass();
	URSeqAct_CheckPlayerHealth::StaticClass();
	URSeqAct_CombatMusic::StaticClass();
	URSeqAct_GetNumPawnsInVolume::StaticClass();
	URSeqAct_Music::StaticClass();
	URSeqAct_PlayScaledDistanceSound::StaticClass();
	URSeqEvent_RopeCut::StaticClass();
	URSeqEvent_Smashed::StaticClass();
	UComparisonListSharedDataCache::StaticClass();
	ARBMPathNode_CrossLevel::StaticClass();
	ARBMPathNode_DisruptableDoor::StaticClass();
	ARBMPathNode_FenceJump::StaticClass();
	ARBMPathNode_FenceJumpProxy::StaticClass();
	ARBMPathNode_GapJump::StaticClass();
	ARBMPathNode_GapJumpProxy::StaticClass();
	ARBMPathNode_Ladder::StaticClass();
	ARBMPathNode_SpecialMove::StaticClass();
	ARBMPathNode_VariablePositionTraverse::StaticClass();
	ARBMPathNode_VariablePositionTraverseProxy::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMPathNode_VariablePositionTraverseProxyNative;
	URBMReachSpec::StaticClass();
	ARBMRouter::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMRouterNative;
	ARBMRouter_DynamicObject::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMRouter_DynamicObjectNative;
	ARBMRouter_NoPawn::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMRouter_NoPawnNative;
	ARBMRouteRequest::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMRouteRequestNative;
	ARBMRouteRequest_BuildComparisonList::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMRouteRequest_BuildComparisonListNative;
	ARBMRouteRequest_FindShortestPath::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMRouteRequest_FindShortestPathNative;
	ARBMRouteRequest_FindShortestPathAvoidingLadder::StaticClass();
	ARBMRouteRequest_FindSinglePath::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMRouteRequest_FindSinglePathNative;
	ARBMRouteRequest_HideOnCorner::StaticClass();
	ARBMRouteRequest_NervousSearch::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMRouteRequest_NervousSearchNative;
	ARBMRouteRequest_PerimeterBuilderWrapper::StaticClass();
	ARBMRouteRequest_RunAway::StaticClass();
	ARBMRouteRequest_TerrifiedSearch::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBMRouteRequest_TerrifiedSearchNative;
	ARBMRouterManager::StaticClass();
	URBMRouterPath::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURBMRouterPathNative;
	ARBMScout::StaticClass();
	URBMSpecialMove_ReachSpec::StaticClass();
	ARCornerPoint::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCornerPointNative;
	ARCornerPointBase::StaticClass();
	ARCornerWallMarker::StaticClass();
	ARCornerWallMarkerBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCornerWallMarkerBaseNative;
	URPairedCornerRenderingComponent::StaticClass();
	URPathGateComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURPathGateComponentNative;
	ARPathNode_DynamicFractureWall::StaticClass();
	ARPathNode_Pontoon::StaticClass();
	ARPontoonBridgeManager::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPontoonBridgeManagerNative;
	ARBatarang::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBatarangNative;
	ARBatarangProjectile::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBatarangProjectileNative;
	ARBatarangProjectile_Controllable::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBatarangProjectile_ControllableNative;
	ARBatclawBlockingVolume::StaticClass();
	ARBatDistractProjectile::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBatDistractProjectileNative;
	ARChatteringTeethGadgetBase::StaticClass();
	ARControllableChatteringTeethBase::StaticClass();
	ARCrocLineLauncherBlockingVolume::StaticClass();
	ARExplosiveGooMine::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARExplosiveGooMineNative;
	URGadgetSelect::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURGadgetSelectNative;
	ARGooSpray::StaticClass();
	ARGrappleBlockingVolume::StaticClass();
	ARGrappleGun::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARGrappleGunNative;
	ARGrapplePointCatchmentArea::StaticClass();
	ARHarpoonGun::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARHarpoonGunNative;
	ARHarpoonProjectile::StaticClass();
	ARInventoryGadget::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARInventoryGadgetNative;
	ARInventoryManager::StaticClass();
	ARJokerGlassesGadgetBase::StaticClass();
	ARJokerGunGadgetBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARJokerGunGadgetBaseNative;
	ARLineLauncher::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARLineLauncherNative;
	ARLineLauncherBlockingVolume::StaticClass();
	ARPhotoScanner::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPhotoScannerNative;
	ARPhysicsGrabber::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPhysicsGrabberNative;
	ARProjectile::StaticClass();
	ARProjectileWithRope::StaticClass();
	ARResonatorTuner::StaticClass();
	ARTapePlayer::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARTapePlayerNative;
	ARBunkerDoorVillainBlocker::StaticClass();
	ARLevelTransition::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARLevelTransitionNative;
	ARLevelTransitionDoorBase::StaticClass();
	ARLevelTransitionDoorBunkerNativeBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARLevelTransitionDoorBunkerNativeBaseNative;
	ARLevelTransitionP::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARLevelTransitionPNative;
	ARLevelTransitionPath::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARLevelTransitionPathNative;
	URLevelTransitionRenderingComponent::StaticClass();
	ARLevelVolume::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARLevelVolumeNative;
	ARPlayerStartInLevel::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPlayerStartInLevelNative;
	URPlayerStartInLevelRenderingComponent::StaticClass();
	URSeqAct_CheckURLParam::StaticClass();
	URSeqAct_LockDown::StaticClass();
	URSeqAct_PrepareMapChangeFromURL::StaticClass();
	URAnimNotify_Foley::StaticClass();
	URAnimNotify_Footstep::StaticClass();
	ARExplodableWallBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARExplodableWallBaseNative;
	ARGargoyleBombBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARGargoyleBombBaseNative;
	ARGrapplePoint::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARGrapplePointNative;
	ARHarpoonDragBase::StaticClass();
	ARHarpoonDragFloatingPlatformBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARHarpoonDragFloatingPlatformBaseNative;
	ARHarpoonDragPhysicsBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARHarpoonDragPhysicsBaseNative;
	ARHarpoonDragTrack::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARHarpoonDragTrackNative;
	ARHidePoint::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARHidePointNative;
	URHidePointRenderingComponent::StaticClass();
	ARLadder::StaticClass();
	ARPatrolPoint::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPatrolPointNative;
	URPatrolPointRenderingComponent::StaticClass();
	ARRemoveableGrate::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARRemoveableGrateNative;
	ARRescuePoint::StaticClass();
	ARRopeBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARRopeBaseNative;
	URRopeComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURRopeComponentNative;
	URRopeComponentBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURRopeComponentBaseNative;
	URRopeEditorRenderingComponent::StaticClass();
	ARRopeTest::StaticClass();
	ARShimmyEdgeMarker::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARShimmyEdgeMarkerNative;
	URSimpleRopeComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSimpleRopeComponentNative;
	ARSmashableProp::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARSmashablePropNative;
	URSmashablePropConfig::StaticClass();
	ARSnapToPositionActor::StaticClass();
	ARSpecialMoveEnvironmentObject::StaticClass();
	ARTunnelFunnel::StaticClass();
	ARTunnelGrateBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARTunnelGrateBaseNative;
	ARWaterLevelMarker::StaticClass();
	URB_ActualDistanceConstraintSetup::StaticClass();
	URCapeCollisionConfig::StaticClass();
	URCapeCollisionShapeConfig::StaticClass();
	URCapeComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURCapeComponentNative;
	URCapeConfig::StaticClass();
	URCapeRenderingComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURCapeRenderingComponentNative;
	URCapeSkeletalMeshComponent::StaticClass();
	URCapeStateBoneConfig::StaticClass();
	URCapeStateConfig::StaticClass();
	URCapeStateController::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURCapeStateControllerNative;
	URConstrainingComponent::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURConstrainingComponentNative;
	URForceField::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURForceFieldNative;
	URForceFieldConfig::StaticClass();
	ARMedicalPlasticFlapsBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARMedicalPlasticFlapsBaseNative;
	ARRagdollWakeupVolume::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARRagdollWakeupVolumeNative;
	ARRandomDelay::StaticClass();
	ARWindVolume::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARWindVolumeNative;
	ARFractureWallBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARFractureWallBaseNative;
	URActorFactoryForensicsDna::StaticClass();
	URActorFactoryForensicsDnaNonScan::StaticClass();
	URActorFactoryXrayInterItem::StaticClass();
	URActorFactoryXrayMesh::StaticClass();
	URActorFactoryXrayWire::StaticClass();
	ARForensicDnaSplat::StaticClass();
	ARForensicDnaSplatStatic::StaticClass();
	ARForensicDnaSplatStaticNonScan::StaticClass();
	ARForensicsDevice::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARForensicsDeviceNative;
	ARDisruptableObjectBase::StaticClass();
	ARDisruptableObjectDoor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARDisruptableObjectDoorNative;
	AR3rdPersonCamera::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameAR3rdPersonCameraNative;
	ARAnimatedCameraActor::StaticClass();
	URAnimNotify_Camera::StaticClass();
	ARBatarangCamera::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBatarangCameraNative;
	ARBmBatmanCutscene::StaticClass();
	ARBMCutsceneBase::StaticClass();
	ARCameraActor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCameraActorNative;
	ARCinematicCameraActor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARCinematicCameraActorNative;
	ARControllableChatteringTeethCamera::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARControllableChatteringTeethCameraNative;
	URDOFManager::StaticClass();
	ARGlideKickCamera::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARGlideKickCameraNative;
	ARInGameCinematicCam::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARInGameCinematicCamNative;
	ARLineLauncherDirectorCamera::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARLineLauncherDirectorCameraNative;
	ARMultiTargetCamera::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARMultiTargetCameraNative;
	ARScarecrowCamera::StaticClass();
	ARSilentPredatorCamera::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARSilentPredatorCameraNative;
	ARBatarangTarget::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARBatarangTargetNative;
	ARBMBossManager::StaticClass();
	ARFracturablePontoonPropBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARFracturablePontoonPropBaseNative;
	URGuardRemovalController::StaticClass();
	ARPawnBossCrocBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnBossCrocBaseNative;
	ARPawnBossIvyBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnBossIvyBaseNative;
	ARPawnBossScarecrowBase::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARPawnBossScarecrowBaseNative;
	ARPlantPod::StaticClass();
	ARPontoonGateBase::StaticClass();
	URSeqAct_CrocRelativeAnimCamera::StaticClass();
	URSeqAct_CrocTeleportFinalAttackRefPoints::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSeqAct_CrocTeleportFinalAttackRefPointsNative;
	URSeqAct_SetScarecrowCamera::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURSeqAct_SetScarecrowCameraNative;
	URSeqAct_SetScarecrowPositionOnPath::StaticClass();
	ARSoftBodyProjectile::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARSoftBodyProjectileNative;
	ARSpecialMoveInstance_HoleGrab::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARSpecialMoveInstance_HoleGrabNative;
	ARStealthTakeDownStage::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARStealthTakeDownStageNative;
	ARStealthTakeDownStage_GrabOnFloor::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARStealthTakeDownStage_GrabOnFloorNative;
	ARStealthTakeDownStage_RailingAttack::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameARStealthTakeDownStage_RailingAttackNative;
	ARStealthTakeDownStageFearBase::StaticClass();
	URGFxFSCmdHandler_PlayMovie::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURGFxFSCmdHandler_PlayMovieNative;
	URGFxGameViewportClient::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURGFxGameViewportClientNative;
	URGFxMovie::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURGFxMovieNative;
	URGFxMovieBio::StaticClass();
	URGFxMovieFrontend::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURGFxMovieFrontendNative;
	URGFxMovieHUD::StaticClass();
	URGFxMovieInvestigate::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURGFxMovieInvestigateNative;
	URGFxMovieMap::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindBmGameURGFxMovieMapNative;
	URGFxMovieRiddler::StaticClass();
	URGFxMovieUpgrades::StaticClass();
	URSeqAct_PlayGfxMovie::StaticClass();
}

Native FindEditorUBrushBuilderNative(const TCHAR* NativeName);
// @baa 0x00ee5340
void AutoInitializeRegistrantsEditor(INT& Lookup)
{
	UAnalyzeContentCommandlet::StaticClass();
	UAnalyzeCookedContentCommandlet::StaticClass();
	UAnalyzeCookedPackagesCommandlet::StaticClass();
	UAnalyzeFallbackMaterialsCommandlet::StaticClass();
	UAnalyzeReferencedContentCommandlet::StaticClass();
	UAnalyzeScriptCommandlet::StaticClass();
	UAnimObjectFactory::StaticClass();
	UAnimSetFactoryNew::StaticClass();
	UAnimTreeFactoryNew::StaticClass();
	UApexDestructibleAssetFactory::StaticClass();
	UApexMeshParticleFactoryAssetFactory::StaticClass();
	UApexParticleSystemAssetFactory::StaticClass();
	UApexRenderMeshAssetFactory::StaticClass();
	UBatchExportCommandlet::StaticClass();
	UBrushBuilder::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindEditorUBrushBuilderNative;
	UBuildContentTagIndexCommandlet::StaticClass();
	UCameraAnimFactory::StaticClass();
	UChangePrefabSequenceClassCommandlet::StaticClass();
	UClassExporterUC::StaticClass();
	UClassFactoryUC::StaticClass();
	UColladaFactory::StaticClass();
	UCompressAnimationsCommandlet::StaticClass();
	UConformCommandlet::StaticClass();
	UContentTagIndex::StaticClass();
	UCookPackagesCommandlet::StaticClass();
	UCreateDefaultStyleCommandlet::StaticClass();
	UCubeBuilder::StaticClass();
	UCurveEdPresetCurveFactoryNew::StaticClass();
	UCutDownContentCommandlet::StaticClass();
	UDecalMaterialFactoryNew::StaticClass();
	UDestructibleDamageParametersFactoryNew::StaticClass();
	UDiffPackagesCommandlet::StaticClass();
	UDoWithAnimationsCommandlet::StaticClass();
	UDumpEmittersCommandlet::StaticClass();
	UDumpLightmapInfoCommandlet::StaticClass();
	UDumpShadersCommandlet::StaticClass();
	UEditorComponent::StaticClass();
	UEditorEngine::StaticClass();
	UEditorPlayer::StaticClass();
	UEditorUserSettings::StaticClass();
	UEditorViewportInput::StaticClass();
	UEdModeComponent::StaticClass();
	UExamineOutersCommandlet::StaticClass();
	UExporterT3DX::StaticClass();
	UExportLocCommandlet::StaticClass();
	UFindDuplicateKismetObjectsCommandlet::StaticClass();
	UFindEmitterMismatchedLODsCommandlet::StaticClass();
	UFindEmitterModifiedLODsCommandlet::StaticClass();
	UFindEmitterModuleLODErrorsCommandlet::StaticClass();
	UFindQuestionableTexturesCommandlet::StaticClass();
	UFindRenamedPrefabSequencesCommandlet::StaticClass();
	UFindStaticActorsRefsCommandlet::StaticClass();
	UFindTexturesWithMissingPhysicalMaterialsCommandlet::StaticClass();
	UFixAmbiguousMaterialParametersCommandlet::StaticClass();
	UFixupEmittersCommandlet::StaticClass();
	UFixupRedirectsCommandlet::StaticClass();
	UFixupSourceUVsCommandlet::StaticClass();
	UFonixFactory::StaticClass();
	UFontFactory::StaticClass();
	UGeomModifier::StaticClass();
	UGeomModifier_Clip::StaticClass();
	UGeomModifier_Create::StaticClass();
	UGeomModifier_Delete::StaticClass();
	UGeomModifier_Edit::StaticClass();
	UGeomModifier_Extrude::StaticClass();
	UGeomModifier_Flip::StaticClass();
	UGeomModifier_Lathe::StaticClass();
	UGeomModifier_Split::StaticClass();
	UGeomModifier_Triangulate::StaticClass();
	UGeomModifier_Turn::StaticClass();
	UGeomModifier_Weld::StaticClass();
	ULensFlareFactoryNew::StaticClass();
	ULevelExporterOBJ::StaticClass();
	ULevelExporterSTL::StaticClass();
	ULevelExporterT3D::StaticClass();
	ULevelFactory::StaticClass();
	ULightingChannelsObject::StaticClass();
	UListCorruptedComponentsCommandlet::StaticClass();
	UListDistanceCrossFadeNodesCommandlet::StaticClass();
	UListEmittersUsingModuleCommandlet::StaticClass();
	UListLoopingEmittersCommandlet::StaticClass();
	UListPackagesReferencingCommandlet::StaticClass();
	UListPSysFixedBoundSettingCommandlet::StaticClass();
	UListScriptReferencedContentCommandlet::StaticClass();
	UListSoundNodeWavesCommandlet::StaticClass();
	ULoadPackageCommandlet::StaticClass();
	ULocSoundInfoCommandlet::StaticClass();
	UMakeCommandlet::StaticClass();
	UMaterialExporterT3D::StaticClass();
	UMaterialFactory::StaticClass();
	UMaterialFactoryNew::StaticClass();
	UMaterialInstanceConstantFactoryNew::StaticClass();
	UMaterialInstanceTimeVaryingFactoryNew::StaticClass();
	UMergePackagesCommandlet::StaticClass();
	UMineCookedPackagesCommandlet::StaticClass();
	UModelExporterT3D::StaticClass();
	UModelFactory::StaticClass();
	UObjectExporterT3D::StaticClass();
	UPackageExporterT3D::StaticClass();
	UPackageFactory::StaticClass();
	UParticleSystemFactoryNew::StaticClass();
	UPatchScriptCommandlet::StaticClass();
	UPerformMapCheckCommandlet::StaticClass();
	UPerformTerrainMaterialDumpCommandlet::StaticClass();
	UPersistentCookerData::StaticClass();
	UPhysicalMaterialFactoryNew::StaticClass();
	UPhysXParticleSystemFactoryNew::StaticClass();
	UPIEToNormalCommandlet::StaticClass();
	UPkgInfoCommandlet::StaticClass();
	UPolysExporterT3D::StaticClass();
	UPolysFactory::StaticClass();
	UPostProcessFactoryNew::StaticClass();
	UPrecompileShadersCommandlet::StaticClass();
	URebuildMapCommandlet::StaticClass();
	UReimportSkeletalMeshFactory::StaticClass();
	UReimportSoundFactory::StaticClass();
	UReimportStaticMeshFactory::StaticClass();
	UReimportTextureFactory::StaticClass();
	URenderTargetCubeExporterTGA::StaticClass();
	URenderTargetExporterTGA::StaticClass();
	UReplaceActorCommandlet::StaticClass();
	UResavePackagesCommandlet::StaticClass();
	URFMODSoundFactory::StaticClass();
	URReimportFMODSoundFactory::StaticClass();
	UScaleAudioVolumeCommandlet::StaticClass();
	USequenceExporterT3D::StaticClass();
	USequenceFactory::StaticClass();
	USetMaterialUsageCommandlet::StaticClass();
	USetPackageFlagsCommandlet::StaticClass();
	USetTextureLODGroupCommandlet::StaticClass();
	UShowObjectCountCommandlet::StaticClass();
	UShowStylesCommandlet::StaticClass();
	UShowTaggedPropsCommandlet::StaticClass();
	USkeletalMeshFactory::StaticClass();
	USoundCueFactoryNew::StaticClass();
	USoundExporterWAV::StaticClass();
	USoundFactory::StaticClass();
	USoundGroupInfoCommandlet::StaticClass();
	USoundModeFactory::StaticClass();
	USoundSurroundExporterWAV::StaticClass();
	USoundSurroundFactory::StaticClass();
	USoundTTSFactory::StaticClass();
	USpeedTreeFactory::StaticClass();
	UStaticMeshExporterOBJ::StaticClass();
	UStaticMeshExporterT3D::StaticClass();
	UStaticMeshFactory::StaticClass();
	UStripSourceCommandlet::StaticClass();
	UTerrainExporterT3D::StaticClass();
	UTerrainFactory::StaticClass();
	UTerrainHeightMapExporter::StaticClass();
	UTerrainHeightMapExporterG16BMPT3D::StaticClass();
	UTerrainHeightMapExporterTextT3D::StaticClass();
	UTerrainHeightMapFactory::StaticClass();
	UTerrainHeightMapFactoryG16BMP::StaticClass();
	UTerrainHeightMapFactoryG16BMPT3D::StaticClass();
	UTerrainHeightMapFactoryTextT3D::StaticClass();
	UTerrainLayerSetupFactoryNew::StaticClass();
	UTerrainMaterialFactoryNew::StaticClass();
	UTestCompressionCommandlet::StaticClass();
	UTestWordWrapCommandlet::StaticClass();
	UTextBufferExporterTXT::StaticClass();
	UTextureCubeFactoryNew::StaticClass();
	UTextureExporterBMP::StaticClass();
	UTextureExporterPCX::StaticClass();
	UTextureExporterT3D::StaticClass();
	UTextureExporterTGA::StaticClass();
	UTextureFactory::StaticClass();
	UTextureMovieFactory::StaticClass();
	UTextureRenderTargetCubeFactoryNew::StaticClass();
	UTextureRenderTargetFactoryNew::StaticClass();
	UTransactor::StaticClass();
	UTransBuffer::StaticClass();
	UTrueTypeFontFactory::StaticClass();
	UTrueTypeMultiFontFactory::StaticClass();
	UUT3MapStatsCommandlet::StaticClass();
	UWrangleContentCommandlet::StaticClass();
}

Native FindUnrealEdUScriptDataBaseCommandletNative(const TCHAR* NativeName);
Native FindUnrealEdUUISceneManagerNative(const TCHAR* NativeName);
Native FindUnrealEdUUILayerNative(const TCHAR* NativeName);
// @baa 0x0129b7a0
void AutoInitializeRegistrantsUnrealEd(INT& Lookup)
{
	UAnimNodeEditInfo::StaticClass();
	UAnimNodeEditInfo_AimOffset::StaticClass();
	UAnimSetLabelRenderer::StaticClass();
	UAnimTreeEdSkelComponent::StaticClass();
	UAnimTreeLabelRenderer::StaticClass();
	UApexDestructibleAssetLabelRenderer::StaticClass();
	UArchetypeThumbnailRenderer::StaticClass();
	UASVSkelComponent::StaticClass();
	UBrowserManager::StaticClass();
	UCascadeOptions::StaticClass();
	UCascadePreviewComponent::StaticClass();
	UCurveEdOptions::StaticClass();
	UCurveEdPreset_CosWave::StaticClass();
	UCurveEdPreset_LinearDecay::StaticClass();
	UCurveEdPreset_Nothing::StaticClass();
	UCurveEdPreset_SineWave::StaticClass();
	UCurveEdPreset_UserSet::StaticClass();
	UCurveEdPresetBase::StaticClass();
	UCustomInputProxy_Base::StaticClass();
	UDefaultSizedThumbnailRenderer::StaticClass();
	UEditorUISceneClient::StaticClass();
	UFaceFXStudioSkelComponent::StaticClass();
	UFMODReverbLabelRenderer::StaticClass();
	UFMODSoundLabelRenderer::StaticClass();
	UFontThumbnailRenderer::StaticClass();
	UFracturedStaticMeshLabelRenderer::StaticClass();
	UGenericBrowserType::StaticClass();
	UGenericBrowserType_All::StaticClass();
	UGenericBrowserType_Animation::StaticClass();
	UGenericBrowserType_AnimTree::StaticClass();
	UGenericBrowserType_ApexDestructibleAsset::StaticClass();
	UGenericBrowserType_ApexMeshParticleFactoryAsset::StaticClass();
	UGenericBrowserType_ApexParticleSystemAsset::StaticClass();
	UGenericBrowserType_ApexRenderMeshAsset::StaticClass();
	UGenericBrowserType_Archetype::StaticClass();
	UGenericBrowserType_CameraAnim::StaticClass();
	UGenericBrowserType_CurveEdPresetCurve::StaticClass();
	UGenericBrowserType_Custom::StaticClass();
	UGenericBrowserType_DecalMaterial::StaticClass();
	UGenericBrowserType_DestructibleDamageParameters::StaticClass();
	UGenericBrowserType_FaceFXAnimSet::StaticClass();
	UGenericBrowserType_FaceFXAsset::StaticClass();
	UGenericBrowserType_Font::StaticClass();
	UGenericBrowserType_FracturedStaticMesh::StaticClass();
	UGenericBrowserType_LensFlare::StaticClass();
	UGenericBrowserType_Material::StaticClass();
	UGenericBrowserType_MaterialInstanceConstant::StaticClass();
	UGenericBrowserType_MaterialInstanceTimeVarying::StaticClass();
	UGenericBrowserType_MaterialLackingPhysMat::StaticClass();
	UGenericBrowserType_MorphTargetSet::StaticClass();
	UGenericBrowserType_MorphWeightSequence::StaticClass();
	UGenericBrowserType_ParticleSystem::StaticClass();
	UGenericBrowserType_PhysicalMaterial::StaticClass();
	UGenericBrowserType_PhysicsAsset::StaticClass();
	UGenericBrowserType_PhysXParticleSystem::StaticClass();
	UGenericBrowserType_PostProcess::StaticClass();
	UGenericBrowserType_Prefab::StaticClass();
	UGenericBrowserType_RenderTexture::StaticClass();
	UGenericBrowserType_Sequence::StaticClass();
	UGenericBrowserType_SkeletalMesh::StaticClass();
	UGenericBrowserType_SoundCue::StaticClass();
	UGenericBrowserType_SoundMode::StaticClass();
	UGenericBrowserType_Sounds::StaticClass();
	UGenericBrowserType_SoundWave::StaticClass();
	UGenericBrowserType_SpeechRecognition::StaticClass();
	UGenericBrowserType_SpeedTree::StaticClass();
	UGenericBrowserType_StaticMesh::StaticClass();
	UGenericBrowserType_TerrainLayer::StaticClass();
	UGenericBrowserType_TerrainMaterial::StaticClass();
	UGenericBrowserType_Texture::StaticClass();
	UGenericBrowserType_TextureWithAlpha::StaticClass();
	UGenericBrowserType_UIArchetype::StaticClass();
	UGenericBrowserType_UIScene::StaticClass();
	UGenericBrowserType_UISkin::StaticClass();
	UGenericThumbnailLabelRenderer::StaticClass();
	UIconThumbnailRenderer::StaticClass();
	UInterpEdOptions::StaticClass();
	UInterpTrackAnimControlHelper::StaticClass();
	UInterpTrackColorPropHelper::StaticClass();
	UInterpTrackDirectorHelper::StaticClass();
	UInterpTrackEventHelper::StaticClass();
	UInterpTrackFaceFXHelper::StaticClass();
	UInterpTrackFloatPropHelper::StaticClass();
	UInterpTrackHelper::StaticClass();
	UInterpTrackParticleReplayHelper::StaticClass();
	UInterpTrackSoundHelper::StaticClass();
	UInterpTrackToggleHelper::StaticClass();
	UInterpTrackVectorPropHelper::StaticClass();
	UInterpTrackVisibilityHelper::StaticClass();
	UKismetBindings::StaticClass();
	ULensFlareEditorOptions::StaticClass();
	ULensFlareEditorPropertyWrapper::StaticClass();
	ULensFlarePreviewComponent::StaticClass();
	ULensFlareThumbnailRenderer::StaticClass();
	UMaterialEditorInstanceConstant::StaticClass();
	UMaterialEditorInstanceTimeVarying::StaticClass();
	UMaterialEditorMeshComponent::StaticClass();
	UMaterialEditorOptions::StaticClass();
	UMaterialEditorSkeletalMeshComponent::StaticClass();
	UMaterialInstanceLabelRenderer::StaticClass();
	UMaterialInstanceThumbnailRenderer::StaticClass();
	UMemCountThumbnailLabelRenderer::StaticClass();
	UMixBinLabelRenderer::StaticClass();
	UParticleSystemLabelRenderer::StaticClass();
	UParticleSystemThumbnailRenderer::StaticClass();
	UPhATSimOptions::StaticClass();
	UPhATSkeletalMeshComponent::StaticClass();
	UPhysicsAssetLabelRenderer::StaticClass();
	UPlayerInputMask_CustomDrawProxy::StaticClass();
	UPlayerInputMask_CustomInputProxy::StaticClass();
	UPostProcessLabelRenderer::StaticClass();
	UPrefabThumbnailRenderer::StaticClass();
	UPropertyDrawProxy::StaticClass();
	UPropertyInputArrayItemBase::StaticClass();
	UPropertyInputBool::StaticClass();
	UPropertyInputCombo::StaticClass();
	UPropertyInputEditInline::StaticClass();
	UPropertyInputProxy::StaticClass();
	UPropertyInputText::StaticClass();
	URGenericBrowserType_FMODReverb::StaticClass();
	URGenericBrowserType_FMODSound::StaticClass();
	URGenericBrowserType_MixBin::StaticClass();
	UScriptDataBaseCommandlet::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindUnrealEdUScriptDataBaseCommandletNative;
	USequenceObjectHelper::StaticClass();
	USkeletalMeshLabelRenderer::StaticClass();
	USkeletalMeshThumbnailRenderer::StaticClass();
	USoundLabelRenderer::StaticClass();
	USoundNodeHelper::StaticClass();
	UStaticMeshEditorComponent::StaticClass();
	UStaticMeshLabelRenderer::StaticClass();
	UStaticMeshThumbnailRenderer::StaticClass();
	UTerrainEditOptions::StaticClass();
	UTextureCubeThumbnailRenderer::StaticClass();
	UTextureThumbnailRenderer::StaticClass();
	UThumbnailLabelRenderer::StaticClass();
	UThumbnailManager::StaticClass();
	UThumbnailRenderer::StaticClass();
	UUIEvent_MetaObjectHelper::StaticClass();
	UUISceneExporter::StaticClass();
	UUISceneFactory::StaticClass();
	UUISceneFactoryNew::StaticClass();
	UUISceneFactoryText::StaticClass();
	UUISceneManager::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindUnrealEdUUISceneManagerNative;
	UUISceneThumbnailRenderer::StaticClass();
	UUISequenceHelper::StaticClass();
	UUISequenceObjectHelper::StaticClass();
	UUIState_CustomInputProxy::StaticClass();
	UUIStateClass_CustomInputProxy::StaticClass();
	UUITexture_CustomDrawProxy::StaticClass();
	UUITexture_CustomInputProxy::StaticClass();
	UUnrealEdEngine::StaticClass();
	UUnrealEdKeyBindings::StaticClass();
	UUnrealEdOptions::StaticClass();
	UCascadeParticleSystemComponent::StaticClass();
	UCustomPropertyItemBindings::StaticClass();
	UObjectEditorViewportInput::StaticClass();
	USequenceOpHelper_CalloutInputProxy::StaticClass();
	UUIEditorOptions::StaticClass();
	UUILayer::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindUnrealEdUUILayerNative;
	UUILayerRoot::StaticClass();
	UUIPreviewString::StaticClass();
}

/* UnScript.h DECLARE_NATIVE_TYPE for UCameraAnimInst: the class's table of script natives (name, member pointer). */
typedef void (UCameraAnimInst::*UCameraAnimInstNative)(FFrame& TheStack, RESULT_DECL);

struct UCameraAnimInstNativeInfo
{
	const TCHAR* Name;
	UCameraAnimInstNative Pointer;
};

extern UCameraAnimInstNativeInfo g_025e0988[];
// @baa 0x00ca8160
/* IMPLEMENT_NATIVE_HANDLER for UCameraAnimInst: the native registered under this name, or NULL. */
UCameraAnimInstNative* sub_00ca8160(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0988[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0988[NativeIndex].Name) == 0)
		{
			return &g_025e0988[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UCameraModifier: the class's table of script natives (name, member pointer). */
typedef void (UCameraModifier::*UCameraModifierNative)(FFrame& TheStack, RESULT_DECL);

struct UCameraModifierNativeInfo
{
	const TCHAR* Name;
	UCameraModifierNative Pointer;
};

extern UCameraModifierNativeInfo g_025e09b8[];
// @baa 0x00ca81c0
/* IMPLEMENT_NATIVE_HANDLER for UCameraModifier: the native registered under this name, or NULL. */
UCameraModifierNative* sub_00ca81c0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e09b8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e09b8[NativeIndex].Name) == 0)
		{
			return &g_025e09b8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UCanvas: the class's table of script natives (name, member pointer). */
typedef void (UCanvas::*UCanvasNative)(FFrame& TheStack, RESULT_DECL);

struct UCanvasNativeInfo
{
	const TCHAR* Name;
	UCanvasNative Pointer;
};

extern UCanvasNativeInfo g_025e09d0[];
// @baa 0x00ca8220
/* IMPLEMENT_NATIVE_HANDLER for UCanvas: the native registered under this name, or NULL. */
UCanvasNative* sub_00ca8220(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e09d0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e09d0[NativeIndex].Name) == 0)
		{
			return &g_025e09d0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AController: the class's table of script natives (name, member pointer). */
typedef void (AController::*AControllerNative)(FFrame& TheStack, RESULT_DECL);

struct AControllerNativeInfo
{
	const TCHAR* Name;
	AControllerNative Pointer;
};

extern AControllerNativeInfo g_025e0a98[];
// @baa 0x00ca8280
/* IMPLEMENT_NATIVE_HANDLER for AController: the native registered under this name, or NULL. */
AControllerNative* sub_00ca8280(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0a98[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0a98[NativeIndex].Name) == 0)
		{
			return &g_025e0a98[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ACoverGroup: the class's table of script natives (name, member pointer). */
typedef void (ACoverGroup::*ACoverGroupNative)(FFrame& TheStack, RESULT_DECL);

struct ACoverGroupNativeInfo
{
	const TCHAR* Name;
	ACoverGroupNative Pointer;
};

extern ACoverGroupNativeInfo g_025e0bb8[];
// @baa 0x00ca82e0
/* IMPLEMENT_NATIVE_HANDLER for ACoverGroup: the native registered under this name, or NULL. */
ACoverGroupNative* sub_00ca82e0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0bb8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0bb8[NativeIndex].Name) == 0)
		{
			return &g_025e0bb8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ACoverLink: the class's table of script natives (name, member pointer). */
typedef void (ACoverLink::*ACoverLinkNative)(FFrame& TheStack, RESULT_DECL);

struct ACoverLinkNativeInfo
{
	const TCHAR* Name;
	ACoverLinkNative Pointer;
};

extern ACoverLinkNativeInfo g_025e0bd8[];
// @baa 0x00ca8340
/* IMPLEMENT_NATIVE_HANDLER for ACoverLink: the native registered under this name, or NULL. */
ACoverLinkNative* sub_00ca8340(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0bd8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0bd8[NativeIndex].Name) == 0)
		{
			return &g_025e0bd8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ACoverSlotMarker: the class's table of script natives (name, member pointer). */
typedef void (ACoverSlotMarker::*ACoverSlotMarkerNative)(FFrame& TheStack, RESULT_DECL);

struct ACoverSlotMarkerNativeInfo
{
	const TCHAR* Name;
	ACoverSlotMarkerNative Pointer;
};

extern ACoverSlotMarkerNativeInfo g_025e0c78[];
// @baa 0x00ca83a0
/* IMPLEMENT_NATIVE_HANDLER for ACoverSlotMarker: the native registered under this name, or NULL. */
ACoverSlotMarkerNative* sub_00ca83a0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0c78[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0c78[NativeIndex].Name) == 0)
		{
			return &g_025e0c78[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UCylinderComponent: the class's table of script natives (name, member pointer). */
typedef void (UCylinderComponent::*UCylinderComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UCylinderComponentNativeInfo
{
	const TCHAR* Name;
	UCylinderComponentNative Pointer;
};

extern UCylinderComponentNativeInfo g_025e0ca0[];
// @baa 0x00ca8400
/* IMPLEMENT_NATIVE_HANDLER for UCylinderComponent: the native registered under this name, or NULL. */
UCylinderComponentNative* sub_00ca8400(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0ca0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0ca0[NativeIndex].Name) == 0)
		{
			return &g_025e0ca0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ADroppedPickup: the class's table of script natives (name, member pointer). */
typedef void (ADroppedPickup::*ADroppedPickupNative)(FFrame& TheStack, RESULT_DECL);

struct ADroppedPickupNativeInfo
{
	const TCHAR* Name;
	ADroppedPickupNative Pointer;
};

extern ADroppedPickupNativeInfo g_025e0cb0[];
// @baa 0x00ca8460
/* IMPLEMENT_NATIVE_HANDLER for ADroppedPickup: the native registered under this name, or NULL. */
ADroppedPickupNative* sub_00ca8460(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0cb0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0cb0[NativeIndex].Name) == 0)
		{
			return &g_025e0cb0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UDynamicLightEnvironmentComponent: the class's table of script natives (name, member pointer). */
typedef void (UDynamicLightEnvironmentComponent::*UDynamicLightEnvironmentComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UDynamicLightEnvironmentComponentNativeInfo
{
	const TCHAR* Name;
	UDynamicLightEnvironmentComponentNative Pointer;
};

extern UDynamicLightEnvironmentComponentNativeInfo g_025e0cc8[];
// @baa 0x00ca84c0
/* IMPLEMENT_NATIVE_HANDLER for UDynamicLightEnvironmentComponent: the native registered under this name, or NULL. */
UDynamicLightEnvironmentComponentNative* sub_00ca84c0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0cc8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0cc8[NativeIndex].Name) == 0)
		{
			return &g_025e0cc8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AEmitter: the class's table of script natives (name, member pointer). */
typedef void (AEmitter::*AEmitterNative)(FFrame& TheStack, RESULT_DECL);

struct AEmitterNativeInfo
{
	const TCHAR* Name;
	AEmitterNative Pointer;
};

extern AEmitterNativeInfo g_025e0cd8[];
// @baa 0x00ca8520
/* IMPLEMENT_NATIVE_HANDLER for AEmitter: the native registered under this name, or NULL. */
AEmitterNative* sub_00ca8520(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0cd8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0cd8[NativeIndex].Name) == 0)
		{
			return &g_025e0cd8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AEmitterPool: the class's table of script natives (name, member pointer). */
typedef void (AEmitterPool::*AEmitterPoolNative)(FFrame& TheStack, RESULT_DECL);

struct AEmitterPoolNativeInfo
{
	const TCHAR* Name;
	AEmitterPoolNative Pointer;
};

extern AEmitterPoolNativeInfo g_025e0ce8[];
// @baa 0x00ca8580
/* IMPLEMENT_NATIVE_HANDLER for AEmitterPool: the native registered under this name, or NULL. */
AEmitterPoolNative* sub_00ca8580(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0ce8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0ce8[NativeIndex].Name) == 0)
		{
			return &g_025e0ce8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UFaceFXAsset: the class's table of script natives (name, member pointer). */
typedef void (UFaceFXAsset::*UFaceFXAssetNative)(FFrame& TheStack, RESULT_DECL);

struct UFaceFXAssetNativeInfo
{
	const TCHAR* Name;
	UFaceFXAssetNative Pointer;
};

extern UFaceFXAssetNativeInfo g_025e0d20[];
// @baa 0x00ca85e0
/* IMPLEMENT_NATIVE_HANDLER for UFaceFXAsset: the native registered under this name, or NULL. */
UFaceFXAssetNative* sub_00ca85e0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0d20[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0d20[NativeIndex].Name) == 0)
		{
			return &g_025e0d20[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AFileWriter: the class's table of script natives (name, member pointer). */
typedef void (AFileWriter::*AFileWriterNative)(FFrame& TheStack, RESULT_DECL);

struct AFileWriterNativeInfo
{
	const TCHAR* Name;
	AFileWriterNative Pointer;
};

extern AFileWriterNativeInfo g_025e0d38[];
// @baa 0x00ca8640
/* IMPLEMENT_NATIVE_HANDLER for AFileWriter: the native registered under this name, or NULL. */
AFileWriterNative* sub_00ca8640(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0d38[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0d38[NativeIndex].Name) == 0)
		{
			return &g_025e0d38[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UFont: the class's table of script natives (name, member pointer). */
typedef void (UFont::*UFontNative)(FFrame& TheStack, RESULT_DECL);

struct UFontNativeInfo
{
	const TCHAR* Name;
	UFontNative Pointer;
};

extern UFontNativeInfo g_025e0d58[];
// @baa 0x00ca86a0
/* IMPLEMENT_NATIVE_HANDLER for UFont: the native registered under this name, or NULL. */
UFontNative* sub_00ca86a0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0d58[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0d58[NativeIndex].Name) == 0)
		{
			return &g_025e0d58[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AGameInfo: the class's table of script natives (name, member pointer). */
typedef void (AGameInfo::*AGameInfoNative)(FFrame& TheStack, RESULT_DECL);

struct AGameInfoNativeInfo
{
	const TCHAR* Name;
	AGameInfoNative Pointer;
};

extern AGameInfoNativeInfo g_025e0d88[];
// @baa 0x00ca8700
/* IMPLEMENT_NATIVE_HANDLER for AGameInfo: the native registered under this name, or NULL. */
AGameInfoNative* sub_00ca8700(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0d88[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0d88[NativeIndex].Name) == 0)
		{
			return &g_025e0d88[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AGameReplicationInfo: the class's table of script natives (name, member pointer). */
typedef void (AGameReplicationInfo::*AGameReplicationInfoNative)(FFrame& TheStack, RESULT_DECL);

struct AGameReplicationInfoNativeInfo
{
	const TCHAR* Name;
	AGameReplicationInfoNative Pointer;
};

extern AGameReplicationInfoNativeInfo g_025e0df0[];
// @baa 0x00ca8760
/* IMPLEMENT_NATIVE_HANDLER for AGameReplicationInfo: the native registered under this name, or NULL. */
AGameReplicationInfoNative* sub_00ca8760(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0df0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0df0[NativeIndex].Name) == 0)
		{
			return &g_025e0df0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UGameViewportClient: the class's table of script natives (name, member pointer). */
typedef void (UGameViewportClient::*UGameViewportClientNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGameViewportClientNativeInfo
{
	const TCHAR* Name;
	UGameViewportClientNative Pointer;
};

#pragma pack(pop)
extern UGameViewportClientNativeInfo g_025e3568[];
// @baa 0x00ca87c0
/* IMPLEMENT_NATIVE_HANDLER for UGameViewportClient: the native registered under this name, or NULL. */
UGameViewportClientNative* sub_00ca87c0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e3568[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e3568[NativeIndex].Name) == 0)
		{
			return &g_025e3568[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UHeightFogComponent: the class's table of script natives (name, member pointer). */
typedef void (UHeightFogComponent::*UHeightFogComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UHeightFogComponentNativeInfo
{
	const TCHAR* Name;
	UHeightFogComponentNative Pointer;
};

extern UHeightFogComponentNativeInfo g_025e0e00[];
// @baa 0x00ca8830
/* IMPLEMENT_NATIVE_HANDLER for UHeightFogComponent: the native registered under this name, or NULL. */
UHeightFogComponentNative* sub_00ca8830(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0e00[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0e00[NativeIndex].Name) == 0)
		{
			return &g_025e0e00[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AHUD: the class's table of script natives (name, member pointer). */
typedef void (AHUD::*AHUDNative)(FFrame& TheStack, RESULT_DECL);

struct AHUDNativeInfo
{
	const TCHAR* Name;
	AHUDNative Pointer;
};

extern AHUDNativeInfo g_025e0e10[];
// @baa 0x00ca8890
/* IMPLEMENT_NATIVE_HANDLER for AHUD: the native registered under this name, or NULL. */
AHUDNative* sub_00ca8890(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0e10[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0e10[NativeIndex].Name) == 0)
		{
			return &g_025e0e10[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UIniLocPatcher: the class's table of script natives (name, member pointer). */
typedef void (UIniLocPatcher::*UIniLocPatcherNative)(FFrame& TheStack, RESULT_DECL);

struct UIniLocPatcherNativeInfo
{
	const TCHAR* Name;
	UIniLocPatcherNative Pointer;
};

extern UIniLocPatcherNativeInfo g_025e0e28[];
// @baa 0x00ca88f0
/* IMPLEMENT_NATIVE_HANDLER for UIniLocPatcher: the native registered under this name, or NULL. */
UIniLocPatcherNative* sub_00ca88f0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0e28[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0e28[NativeIndex].Name) == 0)
		{
			return &g_025e0e28[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AInterpActor: the class's table of script natives (name, member pointer). */
typedef void (AInterpActor::*AInterpActorNative)(FFrame& TheStack, RESULT_DECL);

struct AInterpActorNativeInfo
{
	const TCHAR* Name;
	AInterpActorNative Pointer;
};

extern AInterpActorNativeInfo g_025e0e38[];
// @baa 0x00ca8950
/* IMPLEMENT_NATIVE_HANDLER for AInterpActor: the native registered under this name, or NULL. */
AInterpActorNative* sub_00ca8950(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0e38[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0e38[NativeIndex].Name) == 0)
		{
			return &g_025e0e38[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AInventoryManager: the class's table of script natives (name, member pointer). */
typedef void (AInventoryManager::*AInventoryManagerNative)(FFrame& TheStack, RESULT_DECL);

struct AInventoryManagerNativeInfo
{
	const TCHAR* Name;
	AInventoryManagerNative Pointer;
};

extern AInventoryManagerNativeInfo g_025e0e48[];
// @baa 0x00ca89b0
/* IMPLEMENT_NATIVE_HANDLER for AInventoryManager: the native registered under this name, or NULL. */
AInventoryManagerNative* sub_00ca89b0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0e48[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0e48[NativeIndex].Name) == 0)
		{
			return &g_025e0e48[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ULightComponent: the class's table of script natives (name, member pointer). */
typedef void (ULightComponent::*ULightComponentNative)(FFrame& TheStack, RESULT_DECL);

struct ULightComponentNativeInfo
{
	const TCHAR* Name;
	ULightComponentNative Pointer;
};

extern ULightComponentNativeInfo g_025e0e58[];
// @baa 0x00ca8a10
/* IMPLEMENT_NATIVE_HANDLER for ULightComponent: the native registered under this name, or NULL. */
ULightComponentNative* sub_00ca8a10(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0e58[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0e58[NativeIndex].Name) == 0)
		{
			return &g_025e0e58[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ULightEnvironmentComponent: the class's table of script natives (name, member pointer). */
typedef void (ULightEnvironmentComponent::*ULightEnvironmentComponentNative)(FFrame& TheStack, RESULT_DECL);

struct ULightEnvironmentComponentNativeInfo
{
	const TCHAR* Name;
	ULightEnvironmentComponentNative Pointer;
};

extern ULightEnvironmentComponentNativeInfo g_025e0e88[];
// @baa 0x00ca8a70
/* IMPLEMENT_NATIVE_HANDLER for ULightEnvironmentComponent: the native registered under this name, or NULL. */
ULightEnvironmentComponentNative* sub_00ca8a70(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0e88[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0e88[NativeIndex].Name) == 0)
		{
			return &g_025e0e88[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ULocalPlayer: the class's table of script natives (name, member pointer). */
typedef void (ULocalPlayer::*ULocalPlayerNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ULocalPlayerNativeInfo
{
	const TCHAR* Name;
	ULocalPlayerNative Pointer;
};

#pragma pack(pop)
extern ULocalPlayerNativeInfo g_025e3820[];
// @baa 0x00ca8ad0
/* IMPLEMENT_NATIVE_HANDLER for ULocalPlayer: the native registered under this name, or NULL. */
ULocalPlayerNative* sub_00ca8ad0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e3820[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e3820[NativeIndex].Name) == 0)
		{
			return &g_025e3820[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UMaterialInterface: the class's table of script natives (name, member pointer). */
typedef void (UMaterialInterface::*UMaterialInterfaceNative)(FFrame& TheStack, RESULT_DECL);

struct UMaterialInterfaceNativeInfo
{
	const TCHAR* Name;
	UMaterialInterfaceNative Pointer;
};

extern UMaterialInterfaceNativeInfo g_025e0ea0[];
// @baa 0x00ca8b40
/* IMPLEMENT_NATIVE_HANDLER for UMaterialInterface: the native registered under this name, or NULL. */
UMaterialInterfaceNative* sub_00ca8b40(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0ea0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0ea0[NativeIndex].Name) == 0)
		{
			return &g_025e0ea0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UMeshComponent: the class's table of script natives (name, member pointer). */
typedef void (UMeshComponent::*UMeshComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UMeshComponentNativeInfo
{
	const TCHAR* Name;
	UMeshComponentNative Pointer;
};

extern UMeshComponentNativeInfo g_025e0ef0[];
// @baa 0x00ca8ba0
/* IMPLEMENT_NATIVE_HANDLER for UMeshComponent: the native registered under this name, or NULL. */
UMeshComponentNative* sub_00ca8ba0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0ef0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0ef0[NativeIndex].Name) == 0)
		{
			return &g_025e0ef0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UMultiFont: the class's table of script natives (name, member pointer). */
typedef void (UMultiFont::*UMultiFontNative)(FFrame& TheStack, RESULT_DECL);

struct UMultiFontNativeInfo
{
	const TCHAR* Name;
	UMultiFontNative Pointer;
};

extern UMultiFontNativeInfo g_025e0f28[];
// @baa 0x00ca8c00
/* IMPLEMENT_NATIVE_HANDLER for UMultiFont: the native registered under this name, or NULL. */
UMultiFontNative* sub_00ca8c00(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0f28[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0f28[NativeIndex].Name) == 0)
		{
			return &g_025e0f28[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ANavigationPoint: the class's table of script natives (name, member pointer). */
typedef void (ANavigationPoint::*ANavigationPointNative)(FFrame& TheStack, RESULT_DECL);

struct ANavigationPointNativeInfo
{
	const TCHAR* Name;
	ANavigationPointNative Pointer;
};

extern ANavigationPointNativeInfo g_025e0f38[];
// @baa 0x00ca8c60
/* IMPLEMENT_NATIVE_HANDLER for ANavigationPoint: the native registered under this name, or NULL. */
ANavigationPointNative* sub_00ca8c60(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0f38[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0f38[NativeIndex].Name) == 0)
		{
			return &g_025e0f38[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UOnlineProfileSettings: the class's table of script natives (name, member pointer). */
typedef void (UOnlineProfileSettings::*UOnlineProfileSettingsNative)(FFrame& TheStack, RESULT_DECL);

struct UOnlineProfileSettingsNativeInfo
{
	const TCHAR* Name;
	UOnlineProfileSettingsNative Pointer;
};

extern UOnlineProfileSettingsNativeInfo g_025e0f70[];
// @baa 0x00ca8cc0
/* IMPLEMENT_NATIVE_HANDLER for UOnlineProfileSettings: the native registered under this name, or NULL. */
UOnlineProfileSettingsNative* sub_00ca8cc0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e0f70[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e0f70[NativeIndex].Name) == 0)
		{
			return &g_025e0f70[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UOnlineStats: the class's table of script natives (name, member pointer). */
typedef void (UOnlineStats::*UOnlineStatsNative)(FFrame& TheStack, RESULT_DECL);

struct UOnlineStatsNativeInfo
{
	const TCHAR* Name;
	UOnlineStatsNative Pointer;
};

extern UOnlineStatsNativeInfo g_025e1070[];
// @baa 0x00ca8d20
/* IMPLEMENT_NATIVE_HANDLER for UOnlineStats: the native registered under this name, or NULL. */
UOnlineStatsNative* sub_00ca8d20(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1070[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1070[NativeIndex].Name) == 0)
		{
			return &g_025e1070[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UOnlineStatsRead: the class's table of script natives (name, member pointer). */
typedef void (UOnlineStatsRead::*UOnlineStatsReadNative)(FFrame& TheStack, RESULT_DECL);

struct UOnlineStatsReadNativeInfo
{
	const TCHAR* Name;
	UOnlineStatsReadNative Pointer;
};

extern UOnlineStatsReadNativeInfo g_025e1088[];
// @baa 0x00ca8d80
/* IMPLEMENT_NATIVE_HANDLER for UOnlineStatsRead: the native registered under this name, or NULL. */
UOnlineStatsReadNative* sub_00ca8d80(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1088[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1088[NativeIndex].Name) == 0)
		{
			return &g_025e1088[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UOnlineStatsWrite: the class's table of script natives (name, member pointer). */
typedef void (UOnlineStatsWrite::*UOnlineStatsWriteNative)(FFrame& TheStack, RESULT_DECL);

struct UOnlineStatsWriteNativeInfo
{
	const TCHAR* Name;
	UOnlineStatsWriteNative Pointer;
};

extern UOnlineStatsWriteNativeInfo g_025e10c0[];
// @baa 0x00ca8de0
/* IMPLEMENT_NATIVE_HANDLER for UOnlineStatsWrite: the native registered under this name, or NULL. */
UOnlineStatsWriteNative* sub_00ca8de0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e10c0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e10c0[NativeIndex].Name) == 0)
		{
			return &g_025e10c0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UBrushBuilder: the class's table of script natives (name, member pointer). */
typedef void (UBrushBuilder::*UBrushBuilderNative)(FFrame& TheStack, RESULT_DECL);

struct UBrushBuilderNativeInfo
{
	const TCHAR* Name;
	UBrushBuilderNative Pointer;
};

extern UBrushBuilderNativeInfo g_025e79e8[];
// @baa 0x00ec5a10
/* IMPLEMENT_NATIVE_HANDLER for UBrushBuilder: the native registered under this name, or NULL. */
UBrushBuilderNative* sub_00ec5a10(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e79e8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e79e8[NativeIndex].Name) == 0)
		{
			return &g_025e79e8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UOnlineSubsystem: the class's table of script natives (name, member pointer). */
typedef void (UOnlineSubsystem::*UOnlineSubsystemNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UOnlineSubsystemNativeInfo
{
	const TCHAR* Name;
	UOnlineSubsystemNative Pointer;
};

#pragma pack(pop)
extern UOnlineSubsystemNativeInfo g_025e37d8[];
// @baa 0x00ca8e40
/* IMPLEMENT_NATIVE_HANDLER for UOnlineSubsystem: the native registered under this name, or NULL. */
UOnlineSubsystemNative* sub_00ca8e40(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e37d8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e37d8[NativeIndex].Name) == 0)
		{
			return &g_025e37d8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for APawn: the class's table of script natives (name, member pointer). */
typedef void (APawn::*APawnNative)(FFrame& TheStack, RESULT_DECL);

struct APawnNativeInfo
{
	const TCHAR* Name;
	APawnNative Pointer;
};

extern APawnNativeInfo g_025e1108[];
// @baa 0x00ca8eb0
/* IMPLEMENT_NATIVE_HANDLER for APawn: the native registered under this name, or NULL. */
APawnNative* sub_00ca8eb0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1108[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1108[NativeIndex].Name) == 0)
		{
			return &g_025e1108[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for APhysicsVolume: the class's table of script natives (name, member pointer). */
typedef void (APhysicsVolume::*APhysicsVolumeNative)(FFrame& TheStack, RESULT_DECL);

struct APhysicsVolumeNativeInfo
{
	const TCHAR* Name;
	APhysicsVolumeNative Pointer;
};

extern APhysicsVolumeNativeInfo g_025e1220[];
// @baa 0x00ca8f10
/* IMPLEMENT_NATIVE_HANDLER for APhysicsVolume: the native registered under this name, or NULL. */
APhysicsVolumeNative* sub_00ca8f10(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1220[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1220[NativeIndex].Name) == 0)
		{
			return &g_025e1220[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPlayer: the class's table of script natives (name, member pointer). */
typedef void (UPlayer::*UPlayerNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UPlayerNativeInfo
{
	const TCHAR* Name;
	UPlayerNative Pointer;
};

#pragma pack(pop)
extern UPlayerNativeInfo g_025e36fc[];
// @baa 0x00ca8f70
/* IMPLEMENT_NATIVE_HANDLER for UPlayer: the native registered under this name, or NULL. */
UPlayerNative* sub_00ca8f70(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e36fc[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e36fc[NativeIndex].Name) == 0)
		{
			return &g_025e36fc[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for APlayerController: the class's table of script natives (name, member pointer). */
typedef void (APlayerController::*APlayerControllerNative)(FFrame& TheStack, RESULT_DECL);

struct APlayerControllerNativeInfo
{
	const TCHAR* Name;
	APlayerControllerNative Pointer;
};

extern APlayerControllerNativeInfo g_025e1238[];
// @baa 0x00ca8fe0
/* IMPLEMENT_NATIVE_HANDLER for APlayerController: the native registered under this name, or NULL. */
APlayerControllerNative* sub_00ca8fe0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1238[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1238[NativeIndex].Name) == 0)
		{
			return &g_025e1238[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for APlayerReplicationInfo: the class's table of script natives (name, member pointer). */
typedef void (APlayerReplicationInfo::*APlayerReplicationInfoNative)(FFrame& TheStack, RESULT_DECL);

struct APlayerReplicationInfoNativeInfo
{
	const TCHAR* Name;
	APlayerReplicationInfoNative Pointer;
};

extern APlayerReplicationInfoNativeInfo g_025e1388[];
// @baa 0x00ca9040
/* IMPLEMENT_NATIVE_HANDLER for APlayerReplicationInfo: the native registered under this name, or NULL. */
APlayerReplicationInfoNative* sub_00ca9040(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1388[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1388[NativeIndex].Name) == 0)
		{
			return &g_025e1388[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPointLightComponent: the class's table of script natives (name, member pointer). */
typedef void (UPointLightComponent::*UPointLightComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UPointLightComponentNativeInfo
{
	const TCHAR* Name;
	UPointLightComponentNative Pointer;
};

extern UPointLightComponentNativeInfo g_025e13b0[];
// @baa 0x00ca90a0
/* IMPLEMENT_NATIVE_HANDLER for UPointLightComponent: the native registered under this name, or NULL. */
UPointLightComponentNative* sub_00ca90a0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e13b0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e13b0[NativeIndex].Name) == 0)
		{
			return &g_025e13b0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for APortalMarker: the class's table of script natives (name, member pointer). */
typedef void (APortalMarker::*APortalMarkerNative)(FFrame& TheStack, RESULT_DECL);

struct APortalMarkerNativeInfo
{
	const TCHAR* Name;
	APortalMarkerNative Pointer;
};

extern APortalMarkerNativeInfo g_025e13c0[];
// @baa 0x00ca9100
/* IMPLEMENT_NATIVE_HANDLER for APortalMarker: the native registered under this name, or NULL. */
APortalMarkerNative* sub_00ca9100(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e13c0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e13c0[NativeIndex].Name) == 0)
		{
			return &g_025e13c0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for APortalTeleporter: the class's table of script natives (name, member pointer). */
typedef void (APortalTeleporter::*APortalTeleporterNative)(FFrame& TheStack, RESULT_DECL);

struct APortalTeleporterNativeInfo
{
	const TCHAR* Name;
	APortalTeleporterNative Pointer;
};

extern APortalTeleporterNativeInfo g_025e13d0[];
// @baa 0x00ca9160
/* IMPLEMENT_NATIVE_HANDLER for APortalTeleporter: the native registered under this name, or NULL. */
APortalTeleporterNative* sub_00ca9160(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e13d0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e13d0[NativeIndex].Name) == 0)
		{
			return &g_025e13d0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPostProcessChain: the class's table of script natives (name, member pointer). */
typedef void (UPostProcessChain::*UPostProcessChainNative)(FFrame& TheStack, RESULT_DECL);

struct UPostProcessChainNativeInfo
{
	const TCHAR* Name;
	UPostProcessChainNative Pointer;
};

extern UPostProcessChainNativeInfo g_025e13f8[];
// @baa 0x00ca91c0
/* IMPLEMENT_NATIVE_HANDLER for UPostProcessChain: the native registered under this name, or NULL. */
UPostProcessChainNative* sub_00ca91c0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e13f8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e13f8[NativeIndex].Name) == 0)
		{
			return &g_025e13f8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPrimitiveComponent: the class's table of script natives (name, member pointer). */
typedef void (UPrimitiveComponent::*UPrimitiveComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UPrimitiveComponentNativeInfo
{
	const TCHAR* Name;
	UPrimitiveComponentNative Pointer;
};

extern UPrimitiveComponentNativeInfo g_025e1408[];
// @baa 0x00ca9220
/* IMPLEMENT_NATIVE_HANDLER for UPrimitiveComponent: the native registered under this name, or NULL. */
UPrimitiveComponentNative* sub_00ca9220(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1408[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1408[NativeIndex].Name) == 0)
		{
			return &g_025e1408[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AProjectile: the class's table of script natives (name, member pointer). */
typedef void (AProjectile::*AProjectileNative)(FFrame& TheStack, RESULT_DECL);

struct AProjectileNativeInfo
{
	const TCHAR* Name;
	AProjectileNative Pointer;
};

extern AProjectileNativeInfo g_025e15b8[];
// @baa 0x00ca9280
/* IMPLEMENT_NATIVE_HANDLER for AProjectile: the native registered under this name, or NULL. */
AProjectileNative* sub_00ca9280(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e15b8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e15b8[NativeIndex].Name) == 0)
		{
			return &g_025e15b8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UReachSpec: the class's table of script natives (name, member pointer). */
typedef void (UReachSpec::*UReachSpecNative)(FFrame& TheStack, RESULT_DECL);

struct UReachSpecNativeInfo
{
	const TCHAR* Name;
	UReachSpecNative Pointer;
};

extern UReachSpecNativeInfo g_025e15c8[];
// @baa 0x00ca92e0
/* IMPLEMENT_NATIVE_HANDLER for UReachSpec: the native registered under this name, or NULL. */
UReachSpecNative* sub_00ca92e0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e15c8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e15c8[NativeIndex].Name) == 0)
		{
			return &g_025e15c8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ARoute: the class's table of script natives (name, member pointer). */
typedef void (ARoute::*ARouteNative)(FFrame& TheStack, RESULT_DECL);

struct ARouteNativeInfo
{
	const TCHAR* Name;
	ARouteNative Pointer;
};

extern ARouteNativeInfo g_025e15f0[];
// @baa 0x00ca9340
/* IMPLEMENT_NATIVE_HANDLER for ARoute: the native registered under this name, or NULL. */
ARouteNative* sub_00ca9340(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e15f0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e15f0[NativeIndex].Name) == 0)
		{
			return &g_025e15f0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

Native FindGFxUIUGFxInteractionNative(const TCHAR* NativeName);
Native FindGFxUIUGFxMovieNative(const TCHAR* NativeName);
Native FindGFxUIUGFxFSCmdHandler_KismetNative(const TCHAR* NativeName);
Native FindGFxUIUGFxDataStoreSubscriberNative(const TCHAR* NativeName);
// An empty function in the FMod module (its body was compiled out); only this function calls it.
void sub_00e705c0();
// @baa 0x00e6c920
void AutoInitializeRegistrantsGFxUI(INT& Lookup)
{
	UGFxEngine::StaticClass();
	UGFxFSCmdHandler::StaticClass();
	UGFxGameViewportClient::StaticClass();
	UGFxInteraction::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindGFxUIUGFxInteractionNative;
	UGFxMovie::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindGFxUIUGFxMovieNative;
	UGFxMovieInfo::StaticClass();
	UGFxAction_CloseMovie::StaticClass();
	UGFxAction_GetVariable::StaticClass();
	UGFxAction_Invoke::StaticClass();
	UGFxAction_OpenMovie::StaticClass();
	UGFxAction_SetCaptureKeys::StaticClass();
	UGFxAction_SetFocus::StaticClass();
	UGFxAction_SetVariable::StaticClass();
	UGFxEvent_FsCommand::StaticClass();
	UGFxFSCmdHandler_Kismet::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindGFxUIUGFxFSCmdHandler_KismetNative;
	UGFxDataStoreSubscriber::StaticClass();
	GNativeLookupFuncs[Lookup++] = &FindGFxUIUGFxDataStoreSubscriberNative;
	sub_00e705c0();
}

/* UnScript.h DECLARE_NATIVE_TYPE for USceneCapture2DComponent: the class's table of script natives (name, member pointer). */
typedef void (USceneCapture2DComponent::*USceneCapture2DComponentNative)(FFrame& TheStack, RESULT_DECL);

struct USceneCapture2DComponentNativeInfo
{
	const TCHAR* Name;
	USceneCapture2DComponentNative Pointer;
};

extern USceneCapture2DComponentNativeInfo g_025e1608[];
// @baa 0x00ca93a0
/* IMPLEMENT_NATIVE_HANDLER for USceneCapture2DComponent: the native registered under this name, or NULL. */
USceneCapture2DComponentNative* sub_00ca93a0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1608[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1608[NativeIndex].Name) == 0)
		{
			return &g_025e1608[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USceneCaptureComponent: the class's table of script natives (name, member pointer). */
typedef void (USceneCaptureComponent::*USceneCaptureComponentNative)(FFrame& TheStack, RESULT_DECL);

struct USceneCaptureComponentNativeInfo
{
	const TCHAR* Name;
	USceneCaptureComponentNative Pointer;
};

extern USceneCaptureComponentNativeInfo g_025e1620[];
// @baa 0x00ca9400
/* IMPLEMENT_NATIVE_HANDLER for USceneCaptureComponent: the native registered under this name, or NULL. */
USceneCaptureComponentNative* sub_00ca9400(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1620[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1620[NativeIndex].Name) == 0)
		{
			return &g_025e1620[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USceneCapturePortalComponent: the class's table of script natives (name, member pointer). */
typedef void (USceneCapturePortalComponent::*USceneCapturePortalComponentNative)(FFrame& TheStack, RESULT_DECL);

struct USceneCapturePortalComponentNativeInfo
{
	const TCHAR* Name;
	USceneCapturePortalComponentNative Pointer;
};

extern USceneCapturePortalComponentNativeInfo g_025e1630[];
// @baa 0x00ca9460
/* IMPLEMENT_NATIVE_HANDLER for USceneCapturePortalComponent: the native registered under this name, or NULL. */
USceneCapturePortalComponentNative* sub_00ca9460(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1630[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1630[NativeIndex].Name) == 0)
		{
			return &g_025e1630[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USettings: the class's table of script natives (name, member pointer). */
typedef void (USettings::*USettingsNative)(FFrame& TheStack, RESULT_DECL);

struct USettingsNativeInfo
{
	const TCHAR* Name;
	USettingsNative Pointer;
};

extern USettingsNativeInfo g_025e1640[];
// @baa 0x00ca94c0
/* IMPLEMENT_NATIVE_HANDLER for USettings: the native registered under this name, or NULL. */
USettingsNative* sub_00ca94c0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1640[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1640[NativeIndex].Name) == 0)
		{
			return &g_025e1640[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USkeletalMeshComponent: the class's table of script natives (name, member pointer). */
typedef void (USkeletalMeshComponent::*USkeletalMeshComponentNative)(FFrame& TheStack, RESULT_DECL);

struct USkeletalMeshComponentNativeInfo
{
	const TCHAR* Name;
	USkeletalMeshComponentNative Pointer;
};

extern USkeletalMeshComponentNativeInfo g_025e1800[];
// @baa 0x00ca9520
/* IMPLEMENT_NATIVE_HANDLER for USkeletalMeshComponent: the native registered under this name, or NULL. */
USkeletalMeshComponentNative* sub_00ca9520(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1800[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1800[NativeIndex].Name) == 0)
		{
			return &g_025e1800[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USoundCue: the class's table of script natives (name, member pointer). */
typedef void (USoundCue::*USoundCueNative)(FFrame& TheStack, RESULT_DECL);

struct USoundCueNativeInfo
{
	const TCHAR* Name;
	USoundCueNative Pointer;
};

extern USoundCueNativeInfo g_025e1bc8[];
// @baa 0x00ca9580
/* IMPLEMENT_NATIVE_HANDLER for USoundCue: the native registered under this name, or NULL. */
USoundCueNative* sub_00ca9580(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1bc8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1bc8[NativeIndex].Name) == 0)
		{
			return &g_025e1bc8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UStaticMeshComponent: the class's table of script natives (name, member pointer). */
typedef void (UStaticMeshComponent::*UStaticMeshComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UStaticMeshComponentNativeInfo
{
	const TCHAR* Name;
	UStaticMeshComponentNative Pointer;
};

extern UStaticMeshComponentNativeInfo g_025e1be0[];
// @baa 0x00ca95e0
/* IMPLEMENT_NATIVE_HANDLER for UStaticMeshComponent: the native registered under this name, or NULL. */
UStaticMeshComponentNative* sub_00ca95e0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1be0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1be0[NativeIndex].Name) == 0)
		{
			return &g_025e1be0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USurface: the class's table of script natives (name, member pointer). */
typedef void (USurface::*USurfaceNative)(FFrame& TheStack, RESULT_DECL);

struct USurfaceNativeInfo
{
	const TCHAR* Name;
	USurfaceNative Pointer;
};

extern USurfaceNativeInfo g_025e1c10[];
// @baa 0x00ca9640
/* IMPLEMENT_NATIVE_HANDLER for USurface: the native registered under this name, or NULL. */
USurfaceNative* sub_00ca9640(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1c10[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1c10[NativeIndex].Name) == 0)
		{
			return &g_025e1c10[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ATeamInfo: the class's table of script natives (name, member pointer). */
typedef void (ATeamInfo::*ATeamInfoNative)(FFrame& TheStack, RESULT_DECL);

struct ATeamInfoNativeInfo
{
	const TCHAR* Name;
	ATeamInfoNative Pointer;
};

extern ATeamInfoNativeInfo g_025e1c28[];
// @baa 0x00ca96a0
/* IMPLEMENT_NATIVE_HANDLER for ATeamInfo: the native registered under this name, or NULL. */
ATeamInfoNative* sub_00ca96a0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1c28[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1c28[NativeIndex].Name) == 0)
		{
			return &g_025e1c28[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ATeleporter: the class's table of script natives (name, member pointer). */
typedef void (ATeleporter::*ATeleporterNative)(FFrame& TheStack, RESULT_DECL);

struct ATeleporterNativeInfo
{
	const TCHAR* Name;
	ATeleporterNative Pointer;
};

extern ATeleporterNativeInfo g_025e1c38[];
// @baa 0x00ca9700
/* IMPLEMENT_NATIVE_HANDLER for ATeleporter: the native registered under this name, or NULL. */
ATeleporterNative* sub_00ca9700(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1c38[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1c38[NativeIndex].Name) == 0)
		{
			return &g_025e1c38[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UTexture2D: the class's table of script natives (name, member pointer). */
typedef void (UTexture2D::*UTexture2DNative)(FFrame& TheStack, RESULT_DECL);

struct UTexture2DNativeInfo
{
	const TCHAR* Name;
	UTexture2DNative Pointer;
};

extern UTexture2DNativeInfo g_025e1c48[];
// @baa 0x00ca9760
/* IMPLEMENT_NATIVE_HANDLER for UTexture2D: the native registered under this name, or NULL. */
UTexture2DNative* sub_00ca9760(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1c48[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1c48[NativeIndex].Name) == 0)
		{
			return &g_025e1c48[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UTexture2DComposite: the class's table of script natives (name, member pointer). */
typedef void (UTexture2DComposite::*UTexture2DCompositeNative)(FFrame& TheStack, RESULT_DECL);

struct UTexture2DCompositeNativeInfo
{
	const TCHAR* Name;
	UTexture2DCompositeNative Pointer;
};

extern UTexture2DCompositeNativeInfo g_025e1c60[];
// @baa 0x00ca97c0
/* IMPLEMENT_NATIVE_HANDLER for UTexture2DComposite: the native registered under this name, or NULL. */
UTexture2DCompositeNative* sub_00ca97c0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1c60[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1c60[NativeIndex].Name) == 0)
		{
			return &g_025e1c60[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UTexture2DDynamic: the class's table of script natives (name, member pointer). */
typedef void (UTexture2DDynamic::*UTexture2DDynamicNative)(FFrame& TheStack, RESULT_DECL);

struct UTexture2DDynamicNativeInfo
{
	const TCHAR* Name;
	UTexture2DDynamicNative Pointer;
};

extern UTexture2DDynamicNativeInfo g_025e1c80[];
// @baa 0x00ca9820
/* IMPLEMENT_NATIVE_HANDLER for UTexture2DDynamic: the native registered under this name, or NULL. */
UTexture2DDynamicNative* sub_00ca9820(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1c80[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1c80[NativeIndex].Name) == 0)
		{
			return &g_025e1c80[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UTextureFlipBook: the class's table of script natives (name, member pointer). */
typedef void (UTextureFlipBook::*UTextureFlipBookNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UTextureFlipBookNativeInfo
{
	const TCHAR* Name;
	UTextureFlipBookNative Pointer;
};

#pragma pack(pop)
extern UTextureFlipBookNativeInfo g_025e352c[];
// @baa 0x00ca9880
/* IMPLEMENT_NATIVE_HANDLER for UTextureFlipBook: the native registered under this name, or NULL. */
UTextureFlipBookNative* sub_00ca9880(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e352c[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e352c[NativeIndex].Name) == 0)
		{
			return &g_025e352c[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UTextureMovie: the class's table of script natives (name, member pointer). */
typedef void (UTextureMovie::*UTextureMovieNative)(FFrame& TheStack, RESULT_DECL);

struct UTextureMovieNativeInfo
{
	const TCHAR* Name;
	UTextureMovieNative Pointer;
};

extern UTextureMovieNativeInfo g_025e1c98[];
// @baa 0x00ca98f0
/* IMPLEMENT_NATIVE_HANDLER for UTextureMovie: the native registered under this name, or NULL. */
UTextureMovieNative* sub_00ca98f0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1c98[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1c98[NativeIndex].Name) == 0)
		{
			return &g_025e1c98[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UTextureRenderTarget2D: the class's table of script natives (name, member pointer). */
typedef void (UTextureRenderTarget2D::*UTextureRenderTarget2DNative)(FFrame& TheStack, RESULT_DECL);

struct UTextureRenderTarget2DNativeInfo
{
	const TCHAR* Name;
	UTextureRenderTarget2DNative Pointer;
};

extern UTextureRenderTarget2DNativeInfo g_025e1cb8[];
// @baa 0x00ca9950
/* IMPLEMENT_NATIVE_HANDLER for UTextureRenderTarget2D: the native registered under this name, or NULL. */
UTextureRenderTarget2DNative* sub_00ca9950(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1cb8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1cb8[NativeIndex].Name) == 0)
		{
			return &g_025e1cb8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AVolume: the class's table of script natives (name, member pointer). */
typedef void (AVolume::*AVolumeNative)(FFrame& TheStack, RESULT_DECL);

struct AVolumeNativeInfo
{
	const TCHAR* Name;
	AVolumeNative Pointer;
};

extern AVolumeNativeInfo g_025e1cc8[];
// @baa 0x00ca99b0
/* IMPLEMENT_NATIVE_HANDLER for AVolume: the native registered under this name, or NULL. */
AVolumeNative* sub_00ca99b0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1cc8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1cc8[NativeIndex].Name) == 0)
		{
			return &g_025e1cc8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AVolumePathNode: the class's table of script natives (name, member pointer). */
typedef void (AVolumePathNode::*AVolumePathNodeNative)(FFrame& TheStack, RESULT_DECL);

struct AVolumePathNodeNativeInfo
{
	const TCHAR* Name;
	AVolumePathNodeNative Pointer;
};

extern AVolumePathNodeNativeInfo g_025e1ce0[];
// @baa 0x00ca9a10
/* IMPLEMENT_NATIVE_HANDLER for AVolumePathNode: the native registered under this name, or NULL. */
AVolumePathNodeNative* sub_00ca9a10(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1ce0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1ce0[NativeIndex].Name) == 0)
		{
			return &g_025e1ce0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AWeapon: the class's table of script natives (name, member pointer). */
typedef void (AWeapon::*AWeaponNative)(FFrame& TheStack, RESULT_DECL);

struct AWeaponNativeInfo
{
	const TCHAR* Name;
	AWeaponNative Pointer;
};

extern AWeaponNativeInfo g_025e1cf0[];
// @baa 0x00ca9a70
/* IMPLEMENT_NATIVE_HANDLER for AWeapon: the native registered under this name, or NULL. */
AWeaponNative* sub_00ca9a70(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1cf0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1cf0[NativeIndex].Name) == 0)
		{
			return &g_025e1cf0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AWorldInfo: the class's table of script natives (name, member pointer). */
typedef void (AWorldInfo::*AWorldInfoNative)(FFrame& TheStack, RESULT_DECL);

struct AWorldInfoNativeInfo
{
	const TCHAR* Name;
	AWorldInfoNative Pointer;
};

extern AWorldInfoNativeInfo g_025e1d00[];
// @baa 0x00ca9ad0
/* IMPLEMENT_NATIVE_HANDLER for AWorldInfo: the native registered under this name, or NULL. */
AWorldInfoNative* sub_00ca9ad0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1d00[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1d00[NativeIndex].Name) == 0)
		{
			return &g_025e1d00[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPath_AvoidInEscapableNodes: the class's table of script natives (name, member pointer). */
typedef void (UPath_AvoidInEscapableNodes::*UPath_AvoidInEscapableNodesNative)(FFrame& TheStack, RESULT_DECL);

struct UPath_AvoidInEscapableNodesNativeInfo
{
	const TCHAR* Name;
	UPath_AvoidInEscapableNodesNative Pointer;
};

extern UPath_AvoidInEscapableNodesNativeInfo g_025e1e48[];
// @baa 0x00ca9b30
/* IMPLEMENT_NATIVE_HANDLER for UPath_AvoidInEscapableNodes: the native registered under this name, or NULL. */
UPath_AvoidInEscapableNodesNative* sub_00ca9b30(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1e48[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1e48[NativeIndex].Name) == 0)
		{
			return &g_025e1e48[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UMaterialInstance: the class's table of script natives (name, member pointer). */
typedef void (UMaterialInstance::*UMaterialInstanceNative)(FFrame& TheStack, RESULT_DECL);

struct UMaterialInstanceNativeInfo
{
	const TCHAR* Name;
	UMaterialInstanceNative Pointer;
};

extern UMaterialInstanceNativeInfo g_025e1e58[];
// @baa 0x00ca9b90
/* IMPLEMENT_NATIVE_HANDLER for UMaterialInstance: the native registered under this name, or NULL. */
UMaterialInstanceNative* sub_00ca9b90(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1e58[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1e58[NativeIndex].Name) == 0)
		{
			return &g_025e1e58[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UMaterialInstanceConstant: the class's table of script natives (name, member pointer). */
typedef void (UMaterialInstanceConstant::*UMaterialInstanceConstantNative)(FFrame& TheStack, RESULT_DECL);

struct UMaterialInstanceConstantNativeInfo
{
	const TCHAR* Name;
	UMaterialInstanceConstantNative Pointer;
};

extern UMaterialInstanceConstantNativeInfo g_025e1ea0[];
// @baa 0x00ca9bf0
/* IMPLEMENT_NATIVE_HANDLER for UMaterialInstanceConstant: the native registered under this name, or NULL. */
UMaterialInstanceConstantNative* sub_00ca9bf0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1ea0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1ea0[NativeIndex].Name) == 0)
		{
			return &g_025e1ea0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UMaterialInstanceTimeVarying: the class's table of script natives (name, member pointer). */
typedef void (UMaterialInstanceTimeVarying::*UMaterialInstanceTimeVaryingNative)(FFrame& TheStack, RESULT_DECL);

struct UMaterialInstanceTimeVaryingNativeInfo
{
	const TCHAR* Name;
	UMaterialInstanceTimeVaryingNative Pointer;
};

extern UMaterialInstanceTimeVaryingNativeInfo g_025e1ed8[];
// @baa 0x00ca9c50
/* IMPLEMENT_NATIVE_HANDLER for UMaterialInstanceTimeVarying: the native registered under this name, or NULL. */
UMaterialInstanceTimeVaryingNative* sub_00ca9c50(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1ed8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1ed8[NativeIndex].Name) == 0)
		{
			return &g_025e1ed8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ATerrain: the class's table of script natives (name, member pointer). */
typedef void (ATerrain::*ATerrainNative)(FFrame& TheStack, RESULT_DECL);

struct ATerrainNativeInfo
{
	const TCHAR* Name;
	ATerrainNative Pointer;
};

extern ATerrainNativeInfo g_025e1f40[];
// @baa 0x00ca9cb0
/* IMPLEMENT_NATIVE_HANDLER for ATerrain: the native registered under this name, or NULL. */
ATerrainNative* sub_00ca9cb0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1f40[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1f40[NativeIndex].Name) == 0)
		{
			return &g_025e1f40[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UTerrainLayerSetup: the class's table of script natives (name, member pointer). */
typedef void (UTerrainLayerSetup::*UTerrainLayerSetupNative)(FFrame& TheStack, RESULT_DECL);

struct UTerrainLayerSetupNativeInfo
{
	const TCHAR* Name;
	UTerrainLayerSetupNative Pointer;
};

extern UTerrainLayerSetupNativeInfo g_025e1f50[];
// @baa 0x00ca9d10
/* IMPLEMENT_NATIVE_HANDLER for UTerrainLayerSetup: the native registered under this name, or NULL. */
UTerrainLayerSetupNative* sub_00ca9d10(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1f50[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1f50[NativeIndex].Name) == 0)
		{
			return &g_025e1f50[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AKActor: the class's table of script natives (name, member pointer). */
typedef void (AKActor::*AKActorNative)(FFrame& TheStack, RESULT_DECL);

struct AKActorNativeInfo
{
	const TCHAR* Name;
	AKActorNative Pointer;
};

extern AKActorNativeInfo g_025e1f60[];
// @baa 0x00ca9d70
/* IMPLEMENT_NATIVE_HANDLER for AKActor: the native registered under this name, or NULL. */
AKActorNative* sub_00ca9d70(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1f60[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1f60[NativeIndex].Name) == 0)
		{
			return &g_025e1f60[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AKActorSpawnable: the class's table of script natives (name, member pointer). */
typedef void (AKActorSpawnable::*AKActorSpawnableNative)(FFrame& TheStack, RESULT_DECL);

struct AKActorSpawnableNativeInfo
{
	const TCHAR* Name;
	AKActorSpawnableNative Pointer;
};

extern AKActorSpawnableNativeInfo g_025e1f78[];
// @baa 0x00ca9dd0
/* IMPLEMENT_NATIVE_HANDLER for AKActorSpawnable: the native registered under this name, or NULL. */
AKActorSpawnableNative* sub_00ca9dd0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1f78[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1f78[NativeIndex].Name) == 0)
		{
			return &g_025e1f78[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPhysicalMaterial: the class's table of script natives (name, member pointer). */
typedef void (UPhysicalMaterial::*UPhysicalMaterialNative)(FFrame& TheStack, RESULT_DECL);

struct UPhysicalMaterialNativeInfo
{
	const TCHAR* Name;
	UPhysicalMaterialNative Pointer;
};

extern UPhysicalMaterialNativeInfo g_025e1f88[];
// @baa 0x00ca9e30
/* IMPLEMENT_NATIVE_HANDLER for UPhysicalMaterial: the native registered under this name, or NULL. */
UPhysicalMaterialNative* sub_00ca9e30(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1f88[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1f88[NativeIndex].Name) == 0)
		{
			return &g_025e1f88[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPhysicsAsset: the class's table of script natives (name, member pointer). */
typedef void (UPhysicsAsset::*UPhysicsAssetNative)(FFrame& TheStack, RESULT_DECL);

struct UPhysicsAssetNativeInfo
{
	const TCHAR* Name;
	UPhysicsAssetNative Pointer;
};

extern UPhysicsAssetNativeInfo g_025e1fa8[];
// @baa 0x00ca9e90
/* IMPLEMENT_NATIVE_HANDLER for UPhysicsAsset: the native registered under this name, or NULL. */
UPhysicsAssetNative* sub_00ca9e90(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1fa8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1fa8[NativeIndex].Name) == 0)
		{
			return &g_025e1fa8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPhysicsAssetInstance: the class's table of script natives (name, member pointer). */
typedef void (UPhysicsAssetInstance::*UPhysicsAssetInstanceNative)(FFrame& TheStack, RESULT_DECL);

struct UPhysicsAssetInstanceNativeInfo
{
	const TCHAR* Name;
	UPhysicsAssetInstanceNative Pointer;
};

extern UPhysicsAssetInstanceNativeInfo g_025e1fb8[];
// @baa 0x00ca9ef0
/* IMPLEMENT_NATIVE_HANDLER for UPhysicsAssetInstance: the native registered under this name, or NULL. */
UPhysicsAssetInstanceNative* sub_00ca9ef0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e1fb8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e1fb8[NativeIndex].Name) == 0)
		{
			return &g_025e1fb8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for URB_BodyInstance: the class's table of script natives (name, member pointer). */
typedef void (URB_BodyInstance::*URB_BodyInstanceNative)(FFrame& TheStack, RESULT_DECL);

struct URB_BodyInstanceNativeInfo
{
	const TCHAR* Name;
	URB_BodyInstanceNative Pointer;
};

extern URB_BodyInstanceNativeInfo g_025e2050[];
// @baa 0x00ca9f50
/* IMPLEMENT_NATIVE_HANDLER for URB_BodyInstance: the native registered under this name, or NULL. */
URB_BodyInstanceNative* sub_00ca9f50(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2050[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2050[NativeIndex].Name) == 0)
		{
			return &g_025e2050[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ARB_ConstraintActor: the class's table of script natives (name, member pointer). */
typedef void (ARB_ConstraintActor::*ARB_ConstraintActorNative)(FFrame& TheStack, RESULT_DECL);

struct ARB_ConstraintActorNativeInfo
{
	const TCHAR* Name;
	ARB_ConstraintActorNative Pointer;
};

extern ARB_ConstraintActorNativeInfo g_025e20f0[];
// @baa 0x00ca9fb0
/* IMPLEMENT_NATIVE_HANDLER for ARB_ConstraintActor: the native registered under this name, or NULL. */
ARB_ConstraintActorNative* sub_00ca9fb0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e20f0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e20f0[NativeIndex].Name) == 0)
		{
			return &g_025e20f0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for URB_ConstraintInstance: the class's table of script natives (name, member pointer). */
typedef void (URB_ConstraintInstance::*URB_ConstraintInstanceNative)(FFrame& TheStack, RESULT_DECL);

struct URB_ConstraintInstanceNativeInfo
{
	const TCHAR* Name;
	URB_ConstraintInstanceNative Pointer;
};

extern URB_ConstraintInstanceNativeInfo g_025e2110[];
// @baa 0x00caa010
/* IMPLEMENT_NATIVE_HANDLER for URB_ConstraintInstance: the native registered under this name, or NULL. */
URB_ConstraintInstanceNative* sub_00caa010(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2110[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2110[NativeIndex].Name) == 0)
		{
			return &g_025e2110[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for URB_Handle: the class's table of script natives (name, member pointer). */
typedef void (URB_Handle::*URB_HandleNative)(FFrame& TheStack, RESULT_DECL);

struct URB_HandleNativeInfo
{
	const TCHAR* Name;
	URB_HandleNative Pointer;
};

extern URB_HandleNativeInfo g_025e21b0[];
// @baa 0x00caa070
/* IMPLEMENT_NATIVE_HANDLER for URB_Handle: the native registered under this name, or NULL. */
URB_HandleNative* sub_00caa070(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e21b0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e21b0[NativeIndex].Name) == 0)
		{
			return &g_025e21b0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ARB_LineImpulseActor: the class's table of script natives (name, member pointer). */
typedef void (ARB_LineImpulseActor::*ARB_LineImpulseActorNative)(FFrame& TheStack, RESULT_DECL);

struct ARB_LineImpulseActorNativeInfo
{
	const TCHAR* Name;
	ARB_LineImpulseActorNative Pointer;
};

extern ARB_LineImpulseActorNativeInfo g_025e21f0[];
// @baa 0x00caa0d0
/* IMPLEMENT_NATIVE_HANDLER for ARB_LineImpulseActor: the native registered under this name, or NULL. */
ARB_LineImpulseActorNative* sub_00caa0d0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e21f0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e21f0[NativeIndex].Name) == 0)
		{
			return &g_025e21f0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for URB_RadialImpulseComponent: the class's table of script natives (name, member pointer). */
typedef void (URB_RadialImpulseComponent::*URB_RadialImpulseComponentNative)(FFrame& TheStack, RESULT_DECL);

struct URB_RadialImpulseComponentNativeInfo
{
	const TCHAR* Name;
	URB_RadialImpulseComponentNative Pointer;
};

extern URB_RadialImpulseComponentNativeInfo g_025e2200[];
// @baa 0x00caa130
/* IMPLEMENT_NATIVE_HANDLER for URB_RadialImpulseComponent: the native registered under this name, or NULL. */
URB_RadialImpulseComponentNative* sub_00caa130(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2200[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2200[NativeIndex].Name) == 0)
		{
			return &g_025e2200[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for URB_Spring: the class's table of script natives (name, member pointer). */
typedef void (URB_Spring::*URB_SpringNative)(FFrame& TheStack, RESULT_DECL);

struct URB_SpringNativeInfo
{
	const TCHAR* Name;
	URB_SpringNative Pointer;
};

extern URB_SpringNativeInfo g_025e2210[];
// @baa 0x00caa190
/* IMPLEMENT_NATIVE_HANDLER for URB_Spring: the native registered under this name, or NULL. */
URB_SpringNative* sub_00caa190(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2210[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2210[NativeIndex].Name) == 0)
		{
			return &g_025e2210[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for URPhysOnContactHandler: the class's table of script natives (name, member pointer). */
typedef void (URPhysOnContactHandler::*URPhysOnContactHandlerNative)(FFrame& TheStack, RESULT_DECL);

struct URPhysOnContactHandlerNativeInfo
{
	const TCHAR* Name;
	URPhysOnContactHandlerNative Pointer;
};

extern URPhysOnContactHandlerNativeInfo g_025e2228[];
// @baa 0x00caa1f0
/* IMPLEMENT_NATIVE_HANDLER for URPhysOnContactHandler: the native registered under this name, or NULL. */
URPhysOnContactHandlerNative* sub_00caa1f0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2228[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2228[NativeIndex].Name) == 0)
		{
			return &g_025e2228[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ANxCylindricalForceFieldCapsule: the class's table of script natives (name, member pointer). */
typedef void (ANxCylindricalForceFieldCapsule::*ANxCylindricalForceFieldCapsuleNative)(FFrame& TheStack, RESULT_DECL);

struct ANxCylindricalForceFieldCapsuleNativeInfo
{
	const TCHAR* Name;
	ANxCylindricalForceFieldCapsuleNative Pointer;
};

extern ANxCylindricalForceFieldCapsuleNativeInfo g_025e2238[];
// @baa 0x00caa250
/* IMPLEMENT_NATIVE_HANDLER for ANxCylindricalForceFieldCapsule: the native registered under this name, or NULL. */
ANxCylindricalForceFieldCapsuleNative* sub_00caa250(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2238[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2238[NativeIndex].Name) == 0)
		{
			return &g_025e2238[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ANxForceField: the class's table of script natives (name, member pointer). */
typedef void (ANxForceField::*ANxForceFieldNative)(FFrame& TheStack, RESULT_DECL);

struct ANxForceFieldNativeInfo
{
	const TCHAR* Name;
	ANxForceFieldNative Pointer;
};

extern ANxForceFieldNativeInfo g_025e2248[];
// @baa 0x00caa2b0
/* IMPLEMENT_NATIVE_HANDLER for ANxForceField: the native registered under this name, or NULL. */
ANxForceFieldNative* sub_00caa2b0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2248[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2248[NativeIndex].Name) == 0)
		{
			return &g_025e2248[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ANxForceFieldGeneric: the class's table of script natives (name, member pointer). */
typedef void (ANxForceFieldGeneric::*ANxForceFieldGenericNative)(FFrame& TheStack, RESULT_DECL);

struct ANxForceFieldGenericNativeInfo
{
	const TCHAR* Name;
	ANxForceFieldGenericNative Pointer;
};

extern ANxForceFieldGenericNativeInfo g_025e2258[];
// @baa 0x00caa310
/* IMPLEMENT_NATIVE_HANDLER for ANxForceFieldGeneric: the native registered under this name, or NULL. */
ANxForceFieldGenericNative* sub_00caa310(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2258[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2258[NativeIndex].Name) == 0)
		{
			return &g_025e2258[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ANxForceFieldRadial: the class's table of script natives (name, member pointer). */
typedef void (ANxForceFieldRadial::*ANxForceFieldRadialNative)(FFrame& TheStack, RESULT_DECL);

struct ANxForceFieldRadialNativeInfo
{
	const TCHAR* Name;
	ANxForceFieldRadialNative Pointer;
};

extern ANxForceFieldRadialNativeInfo g_025e2268[];
// @baa 0x00caa370
/* IMPLEMENT_NATIVE_HANDLER for ANxForceFieldRadial: the native registered under this name, or NULL. */
ANxForceFieldRadialNative* sub_00caa370(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2268[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2268[NativeIndex].Name) == 0)
		{
			return &g_025e2268[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ANxGenericForceFieldBox: the class's table of script natives (name, member pointer). */
typedef void (ANxGenericForceFieldBox::*ANxGenericForceFieldBoxNative)(FFrame& TheStack, RESULT_DECL);

struct ANxGenericForceFieldBoxNativeInfo
{
	const TCHAR* Name;
	ANxGenericForceFieldBoxNative Pointer;
};

extern ANxGenericForceFieldBoxNativeInfo g_025e2278[];
// @baa 0x00caa3d0
/* IMPLEMENT_NATIVE_HANDLER for ANxGenericForceFieldBox: the native registered under this name, or NULL. */
ANxGenericForceFieldBoxNative* sub_00caa3d0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2278[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2278[NativeIndex].Name) == 0)
		{
			return &g_025e2278[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPrefabSequence: the class's table of script natives (name, member pointer). */
typedef void (UPrefabSequence::*UPrefabSequenceNative)(FFrame& TheStack, RESULT_DECL);

struct UPrefabSequenceNativeInfo
{
	const TCHAR* Name;
	UPrefabSequenceNative Pointer;
};

extern UPrefabSequenceNativeInfo g_025e2288[];
// @baa 0x00caa430
/* IMPLEMENT_NATIVE_HANDLER for UPrefabSequence: the native registered under this name, or NULL. */
UPrefabSequenceNative* sub_00caa430(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2288[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2288[NativeIndex].Name) == 0)
		{
			return &g_025e2288[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USeqAct_CrowdSpawner: the class's table of script natives (name, member pointer). */
typedef void (USeqAct_CrowdSpawner::*USeqAct_CrowdSpawnerNative)(FFrame& TheStack, RESULT_DECL);

struct USeqAct_CrowdSpawnerNativeInfo
{
	const TCHAR* Name;
	USeqAct_CrowdSpawnerNative Pointer;
};

extern USeqAct_CrowdSpawnerNativeInfo g_025e22a0[];
// @baa 0x00caa490
/* IMPLEMENT_NATIVE_HANDLER for USeqAct_CrowdSpawner: the native registered under this name, or NULL. */
USeqAct_CrowdSpawnerNative* sub_00caa490(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e22a0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e22a0[NativeIndex].Name) == 0)
		{
			return &g_025e22a0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USeqAct_GetMatInstVectorParam: the class's table of script natives (name, member pointer). */
typedef void (USeqAct_GetMatInstVectorParam::*USeqAct_GetMatInstVectorParamNative)(FFrame& TheStack, RESULT_DECL);

struct USeqAct_GetMatInstVectorParamNativeInfo
{
	const TCHAR* Name;
	USeqAct_GetMatInstVectorParamNative Pointer;
};

extern USeqAct_GetMatInstVectorParamNativeInfo g_025e22c0[];
// @baa 0x00caa4f0
/* IMPLEMENT_NATIVE_HANDLER for USeqAct_GetMatInstVectorParam: the native registered under this name, or NULL. */
USeqAct_GetMatInstVectorParamNative* sub_00caa4f0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e22c0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e22c0[NativeIndex].Name) == 0)
		{
			return &g_025e22c0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USeqAct_Interp: the class's table of script natives (name, member pointer). */
typedef void (USeqAct_Interp::*USeqAct_InterpNative)(FFrame& TheStack, RESULT_DECL);

struct USeqAct_InterpNativeInfo
{
	const TCHAR* Name;
	USeqAct_InterpNative Pointer;
};

extern USeqAct_InterpNativeInfo g_025e22d0[];
// @baa 0x00caa550
/* IMPLEMENT_NATIVE_HANDLER for USeqAct_Interp: the native registered under this name, or NULL. */
USeqAct_InterpNative* sub_00caa550(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e22d0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e22d0[NativeIndex].Name) == 0)
		{
			return &g_025e22d0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USeqAct_Latent: the class's table of script natives (name, member pointer). */
typedef void (USeqAct_Latent::*USeqAct_LatentNative)(FFrame& TheStack, RESULT_DECL);

struct USeqAct_LatentNativeInfo
{
	const TCHAR* Name;
	USeqAct_LatentNative Pointer;
};

extern USeqAct_LatentNativeInfo g_025e22f0[];
// @baa 0x00caa5b0
/* IMPLEMENT_NATIVE_HANDLER for USeqAct_Latent: the native registered under this name, or NULL. */
USeqAct_LatentNative* sub_00caa5b0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e22f0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e22f0[NativeIndex].Name) == 0)
		{
			return &g_025e22f0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USeqEvent_Touch: the class's table of script natives (name, member pointer). */
typedef void (USeqEvent_Touch::*USeqEvent_TouchNative)(FFrame& TheStack, RESULT_DECL);

struct USeqEvent_TouchNativeInfo
{
	const TCHAR* Name;
	USeqEvent_TouchNative Pointer;
};

extern USeqEvent_TouchNativeInfo g_025e2300[];
// @baa 0x00caa610
/* IMPLEMENT_NATIVE_HANDLER for USeqEvent_Touch: the native registered under this name, or NULL. */
USeqEvent_TouchNative* sub_00caa610(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2300[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2300[NativeIndex].Name) == 0)
		{
			return &g_025e2300[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USequence: the class's table of script natives (name, member pointer). */
typedef void (USequence::*USequenceNative)(FFrame& TheStack, RESULT_DECL);

struct USequenceNativeInfo
{
	const TCHAR* Name;
	USequenceNative Pointer;
};

extern USequenceNativeInfo g_025e2318[];
// @baa 0x00caa670
/* IMPLEMENT_NATIVE_HANDLER for USequence: the native registered under this name, or NULL. */
USequenceNative* sub_00caa670(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2318[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2318[NativeIndex].Name) == 0)
		{
			return &g_025e2318[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USequenceEvent: the class's table of script natives (name, member pointer). */
typedef void (USequenceEvent::*USequenceEventNative)(FFrame& TheStack, RESULT_DECL);

struct USequenceEventNativeInfo
{
	const TCHAR* Name;
	USequenceEventNative Pointer;
};

extern USequenceEventNativeInfo g_025e2338[];
// @baa 0x00caa6d0
/* IMPLEMENT_NATIVE_HANDLER for USequenceEvent: the native registered under this name, or NULL. */
USequenceEventNative* sub_00caa6d0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2338[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2338[NativeIndex].Name) == 0)
		{
			return &g_025e2338[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USequenceObject: the class's table of script natives (name, member pointer). */
typedef void (USequenceObject::*USequenceObjectNative)(FFrame& TheStack, RESULT_DECL);

struct USequenceObjectNativeInfo
{
	const TCHAR* Name;
	USequenceObjectNative Pointer;
};

extern USequenceObjectNativeInfo g_025e2348[];
// @baa 0x00caa730
/* IMPLEMENT_NATIVE_HANDLER for USequenceObject: the native registered under this name, or NULL. */
USequenceObjectNative* sub_00caa730(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2348[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2348[NativeIndex].Name) == 0)
		{
			return &g_025e2348[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USequenceOp: the class's table of script natives (name, member pointer). */
typedef void (USequenceOp::*USequenceOpNative)(FFrame& TheStack, RESULT_DECL);

struct USequenceOpNativeInfo
{
	const TCHAR* Name;
	USequenceOpNative Pointer;
};

extern USequenceOpNativeInfo g_025e2360[];
// @baa 0x00caa790
/* IMPLEMENT_NATIVE_HANDLER for USequenceOp: the native registered under this name, or NULL. */
USequenceOpNative* sub_00caa790(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2360[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2360[NativeIndex].Name) == 0)
		{
			return &g_025e2360[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USoundNodeRandom: the class's table of script natives (name, member pointer). */
typedef void (USoundNodeRandom::*USoundNodeRandomNative)(FFrame& TheStack, RESULT_DECL);

struct USoundNodeRandomNativeInfo
{
	const TCHAR* Name;
	USoundNodeRandomNative Pointer;
};

extern USoundNodeRandomNativeInfo g_025e23d0[];
// @baa 0x00caa7f0
/* IMPLEMENT_NATIVE_HANDLER for USoundNodeRandom: the native registered under this name, or NULL. */
USoundNodeRandomNative* sub_00caa7f0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e23d0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e23d0[NativeIndex].Name) == 0)
		{
			return &g_025e23d0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UParticleSystem: the class's table of script natives (name, member pointer). */
typedef void (UParticleSystem::*UParticleSystemNative)(FFrame& TheStack, RESULT_DECL);

struct UParticleSystemNativeInfo
{
	const TCHAR* Name;
	UParticleSystemNative Pointer;
};

extern UParticleSystemNativeInfo g_025e23e0[];
// @baa 0x00caa850
/* IMPLEMENT_NATIVE_HANDLER for UParticleSystem: the native registered under this name, or NULL. */
UParticleSystemNative* sub_00caa850(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e23e0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e23e0[NativeIndex].Name) == 0)
		{
			return &g_025e23e0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UParticleSystemComponent: the class's table of script natives (name, member pointer). */
typedef void (UParticleSystemComponent::*UParticleSystemComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UParticleSystemComponentNativeInfo
{
	const TCHAR* Name;
	UParticleSystemComponentNative Pointer;
};

extern UParticleSystemComponentNativeInfo g_025e2410[];
// @baa 0x00caa8b0
/* IMPLEMENT_NATIVE_HANDLER for UParticleSystemComponent: the native registered under this name, or NULL. */
UParticleSystemComponentNative* sub_00caa8b0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2410[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2410[NativeIndex].Name) == 0)
		{
			return &g_025e2410[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for APhysXEmitterSpawnable: the class's table of script natives (name, member pointer). */
typedef void (APhysXEmitterSpawnable::*APhysXEmitterSpawnableNative)(FFrame& TheStack, RESULT_DECL);

struct APhysXEmitterSpawnableNativeInfo
{
	const TCHAR* Name;
	APhysXEmitterSpawnableNative Pointer;
};

extern APhysXEmitterSpawnableNativeInfo g_025e2578[];
// @baa 0x00caa910
/* IMPLEMENT_NATIVE_HANDLER for APhysXEmitterSpawnable: the native registered under this name, or NULL. */
APhysXEmitterSpawnableNative* sub_00caa910(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2578[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2578[NativeIndex].Name) == 0)
		{
			return &g_025e2578[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNode: the class's table of script natives (name, member pointer). */
typedef void (UAnimNode::*UAnimNodeNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodeNativeInfo
{
	const TCHAR* Name;
	UAnimNodeNative Pointer;
};

extern UAnimNodeNativeInfo g_025e2588[];
// @baa 0x00caa970
/* IMPLEMENT_NATIVE_HANDLER for UAnimNode: the native registered under this name, or NULL. */
UAnimNodeNative* sub_00caa970(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2588[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2588[NativeIndex].Name) == 0)
		{
			return &g_025e2588[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNodeAimOffset: the class's table of script natives (name, member pointer). */
typedef void (UAnimNodeAimOffset::*UAnimNodeAimOffsetNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodeAimOffsetNativeInfo
{
	const TCHAR* Name;
	UAnimNodeAimOffsetNative Pointer;
};

extern UAnimNodeAimOffsetNativeInfo g_025e25a8[];
// @baa 0x00caa9d0
/* IMPLEMENT_NATIVE_HANDLER for UAnimNodeAimOffset: the native registered under this name, or NULL. */
UAnimNodeAimOffsetNative* sub_00caa9d0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e25a8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e25a8[NativeIndex].Name) == 0)
		{
			return &g_025e25a8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNodeBlend: the class's table of script natives (name, member pointer). */
typedef void (UAnimNodeBlend::*UAnimNodeBlendNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodeBlendNativeInfo
{
	const TCHAR* Name;
	UAnimNodeBlendNative Pointer;
};

extern UAnimNodeBlendNativeInfo g_025e25c0[];
// @baa 0x00caaa30
/* IMPLEMENT_NATIVE_HANDLER for UAnimNodeBlend: the native registered under this name, or NULL. */
UAnimNodeBlendNative* sub_00caaa30(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e25c0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e25c0[NativeIndex].Name) == 0)
		{
			return &g_025e25c0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNodeBlendBase: the class's table of script natives (name, member pointer). */
typedef void (UAnimNodeBlendBase::*UAnimNodeBlendBaseNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodeBlendBaseNativeInfo
{
	const TCHAR* Name;
	UAnimNodeBlendBaseNative Pointer;
};

extern UAnimNodeBlendBaseNativeInfo g_025e25d0[];
// @baa 0x00caaa90
/* IMPLEMENT_NATIVE_HANDLER for UAnimNodeBlendBase: the native registered under this name, or NULL. */
UAnimNodeBlendBaseNative* sub_00caaa90(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e25d0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e25d0[NativeIndex].Name) == 0)
		{
			return &g_025e25d0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNodeBlendList: the class's table of script natives (name, member pointer). */
typedef void (UAnimNodeBlendList::*UAnimNodeBlendListNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodeBlendListNativeInfo
{
	const TCHAR* Name;
	UAnimNodeBlendListNative Pointer;
};

extern UAnimNodeBlendListNativeInfo g_025e25e8[];
// @baa 0x00caaaf0
/* IMPLEMENT_NATIVE_HANDLER for UAnimNodeBlendList: the native registered under this name, or NULL. */
UAnimNodeBlendListNative* sub_00caaaf0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e25e8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e25e8[NativeIndex].Name) == 0)
		{
			return &g_025e25e8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNodeBlendMultiBone: the class's table of script natives (name, member pointer). */
typedef void (UAnimNodeBlendMultiBone::*UAnimNodeBlendMultiBoneNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodeBlendMultiBoneNativeInfo
{
	const TCHAR* Name;
	UAnimNodeBlendMultiBoneNative Pointer;
};

extern UAnimNodeBlendMultiBoneNativeInfo g_025e25f8[];
// @baa 0x00caab50
/* IMPLEMENT_NATIVE_HANDLER for UAnimNodeBlendMultiBone: the native registered under this name, or NULL. */
UAnimNodeBlendMultiBoneNative* sub_00caab50(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e25f8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e25f8[NativeIndex].Name) == 0)
		{
			return &g_025e25f8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNodeCrossfader: the class's table of script natives (name, member pointer). */
typedef void (UAnimNodeCrossfader::*UAnimNodeCrossfaderNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodeCrossfaderNativeInfo
{
	const TCHAR* Name;
	UAnimNodeCrossfaderNative Pointer;
};

extern UAnimNodeCrossfaderNativeInfo g_025e2608[];
// @baa 0x00caabb0
/* IMPLEMENT_NATIVE_HANDLER for UAnimNodeCrossfader: the native registered under this name, or NULL. */
UAnimNodeCrossfaderNative* sub_00caabb0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2608[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2608[NativeIndex].Name) == 0)
		{
			return &g_025e2608[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNodePlayCustomAnim: the class's table of script natives (name, member pointer). */
typedef void (UAnimNodePlayCustomAnim::*UAnimNodePlayCustomAnimNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodePlayCustomAnimNativeInfo
{
	const TCHAR* Name;
	UAnimNodePlayCustomAnimNative Pointer;
};

extern UAnimNodePlayCustomAnimNativeInfo g_025e2630[];
// @baa 0x00caac10
/* IMPLEMENT_NATIVE_HANDLER for UAnimNodePlayCustomAnim: the native registered under this name, or NULL. */
UAnimNodePlayCustomAnimNative* sub_00caac10(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2630[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2630[NativeIndex].Name) == 0)
		{
			return &g_025e2630[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNodeSequence: the class's table of script natives (name, member pointer). */
typedef void (UAnimNodeSequence::*UAnimNodeSequenceNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodeSequenceNativeInfo
{
	const TCHAR* Name;
	UAnimNodeSequenceNative Pointer;
};

extern UAnimNodeSequenceNativeInfo g_025e2650[];
// @baa 0x00caac70
/* IMPLEMENT_NATIVE_HANDLER for UAnimNodeSequence: the native registered under this name, or NULL. */
UAnimNodeSequenceNative* sub_00caac70(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2650[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2650[NativeIndex].Name) == 0)
		{
			return &g_025e2650[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNodeSequenceBlendByAim: the class's table of script natives (name, member pointer). */
typedef void (UAnimNodeSequenceBlendByAim::*UAnimNodeSequenceBlendByAimNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodeSequenceBlendByAimNativeInfo
{
	const TCHAR* Name;
	UAnimNodeSequenceBlendByAimNative Pointer;
};

extern UAnimNodeSequenceBlendByAimNativeInfo g_025e26a0[];
// @baa 0x00caacd0
/* IMPLEMENT_NATIVE_HANDLER for UAnimNodeSequenceBlendByAim: the native registered under this name, or NULL. */
UAnimNodeSequenceBlendByAimNative* sub_00caacd0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e26a0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e26a0[NativeIndex].Name) == 0)
		{
			return &g_025e26a0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNodeSlot: the class's table of script natives (name, member pointer). */
typedef void (UAnimNodeSlot::*UAnimNodeSlotNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodeSlotNativeInfo
{
	const TCHAR* Name;
	UAnimNodeSlotNative Pointer;
};

extern UAnimNodeSlotNativeInfo g_025e26b0[];
// @baa 0x00caad30
/* IMPLEMENT_NATIVE_HANDLER for UAnimNodeSlot: the native registered under this name, or NULL. */
UAnimNodeSlotNative* sub_00caad30(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e26b0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e26b0[NativeIndex].Name) == 0)
		{
			return &g_025e26b0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimNodeSynch: the class's table of script natives (name, member pointer). */
typedef void (UAnimNodeSynch::*UAnimNodeSynchNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimNodeSynchNativeInfo
{
	const TCHAR* Name;
	UAnimNodeSynchNative Pointer;
};

extern UAnimNodeSynchNativeInfo g_025e2700[];
// @baa 0x00caad90
/* IMPLEMENT_NATIVE_HANDLER for UAnimNodeSynch: the native registered under this name, or NULL. */
UAnimNodeSynchNative* sub_00caad90(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2700[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2700[NativeIndex].Name) == 0)
		{
			return &g_025e2700[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimSet: the class's table of script natives (name, member pointer). */
typedef void (UAnimSet::*UAnimSetNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimSetNativeInfo
{
	const TCHAR* Name;
	UAnimSetNative Pointer;
};

extern UAnimSetNativeInfo g_025e2738[];
// @baa 0x00caadf0
/* IMPLEMENT_NATIVE_HANDLER for UAnimSet: the native registered under this name, or NULL. */
UAnimSetNative* sub_00caadf0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2738[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2738[NativeIndex].Name) == 0)
		{
			return &g_025e2738[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAnimTree: the class's table of script natives (name, member pointer). */
typedef void (UAnimTree::*UAnimTreeNative)(FFrame& TheStack, RESULT_DECL);

struct UAnimTreeNativeInfo
{
	const TCHAR* Name;
	UAnimTreeNative Pointer;
};

extern UAnimTreeNativeInfo g_025e2748[];
// @baa 0x00caae50
/* IMPLEMENT_NATIVE_HANDLER for UAnimTree: the native registered under this name, or NULL. */
UAnimTreeNative* sub_00caae50(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2748[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2748[NativeIndex].Name) == 0)
		{
			return &g_025e2748[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ACrowdAgent: the class's table of script natives (name, member pointer). */
typedef void (ACrowdAgent::*ACrowdAgentNative)(FFrame& TheStack, RESULT_DECL);

struct ACrowdAgentNativeInfo
{
	const TCHAR* Name;
	ACrowdAgentNative Pointer;
};

extern ACrowdAgentNativeInfo g_025e27a8[];
// @baa 0x00caaeb0
/* IMPLEMENT_NATIVE_HANDLER for ACrowdAgent: the native registered under this name, or NULL. */
ACrowdAgentNative* sub_00caaeb0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e27a8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e27a8[NativeIndex].Name) == 0)
		{
			return &g_025e27a8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UMorphNodePose: the class's table of script natives (name, member pointer). */
typedef void (UMorphNodePose::*UMorphNodePoseNative)(FFrame& TheStack, RESULT_DECL);

struct UMorphNodePoseNativeInfo
{
	const TCHAR* Name;
	UMorphNodePoseNative Pointer;
};

extern UMorphNodePoseNativeInfo g_025e27b8[];
// @baa 0x00caaf10
/* IMPLEMENT_NATIVE_HANDLER for UMorphNodePose: the native registered under this name, or NULL. */
UMorphNodePoseNative* sub_00caaf10(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e27b8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e27b8[NativeIndex].Name) == 0)
		{
			return &g_025e27b8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UMorphNodeWeight: the class's table of script natives (name, member pointer). */
typedef void (UMorphNodeWeight::*UMorphNodeWeightNative)(FFrame& TheStack, RESULT_DECL);

struct UMorphNodeWeightNativeInfo
{
	const TCHAR* Name;
	UMorphNodeWeightNative Pointer;
};

extern UMorphNodeWeightNativeInfo g_025e27c8[];
// @baa 0x00caaf70
/* IMPLEMENT_NATIVE_HANDLER for UMorphNodeWeight: the native registered under this name, or NULL. */
UMorphNodeWeightNative* sub_00caaf70(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e27c8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e27c8[NativeIndex].Name) == 0)
		{
			return &g_025e27c8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UMorphTargetSet: the class's table of script natives (name, member pointer). */
typedef void (UMorphTargetSet::*UMorphTargetSetNative)(FFrame& TheStack, RESULT_DECL);

struct UMorphTargetSetNativeInfo
{
	const TCHAR* Name;
	UMorphTargetSetNative Pointer;
};

extern UMorphTargetSetNativeInfo g_025e27d8[];
// @baa 0x00caafd0
/* IMPLEMENT_NATIVE_HANDLER for UMorphTargetSet: the native registered under this name, or NULL. */
UMorphTargetSetNative* sub_00caafd0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e27d8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e27d8[NativeIndex].Name) == 0)
		{
			return &g_025e27d8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USkelControlBase: the class's table of script natives (name, member pointer). */
typedef void (USkelControlBase::*USkelControlBaseNative)(FFrame& TheStack, RESULT_DECL);

struct USkelControlBaseNativeInfo
{
	const TCHAR* Name;
	USkelControlBaseNative Pointer;
};

extern USkelControlBaseNativeInfo g_025e27e8[];
// @baa 0x00cab030
/* IMPLEMENT_NATIVE_HANDLER for USkelControlBase: the native registered under this name, or NULL. */
USkelControlBaseNative* sub_00cab030(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e27e8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e27e8[NativeIndex].Name) == 0)
		{
			return &g_025e27e8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USkelControlLookAt: the class's table of script natives (name, member pointer). */
typedef void (USkelControlLookAt::*USkelControlLookAtNative)(FFrame& TheStack, RESULT_DECL);

struct USkelControlLookAtNativeInfo
{
	const TCHAR* Name;
	USkelControlLookAtNative Pointer;
};

extern USkelControlLookAtNativeInfo g_025e2800[];
// @baa 0x00cab090
/* IMPLEMENT_NATIVE_HANDLER for USkelControlLookAt: the native registered under this name, or NULL. */
USkelControlLookAtNative* sub_00cab090(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2800[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2800[NativeIndex].Name) == 0)
		{
			return &g_025e2800[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ASkeletalMeshActorMAT: the class's table of script natives (name, member pointer). */
typedef void (ASkeletalMeshActorMAT::*ASkeletalMeshActorMATNative)(FFrame& TheStack, RESULT_DECL);

struct ASkeletalMeshActorMATNativeInfo
{
	const TCHAR* Name;
	ASkeletalMeshActorMATNative Pointer;
};

extern ASkeletalMeshActorMATNativeInfo g_025e2828[];
// @baa 0x00cab0f0
/* IMPLEMENT_NATIVE_HANDLER for ASkeletalMeshActorMAT: the native registered under this name, or NULL. */
ASkeletalMeshActorMATNative* sub_00cab0f0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2828[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2828[NativeIndex].Name) == 0)
		{
			return &g_025e2828[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UDecalComponent: the class's table of script natives (name, member pointer). */
typedef void (UDecalComponent::*UDecalComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UDecalComponentNativeInfo
{
	const TCHAR* Name;
	UDecalComponentNative Pointer;
};

extern UDecalComponentNativeInfo g_025e2860[];
// @baa 0x00cab150
/* IMPLEMENT_NATIVE_HANDLER for UDecalComponent: the native registered under this name, or NULL. */
UDecalComponentNative* sub_00cab150(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2860[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2860[NativeIndex].Name) == 0)
		{
			return &g_025e2860[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ADecalManager: the class's table of script natives (name, member pointer). */
typedef void (ADecalManager::*ADecalManagerNative)(FFrame& TheStack, RESULT_DECL);

struct ADecalManagerNativeInfo
{
	const TCHAR* Name;
	ADecalManagerNative Pointer;
};

extern ADecalManagerNativeInfo g_025e2880[];
// @baa 0x00cab1b0
/* IMPLEMENT_NATIVE_HANDLER for ADecalManager: the native registered under this name, or NULL. */
ADecalManagerNative* sub_00cab1b0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2880[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2880[NativeIndex].Name) == 0)
		{
			return &g_025e2880[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UFogVolumeDensityComponent: the class's table of script natives (name, member pointer). */
typedef void (UFogVolumeDensityComponent::*UFogVolumeDensityComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UFogVolumeDensityComponentNativeInfo
{
	const TCHAR* Name;
	UFogVolumeDensityComponentNative Pointer;
};

extern UFogVolumeDensityComponentNativeInfo g_025e2890[];
// @baa 0x00cab210
/* IMPLEMENT_NATIVE_HANDLER for UFogVolumeDensityComponent: the native registered under this name, or NULL. */
UFogVolumeDensityComponentNative* sub_00cab210(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2890[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2890[NativeIndex].Name) == 0)
		{
			return &g_025e2890[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AApexDestructibleActor: the class's table of script natives (name, member pointer). */
typedef void (AApexDestructibleActor::*AApexDestructibleActorNative)(FFrame& TheStack, RESULT_DECL);

struct AApexDestructibleActorNativeInfo
{
	const TCHAR* Name;
	AApexDestructibleActorNative Pointer;
};

extern AApexDestructibleActorNativeInfo g_025e28a0[];
// @baa 0x00cab270
/* IMPLEMENT_NATIVE_HANDLER for AApexDestructibleActor: the native registered under this name, or NULL. */
AApexDestructibleActorNative* sub_00cab270(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e28a0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e28a0[NativeIndex].Name) == 0)
		{
			return &g_025e28a0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UFracturedBaseComponent: the class's table of script natives (name, member pointer). */
typedef void (UFracturedBaseComponent::*UFracturedBaseComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UFracturedBaseComponentNativeInfo
{
	const TCHAR* Name;
	UFracturedBaseComponentNative Pointer;
};

extern UFracturedBaseComponentNativeInfo g_025e28c0[];
// @baa 0x00cab2d0
/* IMPLEMENT_NATIVE_HANDLER for UFracturedBaseComponent: the native registered under this name, or NULL. */
UFracturedBaseComponentNative* sub_00cab2d0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e28c0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e28c0[NativeIndex].Name) == 0)
		{
			return &g_025e28c0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AFracturedStaticMeshActor: the class's table of script natives (name, member pointer). */
typedef void (AFracturedStaticMeshActor::*AFracturedStaticMeshActorNative)(FFrame& TheStack, RESULT_DECL);

struct AFracturedStaticMeshActorNativeInfo
{
	const TCHAR* Name;
	AFracturedStaticMeshActorNative Pointer;
};

extern AFracturedStaticMeshActorNativeInfo g_025e2900[];
// @baa 0x00cab330
/* IMPLEMENT_NATIVE_HANDLER for AFracturedStaticMeshActor: the native registered under this name, or NULL. */
AFracturedStaticMeshActorNative* sub_00cab330(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2900[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2900[NativeIndex].Name) == 0)
		{
			return &g_025e2900[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UFracturedStaticMeshComponent: the class's table of script natives (name, member pointer). */
typedef void (UFracturedStaticMeshComponent::*UFracturedStaticMeshComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UFracturedStaticMeshComponentNativeInfo
{
	const TCHAR* Name;
	UFracturedStaticMeshComponentNative Pointer;
};

extern UFracturedStaticMeshComponentNativeInfo g_025e2988[];
// @baa 0x00cab390
/* IMPLEMENT_NATIVE_HANDLER for UFracturedStaticMeshComponent: the native registered under this name, or NULL. */
UFracturedStaticMeshComponentNative* sub_00cab390(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2988[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2988[NativeIndex].Name) == 0)
		{
			return &g_025e2988[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AFracturedStaticMeshPart: the class's table of script natives (name, member pointer). */
typedef void (AFracturedStaticMeshPart::*AFracturedStaticMeshPartNative)(FFrame& TheStack, RESULT_DECL);

struct AFracturedStaticMeshPartNativeInfo
{
	const TCHAR* Name;
	AFracturedStaticMeshPartNative Pointer;
};

extern AFracturedStaticMeshPartNativeInfo g_025e29d8[];
// @baa 0x00cab3f0
/* IMPLEMENT_NATIVE_HANDLER for AFracturedStaticMeshPart: the native registered under this name, or NULL. */
AFracturedStaticMeshPartNative* sub_00cab3f0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e29d8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e29d8[NativeIndex].Name) == 0)
		{
			return &g_025e29d8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for AFractureManager: the class's table of script natives (name, member pointer). */
typedef void (AFractureManager::*AFractureManagerNative)(FFrame& TheStack, RESULT_DECL);

struct AFractureManagerNativeInfo
{
	const TCHAR* Name;
	AFractureManagerNative Pointer;
};

extern AFractureManagerNativeInfo g_025e29f8[];
// @baa 0x00cab450
/* IMPLEMENT_NATIVE_HANDLER for AFractureManager: the native registered under this name, or NULL. */
AFractureManagerNative* sub_00cab450(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e29f8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e29f8[NativeIndex].Name) == 0)
		{
			return &g_025e29f8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UDataStoreClient: the class's table of script natives (name, member pointer). */
typedef void (UDataStoreClient::*UDataStoreClientNative)(FFrame& TheStack, RESULT_DECL);

struct UDataStoreClientNativeInfo
{
	const TCHAR* Name;
	UDataStoreClientNative Pointer;
};

extern UDataStoreClientNativeInfo g_025e2a38[];
// @baa 0x00cab4b0
/* IMPLEMENT_NATIVE_HANDLER for UDataStoreClient: the native registered under this name, or NULL. */
UDataStoreClientNative* sub_00cab4b0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2a38[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2a38[NativeIndex].Name) == 0)
		{
			return &g_025e2a38[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UInput: the class's table of script natives (name, member pointer). */
typedef void (UInput::*UInputNative)(FFrame& TheStack, RESULT_DECL);

struct UInputNativeInfo
{
	const TCHAR* Name;
	UInputNative Pointer;
};

extern UInputNativeInfo g_025e2a70[];
// @baa 0x00cab510
/* IMPLEMENT_NATIVE_HANDLER for UInput: the native registered under this name, or NULL. */
UInputNative* sub_00cab510(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2a70[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2a70[NativeIndex].Name) == 0)
		{
			return &g_025e2a70[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UScriptDataBaseCommandlet: the class's table of script natives (name, member pointer). */
typedef void (UScriptDataBaseCommandlet::*UScriptDataBaseCommandletNative)(FFrame& TheStack, RESULT_DECL);

struct UScriptDataBaseCommandletNativeInfo
{
	const TCHAR* Name;
	UScriptDataBaseCommandletNative Pointer;
};

extern UScriptDataBaseCommandletNativeInfo g_025e8c84[];
// @baa 0x0127c280
/* IMPLEMENT_NATIVE_HANDLER for UScriptDataBaseCommandlet: the native registered under this name, or NULL. */
UScriptDataBaseCommandletNative* sub_0127c280(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e8c84[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e8c84[NativeIndex].Name) == 0)
		{
			return &g_025e8c84[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUISceneManager: the class's table of script natives (name, member pointer). */
typedef void (UUISceneManager::*UUISceneManagerNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UUISceneManagerNativeInfo
{
	const TCHAR* Name;
	UUISceneManagerNative Pointer;
};

#pragma pack(pop)
extern UUISceneManagerNativeInfo g_025e8cdc[];
// @baa 0x0127c2e0
/* IMPLEMENT_NATIVE_HANDLER for UUISceneManager: the native registered under this name, or NULL. */
UUISceneManagerNative* sub_0127c2e0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e8cdc[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e8cdc[NativeIndex].Name) == 0)
		{
			return &g_025e8cdc[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UInteraction: the class's table of script natives (name, member pointer). */
typedef void (UInteraction::*UInteractionNative)(FFrame& TheStack, RESULT_DECL);

struct UInteractionNativeInfo
{
	const TCHAR* Name;
	UInteractionNative Pointer;
};

extern UInteractionNativeInfo g_025e2a88[];
// @baa 0x00cab570
/* IMPLEMENT_NATIVE_HANDLER for UInteraction: the native registered under this name, or NULL. */
UInteractionNative* sub_00cab570(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2a88[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2a88[NativeIndex].Name) == 0)
		{
			return &g_025e2a88[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUILayer: the class's table of script natives (name, member pointer). */
typedef void (UUILayer::*UUILayerNative)(FFrame& TheStack, RESULT_DECL);

struct UUILayerNativeInfo
{
	const TCHAR* Name;
	UUILayerNative Pointer;
};

extern UUILayerNativeInfo g_025e8c94[];
// @baa 0x0127c350
/* IMPLEMENT_NATIVE_HANDLER for UUILayer: the native registered under this name, or NULL. */
UUILayerNative* sub_0127c350(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e8c94[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e8c94[NativeIndex].Name) == 0)
		{
			return &g_025e8c94[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIInputConfiguration: the class's table of script natives (name, member pointer). */
typedef void (UUIInputConfiguration::*UUIInputConfigurationNative)(FFrame& TheStack, RESULT_DECL);

struct UUIInputConfigurationNativeInfo
{
	const TCHAR* Name;
	UUIInputConfigurationNative Pointer;
};

extern UUIInputConfigurationNativeInfo g_025e2a98[];
// @baa 0x00cab5d0
/* IMPLEMENT_NATIVE_HANDLER for UUIInputConfiguration: the native registered under this name, or NULL. */
UUIInputConfigurationNative* sub_00cab5d0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2a98[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2a98[NativeIndex].Name) == 0)
		{
			return &g_025e2a98[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UGFxReimportCommandlet: the class's table of script natives (name, member pointer). */
typedef void (UGFxReimportCommandlet::*UGFxReimportCommandletNative)(FFrame& TheStack, RESULT_DECL);

struct UGFxReimportCommandletNativeInfo
{
	const TCHAR* Name;
	UGFxReimportCommandletNative Pointer;
};

extern UGFxReimportCommandletNativeInfo g_025e9450[];
// @baa 0x014f9bf0
/* IMPLEMENT_NATIVE_HANDLER for UGFxReimportCommandlet: the native registered under this name, or NULL. */
UGFxReimportCommandletNative* sub_014f9bf0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e9450[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e9450[NativeIndex].Name) == 0)
		{
			return &g_025e9450[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIInteraction: the class's table of script natives (name, member pointer). */
typedef void (UUIInteraction::*UUIInteractionNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UUIInteractionNativeInfo
{
	const TCHAR* Name;
	UUIInteractionNative Pointer;
};

#pragma pack(pop)
extern UUIInteractionNativeInfo g_025e39c8[];
// @baa 0x00cab630
/* IMPLEMENT_NATIVE_HANDLER for UUIInteraction: the native registered under this name, or NULL. */
UUIInteractionNative* sub_00cab630(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e39c8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e39c8[NativeIndex].Name) == 0)
		{
			return &g_025e39c8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIRoot: the class's table of script natives (name, member pointer). */
typedef void (UUIRoot::*UUIRootNative)(FFrame& TheStack, RESULT_DECL);

struct UUIRootNativeInfo
{
	const TCHAR* Name;
	UUIRootNative Pointer;
};

extern UUIRootNativeInfo g_025e2ab0[];
// @baa 0x00cab6a0
/* IMPLEMENT_NATIVE_HANDLER for UUIRoot: the native registered under this name, or NULL. */
UUIRootNative* sub_00cab6a0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2ab0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2ab0[NativeIndex].Name) == 0)
		{
			return &g_025e2ab0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUISceneClient: the class's table of script natives (name, member pointer). */
typedef void (UUISceneClient::*UUISceneClientNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UUISceneClientNativeInfo
{
	const TCHAR* Name;
	UUISceneClientNative Pointer;
};

#pragma pack(pop)
extern UUISceneClientNativeInfo g_025e3718[];
// @baa 0x00cab700
/* IMPLEMENT_NATIVE_HANDLER for UUISceneClient: the native registered under this name, or NULL. */
UUISceneClientNative* sub_00cab700(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e3718[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e3718[NativeIndex].Name) == 0)
		{
			return &g_025e3718[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIStyle: the class's table of script natives (name, member pointer). */
typedef void (UUIStyle::*UUIStyleNative)(FFrame& TheStack, RESULT_DECL);

struct UUIStyleNativeInfo
{
	const TCHAR* Name;
	UUIStyleNative Pointer;
};

extern UUIStyleNativeInfo g_025e2b08[];
// @baa 0x00cab770
/* IMPLEMENT_NATIVE_HANDLER for UUIStyle: the native registered under this name, or NULL. */
UUIStyleNative* sub_00cab770(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2b08[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2b08[NativeIndex].Name) == 0)
		{
			return &g_025e2b08[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UGameUISceneClient: the class's table of script natives (name, member pointer). */
typedef void (UGameUISceneClient::*UGameUISceneClientNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGameUISceneClientNativeInfo
{
	const TCHAR* Name;
	UGameUISceneClientNative Pointer;
};

#pragma pack(pop)
extern UGameUISceneClientNativeInfo g_025e38c8[];
// @baa 0x00cab7d0
/* IMPLEMENT_NATIVE_HANDLER for UGameUISceneClient: the native registered under this name, or NULL. */
UGameUISceneClientNative* sub_00cab7d0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e38c8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e38c8[NativeIndex].Name) == 0)
		{
			return &g_025e38c8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for USessionSettingsProvider: the class's table of script natives (name, member pointer). */
typedef void (USessionSettingsProvider::*USessionSettingsProviderNative)(FFrame& TheStack, RESULT_DECL);

struct USessionSettingsProviderNativeInfo
{
	const TCHAR* Name;
	USessionSettingsProviderNative Pointer;
};

extern USessionSettingsProviderNativeInfo g_025e2b20[];
// @baa 0x00cab840
/* IMPLEMENT_NATIVE_HANDLER for USessionSettingsProvider: the native registered under this name, or NULL. */
USessionSettingsProviderNative* sub_00cab840(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2b20[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2b20[NativeIndex].Name) == 0)
		{
			return &g_025e2b20[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIDataProvider: the class's table of script natives (name, member pointer). */
typedef void (UUIDataProvider::*UUIDataProviderNative)(FFrame& TheStack, RESULT_DECL);

struct UUIDataProviderNativeInfo
{
	const TCHAR* Name;
	UUIDataProviderNative Pointer;
};

extern UUIDataProviderNativeInfo g_025e2b38[];
// @baa 0x00cab8a0
/* IMPLEMENT_NATIVE_HANDLER for UUIDataProvider: the native registered under this name, or NULL. */
UUIDataProviderNative* sub_00cab8a0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2b38[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2b38[NativeIndex].Name) == 0)
		{
			return &g_025e2b38[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIDataProvider_PlayerAchievements: the class's table of script natives (name, member pointer). */
typedef void (UUIDataProvider_PlayerAchievements::*UUIDataProvider_PlayerAchievementsNative)(FFrame& TheStack, RESULT_DECL);

struct UUIDataProvider_PlayerAchievementsNativeInfo
{
	const TCHAR* Name;
	UUIDataProvider_PlayerAchievementsNative Pointer;
};

extern UUIDataProvider_PlayerAchievementsNativeInfo g_025e2b50[];
// @baa 0x00cab900
/* IMPLEMENT_NATIVE_HANDLER for UUIDataProvider_PlayerAchievements: the native registered under this name, or NULL. */
UUIDataProvider_PlayerAchievementsNative* sub_00cab900(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2b50[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2b50[NativeIndex].Name) == 0)
		{
			return &g_025e2b50[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIDataStore: the class's table of script natives (name, member pointer). */
typedef void (UUIDataStore::*UUIDataStoreNative)(FFrame& TheStack, RESULT_DECL);

struct UUIDataStoreNativeInfo
{
	const TCHAR* Name;
	UUIDataStoreNative Pointer;
};

extern UUIDataStoreNativeInfo g_025e2b60[];
// @baa 0x00cab960
/* IMPLEMENT_NATIVE_HANDLER for UUIDataStore: the native registered under this name, or NULL. */
UUIDataStoreNative* sub_00cab960(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2b60[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2b60[NativeIndex].Name) == 0)
		{
			return &g_025e2b60[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIDataStore_InputAlias: the class's table of script natives (name, member pointer). */
typedef void (UUIDataStore_InputAlias::*UUIDataStore_InputAliasNative)(FFrame& TheStack, RESULT_DECL);

struct UUIDataStore_InputAliasNativeInfo
{
	const TCHAR* Name;
	UUIDataStore_InputAliasNative Pointer;
};

extern UUIDataStore_InputAliasNativeInfo g_025e2b70[];
// @baa 0x00cab9c0
/* IMPLEMENT_NATIVE_HANDLER for UUIDataStore_InputAlias: the native registered under this name, or NULL. */
UUIDataStore_InputAliasNative* sub_00cab9c0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2b70[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2b70[NativeIndex].Name) == 0)
		{
			return &g_025e2b70[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIDataStore_OnlinePlayerData: the class's table of script natives (name, member pointer). */
typedef void (UUIDataStore_OnlinePlayerData::*UUIDataStore_OnlinePlayerDataNative)(FFrame& TheStack, RESULT_DECL);

struct UUIDataStore_OnlinePlayerDataNativeInfo
{
	const TCHAR* Name;
	UUIDataStore_OnlinePlayerDataNative Pointer;
};

extern UUIDataStore_OnlinePlayerDataNativeInfo g_025e2bb8[];
// @baa 0x00caba20
/* IMPLEMENT_NATIVE_HANDLER for UUIDataStore_OnlinePlayerData: the native registered under this name, or NULL. */
UUIDataStore_OnlinePlayerDataNative* sub_00caba20(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2bb8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2bb8[NativeIndex].Name) == 0)
		{
			return &g_025e2bb8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIDynamicDataProvider: the class's table of script natives (name, member pointer). */
typedef void (UUIDynamicDataProvider::*UUIDynamicDataProviderNative)(FFrame& TheStack, RESULT_DECL);

struct UUIDynamicDataProviderNativeInfo
{
	const TCHAR* Name;
	UUIDynamicDataProviderNative Pointer;
};

extern UUIDynamicDataProviderNativeInfo g_025e2bc8[];
// @baa 0x00caba80
/* IMPLEMENT_NATIVE_HANDLER for UUIDynamicDataProvider: the native registered under this name, or NULL. */
UUIDynamicDataProviderNative* sub_00caba80(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2bc8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2bc8[NativeIndex].Name) == 0)
		{
			return &g_025e2bc8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIObject: the class's table of script natives (name, member pointer). */
typedef void (UUIObject::*UUIObjectNative)(FFrame& TheStack, RESULT_DECL);

struct UUIObjectNativeInfo
{
	const TCHAR* Name;
	UUIObjectNative Pointer;
};

extern UUIObjectNativeInfo g_025e2be0[];
// @baa 0x00cabae0
/* IMPLEMENT_NATIVE_HANDLER for UUIObject: the native registered under this name, or NULL. */
UUIObjectNative* sub_00cabae0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2be0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2be0[NativeIndex].Name) == 0)
		{
			return &g_025e2be0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIScene: the class's table of script natives (name, member pointer). */
typedef void (UUIScene::*UUISceneNative)(FFrame& TheStack, RESULT_DECL);

struct UUISceneNativeInfo
{
	const TCHAR* Name;
	UUISceneNative Pointer;
};

extern UUISceneNativeInfo g_025e2d00[];
// @baa 0x00cabb40
/* IMPLEMENT_NATIVE_HANDLER for UUIScene: the native registered under this name, or NULL. */
UUISceneNative* sub_00cabb40(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2d00[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2d00[NativeIndex].Name) == 0)
		{
			return &g_025e2d00[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIScreenObject: the class's table of script natives (name, member pointer). */
typedef void (UUIScreenObject::*UUIScreenObjectNative)(FFrame& TheStack, RESULT_DECL);

struct UUIScreenObjectNativeInfo
{
	const TCHAR* Name;
	UUIScreenObjectNative Pointer;
};

extern UUIScreenObjectNativeInfo g_025e2db8[];
// @baa 0x00cabba0
/* IMPLEMENT_NATIVE_HANDLER for UUIScreenObject: the native registered under this name, or NULL. */
UUIScreenObjectNative* sub_00cabba0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e2db8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e2db8[NativeIndex].Name) == 0)
		{
			return &g_025e2db8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUISkin: the class's table of script natives (name, member pointer). */
typedef void (UUISkin::*UUISkinNative)(FFrame& TheStack, RESULT_DECL);

struct UUISkinNativeInfo
{
	const TCHAR* Name;
	UUISkinNative Pointer;
};

extern UUISkinNativeInfo g_025e3020[];
// @baa 0x00cabc00
/* IMPLEMENT_NATIVE_HANDLER for UUISkin: the native registered under this name, or NULL. */
UUISkinNative* sub_00cabc00(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e3020[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e3020[NativeIndex].Name) == 0)
		{
			return &g_025e3020[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UUIStyle_Combo: the class's table of script natives (name, member pointer). */
typedef void (UUIStyle_Combo::*UUIStyle_ComboNative)(FFrame& TheStack, RESULT_DECL);

struct UUIStyle_ComboNativeInfo
{
	const TCHAR* Name;
	UUIStyle_ComboNative Pointer;
};

extern UUIStyle_ComboNativeInfo g_025e3090[];
// @baa 0x00cabc60
/* IMPLEMENT_NATIVE_HANDLER for UUIStyle_Combo: the native registered under this name, or NULL. */
UUIStyle_ComboNative* sub_00cabc60(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e3090[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e3090[NativeIndex].Name) == 0)
		{
			return &g_025e3090[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ULensFlareComponent: the class's table of script natives (name, member pointer). */
typedef void (ULensFlareComponent::*ULensFlareComponentNative)(FFrame& TheStack, RESULT_DECL);

struct ULensFlareComponentNativeInfo
{
	const TCHAR* Name;
	ULensFlareComponentNative Pointer;
};

extern ULensFlareComponentNativeInfo g_025e30a8[];
// @baa 0x00cabcc0
/* IMPLEMENT_NATIVE_HANDLER for ULensFlareComponent: the native registered under this name, or NULL. */
ULensFlareComponentNative* sub_00cabcc0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e30a8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e30a8[NativeIndex].Name) == 0)
		{
			return &g_025e30a8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for ALensFlareSource: the class's table of script natives (name, member pointer). */
typedef void (ALensFlareSource::*ALensFlareSourceNative)(FFrame& TheStack, RESULT_DECL);

struct ALensFlareSourceNativeInfo
{
	const TCHAR* Name;
	ALensFlareSourceNative Pointer;
};

extern ALensFlareSourceNativeInfo g_025e30c8[];
// @baa 0x00cabd20
/* IMPLEMENT_NATIVE_HANDLER for ALensFlareSource: the native registered under this name, or NULL. */
ALensFlareSourceNative* sub_00cabd20(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e30c8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e30c8[NativeIndex].Name) == 0)
		{
			return &g_025e30c8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UFluidSurfaceComponent: the class's table of script natives (name, member pointer). */
typedef void (UFluidSurfaceComponent::*UFluidSurfaceComponentNative)(FFrame& TheStack, RESULT_DECL);

struct UFluidSurfaceComponentNativeInfo
{
	const TCHAR* Name;
	UFluidSurfaceComponentNative Pointer;
};

extern UFluidSurfaceComponentNativeInfo g_025e30d8[];
// @baa 0x00cabd80
/* IMPLEMENT_NATIVE_HANDLER for UFluidSurfaceComponent: the native registered under this name, or NULL. */
UFluidSurfaceComponentNative* sub_00cabd80(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e30d8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e30d8[NativeIndex].Name) == 0)
		{
			return &g_025e30d8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UAudioDevice: the class's table of script natives (name, member pointer). */
typedef void (UAudioDevice::*UAudioDeviceNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UAudioDeviceNativeInfo
{
	const TCHAR* Name;
	UAudioDeviceNative Pointer;
};

#pragma pack(pop)
extern UAudioDeviceNativeInfo g_025e36a8[];
// @baa 0x00cabde0
/* IMPLEMENT_NATIVE_HANDLER for UAudioDevice: the native registered under this name, or NULL. */
UAudioDeviceNative* sub_00cabde0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e36a8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e36a8[NativeIndex].Name) == 0)
		{
			return &g_025e36a8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UOnlineEventsInterfaceMcp: the class's table of script natives (name, member pointer). */
typedef void (UOnlineEventsInterfaceMcp::*UOnlineEventsInterfaceMcpNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UOnlineEventsInterfaceMcpNativeInfo
{
	const TCHAR* Name;
	UOnlineEventsInterfaceMcpNative Pointer;
};

#pragma pack(pop)
extern UOnlineEventsInterfaceMcpNativeInfo g_025e49d8[];
// @baa 0x00e2ad90
/* IMPLEMENT_NATIVE_HANDLER for UOnlineEventsInterfaceMcp: the native registered under this name, or NULL. */
UOnlineEventsInterfaceMcpNative* sub_00e2ad90(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e49d8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e49d8[NativeIndex].Name) == 0)
		{
			return &g_025e49d8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UOnlineGameInterfaceImpl: the class's table of script natives (name, member pointer). */
typedef void (UOnlineGameInterfaceImpl::*UOnlineGameInterfaceImplNative)(FFrame& TheStack, RESULT_DECL);

struct UOnlineGameInterfaceImplNativeInfo
{
	const TCHAR* Name;
	UOnlineGameInterfaceImplNative Pointer;
};

extern UOnlineGameInterfaceImplNativeInfo g_025e48f0[];
// @baa 0x00e2ae00
/* IMPLEMENT_NATIVE_HANDLER for UOnlineGameInterfaceImpl: the native registered under this name, or NULL. */
UOnlineGameInterfaceImplNative* sub_00e2ae00(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e48f0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e48f0[NativeIndex].Name) == 0)
		{
			return &g_025e48f0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UOnlineNewsInterfaceMcp: the class's table of script natives (name, member pointer). */
typedef void (UOnlineNewsInterfaceMcp::*UOnlineNewsInterfaceMcpNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UOnlineNewsInterfaceMcpNativeInfo
{
	const TCHAR* Name;
	UOnlineNewsInterfaceMcpNative Pointer;
};

#pragma pack(pop)
extern UOnlineNewsInterfaceMcpNativeInfo g_025e4a14[];
// @baa 0x00e2ae60
/* IMPLEMENT_NATIVE_HANDLER for UOnlineNewsInterfaceMcp: the native registered under this name, or NULL. */
UOnlineNewsInterfaceMcpNative* sub_00e2ae60(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e4a14[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e4a14[NativeIndex].Name) == 0)
		{
			return &g_025e4a14[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UOnlineSubsystemCommonImpl: the class's table of script natives (name, member pointer). */
typedef void (UOnlineSubsystemCommonImpl::*UOnlineSubsystemCommonImplNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UOnlineSubsystemCommonImplNativeInfo
{
	const TCHAR* Name;
	UOnlineSubsystemCommonImplNative Pointer;
};

#pragma pack(pop)
extern UOnlineSubsystemCommonImplNativeInfo g_025e4a2c[];
// @baa 0x00e2aed0
/* IMPLEMENT_NATIVE_HANDLER for UOnlineSubsystemCommonImpl: the native registered under this name, or NULL. */
UOnlineSubsystemCommonImplNative* sub_00e2aed0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e4a2c[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e4a2c[NativeIndex].Name) == 0)
		{
			return &g_025e4a2c[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UOnlineTitleFileDownloadMcp: the class's table of script natives (name, member pointer). */
typedef void (UOnlineTitleFileDownloadMcp::*UOnlineTitleFileDownloadMcpNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UOnlineTitleFileDownloadMcpNativeInfo
{
	const TCHAR* Name;
	UOnlineTitleFileDownloadMcpNative Pointer;
};

#pragma pack(pop)
extern UOnlineTitleFileDownloadMcpNativeInfo g_025e4aa8[];
// @baa 0x00e2af40
/* IMPLEMENT_NATIVE_HANDLER for UOnlineTitleFileDownloadMcp: the native registered under this name, or NULL. */
UOnlineTitleFileDownloadMcpNative* sub_00e2af40(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e4aa8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e4aa8[NativeIndex].Name) == 0)
		{
			return &g_025e4aa8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPartyBeacon: the class's table of script natives (name, member pointer). */
typedef void (UPartyBeacon::*UPartyBeaconNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UPartyBeaconNativeInfo
{
	const TCHAR* Name;
	UPartyBeaconNative Pointer;
};

#pragma pack(pop)
extern UPartyBeaconNativeInfo g_025e49fc[];
// @baa 0x00e2afb0
/* IMPLEMENT_NATIVE_HANDLER for UPartyBeacon: the native registered under this name, or NULL. */
UPartyBeaconNative* sub_00e2afb0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e49fc[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e49fc[NativeIndex].Name) == 0)
		{
			return &g_025e49fc[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPartyBeaconClient: the class's table of script natives (name, member pointer). */
typedef void (UPartyBeaconClient::*UPartyBeaconClientNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UPartyBeaconClientNativeInfo
{
	const TCHAR* Name;
	UPartyBeaconClientNative Pointer;
};

#pragma pack(pop)
extern UPartyBeaconClientNativeInfo g_025e4ad8[];
// @baa 0x00e2b020
/* IMPLEMENT_NATIVE_HANDLER for UPartyBeaconClient: the native registered under this name, or NULL. */
UPartyBeaconClientNative* sub_00e2b020(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e4ad8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e4ad8[NativeIndex].Name) == 0)
		{
			return &g_025e4ad8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UPartyBeaconHost: the class's table of script natives (name, member pointer). */
typedef void (UPartyBeaconHost::*UPartyBeaconHostNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UPartyBeaconHostNativeInfo
{
	const TCHAR* Name;
	UPartyBeaconHostNative Pointer;
};

#pragma pack(pop)
extern UPartyBeaconHostNativeInfo g_025e4a48[];
// @baa 0x00e2b090
/* IMPLEMENT_NATIVE_HANDLER for UPartyBeaconHost: the native registered under this name, or NULL. */
UPartyBeaconHostNative* sub_00e2b090(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e4a48[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e4a48[NativeIndex].Name) == 0)
		{
			return &g_025e4a48[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UGFxInteraction: the class's table of script natives (name, member pointer). */
typedef void (UGFxInteraction::*UGFxInteractionNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGFxInteractionNativeInfo
{
	const TCHAR* Name;
	UGFxInteractionNative Pointer;
};

#pragma pack(pop)
extern UGFxInteractionNativeInfo g_025e4d84[];
// @baa 0x00e42620
/* IMPLEMENT_NATIVE_HANDLER for UGFxInteraction: the native registered under this name, or NULL. */
UGFxInteractionNative* sub_00e42620(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e4d84[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e4d84[NativeIndex].Name) == 0)
		{
			return &g_025e4d84[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UGFxMovie: the class's table of script natives (name, member pointer). */
typedef void (UGFxMovie::*UGFxMovieNative)(FFrame& TheStack, RESULT_DECL);

struct UGFxMovieNativeInfo
{
	const TCHAR* Name;
	UGFxMovieNative Pointer;
};

extern UGFxMovieNativeInfo g_025e4bc8[];
// @baa 0x00e42690
/* IMPLEMENT_NATIVE_HANDLER for UGFxMovie: the native registered under this name, or NULL. */
UGFxMovieNative* sub_00e42690(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e4bc8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e4bc8[NativeIndex].Name) == 0)
		{
			return &g_025e4bc8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UGFxFSCmdHandler_Kismet: the class's table of script natives (name, member pointer). */
typedef void (UGFxFSCmdHandler_Kismet::*UGFxFSCmdHandler_KismetNative)(FFrame& TheStack, RESULT_DECL);

struct UGFxFSCmdHandler_KismetNativeInfo
{
	const TCHAR* Name;
	UGFxFSCmdHandler_KismetNative Pointer;
};

extern UGFxFSCmdHandler_KismetNativeInfo g_025e4cd8[];
// @baa 0x00e426f0
/* IMPLEMENT_NATIVE_HANDLER for UGFxFSCmdHandler_Kismet: the native registered under this name, or NULL. */
UGFxFSCmdHandler_KismetNative* sub_00e426f0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e4cd8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e4cd8[NativeIndex].Name) == 0)
		{
			return &g_025e4cd8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}

/* UnScript.h DECLARE_NATIVE_TYPE for UGFxDataStoreSubscriber: the class's table of script natives (name, member pointer). */
typedef void (UGFxDataStoreSubscriber::*UGFxDataStoreSubscriberNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGFxDataStoreSubscriberNativeInfo
{
	const TCHAR* Name;
	UGFxDataStoreSubscriberNative Pointer;
};

#pragma pack(pop)
extern UGFxDataStoreSubscriberNativeInfo g_025e4db8[];
// @baa 0x00e42750
/* IMPLEMENT_NATIVE_HANDLER for UGFxDataStoreSubscriber: the native registered under this name, or NULL. */
UGFxDataStoreSubscriberNative* sub_00e42750(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e4db8[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e4db8[NativeIndex].Name) == 0)
		{
			return &g_025e4db8[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}
