// UnrealEd_1350000.cpp: 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_0134d7c0(void);
// @baa 0x01353870
undefined4 UUnrealEdEngine::sub_01353870(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0134d7c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C { void sub_0134e330(); void sub_01353fe0(int); };

// @baa 0x01353fe0
void C::sub_01353fe0(int) { sub_0134e330(); }

struct C_01354010 { void sub_005532a0(int); C_01354010 *sub_01354010(int); };

// @baa 0x01354010
C_01354010 *C_01354010::sub_01354010(int a) { sub_005532a0(a); return this; }

struct C_01354030 { void sub_00fb41b0(int); C_01354030 *sub_01354030(int); };

// @baa 0x01354030
C_01354030 *C_01354030::sub_01354030(int a) { sub_00fb41b0(a); return this; }

struct C_01354050 { void sub_00ff6e70(int); C_01354050 *sub_01354050(int); };

// @baa 0x01354050
C_01354050 *C_01354050::sub_01354050(int a) { sub_00ff6e70(a); return this; }

struct C_01354070 {
    int sub_01354070(int);
    int sub_006f2660(int, int);
};

// @baa 0x01354070
int C_01354070::sub_01354070(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_01354070 *)(this))->sub_006f2660((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_01357e00 { void sub_00fbd130(int); C_01357e00 *sub_01357e00(int); };

// @baa 0x01357e00
C_01357e00 *C_01357e00::sub_01357e00(int a) { sub_00fbd130(a); return this; }

struct C_01357e20 { void sub_00fbd220(int); C_01357e20 *sub_01357e20(int); };

// @baa 0x01357e20
C_01357e20 *C_01357e20::sub_01357e20(int a) { sub_00fbd220(a); return this; }

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

struct TConstSetBitIterator_01357e40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01357e40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01357e40& operator++();
};

TConstSetBitIterator_01357e40::TConstSetBitIterator_01357e40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01357e40
TConstSetBitIterator_01357e40& TConstSetBitIterator_01357e40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01357ef0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01357ef0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01357ef0& operator++();
};

TConstSetBitIterator_01357ef0::TConstSetBitIterator_01357ef0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01357ef0
TConstSetBitIterator_01357ef0& TConstSetBitIterator_01357ef0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01358280 { void sub_01357850(); void sub_01358280(int); };

// @baa 0x01358280
void C_01358280::sub_01358280(int) { sub_01357850(); }
