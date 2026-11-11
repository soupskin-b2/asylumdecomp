// Engine_0f60000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_00f60eb0(byte);
};

int sub_0053dfa0(...);
int sub_00f5d6b0(void);
// @baa 0x00f60eb0
undefined4 C::sub_00f60eb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5d6b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f61160 {
    undefined4 sub_00f61160(byte);
};

int sub_00f5dba0(void);
// @baa 0x00f61160
undefined4 C_00f61160::sub_00f61160(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5dba0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_00f5e3d0(int, int);
};

// @baa 0x00f61a80
int UPackageMap::sub_00f61a80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00f5e3d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x48;
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

struct TConstSetBitIterator_00f61ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f61ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f61ab0& operator++();
};

TConstSetBitIterator_00f61ab0::TConstSetBitIterator_00f61ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f61ab0
TConstSetBitIterator_00f61ab0& TConstSetBitIterator_00f61ab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f61ad0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f61ad0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f61ad0& operator++();
};

TConstSetBitIterator_00f61ad0::TConstSetBitIterator_00f61ad0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f61ad0
TConstSetBitIterator_00f61ad0& TConstSetBitIterator_00f61ad0::operator++()
{
    It.Advance();
    return *this;
}
