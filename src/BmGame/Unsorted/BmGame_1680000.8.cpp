// BmGame_1680000.cpp: 12 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3928;
	/* JustAboveFloor */

// @baa 0x01686390
/* RPawnVillain.JustAboveFloor script event: the generated glue, out of line here. */
UBOOL ARPawnVillain::eventJustAboveFloor()
{
	struct RPawnVillain_eventJustAboveFloor_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3928), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2874;
	/* GetVenomHenchmanRidden */

// @baa 0x016864c0
/* RPawnPlayer.GetVenomHenchmanRidden script event: the generated glue, out of line here. */
class ARPawnBossVenomBase* ARPawnPlayer::eventGetVenomHenchmanRidden()
{
	struct RPawnPlayer_eventGetVenomHenchmanRidden_Parms
	{
		class ARPawnBossVenomBase* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026e2874), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3654;
	/* IsRidingVenomHenchman */

// @baa 0x01686500
/* RPawnPlayer.IsRidingVenomHenchman script event: the generated glue, out of line here. */
UBOOL ARPawnPlayer::eventIsRidingVenomHenchman()
{
	struct RPawnPlayer_eventIsRidingVenomHenchman_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3654), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2df0;
	/* GetYawAnchorRotation */

// @baa 0x016868b0
/* RPlayerController.GetYawAnchorRotation script event: the generated glue, out of line here. */
FRotator ARPlayerController::eventGetYawAnchorRotation()
{
	struct RPlayerController_eventGetYawAnchorRotation_Parms
	{
		FRotator ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	ProcessEvent(FindFunctionChecked(g_026e2df0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2674;
	/* EyeMaterialUpdated */

// @baa 0x01686660
/* RPawnPlayerBm.EyeMaterialUpdated script event: the generated glue, out of line here. */
void ARPawnPlayerBm::eventEyeMaterialUpdated()
{
	ProcessEvent(FindFunctionChecked(g_026e2674), NULL);
}

extern FName g_026e3030;
	/* GetPCStateName */

// @baa 0x01686540
/* RPawnPlayer.GetPCStateName script event: the generated glue, out of line here. */
FName ARPawnPlayer::eventGetPCStateName()
{
	struct RPawnPlayer_eventGetPCStateName_Parms
	{
		FName ReturnValue;
	} Parms;
	Parms.ReturnValue = FName(NAME_None);
	ProcessEvent(FindFunctionChecked(g_026e3030), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3418;
	/* GetPostLandPose */

// @baa 0x01686910
/* RPlayerController.GetPostLandPose script event: the generated glue, out of line here. */
FName ARPlayerController::eventGetPostLandPose()
{
	struct RPlayerController_eventGetPostLandPose_Parms
	{
		FName ReturnValue;
	} Parms;
	Parms.ReturnValue = FName(NAME_None);
	ProcessEvent(FindFunctionChecked(g_026e3418), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2bcc;
	/* BMGAME_FinaliseHeadAndMaterials */

// @baa 0x01686280
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARPawn::eventFinaliseHeadAndMaterials()
{
	ProcessEvent(FindFunctionChecked(g_026e2bcc), NULL);
}

extern FName g_026e31d0;
	/* BMGAME_GetTargetPriority */

// @baa 0x016862d0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
FLOAT ARPawnCombat::eventGetTargetPriority(class ARPawnCombat* Attacker, class UClass* dmgType)
{
	struct RPawnCombat_eventGetTargetPriority_Parms
	{
		class ARPawnCombat* Attacker;
		class UClass* dmgType;
		FLOAT ReturnValue;
	} Parms;
	Parms.Attacker = Attacker;
	Parms.dmgType = dmgType;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e31d0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e354c;
	/* BMGAME_CanBeHitInCombat */

// @baa 0x01686330
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARPawnCombat::eventCanBeHitInCombat(class URDamageType* DamageType)
{
	struct RPawnCombat_eventCanBeHitInCombat_Parms
	{
		class URDamageType* DamageType;
		UBOOL ReturnValue;
	} Parms;
	Parms.DamageType = DamageType;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e354c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3428;
	/* BMGAME_CanBeTargettedByPlayer */

// @baa 0x016869f0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARCombatMove::eventCanBeTargettedByPlayer()
{
	struct RCombatMove_eventCanBeTargettedByPlayer_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3428), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e296c;

// @baa 0x016865a0
FVector ARPawnPlayer::eventAdjustMovementDirection(FVector MovDir)
{
	struct RPawnPlayer_eventAdjustMovementDirection_Parms
	{
		FVector MovDir;
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	Parms.MovDir = MovDir;
	ProcessEvent(FindFunctionChecked(g_026e296c), &Parms);
	return Parms.ReturnValue;
}
