// Engine_0b10000.cpp: 47 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_00b101e0(undefined4);
    int sub_0073f030(int);
};

int sub_00716170(...);
int sub_00a49bb0(...);
// @baa 0x00b101e0
undefined4 C::sub_00b101e0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0xb8);
  return uVar1;
}

struct A_00b10220 { virtual void sub_00b12510(); char pad[16]; };

struct B_00b10220 { virtual void sub_00b12510(); };

struct C_00b10220 : A_00b10220, B_00b10220 { virtual void sub_00b12510(); C_00b10220(); };

C_00b10220::C_00b10220() {}

// @baa 0x00b10220
void C_00b10220::sub_00b12510() {}

struct C_view {
    int sub_00b037b0(int, int, int);
};

// @baa 0x00b115e0
void ULensFlare::sub_00b115e0(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x68) != param_2) {
    *(int *)(param_1 + 0x68) = param_2;
    ((C_view *)(this))->sub_00b037b0(0, param_2, 0xc);
  }
  return;
}

struct C_view_00b11670 {
    int sub_00b03880(int, int, int);
};

// @baa 0x00b11670
void ULensFlare::sub_00b11670(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x38) != param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    ((C_view_00b11670 *)(this))->sub_00b03880(0, param_2, 4);
  }
  return;
}

struct C_00b11690 {
    int sub_00b11690();
};

// @baa 0x00b11690
int C_00b11690::sub_00b11690(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00b116a0 {
    int sub_00b116a0();
};

// @baa 0x00b116a0
int C_00b116a0::sub_00b116a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_view_00b116b0 {
    int sub_00b0edb0(int, int);
};

// @baa 0x00b116b0
int UTexture2D::sub_00b116b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00b116b0 *)(this))->sub_00b0edb0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

int sub_00b0fe90(void);
extern undefined4 g_01fe2b54;
extern undefined * g_01fe2b5c;
// @baa 0x00b11740
undefined4 * UTexture2D::sub_00b11740(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00b0fe90();
  *param_1 = (undefined4)(&g_01fe2b5c);
  param_1[5] = (undefined4)(&g_01fe2b54);
  return param_1;
}

extern undefined4 g_01fe2b84;
extern undefined * g_01fe2b8c;
// @baa 0x00b11760
undefined4 * UTexture2D::sub_00b11760(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00b0fe90();
  *param_1 = (undefined4)(&g_01fe2b8c);
  param_1[5] = (undefined4)(&g_01fe2b84);
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

struct TConstSetBitIterator_00b11a20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b11a20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b11a20& operator++();
};

TConstSetBitIterator_00b11a20::TConstSetBitIterator_00b11a20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b11a20
TConstSetBitIterator_00b11a20& TConstSetBitIterator_00b11a20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b11a40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b11a40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b11a40& operator++();
};

TConstSetBitIterator_00b11a40::TConstSetBitIterator_00b11a40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b11a40
TConstSetBitIterator_00b11a40& TConstSetBitIterator_00b11a40::operator++()
{
    It.Advance();
    return *this;
}

struct C_00b11ca0 {
    int sub_00b11ca0(int);
    int sub_00b0f0d0(int, int);
};

// @baa 0x00b11ca0
int C_00b11ca0::sub_00b11ca0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00b11ca0 *)(this))->sub_00b0f0d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x4c + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_00b11e70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b11e70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b11e70& operator++();
};

TConstSetBitIterator_00b11e70::TConstSetBitIterator_00b11e70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b11e70
TConstSetBitIterator_00b11e70& TConstSetBitIterator_00b11e70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b11e90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b11e90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b11e90& operator++();
};

TConstSetBitIterator_00b11e90::TConstSetBitIterator_00b11e90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b11e90
TConstSetBitIterator_00b11e90& TConstSetBitIterator_00b11e90::operator++()
{
    It.Advance();
    return *this;
}

struct C_00b12150 {
    undefined4 sub_00b12150(byte);
};

int sub_0053dfa0(...);
int sub_00b0fca0(void);
// @baa 0x00b12150
undefined4 C_00b12150::sub_00b12150(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b0fca0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b12460 {
    undefined4 sub_00b12460(byte);
};

int sub_00b100a0(void);
// @baa 0x00b12460
undefined4 C_00b12460::sub_00b12460(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b100a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b12510 {
    undefined4 sub_00b12510(byte);
};

int sub_00b102f0(void);
// @baa 0x00b12510
undefined4 C_00b12510::sub_00b12510(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b102f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern "C" int __cdecl sub_0053df40(int Size, int Alignment);
struct FGameplayObject
{
    FGameplayObject * sub_00b103a0();
};

// @baa 0x00b12590
FGameplayObject * sub_00b12590()
{
    FGameplayObject * pObject = (FGameplayObject *)sub_0053df40(0x60, 8);
    if (pObject)
        return pObject->sub_00b103a0();
    return 0;
}

struct FGameplayObject_00b13ad0
{
    FGameplayObject_00b13ad0 * sub_00b112a0();
};

// @baa 0x00b13ad0
FGameplayObject_00b13ad0 * sub_00b13ad0()
{
    FGameplayObject_00b13ad0 * pObject = (FGameplayObject_00b13ad0 *)sub_0053df40(0x60, 8);
    if (pObject)
        return pObject->sub_00b112a0();
    return 0;
}

struct FGameplayObject_00b13bb0
{
    FGameplayObject_00b13bb0 * sub_00b113a0();
};

// @baa 0x00b13bb0
FGameplayObject_00b13bb0 * sub_00b13bb0()
{
    FGameplayObject_00b13bb0 * pObject = (FGameplayObject_00b13bb0 *)sub_0053df40(0x60, 8);
    if (pObject)
        return pObject->sub_00b113a0();
    return 0;
}

struct C_view_00b13c30 {
    int sub_00b0edb0(int, int);
};

// @baa 0x00b13c30
int UTexture2D::sub_00b13c30(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00b13c30 *)(this))->sub_00b0edb0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct TConstSetBitIterator_00b13ff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b13ff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b13ff0& operator++();
};

TConstSetBitIterator_00b13ff0::TConstSetBitIterator_00b13ff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b13ff0
TConstSetBitIterator_00b13ff0& TConstSetBitIterator_00b13ff0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00b14010 {
    void sub_00b14010();
    int sub_00b118b0(int);
};

// @baa 0x00b14010
void C_00b14010::sub_00b14010(void)
{
    int param_1 = (int)this;
  ((C_00b14010 *)((*(char **)((char *)this + 0x10))))->sub_00b118b0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_00b14030 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b14030(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b14030& operator++();
};

TConstSetBitIterator_00b14030::TConstSetBitIterator_00b14030(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b14030
TConstSetBitIterator_00b14030& TConstSetBitIterator_00b14030::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b14740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b14740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b14740& operator++();
};

TConstSetBitIterator_00b14740::TConstSetBitIterator_00b14740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b14740
TConstSetBitIterator_00b14740& TConstSetBitIterator_00b14740::operator++()
{
    It.Advance();
    return *this;
}

struct C_00b14790 {
    undefined4 sub_00b14790(byte);
};

int sub_00ae5e50(void);
// @baa 0x00b14790
undefined4 C_00b14790::sub_00b14790(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ae5e50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b147b0 {
    int sub_00b147b0(int);
    int sub_00b0edb0(int, int);
};

// @baa 0x00b147b0
int C_00b147b0::sub_00b147b0(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  ((C_00b147b0 *)(((char *)this + 0x14)))->sub_00b0edb0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *(int *)(param_1 + 0x14) + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

void sub_00b13f70();
// @baa 0x00b147f0
void sub_00b147f0(void) { sub_00b13f70(); }

struct S_00b14800 { int sub_00b14080(); };

struct C_00b14800 { int a; C_00b14800(S_00b14800 *); };

// @baa 0x00b14800
C_00b14800::C_00b14800(S_00b14800 *s) : a(s->sub_00b14080()) {}

struct S_00b14820 { int sub_00b140e0(); };

struct C_00b14820 { int a; C_00b14820(S_00b14820 *); };

// @baa 0x00b14820
C_00b14820::C_00b14820(S_00b14820 *s) : a(s->sub_00b140e0()) {}

struct S_00b14840 { int sub_00b14140(); };

struct C_00b14840 { int a; C_00b14840(S_00b14840 *); };

// @baa 0x00b14840
C_00b14840::C_00b14840(S_00b14840 *s) : a(s->sub_00b14140()) {}

struct S_00b14860 { int sub_00b141a0(); };

struct C_00b14860 { int a; C_00b14860(S_00b14860 *); };

// @baa 0x00b14860
C_00b14860::C_00b14860(S_00b14860 *s) : a(s->sub_00b141a0()) {}

struct S_00b14880 { int sub_00b14200(); };

struct C_00b14880 { int a; C_00b14880(S_00b14880 *); };

// @baa 0x00b14880
C_00b14880::C_00b14880(S_00b14880 *s) : a(s->sub_00b14200()) {}

struct S_00b148a0 { int sub_00b14260(); };

struct C_00b148a0 { int a; C_00b148a0(S_00b148a0 *); };

// @baa 0x00b148a0
C_00b148a0::C_00b148a0(S_00b148a0 *s) : a(s->sub_00b14260()) {}

struct S_00b148c0 { int sub_00b142c0(); };

struct C_00b148c0 { int a; C_00b148c0(S_00b148c0 *); };

// @baa 0x00b148c0
C_00b148c0::C_00b148c0(S_00b148c0 *s) : a(s->sub_00b142c0()) {}

struct S_00b148e0 { int sub_00b14320(); };

struct C_00b148e0 { int a; C_00b148e0(S_00b148e0 *); };

// @baa 0x00b148e0
C_00b148e0::C_00b148e0(S_00b148e0 *s) : a(s->sub_00b14320()) {}

struct S_00b14900 { int sub_00b14380(); };

struct C_00b14900 { int a; C_00b14900(S_00b14900 *); };

// @baa 0x00b14900
C_00b14900::C_00b14900(S_00b14900 *s) : a(s->sub_00b14380()) {}

struct S_00b14920 { int sub_00b143e0(); };

struct C_00b14920 { int a; C_00b14920(S_00b14920 *); };

// @baa 0x00b14920
C_00b14920::C_00b14920(S_00b14920 *s) : a(s->sub_00b143e0()) {}

struct S_00b14940 { int sub_00b14440(); };

struct C_00b14940 { int a; C_00b14940(S_00b14940 *); };

// @baa 0x00b14940
C_00b14940::C_00b14940(S_00b14940 *s) : a(s->sub_00b14440()) {}

struct S_00b14960 { int sub_00b144a0(); };

struct C_00b14960 { int a; C_00b14960(S_00b14960 *); };

// @baa 0x00b14960
C_00b14960::C_00b14960(S_00b14960 *s) : a(s->sub_00b144a0()) {}

struct S_00b14980 { int sub_00b14500(); };

struct C_00b14980 { int a; C_00b14980(S_00b14980 *); };

// @baa 0x00b14980
C_00b14980::C_00b14980(S_00b14980 *s) : a(s->sub_00b14500()) {}

struct S_00b149a0 { int sub_00b14560(); };

struct C_00b149a0 { int a; C_00b149a0(S_00b149a0 *); };

// @baa 0x00b149a0
C_00b149a0::C_00b149a0(S_00b149a0 *s) : a(s->sub_00b14560()) {}

struct S_00b149c0 { int sub_00b145c0(); };

struct C_00b149c0 { int a; C_00b149c0(S_00b149c0 *); };

// @baa 0x00b149c0
C_00b149c0::C_00b149c0(S_00b149c0 *s) : a(s->sub_00b145c0()) {}

struct S_00b149e0 { int sub_00b14620(); };

struct C_00b149e0 { int a; C_00b149e0(S_00b149e0 *); };

// @baa 0x00b149e0
C_00b149e0::C_00b149e0(S_00b149e0 *s) : a(s->sub_00b14620()) {}

struct TConstSetBitIterator_00b14a00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b14a00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b14a00& operator++();
};

TConstSetBitIterator_00b14a00::TConstSetBitIterator_00b14a00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b14a00
TConstSetBitIterator_00b14a00& TConstSetBitIterator_00b14a00::operator++()
{
    It.Advance();
    return *this;
}

struct S_00b14a20 { int sub_00b14680(); };

struct C_00b14a20 { int a; C_00b14a20(S_00b14a20 *); };

// @baa 0x00b14a20
C_00b14a20::C_00b14a20(S_00b14a20 *s) : a(s->sub_00b14680()) {}

struct TConstSetBitIterator_00b14b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b14b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b14b90& operator++();
};

TConstSetBitIterator_00b14b90::TConstSetBitIterator_00b14b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b14b90
TConstSetBitIterator_00b14b90& TConstSetBitIterator_00b14b90::operator++()
{
    It.Advance();
    return *this;
}
