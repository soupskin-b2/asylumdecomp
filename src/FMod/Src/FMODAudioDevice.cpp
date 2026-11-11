// FMODAudioDevice.cpp (part 1 of 6): 467 functions
// Placed here by: neighbours 360, class 89, callers 17, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct T_0053f500 { BYTE b[32]; };

// @baa 0x0053f500
template INT TArray<T_0053f500>::Add(INT);

// @baa 0x0053f590
int UPackageMap::sub_0053f590(void) { return *(int*)((char*)this + 4); }

struct T_0053f5a0 { BYTE b[24]; };

// @baa 0x0053f5a0
template INT TArray<T_0053f5a0>::Add(INT);

struct T_00540f60 { BYTE b[28]; };

// @baa 0x00540f60
template INT TArray<T_00540f60>::Add(INT);

struct C { C* sub_00541000(void); };

// @baa 0x00541000
C* C::sub_00541000(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00541010 { int sub_00541010(void); };

// @baa 0x00541010
int C_00541010::sub_00541010(void) { return *(int*)((char*)this + 4); }

struct T_00541020 { BYTE b[16]; };

// @baa 0x00541020
template INT TArray<T_00541020>::Add(INT);

struct C_00547fc0 {
    int sub_00547fc0(int);
};

// @baa 0x00547fc0
int C_00547fc0::sub_00547fc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00547fe0 {
    int sub_00547fe0();
};

// @baa 0x00547fe0
int C_00547fe0::sub_00547fe0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00548000 {
    int sub_00548000();
};

// @baa 0x00548000
int C_00548000::sub_00548000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_view {
    int sub_00417ef0(int);
};

// @baa 0x00548020
undefined4 UObject::sub_00548020(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_00417ef0(param_2);
  return param_1;
}

// @baa 0x00548080
int UObject::sub_00548080(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

typedef uint size_t;

struct C_view_00548090 {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00548090
undefined4 * UObject::sub_00548090(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view_00548090 *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  param_1[3] = param_2[1];
  return param_1;
}

struct C_005480d0 {
    int sub_005480d0(int);
};

// @baa 0x005480d0
int C_005480d0::sub_005480d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x0054e270
int UObject::sub_0054e270(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

// @baa 0x0054e3d0
int UObject::sub_0054e3d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_view_00551c00 {
    int sub_0054e1f0(int, int);
};

// @baa 0x00551c00
int UFMODAudioDevice::sub_00551c00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00551c00 *)(this))->sub_0054e1f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00551c30 {
    int sub_00551c30();
};

// @baa 0x00551c30
int C_00551c30::sub_00551c30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00551c40 {
    int sub_00551c40(int);
    int sub_0054e370(int, int);
};

// @baa 0x00551c40
int C_00551c40::sub_00551c40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00551c40 *)(this))->sub_0054e370((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00551c70 {
    int sub_00551c70(int);
    int sub_0054e370(int, int);
};

// @baa 0x00551c70
int C_00551c70::sub_00551c70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00551c70 *)(this))->sub_0054e370((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_view_00551f80 {
    int sub_005518a0(int);
};

// @baa 0x00551f80
undefined4 * UObject::sub_00551f80(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00551f80 *)(((char *)this + 4)))->sub_005518a0(param_2[1]);
  return param_1;
}

struct C_view_00551fa0 {
    int sub_005518a0(int);
};

// @baa 0x00551fa0
undefined4 * UObject::sub_00551fa0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00551fa0 *)(((char *)this + 4)))->sub_005518a0(param_2[1]);
  param_1[4] = 0xffffffff;
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

struct TConstSetBitIterator {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator& operator++();
};

TConstSetBitIterator::TConstSetBitIterator(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552b90
TConstSetBitIterator& TConstSetBitIterator::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552be0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552be0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552be0& operator++();
};

TConstSetBitIterator_00552be0::TConstSetBitIterator_00552be0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552be0
TConstSetBitIterator_00552be0& TConstSetBitIterator_00552be0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552c30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552c30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552c30& operator++();
};

TConstSetBitIterator_00552c30::TConstSetBitIterator_00552c30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552c30
TConstSetBitIterator_00552c30& TConstSetBitIterator_00552c30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552c80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552c80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552c80& operator++();
};

TConstSetBitIterator_00552c80::TConstSetBitIterator_00552c80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552c80
TConstSetBitIterator_00552c80& TConstSetBitIterator_00552c80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552cd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552cd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552cd0& operator++();
};

TConstSetBitIterator_00552cd0::TConstSetBitIterator_00552cd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552cd0
TConstSetBitIterator_00552cd0& TConstSetBitIterator_00552cd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552d20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552d20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552d20& operator++();
};

TConstSetBitIterator_00552d20::TConstSetBitIterator_00552d20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552d20
TConstSetBitIterator_00552d20& TConstSetBitIterator_00552d20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552d70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552d70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552d70& operator++();
};

TConstSetBitIterator_00552d70::TConstSetBitIterator_00552d70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552d70
TConstSetBitIterator_00552d70& TConstSetBitIterator_00552d70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552dc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552dc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552dc0& operator++();
};

TConstSetBitIterator_00552dc0::TConstSetBitIterator_00552dc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552dc0
TConstSetBitIterator_00552dc0& TConstSetBitIterator_00552dc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552e10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552e10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552e10& operator++();
};

TConstSetBitIterator_00552e10::TConstSetBitIterator_00552e10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552e10
TConstSetBitIterator_00552e10& TConstSetBitIterator_00552e10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552e60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552e60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552e60& operator++();
};

TConstSetBitIterator_00552e60::TConstSetBitIterator_00552e60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552e60
TConstSetBitIterator_00552e60& TConstSetBitIterator_00552e60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552eb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552eb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552eb0& operator++();
};

TConstSetBitIterator_00552eb0::TConstSetBitIterator_00552eb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552eb0
TConstSetBitIterator_00552eb0& TConstSetBitIterator_00552eb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552f00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552f00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552f00& operator++();
};

TConstSetBitIterator_00552f00::TConstSetBitIterator_00552f00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552f00
TConstSetBitIterator_00552f00& TConstSetBitIterator_00552f00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552f50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552f50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552f50& operator++();
};

TConstSetBitIterator_00552f50::TConstSetBitIterator_00552f50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552f50
TConstSetBitIterator_00552f50& TConstSetBitIterator_00552f50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552fa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552fa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552fa0& operator++();
};

TConstSetBitIterator_00552fa0::TConstSetBitIterator_00552fa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552fa0
TConstSetBitIterator_00552fa0& TConstSetBitIterator_00552fa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00552ff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00552ff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00552ff0& operator++();
};

TConstSetBitIterator_00552ff0::TConstSetBitIterator_00552ff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00552ff0
TConstSetBitIterator_00552ff0& TConstSetBitIterator_00552ff0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00553040 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00553040(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00553040& operator++();
};

TConstSetBitIterator_00553040::TConstSetBitIterator_00553040(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00553040
TConstSetBitIterator_00553040& TConstSetBitIterator_00553040::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00553090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00553090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00553090& operator++();
};

TConstSetBitIterator_00553090::TConstSetBitIterator_00553090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00553090
TConstSetBitIterator_00553090& TConstSetBitIterator_00553090::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005530e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005530e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005530e0& operator++();
};

TConstSetBitIterator_005530e0::TConstSetBitIterator_005530e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005530e0
TConstSetBitIterator_005530e0& TConstSetBitIterator_005530e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00553130 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00553130(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00553130& operator++();
};

TConstSetBitIterator_00553130::TConstSetBitIterator_00553130(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00553130
TConstSetBitIterator_00553130& TConstSetBitIterator_00553130::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_005555b0 {
    int sub_0054e1f0(int, int);
};

// @baa 0x005555b0
int UFMODAudioDevice::sub_005555b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_005555b0 *)(this))->sub_0054e1f0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_005555f0 {
    int sub_005555f0();
};

// @baa 0x005555f0
int C_005555f0::sub_005555f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00555600 {
    int sub_00555600();
};

// @baa 0x00555600
int C_00555600::sub_00555600(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_00555610 {
    int sub_00555610(int);
    int sub_0054e370(int, int);
};

// @baa 0x00555610
int C_00555610::sub_00555610(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00555610 *)(this))->sub_0054e370((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_00555650 {
    int sub_00555650(int);
    int sub_0054e370(int, int);
};

// @baa 0x00555650
int C_00555650::sub_00555650(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00555650 *)(this))->sub_0054e370((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct TConstSetBitIterator_005556f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005556f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005556f0& operator++();
};

TConstSetBitIterator_005556f0::TConstSetBitIterator_005556f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005556f0
TConstSetBitIterator_005556f0& TConstSetBitIterator_005556f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00555c00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00555c00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00555c00& operator++();
};

TConstSetBitIterator_00555c00::TConstSetBitIterator_00555c00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00555c00
TConstSetBitIterator_00555c00& TConstSetBitIterator_00555c00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00555e30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00555e30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00555e30& operator++();
};

TConstSetBitIterator_00555e30::TConstSetBitIterator_00555e30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00555e30
TConstSetBitIterator_00555e30& TConstSetBitIterator_00555e30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005563c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005563c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005563c0& operator++();
};

TConstSetBitIterator_005563c0::TConstSetBitIterator_005563c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005563c0
TConstSetBitIterator_005563c0& TConstSetBitIterator_005563c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556540& operator++();
};

TConstSetBitIterator_00556540::TConstSetBitIterator_00556540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556540
TConstSetBitIterator_00556540& TConstSetBitIterator_00556540::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556590 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556590(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556590& operator++();
};

TConstSetBitIterator_00556590::TConstSetBitIterator_00556590(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556590
TConstSetBitIterator_00556590& TConstSetBitIterator_00556590::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005565e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005565e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005565e0& operator++();
};

TConstSetBitIterator_005565e0::TConstSetBitIterator_005565e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005565e0
TConstSetBitIterator_005565e0& TConstSetBitIterator_005565e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556600 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556600(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556600& operator++();
};

TConstSetBitIterator_00556600::TConstSetBitIterator_00556600(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556600
TConstSetBitIterator_00556600& TConstSetBitIterator_00556600::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556650 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556650(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556650& operator++();
};

TConstSetBitIterator_00556650::TConstSetBitIterator_00556650(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556650
TConstSetBitIterator_00556650& TConstSetBitIterator_00556650::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556670 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556670(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556670& operator++();
};

TConstSetBitIterator_00556670::TConstSetBitIterator_00556670(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556670
TConstSetBitIterator_00556670& TConstSetBitIterator_00556670::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005566c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005566c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005566c0& operator++();
};

TConstSetBitIterator_005566c0::TConstSetBitIterator_005566c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005566c0
TConstSetBitIterator_005566c0& TConstSetBitIterator_005566c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005566e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005566e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005566e0& operator++();
};

TConstSetBitIterator_005566e0::TConstSetBitIterator_005566e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005566e0
TConstSetBitIterator_005566e0& TConstSetBitIterator_005566e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556730& operator++();
};

TConstSetBitIterator_00556730::TConstSetBitIterator_00556730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556730
TConstSetBitIterator_00556730& TConstSetBitIterator_00556730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556750 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556750(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556750& operator++();
};

TConstSetBitIterator_00556750::TConstSetBitIterator_00556750(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556750
TConstSetBitIterator_00556750& TConstSetBitIterator_00556750::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005567a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005567a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005567a0& operator++();
};

TConstSetBitIterator_005567a0::TConstSetBitIterator_005567a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005567a0
TConstSetBitIterator_005567a0& TConstSetBitIterator_005567a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005567c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005567c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005567c0& operator++();
};

TConstSetBitIterator_005567c0::TConstSetBitIterator_005567c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005567c0
TConstSetBitIterator_005567c0& TConstSetBitIterator_005567c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00556810 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00556810(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00556810& operator++();
};

TConstSetBitIterator_00556810::TConstSetBitIterator_00556810(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00556810
TConstSetBitIterator_00556810& TConstSetBitIterator_00556810::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005593e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005593e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005593e0& operator++();
};

TConstSetBitIterator_005593e0::TConstSetBitIterator_005593e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005593e0
TConstSetBitIterator_005593e0& TConstSetBitIterator_005593e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00559710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00559710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00559710& operator++();
};

TConstSetBitIterator_00559710::TConstSetBitIterator_00559710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00559710
TConstSetBitIterator_00559710& TConstSetBitIterator_00559710::operator++()
{
    It.Advance();
    return *this;
}

void sub_00557100();
// @baa 0x00559b20
void sub_00559b20(void) { sub_00557100(); }

void sub_00558010();
// @baa 0x00559d40
void sub_00559d40(void) { sub_00558010(); }

struct TConstSetBitIterator_00559d50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00559d50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00559d50& operator++();
};

TConstSetBitIterator_00559d50::TConstSetBitIterator_00559d50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00559d50
TConstSetBitIterator_00559d50& TConstSetBitIterator_00559d50::operator++()
{
    It.Advance();
    return *this;
}

void sub_005580b0();
// @baa 0x00559d70
void sub_00559d70(void) { sub_005580b0(); }

struct TConstSetBitIterator_00559d80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00559d80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00559d80& operator++();
};

TConstSetBitIterator_00559d80::TConstSetBitIterator_00559d80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00559d80
TConstSetBitIterator_00559d80& TConstSetBitIterator_00559d80::operator++()
{
    It.Advance();
    return *this;
}

struct C_0055a3f0 {
    void sub_0055a3f0();
    int sub_00558240(int);
};

// @baa 0x0055a3f0
void C_0055a3f0::sub_0055a3f0(void)
{
    int param_1 = (int)this;
  ((C_0055a3f0 *)((*(char **)((char *)this + 0x10))))->sub_00558240(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0055a410 {
    void sub_0055a410();
    int sub_005584d0(int);
};

// @baa 0x0055a410
void C_0055a410::sub_0055a410(void)
{
    int param_1 = (int)this;
  ((C_0055a410 *)((*(char **)((char *)this + 0x10))))->sub_005584d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_00556360(void);
// @baa 0x0055a5b0
int UPackageMap::sub_0055a5b0(void)
{
    int param_1 = (int)this;

  sub_00556360();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00556830(void);
// @baa 0x0055b200
int UPackageMap::sub_0055b200(void)
{
    int param_1 = (int)this;

  sub_00556830();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00556890(void);
// @baa 0x0055b220
int APrefabInstance::sub_0055b220(void)
{
    int param_1 = (int)this;

  sub_00556890();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055b240 {
    int sub_0055b240();
};

int sub_005568f0(void);
// @baa 0x0055b240
int C_0055b240::sub_0055b240(void)
{
    int param_1 = (int)this;

  sub_005568f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055b260 {
    int sub_0055b260();
};

int sub_00556950(void);
// @baa 0x0055b260
int C_0055b260::sub_0055b260(void)
{
    int param_1 = (int)this;

  sub_00556950();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055b280 {
    int sub_0055b280();
};

int sub_005569b0(void);
// @baa 0x0055b280
int C_0055b280::sub_0055b280(void)
{
    int param_1 = (int)this;

  sub_005569b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00556a10(void);
// @baa 0x0055b2a0
int UFMODAudioDevice::sub_0055b2a0(void)
{
    int param_1 = (int)this;

  sub_00556a10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_0055c310 {
    int sub_0055aab0(int, int);
};

// @baa 0x0055c310
undefined4 UPackageMap::sub_0055c310(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0055c310 *)(this))->sub_0055aab0(param_2, param_3);
  return param_1;
}

struct C_0055c560 {
    undefined4 sub_0055c560(undefined4, undefined4);
    int sub_0055ac90(int, int);
};

// @baa 0x0055c560
undefined4 C_0055c560::sub_0055c560(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0055c560 *)(this))->sub_0055ac90(param_2, param_3);
  return param_1;
}

struct C_0055c680 {
    int sub_0055c680(undefined4, undefined4);
    int sub_0055adb0(int, int);
};

// @baa 0x0055c680
int C_0055c680::sub_0055c680(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0055c680 *)(this))->sub_0055adb0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0055c6a0 {
    int sub_0055c6a0(undefined4, undefined4);
    int sub_0055ae30(int, int);
};

// @baa 0x0055c6a0
int C_0055c6a0::sub_0055c6a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0055c6a0 *)(this))->sub_0055ae30(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0055c6c0 {
    int sub_0055c6c0(undefined4, undefined4);
    int sub_0055aeb0(int, int);
};

// @baa 0x0055c6c0
int C_0055c6c0::sub_0055c6c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0055c6c0 *)(this))->sub_0055aeb0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0055c6e0 {
    int sub_0055c6e0(undefined4, undefined4);
    int sub_0055af30(int, int);
};

// @baa 0x0055c6e0
int C_0055c6e0::sub_0055c6e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0055c6e0 *)(this))->sub_0055af30(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0055c700 {
    int sub_0055c700(undefined4, undefined4);
    int sub_0055afa0(int, int);
};

// @baa 0x0055c700
int C_0055c700::sub_0055c700(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0055c700 *)(this))->sub_0055afa0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0055c720 {
    int sub_0055c720(undefined4, undefined4);
    int sub_0055b020(int, int);
};

// @baa 0x0055c720
int C_0055c720::sub_0055c720(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0055c720 *)(this))->sub_0055b020(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0055c740 {
    int sub_0055c740(undefined4, undefined4);
    int sub_0055b090(int, int);
};

// @baa 0x0055c740
int C_0055c740::sub_0055c740(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0055c740 *)(this))->sub_0055b090(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0055c760 {
    int sub_0055c760(undefined4, undefined4);
    int sub_0055b110(int, int);
};

// @baa 0x0055c760
int C_0055c760::sub_0055c760(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0055c760 *)(this))->sub_0055b110(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0055c780 {
    int sub_0055c780(undefined4, undefined4);
    int sub_0055b190(int, int);
};

// @baa 0x0055c780
int C_0055c780::sub_0055c780(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0055c780 *)(this))->sub_0055b190(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x0055c7a0
int UPackageMap::sub_0055c7a0(void)
{
    int param_1 = (int)this;

  sub_00556830();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0055c7c0
int APrefabInstance::sub_0055c7c0(void)
{
    int param_1 = (int)this;

  sub_00556890();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055c7e0 {
    int sub_0055c7e0();
};

// @baa 0x0055c7e0
int C_0055c7e0::sub_0055c7e0(void)
{
    int param_1 = (int)this;

  sub_005568f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055c800 {
    int sub_0055c800();
};

// @baa 0x0055c800
int C_0055c800::sub_0055c800(void)
{
    int param_1 = (int)this;

  sub_00556950();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055c820 {
    int sub_0055c820();
};

// @baa 0x0055c820
int C_0055c820::sub_0055c820(void)
{
    int param_1 = (int)this;

  sub_005569b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0055c840
int UFMODAudioDevice::sub_0055c840(void)
{
    int param_1 = (int)this;

  sub_00556a10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055c860 {
    int sub_0055c860();
};

int sub_00556a70(void);
// @baa 0x0055c860
int C_0055c860::sub_0055c860(void)
{
    int param_1 = (int)this;

  sub_00556a70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055c910 {
    int sub_0055c910();
};

int sub_005572e0(void);
// @baa 0x0055c910
int C_0055c910::sub_0055c910(void)
{
    int param_1 = (int)this;

  sub_005572e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0055b950();
// @baa 0x0055c930
void sub_0055c930(void) { sub_0055b950(); }

void sub_0055b9e0();
// @baa 0x0055c940
void sub_0055c940(void) { sub_0055b9e0(); }

void sub_0055bb00();
// @baa 0x0055c950
void sub_0055c950(void) { sub_0055bb00(); }

void sub_0055b830();
// @baa 0x0055c960
void sub_0055c960(void) { sub_0055b830(); }

void sub_0055b8c0();
// @baa 0x0055c970
void sub_0055c970(void) { sub_0055b8c0(); }

void sub_0055b7a0();
// @baa 0x0055c9e0
void sub_0055c9e0(void) { sub_0055b7a0(); }

void sub_0055ba70();
// @baa 0x0055c9f0
void sub_0055c9f0(void) { sub_0055ba70(); }

void sub_0055bb90();
// @baa 0x0055ca00
void sub_0055ca00(void) { sub_0055bb90(); }

void sub_0055bc20();
// @baa 0x0055ca10
void sub_0055ca10(void) { sub_0055bc20(); }

// @baa 0x0055caa0
int UPackageMap::sub_0055caa0(void)
{
    int param_1 = (int)this;

  sub_00556360();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct C_view_0055cbc0 {
    int sub_0055a8d0(int, int);
};

// @baa 0x0055cbc0
int UPackageMap::sub_0055cbc0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_0055cbc0 *)(this))->sub_0055a8d0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_0055a750(int, int);
};

struct C_0055cbf0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_0055cbf0(void);
};

// @baa 0x0055cbf0
void C_0055cbf0::sub_0055cbf0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0055a750(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_0055ccb0 {
    int sub_0055aab0(int, int);
};

// @baa 0x0055ccb0
int UPackageMap::sub_0055ccb0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_0055ccb0 *)(this))->sub_0055aab0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_0055cce0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_0055a9f0(int, int);
};

struct C_0055cce0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_0055cce0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_0055cce0(void);
};

// @baa 0x0055cce0
void C_0055cce0::sub_0055cce0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0055a9f0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_0055cd80 {
    int sub_0055cd80(undefined4, undefined4, undefined4);
    int sub_0055ac90(int, int);
};

// @baa 0x0055cd80
int C_0055cd80::sub_0055cd80(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_0055cd80 *)(this))->sub_0055ac90(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_0055cdb0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_0055a430(int, int);
};

struct C_0055cdb0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_0055cdb0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_0055cdb0(void);
};

// @baa 0x0055cdb0
void C_0055cdb0::sub_0055cdb0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0055a430(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct T_0055ce90 { BYTE b[4]; };

// @baa 0x0055ce90
template INT TArray<T_0055ce90>::Add(INT);

// @baa 0x0055cf20
int sub_0055cf20(int a0) { return a0; }

struct C_0055cf30 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0055cf30* sub_0055cf30(INT value);
};

// @baa 0x0055cf30
C_0055cf30* C_0055cf30::sub_0055cf30(INT value)
{
    Unk00 = value;
    Unk04 = 4294967295;
    return this;
}

// @baa 0x0055cf50
bool sub_0055cf50(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0055cf60 { int sub_0055cf60(void); };

// @baa 0x0055cf60
int C_0055cf60::sub_0055cf60(void) { return *(int*)((char*)this + 4); }

struct T_0055cf70 { BYTE b[12]; };

// @baa 0x0055cf70
template INT TArray<T_0055cf70>::Add(INT);

struct C_0055d000 { int sub_0055d000(void); };

// @baa 0x0055d000
int C_0055d000::sub_0055d000(void) { return *(int*)((char*)this + 20); }

struct C_0055d010 { int sub_0055d010(void); };

// @baa 0x0055d010
int C_0055d010::sub_0055d010(void) { return *(int*)((char*)this + 0); }

// @baa 0x0055d020
void sub_0055d020(undefined4 * param_1, undefined4 param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return;
}

struct C_0055d080 { int sub_0055d080(void); };

// @baa 0x0055d080
int C_0055d080::sub_0055d080(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x0055d0c0
void sub_0055d0c0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0055d0d0 {
    int sub_0055d0d0(int);
};

// @baa 0x0055d0d0
int C_0055d0d0::sub_0055d0d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0xc;
}

struct C_0055d0e0 {
    int sub_0055d0e0();
};

// @baa 0x0055d0e0
int C_0055d0e0::sub_0055d0e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0055d170 {
    int sub_0055d170(int);
};

// @baa 0x0055d170
int C_0055d170::sub_0055d170(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0055d180 {
    int sub_0055d180();
};

// @baa 0x0055d180
int C_0055d180::sub_0055d180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct TConstSetBitIterator_0055d200 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0055d200(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0055d200& operator++();
};

TConstSetBitIterator_0055d200::TConstSetBitIterator_0055d200(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0055d200
TConstSetBitIterator_0055d200& TConstSetBitIterator_0055d200::operator++()
{
    It.Advance();
    return *this;
}

struct C_0055d250 {
    int sub_0055d250(int);
    int sub_0055d190(int, int);
};

// @baa 0x0055d250
int C_0055d250::sub_0055d250(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0055d250 *)(this))->sub_0055d190((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0xc;
  }
  return 0;
}

struct TConstSetBitIterator_0055d280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0055d280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0055d280& operator++();
};

TConstSetBitIterator_0055d280::TConstSetBitIterator_0055d280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0055d280
TConstSetBitIterator_0055d280& TConstSetBitIterator_0055d280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0055d2d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0055d2d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0055d2d0& operator++();
};

TConstSetBitIterator_0055d2d0::TConstSetBitIterator_0055d2d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0055d2d0
TConstSetBitIterator_0055d2d0& TConstSetBitIterator_0055d2d0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x0055d860
int UPackageMap::sub_0055d860(void)
{
    int param_1 = (int)this;

  sub_00556830();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0055d880
int APrefabInstance::sub_0055d880(void)
{
    int param_1 = (int)this;

  sub_00556890();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055d8a0 {
    int sub_0055d8a0();
};

// @baa 0x0055d8a0
int C_0055d8a0::sub_0055d8a0(void)
{
    int param_1 = (int)this;

  sub_005568f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055d8c0 {
    int sub_0055d8c0();
};

// @baa 0x0055d8c0
int C_0055d8c0::sub_0055d8c0(void)
{
    int param_1 = (int)this;

  sub_00556950();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0055d8e0 {
    int sub_0055d8e0();
};

// @baa 0x0055d8e0
int C_0055d8e0::sub_0055d8e0(void)
{
    int param_1 = (int)this;

  sub_005569b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0055d900
int UFMODAudioDevice::sub_0055d900(void)
{
    int param_1 = (int)this;

  sub_00556a10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0055eef0
int UFMODAudioDevice::sub_0055eef0(void)
{
    int param_1 = (int)this;

  sub_00556a10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00bef6d0 { void* Data; int Num; int Max; void sub_00bef6d0(); };

// @baa 0x00bef6d0
void C_00bef6d0::sub_00bef6d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

extern char g_021122f8[];
struct C_00e706d0 { void sub_00e706d0(void); };

// @baa 0x00e706d0
void C_00e706d0::sub_00e706d0(void) { *(int*)((char*)this + 0) = (int)g_021122f8; }

// @baa 0x00e706e0
int sub_00e706e0(void) { return 0; }

struct C_00e706f0 {
    undefined4 * sub_00e706f0(byte);
};

int sub_0053dfa0(...);
// @baa 0x00e706f0
undefined4 * C_00e706f0::sub_00e706f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021122f8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e70710 { int sub_00e70710(void); };

// @baa 0x00e70710
int C_00e70710::sub_00e70710(void) { return *(int*)((char*)this + 276); }

// @baa 0x00e708a0
undefined4 sub_00e708a0(int param_1)
{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x00e708c0
IMPLEMENT_CLASS_AT(UFMODAudioDevice, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\FMod\\Src\\FMODAudioDevice.cpp", 309);

// @baa 0x00e709d0
int UFMODAudioDevice::vf_000(void) { return 1; }

// @baa 0x00e709e0
bool UFMODAudioDevice::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e70a60
void UFMODAudioDevice::vf_1b4(int a0) {  }

// @baa 0x00e70a70
int __stdcall sub_00e70a70(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x00e70b20
void UFMODAudioDevice::vf_1bc(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x2a0) = (uint)(*(int *)(param_1 + 0x2a0) == 0);
  return;
}

// @baa 0x00e70bf0
void sub_00e70bf0(void) {  }

// @baa 0x00e70c00
void sub_00e70c00(void) {  }

extern undefined4 g_026cbfb0;
// @baa 0x00e70ce0
void UFMODAudioDevice::vf_1d0(void) {
  g_026cbfb0 = g_026cbfb0 + -1;
  return;
}

// @baa 0x00e70cf0
void UFMODAudioDevice::sub_00e70cf0(void) { *(int*)((char*)this + 16) = 1; }

// @baa 0x00e70d00
bool sub_00e70d00(undefined4 param_1, int param_2)
{
  return param_2 != 0;
}

// @baa 0x00e70e40
void UFMODAudioDevice::vf_198(int a0) { *(int*)((char*)this + 696) = a0; }

// @baa 0x00e70eb0
int UFMODAudioDevice::vf_134(void) { return 0; }

// @baa 0x00e70ec0
void UFMODAudioDevice::vf_110(int a0, int a1) {  }

struct C_00e70fa0 { int sub_00e70fa0(void); };

// @baa 0x00e70fa0
int C_00e70fa0::sub_00e70fa0(void) { return *(int*)((char*)this + 4); }

struct C_00e70fb0 { int sub_00e70fb0(void); };

// @baa 0x00e70fb0
int C_00e70fb0::sub_00e70fb0(void) { return *(int*)((char*)this + 4); }

struct C_00e70fc0 { int a, b, c; C_00e70fc0(); };

// @baa 0x00e70fc0
C_00e70fc0::C_00e70fc0() : a(0), b(0), c(0) {}

struct C_00e70fd0 { int sub_00e70fd0(void); };

// @baa 0x00e70fd0
int C_00e70fd0::sub_00e70fd0(void) { return *(int*)((char*)this + 4); }

struct C_00e70fe0 { int a, b, c; C_00e70fe0(); };

// @baa 0x00e70fe0
C_00e70fe0::C_00e70fe0() : a(0), b(0), c(0) {}

struct C_00e70ff0 { int sub_00e70ff0(void); };

// @baa 0x00e70ff0
int C_00e70ff0::sub_00e70ff0(void) { return *(int*)((char*)this + 4); }

struct C_00e71000 { int a, b, c; C_00e71000(); };

// @baa 0x00e71000
C_00e71000::C_00e71000() : a(0), b(0), c(0) {}

struct C_00e71010 { int sub_00e71010(void); };

// @baa 0x00e71010
int C_00e71010::sub_00e71010(void) { return *(int*)((char*)this + 4); }

struct C_00e71020 { int a, b, c; C_00e71020(); };

// @baa 0x00e71020
C_00e71020::C_00e71020() : a(0), b(0), c(0) {}

struct C_00e71030 { int a, b, c; C_00e71030(); };

// @baa 0x00e71030
C_00e71030::C_00e71030() : a(0), b(0), c(0) {}

struct C_00e71040 { int sub_00e71040(void); };

// @baa 0x00e71040
int C_00e71040::sub_00e71040(void) { return *(int*)((char*)this + 4); }

struct C_00e71050 { int a, b, c; C_00e71050(); };

// @baa 0x00e71050
C_00e71050::C_00e71050() : a(0), b(0), c(0) {}

struct C_00e71060 { int sub_00e71060(void); };

// @baa 0x00e71060
int C_00e71060::sub_00e71060(void) { return *(int*)((char*)this + 4); }

struct C_00e71070 { int sub_00e71070(void); };

// @baa 0x00e71070
int C_00e71070::sub_00e71070(void) { return *(int*)((char*)this + 0); }

struct C_00e710f0 { int sub_00e710f0(void); };

// @baa 0x00e710f0
int C_00e710f0::sub_00e710f0(void) { return *(int*)((char*)this + 0); }

struct C_00e71170 { int sub_00e71170(void); };

// @baa 0x00e71170
int C_00e71170::sub_00e71170(void) { return *(int*)((char*)this + 0); }

struct C_00e711f0 { int sub_00e711f0(void); };

// @baa 0x00e711f0
int C_00e711f0::sub_00e711f0(void) { return *(int*)((char*)this + 0); }

struct C_00e71270 { int sub_00e71270(void); };

// @baa 0x00e71270
int C_00e71270::sub_00e71270(void) { return *(int*)((char*)this + 0); }

struct C_00e712f0 {
    int sub_00e712f0();
};

// @baa 0x00e712f0
int C_00e712f0::sub_00e712f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00e71300 { int a, b; C_00e71300(int, int); };

// @baa 0x00e71300
C_00e71300::C_00e71300(int x, int y) : a(x), b(y) {}

struct C_00e71320 {
    int sub_00e71320();
};

// @baa 0x00e71320
int C_00e71320::sub_00e71320(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00e71330 { int a, b; C_00e71330(int, int); };

// @baa 0x00e71330
C_00e71330::C_00e71330(int x, int y) : a(x), b(y) {}

struct C_00e71350 {
    int sub_00e71350();
};

// @baa 0x00e71350
int C_00e71350::sub_00e71350(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00e71360 { int a, b; C_00e71360(int, int); };

// @baa 0x00e71360
C_00e71360::C_00e71360(int x, int y) : a(x), b(y) {}

struct C_00e71380 { int sub_00e71380(void); };

// @baa 0x00e71380
int C_00e71380::sub_00e71380(void) { return *(int*)((char*)this + 0); }

struct C_00e71390 { int sub_00e71390(void); };

// @baa 0x00e71390
int C_00e71390::sub_00e71390(void) { return *(int*)((char*)this + 0); }

struct C_00e713a0 { int sub_00e713a0(void); };

// @baa 0x00e713a0
int C_00e713a0::sub_00e713a0(void) { return *(int*)((char*)this + 0); }

struct C_00e713b0 { int sub_00e713b0(void); };

// @baa 0x00e713b0
int C_00e713b0::sub_00e713b0(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00e713c0(INT Index);
};

// @baa 0x00e713c0
DWORD* S::sub_00e713c0(INT Index)
{
    return &Items(Index);
}

// @baa 0x00e71410
int sub_00e71410(int a0) { return *(int*)a0; }

// @baa 0x00e71420
bool sub_00e71420(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00e71430
int sub_00e71430(int a0) { return a0; }

struct C_00e71440 { int a, b; C_00e71440(const C_00e71440 &); };

// @baa 0x00e71440
C_00e71440::C_00e71440(const C_00e71440 &o) : a(o.a), b(o.b) {}

// @baa 0x00e714a0
int sub_00e714a0(int a0) { return *(int*)a0; }

// @baa 0x00e714b0
bool sub_00e714b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00e714c0
int sub_00e714c0(int a0) { return a0; }

struct C_00e714d0 { int a, b; C_00e714d0(const C_00e714d0 &); };

// @baa 0x00e714d0
C_00e714d0::C_00e714d0(const C_00e714d0 &o) : a(o.a), b(o.b) {}

// @baa 0x00e71530
int sub_00e71530(int a0) { return *(int*)a0; }

// @baa 0x00e71540
bool sub_00e71540(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00e71550
int sub_00e71550(int a0) { return a0; }

struct C_00e71560 { int a, b; C_00e71560(const C_00e71560 &); };

// @baa 0x00e71560
C_00e71560::C_00e71560(const C_00e71560 &o) : a(o.a), b(o.b) {}

struct C_00e715c0 { int sub_00e715c0(void); };

// @baa 0x00e715c0
int C_00e715c0::sub_00e715c0(void) { return *(int*)((char*)this + 0); }

struct C_00e715d0 { int sub_00e715d0(void); };

// @baa 0x00e715d0
int C_00e715d0::sub_00e715d0(void) { return *(int*)((char*)this + 0); }

struct C_00e715e0 { int sub_00e715e0(void); };

// @baa 0x00e715e0
int C_00e715e0::sub_00e715e0(void) { return *(int*)((char*)this + 0); }

struct C_00e715f0 { int sub_00e715f0(void); };

// @baa 0x00e715f0
int C_00e715f0::sub_00e715f0(void) { return *(int*)((char*)this + 20); }

struct C_00e71600 { int sub_00e71600(void); };

// @baa 0x00e71600
int C_00e71600::sub_00e71600(void) { return *(int*)((char*)this + 20); }

struct C_00e71610 { int sub_00e71610(void); };

// @baa 0x00e71610
int C_00e71610::sub_00e71610(void) { return *(int*)((char*)this + 20); }

struct C_00e71620 { int sub_00e71620(void); };

// @baa 0x00e71620
int C_00e71620::sub_00e71620(void) { return *(int*)((char*)this + 20); }

struct C_00e71630 { int sub_00e71630(void); };

// @baa 0x00e71630
int C_00e71630::sub_00e71630(void) { return *(int*)((char*)this + 20); }

struct C_00e71640 { int sub_00e71640(void); };

// @baa 0x00e71640
int C_00e71640::sub_00e71640(void) { return *(int*)((char*)this + 20); }

int sub_005d88c0(...);
int sub_00c93400(void);
int sub_00cdbdc0(...);
extern undefined4 g_026c3c9c;
// @baa 0x00e716b0
void sub_00e716b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026c3c9c == 0) {
    g_026c3c9c = sub_00cdbdc0(L"Engine");
    sub_00c93400();
  }
  sub_005d88c0(g_026c3c9c,param_1,param_2,param_3);
  return;
}

struct C_00e716f0 { int a, b; C_00e716f0(const C_00e716f0 &); };

// @baa 0x00e716f0
C_00e716f0::C_00e716f0(const C_00e716f0 &o) : a(o.a), b(o.b) {}

struct C_00e71710 { int a, b; C_00e71710(const C_00e71710 &); };

// @baa 0x00e71710
C_00e71710::C_00e71710(const C_00e71710 &o) : a(o.a), b(o.b) {}

struct C_00e71730 { int a, b; C_00e71730(const C_00e71730 &); };

// @baa 0x00e71730
C_00e71730::C_00e71730(const C_00e71730 &o) : a(o.a), b(o.b) {}

// @baa 0x00e71750
int sub_00e71750(int a0) { return a0; }

// @baa 0x00e71760
int sub_00e71760(int a0) { return a0; }

struct C_00e71770 {
    undefined4 * sub_00e71770(byte);
};

// @baa 0x00e71770
undefined4 * C_00e71770::sub_00e71770(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021122f8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void*sub_01a37612(void*,int,size_t);
// @baa 0x00e71790
void*UFMODAudioDevice::vf_19c(void*param_2,int param_3)
{
int param_1=(int)this;

sub_01a37612(param_2,0,0x7c);
if(0!=param_3){
(*(int(__stdcall**)(int,int,int,int))(**(int**)(param_1+0x1d4)+0x60))((int)(*(int**)(param_1+0x1d4)),(int)(param_3),(int)(param_2),(int)(0));
}
return param_2;
}

int __stdcall sub_01763f46(int, int);
// @baa 0x00e717d0
INT UFMODAudioDevice::vf_0d4() {
  undefined4 local_8;
  undefined1 local_4 [4];
  sub_01763f46((int)(&local_8), (int)(local_4));
  return local_8;
}

struct S_00e726b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00e726b0(INT Index);
};

// @baa 0x00e726b0
DWORD* S_00e726b0::sub_00e726b0(INT Index)
{
    return &Items(Index);
}

struct C_00e72700{
int sub_00e72700(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00e72700
int C_00e72700::sub_00e72700(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct E { BYTE Bytes[36]; };

struct S_00e72760 {
    TArray<E> Items; // 0x00
    E* sub_00e72760(INT Index);
};

// @baa 0x00e72760
E* S_00e72760::sub_00e72760(INT Index)
{
    return &Items(Index);
}

struct S_00e727b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00e727b0(INT Index);
};

// @baa 0x00e727b0
DWORD* S_00e727b0::sub_00e727b0(INT Index)
{
    return &Items(Index);
}

struct C_00e72800{
int sub_00e72800(undefined4*);
};

// @baa 0x00e72800
int C_00e72800::sub_00e72800(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_00e72860{
int sub_00e72860(undefined4*);
};

// @baa 0x00e72860
int C_00e72860::sub_00e72860(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct S_00e728c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00e728c0(INT Index);
};

// @baa 0x00e728c0
DWORD* S_00e728c0::sub_00e728c0(INT Index)
{
    return &Items(Index);
}

struct C_00e72910{
int sub_00e72910(undefined4*);
};

// @baa 0x00e72910
int C_00e72910::sub_00e72910(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_00e72970 {
    int sub_00e72970(int);
};

// @baa 0x00e72970
int C_00e72970::sub_00e72970(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00e72980
void __stdcall sub_00e72980(int a0, int a1) {  }

struct C_00e72990 {
    int sub_00e72990(int);
};

// @baa 0x00e72990
int C_00e72990::sub_00e72990(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00e729a0 {
    int sub_00e729a0(int);
};

// @baa 0x00e729a0
int C_00e729a0::sub_00e729a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00e729b0
void __stdcall sub_00e729b0(int a0, int a1) {  }

struct C_00e729c0 {
    int sub_00e729c0(int);
};

// @baa 0x00e729c0
int C_00e729c0::sub_00e729c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00e729d0
void __stdcall sub_00e729d0(int a0, int a1) {  }

struct C_00e729e0 {
    int sub_00e729e0(int);
};

// @baa 0x00e729e0
int C_00e729e0::sub_00e729e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e729f0 {
    int sub_00e729f0(int);
};

// @baa 0x00e729f0
int C_00e729f0::sub_00e729f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00e72a00
void __stdcall sub_00e72a00(int a0, int a1) {  }

struct C_00e72a10 { int sub_00e72a10(void); };

// @baa 0x00e72a10
int C_00e72a10::sub_00e72a10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00e72a20 { int sub_00e72a20(void); };

// @baa 0x00e72a20
int C_00e72a20::sub_00e72a20(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00e72a30 { int sub_00e72a30(void); };

// @baa 0x00e72a30
int C_00e72a30::sub_00e72a30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00e72a40(INT Index);
};

// @baa 0x00e72a40
FFaceFXElement* UFxRenderWidget::sub_00e72a40(INT Index)
{
	return &BoneArray(Index);
}

struct C_00e72a90 {
    int sub_00e72a90(int);
};

// @baa 0x00e72a90
int C_00e72a90::sub_00e72a90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e72aa0 {
    int sub_00e72aa0(int);
};

// @baa 0x00e72aa0
int C_00e72aa0::sub_00e72aa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e72ab0 {
    int sub_00e72ab0(int);
};

// @baa 0x00e72ab0
int C_00e72ab0::sub_00e72ab0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e72ac0 {
    int sub_00e72ac0(int);
};

// @baa 0x00e72ac0
int C_00e72ac0::sub_00e72ac0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e72ad0 {
    int sub_00e72ad0(int);
};

// @baa 0x00e72ad0
int C_00e72ad0::sub_00e72ad0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e72ae0 {
    int sub_00e72ae0(int);
};

// @baa 0x00e72ae0
int C_00e72ae0::sub_00e72ae0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e72af0 {
    int sub_00e72af0();
};

// @baa 0x00e72af0
int C_00e72af0::sub_00e72af0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e72b10 {
    int sub_00e72b10();
};

// @baa 0x00e72b10
int C_00e72b10::sub_00e72b10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e72b30 {
    int sub_00e72b30();
};

// @baa 0x00e72b30
int C_00e72b30::sub_00e72b30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e72b50 {
    int sub_00e72b50();
};

// @baa 0x00e72b50
int C_00e72b50::sub_00e72b50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e72b70 {
    int sub_00e72b70();
};

// @baa 0x00e72b70
int C_00e72b70::sub_00e72b70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e72b90 {
    int sub_00e72b90();
};

// @baa 0x00e72b90
int C_00e72b90::sub_00e72b90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e72bb0 {
    void sub_00e72bb0(undefined4, undefined4, undefined4, float, float, undefined4);
};

int sub_00630f20(...);
// @baa 0x00e72bb0
void C_00e72bb0::sub_00e72bb0(undefined4 param_2, undefined4 param_3, undefined4 param_4, float param_5, float param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,(double)param_5,(double)param_6,param_7);
  return;
}

struct C_00e72bf0 {
    void sub_00e72bf0(undefined4, undefined4, undefined4, undefined4, float, float, undefined4, undefined4);
};

// @baa 0x00e72bf0
void C_00e72bf0::sub_00e72bf0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, float param_6, float param_7, undefined4 param_8, undefined4 param_9)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,(double)param_6,(double)param_7,param_8,
               param_9);
  return;
}

struct C_00e72c30 {
    void sub_00e72c30(undefined4, undefined4, undefined4);
};

// @baa 0x00e72c30
void C_00e72c30::sub_00e72c30(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4);
  return;
}

struct C_00e72c50 {
    void sub_00e72c50(undefined4, undefined4, undefined4);
};

// @baa 0x00e72c50
void C_00e72c50::sub_00e72c50(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4);
  return;
}

struct C_00e72c70 {
    void sub_00e72c70(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00e72c70
void C_00e72c70::sub_00e72c70(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

#pragma pack(push, 1)
struct CRect { char _pad0[1]; };

#pragma pack(pop)
struct C_00e72ca0 {
    void sub_00e72ca0(int, int, int, int);
};

// @baa 0x00e72ca0
void C_00e72ca0::sub_00e72ca0(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;

  sub_00630f20(this_,param_1,param_2,param_3,param_4);
  return;
}

struct C_00e72cc0 {
    void sub_00e72cc0(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00e72cc0
void C_00e72cc0::sub_00e72cc0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5);
  return;
}

// @baa 0x00e72d90
void sub_00e72d90(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00e72db0
void sub_00e72db0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00e72dd0
void sub_00e72dd0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct M_00e72e00 { void sub_0040fcc0(); };

struct C_00e72e00 { char pad[4]; M_00e72e00 m; void sub_00e72e00(); };

// @baa 0x00e72e00
void C_00e72e00::sub_00e72e00() { m.sub_0040fcc0(); }

struct C_00e73350 { void* Data; int Num; int Max; void sub_0040fcc0(); };

// @baa 0x00e73350
void sub_00e73350(C_00e73350 p) {
    p.sub_0040fcc0();
}

struct M_00e73ef0 { void sub_0040fcc0(); };

struct C_00e73ef0 { char pad[20]; M_00e73ef0 m; void sub_00e73ef0(); };

// @baa 0x00e73ef0
void C_00e73ef0::sub_00e73ef0() { m.sub_0040fcc0(); }

struct C_00e742c0 { void* Data; int Num; int Max; void sub_00e742c0(); };

// @baa 0x00e742c0
void C_00e742c0::sub_00e742c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e74360 { void* Data; int Num; int Max; void sub_00e74360(); };

// @baa 0x00e74360
void C_00e74360::sub_00e74360() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e744a0 { void* Data; int Num; int Max; void sub_00e744a0(); };

// @baa 0x00e744a0
void C_00e744a0::sub_00e744a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00e74500;
// @baa 0x00e74500
template INT TArray<T_00e74500*>::RemoveItem(T_00e74500* const&);

struct C_00e74580 { void* Data; int Num; int Max; void sub_00e74580(); };

// @baa 0x00e74580
void C_00e74580::sub_00e74580() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e74720 { int sub_00e74720(void); };

// @baa 0x00e74720
int C_00e74720::sub_00e74720(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00e74730
void __stdcall sub_00e74730(int a0, int a1) {  }

struct C_00e74740 {
    undefined4 sub_00e74740(byte);
    int sub_0040fcc0();
};

// @baa 0x00e74740
undefined4 C_00e74740::sub_00e74740(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e74740 *)(((char *)this + 0x14)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e74800
int UFMODAudioDevice::sub_00e74800(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e74810
int UFMODAudioDevice::sub_00e74810(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e748b0
int UFMODAudioDevice::sub_00e748b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e748c0
int UFMODAudioDevice::sub_00e748c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e74960 {
    int sub_00e74960(int);
};

// @baa 0x00e74960
int C_00e74960::sub_00e74960(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e74970 {
    int sub_00e74970(int);
};

// @baa 0x00e74970
int C_00e74970::sub_00e74970(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e74980 {
    int sub_00e74980();
};

// @baa 0x00e74980
int C_00e74980::sub_00e74980(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00e74990 {
    int sub_00e74990();
};

// @baa 0x00e74990
int C_00e74990::sub_00e74990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00e749a0 {
    int sub_00e749a0();
};

// @baa 0x00e749a0
int C_00e749a0::sub_00e749a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00e749b0 {
    int sub_00e749b0();
};

// @baa 0x00e749b0
int C_00e749b0::sub_00e749b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00e749c0 {
    int sub_00e749c0();
};

// @baa 0x00e749c0
int C_00e749c0::sub_00e749c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00e749d0 {
    int sub_00e749d0();
};

// @baa 0x00e749d0
int C_00e749d0::sub_00e749d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00e749e0 {
    int sub_00e749e0();
};

// @baa 0x00e749e0
int C_00e749e0::sub_00e749e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00e75420
int UFMODAudioDevice::sub_00e75420(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00e75430 { void* Data; int Num; int Max; void sub_00e75430(); };

// @baa 0x00e75430
void C_00e75430::sub_00e75430() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00e754f0
int UFMODAudioDevice::sub_00e754f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e75500
int UFMODAudioDevice::sub_00e75500(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e75510
int UFMODAudioDevice::sub_00e75510(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e75520
int UFMODAudioDevice::sub_00e75520(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00e75540
int UFMODAudioDevice::sub_00e75540(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x00e755b0
int UFMODAudioDevice::sub_00e755b0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e75620
int UFMODAudioDevice::sub_00e75620(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e75690
int UFMODAudioDevice::sub_00e75690(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct TConstSetBitIterator_00e75a00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75a00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75a00& operator++();
};

TConstSetBitIterator_00e75a00::TConstSetBitIterator_00e75a00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75a00
TConstSetBitIterator_00e75a00& TConstSetBitIterator_00e75a00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e75a20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75a20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75a20& operator++();
};

TConstSetBitIterator_00e75a20::TConstSetBitIterator_00e75a20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75a20
TConstSetBitIterator_00e75a20& TConstSetBitIterator_00e75a20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e75a40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75a40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75a40& operator++();
};

TConstSetBitIterator_00e75a40::TConstSetBitIterator_00e75a40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75a40
TConstSetBitIterator_00e75a40& TConstSetBitIterator_00e75a40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e75a60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75a60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75a60& operator++();
};

TConstSetBitIterator_00e75a60::TConstSetBitIterator_00e75a60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75a60
TConstSetBitIterator_00e75a60& TConstSetBitIterator_00e75a60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e75ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75ab0& operator++();
};

TConstSetBitIterator_00e75ab0::TConstSetBitIterator_00e75ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75ab0
TConstSetBitIterator_00e75ab0& TConstSetBitIterator_00e75ab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e75b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75b00& operator++();
};

TConstSetBitIterator_00e75b00::TConstSetBitIterator_00e75b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75b00
TConstSetBitIterator_00e75b00& TConstSetBitIterator_00e75b00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e75b50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75b50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75b50& operator++();
};

TConstSetBitIterator_00e75b50::TConstSetBitIterator_00e75b50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75b50
TConstSetBitIterator_00e75b50& TConstSetBitIterator_00e75b50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e75b70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75b70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75b70& operator++();
};

TConstSetBitIterator_00e75b70::TConstSetBitIterator_00e75b70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75b70
TConstSetBitIterator_00e75b70& TConstSetBitIterator_00e75b70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e75b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75b90& operator++();
};

TConstSetBitIterator_00e75b90::TConstSetBitIterator_00e75b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75b90
TConstSetBitIterator_00e75b90& TConstSetBitIterator_00e75b90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e75bb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75bb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75bb0& operator++();
};

TConstSetBitIterator_00e75bb0::TConstSetBitIterator_00e75bb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75bb0
TConstSetBitIterator_00e75bb0& TConstSetBitIterator_00e75bb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e75c00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75c00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75c00& operator++();
};

TConstSetBitIterator_00e75c00::TConstSetBitIterator_00e75c00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75c00
TConstSetBitIterator_00e75c00& TConstSetBitIterator_00e75c00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e75c50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e75c50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e75c50& operator++();
};

TConstSetBitIterator_00e75c50::TConstSetBitIterator_00e75c50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e75c50
TConstSetBitIterator_00e75c50& TConstSetBitIterator_00e75c50::operator++()
{
    It.Advance();
    return *this;
}

struct C_00e7ae90 {
    int sub_00e7ae90();
};

// @baa 0x00e7ae90
int C_00e7ae90::sub_00e7ae90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e7aeb0 {
    int sub_00e7aeb0();
};

// @baa 0x00e7aeb0
int C_00e7aeb0::sub_00e7aeb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00e7aec0 {
    int sub_00e7aec0();
};

// @baa 0x00e7aec0
int C_00e7aec0::sub_00e7aec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x18;
}

struct C_view_00e7aed0 {
    int sub_00e75550(int, int);
};

// @baa 0x00e7aed0
int UFMODAudioDevice::sub_00e7aed0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00e7aed0 *)(this))->sub_00e75550((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00e7af00 {
    int sub_00e755c0(int, int);
};

// @baa 0x00e7af00
int UFMODAudioDevice::sub_00e7af00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00e7af00 *)(this))->sub_00e755c0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00e7af30 {
    int sub_00e75630(int, int);
};

// @baa 0x00e7af30
int UFMODAudioDevice::sub_00e7af30(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00e7af30 *)(this))->sub_00e75630((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00e7af60 {
    int sub_00e75630(int, int);
};

// @baa 0x00e7af60
int UFMODAudioDevice::sub_00e7af60(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00e7af60 *)(this))->sub_00e75630((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00e7af90 {
    int sub_0054e1f0(int, int);
};

// @baa 0x00e7af90
int UFMODAudioDevice::sub_00e7af90(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00e7af90 *)(this))->sub_0054e1f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct TConstSetBitIterator_00e7b200 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e7b200(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e7b200& operator++();
};

TConstSetBitIterator_00e7b200::TConstSetBitIterator_00e7b200(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e7b200
TConstSetBitIterator_00e7b200& TConstSetBitIterator_00e7b200::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e7b250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e7b250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e7b250& operator++();
};

TConstSetBitIterator_00e7b250::TConstSetBitIterator_00e7b250(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e7b250
TConstSetBitIterator_00e7b250& TConstSetBitIterator_00e7b250::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e7b2a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e7b2a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e7b2a0& operator++();
};

TConstSetBitIterator_00e7b2a0::TConstSetBitIterator_00e7b2a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e7b2a0
TConstSetBitIterator_00e7b2a0& TConstSetBitIterator_00e7b2a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e7b410 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e7b410(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e7b410& operator++();
};

TConstSetBitIterator_00e7b410::TConstSetBitIterator_00e7b410(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e7b410
TConstSetBitIterator_00e7b410& TConstSetBitIterator_00e7b410::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e7b460 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e7b460(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e7b460& operator++();
};

TConstSetBitIterator_00e7b460::TConstSetBitIterator_00e7b460(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e7b460
TConstSetBitIterator_00e7b460& TConstSetBitIterator_00e7b460::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e7b4b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e7b4b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e7b4b0& operator++();
};

TConstSetBitIterator_00e7b4b0::TConstSetBitIterator_00e7b4b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e7b4b0
TConstSetBitIterator_00e7b4b0& TConstSetBitIterator_00e7b4b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00e7c020 {
    int sub_0054e1f0(int, int);
};

// @baa 0x00e7c020
undefined4 UFMODAudioDevice::sub_00e7c020(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00e7c020 *)(this))->sub_0054e1f0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}

struct TConstSetBitIterator_00e7c1e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e7c1e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e7c1e0& operator++();
};

TConstSetBitIterator_00e7c1e0::TConstSetBitIterator_00e7c1e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e7c1e0
TConstSetBitIterator_00e7c1e0& TConstSetBitIterator_00e7c1e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00e7c200 {
    int sub_00e7b080(int);
};

// @baa 0x00e7c200
void UFMODAudioDevice::sub_00e7c200(void)
{
    int param_1 = (int)this;
  ((C_view_00e7c200 *)((*(char **)((char *)this + 0x10))))->sub_00e7b080(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00e7c220 {
    int sub_00e7b100(int);
};

// @baa 0x00e7c220
void UFMODAudioDevice::sub_00e7c220(void)
{
    int param_1 = (int)this;
  ((C_view_00e7c220 *)((*(char **)((char *)this + 0x10))))->sub_00e7b100(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00e7c240 {
    int sub_00e7b180(int);
};

// @baa 0x00e7c240
void UFMODAudioDevice::sub_00e7c240(void)
{
    int param_1 = (int)this;
  ((C_view_00e7c240 *)((*(char **)((char *)this + 0x10))))->sub_00e7b180(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_00e7c9e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e7c9e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e7c9e0& operator++();
};

TConstSetBitIterator_00e7c9e0::TConstSetBitIterator_00e7c9e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e7c9e0
TConstSetBitIterator_00e7c9e0& TConstSetBitIterator_00e7c9e0::operator++()
{
    It.Advance();
    return *this;
}

void sub_00e7c060();
// @baa 0x00e7dea0
void sub_00e7dea0(void) { sub_00e7c060(); }

void sub_00e7c0e0();
// @baa 0x00e7deb0
void sub_00e7deb0(void) { sub_00e7c0e0(); }

void sub_00e7c160();
// @baa 0x00e7dec0
void sub_00e7dec0(void) { sub_00e7c160(); }

struct TConstSetBitIterator_00e7ded0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e7ded0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e7ded0& operator++();
};

TConstSetBitIterator_00e7ded0::TConstSetBitIterator_00e7ded0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e7ded0
TConstSetBitIterator_00e7ded0& TConstSetBitIterator_00e7ded0::operator++()
{
    It.Advance();
    return *this;
}

int sub_00e7b2f0(void);
// @baa 0x00e7e4f0
int UFMODAudioDevice::sub_00e7e4f0(void)
{
    int param_1 = (int)this;

  sub_00e7b2f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00e7b350(void);
// @baa 0x00e7e510
int UFMODAudioDevice::sub_00e7e510(void)
{
    int param_1 = (int)this;

  sub_00e7b350();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00e7b3b0(void);
// @baa 0x00e7e530
int UFMODAudioDevice::sub_00e7e530(void)
{
    int param_1 = (int)this;

  sub_00e7b3b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00e7f870 {
    int sub_0055abd0(int, int);
};

// @baa 0x00e7f870
void UFMODAudioDevice::sub_00e7f870(void)
{
    int param_1 = (int)this;
  ((C_view_00e7f870 *)(this))->sub_0055abd0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00e7f880 {
    int sub_00e7e340(int, int);
};

// @baa 0x00e7f880
undefined4 UFMODAudioDevice::sub_00e7f880(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00e7f880 *)(this))->sub_00e7e340(param_2, param_3);
  return param_1;
}

struct C_view_00e7f8a0 {
    int sub_00e7e3a0(int, int);
};

// @baa 0x00e7f8a0
int UFMODAudioDevice::sub_00e7f8a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00e7f8a0 *)(this))->sub_00e7e3a0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00e7f8c0 {
    int sub_00e7e410(int, int);
};

// @baa 0x00e7f8c0
int UFMODAudioDevice::sub_00e7f8c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00e7f8c0 *)(this))->sub_00e7e410(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00e7f8e0 {
    int sub_00e7e480(int, int);
};

// @baa 0x00e7f8e0
int UFMODAudioDevice::sub_00e7f8e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00e7f8e0 *)(this))->sub_00e7e480(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x00e7f900
int UFMODAudioDevice::sub_00e7f900(void)
{
    int param_1 = (int)this;

  sub_00e7b2f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e7f920
int UFMODAudioDevice::sub_00e7f920(void)
{
    int param_1 = (int)this;

  sub_00e7b350();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e7f940
int UFMODAudioDevice::sub_00e7f940(void)
{
    int param_1 = (int)this;

  sub_00e7b3b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00e7f480();
// @baa 0x00e7f960
void sub_00e7f960(void) { sub_00e7f480(); }

void sub_00e7f4f0();
// @baa 0x00e7f970
void sub_00e7f970(void) { sub_00e7f4f0(); }

void sub_00e7f560();
// @baa 0x00e7f980
void sub_00e7f980(void) { sub_00e7f560(); }

int sub_00e7f370(void);
// @baa 0x00e7f990
undefined4 UFMODAudioDevice::sub_00e7f990(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e7f370();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00e7f750();
// @baa 0x00e7fa30
void sub_00e7fa30(void) { sub_00e7f750(); }

struct C_view_00e7fa80 {
    int sub_00e7e340(int, int);
};

// @baa 0x00e7fa80
int UFMODAudioDevice::sub_00e7fa80(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00e7fa80 *)(this))->sub_00e7e340(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00e7fab0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_0055abd0(int, int);
};

struct C_00e7fab0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00e7fab0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00e7fab0(void);
};

// @baa 0x00e7fab0
void C_00e7fab0::sub_00e7fab0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0055abd0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00e7fad0
int UFMODAudioDevice::sub_00e7fad0(void)
{
    int param_1 = (int)this;

  sub_00e7b2f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e7faf0
int UFMODAudioDevice::sub_00e7faf0(void)
{
    int param_1 = (int)this;

  sub_00e7b350();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e7fb10
int UFMODAudioDevice::sub_00e7fb10(void)
{
    int param_1 = (int)this;

  sub_00e7b3b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e7fb30
void sub_00e7fb30(void) { sub_00e7f480(); }

// @baa 0x00e7fb40
void sub_00e7fb40(void) { sub_00e7f4f0(); }

// @baa 0x00e7fb50
void sub_00e7fb50(void) { sub_00e7f560(); }

// @baa 0x00e80ad0
int UFMODAudioDevice::sub_00e80ad0(void)
{
    int param_1 = (int)this;

  sub_00e7b2f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e80af0
int UFMODAudioDevice::sub_00e80af0(void)
{
    int param_1 = (int)this;

  sub_00e7b350();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e80b10
int UFMODAudioDevice::sub_00e80b10(void)
{
    int param_1 = (int)this;

  sub_00e7b3b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e80b30
void sub_00e80b30(void) { sub_00e7f480(); }

// @baa 0x00e80b40
void sub_00e80b40(void) { sub_00e7f4f0(); }

// @baa 0x00e80b50
void sub_00e80b50(void) { sub_00e7f560(); }

int sub_00e806d0(...);
// @baa 0x00e80b60
void UFMODAudioDevice::vf_15c(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e806d0(param_2,param_1);
  return;
}

// @baa 0x00e80dd0
int UFMODAudioDevice::vf_1c0(void) { return *(int*)((char*)this + 672); }

int sub_005c7a70(...);
int sub_00e80e20(void);
// @baa 0x00e80f40
undefined4 UFMODAudioDevice::sub_00e80f40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e80e20();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x35c);
  }
  return param_1;
}

// @baa 0x00e826a0
// @baa 0x00e826b0
// @baa 0x00e84480
int sub_00e84480(void) { return 1; }

extern char g_01f16174[];
struct C_00e84490 { void sub_00e84490(void); };

// @baa 0x00e84490
void C_00e84490::sub_00e84490(void) { *(int*)((char*)this + 0) = (int)g_01f16174; }

// @baa 0x00e84670
int __stdcall sub_00e84670(int a0) { return 0; }

// @baa 0x00e84680
void __stdcall sub_00e84680(int a0, int a1) {  }

// @baa 0x00e84690
void __stdcall sub_00e84690(int a0, int a1) {  }

// @baa 0x00e846a0
void __stdcall sub_00e846a0(int a0, int a1) {  }

// @baa 0x00e846b0
void __stdcall sub_00e846b0(int a0, int a1) {  }

// @baa 0x00e846c0
void __stdcall sub_00e846c0(int a0, int a1) {  }

struct C_00e846d0 {
    void sub_00e846d0();
};

// @baa 0x00e846d0
void C_00e846d0::sub_00e846d0()
{
    int *p = *(int **)(reinterpret_cast<char *>(this) + 0x220);
    *reinterpret_cast<DWORD *>(reinterpret_cast<char *>(p) + 0x3c) &= 0xfffffff7;
}

struct C_00e846e0 {
    void sub_00e846e0();
};

// @baa 0x00e846e0
void C_00e846e0::sub_00e846e0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x21d) = 1;
  return;
}

struct C_00e846f0 {
    void sub_00e846f0();
};

// @baa 0x00e846f0
void C_00e846f0::sub_00e846f0()
{
    ((DWORD*)*(DWORD**)((char*)this + 0x220))[0x3c / 4] |= 8;
}

// @baa 0x00e847a0
void __stdcall sub_00e847a0(int a0, int a1) {  }

// @baa 0x00e84800
int __stdcall sub_00e84800(int a0) { return 0; }

extern undefined4 *g_026cc1f0;
// @baa 0x00e84a90
undefined4 sub_00e84a90(void)
{
  if (g_026cc1f0 != 0) {
    return *g_026cc1f0;
  }
  return 0;
}

// @baa 0x00e84aa0
undefined4 sub_00e84aa0(undefined4 * param_1, int * param_2)
{
  if (g_026cc1f0 != 0) {
    *param_2 = *g_026cc1f0;
    g_026cc1f0 = g_026cc1f0 + 1;
    *param_1 = (undefined4)(g_026cc1f0);
    g_026cc1f0 = (undefined4 *)((undefined4)((int *)((int)g_026cc1f0 + *param_2)));
    return 1;
  }
  return 0;
}

extern undefined4 g_026cc200;
extern undefined4 g_026cc204;
// @baa 0x00e84e00
void sub_00e84e00(undefined4 param_1)
{
  g_026cc200 = 0;
  g_026cc204 = param_1;
  return;
}

extern undefined4 g_026cc1e8;
// @baa 0x00e84e40
undefined4 sub_00e84e40(void)
{
  return g_026cc1e8;
}

extern undefined4 g_026cc1ec;
// @baa 0x00e84e50
undefined4 sub_00e84e50(void)
{
  return g_026cc1ec;
}

struct C_00e84e60 { int a, b, c; C_00e84e60(); };

// @baa 0x00e84e60
C_00e84e60::C_00e84e60() : a(0), b(0), c(0) {}

struct C_00e84e70 { int sub_00e84e70(void); };

// @baa 0x00e84e70
int C_00e84e70::sub_00e84e70(void) { return *(int*)((char*)this + 4); }

struct C_00e84e80 { int sub_00e84e80(void); };

// @baa 0x00e84e80
int C_00e84e80::sub_00e84e80(void) { return *(int*)((char*)this + 0); }

struct C_00e84f00 { int sub_00e84f00(void); };

// @baa 0x00e84f00
int C_00e84f00::sub_00e84f00(void) { return *(int*)((char*)this + 0); }

struct C_00e84f30 {
    undefined4 * sub_00e84f30(byte);
};

// @baa 0x00e84f30
undefined4 * C_00e84f30::sub_00e84f30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f16174);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_00e851c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00e851c0(INT Index);
};

// @baa 0x00e851c0
DWORD* S_00e851c0::sub_00e851c0(INT Index)
{
    return &Items(Index);
}

struct C_00e85270 {
    int sub_00e85270(int);
};

// @baa 0x00e85270
int C_00e85270::sub_00e85270(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00e85280
void __stdcall sub_00e85280(int a0, int a1) {  }

struct C_00e85420 { void* Data; int Num; int Max; void sub_00e85420(); };

// @baa 0x00e85420
void C_00e85420::sub_00e85420() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00e854c0;
// @baa 0x00e854c0
template INT TArray<T_00e854c0*>::RemoveItem(T_00e854c0* const&);

int __stdcall sub_00e855a0(int, int, int, int, int);
// @baa 0x00e85a50
void sub_00e85a50(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_00e855a0(param_1,0,param_3,param_2,0);
  return;
}

struct TConstSetBitIterator_01031840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031840& operator++();
};

TConstSetBitIterator_01031840::TConstSetBitIterator_01031840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031840
TConstSetBitIterator_01031840& TConstSetBitIterator_01031840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01031890 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01031890(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01031890& operator++();
};

TConstSetBitIterator_01031890::TConstSetBitIterator_01031890(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01031890
TConstSetBitIterator_01031890& TConstSetBitIterator_01031890::operator++()
{
    It.Advance();
    return *this;
}

struct C_01038060 {
    void sub_01038060();
    int sub_010351f0(int, int);
};

// @baa 0x01038060
void C_01038060::sub_01038060(void)
{
    int param_1 = (int)this;
  ((C_01038060 *)(this))->sub_010351f0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_01038190 {
    undefined4 sub_01038190(undefined4, undefined4);
    int sub_010352b0(int, int);
};

// @baa 0x01038190
undefined4 C_01038190::sub_01038190(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01038190 *)(this))->sub_010352b0(param_2, param_3);
  return param_1;
}

struct C_010381b0 {
    int sub_010381b0(undefined4, undefined4);
    int sub_01035310(int, int);
};

// @baa 0x010381b0
int C_010381b0::sub_010381b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_010381b0 *)(this))->sub_01035310(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_010381d0 {
    int sub_010381d0(undefined4, undefined4);
    int sub_01035390(int, int);
};

// @baa 0x010381d0
int C_010381d0::sub_010381d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_010381d0 *)(this))->sub_01035390(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_010381f0 {
    int sub_010381f0(undefined4, undefined4);
    int sub_01035410(int, int);
};

// @baa 0x010381f0
int C_010381f0::sub_010381f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_010381f0 *)(this))->sub_01035410(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01038210 {
    int sub_01038210(undefined4, undefined4);
    int sub_01035490(int, int);
};

// @baa 0x01038210
int C_01038210::sub_01038210(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01038210 *)(this))->sub_01035490(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01038230 {
    int sub_01038230(undefined4, undefined4);
    int sub_01035510(int, int);
};

// @baa 0x01038230
int C_01038230::sub_01038230(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01038230 *)(this))->sub_01035510(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01038250 {
    int sub_01038250(undefined4, undefined4);
    int sub_01035590(int, int);
};

// @baa 0x01038250
int C_01038250::sub_01038250(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01038250 *)(this))->sub_01035590(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01038270 {
    int sub_01038270(undefined4, undefined4);
    int sub_01035610(int, int);
};

// @baa 0x01038270
int C_01038270::sub_01038270(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01038270 *)(this))->sub_01035610(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01038290 {
    int sub_01038290(undefined4, undefined4);
    int sub_01035690(int, int);
};

// @baa 0x01038290
int C_01038290::sub_01038290(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01038290 *)(this))->sub_01035690(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_010382b0 {
    int sub_010382b0(undefined4, undefined4);
    int sub_01035710(int, int);
};

// @baa 0x010382b0
int C_010382b0::sub_010382b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_010382b0 *)(this))->sub_01035710(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_010382d0 {
    int sub_010382d0(undefined4, undefined4);
    int sub_01035790(int, int);
};

// @baa 0x010382d0
int C_010382d0::sub_010382d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_010382d0 *)(this))->sub_01035790(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_010382f0 {
    int sub_010382f0(undefined4, undefined4);
    int sub_01035810(int, int);
};

// @baa 0x010382f0
int C_010382f0::sub_010382f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_010382f0 *)(this))->sub_01035810(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01038310 {
    int sub_01038310(undefined4, undefined4);
    int sub_01035890(int, int);
};

// @baa 0x01038310
int C_01038310::sub_01038310(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01038310 *)(this))->sub_01035890(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01038330 {
    int sub_01038330(undefined4, undefined4);
    int sub_01035910(int, int);
};

// @baa 0x01038330
int C_01038330::sub_01038330(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01038330 *)(this))->sub_01035910(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01038350 {
    undefined4 sub_01038350(undefined4, undefined4);
    int sub_01035990(int, int);
};

// @baa 0x01038350
undefined4 C_01038350::sub_01038350(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01038350 *)(this))->sub_01035990(param_2, param_3);
  return param_1;
}

struct C_01038370 {
    int sub_01038370(undefined4, undefined4);
    int sub_01035a00(int, int);
};

// @baa 0x01038370
int C_01038370::sub_01038370(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01038370 *)(this))->sub_01035a00(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01038390 {
    int sub_01038390(undefined4, undefined4);
    int sub_01035a70(int, int);
};

// @baa 0x01038390
int C_01038390::sub_01038390(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01038390 *)(this))->sub_01035a70(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_010383b0 {
    int sub_010383b0();
};

int sub_01028f60(void);
// @baa 0x010383b0
int C_010383b0::sub_010383b0(void)
{
    int param_1 = (int)this;

  sub_01028f60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010383d0 {
    int sub_010383d0();
};

int sub_01029010(void);
// @baa 0x010383d0
int C_010383d0::sub_010383d0(void)
{
    int param_1 = (int)this;

  sub_01029010();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010383f0 {
    int sub_010383f0();
};

int sub_01029070(void);
// @baa 0x010383f0
int C_010383f0::sub_010383f0(void)
{
    int param_1 = (int)this;

  sub_01029070();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01038410 {
    int sub_01038410();
};

int sub_010290d0(void);
// @baa 0x01038410
int C_01038410::sub_01038410(void)
{
    int param_1 = (int)this;

  sub_010290d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct TConstSetBitIterator_01038550 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038550(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038550& operator++();
};

TConstSetBitIterator_01038550::TConstSetBitIterator_01038550(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038550
TConstSetBitIterator_01038550& TConstSetBitIterator_01038550::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010385a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010385a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010385a0& operator++();
};

TConstSetBitIterator_010385a0::TConstSetBitIterator_010385a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010385a0
TConstSetBitIterator_010385a0& TConstSetBitIterator_010385a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010385f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010385f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010385f0& operator++();
};

TConstSetBitIterator_010385f0::TConstSetBitIterator_010385f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010385f0
TConstSetBitIterator_010385f0& TConstSetBitIterator_010385f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01038640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038640& operator++();
};

TConstSetBitIterator_01038640::TConstSetBitIterator_01038640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038640
TConstSetBitIterator_01038640& TConstSetBitIterator_01038640::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01038690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038690& operator++();
};

TConstSetBitIterator_01038690::TConstSetBitIterator_01038690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038690
TConstSetBitIterator_01038690& TConstSetBitIterator_01038690::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010386e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010386e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010386e0& operator++();
};

TConstSetBitIterator_010386e0::TConstSetBitIterator_010386e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010386e0
TConstSetBitIterator_010386e0& TConstSetBitIterator_010386e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01038730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038730& operator++();
};

TConstSetBitIterator_01038730::TConstSetBitIterator_01038730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038730
TConstSetBitIterator_01038730& TConstSetBitIterator_01038730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01038780 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038780(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038780& operator++();
};

TConstSetBitIterator_01038780::TConstSetBitIterator_01038780(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038780
TConstSetBitIterator_01038780& TConstSetBitIterator_01038780::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010387d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010387d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010387d0& operator++();
};

TConstSetBitIterator_010387d0::TConstSetBitIterator_010387d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010387d0
TConstSetBitIterator_010387d0& TConstSetBitIterator_010387d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01038820 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038820(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038820& operator++();
};

TConstSetBitIterator_01038820::TConstSetBitIterator_01038820(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038820
TConstSetBitIterator_01038820& TConstSetBitIterator_01038820::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01038870 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038870(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038870& operator++();
};

TConstSetBitIterator_01038870::TConstSetBitIterator_01038870(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038870
TConstSetBitIterator_01038870& TConstSetBitIterator_01038870::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010388c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010388c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010388c0& operator++();
};

TConstSetBitIterator_010388c0::TConstSetBitIterator_010388c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010388c0
TConstSetBitIterator_010388c0& TConstSetBitIterator_010388c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01038910 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038910(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038910& operator++();
};

TConstSetBitIterator_01038910::TConstSetBitIterator_01038910(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038910
TConstSetBitIterator_01038910& TConstSetBitIterator_01038910::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01038960 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038960(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038960& operator++();
};

TConstSetBitIterator_01038960::TConstSetBitIterator_01038960(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038960
TConstSetBitIterator_01038960& TConstSetBitIterator_01038960::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010389b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010389b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010389b0& operator++();
};

TConstSetBitIterator_010389b0::TConstSetBitIterator_010389b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010389b0
TConstSetBitIterator_010389b0& TConstSetBitIterator_010389b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01038a00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038a00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038a00& operator++();
};

TConstSetBitIterator_01038a00::TConstSetBitIterator_01038a00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038a00
TConstSetBitIterator_01038a00& TConstSetBitIterator_01038a00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01038a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038a50& operator++();
};

TConstSetBitIterator_01038a50::TConstSetBitIterator_01038a50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038a50
TConstSetBitIterator_01038a50& TConstSetBitIterator_01038a50::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_01038aa0 {
    int sub_01036530(int, int);
};

// @baa 0x01038aa0
int UTexture2D::sub_01038aa0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01038aa0 *)(this))->sub_01036530(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01038ac0 {
    int sub_010365b0(int, int);
};

// @baa 0x01038ac0
int UTexture2D::sub_01038ac0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01038ac0 *)(this))->sub_010365b0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01038ae0 {
    int sub_01036630(int, int);
};

// @baa 0x01038ae0
int UTexture2D::sub_01038ae0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01038ae0 *)(this))->sub_01036630(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01038b00 {
    int sub_010366b0(int, int);
};

// @baa 0x01038b00
int UTexture2D::sub_01038b00(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01038b00 *)(this))->sub_010366b0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01038b20 {
    int sub_01036730(int, int);
};

// @baa 0x01038b20
int UTexture2D::sub_01038b20(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01038b20 *)(this))->sub_01036730(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

void sub_010367b0();
// @baa 0x01038b40
void sub_01038b40(void) { sub_010367b0(); }

void sub_01036ac0();
// @baa 0x01038b80
void sub_01038b80(void) { sub_01036ac0(); }

int sub_01024750(void);
// @baa 0x01038c80
int UTexture2D::sub_01038c80(void)
{
    int param_1 = (int)this;

  sub_01024750();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01033050(void);
// @baa 0x01038ca0
undefined4 UTexture2D::sub_01038ca0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01033050();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_01036c00();
// @baa 0x01038cc0
void sub_01038cc0(void) { sub_01036c00(); }

void sub_01037820();
// @baa 0x01038cd0
void sub_01038cd0(void) { sub_01037820(); }

void sub_01037890();
// @baa 0x01038ce0
void sub_01038ce0(void) { sub_01037890(); }

void sub_01037900();
// @baa 0x01038cf0
void sub_01038cf0(void) { sub_01037900(); }

void sub_01037b20();
// @baa 0x01038d70
void sub_01038d70(void) { sub_01037b20(); }

struct TConstSetBitIterator_01038e00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01038e00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01038e00& operator++();
};

TConstSetBitIterator_01038e00::TConstSetBitIterator_01038e00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01038e00
TConstSetBitIterator_01038e00& TConstSetBitIterator_01038e00::operator++()
{
    It.Advance();
    return *this;
}

struct C_01038e50 {
    int sub_01038e50(undefined4, undefined4, undefined4);
    int sub_01034fb0(int, int);
};

// @baa 0x01038e50
int C_01038e50::sub_01038e50(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_01038e50 *)(this))->sub_01034fb0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01038e80 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_01034ea0(int, int);
};

struct C_01038e80 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01038e80* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01038e80(void);
};

// @baa 0x01038e80
void C_01038e80::sub_01038e80(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_01034ea0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_010391e0 {
    int sub_010391e0(undefined4, undefined4, undefined4);
    int sub_01035190(int, int);
};

// @baa 0x010391e0
int C_010391e0::sub_010391e0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_010391e0 *)(this))->sub_01035190(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01039210 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_010350d0(int, int);
};

struct C_01039210 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01039210* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01039210(void);
};

// @baa 0x01039210
void C_01039210::sub_01039210(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010350d0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct Block_01039230 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_007f2450(int, int);
};

struct C_01039230 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01039230* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01039230(void);
};

// @baa 0x01039230
void C_01039230::sub_01039230(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_007f2450(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_010392f0 {
    int sub_010392f0(undefined4, undefined4, undefined4);
    int sub_010352b0(int, int);
};

// @baa 0x010392f0
int C_010392f0::sub_010392f0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_010392f0 *)(this))->sub_010352b0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01039320 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_010351f0(int, int);
};

struct C_01039320 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01039320* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01039320(void);
};

// @baa 0x01039320
void C_01039320::sub_01039320(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010351f0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_01039340 {
    int sub_01039340();
};

// @baa 0x01039340
int C_01039340::sub_01039340(void)
{
    int param_1 = (int)this;

  sub_01028f60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01039360 {
    int sub_01039360();
};

// @baa 0x01039360
int C_01039360::sub_01039360(void)
{
    int param_1 = (int)this;

  sub_01029010();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01039380 {
    int sub_01039380();
};

// @baa 0x01039380
int C_01039380::sub_01039380(void)
{
    int param_1 = (int)this;

  sub_01029070();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010393a0 {
    int sub_010393a0();
};

// @baa 0x010393a0
int C_010393a0::sub_010393a0(void)
{
    int param_1 = (int)this;

  sub_010290d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0103d890 { void sub_010393c0(int); C_0103d890 *sub_0103d890(int); };

// @baa 0x0103d890
C_0103d890 *C_0103d890::sub_0103d890(int a) { sub_010393c0(a); return this; }

struct C_0103e530 { void sub_010393c0(int); C_0103e530 *sub_0103e530(int); };

// @baa 0x0103e530
C_0103e530 *C_0103e530::sub_0103e530(int a) { sub_010393c0(a); return this; }

struct C_01042b80 { void sub_010393c0(int); C_01042b80 *sub_01042b80(int); };

// @baa 0x01042b80
C_01042b80 *C_01042b80::sub_01042b80(int a) { sub_010393c0(a); return this; }
