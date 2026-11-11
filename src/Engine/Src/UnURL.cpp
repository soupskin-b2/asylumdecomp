// UnURL.cpp: 6 functions
// Placed here by: neighbours 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct M_00d54b40 { void sub_00ccbf20(); };

struct C { char pad[16]; M_00d54b40 m; void sub_00d54b40(); };

// @baa 0x00d54b40
void C::sub_00d54b40() { m.sub_00ccbf20(); }

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

struct TConstSetBitIterator_00d54e40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d54e40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d54e40& operator++();
};

TConstSetBitIterator_00d54e40::TConstSetBitIterator_00d54e40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d54e40
TConstSetBitIterator_00d54e40& TConstSetBitIterator_00d54e40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d56830 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d56830(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d56830& operator++();
};

TConstSetBitIterator_00d56830::TConstSetBitIterator_00d56830(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d56830
TConstSetBitIterator_00d56830& TConstSetBitIterator_00d56830::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d56850 {
    undefined4 sub_00d56850(byte);
};

int sub_0053dfa0(...);
int sub_00d54ab0(void);
// @baa 0x00d56850
undefined4 C_00d56850::sub_00d56850(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d54ab0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_00ccbf20();
};

// @baa 0x00d56c70
undefined4 UObject::sub_00d56c70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 0x10)))->sub_00ccbf20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d56de0 {
    int sub_00d56de0();
};

int sub_00d54120(void);
// @baa 0x00d56de0
int C_00d56de0::sub_00d56de0(void)
{
    int param_1 = (int)this;

  sub_00d54120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
