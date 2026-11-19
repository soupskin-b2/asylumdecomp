// BmGame_1630000.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3ab8;
	/* IsGettingUpFromRagdoll */

// @baa 0x01638310
/* RPawnCharacter.IsGettingUpFromRagdoll script event: the generated glue, out of line here. */
UBOOL ARPawnCharacter::eventIsGettingUpFromRagdoll()
{
	struct RPawnCharacter_eventIsGettingUpFromRagdoll_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3ab8), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2a10;
	/* CollisionWithActor */

// @baa 0x01638460
/* RPawnCombat.CollisionWithActor script event: the generated glue, out of line here. */
void ARPawnCombat::eventCollisionWithActor(class AActor* OtherActor)
{
	struct RPawnCombat_eventCollisionWithActor_Parms
	{
		class AActor* OtherActor;
	} Parms;
	Parms.OtherActor = OtherActor;
	ProcessEvent(FindFunctionChecked(g_026e2a10), &Parms);
}

extern FName g_026e26d0;
	/* BatarangCanTargetOffscreen */

// @baa 0x01638500
/* RPlayerController.BatarangCanTargetOffscreen script event: the generated glue, out of line here. */
UBOOL ARPlayerController::eventBatarangCanTargetOffscreen()
{
	struct RPlayerController_eventBatarangCanTargetOffscreen_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e26d0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3240;
	/* TestPos */

// @baa 0x01638b70
/* RPhotoScanner.TestPos script event: the generated glue, out of line here. */
FVector ARPhotoScanner::eventTestPos(FVector testPosition, class UCanvas* Canvas)
{
	struct RPhotoScanner_eventTestPos_Parms
	{
		FVector testPosition;
		class UCanvas* Canvas;
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	Parms.testPosition = testPosition;
	Parms.Canvas = Canvas;
	ProcessEvent(FindFunctionChecked(g_026e3240), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3818;
	/* HasLoaded */

// @baa 0x01638ca0
/* RTapePlayer.HasLoaded script event: the generated glue, out of line here. */
void ARTapePlayer::eventHasLoaded()
{
	ProcessEvent(FindFunctionChecked(g_026e3818), NULL);
}

extern FName g_026e38dc;
	/* BMGAME_GetHealth */

// @baa 0x016383a0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
INT ARPawnCombat::eventGetHealth()
{
	struct RPawnCombat_eventGetHealth_Parms
	{
		INT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e38dc), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2560;
	/* BMGAME_IsAttacking */

// @baa 0x01638420
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARPawnCombat::eventIsAttacking()
{
	struct RPawnCombat_eventIsAttacking_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2560), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e399c;
	/* BMGAME_CollisionWith */

// @baa 0x016384a0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARPawnCombat::eventCollisionWith(class ARPawnCombat* OtherPawn)
{
	struct RPawnCombat_eventCollisionWith_Parms
	{
		class ARPawnCombat* OtherPawn;
	} Parms;
	Parms.OtherPawn = OtherPawn;
	ProcessEvent(FindFunctionChecked(g_026e399c), &Parms);
}

extern FName g_026e2f7c;
	/* BMGAME_GetCounterLimb */

// @baa 0x016383e0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
BYTE ARPawnCombat::eventGetCounterLimb()
{
	struct RPawnCombat_eventGetCounterLimb_Parms
	{
		BYTE ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e2f7c), &Parms);
	return Parms.ReturnValue;
}

// @baa 0x0163c600
/* How well TestStrike fits the requested direction, strength and range: -1 when it can't be used at all
 * (inactive, needs a target, wrong strength, travels too far, blocked, locked for this chapter, or the target is
 * getting up), otherwise the sum of the per-criterion scores. */
INT ARCombatMove_BatmanStrike::GetStrikeInfoScore(FStrikeInfo TestStrike, BYTE StrikeDir, BYTE StrikeStrength, BYTE StrikeRange, UBOOL bCanTravelBeyondTarget)
{
	if (!TestStrike.bActive)
	{
		return -1;
	}
	if (!Target && !TestStrike.bCanPerformWithNoTarget)
	{
		return -1;
	}
	if (bFinalBlow && !TestStrike.bCanBeFinalBlow)
	{
		return -1;
	}
	if (TestStrike.StrikeStrength != StrikeStrength)
	{
		return -1;
	}
	if (!bCanTravelBeyondTarget && TestStrike.bTravelsBeyondTarget)
	{
		return -1;
	}
	if (TargetResponse == 1 && !TestStrike.bCanPerformOnBlocker)
	{
		return -1;
	}
	if (!WorldInfo->IsDemoBuild() && ChapterNumber > 0.f && (FLOAT)TestStrike.UnlockChapter > ChapterNumber)
	{
		return -1;
	}
	if (Target && !TestStrike.bHitsLow && Target->eventIsGettingUpFromRagdoll())
	{
		return -1;
	}

	INT Score = GetScoreForStrikeDir(TestStrike.StrikeDirection, StrikeDir);
	Score += GetScoreForStrikeRange(TestStrike.StrikeRange, StrikeRange);
	Score += GetScoreForHandedness(TestStrike);
	Score += GetScoreForTimeSinceUse(TestStrike);
	Score += GetScoreForStrikeSpeed(TestStrike);
	return Score;
}
