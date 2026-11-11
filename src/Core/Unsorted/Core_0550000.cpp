// Core_0550000.cpp: 29 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    int sub_005554e0();
};

// @baa 0x005554e0
int C::sub_005554e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x14;
}

struct C_view {
    int sub_0054db70(int, int);
};

// @baa 0x005554f0
int URFMODSound::sub_005554f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_0054db70((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 0xc;
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

struct TConstSetBitIterator_00556dc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556dc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556dc0& operator++();
};

TConstSetBitIterator_00556dc0::TConstSetBitIterator_00556dc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556dc0
TConstSetBitIterator_00556dc0& TConstSetBitIterator_00556dc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556de0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556de0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556de0& operator++();
};

TConstSetBitIterator_00556de0::TConstSetBitIterator_00556de0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556de0
TConstSetBitIterator_00556de0& TConstSetBitIterator_00556de0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556e30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556e30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556e30& operator++();
};

TConstSetBitIterator_00556e30::TConstSetBitIterator_00556e30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556e30
TConstSetBitIterator_00556e30& TConstSetBitIterator_00556e30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556e50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556e50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556e50& operator++();
};

TConstSetBitIterator_00556e50::TConstSetBitIterator_00556e50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556e50
TConstSetBitIterator_00556e50& TConstSetBitIterator_00556e50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556ea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556ea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556ea0& operator++();
};

TConstSetBitIterator_00556ea0::TConstSetBitIterator_00556ea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556ea0
TConstSetBitIterator_00556ea0& TConstSetBitIterator_00556ea0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556ec0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556ec0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556ec0& operator++();
};

TConstSetBitIterator_00556ec0::TConstSetBitIterator_00556ec0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556ec0
TConstSetBitIterator_00556ec0& TConstSetBitIterator_00556ec0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556f10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556f10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556f10& operator++();
};

TConstSetBitIterator_00556f10::TConstSetBitIterator_00556f10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556f10
TConstSetBitIterator_00556f10& TConstSetBitIterator_00556f10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556f30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556f30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556f30& operator++();
};

TConstSetBitIterator_00556f30::TConstSetBitIterator_00556f30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556f30
TConstSetBitIterator_00556f30& TConstSetBitIterator_00556f30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556f80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556f80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556f80& operator++();
};

TConstSetBitIterator_00556f80::TConstSetBitIterator_00556f80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556f80
TConstSetBitIterator_00556f80& TConstSetBitIterator_00556f80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00557ff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00557ff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00557ff0& operator++();
};

TConstSetBitIterator_00557ff0::TConstSetBitIterator_00557ff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00557ff0
TConstSetBitIterator_00557ff0& TConstSetBitIterator_00557ff0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00558090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00558090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00558090& operator++();
};

TConstSetBitIterator_00558090::TConstSetBitIterator_00558090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00558090
TConstSetBitIterator_00558090& TConstSetBitIterator_00558090::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00558140 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00558140(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00558140& operator++();
};

TConstSetBitIterator_00558140::TConstSetBitIterator_00558140(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00558140
TConstSetBitIterator_00558140& TConstSetBitIterator_00558140::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00558160 {
    int sub_005557c0(int);
};

// @baa 0x00558160
void UPackageMap::sub_00558160(void)
{
    int param_1 = (int)this;
  ((C_view_00558160 *)((*(char **)((char *)this + 0x10))))->sub_005557c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00558180 {
    int sub_005559a0(int);
};

// @baa 0x00558180
void UPackageMap::sub_00558180(void)
{
    int param_1 = (int)this;
  ((C_view_00558180 *)((*(char **)((char *)this + 0x10))))->sub_005559a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_005581a0 {
    int sub_00555ad0(int);
};

// @baa 0x005581a0
void UPackageMap::sub_005581a0(void)
{
    int param_1 = (int)this;
  ((C_view_005581a0 *)((*(char **)((char *)this + 0x10))))->sub_00555ad0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_005581c0 {
    int sub_00555ce0(int);
};

// @baa 0x005581c0
void UPackageMap::sub_005581c0(void)
{
    int param_1 = (int)this;
  ((C_view_005581c0 *)((*(char **)((char *)this + 0x10))))->sub_00555ce0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_005581e0 {
    int sub_00555e50(int);
};

// @baa 0x005581e0
void UPackageMap::sub_005581e0(void)
{
    int param_1 = (int)this;
  ((C_view_005581e0 *)((*(char **)((char *)this + 0x10))))->sub_00555e50(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00558200 {
    int sub_00555f80(int);
};

// @baa 0x00558200
void UPackageMap::sub_00558200(void)
{
    int param_1 = (int)this;
  ((C_view_00558200 *)((*(char **)((char *)this + 0x10))))->sub_00555f80(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

void sub_00559da0();
// @baa 0x0055b790
void sub_0055b790(void) { sub_00559da0(); }

void sub_0055b950();
// @baa 0x0055e1f0
void sub_0055e1f0(void) { sub_0055b950(); }

void sub_0055b9e0();
// @baa 0x0055e4b0
void sub_0055e4b0(void) { sub_0055b9e0(); }

struct S {
    void sub_0055bb00(void);
    void sub_0055e8e0(void);
};

// @baa 0x0055e8e0
void S::sub_0055e8e0(void)
{
    sub_0055bb00();
}

void sub_0055b7a0();
// @baa 0x0055ed00
void sub_0055ed00(void) { sub_0055b7a0(); }

void sub_0055ba70();
// @baa 0x0055ed10
void sub_0055ed10(void) { sub_0055ba70(); }

void sub_0055bb90();
// @baa 0x0055ed20
void sub_0055ed20(void) { sub_0055bb90(); }

// @baa 0x0055ef70
void sub_0055ef70(void) { sub_0055b9e0(); }

void sub_0055bb00();
// @baa 0x0055ef80
void sub_0055ef80(void) { sub_0055bb00(); }
