// Core_0fb0000.cpp: 11 functions
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

struct TConstSetBitIterator_00fb5a30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb5a30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb5a30& operator++();
};

TConstSetBitIterator_00fb5a30::TConstSetBitIterator_00fb5a30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb5a30
TConstSetBitIterator_00fb5a30& TConstSetBitIterator_00fb5a30::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00fb5a50
int UTexture2D::sub_00fb5a50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x00fb5a70
int UTexture2D::sub_00fb5a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x1c;
}

struct C_view {
    int sub_00fb2ef0(int, int);
};

// @baa 0x00fb5d80
int UTexture2D::sub_00fb5d80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00fb2ef0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_00fb5db0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb5db0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb5db0& operator++();
};

TConstSetBitIterator_00fb5db0::TConstSetBitIterator_00fb5db0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb5db0
TConstSetBitIterator_00fb5db0& TConstSetBitIterator_00fb5db0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb5dd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb5dd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb5dd0& operator++();
};

TConstSetBitIterator_00fb5dd0::TConstSetBitIterator_00fb5dd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb5dd0
TConstSetBitIterator_00fb5dd0& TConstSetBitIterator_00fb5dd0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00fb5df0 {
    int sub_00fb2fa0(int, int);
};

// @baa 0x00fb5df0
int UTexture2D::sub_00fb5df0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00fb5df0 *)(this))->sub_00fb2fa0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x9a0 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_00fb5e20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb5e20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb5e20& operator++();
};

TConstSetBitIterator_00fb5e20::TConstSetBitIterator_00fb5e20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb5e20
TConstSetBitIterator_00fb5e20& TConstSetBitIterator_00fb5e20::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00fb5e40 {
    int sub_00fb30b0(int, int);
};

// @baa 0x00fb5e40
int UContentTagIndex::sub_00fb5e40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00fb5e40 *)(this))->sub_00fb30b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x9d8 + *param_1;
  }
  return 0;
}

struct C_view_00fb5e70 {
    int sub_00fb31a0(int, int);
};

// @baa 0x00fb5e70
int UContentTagIndex::sub_00fb5e70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00fb5e70 *)(this))->sub_00fb31a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x13bc + *param_1;
  }
  return 0;
}

struct C_view_00fb5f00 {
    int sub_00fb3290(int, int);
};

// @baa 0x00fb5f00
int UContentTagIndex::sub_00fb5f00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00fb5f00 *)(this))->sub_00fb3290((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xd0 + *param_1;
  }
  return 0;
}
