// Engine_0dd0000.cpp (part 1 of 2): 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

struct TConstSetBitIterator_00dd18b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd18b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd18b0& operator++();
};

TConstSetBitIterator_00dd18b0::TConstSetBitIterator_00dd18b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd18b0
TConstSetBitIterator_00dd18b0& TConstSetBitIterator_00dd18b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd1900 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd1900(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd1900& operator++();
};

TConstSetBitIterator_00dd1900::TConstSetBitIterator_00dd1900(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd1900
TConstSetBitIterator_00dd1900& TConstSetBitIterator_00dd1900::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd1950 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd1950(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd1950& operator++();
};

TConstSetBitIterator_00dd1950::TConstSetBitIterator_00dd1950(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd1950
TConstSetBitIterator_00dd1950& TConstSetBitIterator_00dd1950::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd19a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd19a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd19a0& operator++();
};

TConstSetBitIterator_00dd19a0::TConstSetBitIterator_00dd19a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd19a0
TConstSetBitIterator_00dd19a0& TConstSetBitIterator_00dd19a0::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    undefined4 sub_00dd9de0();
};

int sub_00dd8e30(...);
int sub_00dd8fb0(void);
int sub_00dd9e2f(...);
extern undefined4 g_026c5d80;
// @baa 0x00dd9de0
undefined4 C::sub_00dd9de0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026c5d80 == 0) {
      g_026c5d80 = sub_00dd8e30(L"Engine");
      sub_00dd8fb0();
      if (g_026c5d80 == 0) {
sub_00dd9e2f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026c5d80) goto sub_00dd9e2f;
    }
  }
  return 0;
}

// @baa 0x00ddcd40
void sub_00ddcd40(void) {  }

// @baa 0x00ddcd50
void sub_00ddcd50(void) {  }

// @baa 0x00ddcd60
float10 sub_00ddcd60(double param_1)
{
  return (float10)param_1;
}

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_020d5098;
// @baa 0x00ddcda0
undefined4 * UUnrealEdEngine::sub_00ddcda0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_020d5098);
  return param_1;
}

// @baa 0x00ddcfc0
IMPLEMENT_CLASS_AT(UUILayerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 38);

