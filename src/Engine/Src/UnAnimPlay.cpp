// UnAnimPlay.cpp (part 1 of 2): 37 functions
// Placed here by: class 21, neighbours 6, file 5, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00788140
void UCameraAnimInst::sub_00788140(int a0) { *(int*)((char*)this + 108) = a0; }

// @baa 0x00c49dc0
float10 sub_00c49dc0(float param_1)
{
  for (; 2.0 <= param_1; param_1 = param_1 - 4.0) {
  }
  for (; param_1 < -2.0; param_1 = param_1 + 4.0) {
  }
  return (float10)param_1;
}

struct C { C* sub_00c49e20(int a0); };

// @baa 0x00c49e20
C* C::sub_00c49e20(int a0) { return this; }

struct C_00c49e30 { C_00c49e30* sub_00c49e30(int a0); };

// @baa 0x00c49e30
C_00c49e30* C_00c49e30::sub_00c49e30(int a0) { return this; }

// @baa 0x00c4ad40
int UAnimNodeSequence::vf_000(void) { return 1; }

// @baa 0x00c4ad50
int UAnimNodeSequenceBlendBase::vf_000(void) { return 1; }

// @baa 0x00c4ad60
int UAnimNodeSequenceBlendByAim::vf_000(void) { return 1; }

int sub_006311e0(...);
extern undefined4 g_0204f6f0;
// @baa 0x00c4ade0
DOUBLE UAnimNodeSequence::vf_178(INT param_2, INT param_3) {
    int param_1 = (int)this;
  float fVar1;
  if ((param_2 != 0) || (param_3 != 0)) {
    sub_006311e0("0 == SliderIndex && 0 == ValueIndex",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp"
                 ,0x4e,&g_0204f6f0);
  }
  if ((*(int *)(param_1 + 0xcc) != 0) &&
     (fVar1 = *(float *)(*(int *)(param_1 + 0xcc) + 0x44), 0.0 < fVar1)) {
    return (float10)*(float *)(param_1 + 0xc4) / (float10)fVar1;
  }
  return (float10)0;
}

// @baa 0x00c4afe0
void AActor::sub_00c4afe0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(*(int *)(param_1 + 0x18) + 0x34) = 0x181;
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  return;
}

extern undefined4 g_02050c70;
extern undefined4 g_02050d60;
// @baa 0x00c4b120
void UAnimNodeSequenceBlendByAim::vf_17c(int param_2, int param_3, float param_4)
{
    int param_1 = (int)this;
  if (param_2 != 0) {
    sub_006311e0("SliderIndex == 0",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp"
                 ,0x7d8,&g_02050c70);
  }
  if (param_3 != 0) {
    if (param_3 != 1) {
      sub_006311e0("ValueIndex == 0 || ValueIndex == 1",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp"
                   ,0x7d9,&g_02050d60);
    }
    *(float *)(param_1 + 0x110) = (param_4 - 0.5) * -2.0;
    return;
  }
  *(float *)(param_1 + 0x10c) = (param_4 - 0.5) * 2.0;
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00c57340 { void* Data; int Num; int Max; void sub_00c57340(); };

// @baa 0x00c57340
void C_00c57340::sub_00c57340() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00c64bb0
IMPLEMENT_CLASS_AT(UAnimNodeSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp", 10);

// @baa 0x00c64c10
uint UAnimNodeSequence::vf_170(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc0) >> 0xc & 1;
}

// @baa 0x00c64c20
int sub_005c7a20(void);
extern undefined * g_0205a380;
// @baa 0x00c64c50
undefined4 * UObject::sub_00c64c50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a380);
  return param_1;
}

// @baa 0x00c64c70
IMPLEMENT_CLASS_AT(UAnimNodeSequenceBlendBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp", 11);

// @baa 0x00c64ce0
extern undefined * g_0205a520;
// @baa 0x00c64d10
undefined4 * UObject::sub_00c64d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a520);
  return param_1;
}

extern undefined * g_0205a6c8;
// @baa 0x00c64d30
undefined4 * UObject::sub_00c64d30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a6c8);
  return param_1;
}

// @baa 0x00c64d50
UINT UAnimNodeSequenceBlendByAim::vf_170() { return 1; }

// @baa 0x00c64d60
int UAnimNodeSequenceBlendByAim::vf_174(int a0) { return 1; }

// @baa 0x00c64d70
IMPLEMENT_CLASS_AT(UAnimNodeSequenceBlendByAim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp", 12);

// @baa 0x00c64dd0
struct UCameraAnimInst_ : public UCameraAnimInst {
    void sub_007880c0(UBOOL bImmediate);   /* Stop */
    void sub_00788120(FLOAT NewWeight);    /* ApplyWeight */
};

struct UAnimNodeSequence_ : public UAnimNodeSequence {
    void sub_00c5e2f0(FLOAT MoveDelta, FLOAT DeltaSeconds, UBOOL bFireNotifies); /* AdvanceBy */
    UBOOL sub_00c4fe50();
    void sub_00c4fee0();                   /* StartCameraAnim */
    void StopCameraAnim()
    {
        if (ActiveCameraAnimInstance)
        {
            ((UCameraAnimInst_*)ActiveCameraAnimInstance)->sub_007880c0(1);
            ActiveCameraAnimInstance->bAutoReleaseWhenFinished = 1;
            ActiveCameraAnimInstance = NULL;
        }
    }
    void sub_00c67d30(FLOAT DeltaSeconds, FLOAT TotalWeight);
};

// @baa 0x00c67d30
void UAnimNodeSequence_::sub_00c67d30(FLOAT DeltaSeconds, FLOAT TotalWeight)
{
    if (SynchGroupName.Index == 0 && SynchGroupName.Number == 0)
    {
        PreviousTime = CurrentTime;
        if (bPlaying && AnimSeq)
        {
            const FLOAT MoveDelta = SkelComponent->GlobalAnimRateScale * AnimSeq->RateScale * Rate * DeltaSeconds;
            sub_00c5e2f0(MoveDelta, DeltaSeconds, !SkelComponent->bUseRawData);
        }
    }

    if (ActiveCameraAnimInstance)
    {
        if (sub_00c4fe50() && bPlaying && bRelevant)
        {
            ((UCameraAnimInst_*)ActiveCameraAnimInstance)->sub_00788120(NodeTotalWeight);
        }
        else
        {
            StopCameraAnim();
        }
    }
    else if (CameraAnim && bPlaying && bLoopCameraAnim && bRelevant)
    {
        sub_00c4fee0();
    }
}

// @baa 0x00c6b010
// @baa 0x00c6b030
// @baa 0x00c6b050
// @baa 0x00c6b6a0
// @baa 0x00c6b760
// @baa 0x00c6b820
// @baa 0x00c75900
// @baa 0x00c75a10
bool UAnimNodeSequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c77950
// @baa 0x00c77a60
bool UAnimNodeSequenceBlendBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c79560
// @baa 0x00c79670
bool UAnimNodeSequenceBlendByAim::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct UAnimNodeSequenceBlendByAim2 : public UAnimNodeSequenceBlendByAim {
    FVector2D sub_00c4b080();
};

// @baa 0x00c4b080
FVector2D UAnimNodeSequenceBlendByAim2::sub_00c4b080()
{
    return Aim;
}
