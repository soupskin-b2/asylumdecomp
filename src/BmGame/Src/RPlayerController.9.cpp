// RPlayerController.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

extern UBOOL g_025ef808;
// @baa 0x01615490
void ARPlayerController::SaveUsingGamePad(UBOOL A)
{
    g_025ef808 = (A != 0);
}

struct C_0171e460
{
    INT A, B, C, D, E, F;
    C_0171e460* sub_0171e460();
};

// @baa 0x0171e460
C_0171e460* C_0171e460::sub_0171e460()
{
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    F = 0;
    return this;
}

struct C_T_47da0
{
    INT sub_00547da0(INT B);
};

extern C_T_47da0 g_026e2e64;
extern DWORD g_026e2500;
struct C_017211e0
{
    INT sub_017211e0(INT A, INT B);
};

// @baa 0x017211e0
INT C_017211e0::sub_017211e0(INT A, INT B)
{
    g_026e2500 = A;
    return g_026e2e64.sub_00547da0(B);
}

// @baa 0x016d2020
INT __stdcall sub_016d2020(INT A)
{
    UAudioDevice* D = GEngine->GetAudioDevice();
    if (D != NULL)
        return D->vf_1a8(A);
    return 0;
}

// @baa 0x016d1fe0
INT __stdcall sub_016d1fe0(INT A)
{
    UAudioDevice* D = GEngine->GetAudioDevice();
    if (D != NULL)
        return D->vf_1a0(A);
    return 0;
}

// @baa 0x016d2000
INT __stdcall sub_016d2000(INT A)
{
    UAudioDevice* D = GEngine->GetAudioDevice();
    if (D != NULL)
        return D->vf_1a4(A);
    return 0;
}

/* TArray<FString>::Empty is out of line in this build (0x00551710). */
template<> void TArray<FString>::Empty(INT Slack);
/* The per-slot save descriptions shown in the load menu (one string list per save slot). */
extern TArray<FString> g_026e2d88[];
// @baa 0x0172d170
void ARPlayerController::Live_StoreSaveInfo(INT Id, const FString& Difficulty, const FString& Percentage, const FString& TimePlayed, const FString& RoomName, const FString& ChallengeStr, const FString& RiddlerStr, const FString& UpgradesStr, const FString& BioStr)
{
	g_026e2d88[Id].Empty();
	g_026e2d88[Id].AddItem(Difficulty);
	g_026e2d88[Id].AddItem(Percentage);
	g_026e2d88[Id].AddItem(TimePlayed);
	g_026e2d88[Id].AddItem(RoomName);
	g_026e2d88[Id].AddItem(ChallengeStr);
	g_026e2d88[Id].AddItem(RiddlerStr);
	g_026e2d88[Id].AddItem(UpgradesStr);
	g_026e2d88[Id].AddItem(BioStr);
}
