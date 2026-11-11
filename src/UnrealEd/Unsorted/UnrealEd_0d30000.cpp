// UnrealEd_0d30000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_00553180(int); C *sub_00d3c180(int); };

// @baa 0x00d3c180
C *C::sub_00d3c180(int a) { sub_00553180(a); return this; }

struct C_00d3c1a0 { void sub_00d3abb0(int); C_00d3c1a0 *sub_00d3c1a0(int); };

// @baa 0x00d3c1a0
C_00d3c1a0 *C_00d3c1a0::sub_00d3c1a0(int a) { sub_00d3abb0(a); return this; }

struct C_00d3c360 {
    void sub_00d3c360();
    int sub_005afb30(int);
};

// @baa 0x00d3c360
void C_00d3c360::sub_00d3c360(void)
{
    int param_1 = (int)this;
  ((C_00d3c360 *)((*(char **)((char *)this + 0x1c))))->sub_005afb30(*(undefined4 *)(param_1 + 0x14));
  return;
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

struct TConstSetBitIterator_00d3c370 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d3c370(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d3c370& operator++();
};

TConstSetBitIterator_00d3c370::TConstSetBitIterator_00d3c370(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d3c370
TConstSetBitIterator_00d3c370& TConstSetBitIterator_00d3c370::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d3c390 {
    undefined4 sub_00d3c390(byte);
};

int sub_0053dfa0(...);
int sub_00d3ab40(void);
// @baa 0x00d3c390
undefined4 C_00d3c390::sub_00d3c390(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d3ab40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00d3f240();
// @baa 0x00d3fd80
void sub_00d3fd80(void) { sub_00d3f240(); }

void sub_00d3f2a0();
// @baa 0x00d3fd90
void sub_00d3fd90(void) { sub_00d3f2a0(); }

void sub_00d3f310();
// @baa 0x00d3fda0
void sub_00d3fda0(void) { sub_00d3f310(); }

struct C_00d3fdb0 { C_00d3fdb0* sub_00d3fdb0(void); };

// @baa 0x00d3fdb0
C_00d3fdb0* C_00d3fdb0::sub_00d3fdb0(void) { return this; }

struct C_00d3fe80 {
    FString sub_00d3fe80();
};

// @baa 0x00d3fe80
FString C_00d3fe80::sub_00d3fe80()
{
    return TEXT("ReplaceObjectRef");
}
