// RPlayerController.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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

struct C_Dev_1a8
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual void d105() = 0;
    virtual INT vf1a8(INT A);
};

struct C_Audio_310_2020
{
    C_Dev_1a8* sub_00cb0310();
};

extern DWORD g_026c3cdc;
// @baa 0x016d2020
INT __stdcall sub_016d2020(INT A)
{
    C_Dev_1a8* D = ((C_Audio_310_2020*)g_026c3cdc)->sub_00cb0310();
    if (D != NULL)
        return D->vf1a8(A);
    return 0;
}

struct C_Dev_1a0
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual INT vf1a0(INT A);
};

struct C_Audio_310
{
    C_Dev_1a0* sub_00cb0310();
};

// @baa 0x016d1fe0
INT __stdcall sub_016d1fe0(INT A)
{
    C_Dev_1a0* D = ((C_Audio_310*)g_026c3cdc)->sub_00cb0310();
    if (D != NULL)
        return D->vf1a0(A);
    return 0;
}

struct C_Dev_1a4
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual INT vf1a4(INT A);
};

struct C_Audio_310_2000
{
    C_Dev_1a4* sub_00cb0310();
};

// @baa 0x016d2000
INT __stdcall sub_016d2000(INT A)
{
    C_Dev_1a4* D = ((C_Audio_310_2000*)g_026c3cdc)->sub_00cb0310();
    if (D != NULL)
        return D->vf1a4(A);
    return 0;
}

/* TArray<FString>::Empty is out of line in this build (0x00551710). */
template<> void TArray<FString>::Empty(INT Slack);
/* Kit gap: TArray::AddItem (UE3 Array.h) isn't declared; TArray<FString>'s copy is out of line. */
struct FStringArray_ : public TArray<FString>
{
	INT AddItem(const FString& Item); /* 0x0054cfe0 */
};

/* The per-slot save descriptions shown in the load menu (one string list per save slot). */
extern FStringArray_ g_026e2d88[];
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
