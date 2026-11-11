// UnrealEd_0850000.cpp: 27 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00852420(int);
};

// @baa 0x00852420
int C::sub_00852420(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00852430 {
    int sub_00852430(int);
};

// @baa 0x00852430
int C_00852430::sub_00852430(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00852440 {
    int sub_00852440();
};

// @baa 0x00852440
int C_00852440::sub_00852440(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00852460 {
    int sub_00852460();
};

// @baa 0x00852460
int C_00852460::sub_00852460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00852470 {
    int sub_00852470();
};

// @baa 0x00852470
int C_00852470::sub_00852470(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00852490 {
    int sub_00852490();
};

// @baa 0x00852490
int C_00852490::sub_00852490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_008524a0 {
    undefined4 sub_008524a0(byte);
};

int sub_0053dfa0(...);
int sub_00849a60(void);
// @baa 0x008524a0
undefined4 C_008524a0::sub_008524a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00849a60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_008524c0 { void sub_00549160(); };

struct C_008524c0 { char pad[12]; M_008524c0 m; void sub_008524c0(); };

// @baa 0x008524c0
void C_008524c0::sub_008524c0() { m.sub_00549160(); }

struct M_008524d0 { void sub_00549160(); };

struct C_008524d0 { char pad[12]; M_008524d0 m; void sub_008524d0(); };

// @baa 0x008524d0
void C_008524d0::sub_008524d0() { m.sub_00549160(); }

struct M_008524e0 { void sub_008495a0(); };

struct C_008524e0 { char pad[8]; M_008524e0 m; void sub_008524e0(); };

// @baa 0x008524e0
void C_008524e0::sub_008524e0() { m.sub_008495a0(); }

void sub_00849b00();
// @baa 0x008524f0
void sub_008524f0(void) { sub_00849b00(); }

struct C_00852580 {
    int sub_00852580(int);
};

// @baa 0x00852580
int C_00852580::sub_00852580(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00852610 {
    int sub_00852610(int);
};

// @baa 0x00852610
int C_00852610::sub_00852610(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct M_00852620 { void sub_00549160(); };

struct C_00852620 { char pad[12]; M_00852620 m; void sub_00852620(); };

// @baa 0x00852620
void C_00852620::sub_00852620() { m.sub_00549160(); }

struct M_00852630 { void sub_00549160(); };

struct C_00852630 { char pad[12]; M_00852630 m; void sub_00852630(); };

// @baa 0x00852630
void C_00852630::sub_00852630() { m.sub_00549160(); }

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

struct TConstSetBitIterator_00852640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00852640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00852640& operator++();
};

TConstSetBitIterator_00852640::TConstSetBitIterator_00852640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00852640
TConstSetBitIterator_00852640& TConstSetBitIterator_00852640::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00852660 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00852660(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00852660& operator++();
};

TConstSetBitIterator_00852660::TConstSetBitIterator_00852660(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00852660
TConstSetBitIterator_00852660& TConstSetBitIterator_00852660::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008526b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008526b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008526b0& operator++();
};

TConstSetBitIterator_008526b0::TConstSetBitIterator_008526b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008526b0
TConstSetBitIterator_008526b0& TConstSetBitIterator_008526b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00852700 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00852700(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00852700& operator++();
};

TConstSetBitIterator_00852700::TConstSetBitIterator_00852700(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00852700
TConstSetBitIterator_00852700& TConstSetBitIterator_00852700::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00852750 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00852750(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00852750& operator++();
};

TConstSetBitIterator_00852750::TConstSetBitIterator_00852750(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00852750
TConstSetBitIterator_00852750& TConstSetBitIterator_00852750::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00852770 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00852770(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00852770& operator++();
};

TConstSetBitIterator_00852770::TConstSetBitIterator_00852770(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00852770
TConstSetBitIterator_00852770& TConstSetBitIterator_00852770::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00852790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00852790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00852790& operator++();
};

TConstSetBitIterator_00852790::TConstSetBitIterator_00852790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00852790
TConstSetBitIterator_00852790& TConstSetBitIterator_00852790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008527e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008527e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008527e0& operator++();
};

TConstSetBitIterator_008527e0::TConstSetBitIterator_008527e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008527e0
TConstSetBitIterator_008527e0& TConstSetBitIterator_008527e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00852830 {
    undefined4 sub_00852830(byte);
    int sub_00549160();
};

// @baa 0x00852830
undefined4 C_00852830::sub_00852830(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00852830 *)(((char *)this + 0xc)))->sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00852860 {
    undefined4 sub_00852860(byte);
    int sub_00549160();
};

// @baa 0x00852860
undefined4 C_00852860::sub_00852860(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00852860 *)(((char *)this + 0xc)))->sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_01f44310;
// @baa 0x00852950
undefined4 * UObject::sub_00852950(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f44310);
  return param_1;
}

// @baa 0x00852970
IMPLEMENT_CLASS_AT(UMorphTargetSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 12);
