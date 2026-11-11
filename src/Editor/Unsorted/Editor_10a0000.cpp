// Editor_10a0000.cpp: 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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

struct TConstSetBitIterator_010a0ca0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010a0ca0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010a0ca0& operator++();
};

TConstSetBitIterator_010a0ca0::TConstSetBitIterator_010a0ca0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010a0ca0
TConstSetBitIterator_010a0ca0& TConstSetBitIterator_010a0ca0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010a1030 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010a1030(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010a1030& operator++();
};

TConstSetBitIterator_010a1030::TConstSetBitIterator_010a1030(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010a1030
TConstSetBitIterator_010a1030& TConstSetBitIterator_010a1030::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010a1220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010a1220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010a1220& operator++();
};

TConstSetBitIterator_010a1220::TConstSetBitIterator_010a1220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010a1220
TConstSetBitIterator_010a1220& TConstSetBitIterator_010a1220::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    int sub_010a39d0();
};

int sub_0109cd00(void);
// @baa 0x010a39d0
int C::sub_010a39d0(void)
{
    int param_1 = (int)this;

  sub_0109cd00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a3bd0 {
    int sub_010a3bd0();
};

int sub_0109cf10(void);
// @baa 0x010a3bd0
int C_010a3bd0::sub_010a3bd0(void)
{
    int param_1 = (int)this;

  sub_0109cf10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0109d410(void);
// @baa 0x010a44a0
int UTexture2D::sub_010a44a0(void)
{
    int param_1 = (int)this;

  sub_0109d410();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a4520 {
    int sub_010a4520();
};

int sub_0109d4d0(void);
// @baa 0x010a4520
int C_010a4520::sub_010a4520(void)
{
    int param_1 = (int)this;

  sub_0109d4d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a4600 {
    int sub_010a4600();
};

int sub_0109d530(void);
// @baa 0x010a4600
int C_010a4600::sub_010a4600(void)
{
    int param_1 = (int)this;

  sub_0109d530();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a46e0 {
    int sub_010a46e0();
};

int sub_0109d590(void);
// @baa 0x010a46e0
int C_010a46e0::sub_010a46e0(void)
{
    int param_1 = (int)this;

  sub_0109d590();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a4800 {
    int sub_010a4800();
};

int sub_0109daa0(void);
// @baa 0x010a4800
int C_010a4800::sub_010a4800(void)
{
    int param_1 = (int)this;

  sub_0109daa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a4820 {
    int sub_010a4820();
};

int sub_0109db00(void);
// @baa 0x010a4820
int C_010a4820::sub_010a4820(void)
{
    int param_1 = (int)this;

  sub_0109db00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a58d0 {
    int sub_010a58d0();
};

int sub_0109b460(void);
// @baa 0x010a58d0
int C_010a58d0::sub_010a58d0(void)
{
    int param_1 = (int)this;

  sub_0109b460();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
