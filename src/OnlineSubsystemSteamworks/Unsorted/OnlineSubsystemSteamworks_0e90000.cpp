// OnlineSubsystemSteamworks_0e90000.cpp: 27 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_00e8efb0();
// @baa 0x00e900c0
void sub_00e900c0(void) { sub_00e8efb0(); }

struct C { C* sub_00e92ac0(void); };

// @baa 0x00e92ac0
C* C::sub_00e92ac0(void) { return this; }

struct C_00e92ad0 { C_00e92ad0* sub_00e92ad0(void); };

// @baa 0x00e92ad0
C_00e92ad0* C_00e92ad0::sub_00e92ad0(void) { return this; }

int sub_005c7a20(void);
extern undefined * g_0211bfe0;
// @baa 0x00e93540
undefined4 * UObject::sub_00e93540(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0211bfe0);
  return param_1;
}

void sub_00e92ae0();
// @baa 0x00e93650
void sub_00e93650(void) { sub_00e92ae0(); }

struct C_00e93660 { C_00e93660* sub_00e93660(void); };

// @baa 0x00e93660
C_00e93660* C_00e93660::sub_00e93660(void) { return this; }

struct C_00e93670 { C_00e93670* sub_00e93670(void); };

// @baa 0x00e93670
C_00e93670* C_00e93670::sub_00e93670(void) { return this; }

struct C_00e952c0 {
    int sub_00e952c0();
};

// @baa 0x00e952c0
int C_00e952c0::sub_00e952c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e952e0 {
    int sub_00e952e0();
};

// @baa 0x00e952e0
int C_00e952e0::sub_00e952e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x28;
}

struct C_view {
    int sub_0054d220(int, int);
};

// @baa 0x00e952f0
int UPackageMap::sub_00e952f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_0054d220((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_00e95320 { void sub_00e931c0(int); C_00e95320 *sub_00e95320(int); };

// @baa 0x00e95320
C_00e95320 *C_00e95320::sub_00e95320(int a) { sub_00e931c0(a); return this; }

struct C_00e954b0 {
    int sub_00e954b0(int, undefined4);
    int sub_00e92d80(int, int, int);
};

// @baa 0x00e954b0
int C_00e954b0::sub_00e954b0(int param_2, undefined4 param_3)
{
    int * param_1 = (int *)this;
  ((C_00e954b0 *)(this))->sub_00e92d80((int)(&param_2), param_2, param_3);
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

struct TConstSetBitIterator_00e95800 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e95800(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e95800& operator++();
};

TConstSetBitIterator_00e95800::TConstSetBitIterator_00e95800(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e95800
TConstSetBitIterator_00e95800& TConstSetBitIterator_00e95800::operator++()
{
    It.Advance();
    return *this;
}

struct Inner { void sub_00e95210(int param_1); };

struct Outer {
    char _pad[4];
    Inner m;
    void sub_00e95870();
};

// @baa 0x00e95870
void Outer::sub_00e95870() {
    m.sub_00e95210(0);
}

struct M_00e9a1b0 { void sub_005dc7d0(); };

struct C_00e9a1b0 { char pad[16]; M_00e9a1b0 m; void sub_00e9a1b0(); };

// @baa 0x00e9a1b0
void C_00e9a1b0::sub_00e9a1b0() { m.sub_005dc7d0(); }

struct C_00e9aa60 {
    undefined4 sub_00e9aa60(byte);
};

int sub_0053dfa0(...);
int sub_00e9a8c0(void);
// @baa 0x00e9aa60
undefined4 C_00e9aa60::sub_00e9aa60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e9a8c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00e9a9a0();
// @baa 0x00e9aa80
void sub_00e9aa80(void) { sub_00e9a9a0(); }

// @baa 0x00e9bb00
void sub_00e9bb00(void) {  }

// @baa 0x00e9bb10
void sub_00e9bb10(void) {  }

// @baa 0x00e9bb20
void sub_00e9bb20(void) {  }

// @baa 0x00e9bb30
void sub_00e9bb30(void) {  }

// @baa 0x00e9bb40
int sub_00e9bb40(int a0) { return a0; }

// @baa 0x00e9bb50
undefined2 sub_00e9bb50(void)
{
  return 0x73;
}

struct C_00e9bb60 {
    void sub_00e9bb60(int, undefined4);
};

// @baa 0x00e9bb60
void C_00e9bb60::sub_00e9bb60(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + param_2 * 4) = param_3;
  return;
}

// @baa 0x00e9bb70
void sub_00e9bb70(void) {  }

// @baa 0x00e9bb80
void sub_00e9bb80(void) {  }

// @baa 0x00e9bb90
undefined4 sub_00e9bb90(undefined4 param_1)
{
  switch(param_1) {
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
    return 4;
  case 5:
    return 5;
  default:
    return 0;
  }
}
