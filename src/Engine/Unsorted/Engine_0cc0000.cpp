// Engine_0cc0000.cpp: 90 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_00cbe9a0();
// @baa 0x00cc0250
void sub_00cc0250(void) { sub_00cbe9a0(); }

int sub_005c7a20(void);
extern undefined * g_020866e8;
// @baa 0x00cc0370
undefined4 * UObject::sub_00cc0370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020866e8);
  return param_1;
}

// @baa 0x00cc0390
IMPLEMENT_CLASS_AT(UObjectReferencer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 239);

// @baa 0x00cc0400
void sub_00cbeb70();
// @baa 0x00cc0710
void sub_00cc0710(void) { sub_00cbeb70(); }

void sub_00cbed00();
// @baa 0x00cc0720
void sub_00cc0720(void) { sub_00cbed00(); }

int sub_00c93560(void);
int sub_00cbb710(...);
extern undefined4 g_026c3ca0;
// @baa 0x00cc0860
int sub_00cc0860(void)
{
  if (g_026c3ca0 == 0) {
    g_026c3ca0 = sub_00cbb710(L"Engine");
    sub_00c93560();
  }
  return g_026c3ca0;
}

void sub_00cbee50();
// @baa 0x00cc08a0
void sub_00cc08a0(void) { sub_00cbee50(); }

struct D { void sub_00cbe7d0(int a); };

struct C { void sub_00cc3390(); };

// @baa 0x00cc3390
void C::sub_00cc3390()
{
    ((D *)((char *)this + 0x14))->sub_00cbe7d0(0);
}

int sub_00cb2f00(...);
int sub_00cbc010(void);
extern undefined4 g_026c3cc0;
// @baa 0x00cc33a0
int sub_00cc33a0(void)
{
  if (g_026c3cc0 == 0) {
    g_026c3cc0 = sub_00cb2f00(L"Engine");
    sub_00cbc010();
  }
  return g_026c3cc0;
}

void sub_00726030();
// @baa 0x00cc3a40
void sub_00cc3a40(void) { sub_00726030(); }

void sub_00cbf200();
// @baa 0x00cc3c40
void sub_00cc3c40(void) { sub_00cbf200(); }

void sub_00cbf260();
// @baa 0x00cc3c50
void sub_00cc3c50(void) { sub_00cbf260(); }

struct C_00cc45a0 { C_00cc45a0* sub_00cc45a0(void); };

// @baa 0x00cc45a0
C_00cc45a0* C_00cc45a0::sub_00cc45a0(void) { return this; }

void sub_00cc45b0();
// @baa 0x00cc4610
void sub_00cc4610(void) { sub_00cc45b0(); }

struct C_00cc4850 { int sub_00cc4850(void); };

// @baa 0x00cc4850
int C_00cc4850::sub_00cc4850(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_004025d0(void*);
struct D_00cc4910 { void* p; ~D_00cc4910(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00cc4910 { void* Data; int Num; int Max; void sub_00cc4910(); };

// @baa 0x00cc4910
void C_00cc4910::sub_00cc4910() {
    void* t = Data;
    {
    D_00cc4910 d;
    Max = 0; Num = 0;
    d.~D_00cc4910();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00cc4970 {
    undefined4 sub_00cc4970();
};

// @baa 0x00cc4970
undefined4 C_00cc4970::sub_00cc4970(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00cc4980 { C_00cc4980* sub_00cc4980(void); };

// @baa 0x00cc4980
C_00cc4980* C_00cc4980::sub_00cc4980(void) { return this; }

struct C_00cc4990 { C_00cc4990* sub_00cc4990(void); };

// @baa 0x00cc4990
C_00cc4990* C_00cc4990::sub_00cc4990(void) { return this; }

struct C_00cc49a0 { C_00cc49a0* sub_00cc49a0(void); };

// @baa 0x00cc49a0
C_00cc49a0* C_00cc49a0::sub_00cc49a0(void) { return this; }

struct C_00cc49b0 { C_00cc49b0* sub_00cc49b0(void); };

// @baa 0x00cc49b0
C_00cc49b0* C_00cc49b0::sub_00cc49b0(void) { return this; }

struct C_00cc49c0 { C_00cc49c0* sub_00cc49c0(void); };

// @baa 0x00cc49c0
C_00cc49c0* C_00cc49c0::sub_00cc49c0(void) { return this; }

struct C_00cc49d0 { C_00cc49d0* sub_00cc49d0(void); };

// @baa 0x00cc49d0
C_00cc49d0* C_00cc49d0::sub_00cc49d0(void) { return this; }

struct D_00cc49e0 { void* p; ~D_00cc49e0(){ if(0) sub_004025d0(p);} };

struct C_00cc49e0 { void* Data; int Num; int Max; void sub_00cc49e0(); };

// @baa 0x00cc49e0
void C_00cc49e0::sub_00cc49e0() {
    void* t = Data;
    {
    D_00cc49e0 d;
    Max = 0; Num = 0;
    d.~D_00cc49e0();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00cc4a40 {
    undefined4 sub_00cc4a40();
};

// @baa 0x00cc4a40
undefined4 C_00cc4a40::sub_00cc4a40(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00cc4a50 { C_00cc4a50* sub_00cc4a50(void); };

// @baa 0x00cc4a50
C_00cc4a50* C_00cc4a50::sub_00cc4a50(void) { return this; }

struct D_00cc4a60 { void* p; ~D_00cc4a60(){ if(0) sub_004025d0(p);} };

struct C_00cc4a60 { void* Data; int Num; int Max; void sub_00cc4a60(); };

// @baa 0x00cc4a60
void C_00cc4a60::sub_00cc4a60() {
    void* t = Data;
    {
    D_00cc4a60 d;
    Max = 0; Num = 0;
    d.~D_00cc4a60();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct D_00cc4ac0 { void* p; ~D_00cc4ac0(){ if(0) sub_004025d0(p);} };

struct C_00cc4ac0 { void* Data; int Num; int Max; void sub_00cc4ac0(); };

// @baa 0x00cc4ac0
void C_00cc4ac0::sub_00cc4ac0() {
    void* t = Data;
    {
    D_00cc4ac0 d;
    Max = 0; Num = 0;
    d.~D_00cc4ac0();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct D_00cc4b20 { void* p; ~D_00cc4b20(){ if(0) sub_004025d0(p);} };

struct C_00cc4b20 { void* Data; int Num; int Max; void sub_00cc4b20(); };

// @baa 0x00cc4b20
void C_00cc4b20::sub_00cc4b20() {
    void* t = Data;
    {
    D_00cc4b20 d;
    Max = 0; Num = 0;
    d.~D_00cc4b20();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct D_00cc4b80 { void* p; ~D_00cc4b80(){ if(0) sub_004025d0(p);} };

struct C_00cc4b80 { void* Data; int Num; int Max; void sub_00cc4b80(); };

// @baa 0x00cc4b80
void C_00cc4b80::sub_00cc4b80() {
    void* t = Data;
    {
    D_00cc4b80 d;
    Max = 0; Num = 0;
    d.~D_00cc4b80();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct D_00cc4be0 { void* p; ~D_00cc4be0(){ if(0) sub_004025d0(p);} };

struct C_00cc4be0 { void* Data; int Num; int Max; void sub_00cc4be0(); };

// @baa 0x00cc4be0
void C_00cc4be0::sub_00cc4be0() {
    void* t = Data;
    {
    D_00cc4be0 d;
    Max = 0; Num = 0;
    d.~D_00cc4be0();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00cc4c40 {
    int sub_00cc4c40(int);
};

// @baa 0x00cc4c40
int C_00cc4c40::sub_00cc4c40(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_view {
    int sub_00cbf3a0(int, int);
};

// @baa 0x00cc4c50
int UBrushComponent::sub_00cc4c50(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00cbf3a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x00cc4c80
int UBrushComponent::sub_00cc4c80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00cc4ca0
int UBrushComponent::sub_00cc4ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00cc4cb0 {
    int sub_00cc4cb0(int);
};

// @baa 0x00cc4cb0
int C_00cc4cb0::sub_00cc4cb0(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1 | *(uint *)(param_1 + 0x18c0));
}

struct C_00cc4d10 {
    int sub_00cc4d10();
};

// @baa 0x00cc4d10
int C_00cc4d10::sub_00cc4d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C_00cc4d20 {
    undefined4 sub_00cc4d20(byte);
    int sub_00765d90();
};

int sub_0053dfa0(...);
// @baa 0x00cc4d20
undefined4 C_00cc4d20::sub_00cc4d20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00cc4d20 *)(((char *)this + 8)))->sub_00765d90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00cbf340(void);
// @baa 0x00cc4d50
undefined4 UObject::sub_00cc4d50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00cbf340();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00cc4d70 {
    int sub_00cc4d70(int);
};

// @baa 0x00cc4d70
int C_00cc4d70::sub_00cc4d70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00cc4d80 {
    int sub_00cc4d80(int);
};

// @baa 0x00cc4d80
int C_00cc4d80::sub_00cc4d80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00cc4d90 {
    int sub_00cc4d90(int);
};

// @baa 0x00cc4d90
int C_00cc4d90::sub_00cc4d90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00cc4e60
int UBrushComponent::sub_00cc4e60(int param_2)
{
    uint param_1 = (uint)this;

  return (-(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1 | *(uint *)(param_1 + 0x40)) +
         param_2 * 4;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00cc51f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00cc51f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00cc51f0& operator++();
};

TConstSetBitIterator_00cc51f0::TConstSetBitIterator_00cc51f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00cc51f0
TConstSetBitIterator_00cc51f0& TConstSetBitIterator_00cc51f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00cc5240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00cc5240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00cc5240& operator++();
};

TConstSetBitIterator_00cc5240::TConstSetBitIterator_00cc5240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00cc5240
TConstSetBitIterator_00cc5240& TConstSetBitIterator_00cc5240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00cc5260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00cc5260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00cc5260& operator++();
};

TConstSetBitIterator_00cc5260::TConstSetBitIterator_00cc5260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00cc5260
TConstSetBitIterator_00cc5260& TConstSetBitIterator_00cc5260::operator++()
{
    It.Advance();
    return *this;
}

struct C_00cc5400 {
    int sub_00cc5400(int);
};

// @baa 0x00cc5400
int C_00cc5400::sub_00cc5400(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1 | *(uint *)(param_1 + 0x40));
}

// @baa 0x00cc5420
void __stdcall sub_00cc5420(int a0, int a1) {  }

extern undefined * g_02086890;
// @baa 0x00cc5950
undefined4 * UObject::sub_00cc5950(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02086890);
  return param_1;
}

// @baa 0x00cc5970
IMPLEMENT_CLASS_AT(UCurveEdPresetCurve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCurveEdPresetCurve.cpp", 11);

// @baa 0x00cc59f0
int sub_00caff90(void);
int sub_00cc4620(...);
extern undefined4 g_026c3cf4;
// @baa 0x00cc5a30
int sub_00cc5a30(void)
{
  if (g_026c3cf4 == 0) {
    g_026c3cf4 = sub_00cc4620(L"Engine");
    sub_00caff90();
  }
  return g_026c3cf4;
}

void sub_00cc49e0();
// @baa 0x00cc6860
void sub_00cc6860(void) { sub_00cc49e0(); }

struct C_00cc7080 { C_00cc7080* sub_00cc7080(void); };

// @baa 0x00cc7080
C_00cc7080* C_00cc7080::sub_00cc7080(void) { *(int*)((char*)this + 84) = 0; return this; }

// @baa 0x00cc7950
int UBrushComponent::sub_00cc7950(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00cc7970
int UBrushComponent::sub_00cc7970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x00cc7980
int UBrushComponent::sub_00cc7980(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x14;
}

// @baa 0x00cc7990
int UBrushComponent::sub_00cc7990(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00cc79b0
int UBrushComponent::sub_00cc79b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_view_00cc79d0 {
    int sub_00cc4da0(int, int);
};

// @baa 0x00cc79d0
int UBrushComponent::sub_00cc79d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00cc79d0 *)(this))->sub_00cc4da0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

// @baa 0x00cc7b20
int UBrushComponent::sub_00cc7b20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00cc7b30
int UBrushComponent::sub_00cc7b30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x00cc7b50
void __stdcall sub_00cc7b50(int a0, int a1) {  }

// @baa 0x00cc7c30
int UBrushComponent::sub_00cc7c30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct M_00cc7ca0 { void sub_00cc49e0(); };

struct C_00cc7ca0 { char pad[8]; M_00cc7ca0 m; void sub_00cc7ca0(); };

// @baa 0x00cc7ca0
void C_00cc7ca0::sub_00cc7ca0() { m.sub_00cc49e0(); }

struct TConstSetBitIterator_00cc7db0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00cc7db0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00cc7db0& operator++();
};

TConstSetBitIterator_00cc7db0::TConstSetBitIterator_00cc7db0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00cc7db0
TConstSetBitIterator_00cc7db0& TConstSetBitIterator_00cc7db0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00cc7dd0
void __stdcall sub_00cc7dd0(int a0, int a1) {  }

struct C_00cc83f0 {
    void sub_00cc83f0(int);
    int sub_00cb1f40(int, int, int);
};

// @baa 0x00cc83f0
void C_00cc83f0::sub_00cc83f0(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*(int *)(param_1 + 0x48) != param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    ((C_00cc83f0 *)(this))->sub_00cb1f40(0, param_2, 4);
  }
  return;
}

struct C_view_00ccbe10 {
    int sub_00cc4da0(int, int);
};

// @baa 0x00ccbe10
int UBrushComponent::sub_00ccbe10(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00ccbe10 *)(this))->sub_00cc4da0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

// @baa 0x00ccc000
int UBrushComponent::sub_00ccc000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00ccc010
int UBrushComponent::sub_00ccc010(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

// @baa 0x00ccc020
int UBrushComponent::sub_00ccc020(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x00ccc040
int UBrushComponent::sub_00ccc040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x1c;
}

struct TConstSetBitIterator_00ccc1b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ccc1b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ccc1b0& operator++();
};

TConstSetBitIterator_00ccc1b0::TConstSetBitIterator_00ccc1b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ccc1b0
TConstSetBitIterator_00ccc1b0& TConstSetBitIterator_00ccc1b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00ccc410 {
    int sub_00cc7cb0(int);
};

// @baa 0x00ccc410
void UBrushComponent::sub_00ccc410(void)
{
    int param_1 = (int)this;
  ((C_view_00ccc410 *)((*(char **)((char *)this + 0x10))))->sub_00cc7cb0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_00cc7c40(void);
// @baa 0x00ccc430
undefined4 UBrushComponent::sub_00ccc430(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00cc7c40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00ccc450 {
    int sub_00cc49e0();
};

// @baa 0x00ccc450
undefined4 UBrushComponent::sub_00ccc450(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00ccc450 *)(((char *)this + 8)))->sub_00cc49e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00ccc480 { void sub_00553720(); };

struct C_00ccc480 { char pad[8]; M_00ccc480 m; void sub_00ccc480(); };

// @baa 0x00ccc480
void C_00ccc480::sub_00ccc480() { m.sub_00553720(); }

struct TConstSetBitIterator_00ccc8d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ccc8d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ccc8d0& operator++();
};

TConstSetBitIterator_00ccc8d0::TConstSetBitIterator_00ccc8d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ccc8d0
TConstSetBitIterator_00ccc8d0& TConstSetBitIterator_00ccc8d0::operator++()
{
    It.Advance();
    return *this;
}

struct M_00cccbc0 { void sub_00cc8530(); };

struct C_00cccbc0 { char pad[64]; M_00cccbc0 m; void sub_00cccbc0(); };

// @baa 0x00cccbc0
void C_00cccbc0::sub_00cccbc0() { m.sub_00cc8530(); }

int sub_00c9a590(void);
int sub_00ccbc40(...);
extern undefined4 g_026c3cd8;
// @baa 0x00cccd00
int sub_00cccd00(void)
{
  if (g_026c3cd8 == 0) {
    g_026c3cd8 = sub_00ccbc40(L"Engine");
    sub_00c9a590();
  }
  return g_026c3cd8;
}

// @baa 0x00cccd30
UServerCommandlet::UServerCommandlet()
{
    if (!(ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x00cccd90
int sub_00cccd90(void);
int sub_005c7a70(...);
// @baa 0x00cccdf0
undefined4 UServerCommandlet::sub_00cccdf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00cccd90();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x00ccce10
USmokeTestCommandlet::USmokeTestCommandlet()
{
    if (!(ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x00ccce70
int sub_00ccce70(void);
// @baa 0x00ccced0
undefined4 USmokeTestCommandlet::sub_00ccced0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ccce70();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

int sub_00c92f70(void);
int sub_00cca9d0(...);
extern undefined4 g_026c3c60;
// @baa 0x00ccd7c0
int sub_00ccd7c0(void)
{
  if (g_026c3c60 == 0) {
    g_026c3c60 = sub_00cca9d0(L"Engine");
    sub_00c92f70();
  }
  return g_026c3c60;
}

struct C_00ccf480 { void sub_00ccc920(int); C_00ccf480 *sub_00ccf480(int); };

// @baa 0x00ccf480
C_00ccf480 *C_00ccf480::sub_00ccf480(int a) { sub_00ccc920(a); return this; }
