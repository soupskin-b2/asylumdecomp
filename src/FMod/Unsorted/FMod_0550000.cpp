// FMod_0550000.cpp: 39 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_view {
    int sub_0054f280(int, int);
};

// @baa 0x00551a20
int UPackageMap::sub_00551a20(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_0054f280((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_view_00551a50 {
    int sub_0054d4a0(int, int);
};

// @baa 0x00551a50
int UPackageMap::sub_00551a50(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00551a50 *)(this))->sub_0054d4a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00551a80 {
    int sub_0054d590(int, int);
};

// @baa 0x00551a80
int APrefabInstance::sub_00551a80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00551a80 *)(this))->sub_0054d590((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00551ab0 {
    int sub_0054d6a0(int, int);
};

// @baa 0x00551ab0
int UPackageMap::sub_00551ab0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00551ab0 *)(this))->sub_0054d6a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C {
    int sub_00551b40();
};

// @baa 0x00551b40
int C::sub_00551b40(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_view_00551b50 {
    int sub_0054db70(int, int);
};

// @baa 0x00551b50
int URFMODSound::sub_00551b50(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00551b50 *)(this))->sub_0054db70((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

struct C_view_00551b90 {
    int sub_0054e020(int, int);
};

// @baa 0x00551b90
int UPackageMap::sub_00551b90(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00551b90 *)(this))->sub_0054e020((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

struct C_view_00551bd0 {
    int sub_0054e0b0(int, int);
};

// @baa 0x00551bd0
int UPackageMap::sub_00551bd0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00551bd0 *)(this))->sub_0054e0b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_005535e0 {
    undefined4 * sub_005535e0(undefined4 *);
    int sub_005518a0(int);
};

// @baa 0x005535e0
undefined4 * C_005535e0::sub_005535e0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_005535e0 *)(((char *)this + 4)))->sub_005518a0((int)(param_2 + 1));
  return param_1;
}

struct C_00553600 {
    undefined4 * sub_00553600(undefined4 *);
    int sub_0054e560(int);
};

// @baa 0x00553600
undefined4 * C_00553600::sub_00553600(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  ((C_00553600 *)(((char *)this + 0x3c)))->sub_0054e560((int)(param_2 + 0xf));
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
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

struct TConstSetBitIterator_00556ad0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556ad0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556ad0& operator++();
};

TConstSetBitIterator_00556ad0::TConstSetBitIterator_00556ad0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556ad0
TConstSetBitIterator_00556ad0& TConstSetBitIterator_00556ad0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556b20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556b20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556b20& operator++();
};

TConstSetBitIterator_00556b20::TConstSetBitIterator_00556b20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556b20
TConstSetBitIterator_00556b20& TConstSetBitIterator_00556b20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556b40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556b40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556b40& operator++();
};

TConstSetBitIterator_00556b40::TConstSetBitIterator_00556b40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556b40
TConstSetBitIterator_00556b40& TConstSetBitIterator_00556b40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556b90& operator++();
};

TConstSetBitIterator_00556b90::TConstSetBitIterator_00556b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556b90
TConstSetBitIterator_00556b90& TConstSetBitIterator_00556b90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556bb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556bb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556bb0& operator++();
};

TConstSetBitIterator_00556bb0::TConstSetBitIterator_00556bb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556bb0
TConstSetBitIterator_00556bb0& TConstSetBitIterator_00556bb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556c00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556c00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556c00& operator++();
};

TConstSetBitIterator_00556c00::TConstSetBitIterator_00556c00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556c00
TConstSetBitIterator_00556c00& TConstSetBitIterator_00556c00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556c20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556c20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556c20& operator++();
};

TConstSetBitIterator_00556c20::TConstSetBitIterator_00556c20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556c20
TConstSetBitIterator_00556c20& TConstSetBitIterator_00556c20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556c70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556c70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556c70& operator++();
};

TConstSetBitIterator_00556c70::TConstSetBitIterator_00556c70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556c70
TConstSetBitIterator_00556c70& TConstSetBitIterator_00556c70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556c90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556c90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556c90& operator++();
};

TConstSetBitIterator_00556c90::TConstSetBitIterator_00556c90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556c90
TConstSetBitIterator_00556c90& TConstSetBitIterator_00556c90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556ce0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556ce0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556ce0& operator++();
};

TConstSetBitIterator_00556ce0::TConstSetBitIterator_00556ce0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556ce0
TConstSetBitIterator_00556ce0& TConstSetBitIterator_00556ce0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556d00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556d00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556d00& operator++();
};

TConstSetBitIterator_00556d00::TConstSetBitIterator_00556d00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556d00
TConstSetBitIterator_00556d00& TConstSetBitIterator_00556d00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556d50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556d50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556d50& operator++();
};

TConstSetBitIterator_00556d50::TConstSetBitIterator_00556d50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556d50
TConstSetBitIterator_00556d50& TConstSetBitIterator_00556d50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556d70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556d70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556d70& operator++();
};

TConstSetBitIterator_00556d70::TConstSetBitIterator_00556d70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556d70
TConstSetBitIterator_00556d70& TConstSetBitIterator_00556d70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00559100 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00559100(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00559100& operator++();
};

TConstSetBitIterator_00559100::TConstSetBitIterator_00559100(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00559100
TConstSetBitIterator_00559100& TConstSetBitIterator_00559100::operator++()
{
    It.Advance();
    return *this;
}

struct C_0055b2c0 {
    int sub_0055b2c0();
};

int sub_00556a70(void);
// @baa 0x0055b2c0
int C_0055b2c0::sub_0055b2c0(void)
{
    int param_1 = (int)this;

  sub_00556a70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_0055bc80 {
    int sub_0055a430(int, int);
};

// @baa 0x0055bc80
void UPackageMap::sub_0055bc80(void)
{
    int param_1 = (int)this;
  ((C_view_0055bc80 *)(this))->sub_0055a430(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

int sub_00556360(void);
// @baa 0x0055beb0
int UPackageMap::sub_0055beb0(void)
{
    int param_1 = (int)this;

  sub_00556360();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_0055c010 {
    int sub_0055a750(int, int);
};

// @baa 0x0055c010
void UPackageMap::sub_0055c010(void)
{
    int param_1 = (int)this;
  ((C_view_0055c010 *)(this))->sub_0055a750(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_0055c0e0 {
    int sub_0055a8d0(int, int);
};

// @baa 0x0055c0e0
undefined4 UPackageMap::sub_0055c0e0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0055c0e0 *)(this))->sub_0055a8d0(param_2, param_3);
  return param_1;
}

struct C_view_0055c200 {
    int sub_0055a9f0(int, int);
};

// @baa 0x0055c200
void UPackageMap::sub_0055c200(void)
{
    int param_1 = (int)this;
  ((C_view_0055c200 *)(this))->sub_0055a9f0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_0055d920 {
    int sub_0055d920();
};

// @baa 0x0055d920
int C_0055d920::sub_0055d920(void)
{
    int param_1 = (int)this;

  sub_00556a70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00556830(void);
// @baa 0x0055ee50
int UPackageMap::sub_0055ee50(void)
{
    int param_1 = (int)this;

  sub_00556830();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00556890(void);
// @baa 0x0055ee70
int APrefabInstance::sub_0055ee70(void)
{
    int param_1 = (int)this;

  sub_00556890();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055ee90 {
    int sub_0055ee90();
};

int sub_005568f0(void);
// @baa 0x0055ee90
int C_0055ee90::sub_0055ee90(void)
{
    int param_1 = (int)this;

  sub_005568f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055eeb0 {
    int sub_0055eeb0();
};

int sub_00556950(void);
// @baa 0x0055eeb0
int C_0055eeb0::sub_0055eeb0(void)
{
    int param_1 = (int)this;

  sub_00556950();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055eed0 {
    int sub_0055eed0();
};

int sub_005569b0(void);
// @baa 0x0055eed0
int C_0055eed0::sub_0055eed0(void)
{
    int param_1 = (int)this;

  sub_005569b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055ef10 {
    int sub_0055ef10();
};

// @baa 0x0055ef10
int C_0055ef10::sub_0055ef10(void)
{
    int param_1 = (int)this;

  sub_00556a70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0055b950();
// @baa 0x0055ef30
void sub_0055ef30(void) { sub_0055b950(); }

struct C_0055ef40 {
    int sub_0055ef40();
};

extern "C" __declspec(dllimport) int GetCurrentThreadId(...);
// @baa 0x0055ef40
int C_0055ef40::sub_0055ef40(void)
{
    int param_1 = (int)this;

  DWORD DVar1;
  
  sub_005568f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x3c) = DVar1;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return param_1;
}
