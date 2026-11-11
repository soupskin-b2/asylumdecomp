// Launch_0eb0000.cpp: 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00eb2460
int sub_00eb2460(int a0, int a1) { return a1; }

// @baa 0x00eb2470
int sub_00eb2470(int a0, int a1) { return a1; }

// @baa 0x00eb24b0
IMPLEMENT_CLASS_AT(UXnaForceFeedbackManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\WinDrv\\Src\\XnaForceFeedbackManager.cpp", 13);

// @baa 0x00eb2510
// @baa 0x00eb6740
int sub_00eb6740(int a0) { return *(int*)a0; }

// @baa 0x00eb6750
int sub_00eb6750(int a0) { return *(int*)a0; }

// @baa 0x00eb6760
int sub_00eb6760(int a0) { return *(int*)a0; }

// @baa 0x00eb6770
void sub_00eb6770(int param_1, int param_2, int * param_3)
{
  *param_3 = *param_3 + (param_2 - param_1 >> 2);
  return;
}

// @baa 0x00eb6790
void sub_00eb6790(int * param_1, int param_2)
{
  *param_1 = *param_1 + param_2 * 4;
  return;
}

// @baa 0x00eb67b0
void sub_00eb67b0(int param_1, int param_2, int * param_3)
{
  *param_3 = *param_3 + (param_2 - param_1 >> 2);
  return;
}

// @baa 0x00eb67d0
void sub_00eb67d0(int * param_1, int param_2)
{
  *param_1 = *param_1 + param_2 * 4;
  return;
}

int sub_00eb48e0(void);
int sub_00eb6050(...);
extern undefined4 g_026cca8c;
// @baa 0x00eb67f0
int sub_00eb67f0(void)
{
  if (g_026cca8c == 0) {
    g_026cca8c = sub_00eb6050(L"WinDrv");
    sub_00eb48e0();
  }
  return g_026cca8c;
}

struct C {
    int sub_00eb9740(int);
};

// @baa 0x00eb9740
int C::sub_00eb9740(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00eb9750 {
    int sub_00eb9750(int);
};

// @baa 0x00eb9750
int C_00eb9750::sub_00eb9750(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
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

struct TConstSetBitIterator_00eb99a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eb99a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eb99a0& operator++();
};

TConstSetBitIterator_00eb99a0::TConstSetBitIterator_00eb99a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eb99a0
TConstSetBitIterator_00eb99a0& TConstSetBitIterator_00eb99a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00eb99c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eb99c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eb99c0& operator++();
};

TConstSetBitIterator_00eb99c0::TConstSetBitIterator_00eb99c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eb99c0
TConstSetBitIterator_00eb99c0& TConstSetBitIterator_00eb99c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00eb99e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eb99e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eb99e0& operator++();
};

TConstSetBitIterator_00eb99e0::TConstSetBitIterator_00eb99e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eb99e0
TConstSetBitIterator_00eb99e0& TConstSetBitIterator_00eb99e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00eb9a30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eb9a30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eb9a30& operator++();
};

TConstSetBitIterator_00eb9a30::TConstSetBitIterator_00eb9a30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eb9a30
TConstSetBitIterator_00eb9a30& TConstSetBitIterator_00eb9a30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00eb9a80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eb9a80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eb9a80& operator++();
};

TConstSetBitIterator_00eb9a80::TConstSetBitIterator_00eb9a80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eb9a80
TConstSetBitIterator_00eb9a80& TConstSetBitIterator_00eb9a80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00eb9aa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eb9aa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eb9aa0& operator++();
};

TConstSetBitIterator_00eb9aa0::TConstSetBitIterator_00eb9aa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eb9aa0
TConstSetBitIterator_00eb9aa0& TConstSetBitIterator_00eb9aa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00eb9ac0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eb9ac0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eb9ac0& operator++();
};

TConstSetBitIterator_00eb9ac0::TConstSetBitIterator_00eb9ac0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eb9ac0
TConstSetBitIterator_00eb9ac0& TConstSetBitIterator_00eb9ac0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00eb9b10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eb9b10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eb9b10& operator++();
};

TConstSetBitIterator_00eb9b10::TConstSetBitIterator_00eb9b10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eb9b10
TConstSetBitIterator_00eb9b10& TConstSetBitIterator_00eb9b10::operator++()
{
    It.Advance();
    return *this;
}

int sub_00eb7c00(...);
// @baa 0x00eb9b60
void sub_00eb9b60(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  sub_00eb7c00(param_1,param_2,param_3,param_4,0);
  return;
}

int sub_00eb7c50(...);
// @baa 0x00eb9b80
void sub_00eb9b80(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_00eb7c50(param_1,param_2,param_3,0);
  return;
}

int sub_00eb7ca0(...);
// @baa 0x00eb9ba0
void sub_00eb9ba0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_00eb7ca0(param_1,param_2,param_3,0);
  return;
}

struct C_00eb9c30 {
    int sub_00eb9c30(int);
    int sub_00eb7aa0(int, int);
};

// @baa 0x00eb9c30
int C_00eb9c30::sub_00eb9c30(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00eb9c30 *)(this))->sub_00eb7aa0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}
