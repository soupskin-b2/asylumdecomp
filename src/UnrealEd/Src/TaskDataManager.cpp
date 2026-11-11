// TaskDataManager.cpp: 9 functions
// Placed here by: neighbours 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_view {
    int sub_014860e0(int);
};

// @baa 0x01486260
int UObject::sub_01486260(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_014860e0(param_2);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return param_1;
}

int sub_0053dfa0(...);
int sub_014824d0(void);
// @baa 0x01486370
undefined4 UObject::sub_01486370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014824d0();
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

struct TConstSetBitIterator_014865d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014865d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014865d0& operator++();
};

TConstSetBitIterator_014865d0::TConstSetBitIterator_014865d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014865d0
TConstSetBitIterator_014865d0& TConstSetBitIterator_014865d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01486620 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01486620(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01486620& operator++();
};

TConstSetBitIterator_01486620::TConstSetBitIterator_01486620(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01486620
TConstSetBitIterator_01486620& TConstSetBitIterator_01486620::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01486670 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01486670(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01486670& operator++();
};

TConstSetBitIterator_01486670::TConstSetBitIterator_01486670(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01486670
TConstSetBitIterator_01486670& TConstSetBitIterator_01486670::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01486840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01486840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01486840& operator++();
};

TConstSetBitIterator_01486840::TConstSetBitIterator_01486840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01486840
TConstSetBitIterator_01486840& TConstSetBitIterator_01486840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01486890 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01486890(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01486890& operator++();
};

TConstSetBitIterator_01486890::TConstSetBitIterator_01486890(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01486890
TConstSetBitIterator_01486890& TConstSetBitIterator_01486890::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014868e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014868e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014868e0& operator++();
};

TConstSetBitIterator_014868e0::TConstSetBitIterator_014868e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014868e0
TConstSetBitIterator_014868e0& TConstSetBitIterator_014868e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01486930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01486930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01486930& operator++();
};

TConstSetBitIterator_01486930::TConstSetBitIterator_01486930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01486930
TConstSetBitIterator_01486930& TConstSetBitIterator_01486930::operator++()
{
    It.Advance();
    return *this;
}
