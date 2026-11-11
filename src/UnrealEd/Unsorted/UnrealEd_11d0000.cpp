// UnrealEd_11d0000.cpp: 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_011d1370(int);
};

int sub_0053df70(...);
// @baa 0x011d1370
void C::sub_011d1370(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct T_011d13b0;
// @baa 0x011d13b0
template INT TArray<T_011d13b0*>::RemoveItem(T_011d13b0* const&);

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_011d1490 { void* Data; int Num; int Max; void sub_011d1490(); };

// @baa 0x011d1490
void C_011d1490::sub_011d1490() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_011d14f0 {
    void sub_011d14f0(int);
};

// @baa 0x011d14f0
void C_011d14f0::sub_011d14f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_011d1530 { void* Data; int Num; int Max; void sub_011d1530(); };

// @baa 0x011d1530
void C_011d1530::sub_011d1530() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_011d1650 {
    int sub_011d1650(int);
};

// @baa 0x011d1650
int C_011d1650::sub_011d1650(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x1c;
}

struct C_011d1850 {
    int sub_011d1850(int);
};

// @baa 0x011d1850
int C_011d1850::sub_011d1850(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x1c;
}

struct C_011d1900 {
    int sub_011d1900(int);
};

// @baa 0x011d1900
int C_011d1900::sub_011d1900(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_011d1c60 {
    undefined4 sub_011d1c60(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x011d1c60
undefined4 C_011d1c60::sub_011d1c60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_011d1c60 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011d1eb0 {
    undefined4 * sub_011d1eb0(byte);
};

int sub_011c2f20(void);
extern undefined4 g_021e9974;
// @baa 0x011d1eb0
undefined4 * C_011d1eb0::sub_011d1eb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021e9974);
  sub_011c2f20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011d1ee0 {
    undefined4 sub_011d1ee0(byte);
};

int sub_011c6cc0(void);
// @baa 0x011d1ee0
undefined4 C_011d1ee0::sub_011d1ee0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011c6cc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011d2180 { void sub_011d1f00(); void sub_011d2180(int); };

// @baa 0x011d2180
void C_011d2180::sub_011d2180(int) { sub_011d1f00(); }

struct C_011d2190 {
    undefined4 sub_011d2190(byte);
};

int sub_011cc190(void);
// @baa 0x011d2190
undefined4 C_011d2190::sub_011d2190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011cc190();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011d2970 {
    void sub_011d2970();
};

// @baa 0x011d2970
void C_011d2970::sub_011d2970(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != 0) {
    *(undefined4 *)(param_1 + 0x16c) = 0;
    if (*(int *)(param_1 + 0x164) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x164),0,8);
      *(undefined4 *)(param_1 + 0x164) = uVar1;
    }
  }
  return;
}

struct A_011d2cd0 { virtual void sub_011d6010(); char pad[416]; };

struct B_011d2cd0 { virtual void sub_011d6010(); };

struct C_011d2cd0 : A_011d2cd0, B_011d2cd0 { virtual void sub_011d6010(); C_011d2cd0(); };

C_011d2cd0::C_011d2cd0() {}

// @baa 0x011d2cd0
void C_011d2cd0::sub_011d6010() {}

struct A_011d2ce0 { virtual void sub_011d6010(); char pad[420]; };

struct B_011d2ce0 { virtual void sub_011d6010(); };

struct C_011d2ce0 : A_011d2ce0, B_011d2ce0 { virtual void sub_011d6010(); C_011d2ce0(); };

C_011d2ce0::C_011d2ce0() {}

// @baa 0x011d2ce0
void C_011d2ce0::sub_011d6010() {}

struct C_011d32e0 {
    void sub_011d32e0();
    int sub_011cd910(int);
};

// @baa 0x011d32e0
void C_011d32e0::sub_011d32e0(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_011d32e0 *)(this))->sub_011cd910(*(undefined4 *)(param_1 + 0x1cc));
  *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x170) = uVar1;
  return;
}

struct C_view {
    int sub_01021050(int, int);
};

// @baa 0x011d5d70
void UFracturedStaticMeshComponent::sub_011d5d70(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = *(int *)(param_1 + 4);
  while (8 < iVar1) {
    ((C_view *)(this))->sub_01021050(iVar1 + -1, 1);
    iVar1 = *(int *)(param_1 + 4);
  }
  return;
}

int sub_011d2ba0(void);
// @baa 0x011d6010
undefined4 UFracturedStaticMeshComponent::sub_011d6010(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011d2ba0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011d6030 { void sub_011d2dd0(); void sub_011d6030(int); };

// @baa 0x011d6030
void C_011d6030::sub_011d6030(int) { sub_011d2dd0(); }

struct C_011d61f0 { void sub_011d3300(); void sub_011d61f0(int); };

// @baa 0x011d61f0
void C_011d61f0::sub_011d61f0(int) { sub_011d3300(); }

struct B {
    void sub_011d35b0();
};

struct C_011d62e0 {
    char pad[0x1cc];
    B* f_1cc;
    void sub_011d62e0();
};

// @baa 0x011d62e0
void C_011d62e0::sub_011d62e0()
{
    f_1cc->sub_011d35b0();
}

struct C_011d6620 { void sub_011d37c0(); void sub_011d6620(int); };

// @baa 0x011d6620
void C_011d6620::sub_011d6620(int) { sub_011d37c0(); }

struct C_011d6630 { void sub_011d4d50(int); C_011d6630 *sub_011d6630(int); };

// @baa 0x011d6630
C_011d6630 *C_011d6630::sub_011d6630(int a) { sub_011d4d50(a); return this; }

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

struct TConstSetBitIterator_011d6ae0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011d6ae0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011d6ae0& operator++();
};

TConstSetBitIterator_011d6ae0::TConstSetBitIterator_011d6ae0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011d6ae0
TConstSetBitIterator_011d6ae0& TConstSetBitIterator_011d6ae0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011d6b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011d6b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011d6b90& operator++();
};

TConstSetBitIterator_011d6b90::TConstSetBitIterator_011d6b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011d6b90
TConstSetBitIterator_011d6b90& TConstSetBitIterator_011d6b90::operator++()
{
    It.Advance();
    return *this;
}
