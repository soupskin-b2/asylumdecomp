// R3rdPersonCamera.cpp (part 12 of 12): 11 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_02381708;
// @baa 0x0169fa70
undefined4 * UObject::sub_0169fa70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02381708);
  return param_1;
}

struct ARPawnPlayer_ : public ARPawnPlayer
{
    void sub_01688660();
};

// @baa 0x01688660
void ARPawnPlayer_::sub_01688660()
{
    if (bIsCrouched)
        vf_440(0);
    bWantsToCrouch = FALSE;
}

struct S_0168de00 {
    void sub_007d7170();
    void sub_01689170();
    void sub_0168de00();
};

// @baa 0x0168de00
void S_0168de00::sub_0168de00() {
    sub_007d7170();
    sub_01689170();
}

// @baa 0x016a0da0
bool ARPawnPlayerChallengeJokerBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01688ba0
bool sub_01688ba0(BYTE* P)
{
    return P[8] >= 5;
}

struct URCapeComponent_ : public URCapeComponent
{
    void sub_016cd7b0(INT A, INT B);
};

// @baa 0x01688730
void ARPawnPlayerBm::vf_668(INT P)
{
    ((URCapeComponent_*)CapeComponent)->sub_016cd7b0(0, 0);
}

const TCHAR* sub_01686d70();
const TCHAR* sub_0053f6c0();
// @baa 0x01688e40
INT AR3rdPersonCamera::vf_000()
{
    return sub_01686d70 == sub_0053f6c0;
}

struct AR3rdPersonCamera_ : AR3rdPersonCamera
{
    void sub_0168a730();
};

// @baa 0x0168a730
void AR3rdPersonCamera_::sub_0168a730()
{
    Smoother.LastSmoothDistance = 1.0f;
    Smoother.DirectionDistance[0] = 10000.0f;
    Smoother.DirectionDistance[1] = 10000.0f;
    Smoother.DirectionDistance[2] = 10000.0f;
    Smoother.DirectionDistance[3] = 10000.0f;
    Smoother.CurrentSmootherIndex = 0;
    Smoother.MinSmootherIndex = 0;
}

/* Kit gap: the ApplyModifiers script-event glue (out of line, 0x01686bf0) isn't declared on AR3rdPersonCamera. */
struct AR3rdPersonCamera__016895b0 : public AR3rdPersonCamera
{
    void eventApplyModifiers(FLOAT DeltaTime, FTPOV& OutPOV); /* 0x01686bf0 */
};

// @baa 0x016895b0
/* The base camera modifiers run first, then the script's ApplyModifiers event. */
void AR3rdPersonCamera::ApplyCameraModifiers(FLOAT DeltaTime, FTPOV& OutPOV)
{
    Super::ApplyCameraModifiers(DeltaTime, OutPOV);
    ((AR3rdPersonCamera__016895b0*)this)->eventApplyModifiers(DeltaTime, OutPOV);
}

struct C_Vft19_4c
{
    virtual void d00() = 0;
    virtual void d01() = 0;
    virtual void d02() = 0;
    virtual void d03() = 0;
    virtual void d04() = 0;
    virtual void d05() = 0;
    virtual void d06() = 0;
    virtual void d07() = 0;
    virtual void d08() = 0;
    virtual void d09() = 0;
    virtual void d10() = 0;
    virtual void d11() = 0;
    virtual void d12() = 0;
    virtual void d13() = 0;
    virtual void d14() = 0;
    virtual void d15() = 0;
    virtual void d16() = 0;
    virtual void d17() = 0;
    virtual void d18() = 0;
    virtual void vf4c(UINT A) = 0;
};

struct URSeqAct_UpdateBatmanDamageLevel_ : public URSeqAct_UpdateBatmanDamageLevel
{
    INT sub_009086f0();
};

// @baa 0x01688930
void URSeqAct_UpdateBatmanDamageLevel::vf_01c()
{
    URSeqAct_UpdateBatmanDamageLevel_* Self = (URSeqAct_UpdateBatmanDamageLevel_*)this;
    Self->sub_009086f0();
    if (DamageState == NULL)
        reinterpret_cast<C_Vft19_4c*>(Self)->vf4c(0);
}

/* Unnamed in the kit: the zoom point direction for an index (the tight set when bUseTightFocusPoints). */
struct AR3rdPersonCamera__01689560 : public AR3rdPersonCamera
{
    FVector* sub_01689560(INT CurrentZoomPointIndex);
};

// @baa 0x01689560
FVector* AR3rdPersonCamera__01689560::sub_01689560(INT CurrentZoomPointIndex)
{
#line 70 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\R3rdPersonCamera.cpp"
    check(CurrentZoomPointIndex < 9);
    if (bUseTightFocusPoints)
    {
        return &TightZoomPointDir[CurrentZoomPointIndex];
    }
    return &ZoomPointDir[CurrentZoomPointIndex];
}

#line 162 "candidate.cpp"
