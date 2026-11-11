// Engine_0c80000.cpp: 70 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UAudioComponent_ : public UAudioComponent
{
	void ResetToDefaults();
	void execResetToDefaults(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c80a10
void UAudioComponent_::execResetToDefaults( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetToDefaults();
}

struct AController_ : public AController
{
	void FinishRotation();
	void execFinishRotation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c84af0
void AController_::execFinishRotation( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	FinishRotation();
}

// @baa 0x00c85120
void AController::execEndClimbLadder( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_370();
}

struct AController__00c851d0 : public AController
{
	void StopLatentExecution();
	void execStopLatentExecution(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c851d0
void AController__00c851d0::execStopLatentExecution( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StopLatentExecution();
}

struct ADroppedPickup_ : public ADroppedPickup
{
	void AddToNavigation();
	void execAddToNavigation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c87850
void ADroppedPickup_::execAddToNavigation( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	AddToNavigation();
}

struct ADroppedPickup__00c87880 : public ADroppedPickup
{
	void RemoveFromNavigation();
	void execRemoveFromNavigation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c87880
void ADroppedPickup__00c87880::execRemoveFromNavigation( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	RemoveFromNavigation();
}

// @baa 0x00c878e0
void AInterpActor::execSetShadowParentOnAllAttachedComponents( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x00c88fb0
void ACoverGroup::execEnableGroup( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x00c88ff0
void ACoverGroup::execDisableGroup( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_358();
}

// @baa 0x00c89030
void ACoverGroup::execToggleGroup( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

struct AFileWriter_ : public AFileWriter
{
	void CloseFile();
	void execCloseFile(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89070
void AFileWriter_::execCloseFile( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CloseFile();
}

struct AGameInfo_ : public AGameInfo
{
	void DoNavFearCostFallOff();
	void execDoNavFearCostFallOff(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c890d0
void AGameInfo_::execDoNavFearCostFallOff( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoNavFearCostFallOff();
}

struct ULightEnvironmentComponent_ : public ULightEnvironmentComponent
{
	UBOOL IsEnabled();
	void execIsEnabled(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8b6d0
void ULightEnvironmentComponent_::execIsEnabled( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsEnabled();
}

struct UCameraAnimInst_ : public UCameraAnimInst {
    void ApplyTransientScaling(FLOAT Scalar); /* 0x00788120 */
};

// @baa 0x00c8c330
void UCameraAnimInst::execApplyTransientScaling(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Scalar);
    P_FINISH;
    ((UCameraAnimInst_*)this)->ApplyTransientScaling(Scalar);
}

struct UTexture2DComposite_ : public UTexture2DComposite
{
	UBOOL SourceTexturesFullyStreamedIn();
	void execSourceTexturesFullyStreamedIn(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8f520
void UTexture2DComposite_::execSourceTexturesFullyStreamedIn( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = SourceTexturesFullyStreamedIn();
}

struct UTexture2DComposite__00c8f5c0 : public UTexture2DComposite
{
	void ResetSourceRegions();
	void execResetSourceRegions(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8f5c0
void UTexture2DComposite__00c8f5c0::execResetSourceRegions( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetSourceRegions();
}

// @baa 0x00c8fcd0
void ACrowdAgent::execPlayDeath( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x00c8ff00
void ASkeletalMeshActorMAT::execMAT_FinishAnimControl( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_360();
}

struct AController__00c84e30 : public AController
{
	ANavigationPoint* sub_007ad390();
};

// @baa 0x00c84e30
void AController::execFindRandomDest(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ANavigationPoint**)Result = ((AController__00c84e30*)this)->sub_007ad390();
}

struct APortalTeleporter_ : public APortalTeleporter
{
	UTextureRenderTarget2D* sub_008c5cb0();
};

// @baa 0x00c8ba90
void APortalTeleporter::execCreatePortalTexture(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UTextureRenderTarget2D**)Result = ((APortalTeleporter_*)this)->sub_008c5cb0();
}

// @baa 0x00c87e50
void UReachSpec::execIsOneWay(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_110();
}

// @baa 0x00c8c4b0
void UCameraModifier::execIsDisabled(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_110();
}

// @baa 0x00c8cb50
void UFont::execGetMaxCharHeight(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_118();
}

struct AActor_ : public AActor
{
	void sub_008bba30(UActorComponent*);
};

// @baa 0x00c821e0
void AActor::execAttachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, NewComponent);
	P_FINISH;
	((AActor_*)this)->sub_008bba30(NewComponent);
}

struct AActor__00c82240 : public AActor
{
	void sub_008c7f00(UActorComponent*);
};

// @baa 0x00c82240
void AActor::execDetachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, ExComponent);
	P_FINISH;
	((AActor__00c82240*)this)->sub_008c7f00(ExComponent);
}

struct AActor__00c822a0 : public AActor
{
	void sub_008c7f30(UActorComponent*);
};

// @baa 0x00c822a0
void AActor::execReattachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, ComponentToReattach);
	P_FINISH;
	((AActor__00c822a0*)this)->sub_008c7f30(ComponentToReattach);
}

struct AActor__00c82300 : public AActor
{
	void sub_007580f0(BYTE);
};

// @baa 0x00c82300
void AActor::execSetTickGroup(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(NewTickGroup);
	P_FINISH;
	((AActor__00c82300*)this)->sub_007580f0(NewTickGroup);
}

struct AEmitterPool_ : public AEmitterPool
{
	void sub_008d2e50(UParticleSystemComponent*);
};

// @baa 0x00c87920
void AEmitterPool::execReturnToPool(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UParticleSystemComponent, PSC);
	P_FINISH;
	((AEmitterPool_*)this)->sub_008d2e50(PSC);
}

struct AEmitterPool__00c87980 : public AEmitterPool
{
	void sub_008cf8f0(UParticleSystemComponent*);
};

// @baa 0x00c87980
void AEmitterPool::execFreeStaticMeshComponents(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UParticleSystemComponent, PSC);
	P_FINISH;
	((AEmitterPool__00c87980*)this)->sub_008cf8f0(PSC);
}

struct AEmitterPool__00c87a60 : public AEmitterPool
{
	void sub_008c7120(UStaticMeshComponent*);
};

// @baa 0x00c87a60
void AEmitterPool::execFreeMaterialInstanceConstants(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UStaticMeshComponent, SMC);
	P_FINISH;
	((AEmitterPool__00c87a60*)this)->sub_008c7120(SMC);
}

struct AGameInfo__00c89100 : public AGameInfo
{
	void sub_008c7500(AActor*);
};

// @baa 0x00c89100
void AGameInfo::execForceClearUnpauseDelegates(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, PauseActor);
	P_FINISH;
	((AGameInfo__00c89100*)this)->sub_008c7500(PauseActor);
}

struct UTexture2DComposite__00c8f560 : public UTexture2DComposite
{
	void sub_00733600(INT);
};

// @baa 0x00c8f560
void UTexture2DComposite::execUpdateCompositeTexture(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(NumMipsToGenerate);
	P_FINISH;
	((UTexture2DComposite__00c8f560*)this)->sub_00733600(NumMipsToGenerate);
}

struct ALensFlareSource_ : public ALensFlareSource
{
	void sub_00bbbd50(ULensFlare*);
};

// @baa 0x00c8faa0
void ALensFlareSource::execSetTemplate(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ULensFlare, NewTemplate);
	P_FINISH;
	((ALensFlareSource_*)this)->sub_00bbbd50(NewTemplate);
}

struct ULensFlareComponent_ : public ULensFlareComponent
{
	void sub_00bacd70(ULensFlare*);
};

// @baa 0x00c8fb00
void ULensFlareComponent::execSetTemplate(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ULensFlare, NewTemplate);
	P_FINISH;
	((ULensFlareComponent_*)this)->sub_00bacd70(NewTemplate);
}

struct USceneCaptureComponent_ : public USceneCaptureComponent
{
	void sub_008a72f0(FLOAT);
};

// @baa 0x00c8b750
void USceneCaptureComponent::execSetFrameRate(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewFrameRate);
	P_FINISH;
	((USceneCaptureComponent_*)this)->sub_008a72f0(NewFrameRate);
}

struct UTexture2D_ : public UTexture2D
{
	void sub_00717d50(FLOAT);
};

// @baa 0x00c8f360
void UTexture2D::execSetForceMipLevelsToBeResident(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Seconds);
	P_FINISH;
	((UTexture2D_*)this)->sub_00717d50(Seconds);
}

struct AController__00c84800 : public AController
{
	UBOOL sub_007a0710(APawn*);
};

// @baa 0x00c84800
void AController::execCanSee(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APawn, Other);
	P_FINISH;
	*(UBOOL*)Result = ((AController__00c84800*)this)->sub_007a0710(Other);
}

struct AController__00c85030 : public AController
{
	UBOOL sub_007a0b40(AActor*);
};

// @baa 0x00c85030
void AController::execActorReachable(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, anActor);
	P_FINISH;
	*(UBOOL*)Result = ((AController__00c85030*)this)->sub_007a0b40(anActor);
}

struct AController__00c85160 : public AController
{
	UBOOL sub_007a0da0(INT);
};

// @baa 0x00c85160
void AController::execInLatentExecution(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(LatentActionNumber);
	P_FINISH;
	*(UBOOL*)Result = ((AController__00c85160*)this)->sub_007a0da0(LatentActionNumber);
}

struct AEmitterPool__00c87b40 : public AEmitterPool
{
	UParticleSystemComponent* sub_008c7290(UParticleSystem*);
};

// @baa 0x00c87b40
void AEmitterPool::execGetPooledComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UParticleSystem, EmitterTemplate);
	P_FINISH;
	*(UParticleSystemComponent**)Result = ((AEmitterPool__00c87b40*)this)->sub_008c7290(EmitterTemplate);
}

struct ANavigationPoint_ : public ANavigationPoint
{
	UBOOL sub_00835b60(ANavigationPoint*);
};

// @baa 0x00c880a0
void ANavigationPoint::execIsOnDifferentNetwork(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ANavigationPoint, Nav);
	P_FINISH;
	*(UBOOL*)Result = ((ANavigationPoint_*)this)->sub_00835b60(Nav);
}

struct APortalTeleporter__00c8b900 : public APortalTeleporter
{
	UBOOL sub_008dd9d0(AActor*);
};

// @baa 0x00c8b900
void APortalTeleporter::execTransformActor(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, A);
	P_FINISH;
	*(UBOOL*)Result = ((APortalTeleporter__00c8b900*)this)->sub_008dd9d0(A);
}

struct AActor__00c82070 : public AActor
{
	void sub_00777440(UBOOL);
};

// @baa 0x00c82070
void AActor::execSetOnlyOwnerSee(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewOnlyOwnerSee);
	P_FINISH;
	((AActor__00c82070*)this)->sub_00777440(bNewOnlyOwnerSee);
}

struct UHeightFogComponent_ : public UHeightFogComponent
{
	void sub_006acc00(UBOOL);
};

// @baa 0x00c8b550
void UHeightFogComponent::execSetEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bSetEnabled);
	P_FINISH;
	((UHeightFogComponent_*)this)->sub_006acc00(bSetEnabled);
}

struct ULightEnvironmentComponent__00c8b660 : public ULightEnvironmentComponent
{
	void sub_006ad720(UBOOL);
};

// @baa 0x00c8b660
void ULightEnvironmentComponent::execSetEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewEnabled);
	P_FINISH;
	((ULightEnvironmentComponent__00c8b660*)this)->sub_006ad720(bNewEnabled);
}

struct UPointLightComponent_ : public UPointLightComponent
{
	void sub_006e9f10(FVector);
};

// @baa 0x00c8b5f0
void UPointLightComponent::execSetTranslation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewTranslation);
	P_FINISH;
	((UPointLightComponent_*)this)->sub_006e9f10(NewTranslation);
}

struct AActor__00c825f0 : public AActor
{
	void sub_00763700(FBox&);
};

// @baa 0x00c825f0
void AActor::execGetComponentsBoundingBox(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FBox, ActorBox);
	P_FINISH;
	((AActor__00c825f0*)this)->sub_00763700(ActorBox);
}

struct UCameraAnimInst__00c8c2b0 : public UCameraAnimInst
{
	void sub_007880c0(UBOOL);
};

// @baa 0x00c8c2b0
void UCameraAnimInst::execStop(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bImmediate, 0);
	P_FINISH;
	((UCameraAnimInst__00c8c2b0*)this)->sub_007880c0(bImmediate);
}

struct AActor__00c82570 : public AActor
{
	UBOOL sub_008bb150(FVector);
};

// @baa 0x00c82570
void AActor::execContainsPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Spot);
	P_FINISH;
	*(UBOOL*)Result = ((AActor__00c82570*)this)->sub_008bb150(Spot);
}

struct AController__00c84fb0 : public AController
{
	UBOOL sub_007a0c00(FVector);
};

// @baa 0x00c84fb0
void AController::execPointReachable(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, aPoint);
	P_FINISH;
	*(UBOOL*)Result = ((AController__00c84fb0*)this)->sub_007a0c00(aPoint);
}

struct AController__00c850a0 : public AController
{
	UBOOL sub_007a08d0(FVector);
};

// @baa 0x00c850a0
void AController::execPickWallAdjust(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, HitNormal);
	P_FINISH;
	*(UBOOL*)Result = ((AController__00c850a0*)this)->sub_007a08d0(HitNormal);
}

struct AActor__00c820e0 : public AActor
{
	void sub_008aa030(FLOAT&);
};

// @baa 0x00c820e0
void AActor::execClock(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_REF(Time);
	P_FINISH;
	((AActor__00c820e0*)this)->sub_008aa030(Time);
}

struct AActor__00c82160 : public AActor
{
	void sub_008aa040(FLOAT&);
};

// @baa 0x00c82160
void AActor::execUnClock(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_REF(Time);
	P_FINISH;
	((AActor__00c82160*)this)->sub_008aa040(Time);
}

struct AEmitterPool__00c879e0 : public AEmitterPool
{
	UParticleSystemComponent* sub_008cfa50(UBOOL);
};

// @baa 0x00c879e0
void AEmitterPool::execGetFreeStaticMeshComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bCreateNewObject, 1);
	P_FINISH;
	*(UParticleSystemComponent**)Result = ((AEmitterPool__00c879e0*)this)->sub_008cfa50(bCreateNewObject);
}

struct AEmitterPool__00c87ac0 : public AEmitterPool
{
	UMaterialInstanceConstant* sub_008cfb40(UBOOL);
};

// @baa 0x00c87ac0
void AEmitterPool::execGetFreeMatInstConsts(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bCreateNewObject, 1);
	P_FINISH;
	*(UMaterialInstanceConstant**)Result = ((AEmitterPool__00c87ac0*)this)->sub_008cfb40(bCreateNewObject);
}

struct UPostProcessChain_ : public UPostProcessChain
{
	void* sub_00892bb0(FName);
};

// @baa 0x00c8ed10
void UPostProcessChain::execFindPostProcessEffect(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(EffectName);
	P_FINISH;
	*(void**)Result = ((UPostProcessChain_*)this)->sub_00892bb0(EffectName);
}

// @baa 0x00c8cf20
// @baa 0x00c8cf20
void UOnlineStats::execGetViewName(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ViewId);
    P_FINISH;
    *(FName*)Result = GetViewName(ViewId);
}

// @baa 0x00c8d4a0
// @baa 0x00c8d4a0
void UOnlineStatsWrite::execGetStatName(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(StatId);
    P_FINISH;
    *(FName*)Result = GetStatName(StatId);
}

// @baa 0x00c8fb60
// @baa 0x00c8fb60
void ULensFlareComponent::execSetSourceColor(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FLinearColor, InSourceColor);
    P_FINISH;
    SetSourceColor(InSourceColor);
}

// @baa 0x00c87de0
void UReachSpec::execCostFor(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APawn, P);
	P_FINISH;
	*(INT*)Result = vf_10c((INT)P);
}

// @baa 0x00c87fc0
void ANavigationPoint::execIsUsableAnchorFor(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APawn, P);
	P_FINISH;
	*(UBOOL*)Result = vf_354((INT)P);
}

// @baa 0x00c88030
void ATeleporter::execCanTeleport(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, A);
	P_FINISH;
	*(UBOOL*)Result = vf_358((INT)A);
}

// @baa 0x00c81ff0
void AActor::execSetHidden(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewHidden);
	P_FINISH;
	vf_12c(bNewHidden);
}

// @baa 0x00c88d50
void ACoverSlotMarker::execSetSlotEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnable);
	P_FINISH;
	vf_3b8(bEnable);
}

// @baa 0x00c8fbe0
void ULensFlareComponent::execSetIsActive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInIsActive);
	P_FINISH;
	vf_254(bInIsActive);
}

// @baa 0x00c8ca00
void UFont::execGetResolutionPageIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(HeightTest);
	P_FINISH;
	*(INT*)Result = vf_10c(HeightTest);
}

// @baa 0x00c8ca70
void UFont::execGetScalingFactor(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(HeightTest);
	P_FINISH;
	*(FLOAT*)Result = vf_110(HeightTest);
}

// @baa 0x00c8cae0
void UFont::execGetAuthoredViewportHeight(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(ViewportHeight);
	P_FINISH;
	*(FLOAT*)Result = vf_114(ViewportHeight);
}

// @baa 0x00c8cbc0
void UMultiFont::execGetResolutionTestTableIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(HeightTest);
	P_FINISH;
	*(INT*)Result = vf_124(HeightTest);
}

// @baa 0x00c8f2f0
void UMaterialInterface::execSetForceMipLevelsToBeResident(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(ForceDuration);
	P_FINISH;
	vf_12c(ForceDuration);
}
