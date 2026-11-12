// BmGame_15d0000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

const TCHAR* sub_015d9180();
const TCHAR* sub_0053f6c0();
// @baa 0x015dd1a0
INT ARBMCombatManager::vf_000()
{
    return sub_015d9180 == sub_0053f6c0;
}

struct C_18_34
{
    BYTE Pad[0x34];
    WORD W34;
};

struct C_015dec40
{
    BYTE Pad[0x18];
    C_18_34* P18;
    BYTE Pad2[0xd8];
    INT CntF4;
    void sub_015dec40(INT A, INT B);
};

// @baa 0x015dec40
void C_015dec40::sub_015dec40(INT A, INT B)
{
    if (--CntF4 <= 0)
        P18->W34 = 0;
}

struct C_015dee10
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
    virtual void vf1a4();
    INT sub_00d201d0(INT A);
    void sub_015dee10(UINT A);
};

// @baa 0x015dee10
void C_015dee10::sub_015dee10(UINT A)
{
    vf1a4();
    sub_00d201d0((INT)A);
}

// @baa 0x015ddaa0
/* The host pawn's radial force on ForceReceiver. */
FVector URBMBehaviour_Combat::GetForceToGiveToPawn(ARPawnCombat* ForceReceiver, FLOAT MaxForce, FLOAT MinRange, FLOAT MaxRange)
{
    return HostPawn->GetRadialForce(ForceReceiver, MaxForce, MinRange, MaxRange);
}

// @baa 0x015dd5a0
/* Without combat areas every location counts; otherwise the combat manager decides. */
UBOOL URBMBehaviour_Combat::IsLocationInCombatArea(FVector TestLocation)
{
    return !HostController->bUseCombatAreas || CombatManager->IsLocationInCombatArea(TestLocation);
}
