// Core_05d0000.cpp (part 1 of 2): 45 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x005d1cc0
int UObject::sub_005d1cc0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_005d1d60 : Inner {
    int num;
    int max;
    void sub_005cc3f0(int* p);
    Outer_005d1d60(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x005d1d60
Outer_005d1d60::Outer_005d1d60(int* p)
{
    num = 0;
    max = 0;
    sub_005cc3f0(p);
}

// @baa 0x005d1e00
int UObject::sub_005d1e00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x005d1e20
int UObject::sub_005d1e20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005d1f00
int UObject::sub_005d1f00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x005d1f10
int UObject::sub_005d1f10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

// @baa 0x005d1f20
int UObject::sub_005d1f20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005d1f40
int UObject::sub_005d1f40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

extern TArray<int> g_026a1ca4;
struct C {
    int sub_005d1fb0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x005d1fb0
int C::sub_005d1fb0()
{
    return g_026a1ca4(Index);
}

// @baa 0x005d2010
int UObject::sub_005d2010(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005d2030
int UObject::sub_005d2030(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x005d2150
int UObject::sub_005d2150(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x005d2250
int UObject::sub_005d2250(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

// @baa 0x005d2260
int UObject::sub_005d2260(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x005d22f0
int UObject::sub_005d22f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x005d23e0
int UObject::sub_005d23e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

int sub_0053dfa0(...);
int sub_005cbd70(void);
// @baa 0x005d2400
undefined4 UObject::sub_005d2400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005cbd70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_005d2480 { void* Data; int Num; int Max; void sub_005d2480(); };

// @baa 0x005d2480
void C_005d2480::sub_005d2480() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_005d24e0 { void sub_005d1a10(); void sub_005d24e0(); };

// @baa 0x005d24e0
void C_005d24e0::sub_005d24e0() { sub_005d1a10(); }

struct C_005d45f0 { C_005d45f0* sub_005d45f0(void); };

// @baa 0x005d45f0
C_005d45f0* C_005d45f0::sub_005d45f0(void) { return this; }

struct C_005d4700 {
    int sub_005d4700();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x005d4700
int C_005d4700::sub_005d4700()
{
    return g_026a1ca4(Index);
}

struct C_005d4760 {
    int sub_005d4760();
};

// @baa 0x005d4760
int C_005d4760::sub_005d4760(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005d4780 {
    int sub_005d4780();
};

// @baa 0x005d4780
int C_005d4780::sub_005d4780(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_005d4790 {
    int sub_005d4790();
};

// @baa 0x005d4790
int C_005d4790::sub_005d4790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x18;
}

struct C_005d47a0 {
    int sub_005d47a0();
};

// @baa 0x005d47a0
int C_005d47a0::sub_005d47a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_005d4930 {
    int sub_005d4930();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x005d4930
int C_005d4930::sub_005d4930()
{
    return g_026a1ca4(Index);
}

struct C_005d4990 {
    int sub_005d4990();
};

// @baa 0x005d4990
int C_005d4990::sub_005d4990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_005d49a0 {
    int sub_005d49a0();
};

// @baa 0x005d49a0
int C_005d49a0::sub_005d49a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005d49b0 {
    int sub_005d49b0();
};

// @baa 0x005d49b0
int C_005d49b0::sub_005d49b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005d49d0 {
    int sub_005d49d0();
};

// @baa 0x005d49d0
int C_005d49d0::sub_005d49d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005d49e0 {
    int sub_005d49e0();
};

// @baa 0x005d49e0
int C_005d49e0::sub_005d49e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_005d49f0 {
    int sub_005d49f0(int);
    int sub_005d2090(int, int);
};

// @baa 0x005d49f0
int C_005d49f0::sub_005d49f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_005d49f0 *)(this))->sub_005d2090((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

struct C_005d4a30 {
    int sub_005d4a30(int);
    int sub_005d21e0(int, int);
};

// @baa 0x005d4a30
int C_005d4a30::sub_005d4a30(int param_2)
{
    int * param_1 = (int *)this;
  ((C_005d4a30 *)(this))->sub_005d21e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view {
    int sub_005a9720(int, int);
};

// @baa 0x005d4b50
int UObject::sub_005d4b50(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_005a9720((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_005d4b80 {
    int sub_00573920(int, int);
};

// @baa 0x005d4b80
int UObject::sub_005d4b80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005d4b80 *)(this))->sub_00573920((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_005d4bb0 {
    int sub_005d2270(int, int);
};

// @baa 0x005d4bb0
int UObject::sub_005d4bb0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005d4bb0 *)(this))->sub_005d2270((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_005d4cf0 {
    int sub_005d4cf0();
};

// @baa 0x005d4cf0
int C_005d4cf0::sub_005d4cf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x20 + *(int *)*param_1;
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

struct TConstSetBitIterator_005d51e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d51e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d51e0& operator++();
};

TConstSetBitIterator_005d51e0::TConstSetBitIterator_005d51e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d51e0
TConstSetBitIterator_005d51e0& TConstSetBitIterator_005d51e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d5230 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d5230(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d5230& operator++();
};

TConstSetBitIterator_005d5230::TConstSetBitIterator_005d5230(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d5230
TConstSetBitIterator_005d5230& TConstSetBitIterator_005d5230::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d5280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d5280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d5280& operator++();
};

TConstSetBitIterator_005d5280::TConstSetBitIterator_005d5280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d5280
TConstSetBitIterator_005d5280& TConstSetBitIterator_005d5280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d52d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d52d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d52d0& operator++();
};

TConstSetBitIterator_005d52d0::TConstSetBitIterator_005d52d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d52d0
TConstSetBitIterator_005d52d0& TConstSetBitIterator_005d52d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d5320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d5320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d5320& operator++();
};

TConstSetBitIterator_005d5320::TConstSetBitIterator_005d5320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d5320
TConstSetBitIterator_005d5320& TConstSetBitIterator_005d5320::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d5370 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d5370(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d5370& operator++();
};

TConstSetBitIterator_005d5370::TConstSetBitIterator_005d5370(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d5370
TConstSetBitIterator_005d5370& TConstSetBitIterator_005d5370::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d53c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d53c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d53c0& operator++();
};

TConstSetBitIterator_005d53c0::TConstSetBitIterator_005d53c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d53c0
TConstSetBitIterator_005d53c0& TConstSetBitIterator_005d53c0::operator++()
{
    It.Advance();
    return *this;
}

int sub_005c7a70(...);
int sub_005d30b0(void);
// @baa 0x005d56f0
undefined4 UObject::sub_005d56f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005d30b0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x30);
  }
  return param_1;
}
