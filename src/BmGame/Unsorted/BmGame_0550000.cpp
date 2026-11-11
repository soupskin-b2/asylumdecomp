// BmGame_0550000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0054f600(void);
// @baa 0x005539e0
int UObject::sub_005539e0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & ~*(uint *)(param_1 + 4);
  sub_0054f600();
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

struct TConstSetBitIterator {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator& operator++();
};

TConstSetBitIterator::TConstSetBitIterator(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00553a00
TConstSetBitIterator& TConstSetBitIterator::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00553a20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00553a20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00553a20& operator++();
};

TConstSetBitIterator_00553a20::TConstSetBitIterator_00553a20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00553a20
TConstSetBitIterator_00553a20& TConstSetBitIterator_00553a20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00553a40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00553a40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00553a40& operator++();
};

TConstSetBitIterator_00553a40::TConstSetBitIterator_00553a40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00553a40
TConstSetBitIterator_00553a40& TConstSetBitIterator_00553a40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00553a90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00553a90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00553a90& operator++();
};

TConstSetBitIterator_00553a90::TConstSetBitIterator_00553a90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00553a90
TConstSetBitIterator_00553a90& TConstSetBitIterator_00553a90::operator++()
{
    It.Advance();
    return *this;
}
