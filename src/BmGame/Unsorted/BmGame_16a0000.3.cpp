// BmGame_16a0000.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2ab0;
	/* ContainsRootToGather */
struct ARGatherRootPointBase_ : public ARGatherRootPointBase
{
	UBOOL eventContainsRootToGather();
};

// @baa 0x016a99f0
/* RGatherRootPointBase.ContainsRootToGather script event: the generated glue, out of line here. */
UBOOL ARGatherRootPointBase_::eventContainsRootToGather()
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
struct ARPontoonBase_ : public ARPontoonBase
{
	void eventPlayAnim(FName Anim, BYTE LD, FLOAT RateScale, UBOOL bMirrored, FLOAT fStartTime);
};

// @baa 0x016a9a80
/* RPontoonBase.PlayAnim script event: the generated glue, out of line here. */
void ARPontoonBase_::eventPlayAnim(FName Anim, BYTE LD, FLOAT RateScale, UBOOL bMirrored, FLOAT fStartTime)
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
struct ARPontoonBase__016a9b00 : public ARPontoonBase
{
	void eventDoSetEdgeCollisionEnabled(UBOOL bEn, UBOOL bFullEnable);
};

// @baa 0x016a9b00
/* RPontoonBase.DoSetEdgeCollisionEnabled script event: the generated glue, out of line here. */
void ARPontoonBase__016a9b00::eventDoSetEdgeCollisionEnabled(UBOOL bEn, UBOOL bFullEnable)
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
struct ARGatherRootPointSpawnerBase_ : public ARGatherRootPointSpawnerBase
{
	class ARGatherRootPointBase* eventGetGatherRootPoint();
};

// @baa 0x016a9c10
/* RGatherRootPointSpawnerBase.GetGatherRootPoint script event: the generated glue, out of line here. */
class ARGatherRootPointBase* ARGatherRootPointSpawnerBase_::eventGetGatherRootPoint()
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
struct ARBatarangCamera_ : public ARBatarangCamera
{
	void eventGetTrackingPositionAndRotation(FVector& Out_Position, FRotator& out_Rotation);
};

// @baa 0x016a9c60
/* RBatarangCamera.GetTrackingPositionAndRotation script event: the generated glue, out of line here. */
void ARBatarangCamera_::eventGetTrackingPositionAndRotation(FVector& Out_Position, FRotator& out_Rotation)
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
struct ARPontoonBridgeManager_ : public ARPontoonBridgeManager
{
	void eventRegisterPontoon(class ARPontoonBase* NewPontoon);
};

// @baa 0x016ab800
/* RPontoonBridgeManager.RegisterPontoon script event: the generated glue, out of line here. */
void ARPontoonBridgeManager_::eventRegisterPontoon(class ARPontoonBase* NewPontoon)
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
struct URCapeSkeletalMeshComponent_ : public URCapeSkeletalMeshComponent
{
	void eventUpdateDamageLevel(class UMaterialInstance* NewMat);
};

// @baa 0x016ad7e0
/* RCapeSkeletalMeshComponent.UpdateDamageLevel script event: the generated glue, out of line here. */
void URCapeSkeletalMeshComponent_::eventUpdateDamageLevel(class UMaterialInstance* NewMat)
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
struct URCapeComponent_ : public URCapeComponent
{
	void eventCapeSetHiddenGame(UBOOL bNewIsHidden);
};

// @baa 0x016ad870
/* RCapeComponent.CapeSetHiddenGame script event: the generated glue, out of line here. */
void URCapeComponent_::eventCapeSetHiddenGame(UBOOL bNewIsHidden)
{
	struct RCapeComponent_eventCapeSetHiddenGame_Parms
	{
		UBOOL bNewIsHidden;
	} Parms;
	Parms.bNewIsHidden = bNewIsHidden ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e33cc), &Parms);
}
