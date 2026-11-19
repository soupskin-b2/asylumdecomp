// Engine_0c80000.cpp: 109 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c80a10
void UAudioComponent::execResetToDefaults( FFrame& Stack, RESULT_DECL )
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
	EndClimbLadder();
}

// @baa 0x00c851d0
void AController::execStopLatentExecution( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StopLatentExecution();
}

// @baa 0x00c87850
void ADroppedPickup::execAddToNavigation( FFrame& Stack, RESULT_DECL )
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
	SetShadowParentOnAllAttachedComponents();
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

// @baa 0x00c89070
void AFileWriter::execCloseFile( FFrame& Stack, RESULT_DECL )
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

// @baa 0x00c8c330
void UCameraAnimInst::execApplyTransientScaling(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Scalar);
    P_FINISH;
    ((UCameraAnimInst*)this)->ApplyTransientScaling(Scalar);
}


// @baa 0x00c8f520
void UTexture2DComposite::execSourceTexturesFullyStreamedIn( FFrame& Stack, RESULT_DECL )
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
	PlayDeath();
}

// @baa 0x00c8ff00
void ASkeletalMeshActorMAT::execMAT_FinishAnimControl( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	MAT_FinishAnimControl();
}

// @baa 0x00c84e30
void AController::execFindRandomDest(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ANavigationPoint**)Result = ((AController*)this)->FindRandomDest();
}

// @baa 0x00c8ba90
void APortalTeleporter::execCreatePortalTexture(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UTextureRenderTarget2D**)Result = ((APortalTeleporter*)this)->CreatePortalTexture();
}

// @baa 0x00c87e50
void UReachSpec::execIsOneWay(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsOneWay();
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
	*(FLOAT*)Result = GetMaxCharHeight();
}

// @baa 0x00c821e0
void AActor::execAttachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, NewComponent);
	P_FINISH;
	((AActor*)this)->AttachComponent(NewComponent);
}

// @baa 0x00c82240
void AActor::execDetachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, ExComponent);
	P_FINISH;
	((AActor*)this)->DetachComponent(ExComponent);
}

// @baa 0x00c822a0
void AActor::execReattachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, ComponentToReattach);
	P_FINISH;
	((AActor*)this)->ReattachComponent(ComponentToReattach);
}


// @baa 0x00c82300
void AActor::execSetTickGroup(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(NewTickGroup);
	P_FINISH;
	((AActor*)this)->SetTickGroup(NewTickGroup);
}

// @baa 0x00c87920
void AEmitterPool::execReturnToPool(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UParticleSystemComponent, PSC);
	P_FINISH;
	((AEmitterPool*)this)->ReturnToPool(PSC);
}

// @baa 0x00c87980
void AEmitterPool::execFreeStaticMeshComponents(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UParticleSystemComponent, PSC);
	P_FINISH;
	((AEmitterPool*)this)->FreeStaticMeshComponents(PSC);
}

// @baa 0x00c87a60
void AEmitterPool::execFreeMaterialInstanceConstants(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UStaticMeshComponent, SMC);
	P_FINISH;
	((AEmitterPool*)this)->FreeMaterialInstanceConstants(SMC);
}

// @baa 0x00c89100
void AGameInfo::execForceClearUnpauseDelegates(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, PauseActor);
	P_FINISH;
	((AGameInfo*)this)->ForceClearUnpauseDelegates(PauseActor);
}

// @baa 0x00c8f560
void UTexture2DComposite::execUpdateCompositeTexture(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(NumMipsToGenerate);
	P_FINISH;
	((UTexture2DComposite*)this)->UpdateCompositeTexture(NumMipsToGenerate);
}

// @baa 0x00c8faa0
void ALensFlareSource::execSetTemplate(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ULensFlare, NewTemplate);
	P_FINISH;
	((ALensFlareSource*)this)->SetTemplate(NewTemplate);
}

// @baa 0x00c8fb00
void ULensFlareComponent::execSetTemplate(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ULensFlare, NewTemplate);
	P_FINISH;
	((ULensFlareComponent*)this)->SetTemplate(NewTemplate);
}


// @baa 0x00c8b750
void USceneCaptureComponent::execSetFrameRate(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewFrameRate);
	P_FINISH;
	((USceneCaptureComponent*)this)->SetFrameRate(NewFrameRate);
}

// @baa 0x00c8f360
void UTexture2D::execSetForceMipLevelsToBeResident(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Seconds);
	P_FINISH;
	((UTexture2D*)this)->SetForceMipLevelsToBeResident(Seconds);
}

// @baa 0x00c84800
void AController::execCanSee(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APawn, Other);
	P_FINISH;
	*(UBOOL*)Result = ((AController*)this)->CanSee(Other);
}

// @baa 0x00c85030
void AController::execActorReachable(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, anActor);
	P_FINISH;
	*(UBOOL*)Result = ((AController*)this)->ActorReachable(anActor);
}

struct AController__00c85160 : public AController
{
	UBOOL InLatentExecution(INT);
};

// @baa 0x00c85160
void AController::execInLatentExecution(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(LatentActionNumber);
	P_FINISH;
	*(UBOOL*)Result = ((AController__00c85160*)this)->InLatentExecution(LatentActionNumber);
}

// @baa 0x00c87b40
void AEmitterPool::execGetPooledComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UParticleSystem, EmitterTemplate);
	P_FINISH;
	*(UParticleSystemComponent**)Result = ((AEmitterPool*)this)->GetPooledComponent(EmitterTemplate);
}

struct ANavigationPoint_ : public ANavigationPoint
{
	UBOOL IsOnDifferentNetwork(ANavigationPoint*);
};

// @baa 0x00c880a0
void ANavigationPoint::execIsOnDifferentNetwork(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ANavigationPoint, Nav);
	P_FINISH;
	*(UBOOL*)Result = ((ANavigationPoint_*)this)->IsOnDifferentNetwork(Nav);
}

// @baa 0x00c8b900
void APortalTeleporter::execTransformActor(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, A);
	P_FINISH;
	*(UBOOL*)Result = ((APortalTeleporter*)this)->TransformActor(A);
}

// @baa 0x00c82070
void AActor::execSetOnlyOwnerSee(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewOnlyOwnerSee);
	P_FINISH;
	((AActor*)this)->SetOnlyOwnerSee(bNewOnlyOwnerSee);
}

struct UHeightFogComponent_ : public UHeightFogComponent
{
	void SetEnabled(UBOOL);
};

// @baa 0x00c8b550
void UHeightFogComponent::execSetEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bSetEnabled);
	P_FINISH;
	((UHeightFogComponent_*)this)->SetEnabled(bSetEnabled);
}

// @baa 0x00c8b660
void ULightEnvironmentComponent::execSetEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewEnabled);
	P_FINISH;
	((ULightEnvironmentComponent*)this)->SetEnabled(bNewEnabled);
}

// @baa 0x00c8b5f0
void UPointLightComponent::execSetTranslation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewTranslation);
	P_FINISH;
	((UPointLightComponent*)this)->SetTranslation(NewTranslation);
}


// @baa 0x00c825f0
void AActor::execGetComponentsBoundingBox(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FBox, ActorBox);
	P_FINISH;
	((AActor*)this)->sub_00763700(ActorBox);
}

// @baa 0x00c8c2b0
void UCameraAnimInst::execStop(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bImmediate, 0);
	P_FINISH;
	((UCameraAnimInst*)this)->Stop(bImmediate);
}

// @baa 0x00c82570
void AActor::execContainsPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Spot);
	P_FINISH;
	*(UBOOL*)Result = ((AActor*)this)->ContainsPoint(Spot);
}

// @baa 0x00c84fb0
void AController::execPointReachable(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, aPoint);
	P_FINISH;
	*(UBOOL*)Result = ((AController*)this)->PointReachable(aPoint);
}

// @baa 0x00c850a0
void AController::execPickWallAdjust(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, HitNormal);
	P_FINISH;
	*(UBOOL*)Result = ((AController*)this)->PickWallAdjust(HitNormal);
}

// @baa 0x00c820e0
void AActor::execClock(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_REF(Time);
	P_FINISH;
	((AActor*)this)->Clock(Time);
}

// @baa 0x00c82160
void AActor::execUnClock(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_REF(Time);
	P_FINISH;
	((AActor*)this)->UnClock(Time);
}

// @baa 0x00c879e0
void AEmitterPool::execGetFreeStaticMeshComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bCreateNewObject, 1);
	P_FINISH;
	*(UParticleSystemComponent**)Result = ((AEmitterPool*)this)->GetFreeStaticMeshComponent(bCreateNewObject);
}

// @baa 0x00c87ac0
void AEmitterPool::execGetFreeMatInstConsts(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bCreateNewObject, 1);
	P_FINISH;
	*(UMaterialInstanceConstant**)Result = ((AEmitterPool*)this)->GetFreeMatInstConsts(bCreateNewObject);
}

// @baa 0x00c8ed10
void UPostProcessChain::execFindPostProcessEffect(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(EffectName);
	P_FINISH;
	*(void**)Result = ((UPostProcessChain*)this)->FindPostProcessEffect(EffectName);
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
	SetSlotEnabled(bEnable);
}

// @baa 0x00c8fbe0
void ULensFlareComponent::execSetIsActive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInIsActive);
	P_FINISH;
	SetIsActive(bInIsActive);
}

// @baa 0x00c8ca00
void UFont::execGetResolutionPageIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(HeightTest);
	P_FINISH;
	*(INT*)Result = GetResolutionPageIndex(HeightTest);
}

// @baa 0x00c8ca70
void UFont::execGetScalingFactor(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(HeightTest);
	P_FINISH;
	*(FLOAT*)Result = GetScalingFactor(HeightTest);
}

// @baa 0x00c8cae0
void UFont::execGetAuthoredViewportHeight(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(ViewportHeight);
	P_FINISH;
	*(FLOAT*)Result = GetAuthoredViewportHeight(ViewportHeight);
}

// @baa 0x00c8cbc0
void UMultiFont::execGetResolutionTestTableIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(HeightTest);
	P_FINISH;
	*(INT*)Result = GetResolutionTestTableIndex(HeightTest);
}

// @baa 0x00c8f2f0
void UMaterialInterface::execSetForceMipLevelsToBeResident(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(ForceDuration);
	P_FINISH;
	SetForceMipLevelsToBeResident(ForceDuration);
}

struct UCameraAnimInst__00c8c210 : public UCameraAnimInst
{
    /* AdvanceAnim; Classes.h doesn't declare it. */
    void AdvanceAnim(FLOAT DeltaTime, UBOOL bJump);
};

// @baa 0x00c8c210
void UCameraAnimInst::execAdvanceAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_UBOOL(bJump);
    P_FINISH;
    ((UCameraAnimInst__00c8c210*)this)->AdvanceAnim(DeltaTime, bJump);
}

struct APortalTeleporter__00c8b970 : public APortalTeleporter
{
    /* TransformVectorDir; Classes.h doesn't declare it. */
    FVector TransformVectorDir(FVector V);
};

// @baa 0x00c8b970
void APortalTeleporter::execTransformVectorDir(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, V);
    P_FINISH;
    *(FVector*)Result = ((APortalTeleporter__00c8b970*)this)->TransformVectorDir(V);
}

struct APortalTeleporter__00c8ba00 : public APortalTeleporter
{
    /* TransformHitLocation; Classes.h doesn't declare it. */
    FVector TransformHitLocation(FVector HitLocation);
};

// @baa 0x00c8ba00
void APortalTeleporter::execTransformHitLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, HitLocation);
    P_FINISH;
    *(FVector*)Result = ((APortalTeleporter__00c8ba00*)this)->TransformHitLocation(HitLocation);
}

struct USceneCapture2DComponent_ : public USceneCapture2DComponent
{
    /* SetView; Classes.h doesn't declare it. */
    void SetView(FVector NewLocation, FRotator NewRotation);
};

// @baa 0x00c8b7c0
void USceneCapture2DComponent::execSetView(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, NewLocation);
    P_GET_STRUCT(FRotator, NewRotation);
    P_FINISH;
    ((USceneCapture2DComponent_*)this)->SetView(NewLocation, NewRotation);
}

struct AHUD_ : public AHUD
{
    /* Draw3DLine; Classes.h doesn't declare it. */
    void Draw3DLine(FVector Start, FVector End, FColor LineColor);
};

// @baa 0x00c87be0
void AHUD::execDraw3DLine(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Start);
    P_GET_STRUCT(FVector, End);
    P_GET_STRUCT(FColor, LineColor);
    P_FINISH;
    ((AHUD_*)this)->Draw3DLine(Start, End, LineColor);
}

struct AHUD__00c87cb0 : public AHUD
{
    /* Draw2DLine; Classes.h doesn't declare it. */
    void Draw2DLine(INT X1, INT Y1, INT X2, INT Y2, FColor LineColor);
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
    ((AHUD__00c87cb0*)this)->Draw2DLine(X1, Y1, X2, Y2, LineColor);
}

struct UTexture2DDynamic_ : public UTexture2DDynamic
{
    /* Init(INT InSizeX, INT InSizeY, BYTE InFormat, UBOOL InIsResolveTarget); Classes.h doesn't declare it. */
    void Init(INT InSizeX, INT InSizeY, BYTE InFormat, UBOOL InIsResolveTarget);
};

// @baa 0x00c8f620
void UTexture2DDynamic::execInit(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(InSizeX);
    P_GET_INT(InSizeY);
    P_GET_BYTE_OPTX(InFormat, PF_A8R8G8B8);
    P_GET_UBOOL_OPTX(InIsResolveTarget, FALSE);
    P_FINISH;
    ((UTexture2DDynamic_*)this)->Init(InSizeX, InSizeY, InFormat, InIsResolveTarget);
}

struct UCameraAnimInst__00c8c0e0 : public UCameraAnimInst
{
    /* Update(FLOAT NewRate, FLOAT NewScale, FLOAT NewBlendInTime, FLOAT NewBlendOutTime, FLOAT NewDuration); Classes.h doesn't declare it. */
    void Update(FLOAT NewRate, FLOAT NewScale, FLOAT NewBlendInTime, FLOAT NewBlendOutTime, FLOAT NewDuration);
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
    ((UCameraAnimInst__00c8c0e0*)this)->Update(NewRate, NewScale, NewBlendInTime, NewBlendOutTime, NewDuration);
}

struct UCameraAnimInst__00c8bef0 : public UCameraAnimInst
{
    /* Play(UCameraAnim*, AActor*, FLOAT InRate, FLOAT InScale, FLOAT InBlendInTime, FLOAT InBlendOutTime, UBOOL bInLoop, UBOOL bRandomStartTime, FLOAT Duration); Classes.h doesn't declare it. */
    void Play(UCameraAnim* Anim, AActor* CamActor, FLOAT InRate, FLOAT InScale, FLOAT InBlendInTime, FLOAT InBlendOutTime, UBOOL bInLoop, UBOOL bRandomStartTime, FLOAT Duration);
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
    ((UCameraAnimInst__00c8bef0*)this)->Play(Anim, CamActor, InRate, InScale, InBlendInTime, InBlendOutTime, bInLoop, bRandomStartTime, Duration);
}

// @baa 0x00c8f180
void UMaterialInterface::execGetTextureParameterValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ParameterName);
    P_GET_OBJECT_REF(UTexture, OutValue);
    P_FINISH;
    *(UBOOL*)Result = GetTextureParameterValue(ParameterName, OutValue);
}

// @baa 0x00c819e0
void AActor::execDrawDebugCoordinateSystem(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, AxisLoc);
    P_GET_STRUCT(FRotator, AxisRot);
    P_GET_FLOAT(Scale);
    P_GET_UBOOL_OPTX(bPersistentLines, FALSE);
    P_FINISH;
    ((AActor*)this)->DrawDebugCoordinateSystem(AxisLoc, AxisRot, Scale, bPersistentLines);
}

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
    ((AActor*)this)->DrawDebugSphere(Center, Radius, Segments, R, G, B, bPersistentLines);
}

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
    ((AActor*)this)->DrawDebugCylinder(Start, End, Radius, Segments, R, G, B, bPersistentLines);
}

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
    ((AActor*)this)->DrawDebugCone(Origin, Direction, Length, AngleWidth, AngleHeight, NumSides, DrawColor, bPersistentLines);
}

// @baa 0x00c82360
void AActor::execClampRotation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FRotator, out_Rot);
    P_GET_STRUCT(FRotator, rBase);
    P_GET_STRUCT(FRotator, rUpperLimits);
    P_GET_STRUCT(FRotator, rLowerLimits);
    P_FINISH;
    *(UBOOL*)Result = ((AActor*)this)->ClampRotation(out_Rot, rBase, rUpperLimits, rLowerLimits);
}

// @baa 0x00c82480
void AActor::execFindSpot(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, BoxExtent);
    P_GET_STRUCT_REF(FVector, SpotLocation);
    P_GET_UBOOL_OPTX(DontEaryOut, FALSE);
    P_FINISH;
    *(UBOOL*)Result = ((AActor*)this)->FindSpot(BoxExtent, SpotLocation, DontEaryOut);
}

// @baa 0x00c84700
void AController::execGetAdjustLocation(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = ((AController*)this)->GetAdjustLocation();
}

// @baa 0x00c84750
void AController::execBeyondFogDistance(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, ViewPoint);
    P_GET_STRUCT(FVector, OtherPoint);
    P_FINISH;
    *(UBOOL*)Result = ((AController*)this)->BeyondFogDistance(ViewPoint, OtherPoint);
}

// @baa 0x00c84870
void AController::execCanSeeByPoints(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, ViewLocation);
    P_GET_STRUCT(FVector, TestLocation);
    P_GET_STRUCT(FRotator, ViewRotation);
    P_FINISH;
    *(UBOOL*)Result = ((AController*)this)->CanSeeByPoints(ViewLocation, TestLocation, ViewRotation);
}

// @baa 0x00c84b20
void AController::execFindPathTo(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, aPoint);
    P_GET_INT_OPTX(MaxPathLength, 0);
    P_GET_UBOOL_OPTX(bReturnPartial, FALSE);
    P_FINISH;
    *(AActor**)Result = ((AController*)this)->FindPathTo(aPoint, MaxPathLength, bReturnPartial);
}

// @baa 0x00c84c10
void AController::execFindPathToward(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, anActor);
    P_GET_UBOOL_OPTX(bWeightDetours, FALSE);
    P_GET_INT_OPTX(MaxPathLength, 0);
    P_GET_UBOOL_OPTX(bReturnPartial, FALSE);
    P_FINISH;
    *(AActor**)Result = ((AController*)this)->FindPathToward(anActor, bWeightDetours, MaxPathLength, bReturnPartial);
}

// @baa 0x00c84d20
void AController::execFindPathTowardNearest(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UClass, GoalClass);
    P_GET_UBOOL_OPTX(bWeightDetours, FALSE);
    P_GET_INT_OPTX(MaxPathLength, 0);
    P_GET_UBOOL_OPTX(bReturnPartial, FALSE);
    P_FINISH;
    *(AActor**)Result = ((AController*)this)->FindPathTowardNearest(GoalClass, bWeightDetours, MaxPathLength, bReturnPartial);
}

// @baa 0x00c84e70
void AController::execFindPathToIntercept(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(APawn, P);
    P_GET_OBJECT(AActor, InRouteGoal);
    P_GET_UBOOL_OPTX(bWeightDetours, FALSE);
    P_GET_INT_OPTX(MaxPathLength, 0);
    P_GET_UBOOL_OPTX(bReturnPartial, FALSE);
    P_FINISH;
    *(AActor**)Result = ((AController*)this)->FindPathToIntercept(P, InRouteGoal, bWeightDetours, MaxPathLength, bReturnPartial);
}

// @baa 0x00c87f20
void ANavigationPoint::execGetReachSpecTo(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ANavigationPoint, Nav);
    P_GET_OBJECT_OPTX(UClass, SpecClass, NULL);
    P_FINISH;
    *(UReachSpec**)Result = ((ANavigationPoint*)this)->GetReachSpecTo(Nav, SpecClass);
}


// @baa 0x00c88dd0
void ACoverSlotMarker::execIsValidClaim(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(APawn, ChkClaim);
    P_GET_UBOOL_OPTX(bSkipTeamCheck, FALSE);
    P_GET_UBOOL_OPTX(bSkipOverlapCheck, FALSE);
    P_FINISH;
    *(UBOOL*)Result = ((ACoverSlotMarker*)this)->IsValidClaim(ChkClaim, bSkipTeamCheck, bSkipOverlapCheck);
}

extern FName g_026c4d54;
	/* OverlappedActorEvent */

// @baa 0x00c8fd10
/* CrowdAgent.OverlappedActorEvent script event: the generated glue, out of line here. */
void ACrowdAgent::eventOverlappedActorEvent(class AActor* A)
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


// @baa 0x00c86b60
void UOnlineSubsystem::execGetBuildUniqueId(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = GetBuildUniqueId();
}

// @baa 0x00c8c3d0
void UCameraModifier::execModifyCamera(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ACamera, Camera);
	P_GET_FLOAT(DeltaTime);
	P_GET_STRUCT_REF(FTPOV, OutPOV);
	P_FINISH;
	*(UBOOL*)Result = ModifyCamera(Camera, DeltaTime, OutPOV);
}

// @baa 0x00c88c90
void ACoverSlotMarker::execGetSlotLocation(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetSlotLocation();
}

// @baa 0x00c88cf0
void ACoverSlotMarker::execGetSlotRotation(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FRotator*)Result = GetSlotRotation();
}

// @baa 0x00c8efd0
void UMaterialInterface::execGetFontParameterValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ParameterName);
	P_GET_OBJECT_REF(UFont, OutFontValue);
	P_GET_INT_REF(OutFontPage);
	P_FINISH;
	*(UBOOL*)Result = GetFontParameterValue(ParameterName, OutFontValue, OutFontPage);
}
