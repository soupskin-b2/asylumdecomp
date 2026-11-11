// Engine_0ff0000.cpp: 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_00ffa650(int); C *sub_00ffc130(int); };

// @baa 0x00ffc130
C *C::sub_00ffc130(int a) { sub_00ffa650(a); return this; }

struct C_view {
    int sub_00ffa960(int, int);
};

// @baa 0x00ffc150
int UTexture2D::sub_00ffc150(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00ffa960((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
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

struct TConstSetBitIterator_00ffc2a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ffc2a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ffc2a0& operator++();
};

TConstSetBitIterator_00ffc2a0::TConstSetBitIterator_00ffc2a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ffc2a0
TConstSetBitIterator_00ffc2a0& TConstSetBitIterator_00ffc2a0::operator++()
{
    It.Advance();
    return *this;
}

int sub_0053dfa0(...);
int sub_00ffa900(void);
// @baa 0x00ffc2c0
undefined4 UObject::sub_00ffc2c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ffa900();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00ffc530 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ffc530(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ffc530& operator++();
};

TConstSetBitIterator_00ffc530::TConstSetBitIterator_00ffc530(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ffc530
TConstSetBitIterator_00ffc530& TConstSetBitIterator_00ffc530::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ffc640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ffc640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ffc640& operator++();
};

TConstSetBitIterator_00ffc640::TConstSetBitIterator_00ffc640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ffc640
TConstSetBitIterator_00ffc640& TConstSetBitIterator_00ffc640::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ffc690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ffc690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ffc690& operator++();
};

TConstSetBitIterator_00ffc690::TConstSetBitIterator_00ffc690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ffc690
TConstSetBitIterator_00ffc690& TConstSetBitIterator_00ffc690::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00ffc6e0 {
    int sub_00f2f610();
};

// @baa 0x00ffc6e0
undefined4 UTexture2D::sub_00ffc6e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00ffc6e0 *)(((char *)this + 8)))->sub_00f2f610();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
