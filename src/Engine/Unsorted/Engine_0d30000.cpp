// Engine_0d30000.cpp: 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_00d31470(byte);
};

int sub_0053dfa0(...);
int sub_00d23580(void);
// @baa 0x00d31470
undefined4 C::sub_00d31470(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d23580();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_020a7d70;
// @baa 0x00d35190
undefined4 * UObject::sub_00d35190(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020a7d70);
  return param_1;
}

// @baa 0x00d351b0
IMPLEMENT_CLASS_AT(UPrefab, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPrefab.cpp", 10);

// @baa 0x00d35230
int sub_005eac10(...);
int sub_00789620(...);
int sub_00d29890(...);
// @baa 0x00d35250
void sub_00d35250(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = sub_00789620(param_1);
  if (iVar1 != 0) {
    iVar2 = sub_00d29890(param_2);
    if (*(int *)(iVar2 + 0x1b8) != 0) {
      uVar3 = sub_005eac10(*(undefined4 *)(iVar2 + 0x1b8),*(undefined4 *)(iVar2 + 0x1b8),iVar1,
                           L"None",0xffffffff,0xffffffff,0,0);
      *(undefined4 *)(iVar1 + 0x1b8) = uVar3;
      *(undefined4 *)(*(int *)(iVar1 + 0x1bc) + 0x1a4) = uVar3;
      return;
    }
    *(undefined4 *)(iVar1 + 0x1b8) = 0;
    *(undefined4 *)(*(int *)(iVar1 + 0x1bc) + 0x1a4) = 0;
  }
  return;
}

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_00d38de0();
};

// @baa 0x00d38de0
S16* S16::sub_00d38de0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct C_00d39330 {
    int sub_00d39330();
};

// @baa 0x00d39330
int C_00d39330::sub_00d39330(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d39350 {
    int sub_00d39350();
};

// @baa 0x00d39350
int C_00d39350::sub_00d39350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d39360 {
    undefined4 sub_00d39360(byte);
    int sub_0040fcc0();
};

// @baa 0x00d39360
undefined4 C_00d39360::sub_00d39360(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d39360 *)(((char *)this + 0xc)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_020a7c58;
// @baa 0x00d39390
undefined4 * UObject::sub_00d39390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020a7c58);
  return param_1;
}

void sub_00d38f40();
// @baa 0x00d393b0
void sub_00d393b0(void) { sub_00d38f40(); }

extern undefined * g_020a7e80;
// @baa 0x00d393c0
undefined4 * UObject::sub_00d393c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020a7e80);
  return param_1;
}

// @baa 0x00d393e0
IMPLEMENT_CLASS_AT(UOnlineStatsWrite, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnOnlineStats.cpp", 9);

// @baa 0x00d39470
// @baa 0x00d39f50
IMPLEMENT_CLASS_AT(USelection, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSelection.cpp", 8);

// @baa 0x00d39fd0
struct C_view {
    int sub_005dfd20(int);
};

int sub_006c4920(...);
// @baa 0x00d39ff0
void USelection::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view *)(this))->sub_005dfd20(param_2);
  sub_006c4920(param_2,param_1 + 0x30);
  return;
}

struct C_00d3b320 {
    undefined4 sub_00d3b320(byte);
};

int sub_00d3b290(void);
// @baa 0x00d3b320
undefined4 C_00d3b320::sub_00d3b320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d3b290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
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

struct TConstSetBitIterator_00d3c5d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d3c5d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d3c5d0& operator++();
};

TConstSetBitIterator_00d3c5d0::TConstSetBitIterator_00d3c5d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d3c5d0
TConstSetBitIterator_00d3c5d0& TConstSetBitIterator_00d3c5d0::operator++()
{
    It.Advance();
    return *this;
}

void sub_00d3c1c0();
// @baa 0x00d3c620
void sub_00d3c620(void) { sub_00d3c1c0(); }
