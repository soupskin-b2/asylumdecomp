// Engine_0c80000.cpp: 105 functions
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
	EnableGroup();
}

// @baa 0x00c88ff0
void ACoverGroup::execDisableGroup( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DisableGroup();
}

// @baa 0x00c89030
void ACoverGroup::execToggleGroup( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ToggleGroup();
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
	*(UBOOL*)Result = IsDisabled();
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
	*(INT*)Result = CostFor(P);
}

// @baa 0x00c87fc0
void ANavigationPoint::execIsUsableAnchorFor(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APawn, P);
	P_FINISH;
	*(UBOOL*)Result = IsUsableAnchorFor(P);
}

// @baa 0x00c88030
void ATeleporter::execCanTeleport(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, A);
	P_FINISH;
	*(UBOOL*)Result = CanTeleport(A);
}

// @baa 0x00c81ff0
void AActor::execSetHidden(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewHidden);
	P_FINISH;
	SetHidden(bNewHidden);
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

struct UCameraAnimInst__00c8c210 : public UCameraAnimInst
{
    /* AdvanceAnim; Classes.h doesn't declare it. */
    void sub_0078a850(FLOAT DeltaTime, UBOOL bJump);
};

// @baa 0x00c8c210
void UCameraAnimInst::execAdvanceAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_UBOOL(bJump);
    P_FINISH;
    ((UCameraAnimInst__00c8c210*)this)->sub_0078a850(DeltaTime, bJump);
}

struct APortalTeleporter__00c8b970 : public APortalTeleporter
{
    /* TransformVectorDir; Classes.h doesn't declare it. */
    FVector sub_008de2d0(FVector V);
};

// @baa 0x00c8b970
void APortalTeleporter::execTransformVectorDir(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, V);
    P_FINISH;
    *(FVector*)Result = ((APortalTeleporter__00c8b970*)this)->sub_008de2d0(V);
}

struct APortalTeleporter__00c8ba00 : public APortalTeleporter
{
    /* TransformHitLocation; Classes.h doesn't declare it. */
    FVector sub_008de460(FVector HitLocation);
};

// @baa 0x00c8ba00
void APortalTeleporter::execTransformHitLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, HitLocation);
    P_FINISH;
    *(FVector*)Result = ((APortalTeleporter__00c8ba00*)this)->sub_008de460(HitLocation);
}

struct USceneCapture2DComponent_ : public USceneCapture2DComponent
{
    /* SetView; Classes.h doesn't declare it. */
    void sub_008b03e0(FVector NewLocation, FRotator NewRotation);
};

// @baa 0x00c8b7c0
void USceneCapture2DComponent::execSetView(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, NewLocation);
    P_GET_STRUCT(FRotator, NewRotation);
    P_FINISH;
    ((USceneCapture2DComponent_*)this)->sub_008b03e0(NewLocation, NewRotation);
}

struct AHUD_ : public AHUD
{
    /* Draw3DLine; Classes.h doesn't declare it. */
    void sub_008a9530(FVector Start, FVector End, FColor LineColor);
};

// @baa 0x00c87be0
void AHUD::execDraw3DLine(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Start);
    P_GET_STRUCT(FVector, End);
    P_GET_STRUCT(FColor, LineColor);
    P_FINISH;
    ((AHUD_*)this)->sub_008a9530(Start, End, LineColor);
}

struct AHUD__00c87cb0 : public AHUD
{
    /* Draw2DLine; Classes.h doesn't declare it. */
    void sub_008a9580(INT X1, INT Y1, INT X2, INT Y2, FColor LineColor);
};

// @baa 0x00c87cb0
void AHUD::execDraw2DLine(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(X1);
    P_GET_INT(Y1);
    P_GET_INT(X2);
    P_GET_INT(Y2);
    P_GET_STRUCT(FColor, LineColor);
    P_FINISH;
    ((AHUD__00c87cb0*)this)->sub_008a9580(X1, Y1, X2, Y2, LineColor);
}

struct UTexture2DDynamic_ : public UTexture2DDynamic
{
    /* Init(INT InSizeX, INT InSizeY, BYTE InFormat, UBOOL InIsResolveTarget); Classes.h doesn't declare it. */
    void sub_00754ed0(INT InSizeX, INT InSizeY, BYTE InFormat, UBOOL InIsResolveTarget);
};

// @baa 0x00c8f620
void UTexture2DDynamic::execInit(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(InSizeX);
    P_GET_INT(InSizeY);
    P_GET_BYTE_OPTX(InFormat, PF_A8R8G8B8);
    P_GET_UBOOL_OPTX(InIsResolveTarget, FALSE);
    P_FINISH;
    ((UTexture2DDynamic_*)this)->sub_00754ed0(InSizeX, InSizeY, InFormat, InIsResolveTarget);
}

struct UCameraAnimInst__00c8c0e0 : public UCameraAnimInst
{
    /* Update(FLOAT NewRate, FLOAT NewScale, FLOAT NewBlendInTime, FLOAT NewBlendOutTime, FLOAT NewDuration); Classes.h doesn't declare it. */
    void sub_00788030(FLOAT NewRate, FLOAT NewScale, FLOAT NewBlendInTime, FLOAT NewBlendOutTime, FLOAT NewDuration);
};

// @baa 0x00c8c0e0
void UCameraAnimInst::execUpdate(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(NewRate);
    P_GET_FLOAT(NewScale);
    P_GET_FLOAT(NewBlendInTime);
    P_GET_FLOAT(NewBlendOutTime);
    P_GET_FLOAT_OPTX(NewDuration, 0.f);
    P_FINISH;
    ((UCameraAnimInst__00c8c0e0*)this)->sub_00788030(NewRate, NewScale, NewBlendInTime, NewBlendOutTime, NewDuration);
}

struct UCameraAnimInst__00c8bef0 : public UCameraAnimInst
{
    /* Play(UCameraAnim*, AActor*, FLOAT InRate, FLOAT InScale, FLOAT InBlendInTime, FLOAT InBlendOutTime, UBOOL bInLoop, UBOOL bRandomStartTime, FLOAT Duration); Classes.h doesn't declare it. */
    void sub_00791ee0(UCameraAnim* Anim, AActor* CamActor, FLOAT InRate, FLOAT InScale, FLOAT InBlendInTime, FLOAT InBlendOutTime, UBOOL bInLoop, UBOOL bRandomStartTime, FLOAT Duration);
};

// @baa 0x00c8bef0
void UCameraAnimInst::execPlay(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UCameraAnim, Anim);
    P_GET_OBJECT(AActor, CamActor);
    P_GET_FLOAT(InRate);
    P_GET_FLOAT(InScale);
    P_GET_FLOAT(InBlendInTime);
    P_GET_FLOAT(InBlendOutTime);
    P_GET_UBOOL(bInLoop);
    P_GET_UBOOL(bRandomStartTime);
    P_GET_FLOAT_OPTX(Duration, 0.f);
    P_FINISH;
    ((UCameraAnimInst__00c8bef0*)this)->sub_00791ee0(Anim, CamActor, InRate, InScale, InBlendInTime, InBlendOutTime, bInLoop, bRandomStartTime, Duration);
}

// @baa 0x00c8f180
void UMaterialInterface::execGetTextureParameterValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ParameterName);
    P_GET_OBJECT_REF(UTexture, OutValue);
    P_FINISH;
    *(UBOOL*)Result = GetTextureParameterValue(ParameterName, OutValue);
}

/* AActor::DrawDebugCoordinateSystem (0x8a9e40) isn't declared in the kit. */
struct AActor__00c819e0 : public AActor
{
    void DrawDebugCoordinateSystem(FVector AxisLoc, FRotator AxisRot, FLOAT Scale, UBOOL bPersistentLines);
};

// @baa 0x00c819e0
void AActor::execDrawDebugCoordinateSystem(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, AxisLoc);
    P_GET_STRUCT(FRotator, AxisRot);
    P_GET_FLOAT(Scale);
    P_GET_UBOOL_OPTX(bPersistentLines, FALSE);
    P_FINISH;
    ((AActor__00c819e0*)this)->DrawDebugCoordinateSystem(AxisLoc, AxisRot, Scale, bPersistentLines);
}

/* AActor::DrawDebugSphere (0x8b0cf0) isn't declared in the kit. */
struct AActor__00c81b00 : public AActor
{
    void DrawDebugSphere(FVector Center, FLOAT Radius, INT Segments, BYTE R, BYTE G, BYTE B, UBOOL bPersistentLines);
};

// @baa 0x00c81b00
void AActor::execDrawDebugSphere(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Center);
    P_GET_FLOAT(Radius);
    P_GET_INT(Segments);
    P_GET_BYTE(R);
    P_GET_BYTE(G);
    P_GET_BYTE(B);
    P_GET_UBOOL_OPTX(bPersistentLines, FALSE);
    P_FINISH;
    ((AActor__00c81b00*)this)->DrawDebugSphere(Center, Radius, Segments, R, G, B, bPersistentLines);
}

/* AActor::DrawDebugCylinder (0x8b1060) isn't declared in the kit. */
struct AActor__00c81c80 : public AActor
{
    void DrawDebugCylinder(FVector Start, FVector End, FLOAT Radius, INT Segments, BYTE R, BYTE G, BYTE B, UBOOL bPersistentLines);
};

// @baa 0x00c81c80
void AActor::execDrawDebugCylinder(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Start);
    P_GET_STRUCT(FVector, End);
    P_GET_FLOAT(Radius);
    P_GET_INT(Segments);
    P_GET_BYTE(R);
    P_GET_BYTE(G);
    P_GET_BYTE(B);
    P_GET_UBOOL_OPTX(bPersistentLines, FALSE);
    P_FINISH;
    ((AActor__00c81c80*)this)->DrawDebugCylinder(Start, End, Radius, Segments, R, G, B, bPersistentLines);
}

/* AActor::DrawDebugCone (0x8c76a0) isn't declared in the kit. */
struct AActor__00c81e30 : public AActor
{
    void DrawDebugCone(FVector Origin, FVector Direction, FLOAT Length, FLOAT AngleWidth, FLOAT AngleHeight, INT NumSides, FColor DrawColor, UBOOL bPersistentLines);
};

// @baa 0x00c81e30
void AActor::execDrawDebugCone(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Origin);
    P_GET_STRUCT(FVector, Direction);
    P_GET_FLOAT(Length);
    P_GET_FLOAT(AngleWidth);
    P_GET_FLOAT(AngleHeight);
    P_GET_INT(NumSides);
    P_GET_STRUCT(FColor, DrawColor);
    P_GET_UBOOL_OPTX(bPersistentLines, FALSE);
    P_FINISH;
    ((AActor__00c81e30*)this)->DrawDebugCone(Origin, Direction, Length, AngleWidth, AngleHeight, NumSides, DrawColor, bPersistentLines);
}

/* AActor::ClampRotation (0x8b14b0) isn't declared in the kit. */
struct AActor__00c82360 : public AActor
{
    UBOOL ClampRotation(FRotator& out_Rot, FRotator rBase, FRotator rUpperLimits, FRotator rLowerLimits);
};

// @baa 0x00c82360
void AActor::execClampRotation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FRotator, out_Rot);
    P_GET_STRUCT(FRotator, rBase);
    P_GET_STRUCT(FRotator, rUpperLimits);
    P_GET_STRUCT(FRotator, rLowerLimits);
    P_FINISH;
    *(UBOOL*)Result = ((AActor__00c82360*)this)->ClampRotation(out_Rot, rBase, rUpperLimits, rLowerLimits);
}

/* AActor::FindSpot (0x758bc0) isn't declared in the kit. */
struct AActor__00c82480 : public AActor
{
    UBOOL FindSpot(FVector BoxExtent, FVector& SpotLocation, UBOOL DontEaryOut);
};

// @baa 0x00c82480
void AActor::execFindSpot(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, BoxExtent);
    P_GET_STRUCT_REF(FVector, SpotLocation);
    P_GET_UBOOL_OPTX(DontEaryOut, FALSE);
    P_FINISH;
    *(UBOOL*)Result = ((AActor__00c82480*)this)->FindSpot(BoxExtent, SpotLocation, DontEaryOut);
}

/* AController::GetAdjustLocation (0x7adc50) isn't declared in the kit. */
struct AController__00c84700 : public AController
{
    FVector GetAdjustLocation();
};

// @baa 0x00c84700
void AController::execGetAdjustLocation(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = ((AController__00c84700*)this)->GetAdjustLocation();
}

/* AController::BeyondFogDistance (0x7a0f00) isn't declared in the kit. */
struct AController__00c84750 : public AController
{
    UBOOL BeyondFogDistance(FVector ViewPoint, FVector OtherPoint);
};

// @baa 0x00c84750
void AController::execBeyondFogDistance(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, ViewPoint);
    P_GET_STRUCT(FVector, OtherPoint);
    P_FINISH;
    *(UBOOL*)Result = ((AController__00c84750*)this)->BeyondFogDistance(ViewPoint, OtherPoint);
}

/* AController::CanSeeByPoints (0x7ac5c0) isn't declared in the kit. */
struct AController__00c84870 : public AController
{
    UBOOL CanSeeByPoints(FVector ViewLocation, FVector TestLocation, FRotator ViewRotation);
};

// @baa 0x00c84870
void AController::execCanSeeByPoints(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, ViewLocation);
    P_GET_STRUCT(FVector, TestLocation);
    P_GET_STRUCT(FRotator, ViewRotation);
    P_FINISH;
    *(UBOOL*)Result = ((AController__00c84870*)this)->CanSeeByPoints(ViewLocation, TestLocation, ViewRotation);
}

/* AController::FindPathTo (0x7bfca0) isn't declared in the kit. */
struct AController__00c84b20 : public AController
{
    AActor* FindPathTo(FVector aPoint, INT MaxPathLength, UBOOL bReturnPartial);
};

// @baa 0x00c84b20
void AController::execFindPathTo(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, aPoint);
    P_GET_INT_OPTX(MaxPathLength, 0);
    P_GET_UBOOL_OPTX(bReturnPartial, FALSE);
    P_FINISH;
    *(AActor**)Result = ((AController__00c84b20*)this)->FindPathTo(aPoint, MaxPathLength, bReturnPartial);
}

/* AController::FindPathToward (0x7bfcc0) isn't declared in the kit. */
struct AController__00c84c10 : public AController
{
    AActor* FindPathToward(class AActor* anActor, UBOOL bWeightDetours, INT MaxPathLength, UBOOL bReturnPartial);
};

// @baa 0x00c84c10
void AController::execFindPathToward(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, anActor);
    P_GET_UBOOL_OPTX(bWeightDetours, FALSE);
    P_GET_INT_OPTX(MaxPathLength, 0);
    P_GET_UBOOL_OPTX(bReturnPartial, FALSE);
    P_FINISH;
    *(AActor**)Result = ((AController__00c84c10*)this)->FindPathToward(anActor, bWeightDetours, MaxPathLength, bReturnPartial);
}

/* AController::FindPathTowardNearest (0x7c0030) isn't declared in the kit. */
struct AController__00c84d20 : public AController
{
    AActor* FindPathTowardNearest(class UClass* GoalClass, UBOOL bWeightDetours, INT MaxPathLength, UBOOL bReturnPartial);
};

// @baa 0x00c84d20
void AController::execFindPathTowardNearest(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UClass, GoalClass);
    P_GET_UBOOL_OPTX(bWeightDetours, FALSE);
    P_GET_INT_OPTX(MaxPathLength, 0);
    P_GET_UBOOL_OPTX(bReturnPartial, FALSE);
    P_FINISH;
    *(AActor**)Result = ((AController__00c84d20*)this)->FindPathTowardNearest(GoalClass, bWeightDetours, MaxPathLength, bReturnPartial);
}

/* AController::FindPathToIntercept (0x7bfd10) isn't declared in the kit. */
struct AController__00c84e70 : public AController
{
    AActor* FindPathToIntercept(class APawn* P, class AActor* InRouteGoal, UBOOL bWeightDetours, INT MaxPathLength, UBOOL bReturnPartial);
};

// @baa 0x00c84e70
void AController::execFindPathToIntercept(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(APawn, P);
    P_GET_OBJECT(AActor, InRouteGoal);
    P_GET_UBOOL_OPTX(bWeightDetours, FALSE);
    P_GET_INT_OPTX(MaxPathLength, 0);
    P_GET_UBOOL_OPTX(bReturnPartial, FALSE);
    P_FINISH;
    *(AActor**)Result = ((AController__00c84e70*)this)->FindPathToIntercept(P, InRouteGoal, bWeightDetours, MaxPathLength, bReturnPartial);
}

/* ANavigationPoint::GetReachSpecTo (0x83ef60) isn't declared in the kit. */
struct ANavigationPoint__00c87f20 : public ANavigationPoint
{
    UReachSpec* GetReachSpecTo(class ANavigationPoint* Nav, class UClass* SpecClass);
};

// @baa 0x00c87f20
void ANavigationPoint::execGetReachSpecTo(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ANavigationPoint, Nav);
    P_GET_OBJECT_OPTX(UClass, SpecClass, NULL);
    P_FINISH;
    *(UReachSpec**)Result = ((ANavigationPoint__00c87f20*)this)->GetReachSpecTo(Nav, SpecClass);
}

/* ACoverSlotMarker::IsValidClaim (0x8603f0) isn't declared in the kit. */
struct ACoverSlotMarker_ : public ACoverSlotMarker
{
    UBOOL IsValidClaim(class APawn* ChkClaim, UBOOL bSkipTeamCheck, UBOOL bSkipOverlapCheck);
};

// @baa 0x00c88dd0
void ACoverSlotMarker::execIsValidClaim(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(APawn, ChkClaim);
    P_GET_UBOOL_OPTX(bSkipTeamCheck, FALSE);
    P_GET_UBOOL_OPTX(bSkipOverlapCheck, FALSE);
    P_FINISH;
    *(UBOOL*)Result = ((ACoverSlotMarker_*)this)->IsValidClaim(ChkClaim, bSkipTeamCheck, bSkipOverlapCheck);
}

extern FName g_026c4d54;
	/* OverlappedActorEvent */
struct ACrowdAgent_ : public ACrowdAgent
{
	void eventOverlappedActorEvent(class AActor* A);
};

// @baa 0x00c8fd10
/* CrowdAgent.OverlappedActorEvent script event: the generated glue, out of line here. */
void ACrowdAgent_::eventOverlappedActorEvent(class AActor* A)
{
	struct CrowdAgent_eventOverlappedActorEvent_Parms
	{
		class AActor* A;
	} Parms;
	Parms.A = A;
	ProcessEvent(FindFunctionChecked(g_026c4d54), &Parms);
}

// @baa 0x00c8f0c0
void UMaterialInterface::execGetScalarParameterValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ParameterName);
    P_GET_FLOAT_REF(OutValue);
    P_FINISH;
    *(UBOOL*)Result = GetScalarParameterValue(ParameterName, OutValue);
}

// @baa 0x00c8f230
void UMaterialInterface::execGetVectorParameterValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ParameterName);
    P_GET_STRUCT_REF(FLinearColor, OutValue);
    P_FINISH;
    *(UBOOL*)Result = GetVectorParameterValue(ParameterName, OutValue);
}

// @baa 0x00c8d520
void UOnlineStatsWrite::execSetFloatStat(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(StatId);
    P_GET_FLOAT(Value);
    P_FINISH;
    SetFloatStat(StatId, Value);
}

// @baa 0x00c8d5c0
void UOnlineStatsWrite::execSetIntStat(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(StatId);
    P_GET_INT(Value);
    P_FINISH;
    SetIntStat(StatId, Value);
}

// @baa 0x00c8d650
void UOnlineStatsWrite::execIncrementFloatStat(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(StatId);
    P_GET_FLOAT_OPTX(IncBy, 1.f);
    P_FINISH;
    IncrementFloatStat(StatId, IncBy);
}

// @baa 0x00c8d790
void UOnlineStatsWrite::execDecrementFloatStat(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(StatId);
    P_GET_FLOAT_OPTX(DecBy, 1.f);
    P_FINISH;
    DecrementFloatStat(StatId, DecBy);
}

// @baa 0x00c8d6f0
void UOnlineStatsWrite::execIncrementIntStat(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(StatId);
    P_GET_INT_OPTX(IncBy, 1);
    P_FINISH;
    IncrementIntStat(StatId, IncBy);
}

// @baa 0x00c8d830
void UOnlineStatsWrite::execDecrementIntStat(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(StatId);
    P_GET_INT_OPTX(DecBy, 1);
    P_FINISH;
    DecrementIntStat(StatId, DecBy);
}

/* Kit gaps: the native's exec and GetBuildUniqueId (00d67980) aren't declared (name from the exe's native table). */
struct UOnlineSubsystem_ : public UOnlineSubsystem
{
	INT GetBuildUniqueId();
	void execGetBuildUniqueId(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c86b60
void UOnlineSubsystem_::execGetBuildUniqueId(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = GetBuildUniqueId();
}
