// Engine_09c0000.cpp: 57 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_view {
    int sub_009bd1f0(int, int);
};

// @baa 0x009c0c20
int UState::sub_009c0c20(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_009bd1f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

struct C_view_009c0c50 {
    int sub_009bd2b0(int, int);
};

// @baa 0x009c0c50
int UState::sub_009c0c50(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_009c0c50 *)(this))->sub_009bd2b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
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

struct TConstSetBitIterator_009c1400 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1400(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1400& operator++();
};

TConstSetBitIterator_009c1400::TConstSetBitIterator_009c1400(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1400
TConstSetBitIterator_009c1400& TConstSetBitIterator_009c1400::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c1420 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1420(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1420& operator++();
};

TConstSetBitIterator_009c1420::TConstSetBitIterator_009c1420(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1420
TConstSetBitIterator_009c1420& TConstSetBitIterator_009c1420::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c1470 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1470(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1470& operator++();
};

TConstSetBitIterator_009c1470::TConstSetBitIterator_009c1470(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1470
TConstSetBitIterator_009c1470& TConstSetBitIterator_009c1470::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c1490 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1490(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1490& operator++();
};

TConstSetBitIterator_009c1490::TConstSetBitIterator_009c1490(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1490
TConstSetBitIterator_009c1490& TConstSetBitIterator_009c1490::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c14b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c14b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c14b0& operator++();
};

TConstSetBitIterator_009c14b0::TConstSetBitIterator_009c14b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c14b0
TConstSetBitIterator_009c14b0& TConstSetBitIterator_009c14b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c15f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c15f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c15f0& operator++();
};

TConstSetBitIterator_009c15f0::TConstSetBitIterator_009c15f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c15f0
TConstSetBitIterator_009c15f0& TConstSetBitIterator_009c15f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c1640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1640& operator++();
};

TConstSetBitIterator_009c1640::TConstSetBitIterator_009c1640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1640
TConstSetBitIterator_009c1640& TConstSetBitIterator_009c1640::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c1690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1690& operator++();
};

TConstSetBitIterator_009c1690::TConstSetBitIterator_009c1690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1690
TConstSetBitIterator_009c1690& TConstSetBitIterator_009c1690::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c16e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c16e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c16e0& operator++();
};

TConstSetBitIterator_009c16e0::TConstSetBitIterator_009c16e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c16e0
TConstSetBitIterator_009c16e0& TConstSetBitIterator_009c16e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c1700 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1700(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1700& operator++();
};

TConstSetBitIterator_009c1700::TConstSetBitIterator_009c1700(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1700
TConstSetBitIterator_009c1700& TConstSetBitIterator_009c1700::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c1720 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1720(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1720& operator++();
};

TConstSetBitIterator_009c1720::TConstSetBitIterator_009c1720(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1720
TConstSetBitIterator_009c1720& TConstSetBitIterator_009c1720::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c1740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1740& operator++();
};

TConstSetBitIterator_009c1740::TConstSetBitIterator_009c1740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1740
TConstSetBitIterator_009c1740& TConstSetBitIterator_009c1740::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c1760 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1760(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1760& operator++();
};

TConstSetBitIterator_009c1760::TConstSetBitIterator_009c1760(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1760
TConstSetBitIterator_009c1760& TConstSetBitIterator_009c1760::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c17b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c17b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c17b0& operator++();
};

TConstSetBitIterator_009c17b0::TConstSetBitIterator_009c17b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c17b0
TConstSetBitIterator_009c17b0& TConstSetBitIterator_009c17b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c1800 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1800(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1800& operator++();
};

TConstSetBitIterator_009c1800::TConstSetBitIterator_009c1800(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1800
TConstSetBitIterator_009c1800& TConstSetBitIterator_009c1800::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c1850 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c1850(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c1850& operator++();
};

TConstSetBitIterator_009c1850::TConstSetBitIterator_009c1850(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c1850
TConstSetBitIterator_009c1850& TConstSetBitIterator_009c1850::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x009c19f0
IMPLEMENT_CLASS_AT(ULevelStreaming, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnWorld.cpp", 5468);

// @baa 0x009c1a70
int sub_005c7a20(void);
extern undefined * g_01f9a4f8;
// @baa 0x009c1aa0
undefined4 * UObject::sub_009c1aa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f9a4f8);
  return param_1;
}

extern undefined * g_01f9a610;
// @baa 0x009c1ac0
undefined4 * UObject::sub_009c1ac0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f9a610);
  return param_1;
}

// @baa 0x009c1ae0
IMPLEMENT_CLASS_AT(ULevelStreamingDistance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnWorld.cpp", 5470);

// @baa 0x009c1b40
extern undefined * g_01f9a728;
// @baa 0x009c1b70
undefined4 * UObject::sub_009c1b70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f9a728);
  return param_1;
}

// @baa 0x009c1b90
IMPLEMENT_CLASS_AT(ULevelStreamingKismet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnWorld.cpp", 5469);

// @baa 0x009c1bf0
extern undefined * g_01f9a840;
// @baa 0x009c1c20
undefined4 * UObject::sub_009c1c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f9a840);
  return param_1;
}

// @baa 0x009c1c40
int ULevelStreamingPersistent::vf_10c(int a0) { return 1; }

// @baa 0x009c1c50
int ULevelStreamingPersistent::vf_110(int a0) { return 1; }

// @baa 0x009c1c60
IMPLEMENT_CLASS_AT(ULevelStreamingPersistent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnWorld.cpp", 5471);

// @baa 0x009c1cc0
struct C {
    undefined4 sub_009c1cf0(byte);
};

int sub_0053dfa0(...);
int sub_009befa0(void);
// @baa 0x009c1cf0
undefined4 C::sub_009c1cf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009befa0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_009c3c90 {
    int sub_009c2e00();
    int sub_009c2d90();
};

// @baa 0x009c3c90
void ULineBatchComponent::sub_009c3c90(int param_2)
{
    int param_1 = (int)this;
  if (param_2 != *(int *)(param_1 + 0x48)) {
    if (*(int *)(param_1 + 0x48) != 0) {
      ((C_view_009c3c90 *)(this))->sub_009c2e00();
    }
    *(int *)(param_1 + 0x48) = param_2;
    if (param_2 != 0) {
      ((C_view_009c3c90 *)(this))->sub_009c2d90();
    }
  }
  return;
}

int sub_009c8ed0(void);
extern undefined4 g_026760b0;
// @baa 0x009c8f60
undefined4 sub_009c8f60(void)
{
  int iVar1;
  
  iVar1 = sub_009c8ed0();
  if ((iVar1 != 0) && (g_026760b0 == 0)) {
    return 1;
  }
  return 0;
}

void sub_009c7430();
// @baa 0x009c9c10
void sub_009c9c10(void) { sub_009c7430(); }

struct C_009c9c60 {
    int sub_009c9c60();
};

int sub_009c14d0(void);
// @baa 0x009c9c60
int C_009c9c60::sub_009c9c60(void)
{
    int param_1 = (int)this;

  sub_009c14d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009c9c80 {
    int sub_009c9c80();
};

int sub_009c1530(void);
// @baa 0x009c9c80
int C_009c9c80::sub_009c9c80(void)
{
    int param_1 = (int)this;

  sub_009c1530();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009c9ca0 {
    int sub_009c9ca0();
};

int sub_009c1590(void);
// @baa 0x009c9ca0
int C_009c9ca0::sub_009c9ca0(void)
{
    int param_1 = (int)this;

  sub_009c1590();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005e1960(...);
int sub_009b04f0(void);
int sub_009c7e30(...);
extern undefined4 g_026667a8;
extern undefined4 g_026b62b4;
// @baa 0x009c9cc0
void sub_009c9cc0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026b62b4 == 0) {
    g_026b62b4 = sub_009c7e30(L"Engine");
    sub_009b04f0();
  }
  sub_005e1960(g_026b62b4,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

void sub_009c7030();
// @baa 0x009ca3e0
void sub_009ca3e0(void) { sub_009c7030(); }

void sub_009c70a0();
// @baa 0x009ca3f0
void sub_009ca3f0(void) { sub_009c70a0(); }

struct C_009cdf20 { void sub_006d2eb0(int); void sub_009cdf20(); };

// @baa 0x009cdf20
void C_009cdf20::sub_009cdf20() { sub_006d2eb0(0); }

struct C_009cdf30 {
    int sub_009cdf30();
};

// @baa 0x009cdf30
int C_009cdf30::sub_009cdf30(void)
{
    int param_1 = (int)this;

  sub_009c14d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009cdf50 {
    int sub_009cdf50();
};

// @baa 0x009cdf50
int C_009cdf50::sub_009cdf50(void)
{
    int param_1 = (int)this;

  sub_009c1530();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009cdf70 {
    int sub_009cdf70();
};

// @baa 0x009cdf70
int C_009cdf70::sub_009cdf70(void)
{
    int param_1 = (int)this;

  sub_009c1590();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct M_009ce630 { void sub_007c92c0(); };

struct C_009ce630 { char pad[4]; M_009ce630 m; void sub_009ce630(); };

// @baa 0x009ce630
void C_009ce630::sub_009ce630() { m.sub_007c92c0(); }

// @baa 0x009ce640
void sub_009ce640(void) { sub_009c7030(); }

// @baa 0x009ce650
void sub_009ce650(void) { sub_009c70a0(); }

void sub_009c7110();
// @baa 0x009ce660
void sub_009ce660(void) { sub_009c7110(); }

struct C_009ce940 {
    void sub_009ce940(int);
};

int sub_009cdd10(void);
// @baa 0x009ce940
void C_009ce940::sub_009ce940(int param_2)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    if ((((param_1[0x13] == 0) || (param_2 == 0)) && (param_1[0x16] = param_2, param_2 == 0)) &&
       (param_1[0x13] != 0)) {
      sub_009cdd10();
    }
  }
  return;
}

struct C_009cf630 {
    uint sub_009cf630();
};

// @baa 0x009cf630
uint C_009cf630::sub_009cf630(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x4c) >> 1 & 1;
}

// @baa 0x009cf640
int sub_009cf640(void) { return 1690; }

struct A_009cf650 { virtual void sub_009d41a0(); char pad[144]; };

struct B_009cf650 { virtual void sub_009d41a0(); };

struct C_009cf650 : A_009cf650, B_009cf650 { virtual void sub_009d41a0(); C_009cf650(); };

C_009cf650::C_009cf650() {}

// @baa 0x009cf650
void C_009cf650::sub_009d41a0() {}

struct C_009cf660 {
    int sub_009cf660();
};

// @baa 0x009cf660
int C_009cf660::sub_009cf660(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct C_009cf670 {
    int sub_009cf670();
};

// @baa 0x009cf670
int C_009cf670::sub_009cf670(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0x1b0;
}

struct Sub
{
    void sub_009bf3a0();
};

struct C_009c1d10
{
    INT pad_00;
    Sub* Object;

    INT sub_009c1d10();
};

// @baa 0x009c1d10
INT C_009c1d10::sub_009c1d10()
{
    Object->sub_009bf3a0();
    return 8;
}
