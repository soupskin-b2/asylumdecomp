// PerfCounter.cpp: 4 functions
// Placed here by: callers 2, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_view {
    int sub_006029e0(int, int);
};

// @baa 0x0060bb90
int UFracturedStaticMeshComponent::sub_0060bb90(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_006029e0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
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

struct TConstSetBitIterator_0060d930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060d930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060d930& operator++();
};

TConstSetBitIterator_0060d930::TConstSetBitIterator_0060d930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060d930
TConstSetBitIterator_0060d930& TConstSetBitIterator_0060d930::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_006161b0 {
    int sub_006134b0(int, int);
};

// @baa 0x006161b0
void UPackageMap::sub_006161b0(void)
{
    int param_1 = (int)this;
  ((C_view_006161b0 *)(this))->sub_006134b0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C { void sub_00616150(int); void sub_00619c00(); };

// @baa 0x00619c00
void C::sub_00619c00() { sub_00616150(0); }
