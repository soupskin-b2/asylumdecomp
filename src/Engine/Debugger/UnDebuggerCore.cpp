// UnDebuggerCore.cpp (part 1 of 3): 290 functions
// Placed here by: neighbours 142, class 141, callers 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_007dffb0(int);
};

// @baa 0x007dffb0
int C::sub_007dffb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007dffc0 {
    int sub_007dffc0();
};

// @baa 0x007dffc0
int C_007dffc0::sub_007dffc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dffe0 {
    int sub_007dffe0();
};

// @baa 0x007dffe0
int C_007dffe0::sub_007dffe0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007dfff0 {
    int sub_007dfff0(int);
};

// @baa 0x007dfff0
int C_007dfff0::sub_007dfff0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007e0000 {
    int sub_007e0000(int);
};

// @baa 0x007e0000
int C_007e0000::sub_007e0000(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007e0010 {
    int sub_007e0010(int);
};

// @baa 0x007e0010
int C_007e0010::sub_007e0010(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007e0020 {
    int sub_007e0020(int);
};

// @baa 0x007e0020
int C_007e0020::sub_007e0020(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007e00a0 {
    int sub_007e00a0(int);
};

// @baa 0x007e00a0
int C_007e00a0::sub_007e00a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_007e00c0 {
    int sub_007e00c0();
};

// @baa 0x007e00c0
int C_007e00c0::sub_007e00c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007e00e0 {
    int sub_007e00e0();
};

// @baa 0x007e00e0
int C_007e00e0::sub_007e00e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x44;
}

struct C_007e0100 {
    int sub_007e0100();
};

// @baa 0x007e0100
int C_007e0100::sub_007e0100(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007e0120 {
    int sub_007e0120();
};

// @baa 0x007e0120
int C_007e0120::sub_007e0120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_view {
    int sub_007dfec0(int, int);
};

// @baa 0x007e4860
int UNetPendingLevel::sub_007e4860(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_007dfec0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_007e4890 {
    int sub_007e4890();
};

// @baa 0x007e4890
int C_007e4890::sub_007e4890(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007e48b0 {
    int sub_007e48b0();
};

// @baa 0x007e48b0
int C_007e48b0::sub_007e48b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

extern TArray<int> g_026a1ca4;
struct C_007e48c0 {
    int sub_007e48c0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e48c0
int C_007e48c0::sub_007e48c0()
{
    return g_026a1ca4(Index);
}

struct C_007e4920 {
    int sub_007e4920(int);
};

// @baa 0x007e4920
int C_007e4920::sub_007e4920(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_007e4940 {
    int sub_007e4940();
};

// @baa 0x007e4940
int C_007e4940::sub_007e4940(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007e4960 {
    int sub_007e4960();
};

// @baa 0x007e4960
int C_007e4960::sub_007e4960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x44;
}

struct C_007e4980 {
    int sub_007e4980();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4980
int C_007e4980::sub_007e4980()
{
    return g_026a1ca4(Index);
}

struct C_007e49e0 {
    int sub_007e49e0();
};

// @baa 0x007e49e0
int C_007e49e0::sub_007e49e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007e4a00 {
    int sub_007e4a00();
};

// @baa 0x007e4a00
int C_007e4a00::sub_007e4a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_007e4a10 {
    int sub_007e4a10();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4a10
int C_007e4a10::sub_007e4a10()
{
    return g_026a1ca4(Index);
}

struct C_007e4a70 {
    int sub_007e4a70();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007e4a70
int C_007e4a70::sub_007e4a70()
{
    return g_026a1ca4(Index);
}

struct C_007e4ad0 {
    int sub_007e4ad0(int);
};

// @baa 0x007e4ad0
int C_007e4ad0::sub_007e4ad0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_007e4ae0 {
    int sub_007e4ae0();
};

// @baa 0x007e4ae0
int C_007e4ae0::sub_007e4ae0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007e4b00 {
    int sub_007e4b00();
};

// @baa 0x007e4b00
int C_007e4b00::sub_007e4b00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007e4b20 {
    int sub_007e4b20();
};

// @baa 0x007e4b20
int C_007e4b20::sub_007e4b20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007eaeb0 {
    undefined4 sub_007eaeb0(byte);
};

int sub_0053dfa0(...);
int sub_007e4cb0(void);
// @baa 0x007eaeb0
undefined4 C_007eaeb0::sub_007eaeb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007e4cb0();
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

struct TConstSetBitIterator_007eb360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007eb360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007eb360& operator++();
};

TConstSetBitIterator_007eb360::TConstSetBitIterator_007eb360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007eb360
TConstSetBitIterator_007eb360& TConstSetBitIterator_007eb360::operator++()
{
    It.Advance();
    return *this;
}

struct C_007eb380 {
    undefined4 * sub_007eb380(undefined4 *);
    int sub_007e5080(int);
};

// @baa 0x007eb380
undefined4 * C_007eb380::sub_007eb380(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_007eb380 *)(((char *)this + 4)))->sub_007e5080(param_2[1]);
  return param_1;
}

struct C_007eb490 {
    undefined4 * sub_007eb490(undefined4 *);
    int sub_007e5080(int);
};

// @baa 0x007eb490
undefined4 * C_007eb490::sub_007eb490(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_007eb490 *)(((char *)this + 4)))->sub_007e5080(param_2[1]);
  param_1[0xf] = 0xffffffff;
  return param_1;
}

struct TConstSetBitIterator_007eb4c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007eb4c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007eb4c0& operator++();
};

TConstSetBitIterator_007eb4c0::TConstSetBitIterator_007eb4c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007eb4c0
TConstSetBitIterator_007eb4c0& TConstSetBitIterator_007eb4c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007eb4e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007eb4e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007eb4e0& operator++();
};

TConstSetBitIterator_007eb4e0::TConstSetBitIterator_007eb4e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007eb4e0
TConstSetBitIterator_007eb4e0& TConstSetBitIterator_007eb4e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_007eb580 {
    undefined4 * sub_007eb580(int *);
    int sub_007e5150(int);
};

// @baa 0x007eb580
undefined4 * C_007eb580::sub_007eb580(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  param_1[4] = puVar1[4];
  param_1[5] = puVar1[5];
  ((C_007eb580 *)(((char *)this + 0x18)))->sub_007e5150(param_2[1]);
  return param_1;
}

struct C_007eb6a0 {
    undefined4 * sub_007eb6a0(int *);
    int sub_007e5150(int);
};

// @baa 0x007eb6a0
undefined4 * C_007eb6a0::sub_007eb6a0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  param_1[4] = puVar1[4];
  param_1[5] = puVar1[5];
  ((C_007eb6a0 *)(((char *)this + 0x18)))->sub_007e5150(param_2[1]);
  param_1[9] = 0xffffffff;
  return param_1;
}

struct TConstSetBitIterator_007eb6f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007eb6f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007eb6f0& operator++();
};

TConstSetBitIterator_007eb6f0::TConstSetBitIterator_007eb6f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007eb6f0
TConstSetBitIterator_007eb6f0& TConstSetBitIterator_007eb6f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007eb710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007eb710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007eb710& operator++();
};

TConstSetBitIterator_007eb710::TConstSetBitIterator_007eb710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007eb710
TConstSetBitIterator_007eb710& TConstSetBitIterator_007eb710::operator++()
{
    It.Advance();
    return *this;
}

struct C_007eb730 {
    undefined4 sub_007eb730(byte);
    int sub_007e1760();
};

// @baa 0x007eb730
undefined4 C_007eb730::sub_007eb730(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007eb730 *)(((char *)this + 4)))->sub_007e1760();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_007eb960 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007eb960(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007eb960& operator++();
};

TConstSetBitIterator_007eb960::TConstSetBitIterator_007eb960(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007eb960
TConstSetBitIterator_007eb960& TConstSetBitIterator_007eb960::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ebbd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ebbd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ebbd0& operator++();
};

TConstSetBitIterator_007ebbd0::TConstSetBitIterator_007ebbd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ebbd0
TConstSetBitIterator_007ebbd0& TConstSetBitIterator_007ebbd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ebc20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ebc20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ebc20& operator++();
};

TConstSetBitIterator_007ebc20::TConstSetBitIterator_007ebc20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ebc20
TConstSetBitIterator_007ebc20& TConstSetBitIterator_007ebc20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ebc70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ebc70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ebc70& operator++();
};

TConstSetBitIterator_007ebc70::TConstSetBitIterator_007ebc70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ebc70
TConstSetBitIterator_007ebc70& TConstSetBitIterator_007ebc70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ebcc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ebcc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ebcc0& operator++();
};

TConstSetBitIterator_007ebcc0::TConstSetBitIterator_007ebcc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ebcc0
TConstSetBitIterator_007ebcc0& TConstSetBitIterator_007ebcc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ebd10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ebd10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ebd10& operator++();
};

TConstSetBitIterator_007ebd10::TConstSetBitIterator_007ebd10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ebd10
TConstSetBitIterator_007ebd10& TConstSetBitIterator_007ebd10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ebd60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ebd60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ebd60& operator++();
};

TConstSetBitIterator_007ebd60::TConstSetBitIterator_007ebd60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ebd60
TConstSetBitIterator_007ebd60& TConstSetBitIterator_007ebd60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ebdb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ebdb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ebdb0& operator++();
};

TConstSetBitIterator_007ebdb0::TConstSetBitIterator_007ebdb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ebdb0
TConstSetBitIterator_007ebdb0& TConstSetBitIterator_007ebdb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007ebe00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007ebe00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007ebe00& operator++();
};

TConstSetBitIterator_007ebe00::TConstSetBitIterator_007ebe00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007ebe00
TConstSetBitIterator_007ebe00& TConstSetBitIterator_007ebe00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007f01a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f01a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f01a0& operator++();
};

TConstSetBitIterator_007f01a0::TConstSetBitIterator_007f01a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f01a0
TConstSetBitIterator_007f01a0& TConstSetBitIterator_007f01a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007f03a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f03a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f03a0& operator++();
};

TConstSetBitIterator_007f03a0::TConstSetBitIterator_007f03a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f03a0
TConstSetBitIterator_007f03a0& TConstSetBitIterator_007f03a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007f03f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f03f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f03f0& operator++();
};

TConstSetBitIterator_007f03f0::TConstSetBitIterator_007f03f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f03f0
TConstSetBitIterator_007f03f0& TConstSetBitIterator_007f03f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007f0590 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f0590(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f0590& operator++();
};

TConstSetBitIterator_007f0590::TConstSetBitIterator_007f0590(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f0590
TConstSetBitIterator_007f0590& TConstSetBitIterator_007f0590::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007f05e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f05e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f05e0& operator++();
};

TConstSetBitIterator_007f05e0::TConstSetBitIterator_007f05e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f05e0
TConstSetBitIterator_007f05e0& TConstSetBitIterator_007f05e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007f2930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f2930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f2930& operator++();
};

TConstSetBitIterator_007f2930::TConstSetBitIterator_007f2930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f2930
TConstSetBitIterator_007f2930& TConstSetBitIterator_007f2930::operator++()
{
    It.Advance();
    return *this;
}

struct C_007f2c60 {
    int sub_007f2c60();
};

int sub_007ebe50(void);
// @baa 0x007f2c60
int C_007f2c60::sub_007f2c60(void)
{
    int param_1 = (int)this;

  sub_007ebe50();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f2c80 {
    int sub_007f2c80();
};

int sub_007ebeb0(void);
// @baa 0x007f2c80
int C_007f2c80::sub_007f2c80(void)
{
    int param_1 = (int)this;

  sub_007ebeb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f2ca0 {
    int sub_007f2ca0();
};

int sub_007ebf10(void);
// @baa 0x007f2ca0
int C_007f2ca0::sub_007f2ca0(void)
{
    int param_1 = (int)this;

  sub_007ebf10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f2cc0 {
    int sub_007f2cc0();
};

int sub_007ebf70(void);
// @baa 0x007f2cc0
int C_007f2cc0::sub_007f2cc0(void)
{
    int param_1 = (int)this;

  sub_007ebf70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f2ce0 {
    int sub_007f2ce0();
};

int sub_007ebfd0(void);
// @baa 0x007f2ce0
int C_007f2ce0::sub_007f2ce0(void)
{
    int param_1 = (int)this;

  sub_007ebfd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f2d00 {
    int sub_007f2d00();
};

int sub_007ec030(void);
// @baa 0x007f2d00
int C_007f2d00::sub_007f2d00(void)
{
    int param_1 = (int)this;

  sub_007ec030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_007f60a0 {
    int sub_007f25d0(int, int);
};

// @baa 0x007f60a0
void UNetPendingLevel::sub_007f60a0(void)
{
    int param_1 = (int)this;
  ((C_view_007f60a0 *)(this))->sub_007f25d0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_007f6170 {
    undefined4 sub_007f6170(undefined4, undefined4);
    int sub_007f2690(int, int);
};

// @baa 0x007f6170
undefined4 C_007f6170::sub_007f6170(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007f6170 *)(this))->sub_007f2690(param_2, param_3);
  return param_1;
}

struct C_007f6190 {
    void sub_007f6190();
    int sub_007f26f0(int, int);
};

// @baa 0x007f6190
void C_007f6190::sub_007f6190(void)
{
    int param_1 = (int)this;
  ((C_007f6190 *)(this))->sub_007f26f0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_007f62c0 {
    undefined4 sub_007f62c0(undefined4, undefined4);
    int sub_007f27b0(int, int);
};

// @baa 0x007f62c0
undefined4 C_007f62c0::sub_007f62c0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007f62c0 *)(this))->sub_007f27b0(param_2, param_3);
  return param_1;
}

struct C_007f62e0 {
    undefined4 sub_007f62e0(undefined4, undefined4);
    int sub_007f2810(int, int);
};

// @baa 0x007f62e0
undefined4 C_007f62e0::sub_007f62e0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007f62e0 *)(this))->sub_007f2810(param_2, param_3);
  return param_1;
}

struct TConstSetBitIterator_007f6400 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007f6400(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007f6400& operator++();
};

TConstSetBitIterator_007f6400::TConstSetBitIterator_007f6400(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007f6400
TConstSetBitIterator_007f6400& TConstSetBitIterator_007f6400::operator++()
{
    It.Advance();
    return *this;
}

struct C_007f6450 {
    undefined4 sub_007f6450(undefined4, undefined4);
    int sub_007f2980(int, int);
};

// @baa 0x007f6450
undefined4 C_007f6450::sub_007f6450(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_007f6450 *)(this))->sub_007f2980(param_2, param_3);
  return param_1;
}

struct C_007f6470 {
    int sub_007f6470(undefined4, undefined4);
    int sub_007f29e0(int, int);
};

// @baa 0x007f6470
int C_007f6470::sub_007f6470(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_007f6470 *)(this))->sub_007f29e0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_007f6490 {
    int sub_007f6490(undefined4, undefined4);
    int sub_007f2a60(int, int);
};

// @baa 0x007f6490
int C_007f6490::sub_007f6490(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_007f6490 *)(this))->sub_007f2a60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_007f64b0 {
    int sub_007f64b0(undefined4, undefined4);
    int sub_007f2ae0(int, int);
};

// @baa 0x007f64b0
int C_007f64b0::sub_007f64b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_007f64b0 *)(this))->sub_007f2ae0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_007f64d0 {
    int sub_007f64d0(undefined4, undefined4);
    int sub_007f2b60(int, int);
};

// @baa 0x007f64d0
int C_007f64d0::sub_007f64d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_007f64d0 *)(this))->sub_007f2b60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_007f64f0 {
    int sub_007f64f0(undefined4, undefined4);
    int sub_007f2be0(int, int);
};

// @baa 0x007f64f0
int C_007f64f0::sub_007f64f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_007f64f0 *)(this))->sub_007f2be0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_007f6510 {
    int sub_007f6510();
};

// @baa 0x007f6510
int C_007f6510::sub_007f6510(void)
{
    int param_1 = (int)this;

  sub_007ebe50();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6530 {
    int sub_007f6530();
};

// @baa 0x007f6530
int C_007f6530::sub_007f6530(void)
{
    int param_1 = (int)this;

  sub_007ebeb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6550 {
    int sub_007f6550();
};

// @baa 0x007f6550
int C_007f6550::sub_007f6550(void)
{
    int param_1 = (int)this;

  sub_007ebf10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6570 {
    int sub_007f6570();
};

// @baa 0x007f6570
int C_007f6570::sub_007f6570(void)
{
    int param_1 = (int)this;

  sub_007ebf70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6590 {
    int sub_007f6590();
};

// @baa 0x007f6590
int C_007f6590::sub_007f6590(void)
{
    int param_1 = (int)this;

  sub_007ebfd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f65b0 {
    int sub_007f65b0();
};

// @baa 0x007f65b0
int C_007f65b0::sub_007f65b0(void)
{
    int param_1 = (int)this;

  sub_007ec030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6650 {
    int sub_007f6650();
};

int sub_007ec090(void);
// @baa 0x007f6650
int C_007f6650::sub_007f6650(void)
{
    int param_1 = (int)this;

  sub_007ec090();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007f6670 {
    int sub_007f6670();
};

int sub_007ec0f0(void);
// @baa 0x007f6670
int C_007f6670::sub_007f6670(void)
{
    int param_1 = (int)this;

  sub_007ec0f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_007f56f0();
// @baa 0x007f6790
void sub_007f6790(void) { sub_007f56f0(); }

void sub_007f57e0();
// @baa 0x007f67a0
void sub_007f67a0(void) { sub_007f57e0(); }

void sub_007f5850();
// @baa 0x007f67b0
void sub_007f67b0(void) { sub_007f5850(); }

void sub_007f58c0();
// @baa 0x007f67c0
void sub_007f67c0(void) { sub_007f58c0(); }

void sub_007f5930();
// @baa 0x007f67d0
void sub_007f67d0(void) { sub_007f5930(); }

void sub_007f59a0();
// @baa 0x007f67e0
void sub_007f67e0(void) { sub_007f59a0(); }

void sub_007f5a10();
// @baa 0x007f67f0
void sub_007f67f0(void) { sub_007f5a10(); }

void sub_007f5a80();
// @baa 0x007f6800
void sub_007f6800(void) { sub_007f5a80(); }

void sub_007f5af0();
// @baa 0x007f6810
void sub_007f6810(void) { sub_007f5af0(); }

void sub_007f5b60();
// @baa 0x007f6820
void sub_007f6820(void) { sub_007f5b60(); }

void sub_007f5bd0();
// @baa 0x007f6830
void sub_007f6830(void) { sub_007f5bd0(); }

void sub_007f5d60();
// @baa 0x007f6880
void sub_007f6880(void) { sub_007f5d60(); }

void sub_007f5dd0();
// @baa 0x007f6890
void sub_007f6890(void) { sub_007f5dd0(); }

void sub_007f5ef0();
// @baa 0x007f68e0
void sub_007f68e0(void) { sub_007f5ef0(); }

void sub_007f5f60();
// @baa 0x007f68f0
void sub_007f68f0(void) { sub_007f5f60(); }

void sub_007f6030();
// @baa 0x007f69d0
void sub_007f69d0(void) { sub_007f6030(); }

// @baa 0x00e174a0
int __stdcall sub_00e174a0(int a0, int a1) { return 0; }

// @baa 0x00e17500
int UNetPendingLevel::vf_000(void) { return 1; }

extern undefined4 g_0266e840;
// @baa 0x00e17600
bool sub_00e17600(void)
{
  return g_0266e840 != 0;
}

// @baa 0x00e17610
int UNetPendingLevel::sub_00e17610(void) { return *(int*)((char*)this + 28); }

// @baa 0x00e17620
int UNetPendingLevel::sub_00e17620(void) { return *(int*)((char*)this + 44); }

// @baa 0x00e17630
int UNetPendingLevel::sub_00e17630(void) { return *(int*)((char*)this + 48); }

// @baa 0x00e17640
int UNetPendingLevel::sub_00e17640(void) { return *(int*)((char*)this + 24); }

// @baa 0x00e17680
int UNetPendingLevel::sub_00e17680(void) { return *(int*)((char*)this + 32); }

// @baa 0x00e17690
void UNetPendingLevel::sub_00e17690(int a0) { *(int*)((char*)this + 40) = a0; }

// @baa 0x00e176a0
int UNetPendingLevel::sub_00e176a0(void) { return *(int*)((char*)this + 40); }

// @baa 0x00e176b0
int UNetPendingLevel::sub_00e176b0(void) { return *(int*)((char*)this + 100); }

// @baa 0x00e176c0
int UNetPendingLevel::sub_00e176c0(void) { return *(int*)((char*)this + 88); }

// @baa 0x00e176d0
int UNetPendingLevel::sub_00e176d0(void) { return *(int*)((char*)this + 92); }

// @baa 0x00e176e0
int UNetPendingLevel::sub_00e176e0(void) { return *(int*)((char*)this + 96); }

// @baa 0x00e176f0
void UNetPendingLevel::sub_00e176f0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}

// @baa 0x00e17700
int UNetPendingLevel::sub_00e17700(void) { return *(int*)((char*)this + 4); }

// @baa 0x00e17710
int UNetPendingLevel::sub_00e17710(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e17720
int UNetPendingLevel::sub_00e17720(void) { return *(int*)((char*)this + 8); }

struct C_00e17730 {
    char pad[0x3c];
    BYTE b3c;
    int sub_00e17730();
};

// @baa 0x00e17730
int C_00e17730::sub_00e17730(void)
{
    return b3c;
}

// @baa 0x00e17810
int UNetPendingLevel::sub_00e17810(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e17820
int UNetPendingLevel::sub_00e17820(void) { return *(int*)((char*)this + 4); }

struct C_00e17830 { C_00e17830* sub_00e17830(void); };

// @baa 0x00e17830
C_00e17830* C_00e17830::sub_00e17830(void) { return this; }

// @baa 0x00e17840
void UNetPendingLevel::sub_00e17840(int a0) { *(int*)((char*)this + 4) = a0; }

// @baa 0x00e17870
void sub_00e17870(void) {  }

extern char g_020e9df0[];
struct C_00e17880 { C_00e17880* sub_00e17880(void); };

// @baa 0x00e17880
C_00e17880* C_00e17880::sub_00e17880(void) { *(int*)((char*)this + 0) = (int)g_020e9df0; return this; }

extern char g_01e729c0[];
// @baa 0x00e178b0
void UNetPendingLevel::sub_00e178b0(void) { *(int*)((char*)this + 0) = (int)g_01e729c0; }

// @baa 0x00e178c0
void UNetPendingLevel::sub_00e178c0(void) { *(int*)((char*)this + 28) = 1; }

struct V_00e178d0 {
    virtual void v0();
    virtual void v1();
    virtual void g(int a0);
};

struct O_00e178d0 { char pad[100]; V_00e178d0* p; void sub_00e178d0(int a0); };

// @baa 0x00e178d0
void O_00e178d0::sub_00e178d0(int a0) { p->g(a0); }

// @baa 0x00e17910
void __stdcall sub_00e17910(int a0, int a1) {  }

// @baa 0x00e17920
void sub_00e17920(void) {  }

// @baa 0x00e17940
void sub_00e17940(void) {  }

// @baa 0x00e17a70
void __stdcall sub_00e17a70(int a0, int a1) {  }

// @baa 0x00e17a80
int __stdcall sub_00e17a80(int a0, int a1, int a2) { return 0; }

extern char g_020e9f34[];
// @baa 0x00e17b60
void UNetPendingLevel::sub_00e17b60(void) { *(int*)((char*)this + 0) = (int)g_020e9f34; }

// @baa 0x00e17b70
void __stdcall sub_00e17b70(int a0) {  }

// @baa 0x00e17b80
int __stdcall sub_00e17b80(int a0) { return 0; }

// @baa 0x00e17b90
int __stdcall sub_00e17b90(int a0) { return 0; }

// @baa 0x00e17ba0
void sub_00e17ba0(void) {  }

// @baa 0x00e17bb0
void UNetPendingLevel::sub_00e17bb0(void) { *(int*)((char*)this + 0) = (int)g_020e9f34; }

// @baa 0x00e17d70
void UNetPendingLevel::sub_00e17d70(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}

// @baa 0x00e17dd0
wchar_t * sub_00e17dd0(int param_1)
{
  wchar_t *pwVar1;
  
  pwVar1 = L"True";
  if (param_1 == 0) {
    pwVar1 = L"False";
  }
  return pwVar1;
}

// @baa 0x00e17df0
void UNetPendingLevel::sub_00e17df0(undefined4 param_2)
{
    int param_1 = (int)this;

  (**(code **)(param_1 + 0xa4))(param_2);
  return;
}

// @baa 0x00e17e10
void UNetPendingLevel::sub_00e17e10(void)
{
    int param_1 = (int)this;

                    
                    
  (**(code **)(param_1 + 0x60))();
  return;
}

// @baa 0x00e17e20
void sub_00e17e20(void) {  }

// @baa 0x00e17e30
void UNetPendingLevel::sub_00e17e30(undefined4 param_2)
{
    int param_1 = (int)this;

  (**(code **)(param_1 + 0xac))(param_2);
  return;
}

// @baa 0x00e17e50
void UNetPendingLevel::sub_00e17e50(undefined4 param_2)
{
    int param_1 = (int)this;

  (**(code **)(param_1 + 0xb0))(param_2);
  return;
}

struct C_00e17e70 {
    void sub_00e17e70();
};

// @baa 0x00e17e70
void C_00e17e70::sub_00e17e70(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}

// @baa 0x00e181b0
void sub_00e181b0(void) {  }

// @baa 0x00e182a0
void sub_00e182a0(void) {  }

struct C_00e182b0 {
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    virtual void v7() = 0;
    virtual void v8() = 0;
    virtual void v9() = 0;
    virtual void v10() = 0;
    virtual void v11() = 0;
    virtual void v12() = 0;
    virtual void v13() = 0;
    virtual void v14() = 0;
    virtual void v15() = 0; // slot 16, offset 0x3c
    void sub_00e182b0(int a1);
};

// @baa 0x00e182b0
void C_00e182b0::sub_00e182b0(int a1) { v15(); }

// @baa 0x00e18380
int UNetPendingLevel::sub_00e18380(void) { return *(int*)((char*)this + 4); }

struct C_00e18390 { int a, b, c; C_00e18390(); };

// @baa 0x00e18390
C_00e18390::C_00e18390() : a(0), b(0), c(0) {}

// @baa 0x00e183a0
int UNetPendingLevel::sub_00e183a0(void) { return *(int*)((char*)this + 4); }

struct C_00e183b0 { int a, b, c; C_00e183b0(); };

// @baa 0x00e183b0
C_00e183b0::C_00e183b0() : a(0), b(0), c(0) {}

// @baa 0x00e183c0
int UNetPendingLevel::sub_00e183c0(void) { return *(int*)((char*)this + 4); }

struct C_00e183d0 { int a, b, c; C_00e183d0(); };

// @baa 0x00e183d0
C_00e183d0::C_00e183d0() : a(0), b(0), c(0) {}

struct C_00e183e0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00e183e0(INT Index);
};

// @baa 0x00e183e0
UBOOL C_00e183e0::sub_00e183e0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x00e18400
int UNetPendingLevel::sub_00e18400(void) { return *(int*)((char*)this + 4); }

struct C_00e18410 { int a, b, c; C_00e18410(); };

// @baa 0x00e18410
C_00e18410::C_00e18410() : a(0), b(0), c(0) {}

// @baa 0x00e18420
int UNetPendingLevel::sub_00e18420(void) { return *(int*)((char*)this + 4); }

// @baa 0x00e184a0
int UNetPendingLevel::sub_00e184a0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e184b0
int UNetPendingLevel::sub_00e184b0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e184c0
int UNetPendingLevel::sub_00e184c0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e184d0
int UNetPendingLevel::sub_00e184d0(void) { return *(int*)((char*)this + 0); }

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00e184e0
int UNetPendingLevel::sub_00e184e0(int param_2)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return ((param_1[1] - param_2) + -1) * 0x40 + *param_1;
}

// @baa 0x00e18520
int UNetPendingLevel::sub_00e18520(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

// @baa 0x00e18530
int UNetPendingLevel::sub_00e18530(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e18540
int UNetPendingLevel::sub_00e18540(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00e18550 { int a, b; C_00e18550(int, int); };

// @baa 0x00e18550
C_00e18550::C_00e18550(int x, int y) : a(x), b(y) {}

// @baa 0x00e18570
int UNetPendingLevel::sub_00e18570(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

// @baa 0x00e18580
int UNetPendingLevel::sub_00e18580(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e18590
int UNetPendingLevel::sub_00e18590(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e185a0
int UNetPendingLevel::sub_00e185a0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e185b0
int sub_00e185b0(int a0) { return *(int*)a0; }

// @baa 0x00e185c0
bool sub_00e185c0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00e185d0 { int a, b; C_00e185d0(const C_00e185d0 &); };

// @baa 0x00e185d0
C_00e185d0::C_00e185d0(const C_00e185d0 &o) : a(o.a), b(o.b) {}

// @baa 0x00e18630
int UNetPendingLevel::sub_00e18630(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e18640
int UNetPendingLevel::sub_00e18640(void) { return *(int*)((char*)this + 20); }

// @baa 0x00e18650
int UNetPendingLevel::sub_00e18650(void) { return *(int*)((char*)this + 20); }

int sub_00627f00(...);
// @baa 0x00e18660
void sub_00e18660(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct C_00e18840 { int a, b; C_00e18840(const C_00e18840 &); };

// @baa 0x00e18840
C_00e18840::C_00e18840(const C_00e18840 &o) : a(o.a), b(o.b) {}

// @baa 0x00e188b0
void UNetPendingLevel::sub_00e188b0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

// @baa 0x00e188f0
undefined4 * UNetPendingLevel::sub_00e188f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e729c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e189b0
undefined4 * UNetPendingLevel::sub_00e189b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e9f34);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e17bc0(void);
// @baa 0x00e189d0
undefined4 UNetPendingLevel::sub_00e189d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e17bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e18e00 {
    int sub_00e18e00(int);
};

// @baa 0x00e18e00
int C_00e18e00::sub_00e18e00(int param_2)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return (param_1[1] - param_2) + -1 + *param_1;
}

struct C_00e18e40{
int sub_00e18e40(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00e18e40
int C_00e18e40::sub_00e18e40(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct E { BYTE Bytes[32]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00e18ea0(INT Index);
};

// @baa 0x00e18ea0
E* S::sub_00e18ea0(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00e18ef0(INT Index);
};

// @baa 0x00e18ef0
FFaceFXElement* UFxRenderWidget::sub_00e18ef0(INT Index)
{
	return &BoneArray(Index);
}

struct E_00e18f40 { BYTE Bytes[64]; };

struct S_00e18f40 {
    TArray<E_00e18f40> Items; // 0x00
    E_00e18f40* sub_00e18f40(INT Index);
};

// @baa 0x00e18f40
E_00e18f40* S_00e18f40::sub_00e18f40(INT Index)
{
    return &Items(Index);
}

struct C_00e18f90 {
    int sub_00e18f90();
};

// @baa 0x00e18f90
int C_00e18f90::sub_00e18f90(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return param_1[1] * 0x40 + -0x40 + *param_1;
}

struct E_00e19070 { BYTE Bytes[12]; };

struct S_00e19070 {
    TArray<E_00e19070> Items; // 0x00
    E_00e19070* sub_00e19070(INT Index);
};

// @baa 0x00e19070
E_00e19070* S_00e19070::sub_00e19070(INT Index)
{
    return &Items(Index);
}

struct C_00e190c0 {
    int sub_00e190c0(int);
};

// @baa 0x00e190c0
int C_00e190c0::sub_00e190c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00e19140 {
    int sub_00e19140(int);
};

// @baa 0x00e19140
int C_00e19140::sub_00e19140(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e19150 {
    int sub_00e19150(int);
};

// @baa 0x00e19150
int C_00e19150::sub_00e19150(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00e19160
void __stdcall sub_00e19160(int a0, int a1) {  }

struct C_00e19170 { int sub_00e19170(void); };

// @baa 0x00e19170
int C_00e19170::sub_00e19170(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x00e19180
void sub_00e19180(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00e19190 {
    int sub_00e19190(int);
};

// @baa 0x00e19190
int C_00e19190::sub_00e19190(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00e191a0 {
    int sub_00e191a0(int);
};

// @baa 0x00e191a0
int C_00e191a0::sub_00e191a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e191b0 {
    int sub_00e191b0();
};

// @baa 0x00e191b0
int C_00e191b0::sub_00e191b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e191d0 {
    int sub_00e191d0();
};

// @baa 0x00e191d0
int C_00e191d0::sub_00e191d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e191f0 {
    int sub_00e191f0();
};

// @baa 0x00e191f0
int C_00e191f0::sub_00e191f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00e192a0 {
    void sub_00e192a0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630ea0(...);
// @baa 0x00e192a0
void C_00e192a0::sub_00e192a0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

#pragma pack(push, 1)
struct CRect { char _pad0[1]; };

#pragma pack(pop)
struct C_00e192d0 {
    void sub_00e192d0(int, int, int, int);
};

int sub_00630f20(...);
// @baa 0x00e192d0
void C_00e192d0::sub_00e192d0(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;

  sub_00630f20(this_,param_1,param_2,param_3,param_4);
  return;
}

struct C_00e192f0 {
    void sub_00e192f0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00e192f0
void C_00e192f0::sub_00e192f0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// @baa 0x00e19800
undefined4 UNetPendingLevel::sub_00e19800(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xc) == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + -4 + *(int *)(param_1 + 0x10) * 4);
}

// @baa 0x00e19840
undefined4 UNetPendingLevel::sub_00e19840(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18) == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + -4 + *(int *)(param_1 + 0x1c) * 4);
}

// @baa 0x00e19880
int UNetPendingLevel::sub_00e19880(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      sub_006311e0("GetTypedData()",
                   "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                   ,599,&g_01e3f3dc);
    }
    return *(int *)(param_1 + 0xc) * 0x40 + -0x40 + *(int *)(param_1 + 8);
  }
  return 0;
}

struct C_00e19910 {
    FString sub_00e19910();
};

// @baa 0x00e19910
FString C_00e19910::sub_00e19910()
{
    return TEXT("FDebuggerState");
}

struct C_00e19940 {
    FString sub_00e19940();
};

// @baa 0x00e19940
FString C_00e19940::sub_00e19940()
{
    return TEXT("DSBreakOnChange");
}

struct C_view_00e1a680 {
    int sub_00e1da90(int, int);
};

extern undefined * g_020ea178;
// @baa 0x00e1a680
undefined4 * UNetPendingLevel::sub_00e1a680(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00e1a680 *)(this))->sub_00e1da90(param_2, param_3);
  *param_1 = (undefined4)(&g_020ea178);
  return param_1;
}

int sub_00e19c40(void);
// @baa 0x00e1a6a0
void UNetPendingLevel::sub_00e1a6a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020ea178);
  sub_00e19c40();
  return;
}

struct C_view_00e1aac0 {
    int sub_00e1aa00(int);
};

extern undefined * g_020ea194;
// @baa 0x00e1aac0
undefined4 * UNetPendingLevel::sub_00e1aac0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00e1aac0 *)(this))->sub_00e1aa00(param_2);
  *param_1 = (undefined4)(&g_020ea194);
  *(undefined4 *)(param_1[4] + 0x20) = 0;
  return param_1;
}

// @baa 0x00e1aaf0
void UNetPendingLevel::sub_00e1aaf0(void) { *(int*)((char*)this + 0) = (int)g_020e9f34; }

// @baa 0x00e1ab00
undefined4 * UNetPendingLevel::sub_00e1ab00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e9f34);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e1ab20 {
    FString sub_00e1ab20();
};

// @baa 0x00e1ab20
FString C_00e1ab20::sub_00e1ab20()
{
    return TEXT("DSIdleState");
}

struct C_view_00e1ab50 {
    int sub_00e1aa00(int);
};

extern undefined * g_020ea1d8;
// @baa 0x00e1ab50
undefined4 * UNetPendingLevel::sub_00e1ab50(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  ((C_view_00e1ab50 *)(this))->sub_00e1aa00(param_2);
  iVar1 = param_1[4];
  uVar2 = 0;
  *param_1 = (undefined4)(&g_020ea1d8);
  param_1[5] = 0;
  if ((*(int *)(iVar1 + 0x18) != 0) && (*(int *)(iVar1 + 0x1c) != 0)) {
    uVar2 = 1;
  }
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  return param_1;
}

// @baa 0x00e1ab90
void UNetPendingLevel::sub_00e1ab90(void) { *(int*)((char*)this + 0) = (int)g_020e9f34; }

// @baa 0x00e1aba0
undefined4 * UNetPendingLevel::sub_00e1aba0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e9f34);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00e1abc0 {
    int sub_00e1aa00(int);
};

extern undefined * g_020ea204;
// @baa 0x00e1abc0
undefined4 * UNetPendingLevel::sub_00e1abc0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00e1abc0 *)(this))->sub_00e1aa00(param_2);
  *param_1 = (undefined4)(&g_020ea204);
  *(undefined4 *)(param_1[4] + 0x20) = 0;
  return param_1;
}

// @baa 0x00e1abf0
undefined4 * UNetPendingLevel::sub_00e1abf0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e9f34);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e1ac10 {
    FString sub_00e1ac10();
};

// @baa 0x00e1ac10
FString C_00e1ac10::sub_00e1ac10()
{
    return TEXT("DSWaitForCondition");
}

struct C_view_00e1ac40 {
    int sub_00e1aa00(int);
};

extern undefined * g_020ea258;
// @baa 0x00e1ac40
undefined4 * UNetPendingLevel::sub_00e1ac40(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00e1ac40 *)(this))->sub_00e1aa00(param_2);
  *(undefined4 *)(param_1[4] + 0x20) = 0;
  *param_1 = (undefined4)(&g_020ea258);
  return param_1;
}

// @baa 0x00e1ac70
void UNetPendingLevel::sub_00e1ac70(void) { *(int*)((char*)this + 0) = (int)g_020e9f34; }

// @baa 0x00e1ac80
undefined4 * UNetPendingLevel::sub_00e1ac80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e9f34);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00e1aca0 {
    int sub_00e1aa00(int);
};

extern undefined * g_020ea284;
// @baa 0x00e1aca0
undefined4 * UNetPendingLevel::sub_00e1aca0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00e1aca0 *)(this))->sub_00e1aa00(param_2);
  *(undefined4 *)(param_1[4] + 0x20) = 0;
  *param_1 = (undefined4)(&g_020ea284);
  return param_1;
}

// @baa 0x00e1acd0
void UNetPendingLevel::sub_00e1acd0(void) { *(int*)((char*)this + 0) = (int)g_020e9f34; }

// @baa 0x00e1ace0
undefined4 * UNetPendingLevel::sub_00e1ace0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e9f34);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e1ad00 {
    FString sub_00e1ad00();
};

// @baa 0x00e1ad00
FString C_00e1ad00::sub_00e1ad00()
{
    return TEXT("DSStepOut");
}

struct C_view_00e1ad30 {
    int sub_00e1aa00(int);
};

extern undefined * g_020ea2c4;
// @baa 0x00e1ad30
undefined4 * UNetPendingLevel::sub_00e1ad30(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00e1ad30 *)(this))->sub_00e1aa00(param_2);
  *(undefined4 *)(param_1[4] + 0x20) = 0;
  *param_1 = (undefined4)(&g_020ea2c4);
  return param_1;
}

// @baa 0x00e1ad60
void UNetPendingLevel::sub_00e1ad60(void) { *(int*)((char*)this + 0) = (int)g_020e9f34; }

// @baa 0x00e1ad70
undefined4 * UNetPendingLevel::sub_00e1ad70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e9f34);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e1ad90 {
    FString sub_00e1ad90();
};

// @baa 0x00e1ad90
FString C_00e1ad90::sub_00e1ad90()
{
    return TEXT("DSStepInto");
}

struct C_view_00e1adc0 {
    int sub_00e1aa00(int);
};

extern undefined * g_020ea308;
// @baa 0x00e1adc0
undefined4 * UNetPendingLevel::sub_00e1adc0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00e1adc0 *)(this))->sub_00e1aa00(param_3);
  *(undefined4 *)(param_1[4] + 0x20) = 0;
  *param_1 = (undefined4)(&g_020ea308);
  param_1[5] = param_2;
  return param_1;
}

// @baa 0x00e1adf0
void UNetPendingLevel::sub_00e1adf0(void) { *(int*)((char*)this + 0) = (int)g_020e9f34; }

// @baa 0x00e1ae00
undefined4 * UNetPendingLevel::sub_00e1ae00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e9f34);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e1ae20 {
    FString sub_00e1ae20();
};

// @baa 0x00e1ae20
FString C_00e1ae20::sub_00e1ae20()
{
    return TEXT("DSStepOverStack");
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00e1bda0 { void* Data; int Num; int Max; void sub_00e1bda0(); };

// @baa 0x00e1bda0
void C_00e1bda0::sub_00e1bda0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct M_00e1bf60 { void sub_0040fcc0(); };

struct C_00e1bf60 { char pad[4]; M_00e1bf60 m; void sub_00e1bf60(); };

// @baa 0x00e1bf60
void C_00e1bf60::sub_00e1bf60() { m.sub_0040fcc0(); }

// @baa 0x00e1bf70
int UNetPendingLevel::sub_00e1bf70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e1bfb0
int UNetPendingLevel::sub_00e1bfb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e1c030
int UNetPendingLevel::sub_00e1c030(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e1c040
int UNetPendingLevel::sub_00e1c040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct Inner { void sub_00e1bd10(int param_1); };

struct Outer {
    char _pad[4];
    Inner m;
    void sub_00e1c1f0();
};

// @baa 0x00e1c1f0
void Outer::sub_00e1c1f0() {
    m.sub_00e1bd10(0);
}

int sub_00e19bd0(void);
// @baa 0x00e1c3f0
undefined4 UNetPendingLevel::sub_00e1c3f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e19bd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e1c410
undefined4 UNetPendingLevel::sub_00e1c410(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e19c40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e1c4b0
undefined4 * UNetPendingLevel::sub_00e1c4b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020ea178);
  sub_00e19c40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e1ca70 {
    int sub_00e1ca70();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00e1ca70
int C_00e1ca70::sub_00e1ca70()
{
    return g_026a1ca4(Index);
}

// @baa 0x00e1cb70
int UNetPendingLevel::sub_00e1cb70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e1cbc0
int UNetPendingLevel::sub_00e1cbc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

// @baa 0x00e1cbd0
int UNetPendingLevel::sub_00e1cbd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C_view_00e1cbe0 {
    int sub_0040fcc0();
};

// @baa 0x00e1cbe0
undefined4 UNetPendingLevel::sub_00e1cbe0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00e1cbe0 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e1c550(void);
// @baa 0x00e1cc10
undefined4 UNetPendingLevel::sub_00e1cc10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e1c550();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e1ccb0
int UNetPendingLevel::sub_00e1ccb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct TConstSetBitIterator_00e1cde0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e1cde0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e1cde0& operator++();
};

TConstSetBitIterator_00e1cde0::TConstSetBitIterator_00e1cde0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e1cde0
TConstSetBitIterator_00e1cde0& TConstSetBitIterator_00e1cde0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e1ce00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e1ce00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e1ce00& operator++();
};

TConstSetBitIterator_00e1ce00::TConstSetBitIterator_00e1ce00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e1ce00
TConstSetBitIterator_00e1ce00& TConstSetBitIterator_00e1ce00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e1ce50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e1ce50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e1ce50& operator++();
};

TConstSetBitIterator_00e1ce50::TConstSetBitIterator_00e1ce50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e1ce50
TConstSetBitIterator_00e1ce50& TConstSetBitIterator_00e1ce50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e1ce70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e1ce70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e1ce70& operator++();
};

TConstSetBitIterator_00e1ce70::TConstSetBitIterator_00e1ce70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e1ce70
TConstSetBitIterator_00e1ce70& TConstSetBitIterator_00e1ce70::operator++()
{
    It.Advance();
    return *this;
}

int sub_00e1c5d0(void);
// @baa 0x00e1cf00
undefined4 UNetPendingLevel::sub_00e1cf00(void)
{
    int param_1 = (int)this;

  if ((g_0266e840 == 0) && (*(int *)(param_1 + 0x24) == 0)) {
    sub_00e1c5d0();
    if ((g_0266e840 == 0) && (*(int *)(param_1 + 0x24) == 0)) {
      return 1;
    }
  }
  return 0;
}

// @baa 0x00e1d4f0
int UNetPendingLevel::sub_00e1d4f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_007dfec0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_00e1d5e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e1d5e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e1d5e0& operator++();
};

TConstSetBitIterator_00e1d5e0::TConstSetBitIterator_00e1d5e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e1d5e0
TConstSetBitIterator_00e1d5e0& TConstSetBitIterator_00e1d5e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e1d690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e1d690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e1d690& operator++();
};

TConstSetBitIterator_00e1d690::TConstSetBitIterator_00e1d690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e1d690
TConstSetBitIterator_00e1d690& TConstSetBitIterator_00e1d690::operator++()
{
    It.Advance();
    return *this;
}

int sub_00c14990(void);
extern undefined * g_020ea3d0;
extern undefined * g_020ea3f0;
// @baa 0x00e1d6e0
undefined4 * UPendingLevel::sub_00e1d6e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00c14990();
  *param_1 = (undefined4)(&g_020ea3f0);
  param_1[0x21] = (undefined4)(&g_020ea3d0);
  return param_1;
}

// @baa 0x00e1d700
int UNetPendingLevel::GetDriver(void) { return *(int*)((char*)this + 136); }

// @baa 0x00e1d710
IMPLEMENT_CLASS_AT(UNetPendingLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPenLev.cpp", 459);

// @baa 0x00e1d780
struct C_view_00e1e2a0 {
    int sub_00e1d560(int);
};

// @baa 0x00e1e2a0
void UNetPendingLevel::sub_00e1e2a0(void)
{
    int param_1 = (int)this;
  ((C_view_00e1e2a0 *)((*(char **)((char *)this + 0x10))))->sub_00e1d560(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// @baa 0x00e1e5a0
IMPLEMENT_CLASS_AT(UPendingLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPenLev.cpp", 22);

// @baa 0x00e1e5b0
struct C_00e1eb50 { int a, b, c; C_00e1eb50(); };

// @baa 0x00e1eb50
C_00e1eb50::C_00e1eb50() : a(0), b(0), c(0) {}

void sub_00e1ddc0();
// @baa 0x00e1eb60
void sub_00e1eb60(void) { sub_00e1ddc0(); }

struct C_view_00e1ec70 {
    int sub_00e1ebe0(int, int);
};

extern undefined4 g_020ea50c;
// @baa 0x00e1ec70
undefined4 * UNetPendingLevel::sub_00e1ec70(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00e1ec70 *)(this))->sub_00e1ebe0(param_2, param_3);
  *param_1 = (undefined4)(&g_020ea50c);
  return param_1;
}

struct S_00e1ec90 {
    void sub_00e19bd0();
    void sub_00e1ec90();
};

// @baa 0x00e1ec90
void S_00e1ec90::sub_00e1ec90() {
    sub_00e19bd0();
}

// @baa 0x00e1eca0
undefined4 UNetPendingLevel::sub_00e1eca0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e19bd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e1d630(void);
// @baa 0x00e1f4b0
int UNetPendingLevel::sub_00e1f4b0(void)
{
    int param_1 = (int)this;

  sub_00e1d630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e200f0
// @baa 0x00e20200
bool UNetPendingLevel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view_00e20ed0 {
    int sub_00e1f3b0(int, int);
};

// @baa 0x00e20ed0
undefined4 UNetPendingLevel::sub_00e20ed0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00e20ed0 *)(this))->sub_00e1f3b0(param_2, param_3);
  return param_1;
}

struct C_view_00e20ef0 {
    int sub_00e1f430(int, int);
};

// @baa 0x00e20ef0
int UNetPendingLevel::sub_00e20ef0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00e20ef0 *)(this))->sub_00e1f430(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x00e20f10
int UNetPendingLevel::sub_00e20f10(void)
{
    int param_1 = (int)this;

  sub_00e1d630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00e20400(void);
// @baa 0x00e20f30
undefined4 UNetPendingLevel::sub_00e20f30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e20400();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00e20d20();
// @baa 0x00e211d0
void sub_00e211d0(void) { sub_00e20d20(); }

void sub_00e20d90();
// @baa 0x00e21570
void sub_00e21570(void) { sub_00e20d90(); }

void sub_00e20e70();
// @baa 0x00e21580
void sub_00e21580(void) { sub_00e20e70(); }

// @baa 0x00e21590
int UNetPendingLevel::sub_00e21590(void)
{
    int param_1 = (int)this;

  sub_00e1d630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e21970
void UNetPendingLevel::sub_00e21970(void) { *(int*)((char*)this + 40) = 1; }

// @baa 0x00e21b30
void sub_00e21b30(void) { sub_00e20d20(); }

// @baa 0x00e224a0
int UNetPendingLevel::sub_00e224a0(void)
{
    int param_1 = (int)this;

  sub_00e1d630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00e215b0(void);
// @baa 0x00e224c0
undefined4 UNetPendingLevel::sub_00e224c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e215b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e23360
void sub_00e23360(void) { sub_00e20d20(); }

// @baa 0x00e233d0
bool UNetPendingLevel::sub_00e233d0(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 0xb8);
}

// @baa 0x00e23530
bool UNetPendingLevel::sub_00e23530(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 100) != 0;
}

struct D_01e25780 { void sub_007f59a0(); };

extern D_01e25780 g_026cac04;
// @baa 0x01e25780
void sub_01e25780() { g_026cac04.sub_007f59a0(); }
