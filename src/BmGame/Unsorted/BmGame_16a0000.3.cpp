// BmGame_16a0000.cpp: 13 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2ab0;
	/* ContainsRootToGather */

// @baa 0x016a99f0
/* RGatherRootPointBase.ContainsRootToGather script event: the generated glue, out of line here. */
UBOOL ARGatherRootPointBase::eventContainsRootToGather()
{
	struct RGatherRootPointBase_eventContainsRootToGather_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2ab0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e391c;
	/* PlayAnim */

// @baa 0x016a9a80
/* RPontoonBase.PlayAnim script event: the generated glue, out of line here. */
void ARPontoonBase::eventPlayAnim(FName Anim, BYTE LD, FLOAT RateScale, UBOOL bMirrored, FLOAT fStartTime)
{
	struct RPontoonBase_eventPlayAnim_Parms
	{
		FName Anim;
		BYTE LD;
		FLOAT RateScale;
		UBOOL bMirrored;
		FLOAT fStartTime;
	} Parms;
	Parms.Anim = Anim;
	Parms.LD = LD;
	Parms.RateScale = RateScale;
	Parms.bMirrored = bMirrored ? TRUE : FALSE;
	Parms.fStartTime = fStartTime;
	ProcessEvent(FindFunctionChecked(g_026e391c), &Parms);
}

extern FName g_026e2b40;
	/* DoSetEdgeCollisionEnabled */

// @baa 0x016a9b00
/* RPontoonBase.DoSetEdgeCollisionEnabled script event: the generated glue, out of line here. */
void ARPontoonBase::eventDoSetEdgeCollisionEnabled(UBOOL bEn, UBOOL bFullEnable)
{
	struct RPontoonBase_eventDoSetEdgeCollisionEnabled_Parms
	{
		UBOOL bEn;
		UBOOL bFullEnable;
	} Parms;
	Parms.bEn = bEn ? TRUE : FALSE;
	Parms.bFullEnable = bFullEnable ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2b40), &Parms);
}

extern FName g_026e35a0;
	/* GetGatherRootPoint */

// @baa 0x016a9c10
/* RGatherRootPointSpawnerBase.GetGatherRootPoint script event: the generated glue, out of line here. */
class ARGatherRootPointBase* ARGatherRootPointSpawnerBase::eventGetGatherRootPoint()
{
	struct RGatherRootPointSpawnerBase_eventGetGatherRootPoint_Parms
	{
		class ARGatherRootPointBase* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026e35a0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2c78;
	/* GetTrackingPositionAndRotation */

// @baa 0x016a9c60
/* RBatarangCamera.GetTrackingPositionAndRotation script event: the generated glue, out of line here. */
void ARBatarangCamera::eventGetTrackingPositionAndRotation(FVector& Out_Position, FRotator& out_Rotation)
{
	struct RBatarangCamera_eventGetTrackingPositionAndRotation_Parms
	{
		FVector Out_Position;
		FRotator out_Rotation;
	} Parms;
	Parms.Out_Position = Out_Position;
	Parms.out_Rotation = out_Rotation;
	ProcessEvent(FindFunctionChecked(g_026e2c78), &Parms);
	Out_Position = Parms.Out_Position;
	out_Rotation = Parms.out_Rotation;
}

extern FName g_026e30bc;
	/* RegisterPontoon */

// @baa 0x016ab800
/* RPontoonBridgeManager.RegisterPontoon script event: the generated glue, out of line here. */
void ARPontoonBridgeManager::eventRegisterPontoon(class ARPontoonBase* NewPontoon)
{
	struct RPontoonBridgeManager_eventRegisterPontoon_Parms
	{
		class ARPontoonBase* NewPontoon;
	} Parms;
	Parms.NewPontoon = NewPontoon;
	ProcessEvent(FindFunctionChecked(g_026e30bc), &Parms);
}

extern FName g_026e2d68;
	/* UpdateDamageLevel */

// @baa 0x016ad7e0
/* RCapeSkeletalMeshComponent.UpdateDamageLevel script event: the generated glue, out of line here. */
void URCapeSkeletalMeshComponent::eventUpdateDamageLevel(class UMaterialInstance* NewMat)
{
	struct RCapeSkeletalMeshComponent_eventUpdateDamageLevel_Parms
	{
		class UMaterialInstance* NewMat;
	} Parms;
	Parms.NewMat = NewMat;
	ProcessEvent(FindFunctionChecked(g_026e2d68), &Parms);
}

extern FName g_026e33cc;
	/* CapeSetHiddenGame */

// @baa 0x016ad870
/* RCapeComponent.CapeSetHiddenGame script event: the generated glue, out of line here. */
void URCapeComponent::eventCapeSetHiddenGame(UBOOL bNewIsHidden)
{
	struct RCapeComponent_eventCapeSetHiddenGame_Parms
	{
		UBOOL bNewIsHidden;
	} Parms;
	Parms.bNewIsHidden = bNewIsHidden ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e33cc), &Parms);
}

extern FName g_026e36a4;
	/* ShakeTimeExpired */

// @baa 0x016a9a50
/* RPontoonBase.ShakeTimeExpired script event: the generated glue, out of line here. */
void ARPontoonBase::eventShakeTimeExpired()
{
	ProcessEvent(FindFunctionChecked(g_026e36a4), NULL);
}

extern FName g_026e2728;
	/* UpdateFractureMesh */

// @baa 0x016a9b60
/* RPontoonBase.UpdateFractureMesh script event: the generated glue, out of line here. */
void ARPontoonBase::eventUpdateFractureMesh()
{
	ProcessEvent(FindFunctionChecked(g_026e2728), NULL);
}

extern FName g_026e360c;
	/* DestroyRippleParticleEmitter */

// @baa 0x016a9b90
/* RPontoonBase.DestroyRippleParticleEmitter script event: the generated glue, out of line here. */
void ARPontoonBase::eventDestroyRippleParticleEmitter()
{
	ProcessEvent(FindFunctionChecked(g_026e360c), NULL);
}

extern FName g_026e2cc8;
	/* SpawnRippleParticleEmitter */

// @baa 0x016a9bc0
/* RPontoonBase.SpawnRippleParticleEmitter script event: the generated glue, out of line here. */
void ARPontoonBase::eventSpawnRippleParticleEmitter()
{
	ProcessEvent(FindFunctionChecked(g_026e2cc8), NULL);
}

extern FName g_026e33f4;
	/* DistanceToNearestRootChanged */

// @baa 0x016ab6e0
/* RPawnBossCrocBase.DistanceToNearestRootChanged script event: the generated glue, out of line here. */
void ARPawnBossCrocBase::eventDistanceToNearestRootChanged()
{
	ProcessEvent(FindFunctionChecked(g_026e33f4), NULL);
}
