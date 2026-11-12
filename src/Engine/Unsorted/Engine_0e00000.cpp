// Engine_0e00000.cpp: 57 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00e00050(undefined4);
    int sub_00dfc860(int);
};

// @baa 0x00e00050
int C::sub_00e00050(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_00dfc860(param_2);
  return param_1 + 0xc;
}

// @baa 0x00e01d10
IMPLEMENT_CLASS_AT(UVoiceChannel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnChan.cpp", 1867);

// @baa 0x00e01d80
struct C_view {
    int sub_00572050(int);
};

extern undefined * g_020e34c0;

struct C_00e04240 {
    undefined4 sub_00e04240(byte);
};

int sub_0053dfa0(...);
int sub_00e03dd0(void);
// @baa 0x00e04240
undefined4 C_00e04240::sub_00e04240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e03dd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct V_00e04330 {
    virtual void g();
};

// @baa 0x00e04330
void (V_00e04330::*sub_00e04330)() = &V_00e04330::g;

struct C_00e04340 {
    undefined4 sub_00e04340(byte);
};

int sub_00e04260(void);
// @baa 0x00e04340
undefined4 C_00e04340::sub_00e04340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e04260();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e04ed0 {
    int sub_00e04ed0(int);
};

// @baa 0x00e04ed0
int C_00e04ed0::sub_00e04ed0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e04ee0 {
    int sub_00e04ee0(int);
};

// @baa 0x00e04ee0
int C_00e04ee0::sub_00e04ee0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e04ef0 {
    int sub_00e04ef0();
};

// @baa 0x00e04ef0
int C_00e04ef0::sub_00e04ef0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e04f10 {
    int sub_00e04f10();
};

// @baa 0x00e04f10
int C_00e04f10::sub_00e04f10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00e04f20 {
    int sub_00e04f20();
};

// @baa 0x00e04f20
int C_00e04f20::sub_00e04f20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e04f40 {
    int sub_00e04f40();
};

// @baa 0x00e04f40
int C_00e04f40::sub_00e04f40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00e04fd0 {
    int sub_00e04fd0(int);
};

// @baa 0x00e04fd0
int C_00e04fd0::sub_00e04fd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e04fe0 {
    int sub_00e04fe0(int);
};

// @baa 0x00e04fe0
int C_00e04fe0::sub_00e04fe0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
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

struct TConstSetBitIterator_00e05110 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e05110(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e05110& operator++();
};

TConstSetBitIterator_00e05110::TConstSetBitIterator_00e05110(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e05110
TConstSetBitIterator_00e05110& TConstSetBitIterator_00e05110::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e05160 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e05160(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e05160& operator++();
};

TConstSetBitIterator_00e05160::TConstSetBitIterator_00e05160(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e05160
TConstSetBitIterator_00e05160& TConstSetBitIterator_00e05160::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e05180 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e05180(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e05180& operator++();
};

TConstSetBitIterator_00e05180::TConstSetBitIterator_00e05180(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e05180
TConstSetBitIterator_00e05180& TConstSetBitIterator_00e05180::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e051a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e051a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e051a0& operator++();
};

TConstSetBitIterator_00e051a0::TConstSetBitIterator_00e051a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e051a0
TConstSetBitIterator_00e051a0& TConstSetBitIterator_00e051a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e051f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e051f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e051f0& operator++();
};

TConstSetBitIterator_00e051f0::TConstSetBitIterator_00e051f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e051f0
TConstSetBitIterator_00e051f0& TConstSetBitIterator_00e051f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00e05240 {
    int sub_00e05240(int);
};

// @baa 0x00e05240
int C_00e05240::sub_00e05240(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct TConstSetBitIterator_00e05450 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e05450(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e05450& operator++();
};

TConstSetBitIterator_00e05450::TConstSetBitIterator_00e05450(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e05450
TConstSetBitIterator_00e05450& TConstSetBitIterator_00e05450::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e05470 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e05470(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e05470& operator++();
};

TConstSetBitIterator_00e05470::TConstSetBitIterator_00e05470(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e05470
TConstSetBitIterator_00e05470& TConstSetBitIterator_00e05470::operator++()
{
    It.Advance();
    return *this;
}

struct C_00e057d0 {
    int sub_00e057d0(int);
    int sub_00723aa0(int);
};

// @baa 0x00e057d0
int C_00e057d0::sub_00e057d0(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  ((C_00e057d0 *)(((char *)this + 0x7c)))->sub_00723aa0(param_2 + 0x7c);
  return param_1;
}

struct C_00e05940 {
    undefined4 sub_00e05940(undefined4);
    int sub_0073f030(int);
};

int sub_00716170(...);
int sub_00a49bb0(...);
// @baa 0x00e05940
undefined4 C_00e05940::sub_00e05940(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e05940 *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0xb8);
  return uVar1;
}

struct A_00e05980 { virtual void sub_00e099f0(); char pad[16]; };

struct B_00e05980 { virtual void sub_00e099f0(); };

struct C_00e05980 : A_00e05980, B_00e05980 { virtual void sub_00e099f0(); C_00e05980(); };

C_00e05980::C_00e05980() {}

// @baa 0x00e05980
void C_00e05980::sub_00e099f0() {}

struct C_00e05c00 {
    undefined4 sub_00e05c00(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e05c00
undefined4 C_00e05c00::sub_00e05c00(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e05c00 *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0xb8);
  sub_00716170(param_2,param_1 + 0xbe);
  return uVar1;
}

struct A_00e05c40 { virtual void sub_00e09ac0(); char pad[16]; };

struct B_00e05c40 { virtual void sub_00e09ac0(); };

struct C_00e05c40 : A_00e05c40, B_00e05c40 { virtual void sub_00e09ac0(); C_00e05c40(); };

C_00e05c40::C_00e05c40() {}

// @baa 0x00e05c40
void C_00e05c40::sub_00e09ac0() {}

int sub_00e001b0(void);
// @baa 0x00e06020
undefined4 UChannelDownload::sub_00e06020(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e001b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_020e336c;
// @baa 0x00e06040
undefined4 * UChannelDownload::sub_00e06040(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e336c);
  sub_00e001b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_020e337c;
// @baa 0x00e06130
undefined4 * UChannelDownload::sub_00e06130(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e337c);
  sub_00e001b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e061c0 {
    undefined4 sub_00e061c0(byte);
};

int sub_00e00800(void);
// @baa 0x00e061c0
undefined4 C_00e061c0::sub_00e061c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e00800();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005722a0(void);
// @baa 0x00e06ec0
undefined4 UTexture2D::sub_00e06ec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005722a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00572130(void);
// @baa 0x00e06ee0
undefined4 UTexture2D::sub_00e06ee0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00572130();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e07e70 {
    undefined4 sub_00e07e70(undefined4, undefined4);
    int sub_00e07ac0(int, int, int, int, int);
};

int sub_00df60b0(...);
// @baa 0x00e07e70
undefined4 C_00e07e70::sub_00e07e70(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00e07e70 *)(this))->sub_00e07ac0(param_2, param_3, 0xffffffff, *(int *)(param_1 + 8) + -1, (int)(&sub_00df60b0));
  return 1;
}

// @baa 0x00e08a70
bool UChannelDownload::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct TConstSetBitIterator_00e09020 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e09020(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e09020& operator++();
};

TConstSetBitIterator_00e09020::TConstSetBitIterator_00e09020(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e09020
TConstSetBitIterator_00e09020& TConstSetBitIterator_00e09020::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e09070 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e09070(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e09070& operator++();
};

TConstSetBitIterator_00e09070::TConstSetBitIterator_00e09070(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e09070
TConstSetBitIterator_00e09070& TConstSetBitIterator_00e09070::operator++()
{
    It.Advance();
    return *this;
}

struct C_00e09610 {
    int sub_00e09610(int);
    int sub_00e05390(int, int);
};

// @baa 0x00e09610
int C_00e09610::sub_00e09610(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00e09610 *)(this))->sub_00e05390((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x48;
  }
  return 0;
}

struct TConstSetBitIterator_00e097f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e097f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e097f0& operator++();
};

TConstSetBitIterator_00e097f0::TConstSetBitIterator_00e097f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e097f0
TConstSetBitIterator_00e097f0& TConstSetBitIterator_00e097f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00e099f0 {
    undefined4 sub_00e099f0(byte);
};

int sub_00e05a50(void);
// @baa 0x00e099f0
undefined4 C_00e099f0::sub_00e099f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e05a50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e09ac0 {
    undefined4 sub_00e09ac0(byte);
};

int sub_00e05d10(void);
// @baa 0x00e09ac0
undefined4 C_00e09ac0::sub_00e09ac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e05d10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct Inner {
    void sub_00e06230();
};

struct Outer {
    char pad[0x84];
    Inner *m;
    void sub_00e0a090() { m->sub_00e06230(); }
};

// @baa 0x00e0a090
void sub_00e0a091() { ((Outer*)0)->sub_00e0a090(); }

int sub_006f7810(void);
extern undefined * g_020e3830;
// @baa 0x00e0b7a0
undefined4 * UPrimitiveComponent::sub_00e0b7a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_020e3830);
  return param_1;
}

// @baa 0x00e0b7c0
IMPLEMENT_CLASS_AT(UFluidInfluenceComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FluidInfluenceActor.cpp", 10);

// @baa 0x00e0b820
struct TConstSetBitIterator_00e0c270 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e0c270(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e0c270& operator++();
};

TConstSetBitIterator_00e0c270::TConstSetBitIterator_00e0c270(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e0c270
TConstSetBitIterator_00e0c270& TConstSetBitIterator_00e0c270::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e0c290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e0c290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e0c290& operator++();
};

TConstSetBitIterator_00e0c290::TConstSetBitIterator_00e0c290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e0c290
TConstSetBitIterator_00e0c290& TConstSetBitIterator_00e0c290::operator++()
{
    It.Advance();
    return *this;
}

struct C_00e0c2b0 {
    void sub_00e0c2b0();
    int sub_00e08c40(int);
};

// @baa 0x00e0c2b0
void C_00e0c2b0::sub_00e0c2b0(void)
{
    int param_1 = (int)this;
  ((C_00e0c2b0 *)((*(char **)((char *)this + 0x10))))->sub_00e08c40(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00e0c2d0 {
    void sub_00e0c2d0();
    int sub_009c1220(int);
};

// @baa 0x00e0c2d0
void C_00e0c2d0::sub_00e0c2d0(void)
{
    int param_1 = (int)this;
  ((C_00e0c2d0 *)((*(char **)((char *)this + 0x10))))->sub_009c1220(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_00e0c640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e0c640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e0c640& operator++();
};

TConstSetBitIterator_00e0c640::TConstSetBitIterator_00e0c640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e0c640
TConstSetBitIterator_00e0c640& TConstSetBitIterator_00e0c640::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e0c690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e0c690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e0c690& operator++();
};

TConstSetBitIterator_00e0c690::TConstSetBitIterator_00e0c690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e0c690
TConstSetBitIterator_00e0c690& TConstSetBitIterator_00e0c690::operator++()
{
    It.Advance();
    return *this;
}

struct C_00e0c8f0 {
    undefined4 sub_00e0c8f0(byte);
};

int sub_00ae5ed0(void);
// @baa 0x00e0c8f0
undefined4 C_00e0c8f0::sub_00e0c8f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ae5ed0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e0cb50 {
    undefined4 sub_00e0cb50(byte);
};

int sub_00e0acb0(void);
// @baa 0x00e0cb50
undefined4 C_00e0cb50::sub_00e0cb50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e0acb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00e0f8d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e0f8d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e0f8d0& operator++();
};

TConstSetBitIterator_00e0f8d0::TConstSetBitIterator_00e0f8d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e0f8d0
TConstSetBitIterator_00e0f8d0& TConstSetBitIterator_00e0f8d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e0f8f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e0f8f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e0f8f0& operator++();
};

TConstSetBitIterator_00e0f8f0::TConstSetBitIterator_00e0f8f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e0f8f0
TConstSetBitIterator_00e0f8f0& TConstSetBitIterator_00e0f8f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00e0fd00 {
    int sub_00e0fd00();
};

int sub_00e08f60(void);
// @baa 0x00e0fd00
int C_00e0fd00::sub_00e0fd00(void)
{
    int param_1 = (int)this;

  sub_00e08f60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00e0fd20 {
    int sub_00e0fd20();
};

int sub_00e08fc0(void);
// @baa 0x00e0fd20
int C_00e0fd20::sub_00e0fd20(void)
{
    int param_1 = (int)this;

  sub_00e08fc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
