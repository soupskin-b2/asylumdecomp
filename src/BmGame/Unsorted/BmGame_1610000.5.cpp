// BmGame_1610000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x01612de0
void URSeqAct_SpeechEventManagerBase::vf_110(INT, INT)
{
    vf_1ac();
}

struct C
{
    BYTE Flag_00;
    char pad_01[0x1f];
    BYTE Flag_20;
    INT Value_24;

    C* sub_01612250(INT Unused);
};

// @baa 0x01612250
C* C::sub_01612250(INT)
{
    Flag_00 = 0;
    Flag_20 = 0;
    Value_24 = 0;
    return this;
}

struct URSeqAct_SpeechEventManagerBase_ : public URSeqAct_SpeechEventManagerBase
{
    void UpdateObject(); /* 0x00902260 */
};

// @baa 0x01612e00
void URSeqAct_SpeechEventManagerBase::vf_140()
{
    ((URSeqAct_SpeechEventManagerBase_*)this)->UpdateObject();
    vf_1ac();
}

struct C_01612d70
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
    virtual void d106() = 0;
    virtual void vf1ac();
    INT sub_00d201d0(INT A);
    void sub_01612d70(UINT A);
};

// @baa 0x01612d70
void C_01612d70::sub_01612d70(UINT A)
{
    vf1ac();
    sub_00d201d0((INT)A);
}

// @baa 0x016103d0
/* Squared distance from TestPoint to the current request's goal, or -1 with no request. (The term order is what the
 * compiler needs to reproduce the original's x87 sequence.) */
FLOAT ARBMRouter::PointDistSqFromGoal(FVector TestPoint)
{
    ARBMRouteRequest* Request = CurrentRequest;
    if (Request)
    {
        const FVector Delta(TestPoint.X - Request->GoalPos.X, TestPoint.Y - Request->GoalPos.Y, TestPoint.Z - Request->GoalPos.Z);
        return Delta.Y * Delta.Y + Delta.X * Delta.X + Delta.Z * Delta.Z;
    }
    return -1.f;
}

// @baa 0x01610410
/* Squared distance from TestLocation to the current request's path, or -1 with no path. */
FLOAT ARBMRouter::GetDistanceSquaredFromPath(FVector TestLocation)
{
    if (CurrentRequest && CurrentRequest->CurrentPath)
    {
        return CurrentRequest->CurrentPath->GetDistanceSquaredFromPath(HostPawn, TestLocation);
    }
    return -1.f;
}
