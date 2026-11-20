// BmGameLevelTransitionClasses.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x01591bb0
void ARLevelVolume::PostEditMove(UBOOL A)
{
    if (A != 0)
        ARLevelTransition::RebuildTransitionLinks();
    Super::PostEditMove(A);
}

extern float g_025db4c4;
// @baa 0x01557f60
void __stdcall sub_01557f60(FLOAT F)
{
    g_025db4c4 = F;
}

// @baa 0x0155abb0
void URSeqAct_PrepareMapChangeFromURL::DeActivated()
{
    Super::DeActivated();
    AWorldInfo* WorldInfo = GetWorldInfo();
    WorldInfo->bRequestedBlockOnAsyncLoading = FALSE;
    WorldInfo->bHighPriorityLoading = FALSE;
}

// @baa 0x0155a3a0
/* A transition connects the levels on either side of it. */
UBOOL ARLevelTransition::IsConnectedToLevel(FName Level)
{
    return Level == LevelInFront || Level == LevelBehind;
}

// @baa 0x0156d0a0
/* Drops Originator's request for the next level (the level name itself isn't checked). */
void ARGameRI::RemoveNextLevelRequest(FName Level, AActor* Originator)
{
    INT Index;
    if (NextLevelOriginators.FindItem(Originator, Index))
    {
        NextLevelOriginators.Remove(Index);
    }
}

// @baa 0x0155ab10
/* Slot 0x3a4: whether the global door lock applies to the current level. */
UBOOL ARGameRI::IsGlobalLockActive()
{
	if (GlobalDoorLock)
	{
		if (GlobalDoorLockRoom == NAME_None || GlobalDoorLockRoom == CurrentLevel)
		{
			return TRUE;
		}
	}
	return FALSE;
}

// @baa 0x0155a410
/* Slot 0x368: whether this transition has two distinct levels to stream between. */
UBOOL ARLevelTransition::DoesLevelStreaming()
{
	return !bDisabledStreaming && !DisableAllStreaming && !(LevelInFront == LevelBehind)
		&& LevelInFront != NAME_None && LevelBehind != NAME_None;
}

// @baa 0x0155ff60
/* Slot 0x368: a transition into other persistent levels only needs one side to be set. */
UBOOL ARLevelTransitionP::DoesLevelStreaming()
{
	if (PersistentLevelNames.Num() > 0)
	{
		if (bDisabledStreaming || DisableAllStreaming)
		{
			return FALSE;
		}
		return LevelInFront != NAME_None || LevelBehind != NAME_None;
	}
	return Super::DoesLevelStreaming();
}

struct C_WS_a8f0
{
    BYTE b[0x44];
};

struct C_WC_a8f0
{
    BYTE b[1];
};

struct C_0155a8f0
{
    BYTE Pad[0x424];
    C_WS_a8f0 WS;
    C_WC_a8f0 WC;
    void sub_0155a8f0(FLOAT F);
};

void sub_016d4390(C_WS_a8f0* A, C_WC_a8f0* B, FLOAT F);
// @baa 0x0155a8f0
void C_0155a8f0::sub_0155a8f0(FLOAT F)
{
    sub_016d4390((C_WS_a8f0*)((BYTE*)this + 0x424), &WC, F);
}

struct C_T1_5a090
{
};

struct C_P1_5a090
{
    BYTE Pad[0x348];
    C_T1_5a090* T;
    void sub_00759430(INT A);
};

// @baa 0x0155a090
void __stdcall PlayerUpdateTransform(C_P1_5a090* P)
{
    if (P != NULL)
    {
        ((UActorComponent*)P->T)->ConditionalDetach(0);
        P->sub_00759430(0);
    }
}
