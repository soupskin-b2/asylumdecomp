// BmGameClasses.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

extern FName g_026e2644;
 /* InitHUD */
struct URSeqAct_HUDTimer_ : public URSeqAct_HUDTimer
{
    void eventInitHUD();
};

/* RSeqAct_HUDTimer.InitHUD script event: the generated glue (no parameters). */
inline void URSeqAct_HUDTimer_::eventInitHUD()
{
    ProcessEvent(FindFunctionChecked(g_026e2644), NULL);
}

// @baa 0x01556a30
/* Starts the timer from its full duration and lets script set up the HUD. */
void URSeqAct_HUDTimer::Activated()
{
    RemainingTime = (FLOAT)TimeInSeconds;
    LastUpdateTime = GWorld->GetWorldInfo()->TimeSeconds;
    ((URSeqAct_HUDTimer_*)this)->eventInitHUD();
}

// @baa 0x015640b0
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URAimingConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x01564120
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URBoneRescaleConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x01564150
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URCharacterViewerConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x01564180
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URMirrorConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x015641b0
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URPoseConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x015641e0
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URWeaponConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x01564210
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URAlternateAnimationAndWeaponConfigFactoryNew::StaticConstructor()
{
	new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

extern FName g_026e3438;
	/* BMGAME_ActivatePP */
/* The action's script events (generated glue, BmGameClasses.h) */
struct URSeqAct_ModifyPostProcess_ : public URSeqAct_ModifyPostProcess
{
	void eventActivatePP(class ULocalPlayer* LP)
	{
		struct RSeqAct_ModifyPostProcess_eventActivatePP_Parms
		{
			class ULocalPlayer* LP;
		} Parms;
		Parms.LP = LP;
		ProcessEvent(FindFunctionChecked(g_026e3438), &Parms);
	}
};

// @baa 0x01564cc0
/* Input 0 applies the settings to the first local player, input 1 finishes; otherwise script updates them. */
UBOOL URSeqAct_ModifyPostProcess::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_ModifyPostProcess_*)this)->eventActivatePP(GEngine->GamePlayers(0));
		return FALSE;
	}
	if (InputLinks(1).bHasImpulse)
	{
		return TRUE;
	}
	((URSeqAct_ModifyPostProcess_*)this)->eventUpdatePP(GEngine->GamePlayers(0));
	return FALSE;
}

extern FName g_026e2c00;
	/* BMGAME_ShutdownHUD */
/* The action's script event (generated glue, BmGameClasses.h) */
struct URSeqAct_HUDTimer__01564e70 : public URSeqAct_HUDTimer
{
	void eventShutdownHUD()
	{
		ProcessEvent(FindFunctionChecked(g_026e2c00), NULL);
	}
};

// @baa 0x01564e70
/* Inputs: 0 start, 1 abort (output 1), 2 pause, 3 resume. Counts RemainingTime down; output 0 when
 * it runs out, output N+2 as the whole-second count reaches TriggerEventsAtTimes(N). */
UBOOL URSeqAct_HUDTimer::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		bTimerRunning = TRUE;
	}
	else if (InputLinks(1).bHasImpulse)
	{
		bTimerRunning = FALSE;
		FSeqOpOutputLink& Link = OutputLinks(1);
		if (!Link.bDisabled)
		{
			Link.bHasImpulse = TRUE;
		}
		((URSeqAct_HUDTimer__01564e70*)this)->eventShutdownHUD();
		return TRUE;
	}
	else if (InputLinks(2).bHasImpulse)
	{
		bTimerRunning = FALSE;
	}
	else if (InputLinks(3).bHasImpulse)
	{
		bTimerRunning = TRUE;
	}

	if (bTimerRunning && GWorld->GetWorldInfo()->TimeSeconds != LastUpdateTime)
	{
		const FLOAT OldTime = RemainingTime;
		RemainingTime -= DeltaTime;
		IntRemainingTime = (INT)RemainingTime;
		if (RemainingTime <= 0.f)
		{
			bTimerRunning = FALSE;
			FSeqOpOutputLink& Link = OutputLinks(0);
			if (!Link.bDisabled)
			{
				Link.bHasImpulse = TRUE;
			}
			((URSeqAct_HUDTimer__01564e70*)this)->eventShutdownHUD();
			return TRUE;
		}
		if ((INT)OldTime != IntRemainingTime)
		{
			for (INT Idx = 0; Idx < TriggerEventsAtTimes.Num(); Idx++)
			{
				if (TriggerEventsAtTimes(Idx) == IntRemainingTime)
				{
					FSeqOpOutputLink& Link = OutputLinks(Idx + 2);
					if (!Link.bDisabled)
					{
						Link.bHasImpulse = TRUE;
					}
				}
			}
		}
	}
	return FALSE;
}
