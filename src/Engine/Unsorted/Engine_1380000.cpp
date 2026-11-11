// Engine_1380000.cpp: 17 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    int sub_01384f20();
};

// @baa 0x01384f20
int C::sub_01384f20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_01384fb0 {
    int sub_01384fb0();
};

// @baa 0x01384fb0
int C_01384fb0::sub_01384fb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01384fc0 {
    int sub_01384fc0();
};

// @baa 0x01384fc0
int C_01384fc0::sub_01384fc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_01384fd0 {
    int sub_01384fd0();
};

// @baa 0x01384fd0
int C_01384fd0::sub_01384fd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x18;
}

struct C_013850d0 {
    int sub_013850d0();
};

// @baa 0x013850d0
int C_013850d0::sub_013850d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013850e0 {
    int sub_013850e0();
};

// @baa 0x013850e0
int C_013850e0::sub_013850e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_013850f0 {
    int sub_013850f0();
};

// @baa 0x013850f0
int C_013850f0::sub_013850f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01385100 {
    int sub_01385100();
};

// @baa 0x01385100
int C_01385100::sub_01385100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
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

struct TConstSetBitIterator_01385110 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385110(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385110& operator++();
};

TConstSetBitIterator_01385110::TConstSetBitIterator_01385110(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385110
TConstSetBitIterator_01385110& TConstSetBitIterator_01385110::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013851e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013851e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013851e0& operator++();
};

TConstSetBitIterator_013851e0::TConstSetBitIterator_013851e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013851e0
TConstSetBitIterator_013851e0& TConstSetBitIterator_013851e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385200 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385200(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385200& operator++();
};

TConstSetBitIterator_01385200::TConstSetBitIterator_01385200(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385200
TConstSetBitIterator_01385200& TConstSetBitIterator_01385200::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385220& operator++();
};

TConstSetBitIterator_01385220::TConstSetBitIterator_01385220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385220
TConstSetBitIterator_01385220& TConstSetBitIterator_01385220::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01385240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01385240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01385240& operator++();
};

TConstSetBitIterator_01385240::TConstSetBitIterator_01385240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01385240
TConstSetBitIterator_01385240& TConstSetBitIterator_01385240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013852c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013852c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013852c0& operator++();
};

TConstSetBitIterator_013852c0::TConstSetBitIterator_013852c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013852c0
TConstSetBitIterator_013852c0& TConstSetBitIterator_013852c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013852e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013852e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013852e0& operator++();
};

TConstSetBitIterator_013852e0::TConstSetBitIterator_013852e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013852e0
TConstSetBitIterator_013852e0& TConstSetBitIterator_013852e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_01385900(int);
};

// @baa 0x01385a60
int UObject::sub_01385a60(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_01385900(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}

int sub_0053dfa0(...);
int sub_01374930(void);
// @baa 0x01385a80
undefined4 UObject::sub_01385a80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01374930();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
